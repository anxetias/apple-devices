// rea decompile_all
// name: _BuildAndStoreBlockSwitchEntropyCodes
// address: 0x92792
// body: available
// range: 0x92792-0x92a86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x92a82 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BuildAndStoreBlockSwitchEntropyCodes
               (long param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int local_4b8 [28];
  int local_448 [260];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar9 = *(ulong *)(param_1 + 8);
  pbVar4 = *(byte **)(param_1 + 0x10);
  puVar5 = *(uint **)(param_1 + 0x18);
  lVar6 = *(long *)(param_1 + 0x20);
  ___bzero(local_448,uVar9 * 4 + 8);
  local_4b8[0x14] = 0;
  local_4b8[0x15] = 0;
  local_4b8[0x16] = 0;
  local_4b8[0x17] = 0;
  local_4b8[0x10] = 0;
  local_4b8[0x11] = 0;
  local_4b8[0x12] = 0;
  local_4b8[0x13] = 0;
  local_4b8[0xc] = 0;
  local_4b8[0xd] = 0;
  local_4b8[0xe] = 0;
  local_4b8[0xf] = 0;
  local_4b8[8] = 0;
  local_4b8[9] = 0;
  local_4b8[10] = 0;
  local_4b8[0xb] = 0;
  local_4b8[4] = 0;
  local_4b8[5] = 0;
  local_4b8[6] = 0;
  local_4b8[7] = 0;
  local_4b8[0] = 0;
  local_4b8[1] = 0;
  local_4b8[2] = 0;
  local_4b8[3] = 0;
  local_4b8[0x18] = 0;
  local_4b8[0x19] = 0;
  if (lVar6 != 0) {
    lVar10 = 0;
    uVar8 = 1;
    uVar11 = 0;
    do {
      uVar7 = uVar8;
      bVar1 = pbVar4[lVar10];
      uVar8 = (ulong)bVar1;
      if (lVar10 != 0) {
        uVar3 = bVar1 + 2;
        if (uVar11 == uVar8) {
          uVar3 = 0;
        }
        uVar11 = (ulong)uVar3;
        if (uVar7 + 1 == uVar8) {
          uVar11 = 1;
        }
        local_448[uVar11] = local_448[uVar11] + 1;
      }
      uVar3 = puVar5[lVar10];
      uVar11 = 0xe;
      if (0x2f0 < uVar3) {
        uVar11 = 0x14;
      }
      uVar12 = 0;
      if (0x28 < uVar3) {
        uVar12 = 7;
      }
      if (0xb0 < uVar3) {
        uVar12 = uVar11;
      }
      do {
        uVar11 = uVar12;
        if (uVar11 == 0x19) break;
        uVar12 = uVar11 + 1;
      } while ((ushort)(&DAT_002b5684)[uVar11 * 2] <= uVar3);
      local_4b8[uVar11 & 0xffffffff] = local_4b8[uVar11 & 0xffffffff] + 1;
      lVar10 = lVar10 + 1;
      uVar11 = uVar7;
    } while (lVar10 != lVar6);
  }
  _StoreVarLenUint8(uVar9 - 1,param_3,param_4);
  if (1 < uVar9) {
    _BuildAndStoreHuffmanTree
              (local_448,uVar9 + 2,uVar9 + 2,param_2,param_1 + 0x38,param_1 + 0x13a,param_3,param_4)
    ;
    _BuildAndStoreHuffmanTree
              (local_4b8,0x1a,0x1a,param_2,param_1 + 0x33e,param_1 + 0x358,param_3,param_4);
    uVar3 = *puVar5;
    bVar1 = *pbVar4;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x28);
    *(ulong *)(param_1 + 0x28) = (ulong)bVar1;
    uVar9 = 0xe;
    if (0x2f0 < uVar3) {
      uVar9 = 0x14;
    }
    uVar8 = 7;
    if (uVar3 < 0x29) {
      uVar8 = 0;
    }
    if (0xb0 < uVar3) {
      uVar8 = uVar9;
    }
    do {
      uVar9 = uVar8;
      if (uVar9 == 0x19) break;
      uVar8 = uVar9 + 1;
    } while ((ushort)(&DAT_002b5684)[uVar9 * 2] <= uVar3);
    uVar9 = uVar9 & 0xffffffff;
    bVar1 = (&DAT_002b5682)[uVar9 * 4];
    uVar2 = *(ushort *)(&__kBrotliPrefixCodeRanges + uVar9 * 4);
    uVar8 = *param_3;
    uVar11 = *(byte *)(param_1 + 0x33e + uVar9) + uVar8;
    *(ulong *)(param_4 + (uVar8 >> 3)) =
         (ulong)*(ushort *)(param_1 + 0x358 + uVar9 * 2) << ((byte)uVar8 & 7) |
         (ulong)*(byte *)(param_4 + (uVar8 >> 3));
    *param_3 = uVar11;
    *(ulong *)(param_4 + (uVar11 >> 3)) =
         (ulong)(uVar3 - uVar2) << ((byte)uVar11 & 7) | (ulong)*(byte *)(param_4 + (uVar11 >> 3));
    *param_3 = uVar11 + bVar1;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

