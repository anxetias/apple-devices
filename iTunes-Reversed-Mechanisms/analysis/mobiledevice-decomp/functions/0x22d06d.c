// rea decompile_all
// name: UARPSuperBinaryBackDeploy::generatePersonalizedSuperBinaryWithoutRRKO
// address: 0x22d06d
// body: available
// range: 0x22d06d-0x22d333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x22d32a to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x22d32f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID UARPSuperBinaryBackDeploy::generatePersonalizedSuperBinaryWithoutRRKO(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  long lVar9;
  undefined8 local_158;
  long lStack_150;
  long *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  char *local_110;
  char *local_108;
  long local_100;
  char *local_f8;
  ID local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar6 = _objc_alloc(&objc::class_t::UARPAssetTagBackDeploy);
  puVar1 = PTR__objc_msgSend_00441098;
  local_d8 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"initWithString:",&cf_RRKO);
  uVar6 = _objc_alloc(&objc::class_t::UARPAssetTagBackDeploy);
  local_d0 = (*(code *)puVar1)(uVar6,"initWithString:",&cf_rrko);
  local_c8 = (*(code *)puVar1)(&_OBJC_CLASS___NSMutableArray,"new");
  local_158 = 0;
  lStack_150 = 0;
  local_148 = (long *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_f0 = param_1;
  local_c0 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(param_1 + 0x50));
  local_e0 = (*(code *)puVar1)(local_c0,"countByEnumeratingWithState:objects:count:",&local_158,
                               local_b8,0x10);
  if (local_e0 != 0) {
    local_100 = *local_148;
    do {
      local_f8 = "addObject:";
      lVar9 = 0;
      local_110 = "tag";
      local_108 = "isEqual:";
      do {
        pcVar3 = local_110;
        if (*local_148 != local_100) {
          _objc_enumerationMutation(local_c0);
        }
        local_e8 = *(undefined8 *)(lStack_150 + lVar9 * 8);
        uVar6 = (*(code *)puVar1)(local_e8,pcVar3);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        pcVar4 = local_108;
        cVar5 = (*(code *)puVar1)(uVar6,local_108,local_d8);
        if (cVar5 == '\x01') {
          (*(code *)PTR__objc_release_004410a0)(uVar6);
        }
        else {
          uVar7 = (*(code *)puVar1)(local_e8,pcVar3);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          cVar5 = (*(code *)puVar1)(uVar7,pcVar4,local_d0);
          puVar2 = PTR__objc_release_004410a0;
          (*(code *)PTR__objc_release_004410a0)(uVar7);
          (*(code *)puVar2)(uVar6);
          if (cVar5 != '\x01') {
            (*(code *)puVar1)(local_c8,local_f8,local_e8);
          }
        }
        lVar9 = lVar9 + 1;
      } while (local_e0 != lVar9);
      local_e0 = (*(code *)puVar1)(local_c0,"countByEnumeratingWithState:objects:count:",&local_158,
                                   local_b8,0x10);
    } while (local_e0 != 0);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_c0);
  uVar6 = local_c8;
  uVar7 = (*(code *)PTR__objc_msgSend_00441098)
                    (local_f0,"generatePersonalizedSuperBinaryInternal:",local_c8);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar1)(uVar6);
  (*(code *)puVar1)(local_d0);
  (*(code *)puVar1)(local_d8);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    IVar8 = _objc_autoreleaseReturnValue(uVar7);
    return IVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

