// rea decompile_all
// name: IXRemoteInstallDeltaHelper::getStashedInstallableURL:forRemoteInstallResult:error:
// address: 0x40987
// body: available
// range: 0x40987-0x40f52 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x28 bytes */

char IXRemoteInstallDeltaHelper::getStashedInstallableURL_forRemoteInstallResult_error_
               (ID param_1,SEL param_2,ID *param_3,ID param_4,ID *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ID *pIVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  ID IVar7;
  cfstringStruct *pcVar8;
  undefined8 uVar9;
  long lVar10;
  ID IVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 local_88;
  ID local_80;
  undefined8 local_78;
  ID *local_70;
  ID *local_68;
  long local_60;
  ID local_58;
  undefined8 local_50;
  long local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  
  local_60 = (*(code *)PTR__objc_retain_004410a8)(param_4);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"stashBaseDirectoryURL");
  local_78 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar6 = (*(code *)puVar1)(param_1,"stashDirectoryURL");
  local_50 = _objc_retainAutoreleasedReturnValue(uVar6);
  iVar5 = ___isPlatformVersionAtLeast(1,10,0xf,0);
  if (iVar5 == 0) {
    local_38 = 0;
    uVar6 = __CreateError("-[IXRemoteInstallDeltaHelper getStashedInstallableURL:forRemoteInstallResult:error:]"
                          ,0x9a,&cf_IXRemoteErrorDomain,1,0,0,&cf_Notsupportedonhostsrunning<10_15);
    pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = 0;
    local_48 = 0;
    cVar4 = '\0';
  }
  else {
    local_88 = 0;
    local_68 = param_3;
    uVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"stashedAppMetadata:",&local_88);
    IVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    pcVar8 = (cfstringStruct *)(*(code *)PTR__objc_retain_004410a8)(local_88);
    local_40 = (cfstringStruct *)IVar7;
    if (IVar7 == 0) {
      uVar6 = (*(code *)puVar1)(pcVar8,"domain");
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar4 = (*(code *)puVar1)(uVar6,"isEqualToString:",
                                *(undefined8 *)PTR__NSCocoaErrorDomain_00441050);
      if (cVar4 == '\0') {
        (*(code *)PTR__objc_release_004410a0)(uVar6);
LAB_00040d13:
        local_38 = 0;
        local_48 = 0;
        goto LAB_00040d26;
      }
      lVar10 = (*(code *)PTR__objc_msgSend_00441098)(pcVar8,"code");
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      if (lVar10 != 0x104) goto LAB_00040d13;
      (*(code *)PTR__objc_release_004410a0)(pcVar8);
      cVar4 = '\x01';
      if (local_68 != (ID *)0x0) {
        *local_68 = 0;
      }
      local_38 = 0;
      uVar6 = 0;
      local_48 = 0;
      pcVar8 = (cfstringStruct *)0x0;
    }
    else {
      local_70 = param_5;
      local_58 = (ID)pcVar8;
      uVar6 = (*(code *)puVar1)(IVar7,"objectForKeyedSubscript:",&cf_Version);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar9 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"class");
      uVar6 = (*(code *)PTR__objc_retain_004410a8)(uVar6);
      cVar4 = (*(code *)puVar1)(uVar6,"isKindOfClass:",uVar9);
      if (cVar4 == '\0') {
        lVar10 = 0;
      }
      else {
        lVar10 = (*(code *)PTR__objc_retain_004410a8)(uVar6);
      }
      puVar2 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      (*(code *)puVar2)(uVar6);
      param_5 = local_70;
      local_48 = lVar10;
      if ((lVar10 != 0) &&
         (cVar4 = (*(code *)PTR__objc_msgSend_00441098)(lVar10,"isEqualToString:",&cf_1_0),
         cVar4 != '\0')) {
        if (local_60 == 0) {
          local_38 = 0;
          uVar6 = 0;
          pcVar13 = (code *)PTR__objc_release_004410a0;
        }
        else {
          uVar6 = (*(code *)puVar1)(local_40,"objectForKeyedSubscript:",&cf_Result);
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          uVar9 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"class");
          uVar6 = (*(code *)PTR__objc_retain_004410a8)(uVar6);
          cVar4 = (*(code *)puVar1)(uVar6,"isKindOfClass:",uVar9);
          if (cVar4 == '\0') {
            local_38 = 0;
          }
          else {
            local_38 = (*(code *)PTR__objc_retain_004410a8)(uVar6);
          }
          pcVar13 = (code *)PTR__objc_release_004410a0;
          (*(code *)PTR__objc_release_004410a0)(uVar6);
          (*pcVar13)(uVar6);
          uVar6 = (*(code *)puVar1)(local_60,"dictionaryRepresentation");
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          cVar4 = (*(code *)puVar1)(local_38,"isEqualToDictionary:",uVar6);
          if (cVar4 == '\0') {
            cVar4 = '\0';
            uVar9 = __CreateError("-[IXRemoteInstallDeltaHelper getStashedInstallableURL:forRemoteInstallResult:error:]"
                                  ,0x94,&cf_IXRemoteErrorDomain,5,0,0,
                                  &
                                  cf_Expectedappinfodidn_tmatchstashedsostashedinstallableisn_tvalid_expected____actual___
                                  ,uVar6,local_38);
            pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(uVar9);
            (*(code *)PTR__objc_release_004410a0)(local_58);
            goto LAB_00040d2b;
          }
        }
        uVar9 = local_50;
        (*pcVar13)(local_40);
        IVar7 = local_58;
        local_80 = local_58;
        uVar9 = _AppURLFromExtractedPayloadDir(uVar9,&local_80);
        IVar11 = _objc_retainAutoreleasedReturnValue(uVar9);
        pcVar8 = (cfstringStruct *)(*(code *)PTR__objc_retain_004410a8)(local_80);
        (*pcVar13)(IVar7);
        pIVar3 = local_68;
        if (IVar11 != 0) {
          cVar4 = '\x01';
          if (local_68 != (ID *)0x0) {
            IVar11 = _objc_retainAutorelease(IVar11);
            *pIVar3 = IVar11;
          }
          goto LAB_00040d53;
        }
        local_40 = &cf_IXRemoteErrorDomain;
        uVar9 = (*(code *)PTR__objc_msgSend_00441098)(local_50,"path");
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        cVar4 = '\0';
        uVar12 = __CreateError("-[IXRemoteInstallDeltaHelper getStashedInstallableURL:forRemoteInstallResult:error:]"
                               ,0xa0,local_40,5,pcVar8,0,&cf_Failedtofinda__app_inside_____,uVar9,
                               pcVar8);
        local_40 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(uVar12);
        (*pcVar13)(uVar9);
        (*pcVar13)(pcVar8);
        param_5 = local_70;
        pcVar8 = local_40;
        goto LAB_00040d35;
      }
      uVar6 = (*(code *)puVar1)(param_1,"stashedAppMetadataURL");
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar9 = (*(code *)puVar1)(uVar6,"path");
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      local_38 = 0;
      uVar12 = __CreateError("-[IXRemoteInstallDeltaHelper getStashedInstallableURL:forRemoteInstallResult:error:]"
                             ,0x8b,&cf_IXRemoteErrorDomain,5,0,0,
                             &cf___hadunexpectedcontentwithversion___Expectedversion____,uVar9,
                             lVar10,&cf_1_0);
      pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(uVar12);
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar9);
      (*(code *)puVar1)(uVar6);
      (*(code *)puVar1)(local_58);
LAB_00040d26:
      uVar6 = 0;
      cVar4 = '\0';
    }
LAB_00040d2b:
    (*(code *)PTR__objc_release_004410a0)(local_40);
  }
LAB_00040d35:
  if (param_5 != (ID *)0x0 && cVar4 == '\0') {
    pcVar8 = (cfstringStruct *)_objc_retainAutorelease(pcVar8);
    *param_5 = (ID)pcVar8;
    cVar4 = '\0';
  }
  IVar11 = 0;
LAB_00040d53:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  (*(code *)puVar1)(local_38);
  (*(code *)puVar1)(local_48);
  (*(code *)puVar1)(IVar11);
  (*(code *)puVar1)(pcVar8);
  (*(code *)puVar1)(local_50);
  (*(code *)puVar1)(local_78);
  (*(code *)puVar1)(local_60);
  return cVar4;
}

