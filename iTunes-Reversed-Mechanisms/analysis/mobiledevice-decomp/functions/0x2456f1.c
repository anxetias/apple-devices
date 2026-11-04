// rea decompile_all
// name: _PS190RestoreInfoGetTags
// address: 0x2456f1
// body: available
// range: 0x2456f1-0x245ba4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x245ba0 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _PS190RestoreInfoGetTags(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_1b8;
  long lStack_1b0;
  long *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  char *local_150;
  char *local_148;
  char *local_140;
  long local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  undefined8 local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar1 = PTR__objc_msgSend_00441098;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"objectForKeyedSubscript:",&cf_DeviceInfo);
  local_108 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar6 = (*(code *)puVar1)(local_108,"objectForKeyedSubscript:",&cf_InfoArray);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)puVar1)(&_OBJC_CLASS___NSMutableArray,"array");
  local_f8 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar7 = (*(code *)puVar1)(&_OBJC_CLASS___NSMutableArray,"array");
  local_f0 = _objc_retainAutoreleasedReturnValue(uVar7);
  local_1b8 = 0;
  lStack_1b0 = 0;
  local_1a8 = (long *)0x0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_e0 = (*(code *)PTR__objc_retain_004410a8)(uVar6);
  local_100 = (*(code *)puVar1)(local_e0,"countByEnumeratingWithState:objects:count:",&local_1b8,
                                local_b8,0x10);
  if (local_100 != 0) {
    local_138 = *local_1a8;
    local_130 = &cf_TagNumber;
    local_128 = &cf_PCON_u_Firmware;
    local_120 = &cf_PCON_u_BoardID;
    local_118 = &cf_PCON_u_SecurityDomain;
    local_110 = &cf_TicketName;
    do {
      local_150 = "unsignedIntValue";
      local_148 = "stringWithValidatedFormat:validFormatSpecifiers:error:";
      local_140 = "addObject:";
      lVar11 = 0;
      do {
        if (*local_1a8 != local_138) {
          _objc_enumerationMutation(local_e0);
        }
        puVar1 = PTR__objc_msgSend_00441098;
        local_168 = *(undefined8 *)(lStack_1b0 + lVar11 * 8);
        uVar6 = (*(code *)PTR__objc_msgSend_00441098)
                          (local_168,"objectForKeyedSubscript:",local_130);
        local_170 = _objc_retainAutoreleasedReturnValue(uVar6);
        uVar5 = (*(code *)puVar1)(local_170,local_150);
        pcVar3 = local_148;
        local_e8 = lVar11;
        uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,local_148,local_128,&cf__u,0,uVar5);
        local_160 = _objc_retainAutoreleasedReturnValue(uVar6);
        uVar6 = local_f8;
        pcVar4 = local_140;
        (*(code *)puVar1)(local_f8,local_140,local_160);
        uVar7 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,pcVar3,local_120,&cf__u,0,uVar5);
        local_158 = _objc_retainAutoreleasedReturnValue(uVar7);
        (*(code *)puVar1)(uVar6,pcVar4,local_158);
        uVar7 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,pcVar3,local_118,&cf__u,0,uVar5);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        (*(code *)puVar1)(uVar6,pcVar4,uVar7);
        uVar6 = (*(code *)puVar1)(local_168,"objectForKeyedSubscript:",local_110);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        (*(code *)puVar1)(local_f0,pcVar4,uVar6);
        puVar1 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar6);
        lVar11 = local_e8;
        (*(code *)puVar1)(uVar7);
        (*(code *)puVar1)(local_158);
        (*(code *)puVar1)(local_160);
        (*(code *)puVar1)(local_170);
        lVar11 = lVar11 + 1;
      } while (local_100 != lVar11);
      local_100 = (*(code *)PTR__objc_msgSend_00441098)
                            (local_e0,"countByEnumeratingWithState:objects:count:",&local_1b8,
                             local_b8);
    } while (local_100 != 0);
  }
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_e0);
  uVar6 = local_f8;
  puVar1 = PTR__objc_msgSend_00441098;
  local_d8 = &cf_BuildIdentityTags;
  uVar7 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSArray,"arrayWithArray:",local_f8);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar7 = local_f0;
  local_d0 = &cf_ResponseTags;
  local_c8 = uVar8;
  uVar9 = (*(code *)puVar1)(&_OBJC_CLASS___NSArray,"arrayWithArray:",local_f0);
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
  local_c0 = uVar9;
  uVar10 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                             &local_c8,&local_d8,2);
  local_e8 = _objc_retainAutoreleasedReturnValue(uVar10);
  (*(code *)puVar2)(uVar9);
  (*(code *)puVar2)(uVar8);
  (*(code *)puVar2)(uVar7);
  (*(code *)puVar2)(uVar6);
  (*(code *)puVar2)(local_e0);
  (*(code *)puVar2)(local_108);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return local_e8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

