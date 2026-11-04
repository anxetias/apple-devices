// rea decompile_all
// name: __AMDRemotePairingCopyConnectableDeviceValueWithError
// address: 0x16eda6
// body: available
// range: 0x16eda6-0x16ef9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16eed7 to 0x60ac00 /usr/lib/libobjc.A.dylib::_objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMDRemotePairingCopyConnectableDeviceValueWithError
               (long param_1,undefined8 param_2,long param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  bool bVar6;
  
  iVar1 = _AMDeviceIsValid();
  if (iVar1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Device \'%@\' is no longer valid; cannot copy value.",
                      *(undefined8 *)(param_1 + 0x20));
    uVar2 = 0xe8000084;
  }
  else {
    lVar4 = *(long *)(param_1 + 0xf8);
    if (lVar4 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar5 = "Invalid RemotePairing handle.";
    }
    else {
      lVar3 = (*_getRPDeviceKeyValueStoreClass_4403)();
      if (lVar3 != 0) {
        lVar4 = (*(code *)PTR__objc_msgSend_00441098)(lVar4,"deviceKVS");
        if (lVar4 != 0) {
          if (param_3 == 0) {
            lVar4 = (*(code *)PTR__objc_msgSend_00441098)
                              (lVar4,"getKeyValuePairsWithDomain:",param_2);
          }
          else {
            lVar4 = (*(code *)PTR__objc_msgSend_00441098)
                              (lVar4,"getValueWithDomain:key:",param_2,param_3);
          }
          bVar6 = lVar4 == 0;
          uVar2 = 0xe8000008;
          if (!bVar6) {
            uVar2 = 0;
          }
          goto LAB_0016eec1;
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Invalid RemotePairing KVS.");
        uVar2 = 0xe8000008;
        goto LAB_0016eebf;
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar5 = "RemotePairing\'s key-value store is not supported on this platform.";
    }
    __os_log_internal(0,_md_log_log,0x10,pcVar5);
    uVar2 = 0xe800000f;
  }
LAB_0016eebf:
  lVar4 = 0;
  bVar6 = true;
LAB_0016eec1:
  if ((param_4 != (undefined4 *)0x0) && (bVar6)) {
    *param_4 = uVar2;
  }
  (*(code *)PTR__objc_retain_004410a8)(lVar4);
  return;
}

