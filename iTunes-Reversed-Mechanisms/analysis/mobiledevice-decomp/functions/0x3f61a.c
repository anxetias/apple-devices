// rea decompile_all
// name: -[NSString(InstallCoordinationAdditions)_containsDotDotPathComponents]
// address: 0x3f61a
// body: available
// range: 0x3f61a-0x3f77b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f777 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
__NSString_InstallCoordinationAdditions__containsDotDotPathComponents_(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  undefined8 local_108;
  long lStack_100;
  long *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar2 = PTR__objc_msgSend_00441098;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"pathComponents");
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_108 = 0;
  lStack_100 = 0;
  local_f8 = (long *)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c0 = (*(code *)PTR__objc_retain_004410a8)(uVar4);
  lVar5 = (*(code *)puVar2)(local_c0,"countByEnumeratingWithState:objects:count:",&local_108,
                            local_b8,0x10);
  if (lVar5 != 0) {
    lVar1 = *local_f8;
    do {
      lVar7 = 0;
      do {
        if (*local_f8 != lVar1) {
          _objc_enumerationMutation(local_c0);
        }
        cVar3 = (*(code *)PTR__objc_msgSend_00441098)
                          (*(undefined8 *)(lStack_100 + lVar7 * 8),"isEqualToString:",&cf___);
        if (cVar3 != '\0') {
          uVar6 = 1;
          goto LAB_0003f738;
        }
        lVar7 = lVar7 + 1;
      } while (lVar5 != lVar7);
      lVar5 = (*(code *)PTR__objc_msgSend_00441098)
                        (local_c0,"countByEnumeratingWithState:objects:count:",&local_108,local_b8,
                         0x10);
    } while (lVar5 != 0);
  }
  uVar6 = 0;
LAB_0003f738:
  uVar4 = local_c0;
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_c0);
  (*(code *)puVar2)(uVar4);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

