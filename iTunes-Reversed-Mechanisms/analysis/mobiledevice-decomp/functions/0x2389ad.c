// rea decompile_all
// name: FTABFileBackDeploy::addSubfiles:
// address: 0x2389ad
// body: available
// range: 0x2389ad-0x238b42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x238b3e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void FTABFileBackDeploy::addSubfiles_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_118;
  long lStack_110;
  long *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  long local_d0;
  ID local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_c8 = param_1;
  local_c0 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  local_118 = 0;
  lStack_110 = 0;
  local_108 = (long *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d0 = (*(code *)PTR__objc_msgSend_00441098)
                       (local_c0,"countByEnumeratingWithState:objects:count:",&local_118,local_b8,
                        0x10);
  if (local_d0 != 0) {
    local_d8 = *local_108;
    do {
      lVar3 = 0;
      do {
        if (*local_108 != local_d8) {
          _objc_enumerationMutation(local_c0);
        }
        puVar1 = PTR__objc_msgSend_00441098;
        uVar2 = (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(lStack_110 + lVar3 * 8),"tag")
        ;
        uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
        (*(code *)puVar1)(local_c8,"removeSubfileWithTag:",uVar2);
        (*(code *)PTR__objc_release_004410a0)(uVar2);
        lVar3 = lVar3 + 1;
      } while (local_d0 != lVar3);
      local_d0 = (*(code *)PTR__objc_msgSend_00441098)
                           (local_c0,"countByEnumeratingWithState:objects:count:",&local_118,
                            local_b8,0x10);
    } while (local_d0 != 0);
  }
  uVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_00441098)
            (*(undefined8 *)(local_c8 + 0x10),"addObjectsFromArray:",local_c0);
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

