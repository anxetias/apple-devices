// name: FUN_100428630
// address: 100428630

int FUN_100428630(int *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,uint *param_6,uint param_7,uint *param_8,undefined8 param_9)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  size_t sVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  ulong uVar17;
  char *pcVar18;
  long lVar19;
  uint *puVar20;
  undefined4 uVar21;
  uint uVar22;
  int iVar23;
  uint *puVar24;
  uint *puVar25;
  uint uVar26;
  char cVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  long *plVar31;
  int local_248;
  int iStack_244;
  int iStack_240;
  int iStack_23c;
  undefined8 local_238;
  long local_230;
  undefined8 local_228;
  long *local_220;
  undefined8 local_218;
  long local_210;
  undefined8 local_208;
  long *local_200;
  undefined8 local_1f8;
  long local_1f0;
  int local_1e8;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  ulong local_1d8;
  uint local_1cc;
  uint *local_1c8;
  code *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  uint *local_1a0;
  undefined4 local_194;
  uint *local_190;
  uint *local_188;
  uint local_17c;
  uint local_178;
  ushort local_174 [2];
  int *local_170;
  uint local_168;
  char *local_164;
  undefined2 local_15c;
  int local_15a;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined2 local_13c;
  char *local_13a;
  undefined8 local_b8;
  long *local_b0;
  undefined1 local_97 [30];
  undefined1 local_79 [30];
  undefined1 local_5b [4];
  undefined1 local_57 [28];
  char local_3b;
  char local_3a;
  char local_39;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_170 = param_1;
  if (*param_1 != 0x49443343) {
    uVar11 = FUN_1001cc310();
    cVar27 = _os_log_type_enabled(uVar11,0x10);
    if (cVar27 != '\0') {
      local_148._0_1_ = 2;
      local_148._1_1_ = 2;
      local_148._2_2_ = 0x822;
      uStack_144 = 0x7a0a90;
      uStack_140 = 1;
      local_13c = 0x822;
      local_13a = "connection->magic == \'ID3C\'";
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_148,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
    goto LAB_100429fa5;
  }
  puVar20 = param_6;
  local_188 = (uint *)FUN_1001c6429(0x1000);
  if (local_188 == (uint *)0x0) {
    uVar11 = FUN_1001cc310();
    cVar27 = _os_log_type_enabled(uVar11,0x10);
    if (cVar27 != '\0') {
      local_148._0_1_ = 2;
      local_148._1_1_ = 2;
      local_148._2_2_ = 0x822;
      uStack_144 = 0x7a0a90;
      uStack_140 = 1;
      local_13c = 0x822;
      local_13a = "tempBuffer != nullptr";
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_148,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x6c;
    goto LAB_100429fa5;
  }
  lVar7 = *(long *)(local_170 + 0x14);
  local_1c8 = param_6;
  local_1c0 = param_2;
  local_1b8 = param_5;
  local_1b0 = param_4;
  local_1a8 = param_3;
  if (lVar7 == *(long *)(local_170 + 0x16)) {
LAB_1004286f6:
    if (*(byte *)((long)local_170 + 0x1b) - 2 < 3) {
      iVar4 = 0;
      if (lVar7 + (ulong)(uint)local_170[0x1d] <= *(ulong *)(local_170 + 0x18)) {
        uVar17 = 0x1000;
        do {
          local_190 = (uint *)CONCAT44(local_190._4_4_,(int)uVar17);
          FUN_1001c62d9(&local_17c,10);
          local_17c = 0x20202020;
          uVar11 = *(undefined8 *)(local_170 + 2);
          plVar2 = *(long **)(local_170 + 4);
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar2[1] = plVar2[1] + 1;
            UNLOCK();
          }
          iVar4 = FUN_10042a48e(uVar11,local_170[0x1a],&local_17c,param_9);
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar31 = plVar2 + 1;
            lVar7 = *plVar31;
            *plVar31 = *plVar31 + -1;
            UNLOCK();
            if (lVar7 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (iVar4 != 0) {
            if (iVar4 != -0x80) {
              uVar11 = FUN_1001cc310();
              cVar27 = _os_log_type_enabled(uVar11,0x10);
              if (cVar27 != '\0') {
                puVar20 = &local_148;
                local_148._0_1_ = 2;
                local_148._1_1_ = 2;
                local_148._2_2_ = 0x822;
                uStack_144 = 0x7a0a90;
                uStack_140 = 1;
                local_13c = 0x400;
                local_13a = (char *)CONCAT44(local_13a._4_4_,iVar4);
                goto LAB_100429f2c;
              }
            }
            break;
          }
          uVar5 = local_17c >> 0x18 | (local_17c & 0xff0000) >> 8 | (local_17c & 0xff00) << 8 |
                  local_17c << 0x18;
          uVar22 = local_17c >> 0x18;
          local_17c = uVar5 | 0x20;
          if ((char)uVar22 != '\0') {
            local_17c = uVar5;
          }
          *(ulong *)(local_170 + 0x14) = *(long *)(local_170 + 0x14) + (ulong)(uint)local_170[0x1a];
          if (local_17c < 0x1000000) {
            iVar4 = 0;
            break;
          }
          local_178 = 0;
          if (*(char *)((long)local_170 + 0x1b) == '\x04') {
            local_1e8 = local_170[2];
            iStack_1e4 = local_170[3];
            iStack_1e0 = local_170[4];
            iStack_1dc = local_170[5];
            if (*(long *)(local_170 + 4) != 0) {
              LOCK();
              plVar2 = (long *)(*(long *)(local_170 + 4) + 8);
              *plVar2 = *plVar2 + 1;
              UNLOCK();
            }
            local_178 = 0;
            puVar8 = (uint *)0x0;
            iVar23 = 0x15;
            bVar12 = false;
            do {
              local_b8 = CONCAT44(iStack_1e4,local_1e8);
              plVar2 = (long *)CONCAT44(iStack_1dc,iStack_1e0);
              if (plVar2 != (long *)0x0) {
                LOCK();
                plVar2[1] = plVar2[1] + 1;
                UNLOCK();
              }
              local_b0 = plVar2;
              iVar4 = FUN_10042a48e(local_b8,1,&local_168,param_9);
              if (plVar2 != (long *)0x0) {
                LOCK();
                plVar31 = plVar2 + 1;
                lVar7 = *plVar31;
                *plVar31 = *plVar31 + -1;
                UNLOCK();
                if (lVar7 == 0) {
                  (**(code **)(*plVar2 + 0x10))(plVar2);
                  std::__shared_weak_count::__release_weak();
                }
              }
              if (iVar4 != 0) {
                if (iVar4 != -0x80) {
                  uVar11 = FUN_1001cc310();
                  cVar27 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar27 != '\0') {
                    local_148._0_1_ = 2;
                    local_148._1_1_ = 2;
                    local_148._2_2_ = 0x822;
                    uStack_144 = 0x7a0a90;
                    uStack_140 = 1;
                    local_13c = 0x400;
                    local_13a = (char *)CONCAT44(local_13a._4_4_,iVar4);
                    puVar20 = (uint *)0x0;
                    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_148
                                        ,0x12);
                  }
                }
                puVar8 = (uint *)0x0;
                goto LAB_1004289ab;
              }
              if ((char)local_168 < '\0') {
                bVar12 = true;
              }
              uVar22 = (int)puVar8 << 8 | local_168 & 0xff;
              puVar8 = (uint *)(ulong)uVar22;
              local_178 = local_178 | (local_168 & 0xff) << ((byte)iVar23 & 0x1f);
              iVar23 = iVar23 + -7;
            } while (iVar23 != -7);
            if (bVar12) {
              puVar8 = (uint *)0x0;
              local_178 = uVar22;
            }
LAB_1004289ab:
            plVar2 = (long *)CONCAT44(iStack_1dc,iStack_1e0);
            if (plVar2 != (long *)0x0) {
              LOCK();
              plVar31 = plVar2 + 1;
              lVar7 = *plVar31;
              *plVar31 = *plVar31 + -1;
              UNLOCK();
              if (lVar7 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (iVar4 != 0) {
              if (iVar4 != -0x80) {
                uVar11 = FUN_1001cc310();
                cVar27 = _os_log_type_enabled(uVar11,0x10);
                if (cVar27 != '\0') {
                  puVar20 = &local_148;
                  local_148._0_1_ = 2;
                  local_148._1_1_ = 2;
                  local_148._2_2_ = 0x822;
                  uStack_144 = 0x7a0a90;
                  uStack_140 = 1;
                  local_13c = 0x400;
                  local_13a = (char *)CONCAT44(local_13a._4_4_,iVar4);
                  goto LAB_100429f2c;
                }
              }
              break;
            }
          }
          else {
            iVar4 = local_170[0x1b];
            uVar11 = *(undefined8 *)(local_170 + 2);
            plVar2 = *(long **)(local_170 + 4);
            iVar23 = iVar4;
            if (plVar2 != (long *)0x0) {
              LOCK();
              plVar2[1] = plVar2[1] + 1;
              UNLOCK();
              iVar23 = local_170[0x1b];
            }
            iVar4 = FUN_10042a48e(uVar11,iVar23,(long)local_174 + ((ulong)(4 - iVar4) - 4),param_9);
            if (plVar2 != (long *)0x0) {
              LOCK();
              plVar31 = plVar2 + 1;
              lVar7 = *plVar31;
              *plVar31 = *plVar31 + -1;
              UNLOCK();
              if (lVar7 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (iVar4 != 0) {
              if (iVar4 != -0x80) {
                uVar11 = FUN_1001cc310();
                cVar27 = _os_log_type_enabled(uVar11,0x10);
                if (cVar27 != '\0') {
                  puVar20 = &local_148;
                  local_148._0_1_ = 2;
                  local_148._1_1_ = 2;
                  local_148._2_2_ = 0x822;
                  uStack_144 = 0x7a0a90;
                  uStack_140 = 1;
                  local_13c = 0x400;
                  local_13a = (char *)CONCAT44(local_13a._4_4_,iVar4);
                  goto LAB_100429f2c;
                }
              }
              break;
            }
            local_178 = local_178 >> 0x18 | (local_178 & 0xff0000) >> 8 | (local_178 & 0xff00) << 8
                        | local_178 << 0x18;
            puVar8 = (uint *)0x0;
          }
          iVar4 = local_170[0x1c];
          lVar7 = (ulong)(uint)local_170[0x1b] + *(long *)(local_170 + 0x14);
          *(long *)(local_170 + 0x14) = lVar7;
          if (iVar4 != 0) {
            uVar11 = *(undefined8 *)(local_170 + 2);
            plVar2 = *(long **)(local_170 + 4);
            if (plVar2 != (long *)0x0) {
              LOCK();
              plVar2[1] = plVar2[1] + 1;
              UNLOCK();
              iVar4 = local_170[0x1c];
            }
            iVar4 = FUN_10042a48e(uVar11,iVar4,local_174,param_9);
            if (plVar2 != (long *)0x0) {
              LOCK();
              plVar31 = plVar2 + 1;
              lVar7 = *plVar31;
              *plVar31 = *plVar31 + -1;
              UNLOCK();
              if (lVar7 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (iVar4 != 0) {
              if (iVar4 != -0x80) {
                uVar11 = FUN_1001cc310();
                cVar27 = _os_log_type_enabled(uVar11,0x10);
                if (cVar27 != '\0') {
                  puVar20 = &local_148;
                  local_148._0_1_ = 2;
                  local_148._1_1_ = 2;
                  local_148._2_2_ = 0x822;
                  uStack_144 = 0x7a0a90;
                  uStack_140 = 1;
                  local_13c = 0x400;
                  local_13a = (char *)CONCAT44(local_13a._4_4_,iVar4);
                  goto LAB_100429f2c;
                }
              }
              break;
            }
            local_174[0] = local_174[0] << 8 | local_174[0] >> 8;
            lVar7 = (ulong)(uint)local_170[0x1c] + *(long *)(local_170 + 0x14);
            *(long *)(local_170 + 0x14) = lVar7;
          }
          if ((local_174[0] & 8) != 0) {
            local_174[0] = local_174[0] | 1;
          }
          puVar20 = (uint *)CONCAT71((int7)((ulong)puVar20 >> 8),1);
          puVar25 = param_8;
          if (param_8 != (uint *)0x0) {
            do {
              cVar27 = *puVar25 == local_17c;
              lVar19 = (ulong)!(bool)cVar27 << 2;
              if (*puVar25 == 0) {
                cVar27 = '\x03';
                lVar19 = 0;
              }
              puVar25 = (uint *)((long)puVar25 + lVar19);
            } while (cVar27 == '\0');
            if (cVar27 == '\x03') {
              puVar20 = (uint *)0x0;
            }
          }
          bVar28 = *(char *)((long)local_170 + 0x1b) == '\x04';
          puVar25 = (uint *)(ulong)local_178;
          bVar12 = 0x7f < local_178;
          uVar22 = (uint)puVar8;
          bVar29 = uVar22 != 0;
          bVar3 = (bVar29 && bVar28) && bVar12;
          if (((char)puVar20 != '\0') || (bVar3)) {
            local_194 = SUB84(puVar20,0);
            uVar26 = local_178 + 4;
            uVar5 = local_178;
            if ((bVar29 && bVar28) && bVar12) {
              uVar5 = uVar26;
            }
            puVar24 = (uint *)(ulong)uVar5;
            puVar15 = (uint *)((ulong)local_190 & 0xffffffff);
            if ((uint)local_190 < uVar5) {
              puVar15 = (uint *)(*(long *)(local_170 + 0x18) - lVar7);
              local_148._0_1_ = SUB81(puVar15,0);
              local_148._1_1_ = (byte)((ulong)puVar15 >> 8);
              local_148._2_2_ = (undefined2)((ulong)puVar15 >> 0x10);
              uStack_144 = (undefined4)((ulong)puVar15 >> 0x20);
              if (puVar15 < (uint *)(ulong)uVar5) {
LAB_100428bcf:
                bVar30 = puVar15 != puVar25;
                if (((bVar29 && bVar28) && bVar12) && bVar30) {
                  puVar25 = (uint *)(ulong)uVar26;
                }
LAB_100428bde:
                bVar3 = bVar3 && bVar30;
                iVar4 = 0;
                if (puVar25 <= puVar15) {
                  local_188 = (uint *)FUN_1001c6479(local_188);
                  puVar15 = puVar25;
                  puVar24 = puVar25;
                  if (local_188 != (uint *)0x0) goto LAB_100428c13;
                  iVar4 = 0;
                  local_188 = (uint *)0x0;
                }
              }
              else {
                local_1a0 = puVar25;
                if ((*(byte *)(local_170 + 1) & 4) != 0) {
                  local_148._0_1_ = 0xff;
                  local_148._1_1_ = 0xff;
                  local_148._2_2_ = 0x7fff;
                  uStack_144 = 0;
                  puVar15 = (uint *)0x7fffffff;
                  goto LAB_100428bcf;
                }
                iVar4 = (**(code **)(**(long **)(local_170 + 2) + 0x100))
                                  (*(long **)(local_170 + 2),&local_148);
                puVar15 = (uint *)CONCAT44(uStack_144,
                                           CONCAT22(local_148._2_2_,
                                                    CONCAT11(local_148._1_1_,(undefined1)local_148))
                                          );
                bVar30 = puVar15 != puVar25;
                puVar25 = (uint *)((ulong)local_1a0 & 0xffffffff);
                if (((bVar29 && bVar28) && bVar12) && bVar30) {
                  puVar25 = (uint *)(ulong)uVar26;
                }
                if (iVar4 == 0) goto LAB_100428bde;
              }
              lVar7 = *(long *)(local_170 + 0x14);
              puVar25 = (uint *)(ulong)local_178;
              uVar22 = (uint)local_190;
              goto LAB_100428ea3;
            }
LAB_100428c13:
            local_228 = *(undefined8 *)(local_170 + 2);
            local_220 = *(long **)(local_170 + 4);
            if (local_220 != (long *)0x0) {
              LOCK();
              local_220[1] = local_220[1] + 1;
              UNLOCK();
            }
            local_1a0 = puVar15;
            iVar4 = FUN_10042a48e(local_228,puVar24,local_188,param_9);
            if (local_220 != (long *)0x0) {
              LOCK();
              plVar2 = local_220 + 1;
              lVar7 = *plVar2;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (lVar7 == 0) {
                (**(code **)(*local_220 + 0x10))(local_220);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (iVar4 != 0) {
              if (iVar4 != -0x80) {
                uVar11 = FUN_1001cc310();
                cVar27 = _os_log_type_enabled(uVar11,0x10);
                if (cVar27 != '\0') {
                  puVar20 = &local_148;
                  local_148._0_1_ = 2;
                  local_148._1_1_ = 2;
                  local_148._2_2_ = 0x822;
                  uStack_144 = 0x7a0a90;
                  uStack_140 = 1;
                  local_13c = 0x400;
                  local_13a = (char *)CONCAT44(local_13a._4_4_,iVar4);
                  goto LAB_100429f2c;
                }
              }
              break;
            }
            *(char **)(local_170 + 0x14) = (char *)(*(long *)(local_170 + 0x14) + (long)puVar24);
            iVar23 = 0;
            if (bVar3) {
              cVar27 = (**(code **)(**(long **)(local_170 + 2) + 0xd0))();
              if (cVar27 == '\x01' && 4 < (uint)puVar24) {
                (**(code **)(**(long **)(local_170 + 2) + 0xe8))
                          (*(long **)(local_170 + 2),4,
                           (char *)((long)local_188 + (long)puVar24) + -4);
                iVar23 = 0;
              }
              else {
                iVar23 = (**(code **)(**(long **)(local_170 + 2) + 0xf8))
                                   (*(long **)(local_170 + 2),&local_148);
                if (iVar23 == 0) {
                  lVar7 = CONCAT44(uStack_144,
                                   CONCAT22(local_148._2_2_,
                                            CONCAT11(local_148._1_1_,(undefined1)local_148))) + -4;
                  local_148._0_1_ = (undefined1)lVar7;
                  local_148._1_1_ = (byte)((ulong)lVar7 >> 8);
                  local_148._2_2_ = (undefined2)((ulong)lVar7 >> 0x10);
                  uStack_144 = (undefined4)((ulong)lVar7 >> 0x20);
                  (**(code **)(**(long **)(local_170 + 2) + 0xf0))();
                }
              }
              lVar7 = *(long *)(local_170 + 0x14);
              *(ulong *)(local_170 + 0x14) = lVar7 - 4U;
              if (((uint)puVar24 < 5) || (*(ulong *)(local_170 + 0x20) <= lVar7 - 4U))
              goto LAB_100428f93;
              FUN_1001c631b((char *)((long)local_188 + (long)puVar24) + -4,&local_b8,4);
              uVar26 = (uint)local_b8;
              uVar13 = (uint)local_b8 >> 0x18 | ((uint)local_b8 & 0xff0000) >> 8 |
                       ((uint)local_b8 & 0xff00) << 8 | (uint)local_b8 << 0x18;
              local_b8 = CONCAT44(local_b8._4_4_,uVar13);
              uVar5 = 0x41454e43;
              pcVar18 = "CIPACIPA CIP";
              cVar27 = (char)local_194;
              do {
                puVar25 = local_1a0;
                if (uVar5 == uVar13) goto LAB_100428fa0;
                uVar5 = *(uint *)pcVar18;
                pcVar18 = (char *)((long)pcVar18 + 0x18);
              } while (uVar5 != 0);
              if ((uVar26 != 0) && (local_178 <= uVar22)) {
                local_188 = (uint *)FUN_1001c6479(local_188,puVar8);
                if (local_188 == (uint *)0x0) {
                  local_188 = (uint *)0x0;
                  goto LAB_100428f93;
                }
                local_218 = *(undefined8 *)(local_170 + 2);
                local_210 = *(long *)(local_170 + 4);
                cVar27 = (char)local_194;
                if (local_210 != 0) {
                  LOCK();
                  *(long *)(local_210 + 8) = *(long *)(local_210 + 8) + 1;
                  UNLOCK();
                }
                iVar4 = FUN_10042a48e(local_218,uVar22 - local_178,
                                      (char *)((ulong)local_178 + (long)local_188),param_9);
                FUN_10021e316(&local_218);
                if (iVar4 != 0) {
                  if (iVar4 != -0x80) {
                    uVar11 = FUN_1001cc310();
                    cVar27 = _os_log_type_enabled(uVar11,0x10);
                    if (cVar27 != '\0') {
                      puVar20 = &local_148;
                      local_148._0_1_ = 2;
                      local_148._1_1_ = 2;
                      local_148._2_2_ = 0x822;
                      uStack_144 = 0x7a0a90;
                      uStack_140 = 1;
                      local_13c = 0x400;
                      local_13a = (char *)CONCAT44(local_13a._4_4_,iVar4);
                      goto LAB_100429f2c;
                    }
                  }
                  break;
                }
                *(ulong *)(local_170 + 0x14) =
                     *(long *)(local_170 + 0x14) + (ulong)(uVar22 - local_178);
                iVar23 = 0;
                puVar25 = puVar8;
                local_178 = uVar22;
              }
            }
            else {
LAB_100428f93:
              cVar27 = (char)local_194;
              puVar25 = local_1a0;
            }
LAB_100428fa0:
            if (cVar27 != '\0') {
              uVar22 = (uint)local_174[0];
              puVar20 = (uint *)(ulong)local_178;
              bVar12 = (local_174[0] & 2) == 0 && -1 < *(char *)((long)local_170 + 0x1d);
              local_194 = CONCAT31(local_194._1_3_,bVar12);
              if (bVar12) {
LAB_10042921d:
                local_190 = local_188;
                if (((local_174[0] & 1) != 0) && (3 < (uint)puVar20)) {
                  uVar5 = *local_188;
                  uVar26 = (uVar5 & 0xff0000) >> 8;
                  uVar13 = (uVar5 & 0xff00) << 8;
                  uVar6 = uVar5 >> 0x18 | uVar26 | uVar13 | uVar5 << 0x18;
                  if ((uVar6 & 0x80808080) == 0) {
                    uVar6 = (uVar5 << 0x18 & 0x7f000000) >> 3 |
                            (uVar13 & 0x7f0000) >> 2 | (uVar26 & 0x7f00) >> 1 | uVar5 >> 0x18 & 0x7f
                    ;
                  }
                  local_190 = local_188 + 1;
                  uVar5 = (uint)puVar20 - 4;
                  puVar20 = (uint *)(ulong)uVar5;
                  if (uVar6 == uVar5) {
                    puVar20 = (uint *)(ulong)uVar6;
                  }
                  else {
                    uVar11 = FUN_1001cc310();
                    cVar27 = _os_log_type_enabled(uVar11,0x10);
                    if (cVar27 != '\0') {
                      local_148._0_1_ = 2;
                      local_148._1_1_ = 2;
                      local_148._2_2_ = 0x822;
                      uStack_144 = 0x7a0a90;
                      uStack_140 = 1;
                      local_13c = 0x822;
                      local_13a = "tempBufferSize == bufferSize";
                      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",
                                          &local_148,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                }
              }
              else {
                if ((uint)puVar25 < local_178) {
                  uVar11 = FUN_1001cc310();
                  cVar27 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar27 != '\0') {
                    local_148._0_1_ = 2;
                    local_148._1_1_ = 2;
                    local_148._2_2_ = 0x822;
                    uStack_144 = 0x7a0a90;
                    uStack_140 = 1;
                    local_13c = 0x822;
                    local_13a = "bufferLength <= maxFrameSize";
                    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",
                                        &local_148,0x16);
                  }
                  FUN_1001782e9(0,0);
LAB_10042a0a3:
                  iVar4 = -0x28;
                  goto LAB_100429fa5;
                }
                cVar27 = *(char *)((long)local_170 + 0x1b);
                local_190 = puVar20;
                if (cVar27 == '\x03') {
                  local_1cc = (uint)local_174[0];
                  pcVar18 = (char *)((long)local_188 + (long)puVar20);
                  iVar14 = 0;
                  bVar12 = false;
                  local_1a0 = puVar25;
                  while( true ) {
                    iVar4 = (int)local_190;
                    uVar17 = (ulong)local_190 & 0xffffffff;
                    uVar22 = 0;
                    if (iVar4 != 0) {
                      puVar8 = local_190;
                      puVar20 = local_188;
                      do {
                        puVar25 = (uint *)((long)puVar20 + 1);
                        if (((char)*puVar20 == -1) && (puVar25 < (uint *)((long)local_188 + uVar17))
                           ) {
                          puVar8 = (uint *)(ulong)((int)puVar8 - (uint)(*(char *)puVar25 == '\0'));
                        }
                        uVar22 = (uint)puVar8;
                        puVar20 = puVar25;
                      } while (puVar25 < (uint *)((long)local_188 + uVar17));
                    }
                    if (0 < (int)(iVar4 - uVar22)) {
                      bVar12 = true;
                    }
                    if (uVar22 == local_178) break;
                    if (local_178 <= uVar22) {
                      uVar11 = FUN_1001cc310();
                      cVar27 = _os_log_type_enabled(uVar11,0x10);
                      if (cVar27 != '\0') {
                        local_148._0_1_ = 2;
                        local_148._1_1_ = 2;
                        local_148._2_2_ = 0x822;
                        uStack_144 = 0x7a0a90;
                        uStack_140 = 1;
                        local_13c = 0x822;
                        local_13a = "strippedBufferLength < frameHeader.frameSize";
                        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",
                                            &local_148,0x16);
                      }
                      FUN_1001782e9(0,0);
                      goto LAB_10042a0a3;
                    }
                    iVar14 = (iVar4 - uVar22) - iVar14;
                    if (uVar22 == local_178 - 1) {
                      iVar14 = 1;
                    }
                    uVar22 = iVar4 + iVar14;
                    local_190 = (uint *)(ulong)uVar22;
                    if ((uint)local_1a0 < uVar22) {
                      local_188 = (uint *)FUN_1001c6479(local_188,uVar22);
                      if (local_188 == (uint *)0x0) {
                        uVar11 = FUN_1001cc310();
                        cVar27 = _os_log_type_enabled(uVar11,0x10);
                        if (cVar27 != '\0') {
                          local_148._0_1_ = 2;
                          local_148._1_1_ = 2;
                          local_148._2_2_ = 0x822;
                          uStack_144 = 0x7a0a90;
                          uStack_140 = 1;
                          local_13c = 0x822;
                          local_13a = "tempBuffer != nullptr";
                          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",
                                              &local_148,0x16);
                        }
                        FUN_1001782e9(0,0);
                        local_188 = (uint *)0x0;
                        iVar4 = iVar23;
                        goto LAB_100429f3f;
                      }
                      pcVar18 = (char *)(uVar17 + (long)local_188);
                      local_1a0 = local_190;
                    }
                    local_208 = *(undefined8 *)(local_170 + 2);
                    local_200 = *(long **)(local_170 + 4);
                    if (local_200 != (long *)0x0) {
                      LOCK();
                      local_200[1] = local_200[1] + 1;
                      UNLOCK();
                    }
                    iVar4 = FUN_10042a48e(local_208,iVar14,pcVar18,param_9);
                    if (local_200 != (long *)0x0) {
                      LOCK();
                      plVar2 = local_200 + 1;
                      lVar7 = *plVar2;
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (lVar7 == 0) {
                        (**(code **)(*local_200 + 0x10))(local_200);
                        std::__shared_weak_count::__release_weak();
                      }
                    }
                    if (iVar4 != 0) {
                      if (iVar4 == -0x80) goto LAB_100429f3f;
                      uVar11 = FUN_1001cc310();
                      cVar27 = _os_log_type_enabled(uVar11,0x10);
                      if (cVar27 == '\0') goto LAB_100429f3f;
                      puVar20 = &local_148;
                      local_148._0_1_ = 2;
                      local_148._1_1_ = 2;
                      local_148._2_2_ = 0x822;
                      uStack_144 = 0x7a0a90;
                      uStack_140 = 1;
                      local_13c = 0x400;
                      local_13a = (char *)CONCAT44(local_13a._4_4_,iVar4);
                      goto LAB_100429f2c;
                    }
                    pcVar18 = pcVar18 + iVar14;
                    *(long *)(local_170 + 0x14) = *(long *)(local_170 + 0x14) + (long)iVar14;
                    iVar23 = 0;
                  }
                  puVar25 = local_1a0;
                  uVar22 = local_1cc;
                  if (!bVar12) {
                    cVar27 = *(char *)((long)local_170 + 0x1b);
                    goto LAB_1004291c0;
                  }
                }
                else {
LAB_1004291c0:
                  puVar20 = local_190;
                  if (cVar27 != '\x04') goto LAB_10042921d;
                  uVar17 = (ulong)local_190 & 0xffffffff;
                }
                if ((int)local_190 != 0) {
                  puVar24 = (uint *)(uVar17 + (long)local_188);
                  puVar15 = local_188;
                  puVar20 = local_190;
                  puVar8 = local_188;
                  do {
                    puVar9 = (uint *)((long)puVar8 + 1);
                    puVar16 = (uint *)((long)puVar15 + 1);
                    uVar5 = *puVar15;
                    *(char *)puVar8 = (char)uVar5;
                    if (((((char)uVar5 == -1) && (puVar16 < puVar24)) && (puVar9 < puVar24)) &&
                       (*(char *)puVar16 == '\0')) {
                      puVar20 = (uint *)(ulong)((int)puVar20 - 1);
                      puVar16 = (uint *)((long)puVar15 + 2);
                    }
                  } while ((puVar16 < puVar24) &&
                          (puVar15 = puVar16, puVar8 = puVar9, puVar9 < puVar24));
                  goto LAB_10042921d;
                }
                puVar20 = (uint *)0x0;
                local_190 = local_188;
              }
              if ((uVar22 & 8) == 0) {
                if ((param_7 & 1) == 0) {
                  local_174[0] = local_174[0] & 0xfffc;
                }
                uVar21 = SUB84(puVar20,0);
                puVar20 = (uint *)0x0;
                iVar4 = (*local_1c0)(local_170,local_1a8,local_1b0,local_1b8,local_1c8,0,local_17c,
                                     local_174[0],local_190,uVar21);
                if (iVar4 != 0) break;
                iVar23 = 0;
                if ((char)local_194 == '\x01' && (param_7 & 1) != 0) {
                  iVar4 = (**(code **)(**(long **)(local_170 + 2) + 0xf8))
                                    (*(long **)(local_170 + 2),&local_b8);
                  if (iVar4 == 0) {
                    if (local_b8 < local_178) goto LAB_100428f14;
                    local_b8 = local_b8 - local_178;
                    iVar4 = (**(code **)(**(long **)(local_170 + 2) + 0xf0))();
                    if (iVar4 == 0) {
                      local_1f8 = *(undefined8 *)(local_170 + 2);
                      local_1f0 = *(long *)(local_170 + 4);
                      if (local_1f0 != 0) {
                        LOCK();
                        *(long *)(local_1f0 + 8) = *(long *)(local_1f0 + 8) + 1;
                        UNLOCK();
                      }
                      iVar4 = FUN_10042a644(local_1f8,local_178,local_190);
                      FUN_10021e316(&local_1f8);
                      if (iVar4 == 0) goto LAB_100428f14;
                      uVar11 = FUN_1001cc310();
                      cVar27 = _os_log_type_enabled(uVar11,0x10);
                      if (cVar27 == '\0') break;
                      local_13a = (char *)CONCAT44(local_13a._4_4_,iVar4);
                    }
                    else {
                      if (iVar4 == -0x80) break;
                      uVar11 = FUN_1001cc310();
                      cVar27 = _os_log_type_enabled(uVar11,0x10);
                      if (cVar27 == '\0') break;
                      local_13a = (char *)CONCAT44(local_13a._4_4_,iVar4);
                    }
                  }
                  else {
                    if (iVar4 == -0x80) break;
                    uVar11 = FUN_1001cc310();
                    cVar27 = _os_log_type_enabled(uVar11,0x10);
                    if (cVar27 == '\0') break;
                    local_13a = (char *)CONCAT44(local_13a._4_4_,iVar4);
                  }
                  local_13c = 0x400;
                  uStack_140 = 1;
                  uStack_144 = 0x7a0a90;
                  local_148._2_2_ = 0x822;
                  local_148._1_1_ = 2;
                  local_148._0_1_ = 2;
                  __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_148,
                                      0x12);
                  break;
                }
              }
            }
          }
          else {
            iVar4 = 0;
            uVar22 = (uint)local_190;
LAB_100428ea3:
            if ((char *)((long)puVar25 + lVar7) <= *(char **)(local_170 + 0x18)) {
              *(char **)(local_170 + 0x14) = (char *)((long)puVar25 + lVar7);
              plVar2 = *(long **)(local_170 + 4);
              local_248 = local_170[2];
              iStack_244 = local_170[3];
              iStack_240 = local_170[4];
              iStack_23c = local_170[5];
              if (plVar2 != (long *)0x0) {
                LOCK();
                plVar2[1] = plVar2[1] + 1;
                UNLOCK();
              }
              iVar4 = FUN_10042a707(&local_248);
              if (plVar2 != (long *)0x0) {
                LOCK();
                plVar31 = plVar2 + 1;
                lVar7 = *plVar31;
                *plVar31 = *plVar31 + -1;
                UNLOCK();
                if (lVar7 == 0) {
                  (**(code **)(*plVar2 + 0x10))(plVar2);
                  std::__shared_weak_count::__release_weak();
                }
              }
              if (iVar4 != 0) {
                if (iVar4 != -0x80) {
                  uVar11 = FUN_1001cc310();
                  cVar27 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar27 != '\0') {
                    puVar20 = &local_148;
                    local_148._0_1_ = 2;
                    local_148._1_1_ = 2;
                    local_148._2_2_ = 0x822;
                    uStack_144 = 0x7a0a90;
                    uStack_140 = 1;
                    local_13c = 0x400;
                    local_13a = (char *)CONCAT44(local_13a._4_4_,iVar4);
                    goto LAB_100429f2c;
                  }
                }
                break;
              }
            }
            puVar25 = (uint *)(ulong)uVar22;
            iVar23 = iVar4;
          }
LAB_100428f14:
          iVar4 = iVar23;
          uVar17 = (ulong)puVar25 & 0xffffffff;
        } while ((ulong)(uint)local_170[0x1d] + *(long *)(local_170 + 0x14) <=
                 *(ulong *)(local_170 + 0x18));
      }
    }
    else {
      iVar4 = 0;
      if (*(byte *)((long)local_170 + 0x1b) == 1) {
        uVar11 = *(undefined8 *)(local_170 + 2);
        plVar2 = *(long **)(local_170 + 4);
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar2[1] = plVar2[1] + 1;
          UNLOCK();
        }
        lVar7 = (long)&local_b8 + 3;
        plVar31 = plVar2;
        iVar4 = FUN_10042a48e(uVar11,0x7d,lVar7,param_9);
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          lVar19 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar19 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (iVar4 != -0x80) {
          if (iVar4 == 0) {
            pcVar18 = (char *)((long)&local_148 + 1);
            local_148._0_1_ = 0;
            FUN_1001c631b(lVar7,pcVar18,0x1e);
            if ((local_148._1_1_ & 0xdf) != 0) {
              uVar17 = 0x1e;
              uVar22 = 0x1f;
              do {
                if (*(char *)((long)&local_148 + uVar17) != ' ') goto LAB_1004295e1;
                uVar17 = uVar17 - 1;
                uVar22 = uVar22 - 1;
              } while (1 < uVar22);
              uVar17 = 0;
LAB_1004295e1:
              iVar4 = (*local_1c0)(local_170,local_1a8,local_1b0,local_1b8,local_1c8,0,0x54543220,0,
                                   &local_148,(int)uVar17 + 1,uVar11,plVar31);
              if (iVar4 != 0) goto LAB_100429f3f;
              FUN_1001c631b(pcVar18,lVar7,uVar17 & 0xffffffff);
            }
            local_148._0_1_ = 0;
            FUN_1001c631b(local_97,pcVar18,0x1e);
            if ((local_148._1_1_ & 0xdf) != 0) {
              uVar17 = 0x1e;
              uVar22 = 0x1f;
              do {
                if (*(char *)((long)&local_148 + uVar17) != ' ') goto LAB_100429696;
                uVar17 = uVar17 - 1;
                uVar22 = uVar22 - 1;
              } while (1 < uVar22);
              uVar17 = 0;
LAB_100429696:
              iVar4 = (*local_1c0)(local_170,local_1a8,local_1b0,local_1b8,local_1c8,0,0x54503120,0,
                                   &local_148,(int)uVar17 + 1);
              if (iVar4 != 0) goto LAB_100429f3f;
              FUN_1001c631b(pcVar18,local_97,uVar17 & 0xffffffff);
            }
            local_148._0_1_ = 0;
            FUN_1001c631b(local_79,pcVar18,0x1e);
            if ((local_148._1_1_ & 0xdf) != 0) {
              uVar17 = 0x1e;
              uVar22 = 0x1f;
              do {
                if (*(char *)((long)&local_148 + uVar17) != ' ') goto LAB_100429748;
                uVar17 = uVar17 - 1;
                uVar22 = uVar22 - 1;
              } while (1 < uVar22);
              uVar17 = 0;
LAB_100429748:
              iVar4 = (*local_1c0)(local_170,local_1a8,local_1b0,local_1b8,local_1c8,0,0x54414c20,0,
                                   &local_148,(int)uVar17 + 1);
              if (iVar4 != 0) goto LAB_100429f3f;
              FUN_1001c631b(pcVar18,local_79,uVar17 & 0xffffffff);
            }
            local_148._0_1_ = 0;
            FUN_1001c631b(local_5b,pcVar18,4);
            if ((local_148._1_1_ & 0xdf) != 0) {
              uVar17 = 4;
              uVar22 = 5;
              do {
                if (*(char *)((long)&local_148 + uVar17) != ' ') goto LAB_1004297fa;
                uVar17 = uVar17 - 1;
                uVar22 = uVar22 - 1;
              } while (1 < uVar22);
              uVar17 = 0;
LAB_1004297fa:
              iVar4 = (*local_1c0)(local_170,local_1a8,local_1b0,local_1b8,local_1c8,0,0x54594520,0,
                                   &local_148,(int)uVar17 + 1);
              if (iVar4 != 0) goto LAB_100429f3f;
              FUN_1001c631b(pcVar18,local_5b,uVar17 & 0xffffffff);
            }
            bVar12 = (char)local_170[7] != '\x01';
            uVar22 = bVar12 + 0x1c + (uint)bVar12;
            uVar17 = (ulong)uVar22;
            local_148._0_1_ = 0;
            FUN_1001c631b(local_57,pcVar18,uVar17);
            if ((local_148._1_1_ & 0xdf) != 0) {
              iVar4 = uVar22 + 1;
              do {
                if (*(char *)((long)&local_148 + uVar17) != ' ') goto LAB_1004298bb;
                uVar17 = uVar17 - 1;
                iVar4 = iVar4 + -1;
              } while (1 < iVar4);
              uVar17 = 0;
LAB_1004298bb:
              iVar4 = (*local_1c0)(local_170,local_1a8,local_1b0,local_1b8,local_1c8,0,0x434d3120,0,
                                   &local_148,(int)uVar17 + 1);
              if (iVar4 != 0) goto LAB_100429f3f;
              FUN_1001c631b(pcVar18,local_57,uVar17 & 0xffffffff);
            }
            if (((char)local_170[7] == '\x01') && (local_3a != '\0' && local_3b == '\0')) {
              local_148._0_1_ = 0;
              FUN_1001e55fb(local_3a,pcVar18,0x80);
              sVar10 = _strlen(pcVar18);
              iVar4 = (*local_1c0)(local_170,local_1a8,local_1b0,local_1b8,local_1c8,0,0x54524b20,0,
                                   &local_148,(int)sVar10 + 2);
              if (iVar4 != 0) goto LAB_100429f3f;
            }
            if (local_39 != -1) {
              local_148._0_1_ = 0;
              _snprintf(pcVar18,0x80,"(%d)");
              sVar10 = _strlen(pcVar18);
              uVar22 = (int)sVar10 + 1;
              if ((1 < uVar22) &&
                 (iVar4 = (*local_1c0)(local_170,local_1a8,local_1b0,local_1b8,local_1c8,0,
                                       0x54434f20,0,&local_148,uVar22), iVar4 != 0))
              goto LAB_100429f3f;
            }
            iVar23 = 0;
            iVar4 = iVar23;
            if (((param_7 & 1) != 0) &&
               (iVar4 = (**(code **)(**(long **)(local_170 + 2) + 0xf8))
                                  (*(long **)(local_170 + 2),&local_1d8), iVar4 != -0x80)) {
              if (iVar4 != 0) {
                uVar11 = FUN_1001cc310();
                cVar27 = _os_log_type_enabled(uVar11,0x10);
                goto joined_r0x00010042a1df;
              }
              iVar4 = iVar23;
              if (0x7c < local_1d8) {
                local_1d8 = local_1d8 - 0x7d;
                iVar4 = (**(code **)(**(long **)(local_170 + 2) + 0xf0))();
                if (iVar4 != -0x80) {
                  if (iVar4 == 0) {
                    local_238 = *(undefined8 *)(local_170 + 2);
                    local_230 = *(long *)(local_170 + 4);
                    if (local_230 != 0) {
                      LOCK();
                      *(long *)(local_230 + 8) = *(long *)(local_230 + 8) + 1;
                      UNLOCK();
                    }
                    iVar14 = FUN_10042a644(local_238,0x7d,lVar7);
                    FUN_10021e316(&local_238);
                    iVar4 = iVar23;
                    if (iVar14 == 0) goto LAB_100429f3f;
                    uVar11 = FUN_1001cc310();
                    cVar27 = _os_log_type_enabled(uVar11,0x10);
                    iVar4 = iVar14;
                  }
                  else {
                    uVar11 = FUN_1001cc310();
                    cVar27 = _os_log_type_enabled(uVar11,0x10);
                  }
joined_r0x00010042a1df:
                  if (cVar27 != '\0') {
                    local_15c = 0x400;
                    local_164 = "Assertion failure";
                    local_168 = 0x8220202;
                    local_15a = iVar4;
                    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_168
                                        ,0x12);
                  }
                }
              }
            }
          }
          else {
            uVar11 = FUN_1001cc310();
            cVar27 = _os_log_type_enabled(uVar11,0x10);
            if (cVar27 != '\0') {
              puVar20 = &local_168;
              local_168 = 0x8220202;
              local_164 = "Assertion failure";
              local_15c = 0x400;
              local_15a = iVar4;
              goto LAB_100429f2c;
            }
          }
        }
      }
    }
  }
  else {
    iVar4 = (**(code **)(**(long **)(local_170 + 2) + 0xf0))();
    if (iVar4 != -0x80) {
      if (iVar4 == 0) {
        lVar7 = *(long *)(local_170 + 0x16);
        *(long *)(local_170 + 0x14) = lVar7;
        goto LAB_1004286f6;
      }
      uVar11 = FUN_1001cc310();
      cVar27 = _os_log_type_enabled(uVar11,0x10);
      if (cVar27 == '\0') goto LAB_100429f3f;
      puVar20 = &local_148;
      local_148._0_1_ = 2;
      local_148._1_1_ = 2;
      local_148._2_2_ = 0x822;
      uStack_144 = 0x7a0a90;
      uStack_140 = 1;
      local_13c = 0x400;
      local_13a = (char *)CONCAT44(local_13a._4_4_,iVar4);
LAB_100429f2c:
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",puVar20,0x12);
    }
  }
LAB_100429f3f:
  if ((*(byte *)(local_170 + 1) & 4) == 0) {
    iVar23 = (**(code **)(**(long **)(local_170 + 2) + 0xf0))
                       (*(long **)(local_170 + 2),*(undefined8 *)(local_170 + 0x16));
    if (iVar23 == 0) {
      *(undefined8 *)(local_170 + 0x14) = *(undefined8 *)(local_170 + 0x16);
    }
    else {
      uVar11 = FUN_1001cc310();
      cVar27 = _os_log_type_enabled(uVar11,0x10);
      if (cVar27 != '\0') {
        local_148._0_1_ = 2;
        local_148._1_1_ = 2;
        local_148._2_2_ = 0x822;
        uStack_144 = 0x7a0a90;
        uStack_140 = 1;
        local_13c = 0x822;
        local_13a = "tempStatus == noErr";
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_148,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  if (local_188 != (uint *)0x0) {
    FUN_1001c64c1();
  }
LAB_100429fa5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

