// rea decompile_all
// name: _DERLengthOfEncodedSequence
// address: 0x2e063
// body: available
// range: 0x2e063-0x2e0db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2e0d7 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_DERLengthOfEncodedSequence(undefined8 param_1,ulong param_2,undefined2 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_004412b8;
  local_18 = 0;
  if ((param_2 | 0x7fffffffffffffff) < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  iVar2 = _DERLengthOfEncodedSequenceFromObject
                    (param_1,param_2,~param_2 & 0x7fffffffffffffff,param_3,param_4,&local_18);
  uVar3 = local_18;
  if (iVar2 != 0) {
    uVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_10) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

