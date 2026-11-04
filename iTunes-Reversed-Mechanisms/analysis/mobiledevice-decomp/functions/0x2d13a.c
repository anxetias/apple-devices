// rea decompile_all
// name: _DERDecodeSeqNext
// address: 0x2d13a
// body: available
// range: 0x2d13a-0x2d1cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2d1be to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DERDecodeSeqNext(ulong *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  local_30 = 0;
  uVar3 = *param_1;
  uVar2 = 1;
  if (uVar3 < param_1[1]) {
    local_28 = param_1[1] - uVar3;
    local_30 = uVar3;
    uVar2 = _DERDecodeItemPartialBufferGetLength(&local_30,param_2,0);
    if ((int)uVar2 == 0) {
      uVar3 = *(ulong *)(param_2 + 8) + *(ulong *)(param_2 + 0x10);
      if (CARRY8(*(ulong *)(param_2 + 8),*(ulong *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((param_1[1] < uVar3) || (uVar3 < *param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *param_1 = uVar3;
      uVar2 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

