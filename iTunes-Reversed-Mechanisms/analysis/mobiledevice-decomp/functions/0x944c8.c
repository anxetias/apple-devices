// rea decompile_all
// name: _BrotliStoreMetaBlockFast
// address: 0x944c8
// body: available
// range: 0x944c8-0x948e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x948dd to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliStoreMetaBlockFast
               (long param_1,long param_2,ulong param_3,undefined8 param_4,ulong param_5,int param_6
               ,long param_7,long param_8,ulong param_9,ulong *param_10,long param_11)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 local_24f0 [1024];
  undefined8 local_20f0;
  undefined8 local_20e8;
  int local_20e0;
  int local_20dc;
  long local_20d8;
  ulong local_20d0;
  undefined1 local_20c8 [288];
  undefined1 local_1fa8 [144];
  undefined1 local_1f18 [1408];
  undefined1 local_1998 [704];
  undefined1 local_16d8 [512];
  undefined1 local_14d8 [256];
  undefined1 local_13d8 [2176];
  undefined8 local_b58;
  undefined8 local_b50;
  int local_b48 [704];
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_20dc = *(int *)(param_7 + 0x48);
  local_20e0 = param_6;
  local_20d8 = param_1;
  local_20d0 = param_3;
  _StoreCompressedMetaBlockHeader(param_6,param_4,param_10,param_11);
  uVar5 = *param_10;
  uVar4 = uVar5 >> 3;
  *(ulong *)(param_11 + uVar4) = (ulong)*(byte *)(param_11 + uVar4);
  *param_10 = uVar5 + 0xd;
  if (param_9 < 0x81) {
    ___bzero(local_b48,0x400);
    lVar1 = local_20d8;
    if (param_9 == 0) {
      lVar6 = 0;
    }
    else {
      uVar4 = 0;
      lVar6 = 0;
      uVar5 = local_20d0;
      do {
        uVar7 = (ulong)*(uint *)(param_8 + uVar4 * 0x10);
        for (uVar8 = uVar7; uVar8 != 0; uVar8 = uVar8 - 1) {
          local_b48[*(byte *)(param_2 + (uVar5 & param_5))] =
               local_b48[*(byte *)(param_2 + (uVar5 & param_5))] + 1;
          uVar5 = uVar5 + 1;
        }
        lVar6 = lVar6 + uVar7;
        uVar5 = uVar5 + (*(uint *)(param_8 + 4 + uVar4 * 0x10) & 0x1ffffff);
        uVar4 = uVar4 + 1;
      } while (uVar4 != param_9);
    }
    _BrotliBuildAndStoreHuffmanTreeFast
              (local_20d8,local_b48,lVar6,8,local_1f18,local_13d8,param_10,param_11);
    if (*(int *)(lVar1 + 0x18) != 0) goto LAB_000948bb;
    uVar4 = *param_10;
    *(ulong *)(param_11 + (uVar4 >> 3)) =
         0x92624416307003 << ((byte)uVar4 & 7) | (ulong)*(byte *)(param_11 + (uVar4 >> 3));
    *param_10 = uVar4 + 0x38;
    uVar5 = uVar4 + 0x38 >> 3;
    *(ulong *)(param_11 + uVar5) = (ulong)*(byte *)(param_11 + uVar5);
    uVar5 = uVar4 + 0x3b;
    *param_10 = uVar5;
    *(ulong *)(param_11 + (uVar5 >> 3)) =
         0x369dc03L << ((byte)uVar5 & 7) | (ulong)*(byte *)(param_11 + (uVar5 >> 3));
    *param_10 = uVar4 + 0x57;
    puVar9 = local_1f18;
    puVar13 = &_kStaticDistanceCodeBits;
    puVar12 = &_kStaticDistanceCodeDepth;
    puVar11 = &_kStaticCommandCodeBits;
    puVar10 = &_kStaticCommandCodeDepth;
    puVar3 = local_13d8;
  }
  else {
    ___bzero(local_24f0,0x408);
    local_20e8 = 0x7ff0000000000000;
    ___bzero(local_b48,0xb08);
    local_40 = 0x7ff0000000000000;
    ___bzero(local_13d8,0x888);
    local_b50 = 0x7ff0000000000000;
    _BuildHistograms(param_2,local_20d0,param_5,param_8,param_9,local_24f0,local_b48,local_13d8);
    lVar1 = local_20d8;
    _BrotliBuildAndStoreHuffmanTreeFast
              (local_20d8,local_24f0,local_20f0,8,local_14d8,local_16d8,param_10,param_11);
    if ((*(int *)(lVar1 + 0x18) != 0) ||
       (_BrotliBuildAndStoreHuffmanTreeFast
                  (lVar1,local_b48,local_48,10,local_1998,local_1f18,param_10,param_11),
       *(int *)(lVar1 + 0x18) != 0)) goto LAB_000948bb;
    uVar2 = 0x1f;
    if (local_20dc - 1U != 0) {
      for (; local_20dc - 1U >> uVar2 == 0; uVar2 = uVar2 - 1) {
      }
    }
    _BrotliBuildAndStoreHuffmanTreeFast
              (lVar1,local_13d8,local_b58,(uVar2 ^ 0xffffffe0) + 0x21,local_1fa8,local_20c8,param_10
               ,param_11);
    if (*(int *)(lVar1 + 0x18) != 0) goto LAB_000948bb;
    puVar9 = local_14d8;
    puVar13 = local_20c8;
    puVar12 = local_1fa8;
    puVar11 = local_1f18;
    puVar10 = local_1998;
    puVar3 = local_16d8;
  }
  _StoreDataWithHuffmanCodes
            (param_2,local_20d0,param_5,param_8,param_9,puVar9,puVar3,puVar10,puVar11,puVar12,
             puVar13,param_10,param_11);
  if (local_20e0 != 0) {
    uVar2 = (int)*param_10 + 7;
    *param_10 = (ulong)(uVar2 & 0xfffffff8);
    *(undefined1 *)(param_11 + (ulong)(uVar2 >> 3)) = 0;
  }
LAB_000948bb:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

