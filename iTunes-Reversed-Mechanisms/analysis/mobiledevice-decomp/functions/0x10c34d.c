// rea decompile_all
// name: ____AMDRemotePairingAsyncListenForPairedDevices_block_invoke_2
// address: 0x10c34d
// body: available
// range: 0x10c34d-0x10c546 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10c4e2 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____AMDRemotePairingAsyncListenForPairedDevices_block_invoke_2(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_sync_enter(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar2 + 0x108) == 0) {
    iVar4 = __AMDRemotePairingTakeTunnelUsageAssertion(*(undefined8 *)(lVar2 + 0xf8),lVar2 + 0x108);
    if (iVar4 != 0) {
      if (iVar4 == -0x17ffffe5) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,
                          "Cannot listen for bluetooth watches on unpaired phone \'%@\'",
                          *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20));
      }
      else {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar3 = _md_log_log;
        uVar5 = _AMDErrorString(iVar4);
        __os_log_internal(0,uVar3,0x10,
                          "Failed to bring up tunnel to search for bluetooth watches: 0x%08x (%s)",
                          iVar4,uVar5);
      }
      _objc_sync_exit(uVar1);
      goto LAB_0010c4c9;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,
                      "Took tunnel usage assertion to search for bluetooth watches.");
  }
  _objc_sync_exit(uVar1);
  iVar4 = __AMDeviceListenForPairedDevices
                    (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  if ((iVar4 != -0x17fffff1) && (iVar4 != 0)) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar3 = _md_log_log;
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20);
    uVar5 = _AMDErrorString(iVar4);
    __os_log_internal(0,uVar3,0x10,"Failed to listen for watches paired with \'%@\': 0x%x (%s)",
                      uVar1,iVar4,uVar5);
  }
LAB_0010c4c9:
  _CFRelease(*(undefined8 *)(param_1 + 0x28));
  _CFRelease(*(undefined8 *)(param_1 + 0x30));
  return;
}

