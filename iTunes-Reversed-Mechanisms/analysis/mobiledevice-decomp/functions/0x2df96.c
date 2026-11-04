// rea decompile_all
// name: _DERLengthOfEncodedSequenceFromObject
// address: 0x2df96
// body: available
// range: 0x2df96-0x2e062 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2e05a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0002e014) */
/* WARNING: Removing unreachable block (ram,0x0002e01f) */

undefined8
_DERLengthOfEncodedSequenceFromObject
          (ulong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5
          ,long *param_6)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar1 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar4 = _DERContentLengthOfEncodedSequence(param_2,param_3,param_4,param_5);
  if ((int)uVar4 == 0) {
    param_1 = param_1 & 0x1fffffffffffffff;
    uVar5 = 1;
    if (0x1e < param_1) {
      do {
        uVar5 = uVar5 + 1;
        bVar2 = 0x7f < param_1;
        param_1 = param_1 >> 7;
      } while (bVar2);
    }
    if (0xfffffffffffffffe < uVar5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *param_6 = uVar5 + 1;
    uVar4 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == lVar1) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

