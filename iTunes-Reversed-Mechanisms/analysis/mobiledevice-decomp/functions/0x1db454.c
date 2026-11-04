// rea decompile_all
// name: _BrotliConvertBitDepthsToSymbols
// address: 0x1db454
// body: available
// range: 0x1db454-0x1db53c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1db538 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliConvertBitDepthsToSymbols(long param_1,long param_2,long param_3)

{
  short *psVar1;
  byte bVar2;
  long lVar3;
  ushort uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ushort auStack_58 [16];
  ulong local_38 [5];
  
  local_38[4] = *(long *)PTR____stack_chk_guard_004412b8;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      psVar1 = (short *)((long)local_38 + (ulong)*(byte *)(param_1 + lVar3) * 2);
      *psVar1 = *psVar1 + 1;
      lVar3 = lVar3 + 1;
    } while (param_2 != lVar3);
  }
  local_38[0] = local_38[0] & 0xffffffffffff0000;
  lVar3 = 1;
  uVar4 = 0;
  do {
    uVar4 = (uVar4 + auStack_58[lVar3 + 0xf]) * 2;
    auStack_58[lVar3] = uVar4;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      bVar2 = *(byte *)(param_1 + lVar3);
      uVar5 = (ulong)bVar2;
      if (uVar5 != 0) {
        uVar7 = (uint)auStack_58[uVar5];
        auStack_58[uVar5] = auStack_58[uVar5] + 1;
        uVar6 = *(ulong *)(&_BrotliReverseBits_kLut + (ulong)(uVar7 & 0xf) * 8);
        if (4 < bVar2) {
          uVar8 = 4;
          do {
            uVar7 = uVar7 >> 4;
            uVar6 = uVar6 << 4 | *(ulong *)(&_BrotliReverseBits_kLut + (ulong)(uVar7 & 0xf) * 8);
            uVar8 = uVar8 + 4;
          } while (uVar8 < uVar5);
        }
        *(short *)(param_3 + lVar3 * 2) = (short)(uVar6 >> (-bVar2 & 3));
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != param_2);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38[4]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

