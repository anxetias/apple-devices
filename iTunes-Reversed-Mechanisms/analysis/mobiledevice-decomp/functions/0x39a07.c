// rea decompile_all
// name: _IXRemoteRevertStash
// address: 0x39a07
// body: available
// range: 0x39a07-0x39c6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _IXRemoteRevertStash
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  dispatch_semaphore_t pdVar5;
  undefined8 uVar6;
  dispatch_queue_attr_t attr;
  dispatch_queue_t pdVar7;
  undefined1 auVar8 [16];
  undefined *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined *local_d0;
  dispatch_semaphore_t local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  code *local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  dispatch_queue_t local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  local_50 = param_1;
  uVar4 = (*(code *)PTR__objc_retain_004410a8)(param_2);
  local_b0 = 0;
  local_a0 = 0x3032000000;
  local_98 = ___Block_byref_object_copy_;
  local_90 = ___Block_byref_object_dispose_;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0x3032000000;
  local_68 = ___Block_byref_object_copy_;
  local_60 = ___Block_byref_object_dispose_;
  local_58 = 0;
  local_a8 = &local_b0;
  local_78 = &local_80;
  iVar3 = ___isPlatformVersionAtLeast(1,10,0xf,0);
  if (iVar3 == 0) {
    uVar6 = __CreateError("IXRemoteRevertStash",0x2f0,&cf_IXRemoteErrorDomain,1,0,0,
                          &cf_Notsupportedonhostsrunning<10_15);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    pdVar7 = (dispatch_queue_t)local_78[5];
    local_78[5] = uVar6;
  }
  else {
    local_40 = param_5;
    local_38 = param_4;
    pdVar5 = _dispatch_semaphore_create(0);
    uVar6 = _dispatch_queue_attr_make_with_autorelease_frequency(0,1);
    attr = (dispatch_queue_attr_t)_objc_retainAutoreleasedReturnValue(uVar6);
    local_48 = _dispatch_queue_create("com.apple.RemoteRevertSyncQueue",attr);
    (*(code *)PTR__objc_release_004410a0)(attr);
    local_e8 = PTR___NSConcreteStackBlock_004412a8;
    local_e0 = 0xc2000000;
    local_d8 = ___IXRemoteRevertStash_block_invoke;
    local_d0 = &___block_descriptor_56_e8_32s40r48r_e43_v24__0__IXRemoteInstallResult_8__NSError_16l
    ;
    local_c0 = &local_b0;
    local_b8 = &local_80;
    auVar8 = (*(code *)PTR__objc_retain_004410a8)(pdVar5);
    pdVar7 = local_48;
    pdVar5 = auVar8._0_8_;
    local_c8 = pdVar5;
    _IXRemoteRevertStashAsync(local_50,uVar4,auVar8._8_8_,local_48,&local_e8);
    _dispatch_semaphore_wait(pdVar5,0xffffffffffffffff);
    puVar2 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(local_c8);
    (*(code *)puVar2)(pdVar5);
    param_5 = local_40;
    param_4 = local_38;
  }
  (*(code *)PTR__objc_release_004410a0)(pdVar7);
  if (local_a8[5] == 0) {
    if (param_5 != (undefined8 *)0x0) {
      uVar6 = _objc_retainAutorelease(local_78[5]);
      *param_5 = uVar6;
    }
  }
  else if (param_4 != (undefined8 *)0x0) {
    uVar6 = _objc_retainAutorelease();
    *param_4 = uVar6;
  }
  lVar1 = local_a8[5];
  __Block_object_dispose(&local_80,8);
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_58);
  __Block_object_dispose(&local_b0,8);
  (*(code *)puVar2)(local_88);
  (*(code *)puVar2)(uVar4);
  return lVar1 != 0;
}

