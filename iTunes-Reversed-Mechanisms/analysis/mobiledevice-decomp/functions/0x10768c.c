// rea decompile_all
// name: AMRecoveryDeviceProxy::Restore
// address: 0x10768c
// body: available
// range: 0x10768c-0x10787f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* AMRecoveryDeviceProxy::Restore(__CFDictionary*, void*, __CFError**) */

ulong __thiscall
AMRecoveryDeviceProxy::Restore
          (AMRecoveryDeviceProxy *this,__CFDictionary *param_1,void *param_2,__CFError **param_3)

{
  char cVar1;
  int iVar2;
  __CFDictionary *p_Var3;
  long lVar4;
  long lVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  __CFError *p_Var8;
  bool extraout_DL;
  ulong uVar9;
  __CFDictionary *local_40;
  __CFError **local_38;
  
  local_40 = (__CFDictionary *)0x0;
  if (param_3 != (__CFError **)0x0) {
    *param_3 = (__CFError *)0x0;
  }
  iVar2 = -1;
  if (param_1 == (__CFDictionary *)0x0) {
    pcVar7 = &cf_Can_trestoredevicewithoutflattenedoptions;
  }
  else if (this == (AMRecoveryDeviceProxy *)0x0) {
    pcVar7 = &cf_Can_tdorecoveryrestorewithaNULLproxy;
  }
  else {
    local_38 = param_3;
    p_Var3 = (__CFDictionary *)_CFDictionaryGetValue(param_1,&cf_BootOptions);
    if (p_Var3 == (__CFDictionary *)0x0) {
      p_Var3 = param_1;
    }
    iVar2 = _AMRecoveryModeDeviceCopyAuthInstallPreflightOptions
                      (*(undefined8 *)(this + 0x20),p_Var3,&local_40);
    param_3 = local_38;
    if (iVar2 == 0) {
      iVar2 = 0;
      if (local_40 == (__CFDictionary *)0x0) {
        pcVar7 = &cf_Can_tdorecoveryrestorewithoutpreparedbootoptions;
      }
      else {
        cVar1 = _AMDeviceProxyMergeDictionaryWithDictionary(p_Var3,local_40,extraout_DL);
        if (cVar1 == '\0') {
          pcVar7 = &cf_Failedtomergepreparedoptionsintotarget;
          param_3 = local_38;
        }
        else {
          if (param_2 != (void *)0x0) {
            lVar4 = _CFGetTypeID(param_2);
            lVar5 = _AMRestorableDeviceGetTypeID();
            if ((lVar4 == lVar5) && (lVar4 = *(long *)((long)param_2 + 0xd8), lVar4 != 0)) {
              lVar5 = _CFGetTypeID(lVar4);
              lVar6 = _CFDictionaryGetTypeID();
              if ((lVar5 == lVar6) &&
                 ((cVar1 = _CFDictionaryContainsKey(lVar4,&cf_OTAUUID), cVar1 == '\0' &&
                  (lVar5 = _AMRestorableDeviceCopyEnvironmentVariable(param_2,&cf_ota_uuid),
                  lVar5 != 0)))) {
                _CFDictionaryAddValue(lVar4,&cf_OTAUUID,lVar5);
                _CFRelease(lVar5);
              }
            }
          }
          iVar2 = _AMRestorePerformRecoveryModeRestore
                            (*(undefined8 *)(this + 0x20),local_40,RestoreProgressCallback);
          if (iVar2 == 0) {
            uVar9 = CONCAT71((int7)((ulong)param_1 >> 8),1);
            pcVar7 = (cfstringStruct *)0x0;
            goto LAB_001077d2;
          }
          pcVar7 = (cfstringStruct *)
                   _AMRMakeString(&cf_Failedtorestoredeviceinrecoverymode_libusbrestoreerror__d,
                                  iVar2);
          param_3 = local_38;
        }
      }
    }
    else {
      pcVar7 = &cf_Failedtocopypreflightoptionsduringrecoverymoderestore_;
    }
  }
  uVar9 = 0;
  if ((param_3 != (__CFError **)0x0) && (pcVar7 != (cfstringStruct *)0x0)) {
    uVar9 = 0;
    p_Var8 = (__CFError *)
             _AMRCreateErrorWithDomain
                       (pcVar7,(long)iVar2,&cf_com_apple_MobileDevice_MobileRestore,0);
    *param_3 = p_Var8;
  }
LAB_001077d2:
  AMDeviceProxy::LogAndRelease((AMDeviceProxy *)this,3,(__CFString *)pcVar7);
  if (local_40 != (__CFDictionary *)0x0) {
    _CFRelease();
  }
  return uVar9 & 0xffffffff;
}

