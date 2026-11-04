// rea decompile_all
// name: IXRemoteInstallDeltaHelper::finalizeUpdateOfInstallableWithRemoteInstallResult:error:
// address: 0x40f53
// body: available
// range: 0x40f53-0x4157c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41578 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

char IXRemoteInstallDeltaHelper::finalizeUpdateOfInstallableWithRemoteInstallResult_error_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ID IVar10;
  undefined8 uVar11;
  int *piVar12;
  ID IVar13;
  undefined8 local_c8;
  undefined8 local_c0;
  ID local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  ID *local_78;
  undefined8 local_70;
  ID local_68;
  ulong local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar6 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar7 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"stashedAppMetadataURL");
  local_98 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar7 = (*(code *)puVar1)(param_1,"stashBaseDirectoryURL");
  local_88 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar7 = (*(code *)puVar1)(param_1,"stashStagingDirectoryURL");
  local_80 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar7 = (*(code *)puVar1)(param_1,"stashDirectoryURL");
  local_90 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar7 = ___isPlatformVersionAtLeast(1,10,0xf,0);
  local_a8 = lVar6;
  local_68 = param_1;
  if ((int)uVar7 == 0) {
    local_70 = 0;
    uVar7 = __CreateError("-[IXRemoteInstallDeltaHelper finalizeUpdateOfInstallableWithRemoteInstallResult:error:]"
                          ,0xd8,&cf_IXRemoteErrorDomain,1,0,0,&cf_Notsupportedonhostsrunning<10_15);
    IVar13 = _objc_retainAutoreleasedReturnValue(uVar7);
  }
  else {
    uVar4 = (undefined4)CONCAT71((int7)((ulong)uVar7 >> 8),1);
    if (lVar6 == 0) {
      local_60 = CONCAT44(local_60._4_4_,uVar4);
      IVar10 = 0;
      local_70 = 0;
      goto LAB_0004137b;
    }
    local_60 = CONCAT44(local_60._4_4_,uVar4);
    local_c8 = 0;
    local_78 = param_4;
    cVar3 = _IXItemExistsAtURL(local_80,0,&local_c8);
    uVar7 = (*(code *)PTR__objc_retain_004410a8)(local_c8);
    puVar1 = PTR__objc_msgSend_00441098;
    if (cVar3 == '\0') {
      uVar8 = (*(code *)PTR__objc_msgSend_00441098)(local_88,"path");
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      local_70 = 0;
      uVar9 = __CreateError("-[IXRemoteInstallDeltaHelper finalizeUpdateOfInstallableWithRemoteInstallResult:error:]"
                            ,0xc3,&cf_IXRemoteErrorDomain,5,uVar7,0,
                            &cf_Nothingwasstagedtostashinthestashdirectoryat__,uVar8);
      IVar13 = _objc_retainAutoreleasedReturnValue(uVar9);
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar7);
      (*(code *)puVar1)(uVar8);
      param_4 = local_78;
      param_1 = local_68;
    }
    else {
      local_58 = &cf_Version;
      local_48 = &cf_1_0;
      local_50 = &cf_Result;
      uVar8 = (*(code *)PTR__objc_msgSend_00441098)(lVar6,"dictionaryRepresentation");
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      local_40 = uVar8;
      uVar9 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                                &local_48,&local_58,2);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)PTR__objc_release_004410a0)(uVar8);
      local_c0 = uVar7;
      local_70 = uVar9;
      cVar3 = (*(code *)puVar1)(uVar9,"IX_writeToURL:format:options:error:",local_98,200,1,&local_c0
                               );
      IVar10 = (*(code *)PTR__objc_retain_004410a8)(local_c0);
      (*(code *)PTR__objc_release_004410a0)(uVar7);
      IVar13 = IVar10;
      param_4 = local_78;
      param_1 = local_68;
      if (cVar3 != '\0') {
        uVar7 = _objc_retainAutorelease(local_80);
        uVar8 = (*(code *)puVar1)(uVar7,"fileSystemRepresentation");
        uVar9 = _objc_retainAutorelease(local_90);
        uVar11 = (*(code *)puVar1)(uVar9,"fileSystemRepresentation");
        iVar5 = _renamex_np(uVar8,uVar11,2);
        param_1 = local_68;
        if (iVar5 == 0) goto LAB_0004137b;
        piVar12 = ___error();
        local_60 = (ulong)*piVar12;
        local_a0 = *(undefined8 *)PTR__NSPOSIXErrorDomain_00441070;
        uVar7 = (*(code *)puVar1)(uVar7,"path");
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        uVar8 = (*(code *)puVar1)(uVar9,"path");
        uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
        uVar9 = __CreateError("-[IXRemoteInstallDeltaHelper finalizeUpdateOfInstallableWithRemoteInstallResult:error:]"
                              ,0xd3,local_a0,local_60,0,0,&cf_Failedtorenamex_np_______RENAME_SWAP_,
                              uVar7,uVar8);
        IVar13 = _objc_retainAutoreleasedReturnValue(uVar9);
        puVar1 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(IVar10);
        (*(code *)puVar1)(uVar8);
        (*(code *)puVar1)(uVar7);
        param_4 = local_78;
        param_1 = local_68;
      }
    }
  }
  uVar7 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  __os_log_internal(0,uVar7,0x10,"%s: Failed to finalize stashing of installable : %@",
                    "-[IXRemoteInstallDeltaHelper finalizeUpdateOfInstallableWithRemoteInstallResult:error:]"
                    ,IVar13);
  (*(code *)PTR__objc_release_004410a0)(uVar7);
  IVar10 = IVar13;
  if (param_4 != (ID *)0x0) {
    IVar10 = _objc_retainAutorelease(IVar13);
    *param_4 = IVar10;
  }
  local_60 = local_60 & 0xffffffff00000000;
LAB_0004137b:
  uVar7 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"computedDeltaURL");
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  local_b8 = IVar10;
  cVar3 = _IXRemoveItemAtURL(uVar7,1,&local_b8);
  uVar8 = (*(code *)PTR__objc_retain_004410a8)(local_b8);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(IVar10);
  (*(code *)puVar1)(uVar7);
  if (cVar3 == '\0') {
    uVar7 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    puVar2 = PTR__objc_msgSend_00441098;
    uVar9 = (*(code *)PTR__objc_msgSend_00441098)(local_68,"computedDeltaURL");
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    uVar11 = (*(code *)puVar2)(uVar9,"path");
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    __os_log_internal(0,uVar7,0x10,"%s: Failed to remove computed delta directory %@ : %@",
                      "-[IXRemoteInstallDeltaHelper finalizeUpdateOfInstallableWithRemoteInstallResult:error:]"
                      ,uVar11,uVar8);
    (*(code *)puVar1)(uVar11);
    (*(code *)puVar1)(uVar9);
    (*(code *)puVar1)(uVar7);
  }
  uVar7 = local_80;
  local_b0 = uVar8;
  cVar3 = _IXRemoveItemAtURL(local_80,1,&local_b0);
  uVar9 = (*(code *)PTR__objc_retain_004410a8)(local_b0);
  (*(code *)PTR__objc_release_004410a0)(uVar8);
  if (cVar3 == '\0') {
    uVar8 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar11 = (*(code *)PTR__objc_msgSend_00441098)(uVar7,"path");
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    __os_log_internal(0,uVar8,0x10,"%s: Failed to remove stash staging directory %@ : %@",
                      "-[IXRemoteInstallDeltaHelper finalizeUpdateOfInstallableWithRemoteInstallResult:error:]"
                      ,uVar11,uVar9);
    (*(code *)puVar1)(uVar11);
    (*(code *)puVar1)(uVar8);
  }
  (*(code *)puVar1)(local_90);
  (*(code *)puVar1)(uVar7);
  (*(code *)puVar1)(local_88);
  (*(code *)puVar1)(local_98);
  (*(code *)puVar1)(local_70);
  (*(code *)puVar1)(uVar9);
  (*(code *)puVar1)(local_a8);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return (char)local_60;
}

