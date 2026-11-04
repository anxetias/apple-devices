// rea decompile_all
// name: _IXRemotePerformInstallation
// address: 0x36583
// body: available
// range: 0x36583-0x36823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _IXRemotePerformInstallation
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5,undefined8 *param_6)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  dispatch_queue_attr_t attr;
  dispatch_queue_t pdVar6;
  dispatch_semaphore_t pdVar7;
  long lVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined *local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined *local_d8;
  dispatch_semaphore_t local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  code *local_a0;
  code *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  code *local_70;
  code *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_58 = param_5;
  local_38 = param_1;
  uVar3 = (*(code *)PTR__objc_retain_004410a8)(param_2);
  uVar4 = (*(code *)puVar1)(param_3);
  uVar5 = (*(code *)puVar1)(param_4);
  iVar2 = ___isPlatformVersionAtLeast(1,10,0xf,0);
  local_48 = uVar5;
  if (iVar2 == 0) {
    if (param_6 == (undefined8 *)0x0) {
      bVar10 = false;
    }
    else {
      bVar10 = false;
      uVar5 = __CreateError("IXRemotePerformInstallation",399,&cf_IXRemoteErrorDomain,1,0,0,
                            &cf_Notsupportedonhostsrunning<10_15);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar5 = _objc_autorelease(uVar5);
      *param_6 = uVar5;
    }
    goto LAB_000367f2;
  }
  local_50 = param_6;
  local_40 = uVar4;
  uVar4 = _dispatch_queue_attr_make_with_autorelease_frequency(0,1);
  attr = (dispatch_queue_attr_t)_objc_retainAutoreleasedReturnValue(uVar4);
  pdVar6 = _dispatch_queue_create("com.apple.RemoteInstallSyncQueue",attr);
  (*(code *)PTR__objc_release_004410a0)();
  local_b8 = 0;
  local_a8 = 0x3032000000;
  local_a0 = ___Block_byref_object_copy_;
  local_98 = ___Block_byref_object_dispose_;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0x3032000000;
  local_70 = ___Block_byref_object_copy_;
  local_68 = ___Block_byref_object_dispose_;
  local_60 = 0;
  local_b0 = &local_b8;
  local_80 = &local_88;
  pdVar7 = _dispatch_semaphore_create(0);
  local_f0 = PTR___NSConcreteStackBlock_004412a8;
  local_e8 = 0xc2000000;
  local_e0 = ___IXRemotePerformInstallation_block_invoke;
  local_d8 = &___block_descriptor_56_e8_32s40r48r_e43_v24__0__IXRemoteInstallResult_8__NSError_16l;
  local_c8 = &local_b8;
  local_c0 = &local_88;
  pdVar7 = (dispatch_semaphore_t)(*(code *)PTR__objc_retain_004410a8)(pdVar7);
  uVar4 = local_38;
  local_d0 = pdVar7;
  local_38 = uVar3;
  _IXRemotePerformInstallationAsync(uVar4,uVar3,local_40,pdVar6,local_48,&local_f0);
  _dispatch_semaphore_wait(pdVar7,0xffffffffffffffff);
  lVar8 = local_b0[5];
  if (lVar8 == 0) {
    if (local_50 != (undefined8 *)0x0) {
      lVar8 = local_80[5];
      puVar9 = local_50;
      goto LAB_00036783;
    }
  }
  else {
    puVar9 = local_58;
    if (local_58 != (undefined8 *)0x0) {
LAB_00036783:
      uVar3 = _objc_retainAutorelease(lVar8);
      *puVar9 = uVar3;
    }
  }
  puVar1 = PTR__objc_release_004410a0;
  bVar10 = local_b0[5] != 0;
  (*(code *)PTR__objc_release_004410a0)(local_d0);
  (*(code *)puVar1)(pdVar7);
  __Block_object_dispose(&local_88,8);
  (*(code *)puVar1)(local_60);
  __Block_object_dispose(&local_b8,8);
  (*(code *)puVar1)(local_90);
  (*(code *)puVar1)(pdVar6);
  uVar3 = local_38;
  uVar4 = local_40;
LAB_000367f2:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_48);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  return bVar10;
}

