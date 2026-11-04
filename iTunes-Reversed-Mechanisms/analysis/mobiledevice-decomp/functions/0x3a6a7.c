// rea decompile_all
// name: __IXRemotePerformUninstallationSyncHelper
// address: 0x3a6a7
// body: available
// range: 0x3a6a7-0x3a8fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __IXRemotePerformUninstallationSyncHelper
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  dispatch_queue_attr_t attr;
  dispatch_semaphore_t dsema;
  long lVar6;
  dispatch_queue_t pdVar7;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  dispatch_semaphore_t local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  code *local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  dispatch_queue_t local_58;
  dispatch_semaphore_t local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_60 = param_1;
  uVar3 = (*(code *)PTR__objc_retain_004410a8)(param_2);
  uVar4 = (*(code *)puVar1)(param_3);
  local_90 = 0;
  local_80 = 0x3032000000;
  local_78 = ___Block_byref_object_copy_;
  local_70 = ___Block_byref_object_dispose_;
  local_68 = 0;
  local_88 = &local_90;
  iVar2 = ___isPlatformVersionAtLeast(1,10,0xf,0);
  if (iVar2 == 0) {
    uVar5 = __CreateError("_IXRemotePerformUninstallationSyncHelper",0x3de,&cf_IXRemoteErrorDomain,1
                          ,0,0,&cf_Notsupportedonhostsrunning<10_15);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    pdVar7 = (dispatch_queue_t)local_88[5];
    local_88[5] = uVar5;
  }
  else {
    local_38 = param_4;
    uVar5 = _dispatch_queue_attr_make_with_autorelease_frequency(0,1);
    attr = (dispatch_queue_attr_t)_objc_retainAutoreleasedReturnValue(uVar5);
    local_58 = _dispatch_queue_create("com.apple.RemoteUninstallQueue",attr);
    (*(code *)PTR__objc_release_004410a0)();
    local_50 = _dispatch_semaphore_create(0);
    puVar1 = PTR__objc_retain_004410a8;
    local_d0 = PTR___NSConcreteStackBlock_004412a8;
    local_c8 = 0xc2000000;
    local_c0 = ____IXRemotePerformUninstallationSyncHelper_block_invoke;
    local_b8 = &___block_descriptor_64_e8_32s40s48s56r_e17_v16__0__NSError_8l;
    local_48 = uVar3;
    uVar3 = (*(code *)PTR__objc_retain_004410a8)(uVar3);
    local_b0 = uVar3;
    local_40 = uVar4;
    uVar4 = (*(code *)puVar1)(uVar4);
    pdVar7 = local_58;
    local_a8 = uVar4;
    local_98 = &local_90;
    dsema = (dispatch_semaphore_t)(*(code *)puVar1)(local_50);
    local_a0 = dsema;
    __IXRemotePerformUninstallationAsyncHelper(local_60,uVar3,uVar4,pdVar7,&local_d0);
    _dispatch_semaphore_wait(dsema,0xffffffffffffffff);
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(local_a0);
    (*(code *)puVar1)(local_a8);
    (*(code *)puVar1)(local_b0);
    (*(code *)puVar1)(dsema);
    uVar4 = local_40;
    param_4 = local_38;
    uVar3 = local_48;
  }
  (*(code *)PTR__objc_release_004410a0)(pdVar7);
  lVar6 = local_88[5];
  if ((param_4 != (undefined8 *)0x0) && (lVar6 != 0)) {
    uVar5 = _objc_retainAutorelease();
    *param_4 = uVar5;
    lVar6 = local_88[5];
  }
  __Block_object_dispose(&local_90,8);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_68);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  return lVar6 == 0;
}

