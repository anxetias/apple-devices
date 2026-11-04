// rea decompile_all
// name: RamrodHostMessagePlist::sendToSocket:
// address: 0xe85b8
// body: available
// range: 0xe85b8-0xe8781 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe877d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x14 bytes */

int RamrodHostMessagePlist::sendToSocket_(ID param_1,SEL param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
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
  long local_d8;
  undefined8 local_d0;
  int local_c4;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_c4 = param_3;
  uVar3 = _objc_autoreleasePoolPush();
  local_128 = 0;
  lStack_120 = 0;
  local_118 = (long *)0x0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_c0 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(param_1 + _chunks));
  local_d8 = (*(code *)PTR__objc_msgSend_00441098)
                       (local_c0,"countByEnumeratingWithState:objects:count:",&local_128,local_b8,
                        0x10);
  if (local_d8 == 0) {
    iVar2 = 0;
  }
  else {
    local_e0 = *local_118;
    local_d0 = uVar3;
    do {
      local_e8 = "bytes";
      lVar5 = 0;
      do {
        if (*local_118 != local_e0) {
          _objc_enumerationMutation(local_c0);
        }
        uVar3 = _objc_retainAutorelease(*(undefined8 *)(lStack_120 + lVar5 * 8));
        puVar1 = PTR__objc_msgSend_00441098;
        uVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,local_e8);
        uVar3 = (*(code *)puVar1)(uVar3,"length");
        iVar2 = _ramrod_send_bytes(local_c4,uVar4,uVar3);
        uVar3 = local_d0;
        if (iVar2 != 0) goto LAB_000e8743;
        lVar5 = lVar5 + 1;
      } while (local_d8 != lVar5);
      local_d8 = (*(code *)PTR__objc_msgSend_00441098)
                           (local_c0,"countByEnumeratingWithState:objects:count:",&local_128,
                            local_b8,0x10);
    } while (local_d8 != 0);
    iVar2 = 0;
    uVar3 = local_d0;
  }
LAB_000e8743:
  (*(code *)PTR__objc_release_004410a0)(local_c0);
  _objc_autoreleasePoolPop(uVar3);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

