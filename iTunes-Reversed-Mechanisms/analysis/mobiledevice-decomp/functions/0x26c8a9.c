// rea decompile_all
// name: _handleRecoveryOSLocalPolicyRequest
// address: 0x26c8a9
// body: available
// range: 0x26c8a9-0x26cb23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26cb1f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleRecoveryOSLocalPolicyRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*,
   __CFError**) */

int _handleRecoveryOSLocalPolicyRequest
              (AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2,__CFError **param_3)

{
  __AMRestoreModeDevice *p_Var1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  long local_98;
  long local_90;
  undefined8 local_88;
  int local_7c;
  long local_78;
  undefined8 local_70 [5];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar6 = *(long *)(param_1 + 0x10);
  p_Var1 = *(__AMRestoreModeDevice **)(lVar6 + 0x10);
  if (p_Var1 == (__AMRestoreModeDevice *)0x0) {
    uVar8 = 0;
  }
  else {
    auVar9 = _CFGetAllocator(p_Var1);
    param_3 = auVar9._8_8_;
    uVar8 = auVar9._0_8_;
  }
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_88 = 0;
  local_70[0] = 0;
  local_7c = 99;
  if (param_2 == (__CFDictionary *)0x0) {
LAB_0026cad2:
    iVar2 = 1;
  }
  else {
    lVar3 = _CFDictionaryGetValue(param_2,&cf_Ap_NextStageIM4MHash,param_3);
    local_98 = lVar3;
    lVar4 = _CFDictionaryGetValue(param_2,&cf_Ap_RecoveryOSPolicyNonceHash);
    local_90 = lVar4;
    lVar5 = _CFDictionaryGetValue(param_2,&cf_Ap_VolumeUUID);
    if ((((lVar3 == 0) || (lVar4 == 0)) || (lVar5 == 0)) ||
       (local_78 = _CFUUIDCreateFromString(uVar8,lVar5), local_78 == 0)) goto LAB_0026cad2;
    lVar6 = _CFDictionaryGetValue(*(undefined8 *)(lVar6 + 0x18),&cf_PersonalizedRestoreBundlePath);
    if (lVar6 != 0) {
      local_88 = _CFURLCreateWithFileSystemPath(uVar8,lVar6,0,1);
      plVar7 = operator_new(0x38);
      *plVar7 = (long)&PTR____func_004461c0;
      plVar7[1] = (long)&local_7c;
      plVar7[2] = (long)&local_88;
      plVar7[3] = (long)&local_98;
      plVar7[4] = (long)&local_90;
      plVar7[5] = (long)&local_78;
      plVar7[6] = (long)local_70;
      local_48 = plVar7;
      __AMRestoreModeDevice::with_amai_locked(p_Var1);
      (**(code **)(*plVar7 + 0x28))(plVar7);
      if (local_7c == 0) {
        uVar8 = _CFDictionaryCreate(uVar8,&_kAMAuthInstallTagApLocalPolicy,local_70,1,
                                    PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                    PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        iVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,uVar8);
        iVar2 = (uint)(iVar2 != 0) * 9;
      }
      else {
        iVar2 = _AMAuthInstallToRestoreError();
        _AMRLog(3,&cf__s_failedtopersonalizerecoveryoslocalpolicy__d,
                "_handleRecoveryOSLocalPolicyRequest",iVar2);
        uVar8 = 0;
      }
      goto LAB_0026ca8b;
    }
    _AMRLog(3,&cf__s_unexpectedlackofpersonalizedbundle,"_handleRecoveryOSLocalPolicyRequest");
    iVar2 = 10;
  }
  uVar8 = 0;
LAB_0026ca8b:
  _AMSupportSafeRelease(uVar8);
  _AMSupportSafeRelease(local_70[0]);
  _AMSupportSafeRelease(local_88);
  _AMSupportSafeRelease(local_78);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

