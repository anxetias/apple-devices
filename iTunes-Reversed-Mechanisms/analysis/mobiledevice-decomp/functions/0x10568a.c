// rea decompile_all
// name: AMPortDFUDeviceProxy::Restore
// address: 0x10568a
// body: available
// range: 0x10568a-0x105807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* AMPortDFUDeviceProxy::Restore(__CFDictionary*, void*, __CFError**) */

bool __thiscall
AMPortDFUDeviceProxy::Restore
          (AMPortDFUDeviceProxy *this,__CFDictionary *param_1,void *param_2,__CFError **param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  __CFDictionary *p_Var4;
  __CFError *p_Var5;
  bool extraout_DL;
  cfstringStruct *pcVar6;
  bool bVar7;
  void *local_48;
  AMPortDFUDeviceProxy *local_40;
  __CFDictionary *local_38;
  
  local_38 = (__CFDictionary *)0x0;
  if (param_3 != (__CFError **)0x0) {
    *param_3 = (__CFError *)0x0;
  }
  bVar1 = true;
  local_48 = param_2;
  local_40 = this;
  if (param_1 == (__CFDictionary *)0x0) {
    iVar3 = -1;
    pcVar6 = &cf_Can_trestoredevicewithNULLrestoreoptions;
  }
  else {
    p_Var4 = (__CFDictionary *)_CFDictionaryGetValue(param_1,&cf_BootOptions);
    if (p_Var4 == (__CFDictionary *)0x0) {
      p_Var4 = param_1;
    }
    iVar3 = _AMPortDFUModeDeviceCopyAuthInstallPreflightOptions
                      (*(undefined8 *)(this + 0x20),p_Var4,&local_38);
    bVar7 = false;
    if (iVar3 == 0) {
      if (local_38 == (__CFDictionary *)0x0) {
        pcVar6 = &cf_Can_trestorePortDFUdevicewithNULLpreparedbootoptions;
      }
      else {
        cVar2 = _AMDeviceProxyMergeDictionaryWithDictionary(p_Var4,local_38,extraout_DL);
        if (cVar2 != '\0') {
          iVar3 = _AMRestorePerformPortDFURestore
                            (*(undefined8 *)(this + 0x20),local_38,RestoreProgressCallback,&local_48
                            );
          pcVar6 = (cfstringStruct *)0x0;
          bVar7 = iVar3 == 0;
          bVar1 = !bVar7;
          if (!bVar7) {
            pcVar6 = &cf_FailedtorestoredeviceinPortDFUmode_;
          }
          goto LAB_0010574d;
        }
        pcVar6 = &cf_Failedtomergepreparedoptionsintotarget;
      }
      bVar7 = false;
      iVar3 = 0;
      goto LAB_0010574d;
    }
    if (iVar3 == 0xc7a) {
      pcVar6 = &cf_DeclinedtoauthorizethisDFUfileonthisdeviceforthisuser_;
      goto LAB_0010574d;
    }
    if (iVar3 == 0x1a87) {
      pcVar6 = &cf_AppleConnectauthenticationfailed;
    }
    else if (iVar3 == 0x1a88) {
      pcVar6 = &cf_AppleConnectauthenticationcancelledbyuser;
    }
    else {
      pcVar6 = &cf_FailedtocopyauthinstalloptionsinPortDFUmode_;
    }
  }
  bVar7 = false;
LAB_0010574d:
  if ((param_3 != (__CFError **)0x0) && (bVar1)) {
    p_Var5 = (__CFError *)
             _AMRCreateErrorWithDomain
                       (pcVar6,(long)iVar3,&cf_com_apple_MobileDevice_MobileRestore,0);
    *param_3 = p_Var5;
  }
  AMDeviceProxy::LogAndRelease((AMDeviceProxy *)this,3,(__CFString *)pcVar6);
  if (local_38 != (__CFDictionary *)0x0) {
    _CFRelease();
  }
  return bVar7;
}

