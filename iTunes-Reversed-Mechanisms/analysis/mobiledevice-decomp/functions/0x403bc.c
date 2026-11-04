// rea decompile_all
// name: IXRemoteInstallDeltaHelper::initWithDeltaDirectoryURL:installableParentURL:forDeviceWithUUID:forAppWithBundleID:withError:
// address: 0x403bc
// body: available
// range: 0x403bc-0x4086f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4086b to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x38 bytes */

ID IXRemoteInstallDeltaHelper::
   initWithDeltaDirectoryURL_installableParentURL_forDeviceWithUUID_forAppWithBundleID_withError_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  ID IVar7;
  undefined8 uVar8;
  objc_super local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ID local_58;
  ID local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_58 = param_1;
  uVar4 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  uVar5 = (*(code *)puVar1)(param_4);
  local_68 = (*(code *)puVar1)(param_5);
  local_60 = (*(code *)puVar1)(param_6);
  local_88.receiver = local_58;
  local_88.super_class = &objc::class_t::IXRemoteInstallDeltaHelper;
  IVar6 = _objc_msgSendSuper2(&local_88,"init");
  puVar1 = PTR__objc_msgSend_00441098;
  local_78 = uVar5;
  local_70 = uVar4;
  if (IVar6 == 0) {
LAB_00040806:
    IVar7 = (*(code *)PTR__objc_retain_004410a8)(IVar6);
  }
  else {
    (*(code *)PTR__objc_msgSend_00441098)(IVar6,"setDeltaDirectoryURL:",uVar4);
    (*(code *)puVar1)(IVar6,"setInstallableParentURL:",uVar5);
    uVar4 = (*(code *)puVar1)(IVar6,"class");
    uVar5 = (*(code *)puVar1)(uVar5,"path");
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar4 = (*(code *)puVar1)(uVar4,"sha256HashForString:",uVar5);
    IVar7 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)PTR__objc_release_004410a0)(uVar5);
    local_58 = IVar7;
    local_50 = IVar7;
    uVar4 = (*(code *)puVar1)(local_68,"UUIDString");
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    local_40 = local_60;
    local_48 = uVar4;
    uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_50,3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar8 = (*(code *)puVar1)(local_70,"urlByAppendingPathComponents:lastIsDirectory:",uVar5,1);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)puVar1)(IVar6,"setStashBaseDirectoryURL:",uVar8);
    puVar2 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar8);
    (*(code *)puVar2)(uVar5);
    (*(code *)puVar2)(uVar4);
    uVar4 = (*(code *)puVar1)(IVar6,"stashBaseDirectoryURL");
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)puVar1)(uVar4,"URLByAppendingPathComponent:isDirectory:",&cf_ComputedDelta,1);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(IVar6,"setComputedDeltaURL:",uVar5);
    puVar2 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar5);
    (*(code *)puVar2)(uVar4);
    uVar4 = (*(code *)puVar1)(IVar6,"stashBaseDirectoryURL");
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)puVar1)(uVar4,"URLByAppendingPathComponent:isDirectory:",&cf_Staged,1);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(IVar6,"setStashStagingDirectoryURL:",uVar5);
    puVar2 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar5);
    (*(code *)puVar2)(uVar4);
    uVar4 = (*(code *)puVar1)(IVar6,"stashBaseDirectoryURL");
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)puVar1)(uVar4,"URLByAppendingPathComponent:isDirectory:",&cf_Stashed,1);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(IVar6,"setStashDirectoryURL:",uVar5);
    puVar2 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar5);
    (*(code *)puVar2)(uVar4);
    uVar4 = (*(code *)puVar1)(IVar6,"stashBaseDirectoryURL");
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)puVar1)(uVar4,"URLByAppendingPathComponent:isDirectory:",
                              &cf_StashedAppMetadata_plist,0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(IVar6,"setStashedAppMetadataURL:",uVar5);
    (*(code *)puVar2)(uVar5);
    (*(code *)puVar2)(uVar4);
    (*(code *)puVar1)(IVar6,"setBundleID:",local_60);
    uVar4 = (*(code *)puVar1)(IVar6,"stashBaseDirectoryURL");
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar3 = _IXCreateDirectoryAtURL(uVar4,1,0x1ed,0xffffffff,param_7);
    (*(code *)puVar2)(uVar4);
    if (cVar3 != '\0') {
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)(IVar6,"computedDeltaURL");
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar3 = _IXCreateDirectoryAtURL(uVar4,0,0x1ed,0xffffffff,param_7);
      (*(code *)PTR__objc_release_004410a0)(uVar4);
      if (cVar3 != '\0') {
        uVar4 = (*(code *)PTR__objc_msgSend_00441098)(IVar6,"stashStagingDirectoryURL");
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        cVar3 = _IXCreateDirectoryAtURL(uVar4,0,0x1ed,0xffffffff,param_7);
        (*(code *)PTR__objc_release_004410a0)(uVar4);
        if (cVar3 != '\0') {
          uVar4 = (*(code *)PTR__objc_msgSend_00441098)(IVar6,"stashDirectoryURL");
          uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
          IVar7 = 0;
          cVar3 = _IXCreateDirectoryAtURL(uVar4,0,0x1ed,0xffffffff,param_7);
          puVar1 = PTR__objc_release_004410a0;
          (*(code *)PTR__objc_release_004410a0)(uVar4);
          (*(code *)puVar1)(local_58);
          if (cVar3 == '\0') goto LAB_00040820;
          goto LAB_00040806;
        }
      }
    }
    (*(code *)PTR__objc_release_004410a0)(local_58);
    IVar7 = 0;
  }
LAB_00040820:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_60);
  (*(code *)puVar1)(local_68);
  (*(code *)puVar1)(local_78);
  (*(code *)puVar1)(local_70);
  (*(code *)puVar1)(IVar6);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return IVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

