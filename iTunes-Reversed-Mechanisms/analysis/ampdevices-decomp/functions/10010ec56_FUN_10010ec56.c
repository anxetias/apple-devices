// name: FUN_10010ec56
// address: 10010ec56

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10010ec56(long param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  char cVar20;
  ushort uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  undefined8 uVar26;
  long *plVar27;
  undefined4 *puVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  byte bVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined1 (*pauVar40) [16];
  uint uVar41;
  uint uVar42;
  ulong uVar43;
  uint uVar44;
  byte bVar45;
  uint uVar46;
  int iVar47;
  uint uVar48;
  long lVar49;
  long lVar50;
  uint uVar51;
  long lVar52;
  byte bVar53;
  ushort uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  int iVar58;
  int iVar59;
  uint uVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  long local_900;
  uint local_8dc;
  float *local_8d0;
  long alStack_8b8 [2];
  ushort auStack_8a8 [40];
  short asStack_858 [1024];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar10 = *(ushort **)(param_1 + 0xba8);
  puVar11 = *(undefined8 **)(puVar10 + 4);
  lVar12 = *(long *)(puVar10 + (ulong)*(byte *)(puVar11 + 3) * 4 + 0x690);
  bVar5 = (byte)puVar10[0x69a];
  uVar6 = *puVar10;
  ___bzero(puVar10 + 0x6b8,(ulong)*(uint *)(param_1 + 0x48) << 2);
  if (*(char *)*puVar11 != '\0') {
    if (bVar5 != 0) {
      lVar29 = 0;
      do {
        asStack_858[*(ushort *)((long)puVar10 + lVar29 + 0xd3c)] = 0;
        lVar29 = lVar29 + 0xc;
      } while ((ulong)((uint)bVar5 * 4) * 3 != lVar29);
    }
    uVar8 = *(uint *)(puVar11 + 4);
    if ((ulong)uVar8 == 0) {
      local_8dc = 0;
    }
    else {
      local_8d0 = (float *)(*(long *)(param_1 + 0xba8) + 0x3ac);
      uVar33 = 0;
      iVar25 = 0;
      local_8dc = 0;
      do {
        uVar43 = (ulong)(iVar25 * (uint)uVar6);
        bVar3 = *(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 0xba8) + 8) + 0x28) + uVar33);
        lVar29 = *(long *)(param_1 + 0xba8) + uVar43 * 4 + 0xd70;
        uVar38 = (uint)bVar3;
        local_900 = lVar29;
        if (uVar38 != 1) {
          local_900 = (ulong)(-((int)param_1 + 0x1ca40) & 0x1f) + param_1 + 0x1ca40 + uVar43 * 4;
          uVar36 = (uint)bVar3 * (uint)uVar6;
          if (3 < uVar36) {
            ___bzero(local_900,(uVar36 & 0x3ffffffc) << 2);
          }
          uVar35 = (ulong)local_8dc;
          alStack_8b8[uVar35 * 3] = local_900;
          alStack_8b8[uVar35 * 3 + 1] = lVar29;
          auStack_8a8[uVar35 * 0xc + 1] = (ushort)bVar3;
          auStack_8a8[uVar35 * 0xc] = (ushort)uVar33;
          if (3 < local_8dc) goto LAB_100110171;
          local_8dc = local_8dc + 1;
        }
        uVar35 = (ulong)*(uint *)(puVar10 + uVar33 * 8 + 0x194);
        if (uVar35 != 0) {
          lVar29 = *(long *)((long)(puVar10 + uVar33 * 8 + 0x194) + 8);
          uVar39 = 0;
          do {
            pbVar1 = (byte *)(lVar29 + uVar39 * 6);
            bVar45 = *pbVar1;
            if (bVar45 < 0x10) {
              if (bVar45 == 0xc) {
                local_58 = CONCAT31(local_58._1_3_,0xc);
                if (*(long *)(param_1 + 0x1abe8) == 0) {
                  iVar22 = -0x32;
                  goto LAB_100110177;
                }
                iVar22 = FUN_1000720b0(*(long *)(param_1 + 0x1abe8),uVar39 & 0xff,&local_58);
                if (iVar22 != 0) goto LAB_100110177;
                bVar53 = pbVar1[2];
                bVar34 = pbVar1[3];
                uVar24 = (uint)bVar53;
                uVar36 = (uint)bVar34;
                bVar45 = (byte)local_58;
                if (0xf < (byte)local_58) goto LAB_10010ef63;
              }
              else {
                bVar53 = pbVar1[2];
                bVar34 = pbVar1[3];
                uVar24 = (uint)bVar53;
                uVar36 = (uint)bVar34;
              }
              if (bVar45 != 0) goto LAB_10010efc1;
LAB_10010fe32:
              local_8d0 = local_8d0 + (uVar36 - uVar24);
            }
            else {
              uVar26 = FUN_1001cc310();
              cVar20 = _os_log_type_enabled(uVar26,0x10);
              if (cVar20 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "codebook <= 15";
                __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_58,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              bVar53 = pbVar1[2];
              bVar34 = pbVar1[3];
              uVar24 = (uint)bVar53;
              uVar36 = (uint)bVar34;
LAB_10010ef63:
              uVar26 = FUN_1001cc310();
              cVar20 = _os_log_type_enabled(uVar26,0x10);
              if (cVar20 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "codebook <= 15";
                __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_58,
                                    0x16);
              }
              FUN_1001782e9(0,0);
LAB_10010efc1:
              uVar32 = (ulong)bVar45;
              lVar13 = *(long *)(*(long *)(param_1 + 0x1ac00) + uVar32 * 8);
              uVar9 = *(uint *)(*(long *)(param_1 + 0x1c628) + uVar32 * 4);
              bVar4 = *(byte *)(*(long *)(param_1 + 0x1c630) + uVar32);
              uVar23 = (uint)bVar4;
              if (bVar45 < 3) {
                if (bVar53 < bVar34) {
                  uVar32 = (ulong)bVar53;
                  uVar21 = *(ushort *)(lVar12 + uVar32 * 2);
                  do {
                    uVar54 = *(ushort *)(lVar12 + 2 + uVar32 * 2);
                    iVar22 = -2;
                    if (uVar54 <= uVar21) goto LAB_100110177;
                    uVar36 = (uint)uVar54 - (uint)uVar21;
                    if ((uVar36 & 3) != 0) goto LAB_100110177;
                    iVar22 = (uVar36 >> 2) * uVar38;
                    if (iVar22 != 0) {
                      fVar67 = *local_8d0;
                      uVar30 = (ulong)(uVar21 * uVar38);
                      pauVar40 = (undefined1 (*) [16])(local_900 + uVar30 * 4);
                      piVar14 = *(int **)(param_1 + 0x40);
                      uVar36 = *(uint *)(param_1 + 0x28);
                      lVar49 = 0;
                      do {
                        if (uVar36 == 0) {
                          uVar36 = *(uint *)(param_1 + 0x2c);
                        }
                        else {
                          uVar24 = *(uint *)(*(long *)(param_1 + 0x10) + 4);
                          uVar36 = (uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 |
                                    (uVar24 & 0xff00) << 8 | uVar24 << 0x18) >>
                                   (-(char)uVar36 & 0x1fU) | *(uint *)(param_1 + 0x2c);
                        }
                        if (uVar36 == 0) {
                          uVar24 = 0x20;
                        }
                        else {
                          uVar24 = 0x1f;
                          if (uVar36 != 0) {
                            for (; uVar36 >> uVar24 == 0; uVar24 = uVar24 - 1) {
                            }
                          }
                          uVar24 = uVar24 ^ 0x1f;
                        }
                        uVar55 = uVar23;
                        if (uVar24 < uVar23) {
                          uVar36 = ~uVar36 | uVar9;
                          if (uVar36 == 0) {
                            uVar24 = 0x20;
                          }
                          else {
                            uVar24 = 0x1f;
                            if (uVar36 != 0) {
                              for (; uVar36 >> uVar24 == 0; uVar24 = uVar24 - 1) {
                              }
                            }
                            uVar24 = uVar24 ^ 0x1f;
                          }
                          uVar21 = *(ushort *)
                                    (*(long *)(lVar13 + (ulong)uVar24 * 0x10) +
                                    (ulong)(uVar36 >>
                                           (*(byte *)(lVar13 + 8 + (ulong)uVar24 * 0x10) & 0x1f)) *
                                    2);
                          uVar24 = uVar21 >> 0xb & 3;
                          uVar36 = uVar21 >> 9 & 3;
                          uVar55 = uVar21 >> 7 & 3;
                          uVar57 = uVar21 >> 5 & 3;
                          lVar50 = *(long *)(param_1 + 0x1c638);
                          auVar63 = insertps(ZEXT416(*(uint *)(lVar50 + -4 + (ulong)uVar24 * 4)),
                                             *(undefined4 *)(lVar50 + -4 + (ulong)uVar36 * 4),0x10);
                          auVar63 = insertps(auVar63,*(undefined4 *)
                                                      (lVar50 + -4 + (ulong)uVar55 * 4),0x20);
                          auVar63 = insertps(auVar63,*(undefined4 *)
                                                      (lVar50 + -4 + (ulong)uVar57 * 4),0x30);
                          asStack_858[uVar43 + uVar30 + lVar49 * 4] = (short)uVar24 + -1;
                          asStack_858[uVar43 + uVar30 + lVar49 * 4 + 1] = (short)uVar36 + -1;
                          asStack_858[uVar43 + uVar30 + lVar49 * 4 + 2] = (short)uVar55 + -1;
                          asStack_858[uVar43 + uVar30 + lVar49 * 4 + 3] = (short)uVar57 + -1;
                          uVar55 = uVar21 & 0x1f;
                          auVar64._0_4_ = auVar63._0_4_ * fVar67;
                          auVar64._4_4_ = auVar63._4_4_ * fVar67;
                          auVar64._8_4_ = auVar63._8_4_ * fVar67;
                          auVar64._12_4_ = auVar63._12_4_ * fVar67;
                          *pauVar40 = auVar64;
                        }
                        *piVar14 = *piVar14 + uVar55;
                        uVar24 = *(int *)(param_1 + 0x28) + uVar55;
                        *(uint *)(param_1 + 0x28) = uVar24;
                        if (uVar24 < 0x20) {
                          uVar55 = *(int *)(param_1 + 0x2c) << ((byte)uVar55 & 0x1f);
                          uVar36 = uVar24;
                        }
                        else if (uVar24 == 0x20) {
                          *(undefined4 *)(param_1 + 0x28) = 0;
                          uVar55 = *(int *)(param_1 + 0x18) + 1;
                          *(uint *)(param_1 + 0x18) = uVar55;
                          uVar36 = 0;
                          uVar24 = 0;
                          if (uVar55 < *(uint *)(param_1 + 0x34)) {
                            *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
                            uVar24 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar55 * 4);
                          }
                          uVar55 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 |
                                   (uVar24 & 0xff00) << 8 | uVar24 << 0x18;
                        }
                        else {
                          uVar36 = uVar24 - 0x20;
                          *(uint *)(param_1 + 0x28) = uVar36;
                          lVar50 = *(long *)(param_1 + 0x10);
                          *(long *)(param_1 + 0x10) = lVar50 + 4;
                          uVar55 = *(uint *)(lVar50 + 4);
                          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                          uVar55 = (uVar55 >> 0x18 | (uVar55 & 0xff0000) >> 8 |
                                    (uVar55 & 0xff00) << 8 | uVar55 << 0x18) <<
                                   ((byte)uVar24 & 0x1f);
                        }
                        *(uint *)(param_1 + 0x2c) = uVar55;
                        pauVar40 = pauVar40 + 1;
                        lVar49 = lVar49 + 1;
                      } while (iVar22 != (int)lVar49);
                    }
                    local_8d0 = local_8d0 + 1;
                    uVar32 = uVar32 + 1;
                    uVar21 = uVar54;
                  } while (uVar32 != bVar34);
                }
              }
              else {
                uVar55 = 0x100 - uVar23;
                if (bVar45 < 5) {
                  if (bVar53 < bVar34) {
                    uVar32 = (ulong)bVar53;
                    uVar21 = *(ushort *)(lVar12 + uVar32 * 2);
                    do {
                      uVar54 = *(ushort *)(lVar12 + 2 + uVar32 * 2);
                      iVar22 = -2;
                      if (uVar54 <= uVar21) goto LAB_100110177;
                      uVar36 = (uint)uVar54 - (uint)uVar21;
                      if ((uVar36 & 3) != 0) goto LAB_100110177;
                      iVar22 = (uVar36 >> 2) * uVar38;
                      if (iVar22 != 0) {
                        fVar67 = *local_8d0;
                        uVar30 = (ulong)(uVar21 * uVar38);
                        pauVar40 = (undefined1 (*) [16])(local_900 + uVar30 * 4);
                        piVar14 = *(int **)(param_1 + 0x40);
                        uVar36 = *(uint *)(param_1 + 0x28);
                        lVar49 = 0;
                        do {
                          if (uVar36 == 0) {
                            uVar36 = *(uint *)(param_1 + 0x2c);
                          }
                          else {
                            uVar24 = *(uint *)(*(long *)(param_1 + 0x10) + 4);
                            uVar36 = (uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 |
                                      (uVar24 & 0xff00) << 8 | uVar24 << 0x18) >>
                                     (-(char)uVar36 & 0x1fU) | *(uint *)(param_1 + 0x2c);
                          }
                          uVar31 = 0x20;
                          uVar24 = 0x20;
                          if (uVar36 != 0) {
                            uVar24 = 0x1f;
                            if (uVar36 != 0) {
                              for (; uVar36 >> uVar24 == 0; uVar24 = uVar24 - 1) {
                              }
                            }
                            uVar24 = uVar24 ^ 0x1f;
                          }
                          uVar57 = ~uVar36 | uVar9;
                          if (uVar57 != 0) {
                            uVar44 = 0x1f;
                            if (uVar57 != 0) {
                              for (; uVar57 >> uVar44 == 0; uVar44 = uVar44 - 1) {
                              }
                            }
                            uVar31 = (ulong)(uVar44 ^ 0x1f);
                          }
                          uVar44 = uVar23;
                          if (uVar24 < uVar23) {
                            uVar41 = 1;
                            uVar60 = 1;
                            uVar48 = 1;
                            uVar37 = 1;
                            uVar56 = 1;
                            uVar46 = 1;
                            uVar42 = 1;
                            uVar51 = 1;
                            uVar44 = uVar55;
                            if (uVar24 < uVar55) {
                              plVar27 = (long *)(uVar31 * 0x10 + lVar13);
                              uVar21 = *(ushort *)
                                        (*plVar27 +
                                        (ulong)(uVar57 >> (*(byte *)(plVar27 + 1) & 0x1f)) * 2);
                              uVar44 = uVar21 & 0x1f;
                              uVar42 = uVar21 >> 0xb & 3;
                              uVar48 = (uint)((uVar21 >> 0xb & 3) != 0);
                              uVar46 = uVar21 >> 9 & 3;
                              uVar60 = (uint)((uVar21 >> 9 & 3) != 0);
                              uVar56 = uVar21 >> 7 & 3;
                              uVar51 = (uint)((uVar21 >> 7 & 3) != 0);
                              uVar37 = uVar21 >> 5 & 3;
                              uVar41 = (uint)((uVar21 >> 5 & 3) != 0);
                            }
                            iVar58 = uVar36 << ((byte)uVar44 & 0x1f);
                            iVar59 = iVar58 << (sbyte)uVar48;
                            uVar44 = uVar60 + uVar48 + uVar41 + uVar51 + uVar44;
                            uVar24 = iVar58 >> 0x1f;
                            uVar24 = uVar42 + uVar24 ^ uVar24;
                            iVar58 = iVar59 << (sbyte)uVar60;
                            uVar57 = iVar59 >> 0x1f;
                            uVar57 = uVar46 + uVar57 ^ uVar57;
                            uVar36 = iVar58 >> 0x1f;
                            uVar36 = uVar56 + uVar36 ^ uVar36;
                            uVar60 = (iVar58 << (sbyte)uVar51) >> 0x1f;
                            uVar60 = uVar37 + uVar60 ^ uVar60;
                            lVar50 = *(long *)(param_1 + 0x1c638);
                            auVar63 = insertps(ZEXT416(*(uint *)(lVar50 + (long)(int)uVar24 * 4)),
                                               *(undefined4 *)(lVar50 + (long)(int)uVar57 * 4),0x10)
                            ;
                            auVar63 = insertps(auVar63,*(undefined4 *)
                                                        (lVar50 + (long)(int)uVar36 * 4),0x20);
                            auVar63 = insertps(auVar63,*(undefined4 *)
                                                        (lVar50 + (long)(int)uVar60 * 4),0x30);
                            asStack_858[uVar43 + uVar30 + lVar49 * 4] = (short)uVar24;
                            asStack_858[uVar43 + uVar30 + lVar49 * 4 + 1] = (short)uVar57;
                            asStack_858[uVar43 + uVar30 + lVar49 * 4 + 2] = (short)uVar36;
                            asStack_858[uVar43 + uVar30 + lVar49 * 4 + 3] = (short)uVar60;
                            auVar65._0_4_ = auVar63._0_4_ * fVar67;
                            auVar65._4_4_ = auVar63._4_4_ * fVar67;
                            auVar65._8_4_ = auVar63._8_4_ * fVar67;
                            auVar65._12_4_ = auVar63._12_4_ * fVar67;
                            *pauVar40 = auVar65;
                          }
                          *piVar14 = *piVar14 + uVar44;
                          uVar24 = *(int *)(param_1 + 0x28) + uVar44;
                          *(uint *)(param_1 + 0x28) = uVar24;
                          if (uVar24 < 0x20) {
                            uVar57 = *(int *)(param_1 + 0x2c) << ((byte)uVar44 & 0x1f);
                            uVar36 = uVar24;
                          }
                          else if (uVar24 == 0x20) {
                            *(undefined4 *)(param_1 + 0x28) = 0;
                            uVar57 = *(int *)(param_1 + 0x18) + 1;
                            *(uint *)(param_1 + 0x18) = uVar57;
                            uVar36 = 0;
                            uVar24 = 0;
                            if (uVar57 < *(uint *)(param_1 + 0x34)) {
                              *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
                              uVar24 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar57 * 4);
                            }
                            uVar57 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 |
                                     (uVar24 & 0xff00) << 8 | uVar24 << 0x18;
                          }
                          else {
                            uVar36 = uVar24 - 0x20;
                            *(uint *)(param_1 + 0x28) = uVar36;
                            lVar50 = *(long *)(param_1 + 0x10);
                            *(long *)(param_1 + 0x10) = lVar50 + 4;
                            uVar57 = *(uint *)(lVar50 + 4);
                            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                            uVar57 = (uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 |
                                      (uVar57 & 0xff00) << 8 | uVar57 << 0x18) <<
                                     ((byte)uVar24 & 0x1f);
                          }
                          *(uint *)(param_1 + 0x2c) = uVar57;
                          pauVar40 = pauVar40 + 1;
                          lVar49 = lVar49 + 1;
                        } while (iVar22 != (int)lVar49);
                      }
                      local_8d0 = local_8d0 + 1;
                      uVar32 = uVar32 + 1;
                      uVar21 = uVar54;
                    } while (uVar32 != bVar34);
                  }
                }
                else if (bVar45 < 7) {
                  if (bVar53 < bVar34) {
                    uVar32 = (ulong)bVar53;
                    uVar21 = *(ushort *)(lVar12 + uVar32 * 2);
                    do {
                      uVar54 = *(ushort *)(lVar12 + 2 + uVar32 * 2);
                      iVar22 = -2;
                      if (uVar54 <= uVar21) goto LAB_100110177;
                      uVar36 = (uint)uVar54 - (uint)uVar21;
                      if ((uVar36 & 3) != 0) goto LAB_100110177;
                      iVar22 = (uVar36 >> 1) * uVar38;
                      if (iVar22 != 0) {
                        fVar67 = *local_8d0;
                        uVar30 = (ulong)(uVar21 * uVar38);
                        piVar14 = *(int **)(param_1 + 0x40);
                        uVar36 = *(uint *)(param_1 + 0x28);
                        lVar49 = 0;
                        do {
                          if (uVar36 == 0) {
                            uVar36 = *(uint *)(param_1 + 0x2c);
                          }
                          else {
                            uVar24 = *(uint *)(*(long *)(param_1 + 0x10) + 4);
                            uVar36 = (uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 |
                                      (uVar24 & 0xff00) << 8 | uVar24 << 0x18) >>
                                     (-(char)uVar36 & 0x1fU) | *(uint *)(param_1 + 0x2c);
                          }
                          if (uVar36 == 0) {
                            uVar24 = 0x20;
                          }
                          else {
                            uVar24 = 0x1f;
                            if (uVar36 != 0) {
                              for (; uVar36 >> uVar24 == 0; uVar24 = uVar24 - 1) {
                              }
                            }
                            uVar24 = uVar24 ^ 0x1f;
                          }
                          uVar55 = uVar23;
                          if (uVar24 < uVar23) {
                            uVar36 = ~uVar36 | uVar9;
                            if (uVar36 == 0) {
                              uVar24 = 0x20;
                            }
                            else {
                              uVar24 = 0x1f;
                              if (uVar36 != 0) {
                                for (; uVar36 >> uVar24 == 0; uVar24 = uVar24 - 1) {
                                }
                              }
                              uVar24 = uVar24 ^ 0x1f;
                            }
                            uVar21 = *(ushort *)
                                      (*(long *)(lVar13 + (ulong)uVar24 * 0x10) +
                                      (ulong)(uVar36 >>
                                             (*(byte *)(lVar13 + 8 + (ulong)uVar24 * 0x10) & 0x1f))
                                      * 2);
                            uVar36 = uVar21 >> 10 & 0x1f;
                            uVar24 = uVar21 >> 5 & 0x1f;
                            uVar55 = uVar21 & 0x1f;
                            auVar63 = insertps(ZEXT416(*(uint *)(*(long *)(param_1 + 0x1c638) +
                                                                 -0x10 + (ulong)uVar36 * 4)),
                                               *(undefined4 *)
                                                (*(long *)(param_1 + 0x1c638) + -0x10 +
                                                (ulong)uVar24 * 4),0x10);
                            asStack_858[uVar43 + uVar30 + lVar49 * 2] = (short)uVar36 + -4;
                            asStack_858[uVar43 + uVar30 + lVar49 * 2 + 1] = (short)uVar24 + -4;
                            *(ulong *)(local_900 + uVar30 * 4 + lVar49 * 8) =
                                 CONCAT44(auVar63._4_4_ * fVar67,auVar63._0_4_ * fVar67);
                          }
                          *piVar14 = *piVar14 + uVar55;
                          uVar24 = *(int *)(param_1 + 0x28) + uVar55;
                          *(uint *)(param_1 + 0x28) = uVar24;
                          if (uVar24 < 0x20) {
                            uVar55 = *(int *)(param_1 + 0x2c) << ((byte)uVar55 & 0x1f);
                            uVar36 = uVar24;
                          }
                          else if (uVar24 == 0x20) {
                            *(undefined4 *)(param_1 + 0x28) = 0;
                            uVar55 = *(int *)(param_1 + 0x18) + 1;
                            *(uint *)(param_1 + 0x18) = uVar55;
                            uVar36 = 0;
                            uVar24 = 0;
                            if (uVar55 < *(uint *)(param_1 + 0x34)) {
                              *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
                              uVar24 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar55 * 4);
                            }
                            uVar55 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 |
                                     (uVar24 & 0xff00) << 8 | uVar24 << 0x18;
                          }
                          else {
                            uVar36 = uVar24 - 0x20;
                            *(uint *)(param_1 + 0x28) = uVar36;
                            lVar50 = *(long *)(param_1 + 0x10);
                            *(long *)(param_1 + 0x10) = lVar50 + 4;
                            uVar55 = *(uint *)(lVar50 + 4);
                            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                            uVar55 = (uVar55 >> 0x18 | (uVar55 & 0xff0000) >> 8 |
                                      (uVar55 & 0xff00) << 8 | uVar55 << 0x18) <<
                                     ((byte)uVar24 & 0x1f);
                          }
                          *(uint *)(param_1 + 0x2c) = uVar55;
                          lVar49 = lVar49 + 1;
                        } while (iVar22 != (int)lVar49);
                      }
                      local_8d0 = local_8d0 + 1;
                      uVar32 = uVar32 + 1;
                      uVar21 = uVar54;
                    } while (uVar32 != bVar34);
                  }
                }
                else {
                  if (0xb < bVar45) goto LAB_10010fe32;
                  if (bVar53 < bVar34) {
                    uVar32 = (ulong)bVar53;
                    uVar21 = *(ushort *)(lVar12 + uVar32 * 2);
                    do {
                      uVar54 = *(ushort *)(lVar12 + 2 + uVar32 * 2);
                      iVar22 = -2;
                      if (uVar54 <= uVar21) goto LAB_100110177;
                      uVar36 = (uint)uVar54 - (uint)uVar21;
                      if ((uVar36 & 3) != 0) goto LAB_100110177;
                      iVar58 = (uVar36 >> 1) * uVar38;
                      if (iVar58 != 0) {
                        fVar67 = *local_8d0;
                        uVar30 = (ulong)(uVar21 * uVar38);
                        uVar36 = *(uint *)(param_1 + 0x28);
                        lVar49 = local_900 + 4 + uVar30 * 4;
                        lVar50 = 0;
                        do {
                          if (uVar36 == 0) {
                            uVar36 = *(uint *)(param_1 + 0x2c);
                          }
                          else {
                            uVar24 = *(uint *)(*(long *)(param_1 + 0x10) + 4);
                            uVar36 = (uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 |
                                      (uVar24 & 0xff00) << 8 | uVar24 << 0x18) >>
                                     (-(char)uVar36 & 0x1fU) | *(uint *)(param_1 + 0x2c);
                          }
                          uVar57 = 0x20;
                          uVar24 = 0x20;
                          if (uVar36 != 0) {
                            uVar24 = 0x1f;
                            if (uVar36 != 0) {
                              for (; uVar36 >> uVar24 == 0; uVar24 = uVar24 - 1) {
                              }
                            }
                            uVar24 = uVar24 ^ 0x1f;
                          }
                          uVar44 = ~uVar36 | uVar9;
                          if (uVar44 != 0) {
                            uVar57 = 0x1f;
                            if (uVar44 != 0) {
                              for (; uVar44 >> uVar57 == 0; uVar57 = uVar57 - 1) {
                              }
                            }
                            uVar57 = uVar57 ^ 0x1f;
                          }
                          if (uVar24 < uVar23) {
                            if (uVar24 < uVar55) {
                              plVar27 = (long *)((ulong)uVar57 * 0x10 + lVar13);
                              uVar21 = *(ushort *)
                                        (*plVar27 +
                                        (ulong)(uVar44 >> (*(byte *)(plVar27 + 1) & 0x1f)) * 2);
                              bVar45 = (byte)(uVar21 >> 0xf);
                              uVar37 = uVar21 >> 10 & 0x1f;
                              uVar60 = (uint)((uVar21 >> 10 & 0x1f) != 0);
                              uVar44 = uVar21 >> 5 & 0x1f;
                              uVar57 = (uint)((uVar21 >> 5 & 0x1f) != 0);
                              uVar24 = uVar21 & 0x1f;
                            }
                            else {
                              uVar57 = 1;
                              bVar45 = 0;
                              uVar60 = 1;
                              uVar44 = 1;
                              uVar37 = 1;
                              uVar24 = uVar55;
                            }
                            iVar47 = uVar36 << ((byte)uVar24 & 0x1f);
                            iVar59 = uVar57 + uVar60 + uVar24;
                            piVar14 = *(int **)(param_1 + 0x40);
                            *piVar14 = *piVar14 + iVar59;
                            uVar24 = *(int *)(param_1 + 0x28) + iVar59;
                            *(uint *)(param_1 + 0x28) = uVar24;
                            if (uVar24 < 0x20) {
                              uVar57 = *(int *)(param_1 + 0x2c) << ((byte)iVar59 & 0x1f);
                              uVar36 = uVar24;
                            }
                            else if (uVar24 == 0x20) {
                              *(undefined4 *)(param_1 + 0x28) = 0;
                              uVar57 = *(int *)(param_1 + 0x18) + 1;
                              *(uint *)(param_1 + 0x18) = uVar57;
                              uVar36 = 0;
                              uVar24 = 0;
                              if (uVar57 < *(uint *)(param_1 + 0x34)) {
                                *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
                                uVar24 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar57 * 4);
                              }
                              uVar57 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 |
                                       (uVar24 & 0xff00) << 8 | uVar24 << 0x18;
                            }
                            else {
                              uVar36 = uVar24 - 0x20;
                              *(uint *)(param_1 + 0x28) = uVar36;
                              lVar52 = *(long *)(param_1 + 0x10);
                              *(long *)(param_1 + 0x10) = lVar52 + 4;
                              uVar57 = *(uint *)(lVar52 + 4);
                              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                              uVar57 = (uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 |
                                        (uVar57 & 0xff00) << 8 | uVar57 << 0x18) <<
                                       ((byte)uVar24 & 0x1f);
                            }
                            uVar48 = iVar47 >> 0x1f;
                            uVar24 = (iVar47 << (sbyte)uVar60) >> 0x1f;
                            *(uint *)(param_1 + 0x2c) = uVar57;
                            if (bVar45 == 0) {
                              uVar48 = uVar37 + uVar48 ^ uVar48;
                              fVar66 = *(float *)(*(long *)(param_1 + 0x1c638) +
                                                 (long)(int)uVar48 * 4);
                              uVar24 = uVar44 + uVar24 ^ uVar24;
                              fVar61 = *(float *)(*(long *)(param_1 + 0x1c638) +
                                                 (long)(int)uVar24 * 4);
                            }
                            else {
                              if (uVar37 == 0x10) {
                                if (uVar36 != 0) {
                                  uVar60 = *(uint *)(*(long *)(param_1 + 0x10) + 4);
                                  uVar57 = uVar57 | (uVar60 >> 0x18 | (uVar60 & 0xff0000) >> 8 |
                                                     (uVar60 & 0xff00) << 8 | uVar60 << 0x18) >>
                                                    (-(char)uVar36 & 0x1fU);
                                }
                                if (0xff7fffff < uVar57) goto LAB_100110177;
                                uVar36 = 0x1f;
                                if (~uVar57 != 0) {
                                  for (; ~uVar57 >> uVar36 == 0; uVar36 = uVar36 - 1) {
                                  }
                                }
                                bVar45 = (byte)(uVar36 ^ 0x1f);
                                uVar57 = (0x10 << (bVar45 & 0x1f)) +
                                         ((uVar57 << (bVar45 + 1 & 0x1f)) >> (0x1c - bVar45 & 0x1f))
                                ;
                                fVar66 = *(float *)(param_1 + 0x1da64 + (long)(int)uVar48 * 4);
                                lVar52 = *(long *)(param_1 + 0x1c638);
                                if (uVar57 < 0x400) {
                                  fVar61 = *(float *)(lVar52 + (ulong)(uVar57 & 0x3ff) * 4);
                                }
                                else {
                                  dVar16 = (double)_pow(SUB84((double)(int)uVar57,0),DAT_100700c30);
                                  fVar61 = (float)dVar16;
                                }
                                fVar66 = fVar66 * fVar61;
                                iVar59 = (uVar36 ^ 0x1f) * 2 + 5;
                                uVar48 = uVar57 + uVar48 ^ uVar48;
                                *piVar14 = *piVar14 + iVar59;
                                uVar60 = *(int *)(param_1 + 0x28) + iVar59;
                                *(uint *)(param_1 + 0x28) = uVar60;
                                if (uVar60 < 0x20) {
                                  uVar57 = *(int *)(param_1 + 0x2c) << ((byte)iVar59 & 0x1f);
                                  *(uint *)(param_1 + 0x2c) = uVar57;
                                  uVar36 = uVar60;
                                  goto LAB_10010fc40;
                                }
                                if (uVar60 != 0x20) {
                                  uVar36 = uVar60 - 0x20;
                                  *(uint *)(param_1 + 0x28) = uVar36;
                                  lVar15 = *(long *)(param_1 + 0x10);
                                  *(long *)(param_1 + 0x10) = lVar15 + 4;
                                  uVar57 = *(uint *)(lVar15 + 4);
                                  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                                  uVar57 = (uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 |
                                            (uVar57 & 0xff00) << 8 | uVar57 << 0x18) <<
                                           ((byte)uVar60 & 0x1f);
                                  *(uint *)(param_1 + 0x2c) = uVar57;
                                  goto LAB_10010fc40;
                                }
                                *(undefined4 *)(param_1 + 0x28) = 0;
                                uVar60 = *(int *)(param_1 + 0x18) + 1;
                                *(uint *)(param_1 + 0x18) = uVar60;
                                uVar36 = 0;
                                uVar57 = 0;
                                if (uVar60 < *(uint *)(param_1 + 0x34)) {
                                  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
                                  uVar57 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar60 * 4);
                                }
                                uVar57 = uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 |
                                         (uVar57 & 0xff00) << 8 | uVar57 << 0x18;
                                *(uint *)(param_1 + 0x2c) = uVar57;
                                if (uVar44 != 0x10) goto LAB_10010fd2b;
                              }
                              else {
                                uVar48 = uVar37 + uVar48 ^ uVar48;
                                lVar52 = *(long *)(param_1 + 0x1c638);
                                fVar66 = *(float *)(lVar52 + (long)(int)uVar48 * 4);
LAB_10010fc40:
                                if (uVar44 != 0x10) {
LAB_10010fd2b:
                                  uVar24 = uVar44 + uVar24 ^ uVar24;
                                  fVar61 = *(float *)(lVar52 + (long)(int)uVar24 * 4);
                                  goto LAB_10010fdda;
                                }
                                if (uVar36 != 0) {
                                  uVar44 = *(uint *)(*(long *)(param_1 + 0x10) + 4);
                                  uVar57 = uVar57 | (uVar44 >> 0x18 | (uVar44 & 0xff0000) >> 8 |
                                                     (uVar44 & 0xff00) << 8 | uVar44 << 0x18) >>
                                                    (-(char)uVar36 & 0x1fU);
                                }
                              }
                              if (0xff7fffff < uVar57) goto LAB_100110177;
                              uVar36 = 0x1f;
                              if (~uVar57 != 0) {
                                for (; ~uVar57 >> uVar36 == 0; uVar36 = uVar36 - 1) {
                                }
                              }
                              bVar45 = (byte)(uVar36 ^ 0x1f);
                              uVar57 = (0x10 << (bVar45 & 0x1f)) +
                                       ((uVar57 << (bVar45 + 1 & 0x1f)) >> (0x1c - bVar45 & 0x1f));
                              fVar61 = *(float *)(param_1 + 0x1da64 + (long)(int)uVar24 * 4);
                              if (uVar57 < 0x400) {
                                fVar62 = *(float *)(lVar52 + (ulong)(uVar57 & 0x3ff) * 4);
                              }
                              else {
                                dVar16 = (double)_pow(SUB84((double)(int)uVar57,0),DAT_100700c30);
                                fVar62 = (float)dVar16;
                              }
                              fVar61 = fVar61 * fVar62;
                              iVar59 = (uVar36 ^ 0x1f) * 2 + 5;
                              uVar24 = uVar57 + uVar24 ^ uVar24;
                              *piVar14 = *piVar14 + iVar59;
                              uVar57 = *(int *)(param_1 + 0x28) + iVar59;
                              *(uint *)(param_1 + 0x28) = uVar57;
                              if (uVar57 < 0x20) {
                                *(int *)(param_1 + 0x2c) =
                                     *(int *)(param_1 + 0x2c) << ((byte)iVar59 & 0x1f);
                                uVar36 = uVar57;
                              }
                              else if (uVar57 == 0x20) {
                                *(undefined4 *)(param_1 + 0x28) = 0;
                                uVar44 = *(int *)(param_1 + 0x18) + 1;
                                *(uint *)(param_1 + 0x18) = uVar44;
                                uVar36 = 0;
                                uVar57 = 0;
                                if (uVar44 < *(uint *)(param_1 + 0x34)) {
                                  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
                                  uVar57 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar44 * 4);
                                }
                                *(uint *)(param_1 + 0x2c) =
                                     uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 |
                                     (uVar57 & 0xff00) << 8 | uVar57 << 0x18;
                              }
                              else {
                                uVar36 = uVar57 - 0x20;
                                *(uint *)(param_1 + 0x28) = uVar36;
                                lVar52 = *(long *)(param_1 + 0x10);
                                *(long *)(param_1 + 0x10) = lVar52 + 4;
                                uVar44 = *(uint *)(lVar52 + 4);
                                *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                                *(uint *)(param_1 + 0x2c) =
                                     (uVar44 >> 0x18 | (uVar44 & 0xff0000) >> 8 |
                                      (uVar44 & 0xff00) << 8 | uVar44 << 0x18) <<
                                     ((byte)uVar57 & 0x1f);
                              }
                            }
LAB_10010fdda:
                            asStack_858[uVar43 + uVar30 + lVar50 * 2] = (short)uVar48;
                            asStack_858[uVar43 + uVar30 + lVar50 * 2 + 1] = (short)uVar24;
                            *(float *)(lVar49 + -4 + lVar50 * 8) = fVar66 * fVar67;
                            *(float *)(lVar49 + lVar50 * 8) = fVar61 * fVar67;
                          }
                          else {
                            **(int **)(param_1 + 0x40) = **(int **)(param_1 + 0x40) + uVar23;
                            uVar24 = *(int *)(param_1 + 0x28) + uVar23;
                            *(uint *)(param_1 + 0x28) = uVar24;
                            if (uVar24 < 0x20) {
                              *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) << (bVar4 & 0x1f);
                              uVar36 = uVar24;
                            }
                            else if (uVar24 == 0x20) {
                              *(undefined4 *)(param_1 + 0x28) = 0;
                              uVar57 = *(int *)(param_1 + 0x18) + 1;
                              *(uint *)(param_1 + 0x18) = uVar57;
                              uVar36 = 0;
                              uVar24 = 0;
                              if (uVar57 < *(uint *)(param_1 + 0x34)) {
                                *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
                                uVar24 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar57 * 4);
                              }
                              *(uint *)(param_1 + 0x2c) =
                                   uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 |
                                   (uVar24 & 0xff00) << 8 | uVar24 << 0x18;
                            }
                            else {
                              uVar36 = uVar24 - 0x20;
                              *(uint *)(param_1 + 0x28) = uVar36;
                              lVar52 = *(long *)(param_1 + 0x10);
                              *(long *)(param_1 + 0x10) = lVar52 + 4;
                              uVar57 = *(uint *)(lVar52 + 4);
                              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                              *(uint *)(param_1 + 0x2c) =
                                   (uVar57 >> 0x18 | (uVar57 & 0xff0000) >> 8 |
                                    (uVar57 & 0xff00) << 8 | uVar57 << 0x18) <<
                                   ((byte)uVar24 & 0x1f);
                            }
                          }
                          lVar50 = lVar50 + 1;
                        } while (iVar58 != (int)lVar50);
                      }
                      local_8d0 = local_8d0 + 1;
                      uVar32 = uVar32 + 1;
                      uVar21 = uVar54;
                    } while (uVar32 != bVar34);
                  }
                }
              }
            }
            uVar39 = uVar39 + 1;
          } while (uVar39 != uVar35);
        }
        uVar33 = uVar33 + 1;
        iVar25 = iVar25 + (uint)bVar3;
      } while (uVar33 != uVar8);
    }
    uVar8 = _DAT_100700430;
    if (bVar5 != 0) {
      lVar29 = 0;
      do {
        uVar33 = (ulong)*(ushort *)((long)puVar10 + lVar29 + 0xd3c);
        bVar3 = *(byte *)((long)puVar10 + lVar29 + 0xd3e);
        uVar38 = -(uint)bVar3;
        if (0 < asStack_858[uVar33]) {
          uVar38 = (uint)bVar3;
        }
        uVar38 = uVar38 + (int)asStack_858[uVar33];
        if (0x3ff < (int)uVar38) goto LAB_100110171;
        uVar36 = -uVar38;
        if ((int)-uVar38 < 0) {
          uVar36 = uVar38;
        }
        if (uVar36 < 0x81) {
          fVar67 = *(float *)(*(long *)(param_1 + 0x1c638) + (long)(int)uVar38 * 4);
        }
        else {
          if (0x47f < uVar36) {
            puVar28 = (undefined4 *)___cxa_allocate_exception(4);
            *puVar28 = 0xfffffffa;
                    /* WARNING: Subroutine does not return */
            ___cxa_throw(puVar28,&PTR_DAT_100835930,0);
          }
          fVar67 = (float)(*(uint *)(*(long *)(param_1 + 0x1c638) + (ulong)uVar36 * 4) ^ uVar8);
        }
        *(float *)(*(long *)(param_1 + 0xba8) + 0xd70 + uVar33 * 4) =
             *(float *)((long)puVar10 + lVar29 + 0xd44) * fVar67;
        lVar29 = lVar29 + 0xc;
      } while ((ulong)bVar5 * 0xc != lVar29);
    }
    if (local_8dc != 0) {
      uVar33 = 0;
      do {
        uVar8 = *(uint *)(puVar10 + (ulong)auStack_8a8[uVar33 * 0xc] * 8 + 0x194);
        if ((ulong)uVar8 != 0) {
          lVar29 = alStack_8b8[uVar33 * 3];
          lVar13 = alStack_8b8[uVar33 * 3 + 1];
          uVar21 = auStack_8a8[uVar33 * 0xc + 1];
          lVar49 = *(long *)(puVar10 + (ulong)auStack_8a8[uVar33 * 0xc] * 8 + 0x198);
          uVar43 = 0;
          do {
            if (*(char *)(lVar49 + 1 + uVar43 * 6) != '\0') {
              lVar50 = lVar49 + uVar43 * 6;
              bVar5 = *(byte *)(lVar50 + 3);
              bVar3 = *(byte *)(lVar50 + 2);
              uVar35 = (ulong)bVar3;
              if (bVar3 < bVar5) {
                uVar54 = *(ushort *)(lVar12 + uVar35 * 2);
                do {
                  uVar7 = *(ushort *)(lVar12 + 2 + uVar35 * 2);
                  iVar22 = -2;
                  if (uVar7 <= uVar54) goto LAB_100110177;
                  uVar38 = (uint)uVar7 - (uint)uVar54;
                  if ((uVar38 & 3) != 0) goto LAB_100110171;
                  if (uVar21 != 0) {
                    lVar50 = lVar13 + (ulong)(uint)uVar54 * 4;
                    lVar52 = lVar29 + (ulong)((uint)uVar54 * (uint)uVar21) * 4;
                    uVar36 = 0;
                    do {
                      if ((((uint)lVar52 | (uint)lVar50) & 7) != 0) goto LAB_100110171;
                      uVar39 = 0;
                      do {
                        puVar2 = (undefined4 *)(lVar52 + uVar39 * 8);
                        uVar17 = puVar2[1];
                        uVar18 = puVar2[2];
                        uVar19 = puVar2[3];
                        puVar28 = (undefined4 *)(lVar50 + uVar39 * 8);
                        *puVar28 = *puVar2;
                        puVar28[1] = uVar17;
                        puVar28[2] = uVar18;
                        puVar28[3] = uVar19;
                        uVar39 = uVar39 + 2;
                      } while (uVar39 < uVar38 >> 1);
                      lVar52 = lVar52 + (ulong)uVar38 * 4;
                      lVar50 = lVar50 + (ulong)uVar6 * 4;
                      uVar36 = uVar36 + 1;
                    } while (uVar36 != uVar21);
                  }
                  uVar35 = uVar35 + 1;
                  uVar54 = uVar7;
                } while (uVar35 != bVar5);
              }
            }
            uVar43 = uVar43 + 1;
          } while (uVar43 != uVar8);
        }
        uVar33 = uVar33 + 1;
        iVar22 = 0;
      } while (uVar33 != local_8dc);
      goto LAB_100110177;
    }
  }
  iVar22 = 0;
  goto LAB_100110177;
LAB_100110171:
  iVar22 = -2;
LAB_100110177:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar22;
}

