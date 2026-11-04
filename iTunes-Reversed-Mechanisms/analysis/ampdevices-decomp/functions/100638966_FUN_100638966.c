// name: FUN_100638966
// address: 100638966

char FUN_100638966(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  char *pcVar13;
  int *piVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  long *local_e0 [2];
  long local_d0;
  ulong local_c8;
  long local_c0;
  int *local_b8;
  ulong local_b0;
  undefined8 local_a8;
  int local_a0;
  int local_9c;
  char local_95;
  uint local_94;
  int *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_b8 = (int *)0x0;
  lVar9 = FUN_10063954c(param_1,local_e0,0);
  if (lVar9 == 0) {
    uVar11 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar11,0x10);
    if (cVar4 != '\0') {
      pcVar13 = "destPlaylist != nullptr";
LAB_100638dcc:
      uStack_7c = 0x822;
      uStack_80 = 1;
      uStack_84 = 0x7a0a90;
      local_88 = 0x8220202;
      uStack_7a = SUB82(pcVar13,0);
      uStack_78 = (undefined4)((ulong)pcVar13 >> 0x10);
      uStack_74 = 0;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
  }
  else if (local_e0[0] == (long *)0x0) {
    uVar11 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar11,0x10);
    if (cVar4 != '\0') {
      pcVar13 = "inPlaylistLocation->parent != nullptr";
      goto LAB_100638dcc;
    }
  }
  else if (*local_e0[0] == 0) {
    uVar11 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar11,0x10);
    if (cVar4 != '\0') {
      pcVar13 = "inPlaylistLocation->parent->playlist != nullptr";
      goto LAB_100638dcc;
    }
  }
  else {
    if (param_2 != 0) {
      local_58 = 0;
      uStack_54 = 0;
      lVar16 = *local_e0[0];
      iVar6 = FUN_100596940(param_2);
      if (iVar6 == 0) {
        piVar14 = (int *)CONCAT44(uStack_54,local_58);
        bVar3 = true;
        if (((piVar14 == (int *)0x0) || (*piVar14 != 0x4f4c5354)) || (piVar14[1] == 0)) {
LAB_100638e2a:
          uVar17 = 0;
          local_a0 = 0;
          local_9c = 0;
          local_a8 = (ulong)local_a8._4_4_ << 0x20;
LAB_100638e48:
          local_94 = 0;
        }
        else {
          uVar17 = (*(long *)(piVar14 + 4) - *(long *)(piVar14 + 2) >> 3) * 0x6db6db6db6db6db7;
          iVar6 = (int)uVar17;
          if (iVar6 == 0) goto LAB_100638e2a;
          local_c8 = uVar17 & 0xffffffff;
          local_94 = (uint)CONCAT71((int7)(local_c8 >> 8),1);
          uVar17 = 0;
          local_90 = (int *)0x0;
          local_a8 = (ulong)local_a8._4_4_ << 0x20;
          local_9c = 0;
          local_a0 = 0;
          local_b0 = local_b0 & 0xffffffff00000000;
          local_c0 = lVar16;
          do {
            plVar10 = (long *)FUN_1005968bf(CONCAT44(uStack_54,local_58),uVar17 & 0xffffffff,0);
            if (plVar10 == (long *)0x0) {
              piVar14 = (int *)CONCAT44(uStack_54,local_58);
              if (((piVar14 != (int *)0x0) && (*piVar14 == 0x4f4c5354)) &&
                 ((piVar14[1] != 0 &&
                  (lVar16 = *(long *)(piVar14 + 2),
                  uVar21 = (*(long *)(piVar14 + 4) - lVar16 >> 3) * 0x6db6db6db6db6db7,
                  uVar17 <= uVar21 && uVar21 - uVar17 != 0)))) {
                lVar12 = uVar17 * 0x38;
                puVar1 = (undefined4 *)(lVar16 + lVar12);
                local_88 = *puVar1;
                uStack_84 = puVar1[1];
                uStack_80 = puVar1[2];
                puVar2 = (undefined4 *)(lVar16 + 0x10 + lVar12);
                uStack_78 = *puVar2;
                uStack_70 = puVar2[2];
                uStack_6c = puVar2[3];
                lVar12 = lVar16 + 0x1c + lVar12;
                uStack_68 = *(undefined4 *)(lVar12 + 4);
                uStack_64 = *(undefined4 *)(lVar12 + 8);
                uStack_60 = *(undefined4 *)(lVar12 + 0xc);
                uStack_74 = (undefined2)puVar2[1];
                uStack_72 = (undefined2)((uint)puVar2[1] >> 0x10);
                uStack_7c = (undefined2)puVar1[3];
                uStack_7a = (undefined2)((uint)puVar1[3] >> 0x10);
                lVar16 = FUN_10031b48b(&local_88);
                if (lVar16 != 0) {
                  plVar10 = *(long **)(lVar16 + 0x68);
                  goto LAB_100638b21;
                }
              }
              plVar10 = (long *)0x0;
              lVar16 = 0;
            }
            else {
              lVar16 = plVar10[1];
            }
LAB_100638b21:
            if ((uVar17 == 0) && (lVar16 != 0)) {
              local_90 = *(int **)(lVar16 + 0x28);
            }
            if ((plVar10 != (long *)0x0) &&
               (cVar4 = FUN_100484163(local_e0,plVar10,0,0), cVar4 != '\0')) {
              if ((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) {
LAB_1006393c1:
                uVar11 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar11,0x10);
                if (cVar4 != '\0') {
                  local_88 = 0x8220202;
                  uStack_84 = 0x7a0a90;
                  uStack_80 = 1;
                  uStack_7c = 0x822;
                  uStack_7a = 0xe894;
                  uStack_78 = 0x1007a;
                  uStack_74 = 0;
                  __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_88,
                                      0x16);
                }
                bVar3 = false;
                FUN_1001782e9(0,0);
                goto LAB_1006393ea;
              }
              if (*(int *)(*(long *)(lVar16 + 0x10) + 0x80) != 0x74646174) {
                uVar11 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar11,0x10);
                if (cVar4 != '\0') {
                  local_88 = 0x8220202;
                  uStack_84 = 0x7ab58c;
                  uStack_80 = 1;
                  uStack_7c = 0x822;
                  uStack_7a = 0xec03;
                  uStack_78 = 0x1007a;
                  uStack_74 = 0;
                  __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_88,
                                      0x16);
                }
                cVar4 = FUN_1001782e9(0,1);
                if (cVar4 == '\0') goto LAB_1006393c1;
              }
              if ((*plVar10 != local_c0) || ((local_b0 & 1) != 0)) {
                local_a8 = CONCAT44(local_a8._4_4_,(int)CONCAT71((int7)((ulong)local_c0 >> 8),1));
              }
              FUN_1004744bf(lVar16,0);
              lVar12 = FUN_100475b69(lVar16);
              piVar14 = local_90;
              if ((lVar12 - 1U < 0xfffffffffffffffc) ||
                 (cVar4 = FUN_1004816c2(lVar16), cVar4 != '\0')) {
                uVar7 = (uint)local_b0 & 0xff;
                if ((local_b0 & 1) == 0) {
                  uVar7 = 1;
                }
                local_b0 = CONCAT44(local_b0._4_4_,uVar7);
              }
              else {
                local_a0 = local_a0 + 1;
                uVar7 = FUN_1004744bf(lVar16,0);
                local_9c = (local_9c + 1) - (uint)((uVar7 & 0x10090) == 0);
              }
              FUN_100474394(lVar16);
              local_94 = local_94 & 0xff;
              if (piVar14 != *(int **)(lVar16 + 0x28)) {
                local_94 = 0;
              }
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 != local_c8);
          bVar3 = true;
LAB_1006393ea:
          uVar17 = local_b0 & 0xffffffff;
          lVar16 = local_c0;
          if (((local_94 & 1) != 0) && ((local_90 == (int *)0x0 || (local_90[5] != iVar6))))
          goto LAB_100638e48;
        }
        FUN_100595344(CONCAT44(uStack_54,local_58));
        if ((local_a8 & 1) != 0) {
          if (((((uVar17 & 1) == 0) || ((local_94 & 1) == 0)) || (local_9c != local_a0)) ||
             (*(int *)(*(long *)(lVar16 + 0x78) + 0x18) != 0)) {
            uVar7 = 0;
            cVar4 = '\0';
            if (!bVar3) goto LAB_100638dfd;
          }
          else {
            uVar7 = (uint)CONCAT71((int7)(uVar17 >> 8),1);
            if (!bVar3) goto LAB_100638e64;
          }
          iVar6 = FUN_100596940(param_2,&local_b8);
          cVar4 = '\0';
          uVar19 = 0;
          if (iVar6 == 0) {
            if (((local_b8 != (int *)0x0) && (*local_b8 == 0x4f4c5354)) && (local_b8[1] != 0)) {
              uVar19 = (int)((ulong)(*(long *)(local_b8 + 4) - *(long *)(local_b8 + 2)) >> 3) *
                       -0x49249249;
            }
            local_94 = uVar7;
            FUN_100314020(lVar9);
            local_d0 = 0;
            uVar8 = FUN_1001ea5dc();
            local_c8 = CONCAT44(local_c8._4_4_,uVar8);
            iVar6 = 0;
            if (uVar19 == 0) {
              cVar4 = '\0';
            }
            else {
              uVar17 = (ulong)uVar19;
              uVar21 = 0;
              cVar4 = '\0';
              local_a8 = uVar17;
              do {
                if (iVar6 != 0) break;
                iVar20 = 0;
                iVar6 = 0;
                if (((local_b8 != (int *)0x0) && (*local_b8 == 0x4f4c5354)) &&
                   ((iVar6 = iVar20, local_b8[1] != 0 &&
                    (lVar16 = *(long *)(local_b8 + 2),
                    uVar18 = (*(long *)(local_b8 + 4) - lVar16 >> 3) * 0x6db6db6db6db6db7,
                    uVar21 <= uVar18 && uVar18 - uVar21 != 0)))) {
                  lVar12 = uVar21 * 0x38;
                  puVar1 = (undefined4 *)(lVar16 + lVar12);
                  local_88 = *puVar1;
                  uStack_84 = puVar1[1];
                  uStack_80 = puVar1[2];
                  puVar2 = (undefined4 *)(lVar16 + 0x10 + lVar12);
                  uStack_78 = *puVar2;
                  uStack_70 = puVar2[2];
                  uStack_6c = puVar2[3];
                  lVar12 = lVar16 + 0x1c + lVar12;
                  uStack_68 = *(undefined4 *)(lVar12 + 4);
                  uStack_64 = *(undefined4 *)(lVar12 + 8);
                  uStack_60 = *(undefined4 *)(lVar12 + 0xc);
                  uStack_74 = (undefined2)puVar2[1];
                  uStack_72 = (undefined2)((uint)puVar2[1] >> 0x10);
                  uStack_7c = (undefined2)puVar1[3];
                  uStack_7a = (undefined2)((uint)puVar1[3] >> 0x10);
                  piVar14 = (int *)FUN_100490af0(&local_88);
                  if ((piVar14 != (int *)0x0) ||
                     ((lVar16 = FUN_10031b48b(&local_88), lVar16 != 0 &&
                      (piVar14 = *(int **)(lVar16 + 0x68), piVar14 != (int *)0x0)))) {
                    cVar5 = FUN_1004935a5(*(undefined8 *)piVar14);
                    if ((cVar5 == '\0') ||
                       ((*(long *)(lVar9 + 8) == 0 ||
                        ((*(byte *)(*(long *)(lVar9 + 8) + 0x1bb0) & 1) == 0)))) {
LAB_10063902c:
                      cVar5 = FUN_100484163(local_e0,piVar14,0,0);
                      if (cVar5 != '\0') {
                        piVar15 = *(int **)piVar14;
                        if (piVar15 != (int *)0x0) {
                          if (*piVar15 != 0x706c7374) {
                            local_90 = piVar15;
                            local_b0 = FUN_1001cc310();
                            cVar5 = _os_log_type_enabled(local_b0,0x10);
                            if (cVar5 != '\0') {
                              local_58 = 0x8220202;
                              uStack_54 = 0x7ab58c;
                              uStack_50 = 1;
                              local_4c = 0x822;
                              local_4a = "playlist->magic == \'plst\'";
                              __os_log_error_impl(0x100000000,local_b0,0x10,
                                                  "%{public}s: (%{public}s)",&local_58,0x16);
                            }
                            cVar5 = FUN_1001782e9(0,1);
                            piVar15 = local_90;
                            if (cVar5 == '\0') goto LAB_100639104;
                          }
                          lVar16 = *(long *)(piVar15 + 2);
                          if (lVar16 != 0) {
                            if (*(int *)(lVar16 + 0x80) != 0x74646174) {
                              local_90 = piVar15;
                              local_b0 = FUN_1001cc310();
                              cVar5 = _os_log_type_enabled(local_b0,0x10);
                              if (cVar5 != '\0') {
                                local_58 = 0x8220202;
                                uStack_54 = 0x7ab58c;
                                uStack_50 = 1;
                                local_4c = 0x822;
                                local_4a = "trackData->magic == \'tdat\'";
                                __os_log_error_impl(0x100000000,local_b0,0x10,
                                                    "%{public}s: (%{public}s)",&local_58,0x16);
                              }
                              cVar5 = FUN_1001782e9(0,1);
                              piVar15 = local_90;
                              if (cVar5 == '\0') goto LAB_100639104;
                              lVar16 = *(long *)(local_90 + 2);
                            }
                            if (((*(byte *)(lVar16 + 0x1bb3) & 8) != 0) &&
                               (lVar16 != *(long *)(lVar9 + 8))) goto LAB_100639138;
                          }
                        }
LAB_100639104:
                        if (((char)local_94 == '\0') ||
                           ((*(long *)(piVar14 + 2) == 0 ||
                            (local_90 = piVar14, uVar17 = FUN_1004744bf(*(long *)(piVar14 + 2),0),
                            piVar14 = local_90, (uVar17 & 0x10090) == 0)))) {
                          if ((piVar15 != (int *)0x0) &&
                             ((uVar21 == 0 && (lVar16 = *(long *)(lVar9 + 8), lVar16 != 0)))) {
                            if (*piVar15 != 0x706c7374) {
                              local_90 = piVar15;
                              uVar11 = FUN_1001cc310();
                              cVar5 = _os_log_type_enabled(uVar11,0x10);
                              if (cVar5 != '\0') {
                                local_58 = 0x8220202;
                                uStack_54 = 0x7ab58c;
                                uStack_50 = 1;
                                local_4c = 0x822;
                                local_4a = "playlist->magic == \'plst\'";
                                __os_log_error_impl(0x100000000,uVar11,0x10,
                                                    "%{public}s: (%{public}s)",&local_58,0x16);
                              }
                              cVar5 = FUN_1001782e9(0,1);
                              if (cVar5 == '\0') goto LAB_1006391f5;
                              lVar16 = *(long *)(lVar9 + 8);
                              piVar15 = local_90;
                            }
                            if ((*(long *)(piVar15 + 2) == lVar16) &&
                               ((*(int *)(lVar16 + 0x84) == 0x646f5069 ||
                                (*(int *)(lVar16 + 0x84) == 0x2062696c)))) {
                              FUN_10059597e(lVar9,&local_d0);
                            }
                          }
LAB_1006391f5:
                          iVar6 = FUN_100638411(lVar9,piVar14,local_e0,&local_95);
                          uVar17 = local_a8;
                          if ((iVar6 != -0x80) && (iVar6 != 0)) {
                            local_90 = (int *)FUN_1001cc310();
                            cVar5 = _os_log_type_enabled(local_90,0x10);
                            if (cVar5 != '\0') {
                              local_58 = 0x8220202;
                              uStack_54 = 0x7a0a90;
                              uStack_50 = 1;
                              local_4c = 0x400;
                              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                              __os_log_error_impl(0x100000000,local_90,0x10,
                                                  "%{public}s: err == (%d)",&local_58,0x12);
                            }
                          }
                          if (local_95 != '\0') {
                            cVar4 = '\x01';
                          }
                          goto LAB_100639261;
                        }
                      }
                    }
                    else {
                      local_90 = *(int **)(*(long *)(piVar14 + 2) + 0x180);
                      piVar15 = (int *)FUN_100308474(lVar9);
                      if ((local_90 != piVar15) ||
                         ((lVar16 = FUN_100300729(*(undefined8 *)(lVar9 + 8),
                                                  *(undefined8 *)(*(long *)(piVar14 + 2) + 0x188)),
                          lVar16 != 0 &&
                          (piVar14 = (int *)FUN_10048a4b3(lVar16), piVar14 != (int *)0x0))))
                      goto LAB_10063902c;
                    }
LAB_100639138:
                    uVar17 = local_a8;
                    iVar6 = 0;
                  }
                }
LAB_100639261:
                uVar21 = uVar21 + 1;
              } while (uVar21 != uVar17);
            }
            if (local_d0 != 0) {
              iVar6 = FUN_100594adc(&local_88,0);
              if (iVar6 == 0) {
                iVar6 = *(int *)(*(long *)(lVar9 + 0x78) + 0x18);
                uVar7 = (uint)local_c8;
                if (iVar6 != 0) {
                  iVar20 = 0;
                  do {
                    lVar16 = FUN_10037ddf6(*(undefined8 *)(lVar9 + 0x3c0),1,0,iVar20);
                    if ((lVar16 != 0) && (uVar7 < *(uint *)(lVar16 + 0x40))) {
                      FUN_100595808(CONCAT44(uStack_84,local_88),lVar16,0,0);
                    }
                    iVar20 = iVar20 + 1;
                  } while (iVar6 != iVar20);
                }
                FUN_100595344(CONCAT44(uStack_84,local_88));
              }
              FUN_100595344(local_d0);
            }
            FUN_10048cb3b(lVar9,local_e0);
            FUN_100483f95(lVar9,0x706c616d,0);
            FUN_1004897f6(lVar9,0);
            if (cVar4 != '\0') {
              FUN_100380783(lVar9);
            }
            FUN_1003142ca(lVar9);
            FUN_100595344(local_b8);
          }
          goto LAB_100638dfd;
        }
      }
LAB_100638e64:
      cVar4 = '\0';
      goto LAB_100638dfd;
    }
    uVar11 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar11,0x10);
    if (cVar4 != '\0') {
      pcVar13 = "inObjectList != nullptr";
      goto LAB_100638dcc;
    }
  }
  cVar4 = '\0';
  FUN_1001782e9(0,0);
LAB_100638dfd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar4;
}

