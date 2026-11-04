// rea decompile_all
// name: IXRemoteInstallDeltaHelper::generateDeltaForCurrentInstallable:previousInstallable:usingDeltaScheme:error:
// address: 0x4167e
// body: available
// range: 0x4167e-0x41e39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e35 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x30 bytes */

ID IXRemoteInstallDeltaHelper::
   generateDeltaForCurrentInstallable_previousInstallable_usingDeltaScheme_error_
             (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,ID *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ID *pIVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ID IVar12;
  long lVar13;
  cfstringStruct **ppcVar14;
  undefined8 *puVar15;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  cfstringStruct *local_a0;
  undefined8 local_98;
  ID *local_90;
  long local_88;
  undefined8 local_80;
  cfstringStruct *local_78;
  undefined8 local_70;
  cfstringStruct *local_68;
  undefined8 local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_90 = param_6;
  local_b8 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  local_b0 = (*(code *)puVar1)(param_4);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"computedDeltaURL");
  lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
  local_58 = &cf_Info_plist;
  local_50 = &cf_ResourceRules_plist;
  local_48 = &cf_CodeResources;
  local_40 = &cf__CodeSignature_CodeResources;
  uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_58,4);
  local_d0 = _objc_retainAutoreleasedReturnValue(uVar6);
  if (param_5 == 1) {
    ppcVar14 = &local_78;
    local_78 = &cf_InstallDeltaTypeKey;
    pcVar8 = &cf_InstallDeltaTypeSparseIPABinary;
    puVar15 = &local_70;
LAB_0004178d:
    *puVar15 = pcVar8;
    uVar6 = (*(code *)PTR__objc_msgSend_00441098)
                      (&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",puVar15,
                       ppcVar14,1);
    local_98 = _objc_retainAutoreleasedReturnValue(uVar6);
    local_e0 = 0;
    cVar4 = _IXCreateDirectoryAtURL(lVar7,1,0x1ed,0xffffffff,&local_e0);
    uVar6 = (*(code *)PTR__objc_retain_004410a8)(local_e0);
    uVar9 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    local_80 = _objc_retainAutoreleasedReturnValue(uVar9);
    if (cVar4 == '\0') {
      uVar9 = (*(code *)puVar1)(lVar7,"path");
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar9 = local_80;
      __os_log_internal(0,local_80,0x10,"%s: Failed to create computed delta directory at : %@",
                        "-[IXRemoteInstallDeltaHelper generateDeltaForCurrentInstallable:previousInstallable:usingDeltaScheme:error:]"
                        ,uVar10);
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar10);
      (*(code *)puVar1)(uVar9);
      uVar9 = (*(code *)PTR__objc_msgSend_00441098)(lVar7,"path");
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar9 = __CreateError("-[IXRemoteInstallDeltaHelper generateDeltaForCurrentInstallable:previousInstallable:usingDeltaScheme:error:]"
                            ,0x124,&cf_IXRemoteErrorDomain,5,uVar6,0,
                            &cf_Failedtocreatecomputeddeltadirectoryat___,uVar10);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar10);
      (*(code *)puVar1)(uVar6);
      goto LAB_00041c30;
    }
    local_a8 = uVar6;
    uVar6 = (*(code *)puVar1)(local_b8,"path");
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    local_88 = lVar7;
    uVar9 = (*(code *)puVar1)(local_b0,"path");
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    uVar10 = (*(code *)puVar1)(lVar7,"path");
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    __os_log_internal(0,local_80,0,
                      "%s: Computing delta, current : %@, previous contents: %@, result : %@",
                      "-[IXRemoteInstallDeltaHelper generateDeltaForCurrentInstallable:previousInstallable:usingDeltaScheme:error:]"
                      ,uVar6,uVar9,uVar10);
    puVar2 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar10);
    (*(code *)puVar2)(uVar9);
    (*(code *)puVar2)(uVar6);
    (*(code *)puVar2)(local_80);
    local_c0 = _objc_retainAutorelease(local_b8);
    uVar6 = (*(code *)puVar1)(local_c0,"fileSystemRepresentation");
    local_c8 = _objc_retainAutorelease(local_b0);
    uVar9 = (*(code *)puVar1)(local_c8,"fileSystemRepresentation");
    local_80 = _objc_retainAutorelease(local_88);
    uVar10 = (*(code *)puVar1)(local_80,"fileSystemRepresentation");
    iVar5 = _MDMCreateDeltaDirectoryForDevice(0,uVar6,uVar9,uVar10,local_d0,local_98);
    if (iVar5 != 0) {
      uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      local_a0 = (cfstringStruct *)uVar6;
      uVar9 = (*(code *)puVar1)(local_c0,"path");
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar10 = (*(code *)puVar1)(local_c8,"path");
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      uVar11 = (*(code *)puVar1)(local_80,"path");
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      __os_log_internal(0,uVar6,0x10,
                        "%s: Failed to compute delta of %@ and %@ and store results at %@",
                        "-[IXRemoteInstallDeltaHelper generateDeltaForCurrentInstallable:previousInstallable:usingDeltaScheme:error:]"
                        ,uVar9,uVar10,uVar11);
      puVar2 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar11);
      (*(code *)puVar2)(uVar10);
      (*(code *)puVar2)(uVar9);
      (*(code *)puVar2)(local_a0);
      local_a0 = &cf_IXRemoteErrorDomain;
      uVar6 = (*(code *)puVar1)(local_c0,"path");
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar9 = (*(code *)puVar1)(local_c8,"path");
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar9 = (*(code *)puVar1)(local_80,"path");
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar9 = __CreateError("-[IXRemoteInstallDeltaHelper generateDeltaForCurrentInstallable:previousInstallable:usingDeltaScheme:error:]"
                            ,0x132,local_a0,5,0,0,
                            &cf_Failedtocomputedeltaof__and__andstoreresultsat__,uVar6,uVar10,uVar11
                           );
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar2)(uVar11);
      (*(code *)puVar2)(uVar10);
      (*(code *)puVar2)(uVar6);
      (*(code *)puVar2)(local_a8);
      lVar7 = local_88;
      goto LAB_00041c30;
    }
    lVar13 = (*(code *)PTR__objc_retain_004410a8)(local_80);
    lVar7 = local_88;
    uVar9 = local_a8;
    if (lVar13 == 0) goto LAB_00041c30;
    uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar6);
    __os_log_internal(0,uVar9,2,"%s: Done computing delta",
                      "-[IXRemoteInstallDeltaHelper generateDeltaForCurrentInstallable:previousInstallable:usingDeltaScheme:error:]"
                     );
    uVar6 = local_a8;
  }
  else {
    if (param_5 == 0) {
      ppcVar14 = &local_68;
      local_68 = &cf_InstallDeltaTypeKey;
      pcVar8 = &cf_InstallDeltaTypeSparseIPAFiles;
      puVar15 = &local_60;
      goto LAB_0004178d;
    }
    uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    local_98 = 0;
    __os_log_internal(0,uVar6,0x10,"%s: Unsupported delta scheme : %lu",
                      "-[IXRemoteInstallDeltaHelper generateDeltaForCurrentInstallable:previousInstallable:usingDeltaScheme:error:]"
                      ,param_5);
    (*(code *)PTR__objc_release_004410a0)(uVar6);
    uVar6 = __CreateError("-[IXRemoteInstallDeltaHelper generateDeltaForCurrentInstallable:previousInstallable:usingDeltaScheme:error:]"
                          ,0x11e,&cf_IXRemoteErrorDomain,2,0,0,&cf_Unsupporteddeltascheme__lu,
                          param_5);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar6);
LAB_00041c30:
    pIVar3 = local_90;
    if (local_90 != (ID *)0x0) {
      uVar6 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      __os_log_internal(0,uVar6,0x10,"%s: Failed to compute delta : %@",
                        "-[IXRemoteInstallDeltaHelper generateDeltaForCurrentInstallable:previousInstallable:usingDeltaScheme:error:]"
                        ,uVar9);
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      IVar12 = _objc_retainAutorelease(uVar9);
      *pIVar3 = IVar12;
    }
    if (lVar7 == 0) {
      lVar13 = 0;
      uVar6 = uVar9;
      goto LAB_00041db8;
    }
    lVar13 = 0;
    local_d8 = uVar9;
    cVar4 = _IXRemoveItemAtURL(lVar7,0,&local_d8);
    uVar6 = (*(code *)PTR__objc_retain_004410a8)(local_d8);
    (*(code *)PTR__objc_release_004410a0)(uVar9);
    if (cVar4 != '\0') goto LAB_00041db8;
    uVar9 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    local_88 = lVar7;
    uVar10 = (*(code *)PTR__objc_msgSend_00441098)(lVar7,"path");
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    lVar13 = 0;
    __os_log_internal(0,uVar9,0x10,"%s: Failed to remove computed delta directory %@ : %@",
                      "-[IXRemoteInstallDeltaHelper generateDeltaForCurrentInstallable:previousInstallable:usingDeltaScheme:error:]"
                      ,uVar10,uVar6);
    (*(code *)PTR__objc_release_004410a0)(uVar10);
  }
  (*(code *)PTR__objc_release_004410a0)(uVar9);
  lVar7 = local_88;
LAB_00041db8:
  IVar12 = _objc_retainAutoreleaseReturnValue(lVar13);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_d0);
  (*(code *)puVar1)(lVar7);
  (*(code *)puVar1)(IVar12);
  (*(code *)puVar1)(local_98);
  (*(code *)puVar1)(uVar6);
  (*(code *)puVar1)(local_b0);
  (*(code *)puVar1)(local_b8);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return IVar12;
}

