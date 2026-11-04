// rea decompile_all
// name: UARPSuperBinaryPayloadBackDeploy::removeSubfile:tag:
// address: 0x2363c0
// body: available
// range: 0x2363c0-0x2365b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2365ad to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

void UARPSuperBinaryPayloadBackDeploy::removeSubfile_tag_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_128;
  long lStack_120;
  long *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  char *local_e8;
  long local_e0;
  ID local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar2 = PTR__objc_retain_004410a8;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_d0 = (*(code *)PTR__objc_retain_004410a8)(param_4);
  local_128 = 0;
  lStack_120 = 0;
  local_118 = (long *)0x0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  lVar3 = (*(code *)puVar2)(*(undefined8 *)(param_1 + 0x60));
  local_c8 = (*(code *)PTR__objc_msgSend_00441098)
                       (lVar3,"countByEnumeratingWithState:objects:count:",&local_128,local_b8,0x10)
  ;
  if (local_c8 != 0) {
    local_e0 = *local_118;
    local_d8 = param_1;
    local_c0 = lVar3;
    do {
      local_e8 = "tag";
      lVar6 = 0;
      do {
        if (*local_118 != local_e0) {
          _objc_enumerationMutation(local_c0);
        }
        puVar2 = PTR__objc_msgSend_00441098;
        uVar1 = *(undefined8 *)(lStack_120 + lVar6 * 8);
        uVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar1,local_e8);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        lVar5 = (*(code *)puVar2)(uVar4,"compare:",local_d0);
        (*(code *)PTR__objc_release_004410a0)(uVar4);
        lVar3 = local_c0;
        if (lVar5 == 0) {
          lVar3 = (*(code *)PTR__objc_retain_004410a8)(uVar1);
          (*(code *)PTR__objc_release_004410a0)(local_c0);
          if (lVar3 == 0) goto LAB_0023657e;
          (*(code *)PTR__objc_msgSend_00441098)
                    (*(undefined8 *)(local_d8 + 0x60),"removeObject:",lVar3);
          goto LAB_00236575;
        }
        lVar6 = lVar6 + 1;
      } while (local_c8 != lVar6);
      local_c8 = (*(code *)PTR__objc_msgSend_00441098)
                           (local_c0,"countByEnumeratingWithState:objects:count:",&local_128,
                            local_b8,0x10);
    } while (local_c8 != 0);
  }
LAB_00236575:
  (*(code *)PTR__objc_release_004410a0)(lVar3);
LAB_0023657e:
  (*(code *)PTR__objc_release_004410a0)(local_d0);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

