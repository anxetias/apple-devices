// rea decompile_all
// name: _BuildAndStoreHuffmanTree
// address: 0x93e78
// body: available
// range: 0x93e78-0x941e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x940b1 to 0x911c7 _BrotliStoreHuffmanTree (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x941dc to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BuildAndStoreHuffmanTree
               (long param_1,long param_2,long param_3,undefined8 param_4,long param_5,long param_6,
               ulong *param_7,long param_8)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long local_58 [5];
  
  local_58[4] = *(long *)PTR____stack_chk_guard_004412b8;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  if (param_2 == 0) {
    uVar8 = 0;
  }
  else {
    lVar2 = 0;
    uVar8 = 0;
    do {
      if (*(int *)(param_1 + lVar2 * 4) != 0) {
        if (uVar8 < 4) {
          local_58[uVar8] = lVar2;
        }
        else if (uVar8 != 4) break;
        uVar8 = uVar8 + 1;
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != lVar2);
  }
  uVar5 = param_3 - 1;
  uVar4 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> uVar4 == 0; uVar4 = uVar4 - 1) {
    }
  }
  lVar2 = (uVar4 ^ 0xffffffffffffffc0) + 0x41;
  if (uVar5 == 0) {
    lVar2 = 0;
  }
  if (uVar8 < 2) {
    uVar4 = *param_7;
    uVar8 = uVar4 + 4;
    *(ulong *)(param_8 + (uVar4 >> 3)) =
         (ulong)*(byte *)(param_8 + (uVar4 >> 3)) | 1L << ((byte)uVar4 & 7);
    *param_7 = uVar8;
    *(ulong *)(param_8 + (uVar8 >> 3)) =
         local_58[0] << ((byte)uVar8 & 7) | (ulong)*(byte *)(param_8 + (uVar8 >> 3));
    *param_7 = lVar2 + uVar4 + 4;
    *(undefined1 *)(param_5 + local_58[0]) = 0;
    *(undefined2 *)(param_6 + local_58[0] * 2) = 0;
  }
  else {
    ___bzero(param_5,param_2);
    _BrotliCreateHuffmanTree(param_1,param_2,0xf,param_4,param_5);
    _BrotliConvertBitDepthsToSymbols(param_5,param_2,param_6);
    if (4 < uVar8) {
      if (*(long *)PTR____stack_chk_guard_004412b8 == local_58[4]) {
        _BrotliStoreHuffmanTree(param_5,param_2,param_4,param_7,param_8);
        return;
      }
      goto LAB_000941dc;
    }
    uVar5 = *param_7;
    *(ulong *)(param_8 + (uVar5 >> 3)) =
         (ulong)*(byte *)(param_8 + (uVar5 >> 3)) | 1L << ((byte)uVar5 & 7);
    uVar4 = uVar5 + 2;
    *param_7 = uVar4;
    *(ulong *)(param_8 + (uVar4 >> 3)) =
         uVar8 - 1 << ((byte)uVar4 & 7) | (ulong)*(byte *)(param_8 + (uVar4 >> 3));
    uVar5 = uVar5 + 4;
    *param_7 = uVar5;
    uVar4 = 0;
    do {
      uVar3 = uVar4 + 1;
      if (uVar3 < uVar8) {
        lVar6 = local_58[uVar4];
        uVar7 = uVar3;
        do {
          lVar1 = local_58[uVar7];
          if (*(byte *)(param_5 + lVar1) < *(byte *)(param_5 + lVar6)) {
            local_58[uVar7] = lVar6;
            local_58[uVar4] = lVar1;
            lVar6 = lVar1;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
      uVar4 = uVar3;
    } while (uVar3 != uVar8);
    uVar3 = local_58[0] << ((byte)uVar5 & 7);
    uVar4 = uVar5 >> 3;
    uVar5 = uVar5 + lVar2;
    if (uVar8 == 3) {
      *(ulong *)(param_8 + uVar4) = uVar3 | *(byte *)(param_8 + uVar4);
      *param_7 = uVar5;
      *(ulong *)(param_8 + (uVar5 >> 3)) =
           local_58[1] << ((byte)uVar5 & 7) | (ulong)*(byte *)(param_8 + (uVar5 >> 3));
      uVar5 = uVar5 + lVar2;
      *param_7 = uVar5;
      lVar6 = local_58[2];
LAB_000940ee:
      *(ulong *)(param_8 + (uVar5 >> 3)) =
           lVar6 << ((byte)uVar5 & 7) | (ulong)*(byte *)(param_8 + (uVar5 >> 3));
      uVar5 = lVar2 + uVar5;
    }
    else {
      if (uVar8 == 2) {
        *(ulong *)(param_8 + uVar4) = uVar3 | *(byte *)(param_8 + uVar4);
        *param_7 = uVar5;
        lVar6 = local_58[1];
        goto LAB_000940ee;
      }
      *(ulong *)(param_8 + uVar4) = uVar3 | *(byte *)(param_8 + uVar4);
      *param_7 = uVar5;
      *(ulong *)(param_8 + (uVar5 >> 3)) =
           local_58[1] << ((byte)uVar5 & 7) | (ulong)*(byte *)(param_8 + (uVar5 >> 3));
      uVar5 = uVar5 + lVar2;
      *param_7 = uVar5;
      *(ulong *)(param_8 + (uVar5 >> 3)) =
           local_58[2] << ((byte)uVar5 & 7) | (ulong)*(byte *)(param_8 + (uVar5 >> 3));
      uVar5 = uVar5 + lVar2;
      *param_7 = uVar5;
      *(ulong *)(param_8 + (uVar5 >> 3)) =
           local_58[3] << ((byte)uVar5 & 7) | (ulong)*(byte *)(param_8 + (uVar5 >> 3));
      uVar8 = uVar5 + lVar2;
      *param_7 = uVar8;
      *(ulong *)(param_8 + (uVar8 >> 3)) =
           (ulong)(*(char *)(param_5 + local_58[0]) == '\x01') << ((byte)uVar8 & 7) |
           (ulong)*(byte *)(param_8 + (uVar8 >> 3));
      uVar5 = lVar2 + uVar5 + 1;
    }
    *param_7 = uVar5;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_58[4]) {
    return;
  }
LAB_000941dc:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

