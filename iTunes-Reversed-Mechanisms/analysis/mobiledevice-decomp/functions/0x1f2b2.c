// rea decompile_all
// name: _ccrsa_verify_pkcs1v15_digest_ws
// address: 0x1f2b2
// body: available
// range: 0x1f2b2-0x1f320 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1f31c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccrsa_verify_pkcs1v15_digest_ws(void)

{
  long lVar1;
  undefined8 *in_stack_00000010;
  
  lVar1 = *(long *)PTR____stack_chk_guard_004412b8;
  if (in_stack_00000010 != (undefined8 *)0x0) {
    *in_stack_00000010 = 0;
    in_stack_00000010[1] = 0;
  }
  _ccrsa_verify_pkcs1v15_internal_ws();
  if (in_stack_00000010 != (undefined8 *)0x0) {
    *(undefined4 *)in_stack_00000010 = 0;
    *(undefined4 *)((long)in_stack_00000010 + 4) = 0;
    *(undefined4 *)(in_stack_00000010 + 1) = 0;
    *(undefined4 *)((long)in_stack_00000010 + 0xc) = 0;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

