// rea decompile_all
// name: _AppleTypeCRetimerRestoreInfoGetTags
// address: 0x23dae0
// body: available
// range: 0x23dae0-0x23e028 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x23e024 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AppleTypeCRetimerRestoreInfoGetTags(undefined8 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 local_1b8;
  long lStack_1b0;
  long *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  char *local_170;
  char *local_168;
  char *local_160;
  long local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined8 local_138;
  long local_130;
  long local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  pcVar10 = (code *)PTR__objc_msgSend_00441098;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"objectForKeyedSubscript:",&cf_DeviceInfo);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*pcVar10)(uVar4,"objectForKeyedSubscript:",&cf_InfoArray);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
  local_138 = uVar4;
  local_130 = lVar6;
  if (lVar6 == 0) {
    uVar5 = (*pcVar10)(uVar4,"objectForKeyedSubscript:",&cf_TicketName);
    local_110 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar4 = (*pcVar10)(uVar4,"objectForKeyedSubscript:",&cf_TagNumber);
    local_118 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar3 = (*pcVar10)(local_118,"unsignedCharValue");
    uVar4 = (*pcVar10)(&_OBJC_CLASS___NSString,
                       "stringWithValidatedFormat:validFormatSpecifiers:error:",&cf_Timer_RTKitOS__u
                       ,&cf__u,0,uVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    local_f8 = &cf_BuildIdentityTags;
    local_100 = uVar5;
    uVar4 = (*pcVar10)(&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_100,1);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = local_110;
    local_f0 = &cf_ResponseTags;
    local_108 = local_110;
    local_e8 = uVar7;
    uVar8 = (*pcVar10)(&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_108,1);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar8);
    local_e0 = uVar9;
    uVar8 = (*pcVar10)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",&local_e8,
                       &local_f8,2);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)PTR__objc_release_004410a0)(uVar9);
  }
  else {
    uVar4 = (*pcVar10)(&_OBJC_CLASS___NSMutableArray,"array");
    local_110 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = (*pcVar10)(&_OBJC_CLASS___NSMutableArray,"array");
    local_118 = _objc_retainAutoreleasedReturnValue(uVar4);
    local_1b8 = 0;
    lStack_1b0 = 0;
    local_1a8 = (long *)0x0;
    uStack_1a0 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_120 = (*(code *)PTR__objc_retain_004410a8)(lVar6);
    local_128 = (*pcVar10)(local_120,"countByEnumeratingWithState:objects:count:",&local_1b8,
                           local_b8,0x10);
    if (local_128 != 0) {
      local_158 = *local_1a8;
      local_150 = &cf_TicketName;
      local_148 = &cf_TagNumber;
      local_140 = &cf_Timer_RTKitOS__u;
      do {
        local_170 = "unsignedCharValue";
        local_168 = "stringWithValidatedFormat:validFormatSpecifiers:error:";
        local_160 = "addObject:";
        lVar6 = 0;
        do {
          if (*local_1a8 != local_158) {
            _objc_enumerationMutation(local_120);
          }
          puVar1 = PTR__objc_msgSend_00441098;
          uVar4 = *(undefined8 *)(lStack_1b0 + lVar6 * 8);
          uVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"objectForKeyedSubscript:",local_150);
          local_178 = _objc_retainAutoreleasedReturnValue(uVar5);
          uVar4 = (*(code *)puVar1)(uVar4,"objectForKeyedSubscript:",local_148);
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
          uVar3 = (*(code *)puVar1)(uVar5,local_170);
          uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,local_168,local_140,&cf__u,0,uVar3);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar4);
          pcVar2 = local_160;
          (*(code *)puVar1)(local_110,local_160,uVar7);
          uVar4 = local_178;
          (*(code *)puVar1)(local_118,pcVar2,local_178);
          puVar1 = PTR__objc_release_004410a0;
          (*(code *)PTR__objc_release_004410a0)(uVar7);
          (*(code *)puVar1)(uVar5);
          (*(code *)puVar1)(uVar4);
          pcVar10 = (code *)PTR__objc_msgSend_00441098;
          lVar6 = lVar6 + 1;
        } while (local_128 != lVar6);
        local_128 = (*(code *)PTR__objc_msgSend_00441098)
                              (local_120,"countByEnumeratingWithState:objects:count:",&local_1b8,
                               local_b8);
      } while (local_128 != 0);
    }
    (*(code *)PTR__objc_release_004410a0)(local_120);
    uVar4 = local_110;
    local_d8 = &cf_BuildIdentityTags;
    uVar5 = (*pcVar10)(&_OBJC_CLASS___NSArray,"arrayWithArray:",local_110);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    local_d0 = &cf_ResponseTags;
    local_c8 = uVar5;
    uVar7 = (*pcVar10)(&_OBJC_CLASS___NSArray,"arrayWithArray:",local_118);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    local_c0 = uVar7;
    uVar8 = (*pcVar10)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",&local_c8,
                       &local_d8,2);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar7);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(local_118);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(local_130);
  (*(code *)puVar1)(local_138);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

