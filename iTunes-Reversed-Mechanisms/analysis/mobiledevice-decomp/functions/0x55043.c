// rea decompile_all
// name: _WriteMetaBlockInternal
// address: 0x55043
// body: available
// range: 0x55043-0x554fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _WriteMetaBlockInternal
               (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5,
               undefined8 param_6,int param_7,void *param_8,undefined1 param_9,undefined1 param_10,
               undefined8 param_11,undefined8 param_12,undefined8 param_13,undefined4 *param_14,
               undefined4 *param_15,ulong *param_16,undefined1 *param_17)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  undefined1 local_1e0 [76];
  undefined4 local_194;
  undefined1 local_150 [48];
  undefined1 local_120 [48];
  undefined1 local_f0 [48];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_36;
  undefined1 local_35;
  uint local_34;
  
  local_34 = (uint)param_4;
  if (2 < param_4 >> 0x1e) {
    local_34 = (local_34 & 0x3fffffff) + ((int)(local_34 * 2) >> 1 & 0xc0000000U) + 0x80000000;
  }
  local_50 = param_1;
  local_48 = param_6;
  _memcpy(local_1e0,param_8,0x90);
  if (param_5 == 0) {
    uVar1 = *param_16;
    *(ulong *)(param_17 + (uVar1 >> 3)) =
         3L << ((byte)uVar1 & 7) | (ulong)(byte)param_17[uVar1 >> 3];
    *param_16 = (ulong)((int)uVar1 + 9U & 0xfffffff8);
    return;
  }
  iVar7 = _ShouldCompress(param_2,param_3,param_4,param_5,param_11,param_12);
  lVar5 = local_50;
  if (iVar7 == 0) {
    uVar2 = param_14[1];
    uVar3 = param_14[2];
    uVar4 = param_14[3];
    *param_15 = *param_14;
    param_15[1] = uVar2;
    param_15[2] = uVar3;
    param_15[3] = uVar4;
    _BrotliStoreUncompressedMetaBlock(local_48,param_2,local_34,param_3,param_5,param_16,param_17);
    return;
  }
  local_35 = *param_17;
  local_36 = param_17[1];
  local_70 = (ulong)(byte)*param_16;
  if (*(int *)((long)param_8 + 4) < 3) {
    local_40 = param_2;
    _BrotliStoreMetaBlockFast
              (local_50,param_2,local_34,param_5,param_3,local_48,param_8,param_13,param_12,param_16
               ,param_17);
  }
  else {
    if (*(int *)((long)param_8 + 4) != 3) {
      local_58 = param_5;
      _BrotliInitBlockSplit(local_150);
      _BrotliInitBlockSplit(local_120);
      _BrotliInitBlockSplit(local_f0);
      uVar6 = local_34;
      lVar5 = local_50;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      if (*(int *)((long)param_8 + 4) < 10) {
        local_68 = 1;
        local_60 = 0;
        puVar8 = PTR___kBrotliContextLookupTable_00441028 + (uint)(param_7 << 9);
        if (*(int *)((long)param_8 + 0x20) == 0) {
          _DecideOverLiteralContextModeling
                    (param_2,local_34,local_58,param_3,*(int *)((long)param_8 + 4),
                     *(undefined8 *)((long)param_8 + 0x18),&local_68,&local_60);
          local_40 = local_68;
        }
        else {
          local_40 = 1;
        }
        lVar5 = local_50;
        local_68 = local_40;
        _BrotliBuildMetaBlockGreedy
                  (local_50,param_2,uVar6,param_3,param_9,param_10,puVar8,local_40,local_60,param_13
                   ,param_12,local_150);
        iVar7 = *(int *)(lVar5 + 0x18);
      }
      else {
        _BrotliBuildMetaBlock
                  (local_50,param_2,local_34,param_3,local_1e0,param_9,param_10,param_13,param_12,
                   param_7,local_150);
        iVar7 = *(int *)(lVar5 + 0x18);
      }
      if (iVar7 != 0) {
        return;
      }
      if (3 < *(int *)((long)param_8 + 4)) {
        _BrotliOptimizeHistograms(local_194,local_150);
      }
      _BrotliStoreMetaBlock
                (lVar5,param_2,local_34,local_58,param_3,param_9,param_10,local_48,local_1e0,param_7
                 ,param_13,param_12,local_150,param_16,param_17);
      if (*(int *)(lVar5 + 0x18) != 0) {
        return;
      }
      local_40 = param_2;
      _BrotliDestroyBlockSplit(lVar5,local_150);
      _BrotliDestroyBlockSplit(lVar5,local_120);
      _BrotliDestroyBlockSplit(lVar5,local_f0);
      _BrotliFree(lVar5,local_c0);
      local_c0 = 0;
      _BrotliFree(lVar5,local_b0);
      local_b0 = 0;
      _BrotliFree(lVar5,local_a0);
      local_a0 = 0;
      _BrotliFree(lVar5,local_90);
      local_90 = 0;
      _BrotliFree(lVar5,local_80);
      param_5 = local_58;
      goto LAB_00055207;
    }
    local_40 = param_2;
    _BrotliStoreMetaBlockTrivial
              (local_50,param_2,local_34,param_5,param_3,local_48,param_8,param_13,param_12,param_16
               ,param_17);
  }
  if (*(int *)(lVar5 + 0x18) != 0) {
    return;
  }
LAB_00055207:
  if (param_5 + 4U < *param_16 >> 3) {
    uVar2 = param_14[1];
    uVar3 = param_14[2];
    uVar4 = param_14[3];
    *param_15 = *param_14;
    param_15[1] = uVar2;
    param_15[2] = uVar3;
    param_15[3] = uVar4;
    *param_17 = local_35;
    param_17[1] = local_36;
    *param_16 = local_70;
    _BrotliStoreUncompressedMetaBlock(local_48,local_40,local_34,param_3,param_5,param_16,param_17);
  }
  return;
}

