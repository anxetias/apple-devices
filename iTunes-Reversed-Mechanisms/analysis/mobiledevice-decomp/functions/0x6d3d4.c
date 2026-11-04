// rea decompile_all
// name: _BrotliBuildMetaBlockGreedy
// address: 0x6d3d4
// body: available
// range: 0x6d3d4-0x6da0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliBuildMetaBlockGreedy
               (long param_1,long param_2,ulong param_3,ulong param_4,ulong param_5,
               undefined4 param_6,long param_7,ulong param_8,long param_9,uint *param_10,
               long param_11,long param_12)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 local_2a0 [120];
  undefined1 local_228 [120];
  undefined8 local_1b0;
  ulong local_1a8;
  long local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long lStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_70;
  long local_68;
  ulong local_60;
  undefined8 local_58;
  ulong local_50;
  ulong local_48;
  void *local_40;
  long local_38;
  
  local_68 = param_2;
  local_60 = param_4;
  if (param_8 == 1) {
    lVar12 = 0;
    puVar10 = param_10;
    for (lVar8 = param_11; lVar8 != 0; lVar8 = lVar8 + -1) {
      lVar12 = lVar12 + (ulong)*puVar10;
      puVar10 = puVar10 + 4;
    }
    _InitBlockSplitterLiteral(param_1,&local_1b0,lVar12,param_12,param_12 + 0xb0,param_12 + 0xb8);
    if (((*(int *)(param_1 + 0x18) == 0) &&
        (_InitBlockSplitterCommand
                   (param_1,local_2a0,param_11,param_12 + 0x30,param_12 + 0xc0,param_12 + 200),
        *(int *)(param_1 + 0x18) == 0)) &&
       (_InitBlockSplitterDistance
                  (param_1,local_228,param_11,param_12 + 0x60,param_12 + 0xd0,param_12 + 0xd8),
       *(int *)(param_1 + 0x18) == 0)) {
      if (param_11 != 0) {
        lVar12 = 0;
        do {
          uVar7 = param_10[lVar12 * 4];
          local_48 = (ulong)param_10[lVar12 * 4 + 1];
          local_50 = (ulong)*(ushort *)((long)param_10 + lVar12 * 0x10 + 0xe);
          local_58 = (ulong)(ushort)param_10[lVar12 * 4 + 3];
          local_38 = lVar12;
          _BlockSplitterAddSymbolCommand(local_2a0);
          lVar12 = local_68;
          for (uVar15 = (ulong)uVar7; uVar15 != 0; uVar15 = uVar15 - 1) {
            _BlockSplitterAddSymbolLiteral(&local_1b0,*(undefined1 *)(lVar12 + (param_3 & param_4)))
            ;
            param_3 = param_3 + 1;
          }
          uVar7 = (uint)local_48;
          if (((local_48 & 0x1ffffff) != 0) && (0x7f < (uint)local_58)) {
            _BlockSplitterAddSymbolDistance(local_228,(uint)local_50 & 0x3ff);
          }
          param_3 = param_3 + (uVar7 & 0x1ffffff);
          lVar12 = local_38 + 1;
        } while (lVar12 != param_11);
      }
      _BlockSplitterFinishBlockLiteral(&local_1b0,1);
      _BlockSplitterFinishBlockCommand(local_2a0,1);
      _BlockSplitterFinishBlockDistance(local_228,1);
    }
  }
  else {
    local_58 = CONCAT44(local_58._4_4_,param_6);
    if (param_11 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      puVar10 = param_10;
      lVar12 = param_11;
      do {
        uVar15 = uVar15 + *puVar10;
        puVar10 = puVar10 + 4;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    local_170 = param_12 + 0xb8;
    uVar15 = uVar15 >> 9;
    local_48 = uVar15 + 1;
    local_1b0 = 0x100;
    local_1a8 = param_8;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_8;
    local_1a0 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x100)) / auVar5,0);
    local_198 = 0x200;
    local_190 = 0x4079000000000000;
    local_188 = 0;
    local_180 = param_12;
    local_168 = 0x200;
    local_70 = 0;
    uVar14 = local_1a0 + 1U;
    if (local_48 < local_1a0 + 1U) {
      uVar14 = local_48;
    }
    local_160 = 0;
    lStack_158 = 0;
    uVar13 = *(ulong *)(param_12 + 0x20);
    local_50 = param_5;
    local_38 = param_1;
    if (uVar13 <= uVar15) {
      if (uVar13 == 0) {
        uVar13 = local_48;
      }
      do {
        uVar9 = uVar13;
        uVar13 = uVar9 * 2;
      } while (uVar9 <= uVar15);
      local_40 = (void *)_BrotliAllocate(param_1,uVar9);
      if ((*(int *)(param_1 + 0x18) == 0) && (*(size_t *)(param_12 + 0x20) != 0)) {
        _memcpy(local_40,*(void **)(param_12 + 0x10),*(size_t *)(param_12 + 0x20));
      }
      _BrotliFree(local_38,*(undefined8 *)(param_12 + 0x10));
      *(void **)(param_12 + 0x10) = local_40;
      *(ulong *)(param_12 + 0x20) = uVar9;
    }
    lVar12 = local_38;
    uVar13 = *(ulong *)(param_12 + 0x28);
    if (uVar13 <= uVar15) {
      if (uVar13 == 0) {
        uVar13 = local_48;
      }
      do {
        uVar9 = uVar13;
        uVar13 = uVar9 * 2;
      } while (uVar9 <= uVar15);
      local_40 = (void *)_BrotliAllocate(local_38,uVar9 * 4);
      if ((*(int *)(lVar12 + 0x18) == 0) && (*(long *)(param_12 + 0x28) != 0)) {
        _memcpy(local_40,*(void **)(param_12 + 0x18),*(long *)(param_12 + 0x28) << 2);
      }
      _BrotliFree(lVar12,*(undefined8 *)(param_12 + 0x18));
      *(void **)(param_12 + 0x18) = local_40;
      *(ulong *)(param_12 + 0x28) = uVar9;
    }
    lVar12 = local_38;
    if (*(int *)(local_38 + 0x18) == 0) {
      *(ulong *)(param_12 + 8) = local_48;
      lVar8 = uVar14 * param_8;
      *(long *)(param_12 + 0xb8) = lVar8;
      if (lVar8 == 0) {
        *(undefined8 *)(param_12 + 0xb0) = 0;
        local_178 = 0;
      }
      else {
        local_178 = _BrotliAllocate(local_38,lVar8 * 0x410);
        iVar3 = *(int *)(lVar12 + 0x18);
        *(long *)(param_12 + 0xb0) = local_178;
        if (iVar3 != 0) {
          return;
        }
      }
      uVar15 = local_60;
      lVar8 = param_8 + (param_8 == 0);
      lVar12 = local_178;
      do {
        ___bzero(lVar12,0x408);
        lVar11 = local_38;
        *(undefined8 *)(lVar12 + 0x408) = 0x7ff0000000000000;
        lVar12 = lVar12 + 0x410;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      local_150 = 0;
      uStack_148 = 0;
      if (((*(int *)(local_38 + 0x18) == 0) &&
          (_InitBlockSplitterCommand
                     (local_38,local_2a0,param_11,param_12 + 0x30,param_12 + 0xc0,param_12 + 200),
          *(int *)(lVar11 + 0x18) == 0)) &&
         (_InitBlockSplitterDistance
                    (lVar11,local_228,param_11,param_12 + 0x60,param_12 + 0xd0,param_12 + 0xd8),
         *(int *)(lVar11 + 0x18) == 0)) {
        if (param_11 != 0) {
          lVar12 = 0;
          do {
            uVar7 = param_10[lVar12 * 4];
            uVar4 = param_10[lVar12 * 4 + 1];
            local_40 = (void *)(ulong)*(ushort *)((long)param_10 + lVar12 * 0x10 + 0xe);
            local_48 = (ulong)(ushort)param_10[lVar12 * 4 + 3];
            _BlockSplitterAddSymbolCommand(local_2a0);
            uVar6 = local_58;
            for (uVar14 = (ulong)uVar7; local_58._4_4_ = (undefined4)((ulong)uVar6 >> 0x20),
                uVar14 != 0; uVar14 = uVar14 - 1) {
              local_58._0_4_ = (uint)uVar6;
              uVar7 = (uint)local_58 & 0xff;
              local_58 = CONCAT44(local_58._4_4_,(int)local_50);
              uVar13 = local_50 & 0xff;
              local_50 = (ulong)*(byte *)(local_68 + (param_3 & uVar15));
              lVar11 = lStack_158 * 0x410 + local_178;
              lVar8 = (ulong)*(uint *)(param_9 +
                                      (ulong)(*(byte *)(param_7 + 0x100 + (ulong)uVar7) |
                                             *(byte *)(param_7 + uVar13)) * 4) * 0x410;
              piVar1 = (int *)(lVar11 + lVar8 + local_50 * 4);
              *piVar1 = *piVar1 + 1;
              plVar2 = (long *)(lVar8 + 0x400 + lVar11);
              *plVar2 = *plVar2 + 1;
              local_160 = local_160 + 1;
              if (local_160 == local_168) {
                _ContextBlockSplitterFinishBlock(&local_1b0,local_38,0);
              }
              if (*(int *)(local_38 + 0x18) != 0) {
                return;
              }
              param_3 = param_3 + 1;
              uVar6 = local_58;
            }
            param_3 = param_3 + (uVar4 & 0x1ffffff);
            if ((ulong)(uVar4 & 0x1ffffff) != 0) {
              uVar14 = param_3 - 2 & uVar15;
              local_58 = CONCAT44(local_58._4_4_,
                                  (int)CONCAT71((int7)(uVar14 >> 8),
                                                *(undefined1 *)(local_68 + uVar14)));
              uVar14 = param_3 - 1 & uVar15;
              local_50 = CONCAT71((int7)(uVar14 >> 8),*(undefined1 *)(local_68 + uVar14));
              uVar6 = local_58;
              if (0x7f < (uint)local_48) {
                _BlockSplitterAddSymbolDistance(local_228,(uint)local_40 & 0x3ff);
                uVar6 = local_58;
              }
            }
            local_58 = uVar6;
            lVar12 = lVar12 + 1;
          } while (lVar12 != param_11);
        }
        lVar12 = local_38;
        _ContextBlockSplitterFinishBlock(&local_1b0,local_38,1);
        if (*(int *)(lVar12 + 0x18) == 0) {
          _BlockSplitterFinishBlockCommand(local_2a0,1);
          _BlockSplitterFinishBlockDistance(local_228,1);
          _MapStaticContexts(lVar12,param_8,param_9,param_12);
        }
      }
    }
  }
  return;
}

