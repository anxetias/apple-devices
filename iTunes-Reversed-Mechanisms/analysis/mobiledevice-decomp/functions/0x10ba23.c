// rea decompile_all
// name: __AMRestoreOSDeviceProxyCreateStashBag
// address: 0x10ba23
// body: available
// range: 0x10ba23-0x10bbb4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMRestoreOSDeviceProxyCreateStashBag(AMDeviceProxy *param_1,__CFDictionary *param_2,void *param_3)

{
  char cVar1;
  __CFData *p_Var2;
  __CFData *p_Var3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0x13] = (AMDeviceProxy)0x0;
  cVar1 = (**(code **)(*(long *)param_1 + 0x60))();
  if ((param_2 == (__CFDictionary *)0x0) || (cVar1 == '\0')) {
    p_Var2 = (__CFData *)0x0;
    p_Var3 = (__CFData *)0x0;
    if (param_2 != (__CFDictionary *)0x0) goto LAB_0010ba86;
  }
  else {
    AMDeviceProxy::Log((int)param_1,(__CFString *)((long)&MACH_HEADER.cputype + 1),
                       &cf_Creatingpre_manifest);
    p_Var2 = (__CFData *)_AMDeviceProxyCreatePreManifest(param_1,param_2);
LAB_0010ba86:
    p_Var3 = (__CFData *)_CFDictionaryGetValue(param_2,&cf_DevicePasscodeData);
    if (p_Var3 == (__CFData *)0x0) {
      p_Var3 = (__CFData *)0x0;
    }
    else {
      lVar4 = _CFGetTypeID(p_Var3);
      lVar5 = _CFDataGetTypeID();
      if (lVar4 != lVar5) {
        lVar4 = 0;
        _AMRSafeLog(3,&cf_passcodeDataisincorrecttype);
        uVar6 = 0xfa1;
        goto LAB_0010bb6b;
      }
      _AMRSafeLog(5,&cf_Devicepasscodedataprovided);
    }
  }
  _AMRSafeLog(5,&cf_Creatingstashbag);
  lVar4 = _AMDeviceProxyCreateStashBagWithManifest
                    (param_1,p_Var2,p_Var3,(bool *)(param_1 + 0x13),
                     __AMRestorableOperationChangedHandler,param_3);
  param_1[0x11] = (AMDeviceProxy)0x1;
  if (lVar4 == 0) {
    param_1[0x12] = (AMDeviceProxy)0x1;
    lVar4 = 0;
    uVar6 = 0;
  }
  else {
    param_1[0x13] = (AMDeviceProxy)0x0;
    cVar1 = _AMDeviceProxyIsStashbagRequired(param_1);
    if (cVar1 == '\0') {
      uVar6 = 0;
      _AMRSafeLog(5,&cf_Stashbagnotrequired_OKtocontinue);
    }
    else {
      _AMRSafeLog(3,&cf_Failedtocreatestashbag);
      uVar6 = 0xfc5;
    }
  }
LAB_0010bb6b:
  if (p_Var2 != (__CFData *)0x0) {
    _CFRelease(p_Var2);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  return uVar6;
}

