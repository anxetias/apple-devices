// rea decompile_all
// name: UARPMetaDataTLVBackDeploy::tlvFromKey:value:
// address: 0x23e7a0
// body: available
// range: 0x23e7a0-0x23ea89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x23ea80 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x23ea85 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID UARPMetaDataTLVBackDeploy::tlvFromKey_value_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ID IVar9;
  code *pcVar10;
  long lVar11;
  undefined8 local_158;
  long lStack_150;
  long *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  char *local_118;
  char *local_110;
  long local_108;
  cfstringStruct *local_100;
  char *local_f8;
  cfstringStruct *local_f0;
  char *local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_d8 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  local_d0 = (*(code *)puVar1)(param_4);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                    (&objc::class_t::UARPMetaDataTLVBackDeploy,"metaDataTable");
  local_c8 = _objc_retainAutoreleasedReturnValue(uVar5);
  local_158 = 0;
  lStack_150 = 0;
  local_148 = (long *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_e0 = (*(code *)puVar1)(local_c8,"countByEnumeratingWithState:objects:count:",&local_158,
                               local_b8,0x10);
  if (local_e0 == 0) {
    local_c0 = 0;
  }
  else {
    local_108 = *local_148;
    local_100 = &cf_Name;
    local_f0 = &cf_Value;
    local_c0 = 0;
    do {
      local_110 = "caseInsensitiveCompare:";
      local_f8 = "unsignedLongValue";
      local_e8 = "tlvFromPropertyListValue:";
      lVar11 = 0;
      local_118 = "objectForKeyedSubscript:";
      do {
        pcVar2 = local_118;
        if (*local_148 != local_108) {
          _objc_enumerationMutation(local_c8);
        }
        puVar1 = PTR__objc_msgSend_00441098;
        uVar5 = *(undefined8 *)(lStack_150 + lVar11 * 8);
        uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,pcVar2,local_100);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        lVar7 = (*(code *)puVar1)(local_d8,local_110,uVar6);
        pcVar10 = (code *)PTR__objc_release_004410a0;
        if (lVar7 == 0) {
          uVar5 = (*(code *)puVar1)(uVar5,pcVar2,local_f0);
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          iVar3 = (*(code *)puVar1)(uVar5,local_f8);
          pcVar10 = (code *)PTR__objc_release_004410a0;
          uVar4 = iVar3 + 0x774d6f00;
          if ((uVar4 < 0x36) && ((0x3f036601ffffffU >> ((ulong)uVar4 & 0x3f) & 1) != 0)) {
            uVar8 = (*(code *)PTR__objc_msgSend_00441098)
                              (**(undefined8 **)(&DAT_0044e960 + (ulong)uVar4 * 8),local_e8,local_d0
                              );
            uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
            (*pcVar10)(local_c0);
            local_c0 = uVar8;
          }
          (*pcVar10)(uVar5);
        }
        (*pcVar10)(uVar6);
        lVar11 = lVar11 + 1;
      } while (local_e0 != lVar11);
      local_e0 = (*(code *)PTR__objc_msgSend_00441098)
                           (local_c8,"countByEnumeratingWithState:objects:count:",&local_158,
                            local_b8,0x10);
    } while (local_e0 != 0);
  }
  puVar1 = PTR__objc_release_004410a0;
  local_e0 = 0;
  (*(code *)PTR__objc_release_004410a0)(local_c8);
  (*(code *)puVar1)(local_d0);
  (*(code *)puVar1)(local_d8);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  IVar9 = _objc_autoreleaseReturnValue(local_c0);
  return IVar9;
}

