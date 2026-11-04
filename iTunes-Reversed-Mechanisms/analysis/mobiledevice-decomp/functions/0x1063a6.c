// rea decompile_all
// name: AMRemoteServiceDeviceProxy::Restore
// address: 0x1063a6
// body: available
// range: 0x1063a6-0x1065f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* AMRemoteServiceDeviceProxy::Restore(__CFDictionary*, void*, __CFError**) */

ulong __thiscall
AMRemoteServiceDeviceProxy::Restore
          (AMRemoteServiceDeviceProxy *this,__CFDictionary *param_1,void *param_2,
          __CFError **param_3)

{
  char cVar1;
  int iVar2;
  __CFDictionary *p_Var3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  __CFError *p_Var7;
  __CFDictionary *p_Var8;
  bool extraout_DL;
  undefined8 uVar9;
  cfstringStruct *pcVar10;
  __CFError **pp_Var11;
  ulong uVar12;
  void *local_58;
  AMRemoteServiceDeviceProxy *local_50;
  __CFError **local_48;
  __CFDictionary *local_40;
  bool local_31;
  
  local_31 = false;
  local_40 = (__CFDictionary *)0x0;
  uVar9 = 4000;
  if (this == (AMRemoteServiceDeviceProxy *)0x0) {
    pcVar10 = &cf_Can_trestorefromNULLproxy;
    lVar5 = 0;
    lVar6 = 0;
    pp_Var11 = param_3;
  }
  else {
    lVar5 = 0;
    local_48 = param_3;
    _AMRLog(7,&cf_PerformingpreflightonbootedOS_RSD_device___);
    p_Var3 = (__CFDictionary *)_AMDeviceProxyGetBootOptions(param_1,&local_31);
    if (p_Var3 == (__CFDictionary *)0x0) {
      pcVar10 = &cf_Can_trestoreBootedOS_RSD_devicewithNULLbootoptions;
      uVar9 = 0xfa1;
      lVar6 = 0;
      pp_Var11 = local_48;
    }
    else {
      local_58 = param_2;
      local_50 = this;
      pvVar4 = (void *)(**(code **)(*(long *)this + 0x18))(this);
      _AMDeviceProxyGenericProgressCallbackV2(pvVar4,0xcb,-1,(__CFDictionary *)0x0,&local_58);
      iVar2 = _AMRemoteServiceDeviceCopyAuthInstallPreflightOptions
                        (*(undefined8 *)(this + 0x20),p_Var3,&local_40);
      if (iVar2 == 0) {
        if (local_31 == true) {
          p_Var8 = (__CFDictionary *)_CFDictionaryGetValue(param_1,&cf_BootOptions);
          p_Var3 = (__CFDictionary *)_CFDictionaryGetValue(param_1,&cf_RestoreOptions);
          _AMDeviceProxyMergePersonalizationKeysFromSourceToDestination(local_40,p_Var8);
          _AMDeviceProxyMergePersonalizationKeysFromSourceToDestination(local_40,p_Var3);
        }
        else {
          _AMDeviceProxyMergeDictionaryWithDictionary(param_1,local_40,extraout_DL);
        }
        AMDeviceProxy::Log((int)this,(__CFString *)((long)&MACH_HEADER.cputype + 1),
                           &cf_Successfullypreflightedrestore);
        lVar5 = _CFDictionaryGetValue(param_1,&cf_StopRestoreAfterPreflight);
        if (lVar5 != 0) {
          p_Var3 = (__CFDictionary *)_CFGetTypeID(lVar5);
          p_Var8 = (__CFDictionary *)_CFBooleanGetTypeID();
          if ((p_Var3 == p_Var8) && (cVar1 = _CFBooleanGetValue(lVar5), cVar1 != '\0')) {
            pcVar10 = &cf_StoppingRestore;
            lVar5 = 0;
            lVar6 = 0;
            uVar9 = 4000;
            pp_Var11 = local_48;
            goto LAB_00106484;
          }
        }
        lVar6 = 0;
        AMDeviceProxy::Log((int)this,(__CFString *)((long)&MACH_HEADER.cputype + 1),
                           &cf_Enteringrecoverymode);
        _MDRemoteServiceRebootToRecoveryWithError(*(undefined8 *)(this + 0x20));
        uVar12 = CONCAT71((int7)((ulong)p_Var3 >> 8),1);
        pcVar10 = (cfstringStruct *)0x0;
        lVar5 = 0;
        goto LAB_0010658a;
      }
      lVar5 = _AMRestoreErrorTranslation(iVar2);
      lVar6 = _AMRCreateErrorWithDomain(lVar5,(long)iVar2,&cf_AMRestoreErrorDomain,0);
      pcVar10 = &cf_Personalizationfailed;
      uVar9 = 0xfbc;
      pp_Var11 = local_48;
    }
  }
LAB_00106484:
  if (pp_Var11 != (__CFError **)0x0) {
    p_Var7 = (__CFError *)
             _AMRCreateErrorWithDomain(pcVar10,uVar9,&cf_com_apple_MobileDevice_MobileRestore,lVar6)
    ;
    *pp_Var11 = p_Var7;
  }
  uVar12 = 0;
LAB_0010658a:
  AMDeviceProxy::LogAndRelease((AMDeviceProxy *)this,3,(__CFString *)pcVar10);
  if (local_40 != (__CFDictionary *)0x0) {
    _CFRelease();
  }
  if (lVar6 != 0) {
    _CFRelease(lVar6);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  return uVar12 & 0xffffffff;
}

