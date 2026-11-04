// rea decompile_all
// name: _AMDeviceCopyWirelessDeviceValueWithError
// address: 0x13b367
// body: available
// range: 0x13b367-0x13b5aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMDeviceCopyWirelessDeviceValueWithError
               (long param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  int local_34;
  
  local_34 = -0x17ffffff;
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    lVar3 = 0;
    __os_log_internal(0,_md_log_log,0x10,"Invalid input");
    local_34 = -0x17fffff9;
    lVar2 = 0;
    goto LAB_0013b522;
  }
  if (*(long *)(param_1 + 0xf8) == 0) {
    iVar1 = _AMDeviceConnect(param_1);
    local_34 = iVar1;
    if (iVar1 == 0) {
      lVar2 = _AMDeviceCopyValueWithError(param_1,param_2,param_3,&local_34);
      if (local_34 == 0 || lVar2 != 0) goto LAB_0013b518;
      lVar3 = _AMDCopyErrorText();
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar4 = "Failed to get value from lockdown for device (%{public}@): 0x%08x (%{public}@)";
      iVar1 = local_34;
    }
    else {
      lVar3 = _AMDCopyErrorText(iVar1);
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar4 = "Failed to connect to device (%{public}@): 0x%08x (%{public}@)";
    }
  }
  else {
    lVar2 = __AMDRemotePairingCopyConnectableDeviceValueWithError(param_1,param_2,param_3,&local_34)
    ;
    if (local_34 == 0 || lVar2 != 0) {
LAB_0013b518:
      local_34 = 0;
      lVar3 = 0;
      goto LAB_0013b522;
    }
    lVar3 = _AMDCopyErrorText();
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar4 = 
    "Failed to get value from RemotePairing KVS for device (%{public}@): 0x%08x (%{public}@)";
    iVar1 = local_34;
  }
  lVar2 = 0;
  __os_log_internal(0,_md_log_log,0x10,pcVar4,param_1,iVar1,lVar3);
LAB_0013b522:
  if (param_4 != (int *)0x0) {
    *param_4 = local_34;
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  return lVar2;
}

