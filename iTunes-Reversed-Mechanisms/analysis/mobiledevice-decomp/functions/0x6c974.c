// rea decompile_all
// name: _BrotliBuildMetaBlock
// address: 0x6c974
// body: available
// range: 0x6c974-0x6d1dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6d1d9 to 0x8b16a _BrotliFree (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _BrotliBuildMetaBlock
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,void *param_5,
               undefined4 param_6,undefined1 param_7,long param_8,long param_9,undefined4 param_10,
               long *param_11)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  long *plVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  ushort *puVar14;
  undefined4 uVar15;
  ulong uVar16;
  uint uVar17;
  double dVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  int iVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 local_1d0 [64];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 local_140 [64];
  uint local_100;
  uint uStack_fc;
  undefined8 uStack_f8;
  undefined8 local_f0;
  double local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  long local_88;
  long *local_80;
  long local_78;
  void *local_70;
  ulong local_68;
  double local_60;
  long local_58;
  long local_50;
  uint local_44;
  uint *local_40;
  undefined1 local_31;
  
  local_80 = param_11;
  local_90 = param_10;
  local_50 = param_9;
  local_78 = param_8;
  local_31 = param_7;
  local_a8 = param_3;
  local_a0 = param_4;
  local_98 = param_2;
  local_8c = param_6;
  local_88 = param_1;
  _memcpy(local_140,param_5,0x90);
  _memcpy(local_1d0,param_5,0x90);
  local_44 = local_100;
  local_68 = (ulong)uStack_fc;
  local_40 = (uint *)((long)param_5 + 0x40);
  uVar10 = 0;
  bVar22 = true;
  local_60 = 1e+99;
  uVar17 = 0;
  local_70 = param_5;
  do {
    if (uVar10 < 0x10) {
      local_58 = CONCAT44(local_58._4_4_,uVar17 ^ local_44);
      do {
        iVar20 = uVar10 << ((byte)uVar17 & 0x1f);
        _BrotliInitDistanceParams(local_1d0,uVar17,iVar20);
        if (iVar20 == (int)local_68 && (int)local_58 == 0) {
          bVar22 = false;
        }
        iVar20 = _ComputeDistanceCost(local_78,local_50,&local_100,&local_190,&local_b0);
        if ((iVar20 == 0) || (local_60 < local_b0)) goto LAB_0006cad2;
        *(undefined8 *)(local_40 + 4) = local_180;
        *(undefined8 *)local_40 = local_190;
        *(undefined8 *)(local_40 + 2) = uStack_188;
        uVar10 = uVar10 + 1;
        local_60 = local_b0;
      } while (uVar10 != 0x10);
      uVar10 = 0x10;
      local_60 = local_b0;
    }
LAB_0006cad2:
    plVar4 = local_80;
    lVar19 = local_88;
    uVar11 = uVar10 - 1;
    if (uVar10 == 0) {
      uVar11 = 0;
    }
    uVar10 = uVar11 >> 1;
    uVar17 = uVar17 + 1;
  } while (uVar17 != 4);
  if ((bVar22) &&
     (_ComputeDistanceCost(local_78,local_50,&local_100,&local_100,&local_b0), local_b0 < local_60))
  {
    *(undefined8 *)(local_40 + 4) = local_f0;
    *(ulong *)local_40 = CONCAT44(uStack_fc,local_100);
    *(undefined8 *)(local_40 + 2) = uStack_f8;
  }
  if (local_44 == *local_40) {
    if ((local_50 == 0) || ((int)local_68 == *(int *)((long)local_70 + 0x44))) goto LAB_0006cc84;
  }
  else if (local_50 == 0) goto LAB_0006cc84;
  puVar14 = (ushort *)(local_78 + 0xe);
  lVar6 = local_50;
  do {
    if (((*(uint *)(puVar14 + -5) & 0x1ffffff) != 0) && (0x7f < puVar14[-1])) {
      uVar10 = *puVar14 & 0x3ff;
      if ((int)local_68 + 0x10U <= uVar10) {
        uVar10 = (uVar10 - (int)local_68) - 0x10;
        uVar10 = (uVar10 & ~(-1 << ((byte)local_44 & 0x1f))) + (int)local_68 + 0x10U +
                 ((((uVar10 >> (local_44 & 0x1f) & 1) != 0) + 2 << ((byte)(*puVar14 >> 10) & 0x1f))
                  + *(int *)(puVar14 + -3) + -4 << ((byte)local_44 & 0x1f));
      }
      uVar12 = (ulong)uVar10;
      uVar8 = (ulong)*(uint *)((long)local_70 + 0x44) + 0x10;
      if (uVar12 < uVar8) {
        uVar15 = 0;
      }
      else {
        bVar7 = (byte)*local_40;
        uVar16 = ((4L << (bVar7 & 0x3f)) + (uVar12 - *(uint *)((long)local_70 + 0x44))) - 0x10;
        uVar10 = 0x1f;
        uVar17 = (uint)uVar16;
        if (uVar17 != 0) {
          for (; uVar17 >> uVar10 == 0; uVar10 = uVar10 - 1) {
          }
        }
        uVar10 = (uVar10 ^ 0xffffffe0) + 0x1f;
        bVar22 = (uVar16 >> ((ulong)uVar10 & 0x3f) & 1) != 0;
        iVar20 = uVar10 - *local_40;
        uVar12 = (ulong)(((uint)bVar22 + iVar20 * 2 + 0xfffe << (bVar7 & 0x3f)) +
                         (int)uVar8 + (~(-1 << (bVar7 & 0x1f)) & uVar17) | iVar20 * 0x400);
        uVar15 = (undefined4)
                 (uVar16 - ((ulong)bVar22 + 2 << ((byte)uVar10 & 0x3f)) >> (bVar7 & 0x3f));
      }
      *puVar14 = (ushort)uVar12;
      *(undefined4 *)(puVar14 + -3) = uVar15;
    }
    puVar14 = puVar14 + 8;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
LAB_0006cc84:
  plVar2 = plVar4 + 0xc;
  _BrotliSplitBlock(lVar19,local_78,local_50,local_98,local_a8,local_a0,local_70,plVar4,plVar4 + 6,
                    plVar2);
  if (*(int *)(lVar19 + 0x18) == 0) {
    lVar6 = *plVar4;
    if (*(int *)((long)local_70 + 0x20) == 0) {
      lVar21 = 0x40;
      if (lVar6 == 0) {
        lVar6 = 0;
        local_68 = 0;
      }
      else {
        local_68 = _BrotliAllocate(lVar19,lVar6 << 2);
        auVar3 = _DAT_0032b310;
        if (*(int *)(lVar19 + 0x18) != 0) {
          return;
        }
        lVar6 = *plVar4;
        if (lVar6 == 0) {
          lVar6 = 0;
        }
        else {
          lVar9 = lVar6 + -1;
          auVar23._8_4_ = (int)lVar9;
          auVar23._0_8_ = lVar9;
          auVar23._12_4_ = (int)((ulong)lVar9 >> 0x20);
          uVar8 = 0;
          auVar23 = auVar23 ^ _DAT_0032b310;
          auVar25 = _DAT_0032b2f0;
          auVar26 = _DAT_0032b300;
          do {
            auVar27 = auVar26 ^ auVar3;
            iVar20 = auVar23._4_4_;
            iVar24 = auVar23._12_4_;
            if ((bool)(~(auVar27._4_4_ == iVar20 && auVar23._0_4_ < auVar27._0_4_ ||
                        iVar20 < auVar27._4_4_) & 1)) {
              *(undefined4 *)(local_68 + uVar8 * 4) = local_90;
            }
            if ((auVar27._12_4_ != iVar24 || auVar27._8_4_ <= auVar23._8_4_) &&
                auVar27._12_4_ <= iVar24) {
              *(undefined4 *)(local_68 + 4 + uVar8 * 4) = local_90;
            }
            auVar27 = auVar25 ^ auVar3;
            if ((auVar27._4_4_ != iVar20 || auVar27._0_4_ <= auVar23._0_4_) &&
                auVar27._4_4_ <= iVar20) {
              *(undefined4 *)(local_68 + 8 + uVar8 * 4) = local_90;
            }
            if (auVar27._12_4_ <= iVar24 &&
                (auVar27._8_4_ <= auVar23._8_4_ || auVar27._12_4_ != iVar24)) {
              *(undefined4 *)(local_68 + 0xc + uVar8 * 4) = local_90;
            }
            uVar8 = uVar8 + 4;
            lVar9 = auVar26._8_8_;
            auVar26._0_8_ = auVar26._0_8_ + 4;
            auVar26._8_8_ = lVar9 + 4;
            lVar9 = auVar25._8_8_;
            auVar25._0_8_ = auVar25._0_8_ + 4;
            auVar25._8_8_ = lVar9 + 4;
          } while ((lVar6 + 3U & 0xfffffffffffffffc) != uVar8);
        }
      }
    }
    else {
      local_68 = 0;
      lVar21 = 1;
    }
    local_60 = (double)(lVar6 * lVar21);
    if (local_60 == 0.0) {
      if (*(int *)(lVar19 + 0x18) != 0) {
        return;
      }
      local_58 = 0;
    }
    else {
      lVar6 = _BrotliAllocate(lVar19,(long)local_60 * 0x410);
      dVar18 = local_60;
      local_58 = lVar6;
      if (*(int *)(lVar19 + 0x18) != 0) {
        return;
      }
      do {
        ___bzero(lVar6,0x408);
        *(undefined8 *)(lVar6 + 0x408) = 0x7ff0000000000000;
        lVar6 = lVar6 + 0x410;
        dVar18 = (double)((long)dVar18 + -1);
        lVar19 = local_88;
      } while (dVar18 != 0.0);
    }
    lVar6 = *plVar2 * 4;
    if (lVar6 == 0) {
      if (*(int *)(lVar19 + 0x18) != 0) {
        return;
      }
      local_40 = (uint *)0x0;
    }
    else {
      lVar21 = _BrotliAllocate(lVar19,*plVar2 * 0x2240);
      local_40 = (uint *)lVar21;
      if (*(int *)(lVar19 + 0x18) != 0) {
        return;
      }
      do {
        ___bzero(lVar21,0x888);
        *(undefined8 *)(lVar21 + 0x888) = 0x7ff0000000000000;
        lVar21 = lVar21 + 0x890;
        lVar6 = lVar6 + -1;
        lVar19 = local_88;
      } while (lVar6 != 0);
    }
    plVar5 = local_80;
    lVar6 = local_80[6];
    local_80[0x19] = lVar6;
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = _BrotliAllocate(lVar19,lVar6 * 0xb10);
    }
    plVar5[0x18] = lVar6;
    if (*(int *)(lVar19 + 0x18) == 0) {
      lVar21 = plVar5[0x19];
      if (lVar21 != 0) {
        do {
          ___bzero(lVar6,0xb08);
          *(undefined8 *)(lVar6 + 0xb08) = 0x7ff0000000000000;
          lVar6 = lVar6 + 0xb10;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar6 = local_80[0x18];
        lVar19 = local_88;
      }
      uVar8 = local_68;
      plVar5 = local_80;
      _BrotliBuildHistogramsWithContext
                (local_78,local_50,local_80,plVar4 + 6,plVar2,local_98,local_a8,local_a0,
                 (undefined1)local_8c,local_31,local_68,local_58,lVar6,local_40);
      _BrotliFree(lVar19,uVar8);
      lVar6 = *plVar5 << 6;
      plVar5[0x13] = lVar6;
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = _BrotliAllocate(lVar19,*plVar5 << 8);
      }
      plVar5[0x12] = lVar6;
      if (*(int *)(lVar19 + 0x18) == 0) {
        lVar6 = plVar5[0x13];
        plVar5[0x17] = lVar6;
        if (lVar6 == 0) {
          plVar5[0x16] = 0;
          lVar6 = 0;
        }
        else {
          lVar6 = _BrotliAllocate(lVar19,lVar6 * 0x410);
          iVar20 = *(int *)(lVar19 + 0x18);
          plVar5[0x16] = lVar6;
          if (iVar20 != 0) {
            return;
          }
        }
        _BrotliClusterHistogramsLiteral
                  (lVar19,local_58,local_60,0x100,lVar6,plVar5 + 0x17,plVar5[0x12]);
        if (*(int *)(lVar19 + 0x18) == 0) {
          _BrotliFree(lVar19,local_58);
          if ((*(int *)((long)local_70 + 0x20) != 0) && (lVar6 = *plVar5, lVar6 != 0)) {
            lVar21 = plVar5[0x12];
            lVar9 = lVar6 * 0x100 + lVar21;
            do {
              uVar15 = *(undefined4 *)(lVar21 + -4 + lVar6 * 4);
              lVar6 = lVar6 + -1;
              lVar13 = -0x40;
              do {
                puVar1 = (undefined4 *)(lVar9 + lVar13 * 4);
                *puVar1 = uVar15;
                puVar1[1] = uVar15;
                puVar1[2] = uVar15;
                puVar1[3] = uVar15;
                lVar13 = lVar13 + 4;
              } while (lVar13 != 0);
              lVar9 = lVar9 + -0x100;
            } while (lVar6 != 0);
          }
          lVar6 = plVar5[0xc] * 4;
          plVar5[0x15] = lVar6;
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = _BrotliAllocate(lVar19,plVar5[0xc] << 4);
          }
          plVar5[0x14] = lVar6;
          if (*(int *)(lVar19 + 0x18) == 0) {
            lVar6 = plVar5[0x15];
            plVar5[0x1b] = lVar6;
            if (lVar6 == 0) {
              plVar5[0x1a] = 0;
              lVar6 = 0;
            }
            else {
              lVar6 = _BrotliAllocate(lVar19,lVar6 * 0x890);
              iVar20 = *(int *)(lVar19 + 0x18);
              plVar5[0x1a] = lVar6;
              if (iVar20 != 0) {
                return;
              }
            }
            _BrotliClusterHistogramsDistance
                      (lVar19,local_40,plVar5[0x15],0x100,lVar6,plVar5 + 0x1b,plVar5[0x14]);
            if (*(int *)(lVar19 + 0x18) == 0) {
              _BrotliFree(lVar19,local_40);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Read-only address (ram,0x0032b2f0) is written */
                    /* WARNING: Read-only address (ram,0x0032b300) is written */
                    /* WARNING: Read-only address (ram,0x0032b310) is written */
  return;
}

