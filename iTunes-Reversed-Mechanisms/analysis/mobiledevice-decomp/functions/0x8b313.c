// rea decompile_all
// name: _lzfseDecode
// address: 0x8b313
// body: available
// range: 0x8b313-0x8c495 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _lzfseDecode(ulong *param_1)

{
  byte *pbVar1;
  undefined1 (*pauVar2) [16];
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  void *pvVar6;
  void *pvVar7;
  int *piVar8;
  byte *pbVar9;
  bool bVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar22;
  undefined1 (*pauVar23) [16];
  undefined8 *puVar24;
  ulong *puVar25;
  undefined1 *puVar26;
  int iVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  undefined8 *puVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  int iVar37;
  uint uVar38;
  byte *pbVar39;
  long lVar40;
  undefined1 auVar41 [16];
  short sVar45;
  short sVar46;
  long lVar42;
  long lVar43;
  short sVar47;
  long lVar48;
  long lVar49;
  undefined1 auVar44 [16];
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined1 local_380 [16];
  undefined1 local_370 [16];
  undefined1 local_360 [16];
  uint auStack_34e [10];
  uint auStack_326 [32];
  uint auStack_2a6 [129];
  ulong *local_a0;
  ulong *local_98;
  ulong *local_90;
  ulong *local_88;
  ulong *local_80;
  uint local_78;
  undefined4 local_74;
  ulong local_70;
  ulong *local_68;
  ulong local_60;
  uint local_58;
  uint local_54;
  ulong *local_50;
  ulong *local_48;
  ulong *local_40;
  ulong *local_38;
  uint uVar21;
  
  local_90 = param_1 + 0x11;
  local_70 = (long)param_1 + 0x1c8c;
  local_88 = param_1 + 0x51;
  local_80 = param_1 + 0x91;
  local_98 = param_1 + 0x191;
  local_48 = param_1;
LAB_0008b36f:
  do {
    while (iVar12 = *(int *)((long)param_1 + 0x34), 0x31787661 < iVar12) {
      if ((iVar12 == 0x31787662) || (iVar12 == 0x32787662)) {
        uVar22 = *param_1;
        if (param_1[2] <= uVar22) {
          return -1;
        }
        if (param_1[2] - uVar22 < (ulong)*(uint *)((long)param_1 + 0x4c)) {
          return -1;
        }
        local_68 = (ulong *)(ulong)*(ushort *)((long)param_1 + 0x7c);
        local_58 = (uint)*(ushort *)((long)param_1 + 0x7e);
        local_54 = (uint)(ushort)param_1[0x10];
        local_60 = param_1[0xd];
        local_50 = (ulong *)(ulong)(uint)param_1[0xe];
        local_74 = *(undefined4 *)((long)param_1 + 0x74);
        local_a0 = (ulong *)param_1[1];
        pauVar23 = (undefined1 (*) [16])param_1[3];
        local_40 = (ulong *)(uVar22 + (long)(int)param_1[0xf]);
        puVar24 = (undefined8 *)param_1[10];
        iVar12 = (int)param_1[0xb];
        iVar27 = *(int *)((long)param_1 + 0x5c);
        lVar36 = (param_1[5] - (long)pauVar23) + -0x20;
        local_38 = (ulong *)CONCAT44(local_38._4_4_,(int)param_1[9]);
        uVar18 = (uint)param_1[0xc];
        uVar28 = uVar18;
        if (iVar27 != 0 || iVar12 != 0) goto LAB_0008c0be;
        while ((int)local_38 != 0) {
          iVar12 = (int)local_50;
          uVar18 = 0x3fU - iVar12 & 0xfffffff8;
          if (0 < (int)uVar18) {
            local_40 = (ulong *)((long)local_40 - (ulong)(0x3fU - iVar12 >> 3));
            if (local_40 < local_a0) {
              return -3;
            }
            local_60 = local_60 << ((byte)uVar18 & 0x3f) |
                       *(ulong *)(&_FSE_mask_lsb64_mtable + (ulong)uVar18 * 8) & *local_40;
            iVar12 = iVar12 + uVar18;
          }
          uVar22 = (ulong)local_68 & 0xffff;
          bVar16 = *(byte *)((long)param_1 + uVar22 * 8 + 0x89);
          lVar13 = (long)iVar12 - (ulong)(byte)param_1[uVar22 + 0x11];
          uVar18 = (uint)(local_60 >> ((byte)lVar13 & 0x3f));
          iVar12 = (*(uint *)(&_FSE_mask_lsb64_mtable + (ulong)bVar16 * 8) & uVar18) +
                   *(int *)((long)param_1 + uVar22 * 8 + 0x8c);
          if ((uint)param_1[0x391] + local_70 < (ulong)((long)iVar12 + (long)puVar24)) {
            return -3;
          }
          uVar18 = uVar18 >> (bVar16 & 0x1f);
          local_68 = (ulong *)(ulong)CONCAT22((short)(uVar18 >> 0x10),
                                              (short)uVar18 +
                                              *(short *)((long)local_90 + uVar22 * 8 + 2));
          uVar33 = (ulong)(ushort)local_58;
          lVar14 = (long)(int)lVar13 - (ulong)(byte)local_88[uVar33];
          bVar16 = *(byte *)((long)local_88 + uVar33 * 8 + 1);
          uVar22 = local_60 & *(ulong *)(&_FSE_mask_lsb64_mtable + lVar13 * 8) &
                   *(ulong *)(&_FSE_mask_lsb64_mtable + lVar14 * 8);
          uVar18 = (uint)((local_60 & *(ulong *)(&_FSE_mask_lsb64_mtable + lVar13 * 8)) >>
                         ((byte)lVar14 & 0x3f));
          uVar38 = uVar18 >> (bVar16 & 0x1f);
          local_58 = CONCAT22((short)(uVar38 >> 0x10),
                              (short)uVar38 + *(short *)((long)local_88 + uVar33 * 8 + 2));
          iVar27 = (uVar18 & *(uint *)(&_FSE_mask_lsb64_mtable + (ulong)bVar16 * 8)) +
                   *(int *)((long)local_88 + uVar33 * 8 + 4);
          uVar33 = (ulong)(ushort)local_54;
          local_50 = (ulong *)((long)(int)lVar14 - (ulong)(byte)local_80[uVar33]);
          bVar16 = *(byte *)((long)local_80 + uVar33 * 8 + 1);
          uVar38 = (uint)(uVar22 >> ((byte)local_50 & 0x3f));
          uVar18 = uVar38 >> (bVar16 & 0x1f);
          local_60 = uVar22 & *(ulong *)(&_FSE_mask_lsb64_mtable + (long)local_50 * 8);
          local_54 = CONCAT22((short)(uVar18 >> 0x10),
                              (short)uVar18 + *(short *)((long)local_80 + uVar33 * 8 + 2));
          uVar18 = (uVar38 & *(uint *)(&_FSE_mask_lsb64_mtable + (ulong)bVar16 * 8)) +
                   *(int *)((long)local_80 + uVar33 * 8 + 4);
          if (uVar18 == 0) {
            uVar18 = uVar28;
          }
          local_38 = (ulong *)CONCAT44(local_38._4_4_,(int)local_38 + -1);
          param_1 = local_48;
          local_78 = uVar28;
LAB_0008c0be:
          lVar13 = (long)iVar12;
          pauVar2 = (undefined1 (*) [16])(*pauVar23 + lVar13);
          if ((long)((long)pauVar2 - param_1[4]) < (long)(ulong)uVar18) {
            return -3;
          }
          puVar32 = puVar24;
          uVar28 = uVar18;
          if (lVar36 < iVar27 + iVar12) {
            lVar14 = lVar36 + 0x20;
            lVar40 = lVar14 - lVar13;
            if (lVar14 < lVar13) {
              if (lVar14 != 0) {
                lVar13 = 0;
                do {
                  (*pauVar23)[lVar13] = *(undefined1 *)((long)puVar24 + lVar13);
                  lVar13 = lVar13 + 1;
                } while (lVar14 != lVar13);
              }
              puVar24 = (undefined8 *)((long)puVar24 + lVar14);
              iVar12 = iVar12 - (int)lVar14;
LAB_0008c3e9:
              *(int *)(local_48 + 0xb) = iVar12;
              *(int *)((long)local_48 + 0x5c) = iVar27;
              *(uint *)(local_48 + 0xc) = uVar18;
              *(short *)((long)local_48 + 0x7c) = (short)local_68;
              *(short *)((long)local_48 + 0x7e) = (short)local_58;
              *(short *)(local_48 + 0x10) = (short)local_54;
              local_48[0xd] = local_60;
              *(int *)(local_48 + 0xe) = (int)local_50;
              *(undefined4 *)((long)local_48 + 0x74) = local_74;
              *(int *)(local_48 + 9) = (int)local_38;
              if (local_40 < (ulong *)*local_48) {
                return -3;
              }
              *(int *)(local_48 + 0xf) = (int)local_40 - (int)(ulong *)*local_48;
              local_48[10] = (ulong)puVar24;
              local_48[3] = (ulong)(pauVar23[2] + lVar36);
              return -2;
                    /* WARNING: Read-only address (ram,0x0032b340) is written */
                    /* WARNING: Read-only address (ram,0x0032b370) is written */
            }
            if (iVar12 != 0) {
              lVar31 = 0;
              do {
                (*pauVar23)[lVar31] = *(undefined1 *)((long)puVar24 + lVar31);
                lVar31 = lVar31 + 1;
              } while (lVar13 != lVar31);
            }
            puVar24 = (undefined8 *)((long)puVar24 + lVar13);
            lVar31 = (long)iVar27;
            if (lVar40 < lVar31) {
              if (lVar14 != lVar13) {
                lVar14 = lVar40 + (ulong)(lVar40 == 0);
                puVar26 = *pauVar23 + lVar13;
                do {
                  *puVar26 = puVar26[-(long)(int)uVar18];
                  puVar26 = puVar26 + 1;
                  lVar14 = lVar14 + -1;
                } while (lVar14 != 0);
              }
              iVar27 = iVar27 - (int)lVar40;
              iVar12 = 0;
              goto LAB_0008c3e9;
            }
            if (iVar27 != 0) {
              lVar36 = lVar31;
              pauVar23 = pauVar2;
              do {
                (*pauVar23)[0] = *(undefined1 *)((long)pauVar23 - (long)(int)uVar18);
                pauVar23 = (undefined1 (*) [16])(*pauVar23 + 1);
                lVar36 = lVar36 + -1;
              } while (lVar36 != 0);
            }
            pauVar23 = (undefined1 (*) [16])(*pauVar2 + lVar31);
            lVar36 = (lVar40 - lVar31) + -0x20;
            param_1 = local_48;
          }
          else {
            do {
              uVar11 = puVar32[1];
              *(undefined8 *)*pauVar23 = *puVar32;
              *(undefined8 *)(*pauVar23 + 8) = uVar11;
              pauVar23 = pauVar23 + 1;
              puVar32 = puVar32 + 2;
            } while (pauVar23 < pauVar2);
            puVar24 = (undefined8 *)((long)puVar24 + lVar13);
            if (((int)uVar18 < 0x10) && ((int)uVar18 < iVar27)) {
              bVar16 = (&DAT_0032b380)[uVar18 & 0xf];
              uVar38 = (uVar18 & 0xf) << 5;
              auVar41 = *(undefined1 (*) [16])((long)pauVar2 + -(long)(int)uVar18);
              auVar44 = pshufb(auVar41,*(undefined1 (*) [16])(&DAT_00322740 + uVar38));
              auVar41 = pshufb(auVar41,*(undefined1 (*) [16])(&DAT_00322750 + uVar38));
              pauVar23 = pauVar2;
              do {
                *pauVar23 = auVar44;
                pauVar23[1] = auVar41;
                pauVar23 = (undefined1 (*) [16])(*pauVar23 + bVar16);
              } while (pauVar23 < (undefined1 (*) [16])(*pauVar2 + iVar27));
            }
            else {
              pauVar23 = pauVar2;
              do {
                puVar32 = (undefined8 *)((long)pauVar23 + -(long)(int)uVar18);
                uVar11 = puVar32[1];
                *(undefined8 *)*pauVar23 = *puVar32;
                *(undefined8 *)(*pauVar23 + 8) = uVar11;
                pauVar23 = pauVar23 + 1;
              } while (pauVar23 < (undefined1 (*) [16])(*pauVar2 + iVar27));
            }
            pauVar23 = (undefined1 (*) [16])(*pauVar2 + iVar27);
            lVar36 = lVar36 - (iVar27 + iVar12);
          }
        }
        param_1[3] = (ulong)pauVar23;
        *(undefined4 *)((long)param_1 + 0x34) = 0;
        *param_1 = *param_1 + (ulong)*(uint *)((long)param_1 + 0x4c);
      }
      else {
        if (iVar12 != 0x6e787662) {
          return -3;
        }
        uVar22 = (ulong)*(uint *)((long)param_1 + 0x3c);
        local_3a8 = *param_1;
        local_3a0 = param_1[2];
        if (local_3a0 <= local_3a8 && uVar22 != 0) {
          return -1;
                    /* WARNING: Read-only address (ram,0x0032b340) is written */
                    /* WARNING: Read-only address (ram,0x0032b370) is written */
        }
        local_370 = (undefined1  [16])0x0;
        local_380 = (undefined1  [16])0x0;
        if ((long)uVar22 < (long)(local_3a0 - local_3a8)) {
          local_3a0 = local_3a8 + uVar22;
        }
        local_390 = param_1[4];
        local_398 = param_1[3];
        local_388 = param_1[5];
        if ((long)(ulong)(uint)param_1[7] < (long)(local_388 - local_398)) {
          local_388 = local_398 + (uint)param_1[7];
        }
        local_360 = ZEXT416((uint)param_1[8]);
        iVar12 = _lzvnDecode(&local_3a8);
        if (iVar12 == -3) {
          return -3;
        }
        uVar22 = *param_1;
        if ((ulong)*(uint *)((long)param_1 + 0x3c) < local_3a8 - uVar22) {
          return -3;
        }
        uVar33 = param_1[3];
        uVar18 = (uint)param_1[7];
        if ((ulong)uVar18 < local_398 - uVar33) {
          return -3;
        }
        *param_1 = local_3a8;
        param_1[3] = local_398;
        uVar28 = (uint)(local_398 - uVar33);
        iVar12 = *(uint *)((long)param_1 + 0x3c) - (int)(local_3a8 - uVar22);
        *(int *)((long)param_1 + 0x3c) = iVar12;
        *(uint *)(param_1 + 7) = uVar18 - uVar28;
        *(undefined4 *)(param_1 + 8) = local_360._0_4_;
        if (iVar12 != 0) {
          return -2 - (uint)(uVar18 == uVar28 || local_360._8_4_ != 0);
        }
        if (uVar18 != uVar28) {
          return -3;
        }
        if (local_360._8_4_ == 0) {
          return -3;
        }
        *(undefined4 *)((long)param_1 + 0x34) = 0;
      }
    }
    if (iVar12 != 0) {
      if (iVar12 != 0x2d787662) {
        return -3;
      }
      uVar18 = *(uint *)((long)param_1 + 0x44);
      if ((ulong)uVar18 == 0) {
        *(undefined4 *)((long)param_1 + 0x34) = 0;
      }
      else {
        pvVar6 = (void *)*param_1;
        uVar22 = (long)param_1[2] - (long)pvVar6;
        if ((void *)param_1[2] < pvVar6 || uVar22 == 0) {
          return -1;
        }
        pvVar7 = (void *)param_1[3];
        uVar33 = (long)param_1[5] - (long)pvVar7;
        if ((void *)param_1[5] < pvVar7 || uVar33 == 0) {
                    /* WARNING: Read-only address (ram,0x0032b340) is written */
                    /* WARNING: Read-only address (ram,0x0032b370) is written */
          return -2;
        }
        uVar19 = uVar22 & 0xffffffff;
        if (uVar18 <= uVar22) {
          uVar19 = (ulong)uVar18;
        }
        uVar22 = uVar33 & 0xffffffff;
        if (uVar19 <= uVar33) {
          uVar22 = uVar19;
        }
        _memmove(pvVar7,pvVar6,uVar22);
        *param_1 = *param_1 + uVar22;
        param_1[3] = param_1[3] + uVar22;
        *(int *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) - (int)uVar22;
      }
      goto LAB_0008b36f;
    }
    piVar8 = (int *)*param_1;
    pbVar9 = (byte *)param_1[2];
    pbVar39 = (byte *)(piVar8 + 1);
    if (pbVar9 < pbVar39) {
      return -1;
    }
    iVar12 = *piVar8;
    if (iVar12 < 0x32787662) {
      if (iVar12 != 0x2d787662) {
        if (iVar12 != 0x31787662) {
          if (iVar12 != 0x24787662) {
            return -3;
          }
          *param_1 = (ulong)pbVar39;
          *(undefined4 *)(param_1 + 6) = 1;
          return 0;
        }
        goto LAB_0008b698;
      }
      if (pbVar9 < piVar8 + 2) {
        return -1;
      }
      *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)pbVar39;
      *param_1 = (ulong)(piVar8 + 2);
      *(undefined4 *)((long)param_1 + 0x34) = 0x2d787662;
    }
    else if (iVar12 == 0x32787662) {
LAB_0008b698:
      local_60 = CONCAT44(local_60._4_4_,iVar12);
      if (iVar12 == 0x32787662) {
        pbVar39 = (byte *)(piVar8 + 8);
        if (pbVar9 < pbVar39) {
          return -1;
        }
        uVar22 = *(ulong *)(piVar8 + 6);
        if ((uVar22 & 0xffffffe0) == 0) {
          return -3;
        }
        local_38 = (ulong *)(uVar22 & 0xffffffff);
        pbVar1 = (byte *)((long)piVar8 + (long)local_38);
        if (pbVar9 < pbVar1) {
          return -1;
        }
        ___bzero(local_380 + 8,0x2d4);
        auVar41 = local_380;
        uVar33 = *(ulong *)(piVar8 + 2);
        uVar19 = *(ulong *)(piVar8 + 4);
        local_3a8 = CONCAT44(piVar8[1],0x31787662);
        uVar28 = (uint)(uVar33 >> 0x14);
        uVar38 = uVar28 & 0xfffff;
        uVar18 = (uint)(uVar33 >> 0x20);
        local_388 = (uVar19 & 0xffff | (uVar19 >> 10 & 0xffff) << 0x10 |
                     (uVar19 >> 0x14 & 0xfff) << 0x20 | (uVar19 >> 0x1e) << 0x30) &
                    (ulong)DAT_0032b340;
        local_398 = CONCAT44(uVar28,uVar18 >> 8) & 0xfffff000fffff;
        uVar28 = (uint)(uVar19 >> 0x20);
        uVar21 = uVar28 >> 8;
        uVar20 = uVar21 & 0xfffff;
        uVar19 = (ulong)uVar20;
        local_390 = CONCAT44((uVar18 >> 0x1c & 7) - 7,uVar21) & 0xffffffff000fffff;
        local_380._0_8_ =
             CONCAT26((short)(uint)(uVar22 >> 0x2a),
                      CONCAT24((short)(uVar22 >> 0x20),(uVar28 >> 0x1c & 7) - 7)) &
             0x3ff03ffffffffff;
        local_380._10_6_ = auVar41._10_6_;
        local_380._8_2_ = (ushort)(uVar22 >> 0x34) & 0x3ff;
        local_3a0 = CONCAT44((int)uVar33,uVar20 + uVar38) & 0xfffffffffffff;
        if ((uint)uVar22 != 0x20) {
          if ((uint)uVar22 < 0x20) {
            return -3;
          }
          lVar36 = 0;
          iVar12 = 0;
          uVar18 = 0;
          do {
            iVar27 = iVar12;
            if ((pbVar39 < pbVar1) && (iVar12 < 0x19)) {
              do {
                iVar27 = iVar12 + 8;
                uVar18 = (uint)*pbVar39 << ((byte)iVar12 & 0x1f) | uVar18;
                pbVar39 = pbVar39 + 1;
                if (pbVar1 <= pbVar39) break;
                bVar10 = iVar12 < 0x11;
                iVar12 = iVar27;
              } while (bVar10);
            }
            bVar16 = (&_lzfse_freq_nbits_table)[uVar18 & 0x1f];
            if (bVar16 == 0xe) {
              sVar45 = ((ushort)(uVar18 >> 4) & 0x3ff) + 0x18;
            }
            else if (bVar16 == 8) {
              sVar45 = ((ushort)(uVar18 >> 4) & 0xf) + 8;
            }
            else {
              sVar45 = (short)(char)(&_lzfse_freq_value_table)[uVar18 & 0x1f];
            }
            *(short *)(local_380 + lVar36 * 2 + 10) = sVar45;
            iVar12 = iVar27 - (char)bVar16;
            if (iVar27 < (char)bVar16) {
              return -3;
            }
            uVar18 = uVar18 >> (bVar16 & 0x1f);
            lVar36 = lVar36 + 1;
          } while (lVar36 != 0x168);
          if (7 < iVar12) {
            return -3;
          }
          if (pbVar39 != pbVar1) {
            return -3;
          }
        }
      }
      else {
        if (pbVar9 < piVar8 + 0xc1) {
          return -1;
        }
        _memcpy(&local_3a8,piVar8,0x304);
        uVar19 = local_390 & 0xffffffff;
        local_38 = (ulong *)0x304;
        uVar38 = local_398._4_4_;
      }
      if ((long)pbVar9 - (long)piVar8 < (long)(uVar19 + (ulong)uVar38 + (long)local_38)) {
        return -1;
      }
      lVar13 = 0;
      lVar14 = 0;
      lVar36 = 0x19;
      do {
        uVar18 = *(uint *)((long)&local_3a8 + lVar36 * 2);
        lVar13 = lVar13 + (ulong)(uVar18 & 0xffff);
        lVar14 = lVar14 + (ulong)(ushort)(uVar18 >> 0x10);
        lVar36 = lVar36 + 2;
      } while (lVar36 != 0x2d);
      lVar40 = 0;
      lVar31 = 0;
      lVar36 = 0x2d;
      do {
        uVar18 = *(uint *)((long)&local_3a8 + lVar36 * 2);
        lVar40 = lVar40 + (ulong)(uVar18 & 0xffff);
        lVar31 = lVar31 + (ulong)(ushort)(uVar18 >> 0x10);
        lVar36 = lVar36 + 2;
      } while (lVar36 != 0x41);
      lVar42 = 0;
      lVar48 = 0;
      lVar36 = 0x41;
      do {
        uVar18 = *(uint *)((long)&local_3a8 + lVar36 * 2);
        lVar42 = lVar42 + (ulong)(uVar18 & 0xffff);
        lVar48 = lVar48 + (ulong)(ushort)(uVar18 >> 0x10);
        lVar36 = lVar36 + 2;
      } while (lVar36 != 0x81);
      lVar43 = 0;
      lVar49 = 0;
      lVar36 = 0x81;
      do {
        uVar18 = *(uint *)((long)&local_3a8 + lVar36 * 2);
        lVar43 = lVar43 + (ulong)(uVar18 & 0xffff);
        lVar49 = lVar49 + (ulong)(ushort)(uVar18 >> 0x10);
        lVar36 = lVar36 + 2;
      } while (lVar36 != 0x181);
      auVar44._0_2_ = -(ushort)((short)((ushort)local_388 ^ 0x8000) < -0x7c00);
      sVar45 = -(ushort)((short)(local_388._2_2_ ^ 0x8000) < -0x7c00);
      sVar46 = -(ushort)((short)(local_388._4_2_ ^ 0x8000) < -0x7c00);
      sVar47 = -(ushort)((short)(local_388._6_2_ ^ 0x8000) < -0x7c00);
      auVar44._8_8_ =
           (undefined8)
           (CONCAT64(CONCAT42(CONCAT22(sVar47,sVar47),sVar46),CONCAT22(sVar46,sVar47)) >> 0x10);
      auVar44._6_2_ = sVar45;
      auVar44._4_2_ = sVar45;
      auVar44._2_2_ = auVar44._0_2_;
      auVar44 = ~auVar44 & _DAT_0032b370;
      auVar41._0_8_ = auVar44._8_8_;
      auVar41._8_4_ = auVar44._8_4_;
      auVar41._12_4_ = auVar44._12_4_;
      if ((((((0x40 < (ulong)(lVar31 + lVar40) || 0x40 < (ulong)(lVar14 + lVar13)) ||
             (0xff < (ushort)local_380._8_2_ || 0x3f < (ushort)local_380._6_2_)) ||
            ((char)((0x3f < (ushort)local_380._4_2_) * -0x80 + (10000 < (uint)local_398) * '\x04')
             != '\0' || 40000 < local_3a0._4_4_)) ||
           (SUB164(auVar41 | auVar44,4) != 0 || SUB164(auVar41 | auVar44,0) != 0)) ||
           ((0x400 < (ulong)(lVar49 + lVar43) || 0x100 < (ulong)(lVar48 + lVar42)) ||
           (int)local_3a8 != 0x31787662)) || ((uint)local_48[0x391] < local_3a0._4_4_)) {
        return -3;
      }
      *local_48 = (long)piVar8 + (long)local_38;
      *(int *)((long)local_48 + 0x4c) = (int)uVar19;
      *(uint *)(local_48 + 9) = (uint)local_398;
      lVar36 = 0;
      iVar12 = 0;
      puVar25 = local_98;
      do {
        uVar4 = *(ushort *)((long)auStack_2a6 + lVar36 * 2);
        if (uVar4 != 0) {
          uVar18 = (uint)uVar4;
          iVar12 = iVar12 + uVar18;
          if (0x400 < iVar12) break;
          iVar27 = 0x1f;
          if (uVar18 != 0) {
            for (; uVar4 >> iVar27 == 0; iVar27 = iVar27 + -1) {
            }
          }
          bVar16 = (byte)iVar27 ^ 0x1f;
          bVar15 = bVar16 - 0x15;
          uVar28 = 0x800 >> (bVar15 & 0x1f);
          bVar16 = bVar16 - 0x16;
          uVar38 = 0;
          do {
            if ((int)uVar38 < (int)(uVar28 - uVar18)) {
              sVar45 = (short)(uVar4 + uVar38 << (bVar15 & 0x1f)) + -0x400;
              bVar17 = bVar15;
            }
            else {
              sVar45 = (short)((uVar4 - uVar28) + uVar38 << (bVar16 & 0x1f));
              bVar17 = bVar16;
            }
            *(byte *)puVar25 = bVar17;
            *(char *)((long)puVar25 + 1) = (char)lVar36;
            *(short *)((long)puVar25 + 2) = sVar45;
            puVar25 = (ulong *)((long)puVar25 + 4);
            uVar38 = uVar38 + 1;
          } while (uVar18 != uVar38);
        }
        lVar36 = lVar36 + 1;
      } while (lVar36 != 0x100);
      lVar36 = 0;
      puVar25 = local_90;
      do {
        uVar4 = *(ushort *)(local_380 + lVar36 * 2 + 10);
        if (uVar4 != 0) {
          iVar12 = 0x1f;
          uVar18 = (uint)uVar4;
          if (uVar18 != 0) {
            for (; uVar4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
            }
          }
          bVar16 = (byte)iVar12 ^ 0x1f;
          bVar15 = bVar16 - 0x19;
          uVar28 = 0x80 >> (bVar15 & 0x1f);
          cVar3 = (&_kLSymbolVBits)[lVar36];
          uVar5 = (&_kLSymbolVBase)[lVar36];
          bVar16 = bVar16 - 0x1a;
          uVar38 = 0;
          do {
            if ((int)uVar38 < (int)(uVar28 - uVar18)) {
              sVar45 = (short)(uVar4 + uVar38 << (bVar15 & 0x1f)) + -0x40;
              bVar17 = bVar15;
            }
            else {
              sVar45 = (short)((uVar18 - uVar28) + uVar38 << (bVar16 & 0x1f));
              bVar17 = bVar16;
            }
            *(byte *)puVar25 = bVar17 + cVar3;
            *(char *)((long)puVar25 + 1) = cVar3;
            *(short *)((long)puVar25 + 2) = sVar45;
            *(undefined4 *)((long)puVar25 + 4) = uVar5;
            puVar25 = puVar25 + 1;
            uVar38 = uVar38 + 1;
          } while (uVar4 != uVar38);
        }
        lVar36 = lVar36 + 1;
      } while (lVar36 != 0x14);
      lVar36 = 0;
      puVar25 = local_88;
      do {
        uVar4 = *(ushort *)((long)auStack_34e + lVar36 * 2);
        if (uVar4 != 0) {
          iVar12 = 0x1f;
          uVar18 = (uint)uVar4;
          if (uVar18 != 0) {
            for (; uVar4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
            }
          }
          bVar16 = (byte)iVar12 ^ 0x1f;
          bVar15 = bVar16 - 0x19;
          uVar28 = 0x80 >> (bVar15 & 0x1f);
          cVar3 = (&_kMSymbolVBits)[lVar36];
          uVar5 = (&_kMSymbolVBase)[lVar36];
          bVar16 = bVar16 - 0x1a;
          uVar38 = 0;
          do {
            if ((int)uVar38 < (int)(uVar28 - uVar18)) {
              sVar45 = (short)(uVar4 + uVar38 << (bVar15 & 0x1f)) + -0x40;
              bVar17 = bVar15;
            }
            else {
              sVar45 = (short)((uVar18 - uVar28) + uVar38 << (bVar16 & 0x1f));
              bVar17 = bVar16;
            }
            *(byte *)puVar25 = bVar17 + cVar3;
            *(char *)((long)puVar25 + 1) = cVar3;
            *(short *)((long)puVar25 + 2) = sVar45;
            *(undefined4 *)((long)puVar25 + 4) = uVar5;
            puVar25 = puVar25 + 1;
            uVar38 = uVar38 + 1;
          } while (uVar4 != uVar38);
        }
        lVar36 = lVar36 + 1;
      } while (lVar36 != 0x14);
      lVar36 = 0;
      puVar25 = local_80;
      do {
        uVar4 = *(ushort *)((long)auStack_326 + lVar36 * 2);
        if (uVar4 != 0) {
          iVar12 = 0x1f;
          uVar18 = (uint)uVar4;
          if (uVar18 != 0) {
            for (; uVar4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
            }
          }
          bVar16 = (byte)iVar12 ^ 0x1f;
          bVar15 = bVar16 - 0x17;
          uVar28 = 0x200 >> (bVar15 & 0x1f);
          cVar3 = (&_kDSymbolVBits)[lVar36];
          uVar5 = (&_kDSymbolVBase)[lVar36];
          bVar16 = bVar16 - 0x18;
          uVar38 = 0;
          do {
            if ((int)uVar38 < (int)(uVar28 - uVar18)) {
              sVar45 = (short)(uVar4 + uVar38 << (bVar15 & 0x1f)) + -0x100;
              bVar17 = bVar15;
            }
            else {
              sVar45 = (short)((uVar18 - uVar28) + uVar38 << (bVar16 & 0x1f));
              bVar17 = bVar16;
            }
            *(byte *)puVar25 = bVar17 + cVar3;
            *(char *)((long)puVar25 + 1) = cVar3;
            *(short *)((long)puVar25 + 2) = sVar45;
            *(undefined4 *)((long)puVar25 + 4) = uVar5;
            puVar25 = puVar25 + 1;
            uVar38 = uVar38 + 1;
          } while (uVar4 != uVar38);
        }
        lVar36 = lVar36 + 1;
      } while (lVar36 != 0x40);
      local_68 = (ulong *)((local_398 >> 0x20) + *local_48);
      local_50 = (ulong *)local_48[1];
      *local_48 = (ulong)local_68;
      if (local_390._4_4_ == 0) {
        if (local_68 < (ulong *)((long)local_50 + 7U)) {
          return -3;
        }
        local_38 = (ulong *)((long)local_68 + -7);
        uVar22 = (ulong)*(uint7 *)((long)local_68 + -7);
        uVar18 = 0x38;
      }
      else {
        if (local_68 < local_50 + 1) {
          return -3;
        }
        local_38 = local_68 + -1;
        uVar22 = local_68[-1];
        uVar18 = local_390._4_4_ + 0x40;
      }
      if ((uVar18 & 0xfffffff8) != 0x38) {
        return -3;
      }
      if (uVar22 >> ((byte)uVar18 & 0x3f) != 0) {
        return -3;
      }
      local_40 = (ulong *)CONCAT44(local_40._4_4_,local_3a0._4_4_);
      if (local_3a0._4_4_ != 0) {
        uVar34 = (ulong)local_388._6_2_;
        uVar33 = (ulong)local_388._4_2_;
        uVar35 = local_388 & 0xffff;
        uVar19 = (ulong)local_388._2_2_;
        uVar29 = 0;
        do {
          uVar28 = 0x3f - uVar18 & 0xfffffff8;
          if (0 < (int)uVar28) {
            local_38 = (ulong *)((long)local_38 - (ulong)(0x3f - uVar18 >> 3));
            if (local_38 < local_50) {
              return -3;
            }
            uVar22 = uVar22 << ((byte)uVar28 & 0x3f) |
                     *(ulong *)(&_FSE_mask_lsb64_mtable + (ulong)uVar28 * 8) & *local_38;
            uVar18 = uVar18 + uVar28;
          }
          uVar28 = *(uint *)((long)local_98 + (uVar35 & 0xffff) * 4);
          iVar12 = uVar18 - (uVar28 & 0xff);
          uVar30 = *(ulong *)(&_FSE_mask_lsb64_mtable + (long)iVar12 * 8);
          iVar37 = (int)uVar29;
          *(char *)(local_70 + uVar29) = (char)(uVar28 >> 8);
          uVar18 = *(uint *)((long)local_98 + (uVar19 & 0xffff) * 4);
          iVar27 = iVar12 - (uVar18 & 0xff);
          uVar29 = uVar22 & uVar30 & *(ulong *)(&_FSE_mask_lsb64_mtable + (long)iVar27 * 8);
          uVar35 = (ulong)((int)(uVar22 >> ((byte)iVar12 & 0x3f)) + (uVar28 >> 0x10));
          *(char *)(local_70 + (iVar37 + 1)) = (char)(uVar18 >> 8);
          uVar19 = (ulong)((int)((uVar22 & uVar30) >> ((byte)iVar27 & 0x3f)) + (uVar18 >> 0x10));
          uVar28 = *(uint *)((long)local_98 + (uVar33 & 0xffff) * 4);
          iVar27 = iVar27 - (uVar28 & 0xff);
          uVar30 = uVar29 & *(ulong *)(&_FSE_mask_lsb64_mtable + (long)iVar27 * 8);
          *(char *)(local_70 + (iVar37 + 2)) = (char)(uVar28 >> 8);
          uVar38 = *(uint *)((long)local_98 + (uVar34 & 0xffff) * 4);
          uVar18 = iVar27 - (uVar38 & 0xff);
          uVar22 = uVar30 & *(ulong *)(&_FSE_mask_lsb64_mtable + (long)(int)uVar18 * 8);
          uVar33 = (ulong)((int)(uVar29 >> ((byte)iVar27 & 0x3f)) + (uVar28 >> 0x10));
          *(char *)(local_70 + (iVar37 + 3)) = (char)(uVar38 >> 8);
          uVar34 = (ulong)((int)(uVar30 >> ((byte)uVar18 & 0x3f)) + (uVar38 >> 0x10));
          uVar29 = (ulong)(iVar37 + 4U);
        } while (iVar37 + 4U < local_3a0._4_4_);
      }
      local_48[10] = local_70;
      uVar22 = local_390 & 0xffffffff;
      if (local_380._0_4_ == 0) {
        if ((uint)local_390 < 7) {
          return -3;
        }
        lVar36 = uVar22 - 7;
        uVar33 = (ulong)*(uint7 *)((long)local_68 + (uVar22 - 7));
        uVar18 = 0x38;
      }
      else {
        if ((uint)local_390 < 8) {
          return -3;
        }
        uVar33 = *(ulong *)((long)local_68 + (uVar22 - 8));
        lVar36 = uVar22 - 8;
        uVar18 = local_380._0_4_ + 0x40;
      }
      if ((uVar18 & 0xfffffff8) != 0x38) {
        return -3;
      }
      if (uVar33 >> ((byte)uVar18 & 0x3f) != 0) {
        return -3;
      }
      *(undefined4 *)((long)local_48 + 0x7c) = local_380._4_4_;
      *(undefined2 *)(local_48 + 0x10) = local_380._8_2_;
      if ((ulong *)((long)local_68 + lVar36) < local_68) {
        return -3;
      }
      *(int *)(local_48 + 0xf) = (int)(ulong *)((long)local_68 + lVar36) - (int)local_68;
      local_48[0xb] = 0;
      *(undefined4 *)(local_48 + 0xc) = 0xffffffff;
      local_48[0xd] = uVar33;
      *(uint *)(local_48 + 0xe) = uVar18;
      *(undefined4 *)((long)local_48 + 0x34) = (undefined4)local_60;
      param_1 = local_48;
    }
    else {
      if (iVar12 != 0x6e787662) {
        return -3;
      }
      if (pbVar9 < piVar8 + 3) {
        return -1;
      }
      *(int *)(param_1 + 7) = piVar8[1];
      *(int *)((long)param_1 + 0x3c) = piVar8[2];
      *(undefined4 *)(param_1 + 8) = 0;
      *param_1 = (ulong)(piVar8 + 3);
      *(undefined4 *)((long)param_1 + 0x34) = 0x6e787662;
    }
  } while( true );
}

