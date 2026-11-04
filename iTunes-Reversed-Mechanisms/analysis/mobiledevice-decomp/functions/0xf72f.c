// rea decompile_all
// name: _update
// address: 0xf72f
// body: available
// range: 0xf72f-0xf7df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf7db to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _update(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  uStack_40 = 0xf75b;
  lVar2 = _ccctr_context_size(*(undefined8 *)(param_1 + 0x38));
  lVar2 = -(lVar2 + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_38 + lVar2;
  *(undefined8 *)(auStack_38 + lVar2 + -8) = 0xf774;
  ___bzero(puVar4);
  *(undefined8 *)(auStack_38 + lVar2 + -8) = 0xf786;
  _inc_uint(param_1 + 0x28,8);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(auStack_38 + lVar2 + -8) = 0xf79c;
  _ccctr_init_internal(uVar3,puVar4,uVar1,param_1,param_1 + 0x20);
  *(undefined8 *)(auStack_38 + lVar2 + -8) = 0xf7aa;
  _update_with_ctr(param_1,puVar4,param_2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(auStack_38 + lVar2 + -8) = 0xf7b3;
  uVar3 = _ccctr_context_size(uVar3);
  *(undefined8 *)(auStack_38 + lVar2 + -8) = 0xf7be;
  _cc_clear(uVar3,puVar4);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(auStack_38 + lVar2 + -8) = _update_with_ctr;
  ___stack_chk_fail();
}

