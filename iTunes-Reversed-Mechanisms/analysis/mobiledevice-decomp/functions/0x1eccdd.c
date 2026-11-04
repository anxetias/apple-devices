// rea decompile_all
// name: _BrotliOptimizeHistograms
// address: 0x1eccdd
// body: available
// range: 0x1eccdd-0x1ecdef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ecdeb to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliOptimizeHistograms(undefined4 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 local_2f8 [704];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (*(long *)(param_2 + 0xb8) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      _BrotliOptimizeHuffmanCountsForRle(0x100,*(long *)(param_2 + 0xb0) + lVar1,local_2f8);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x410;
    } while (uVar2 < *(ulong *)(param_2 + 0xb8));
  }
  if (*(long *)(param_2 + 200) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      _BrotliOptimizeHuffmanCountsForRle(0x2c0,*(long *)(param_2 + 0xc0) + lVar1,local_2f8);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0xb10;
    } while (uVar2 < *(ulong *)(param_2 + 200));
  }
  if (*(long *)(param_2 + 0xd8) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      _BrotliOptimizeHuffmanCountsForRle(param_1,*(long *)(param_2 + 0xd0) + lVar1,local_2f8);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x890;
    } while (uVar2 < *(ulong *)(param_2 + 0xd8));
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

