// rea decompile_all
// name: _AMDevicePairWithCallback
// address: 0x135745
// body: available
// range: 0x135745-0x1359c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x135961 to 0x1359c6 _AMDeviceExtendedPairWithOptions (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMDevicePairWithCallback(long param_1,void *param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  char *pcVar7;
  
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = _CFDictionaryGetValue(param_3,&cf_ForceLegacy);
  }
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input.");
    return 0xe8000007;
  }
  lVar4 = _isCFBoolean(uVar3);
  if ((lVar4 == 0) || (cVar1 = _CFBooleanGetValue(uVar3), cVar1 == '\0')) {
    if (*(long *)(param_1 + 0xf8) != 0) {
      uVar2 = __AMDRemotePairingPairWithCallback(param_1,param_2,param_3,param_4);
      if (uVar2 == 0) {
        return 0;
      }
      lVar4 = _AMDCopyErrorText(uVar2);
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar7 = "Pairing failed: %d (%@)";
      goto LAB_00135916;
    }
    cVar1 = __AMDeviceIsBackedByRSD(param_1);
    if (cVar1 != '\0') {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,
                        "Pairing over RemoteXPC is only supported for devices discovered via MobileDevice."
                       );
      return 0xe800000f;
    }
  }
  uVar2 = _AMDeviceExtendedPairWithOptions(param_1,param_3,param_4);
  if (param_2 == (void *)0x0 || uVar2 != 0xe80000ed) {
    return (ulong)uVar2;
  }
  if ((*(int *)(param_1 + 0x30) == 0) &&
     (cVar1 = _AMDeviceIsWiFiPairableRef(param_1), cVar1 == '\0')) {
    return 0xe800000f;
  }
  if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
    __Block_release(*(void **)(param_1 + 0xe0));
  }
  pvVar5 = __Block_copy(param_2);
  *(void **)(param_1 + 0xe0) = pvVar5;
  uVar2 = _AMDeviceCreateSRPConnection(param_1);
  if (uVar2 == 0) {
    uVar6 = _AMDeviceExtendedPairWithOptions(param_1,param_3,param_4);
    return uVar6;
  }
  lVar4 = _AMDCopyErrorText(uVar2);
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  pcVar7 = "AMDeviceCreateSRPConnection failed: %d (%@)";
LAB_00135916:
  __os_log_internal(0,_md_log_log,0x10,pcVar7,(ulong)uVar2,lVar4);
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  return (ulong)uVar2;
}

