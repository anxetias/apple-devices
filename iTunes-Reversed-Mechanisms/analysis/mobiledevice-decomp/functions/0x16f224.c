// rea decompile_all
// name: ____AMDRemotePairingCreateResolveOperation_block_invoke
// address: 0x16f224
// body: available
// range: 0x16f224-0x16f36f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16f33b to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____AMDRemotePairingCreateResolveOperation_block_invoke(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else if (*(int *)(lVar3 + 0x10) == 0x656b6177) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar1 = _md_log_log;
    if (param_2 == 0) {
      uVar2 = (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x20),"targetUDID");
      uVar4 = 0;
      __os_log_internal(0,uVar1,1,"Successfully woke device with UDID \'%@\'",uVar2);
      pcVar5 = "RESULT_DEVICE_AWAKE";
    }
    else {
      __os_log_internal(0,_md_log_log,0x10,"Failed to wake device via RemotePairing: %@",param_2);
      pcVar5 = "RESULT_ASYNC_ERROR";
      uVar4 = 2;
    }
    _AMDeviceWakeupOperationInvalidate(*(undefined8 *)(param_1 + 0x28));
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,1,"Delivering %s for RemotePairing wakeop %p",pcVar5,
                      *(undefined8 *)(param_1 + 0x28));
    lVar3 = *(long *)(param_1 + 0x28);
    (**(code **)(lVar3 + 0x3a8))(lVar3,uVar4,*(undefined8 *)(lVar3 + 0x3b0));
    _CFRelease(*(undefined8 *)(param_1 + 0x28));
    lVar3 = *(long *)(param_1 + 0x28);
  }
  _CFRelease(lVar3);
  return;
}

