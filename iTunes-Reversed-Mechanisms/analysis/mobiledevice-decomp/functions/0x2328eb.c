// rea decompile_all
// name: AppleTypeCRetimerFirmwareRequestCreatorBackDeploy::generateRequestDictionary
// address: 0x2328eb
// body: available
// range: 0x2328eb-0x2334ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2334b6 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void AppleTypeCRetimerFirmwareRequestCreatorBackDeploy::generateRequestDictionary
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_178;
  undefined8 local_170;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  puVar1 = PTR__objc_msgSend_00441098;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar5 = *(undefined1 *)(param_1 + _tagNumber);
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSMutableDictionary,"dictionary");
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,
                            "stringWithValidatedFormat:validFormatSpecifiers:error:",
                            &cf__Timer_u_Ticket,&cf__u,0,uVar5);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar8 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)puVar1)(uVar6,"setObject:forKeyedSubscript:",uVar8,uVar7);
  (*(code *)PTR__objc_release_004410a0)(uVar8);
  uVar8 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,
                            "stringWithValidatedFormat:validFormatSpecifiers:error:",
                            &cf_Timer_BoardID__u,&cf__u,0,uVar5);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  uVar9 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithUnsignedShort:",
                            *(undefined2 *)(param_1 + _boardID));
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
  (*(code *)PTR__objc_msgSend_00441098)(uVar6,"setObject:forKeyedSubscript:",uVar9,uVar8);
  puVar1 = PTR__objc_msgSend_00441098;
  (*(code *)PTR__objc_release_004410a0)(uVar9);
  uVar9 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,
                            "stringWithValidatedFormat:validFormatSpecifiers:error:",
                            &cf_Timer_ChipID__u,&cf__u,0,uVar5);
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
  uVar10 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithUnsignedShort:",
                             *(undefined2 *)(param_1 + _chipID));
  uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
  (*(code *)puVar1)(uVar6,"setObject:forKeyedSubscript:",uVar10,uVar9);
  (*(code *)PTR__objc_release_004410a0)(uVar10);
  uVar10 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,
                             "stringWithValidatedFormat:validFormatSpecifiers:error:",
                             &cf_Timer_ECID__u,&cf__u,0,uVar5);
  uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
  uVar11 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithUnsignedLongLong:",
                             *(undefined8 *)(param_1 + _ecid));
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  (*(code *)puVar1)(uVar6,"setObject:forKeyedSubscript:",uVar11,uVar10);
  (*(code *)PTR__objc_release_004410a0)(uVar11);
  uVar11 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,
                             "stringWithValidatedFormat:validFormatSpecifiers:error:",
                             &cf_Timer_Nonce__u,&cf__u,0,uVar5);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  (*(code *)puVar1)(uVar6,"setObject:forKeyedSubscript:",*(undefined8 *)(param_1 + _nonce));
  uVar12 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,
                             "stringWithValidatedFormat:validFormatSpecifiers:error:",
                             &cf_Timer_ProductionMode__u,&cf__u,0,uVar5);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  uVar13 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",
                             *(char *)(param_1 + _productionStatus) != '\0');
  uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
  (*(code *)puVar1)(uVar6,"setObject:forKeyedSubscript:",uVar13,uVar12);
  (*(code *)PTR__objc_release_004410a0)(uVar13);
  uVar13 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,
                             "stringWithValidatedFormat:validFormatSpecifiers:error:",
                             &cf_Timer_SecurityDomain__u,&cf__u,0,uVar5);
  uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
  uVar14 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithUnsignedChar:",
                             *(undefined1 *)(param_1 + _securityDomain));
  uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
  (*(code *)puVar1)(uVar6,"setObject:forKeyedSubscript:",uVar14,uVar13);
  (*(code *)PTR__objc_release_004410a0)(uVar14);
  uVar14 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,
                             "stringWithValidatedFormat:validFormatSpecifiers:error:",
                             &cf_Timer_SecurityMode__u,&cf__u,0,uVar5);
  uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
  uVar15 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",
                             *(char *)(param_1 + _securityMode) != '\0');
  uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
  (*(code *)puVar1)(uVar6,"setObject:forKeyedSubscript:",uVar15,uVar14);
  (*(code *)PTR__objc_release_004410a0)(uVar15);
  uVar15 = (*(code *)puVar1)(param_1,"generateHashForSubfile:",*(undefined8 *)(param_1 + _rkos));
  uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
  uVar16 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,
                             "stringWithValidatedFormat:validFormatSpecifiers:error:",
                             &cf_Timer_RTKitOS__u,&cf__u,0,uVar5);
  uVar16 = _objc_retainAutoreleasedReturnValue(uVar16);
  if (*(char *)(param_1 + _demote) == '\0') {
    uVar4 = 1;
    if (*(char *)(param_1 + _productionStatus) == '\0') goto LAB_00232f91;
LAB_00232f93:
    local_70 = &cf_EPRO;
    local_78 = &cf_Digest;
    local_58 = uVar15;
    uVar17 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",uVar4);
    local_178 = _objc_retainAutoreleasedReturnValue(uVar17);
    local_68 = &cf_ESEC;
    local_50 = local_178;
    uVar17 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",
                               *(char *)(param_1 + _securityMode) != '\0');
    local_170 = _objc_retainAutoreleasedReturnValue(uVar17);
    local_60 = &cf_Trusted;
    local_48 = local_170;
    uVar17 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
    uVar17 = _objc_retainAutoreleasedReturnValue(uVar17);
    local_40 = uVar17;
    uVar18 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                               &local_58,&local_78,4);
    uVar18 = _objc_retainAutoreleasedReturnValue(uVar18);
    (*(code *)puVar1)(uVar6,"setObject:forKeyedSubscript:",uVar18,uVar16);
  }
  else {
    if (*(char *)(param_1 + _productionStatus) == '\0') {
LAB_00232f91:
      uVar4 = 0;
      goto LAB_00232f93;
    }
    local_c8 = &cf_Digest;
    local_c0 = &cf_EPRO;
    local_a0 = uVar15;
    uVar17 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    local_178 = _objc_retainAutoreleasedReturnValue(uVar17);
    local_b8 = &cf_DPRO;
    local_98 = local_178;
    uVar17 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
    local_170 = _objc_retainAutoreleasedReturnValue(uVar17);
    local_b0 = &cf_ESEC;
    local_90 = local_170;
    uVar17 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
    uVar17 = _objc_retainAutoreleasedReturnValue(uVar17);
    local_a8 = &cf_Trusted;
    local_88 = uVar17;
    uVar18 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    uVar18 = _objc_retainAutoreleasedReturnValue(uVar18);
    local_80 = uVar18;
    uVar19 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                               &local_a0,&local_c8,5);
    uVar19 = _objc_retainAutoreleasedReturnValue(uVar19);
    (*(code *)puVar1)(uVar6,"setObject:forKeyedSubscript:",uVar19,uVar16);
    (*(code *)PTR__objc_release_004410a0)(uVar19);
  }
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar18);
  (*(code *)puVar2)(uVar17);
  (*(code *)puVar2)(local_170);
  (*(code *)puVar2)(local_178);
  uVar17 = (*(code *)puVar1)(param_1,"generateHashForSubfile:",*(undefined8 *)(param_1 + _rrko));
  uVar17 = _objc_retainAutoreleasedReturnValue(uVar17);
  uVar18 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,
                             "stringWithValidatedFormat:validFormatSpecifiers:error:",
                             &cf_Timer_RestoreRTKitOS__u,&cf__u,0,uVar5);
  uVar18 = _objc_retainAutoreleasedReturnValue(uVar18);
  if (*(char *)(param_1 + _demote) == '\0') {
    uVar5 = 1;
    if (*(char *)(param_1 + _productionStatus) == '\0') goto LAB_002332a3;
  }
  else {
    if (*(char *)(param_1 + _productionStatus) != '\0') {
      local_158 = &cf_Digest;
      local_150 = &cf_EPRO;
      local_130 = uVar17;
      uVar19 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
      local_170 = _objc_retainAutoreleasedReturnValue(uVar19);
      local_148 = &cf_DPRO;
      local_128 = local_170;
      uVar19 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
      local_1a0 = _objc_retainAutoreleasedReturnValue(uVar19);
      local_140 = &cf_ESEC;
      local_120 = local_1a0;
      uVar19 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
      local_198 = _objc_retainAutoreleasedReturnValue(uVar19);
      local_138 = &cf_Trusted;
      local_118 = local_198;
      uVar19 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
      uVar19 = _objc_retainAutoreleasedReturnValue(uVar19);
      local_110 = uVar19;
      uVar20 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                                 &local_130,&local_158,5);
      uVar20 = _objc_retainAutoreleasedReturnValue(uVar20);
      (*(code *)puVar1)(uVar6,"setObject:forKeyedSubscript:",uVar20,uVar18);
      (*(code *)PTR__objc_release_004410a0)(uVar20);
      goto LAB_00233392;
    }
LAB_002332a3:
    uVar5 = 0;
  }
  local_100 = &cf_EPRO;
  local_108 = &cf_Digest;
  local_e8 = uVar17;
  uVar19 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",uVar5);
  local_170 = _objc_retainAutoreleasedReturnValue(uVar19);
  local_f8 = &cf_ESEC;
  local_e0 = local_170;
  uVar19 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",
                             *(char *)(param_1 + _securityMode) != '\0');
  local_1a0 = _objc_retainAutoreleasedReturnValue(uVar19);
  local_f0 = &cf_Trusted;
  local_d8 = local_1a0;
  uVar19 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
  local_198 = _objc_retainAutoreleasedReturnValue(uVar19);
  local_d0 = local_198;
  uVar19 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                             &local_e8,&local_108,4);
  uVar19 = _objc_retainAutoreleasedReturnValue(uVar19);
  (*(code *)puVar1)(uVar6,"setObject:forKeyedSubscript:",uVar19,uVar18);
LAB_00233392:
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar19);
  (*(code *)puVar2)(local_198);
  (*(code *)puVar2)(local_1a0);
  (*(code *)puVar2)(local_170);
  uVar19 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"dictionaryWithDictionary:",uVar6);
  uVar20 = _objc_retainAutoreleasedReturnValue(uVar19);
  lVar3 = _requestDictionary;
  uVar19 = *(undefined8 *)(param_1 + _requestDictionary);
  *(undefined8 *)(param_1 + _requestDictionary) = uVar20;
  (*(code *)puVar2)(uVar19);
  (*(code *)puVar1)(param_1,"verboseLog:",&cf_ATCRT_u_requestdictionary___,
                    *(byte *)(param_1 + _tagNumber) - 1,*(undefined8 *)(param_1 + lVar3));
  (*(code *)puVar2)(uVar18);
  (*(code *)puVar2)(uVar17);
  (*(code *)puVar2)(uVar16);
  (*(code *)puVar2)(uVar15);
  (*(code *)puVar2)(uVar14);
  (*(code *)puVar2)(uVar13);
  (*(code *)puVar2)(uVar12);
  (*(code *)puVar2)(uVar11);
  (*(code *)puVar2)(uVar10);
  (*(code *)puVar2)(uVar9);
  (*(code *)puVar2)(uVar8);
  (*(code *)puVar2)(uVar7);
  (*(code *)puVar2)(uVar6);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

