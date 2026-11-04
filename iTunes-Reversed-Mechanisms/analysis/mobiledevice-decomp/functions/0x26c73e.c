// rea decompile_all
// name: _handleRecoveryOSVersionDataRequest
// address: 0x26c73e
// body: available
// range: 0x26c73e-0x26c896 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26c892 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleRecoveryOSVersionDataRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*,
   __CFError**) */

uint _handleRecoveryOSVersionDataRequest
               (AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2,__CFError **param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  __CFError *p_Var4;
  uint uVar5;
  bool bVar6;
  long lStack_80;
  long local_78;
  long local_70;
  undefined **local_68;
  long *local_60;
  __CFError *local_58;
  undefined ***local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  local_78 = *(long *)(param_1 + 0x10);
  p_Var4 = (__CFError *)&local_78;
  local_60 = &local_70;
  local_70 = 0;
  local_68 = &PTR____func_004460c0;
  local_58 = p_Var4;
  local_48 = &local_68;
  __AMRestoreModeDevice::with_amai_locked(*(__AMRestoreModeDevice **)(local_78 + 0x10),&local_68);
  if (local_48 == &local_68) {
    lStack_80 = 0x20;
LAB_0026c7ae:
    p_Var4 = (__CFError *)*local_48;
    (**(code **)(p_Var4 + lStack_80))();
  }
  else if (local_48 != (undefined ***)0x0) {
    lStack_80 = 0x28;
    goto LAB_0026c7ae;
  }
  if (local_70 == 0) {
    _AMRLog(3,&cf_FailedtologrecoveryOSversiondata_);
    uVar5 = 0x1e;
  }
  else {
    p_Var4 = (__CFError *)PTR__kCFTypeDictionaryValueCallBacks_004411b8;
    lVar2 = _CFDictionaryCreateMutable
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                       PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
    if (lVar2 != 0) {
      _CFDictionarySetValue(lVar2,&cf_RecoveryOSVersionData,local_70);
      iVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar2);
      bVar6 = iVar1 != 0;
      uVar5 = (uint)bVar6 * 9;
      goto LAB_0026c830;
    }
    uVar5 = 0x12;
  }
  bVar6 = true;
  lVar2 = 0;
LAB_0026c830:
  if (local_70 != 0) {
    _CFRelease();
  }
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  if (bVar6 && param_2 != (__CFDictionary *)0x0) {
    uVar3 = _AMRCreateErrorWithUnderlyingError
                      ((__CFString *)(ulong)uVar5,0x45e0b0,(__CFString *)0x0,p_Var4);
    *(undefined8 *)param_2 = uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

