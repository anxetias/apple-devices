// rea decompile_all
// name: ___thr_AMRestoreableDeviceAPIAvailabilityChanged
// address: 0x1631a9
// body: available
// range: 0x1631a9-0x16330e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1632dd to 0x16f561 _AMRSafeLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestoreableDeviceAPIAvailabilityChanged(long param_1,undefined8 param_2)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x128) == 0) {
    pcVar4 = &cf_DeviceAPIAvailabilityisNULL_thisisabug_;
  }
  else {
    _AMRSafeLog(6,&cf_Device__pAPIAvailabilityincomingchanges___,param_1,param_2);
    uVar1 = _CFDictionaryGetCount(param_2);
    pvVar2 = _calloc(1,(long)(int)uVar1 << 3);
    pvVar3 = _calloc(1,(long)(int)uVar1 << 3);
    if (pvVar2 == (void *)0x0) {
      pcVar4 = &cf_Failedtoallocateroomforchangeskeys;
    }
    else {
      if (pvVar3 == (void *)0x0) {
        pcVar4 = &cf_Failedtoallocateroomforchangesvalues;
      }
      else {
        _CFDictionaryGetKeysAndValues(param_2,pvVar2,pvVar3);
        if (0 < (int)uVar1) {
          uVar5 = 0;
          do {
            _CFDictionarySetValue
                      (*(undefined8 *)(param_1 + 0x128),*(undefined8 *)((long)pvVar2 + uVar5 * 8),
                       *(undefined8 *)((long)pvVar3 + uVar5 * 8));
            uVar5 = uVar5 + 1;
          } while ((uVar1 & 0x7fffffff) != uVar5);
        }
        _AMRSafeLog(6,&cf_Device__pCurrentAPIAvailability___,param_1,
                    *(undefined8 *)(param_1 + 0x128));
        if (*(long *)(param_1 + 0x128) == 0) {
          pcVar4 = &cf_DeviceAPIAvailabilityisNULL_thisisabug_;
        }
        else if (*(long *)(param_1 + 0x120) == 0) {
          pcVar4 = &cf_DeviceregisteredclientsisNULL_thisisabug_;
        }
        else {
          _CFDictionaryApplyFunction
                    (*(long *)(param_1 + 0x120),
                     __AMRestoreableDeviceSendAPIAvailabilityNotificationsToClient,param_1);
          pcVar4 = (cfstringStruct *)0x0;
        }
        _AMRSafeLogAndRelease(3,pcVar4);
        pcVar4 = (cfstringStruct *)0x0;
      }
      _free(pvVar2);
    }
    if (pvVar3 != (void *)0x0) {
      _free(pvVar3);
    }
  }
  _AMRSafeLogAndRelease(3,pcVar4);
  return;
}

