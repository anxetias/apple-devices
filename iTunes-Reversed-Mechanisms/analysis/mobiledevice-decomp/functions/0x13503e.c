// rea decompile_all
// name: _AMDeviceWiFiPairableCopyRealUniqueDeviceID
// address: 0x13503e
// body: available
// range: 0x13503e-0x13537c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMDeviceWiFiPairableCopyRealUniqueDeviceID(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  cVar1 = _AMDeviceIsWiFiPairableRef();
  if (cVar1 == '\0') {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Device is not wifi-pairable.");
    return 0xe8000007;
  }
  if ((param_1 == 0) || (*(long *)(param_1 + 0xf8) == 0)) {
    lVar5 = _isCFString(*(undefined8 *)(param_1 + 0xd8));
    if (lVar5 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Real UDID is invalid.");
      return 0xe8000015;
    }
    if (param_2 == (undefined8 *)0x0) {
      return 0;
    }
    uVar4 = _CFRetain(*(undefined8 *)(param_1 + 0xd8));
    *param_2 = uVar4;
    return 0;
  }
  if (param_2 == (undefined8 *)0x0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar4 = 0;
    __os_log_internal(0,_md_log_log,0x10,"Invalid argument.");
    uVar6 = 0xe8000007;
  }
  else {
    iVar2 = _AMDeviceIsValid(param_1);
    if (iVar2 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar4 = 0;
      __os_log_internal(0,_md_log_log,0x10,"Device \'%@\' is not valid.",
                        *(undefined8 *)(param_1 + 0x20));
      uVar6 = 0xe8000084;
    }
    else {
      lVar5 = *(long *)(param_1 + 0xf8);
      if (lVar5 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar4 = 0;
        __os_log_internal(0,_md_log_log,0x10,"Invalid RemotePairing handle.");
      }
      else {
        cVar1 = (*(code *)PTR__objc_msgSend_00441098)(lVar5,"respondsToSelector:","resolvedUDID");
        if (cVar1 != '\0') {
          lVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar5,"resolvedUDID");
          if (lVar3 == 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar4 = 0;
            __os_log_internal(0,_md_log_log,0x10,"Resolved UDID is invalid.");
            uVar6 = 0xe8000015;
          }
          else {
            uVar4 = (*(code *)PTR__objc_msgSend_00441098)(lVar5,"resolvedUDID");
            uVar4 = (*(code *)PTR__objc_retain_004410a8)(uVar4);
            *param_2 = uVar4;
            uVar6 = 0;
            uVar4 = 0;
          }
          goto LAB_00135285;
        }
        uVar4 = __AMDRemotePairingCopyFrameworkVersion();
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,
                          "Resolved UDID is not supported in RemotePairing version \'%@\'",uVar4);
      }
      uVar6 = 0xe800000f;
    }
  }
LAB_00135285:
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  return uVar6;
}

