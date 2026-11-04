// rea decompile_all
// name: FTABFileBackDeploy::subfileWithTag:
// address: 0x2382c6
// body: available
// range: 0x2382c6-0x23848a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x238481 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x238486 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID FTABFileBackDeploy::subfileWithTag_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  long lVar6;
  undefined8 local_128;
  long lStack_120;
  long *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  char *local_e0;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_d0 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  local_128 = 0;
  lStack_120 = 0;
  local_118 = (long *)0x0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_c0 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x10));
  local_c8 = (*(code *)PTR__objc_msgSend_00441098)
                       (local_c0,"countByEnumeratingWithState:objects:count:",&local_128,local_b8,
                        0x10);
  if (local_c8 != 0) {
    local_d8 = *local_118;
    do {
      local_e0 = "tag";
      lVar6 = 0;
      do {
        if (*local_118 != local_d8) {
          _objc_enumerationMutation(local_c0);
        }
        puVar1 = PTR__objc_msgSend_00441098;
        uVar4 = *(undefined8 *)(lStack_120 + lVar6 * 8);
        uVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,local_e0);
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        cVar2 = (*(code *)puVar1)(uVar3,"isEqual:",local_d0);
        (*(code *)PTR__objc_release_004410a0)(uVar3);
        if (cVar2 != '\0') {
          uVar4 = (*(code *)PTR__objc_retain_004410a8)(uVar4);
          goto LAB_00238444;
        }
        lVar6 = lVar6 + 1;
      } while (local_c8 != lVar6);
      local_c8 = (*(code *)PTR__objc_msgSend_00441098)
                           (local_c0,"countByEnumeratingWithState:objects:count:",&local_128,
                            local_b8,0x10);
    } while (local_c8 != 0);
  }
  uVar4 = 0;
LAB_00238444:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_c0);
  (*(code *)puVar1)(local_d0);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    IVar5 = _objc_autoreleaseReturnValue(uVar4);
    return IVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

