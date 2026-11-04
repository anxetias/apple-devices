// rea decompile_all
// name: _BrotliStoreHuffmanTree
// address: 0x911c7
// body: available
// range: 0x911c7-0x91488 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x91484 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliStoreHuffmanTree
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,long param_5
               )

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  bool bVar10;
  long local_670;
  ulong *local_668;
  undefined8 local_660;
  int local_658 [20];
  ushort local_608 [24];
  byte local_5d8 [32];
  byte local_5b8 [704];
  byte local_2f8 [704];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar8 = 0;
  local_670 = 0;
  local_5d8[0] = 0;
  local_5d8[1] = 0;
  local_5d8[2] = 0;
  local_5d8[3] = 0;
  local_5d8[4] = 0;
  local_5d8[5] = 0;
  local_5d8[6] = 0;
  local_5d8[7] = 0;
  local_5d8[8] = 0;
  local_5d8[9] = 0;
  local_5d8[10] = 0;
  local_5d8[0xb] = 0;
  local_5d8[0xc] = 0;
  local_5d8[0xd] = 0;
  local_5d8[0xe] = 0;
  local_5d8[0xf] = 0;
  local_5d8[0x10] = 0;
  local_5d8[0x11] = 0;
  local_658[0x10] = 0;
  local_658[0x11] = 0;
  local_658[0xc] = 0;
  local_658[0xd] = 0;
  local_658[0xe] = 0;
  local_658[0xf] = 0;
  local_658[8] = 0;
  local_658[9] = 0;
  local_658[10] = 0;
  local_658[0xb] = 0;
  local_658[4] = 0;
  local_658[5] = 0;
  local_658[6] = 0;
  local_658[7] = 0;
  local_658[0] = 0;
  local_658[1] = 0;
  local_658[2] = 0;
  local_658[3] = 0;
  local_668 = param_4;
  local_660 = param_3;
  _BrotliWriteHuffmanTree(param_1,param_2,&local_670,local_2f8,local_5b8);
  if (local_670 != 0) {
    lVar5 = 0;
    do {
      local_658[local_2f8[lVar5]] = local_658[local_2f8[lVar5]] + 1;
      lVar5 = lVar5 + 1;
    } while (local_670 != lVar5);
  }
  lVar7 = 0;
  lVar5 = 0;
  do {
    lVar2 = lVar7;
    if ((local_658[lVar5] != 0) && (bVar10 = uVar8 != 0, uVar8 = 1, lVar2 = lVar5, bVar10)) {
      uVar8 = 2;
      break;
    }
    lVar7 = lVar2;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x12);
  uVar9 = 0x12;
  _BrotliCreateHuffmanTree(local_658,0x12,5,local_660,local_5d8);
  _BrotliConvertBitDepthsToSymbols(local_5d8,0x12,local_608);
  if (1 < uVar8) {
    do {
      if (local_5d8[(byte)(&UNK_0032acff)[uVar9]] != 0) goto LAB_0009131b;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    uVar9 = 0;
  }
LAB_0009131b:
  uVar6 = (ulong)(local_5d8[3] == '\0') + 2;
  if (local_5d8[2] != '\0' || local_5d8[1] != '\0') {
    uVar6 = 0;
  }
  uVar3 = *local_668;
  *(ulong *)(param_5 + (uVar3 >> 3)) =
       uVar6 << ((byte)uVar3 & 7) | (ulong)*(byte *)(param_5 + (uVar3 >> 3));
  uVar3 = uVar3 + 2;
  *local_668 = uVar3;
  uVar4 = uVar3;
  if (uVar6 < uVar9) {
    do {
      uVar4 = (byte)(&
                    _BrotliStoreHuffmanTreeOfHuffmanTreeToBitMask_kHuffmanBitLengthHuffmanCodeBitLengths
                    )[local_5d8[(byte)(&_BrotliStoreHuffmanTreeOfHuffmanTreeToBitMask_kStorageOrder)
                                      [uVar6]]] + uVar3;
      *(ulong *)(param_5 + (uVar3 >> 3)) =
           (ulong)(byte)(&
                        _BrotliStoreHuffmanTreeOfHuffmanTreeToBitMask_kHuffmanBitLengthHuffmanCodeSymbols
                        )[local_5d8[(byte)(&
                                          _BrotliStoreHuffmanTreeOfHuffmanTreeToBitMask_kStorageOrder
                                          )[uVar6]]] << ((byte)uVar3 & 7) |
           (ulong)*(byte *)(param_5 + (uVar3 >> 3));
      uVar6 = uVar6 + 1;
      uVar3 = uVar4;
    } while (uVar9 != uVar6);
    *local_668 = uVar4;
  }
  if (uVar8 == 1) {
    local_5d8[lVar7] = 0;
  }
  if (local_670 != 0) {
    lVar5 = 0;
    do {
      bVar1 = local_2f8[lVar5];
      uVar9 = local_5d8[bVar1] + uVar4;
      *(ulong *)(param_5 + (uVar4 >> 3)) =
           (ulong)local_608[bVar1] << ((byte)uVar4 & 7) | (ulong)*(byte *)(param_5 + (uVar4 >> 3));
      if (bVar1 == 0x10) {
        lVar7 = 2;
LAB_0009142f:
        *(ulong *)(param_5 + (uVar9 >> 3)) =
             (ulong)local_5b8[lVar5] << ((byte)uVar9 & 7) | (ulong)*(byte *)(param_5 + (uVar9 >> 3))
        ;
        uVar9 = uVar9 + lVar7;
      }
      else if (bVar1 == 0x11) {
        lVar7 = 3;
        goto LAB_0009142f;
      }
      lVar5 = lVar5 + 1;
      uVar4 = uVar9;
    } while (local_670 != lVar5);
    *local_668 = uVar9;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

