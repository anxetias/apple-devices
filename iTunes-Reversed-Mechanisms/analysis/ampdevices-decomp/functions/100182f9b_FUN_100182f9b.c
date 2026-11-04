// name: FUN_100182f9b
// address: 100182f9b

int FUN_100182f9b(ulong param_1,void *param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                 undefined4 *param_6)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  char *pcVar14;
  undefined8 *puVar15;
  long lVar16;
  void *pvVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined1 auVar21 [16];
  char local_1220 [80];
  ulong local_11d0;
  long local_11c8;
  undefined8 local_11c0;
  ulong local_11b8;
  char *local_11b0;
  undefined1 local_11a8 [1176];
  undefined1 local_d10 [1056];
  undefined1 local_8f0 [1176];
  int local_458 [262];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100182fb3;
  auVar21 = FUN_100108310();
  lVar16 = auVar21._8_8_;
  lVar3 = -auVar21._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((int)param_1 == 0) {
    iVar13 = 0;
  }
  else {
    if (param_2 == (void *)0x0) {
      *(undefined8 *)((long)&local_38 + lVar3) = 0x100183493;
      uVar18 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1001834a3;
      cVar12 = _os_log_type_enabled(uVar18,0x10);
      if (cVar12 != '\0') {
        *(undefined8 *)((long)&local_38 + lVar3) = 0x1001834af;
        FUN_10068a773(uVar18);
      }
    }
    else {
      if (lVar16 != 0) {
        *(undefined8 *)((long)&local_38 + lVar3) = 0x10018300c;
        local_11c0 = param_4;
        local_11b8 = param_5;
        iVar13 = FUN_10017d406(lVar16,0,local_1220,0);
        if (iVar13 != -0x80) {
          if (iVar13 == 0) {
            *(undefined8 *)((long)&local_38 + lVar3) = 0x10018302b;
            pcVar14 = (char *)FUN_1001c6429(0x2f0);
            if (pcVar14 == (char *)0x0) {
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100183531;
              uVar18 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100183541;
              cVar12 = _os_log_type_enabled(uVar18,0x10);
              if (cVar12 != '\0') {
                *(undefined8 *)((long)&local_38 + lVar3) = 0x10018379d;
                FUN_10068a61b(uVar18);
              }
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100183552;
              FUN_1001782e9(0,0);
              iVar13 = -0x6c;
            }
            else {
              *(char **)(pcVar14 + 0x60) = pcVar14;
              pcVar14[0x50] = -0x50;
              pcVar14[0x51] = -3;
              pcVar14[0x52] = ':';
              pcVar14[0x53] = 'O';
              iVar13 = 4;
              local_11b0 = pcVar14;
              do {
                *(undefined8 *)((long)&local_38 + lVar3) = 0x100183056;
                puVar15 = (undefined8 *)FUN_1001c6429(0x28);
                if (puVar15 == (undefined8 *)0x0) {
                  *(undefined8 *)((long)&local_38 + lVar3) = 0x10018355f;
                  uVar18 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar3) = 0x10018356f;
                  cVar12 = _os_log_type_enabled(uVar18,0x10);
                  if (cVar12 != '\0') {
                    *(undefined8 *)((long)&local_38 + lVar3) = 0x10018357b;
                    FUN_10068a5a5(uVar18);
                  }
                  goto LAB_10018359a;
                }
                *puVar15 = *(undefined8 *)(local_11b0 + 0x58);
                *(undefined8 **)(local_11b0 + 0x58) = puVar15;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
              lVar20 = (param_1 & 0xffffffff) * 0xac0;
              *(undefined8 *)((long)&local_38 + lVar3) = 0x100183096;
              local_11d0 = param_1 & 0xffffffff;
              local_11c8 = lVar16;
              lVar16 = FUN_1001c6429(lVar20);
              pcVar14 = local_11b0;
              *(long *)(local_11b0 + 0x278) = lVar16;
              if (lVar16 == 0) {
                *(undefined8 *)((long)&local_38 + lVar3) = 0x100183582;
                uVar18 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar3) = 0x100183592;
                cVar12 = _os_log_type_enabled(uVar18,0x10);
                if (cVar12 != '\0') {
                  *(undefined8 *)((long)&local_38 + lVar3) = 0x10018387f;
                  FUN_10068a52f(uVar18);
                }
LAB_10018359a:
                *(undefined8 *)((long)&local_38 + lVar3) = 0x1001835a3;
                FUN_1001782e9(0,0);
                iVar13 = -0x6c;
                pcVar14 = local_11b0;
              }
              else {
                *(int *)(local_11b0 + 0x270) = (int)param_1;
                lVar16 = 0;
                do {
                  lVar2 = *(long *)(pcVar14 + 0x278);
                  *(undefined8 *)((long)&local_38 + lVar3) = 0x1001830ce;
                  _memcpy((void *)(lVar2 + lVar16),param_2,0x420);
                  lVar2 = local_11c8;
                  param_2 = (void *)((long)param_2 + 0x420);
                  lVar16 = lVar16 + 0xac0;
                } while (lVar20 - lVar16 != 0);
                if (param_6 != (undefined4 *)0x0) {
                  uVar18 = *(undefined8 *)(param_6 + 0x12);
                  *(undefined8 *)(pcVar14 + 0x40) = *(undefined8 *)(param_6 + 0x10);
                  *(undefined8 *)(pcVar14 + 0x48) = uVar18;
                  uVar4 = *param_6;
                  uVar5 = param_6[1];
                  uVar6 = param_6[2];
                  uVar7 = param_6[3];
                  uVar18 = *(undefined8 *)(param_6 + 4);
                  uVar8 = *(undefined8 *)(param_6 + 6);
                  uVar9 = *(undefined8 *)(param_6 + 8);
                  uVar10 = *(undefined8 *)(param_6 + 10);
                  uVar11 = *(undefined8 *)(param_6 + 0xe);
                  *(undefined8 *)(pcVar14 + 0x30) = *(undefined8 *)(param_6 + 0xc);
                  *(undefined8 *)(pcVar14 + 0x38) = uVar11;
                  *(undefined8 *)(pcVar14 + 0x20) = uVar9;
                  *(undefined8 *)(pcVar14 + 0x28) = uVar10;
                  *(undefined8 *)(pcVar14 + 0x10) = uVar18;
                  *(undefined8 *)(pcVar14 + 0x18) = uVar8;
                  *(undefined4 *)pcVar14 = uVar4;
                  *(undefined4 *)(pcVar14 + 4) = uVar5;
                  *(undefined4 *)(pcVar14 + 8) = uVar6;
                  *(undefined4 *)(pcVar14 + 0xc) = uVar7;
                }
                if (*(long *)(pcVar14 + 0x30) == 0) {
                  *(code **)(pcVar14 + 0x30) = FUN_100183a41;
                }
                if (pcVar14[0x10] == '\0') {
                  pcVar14[0x10] = -3;
                }
                *(long *)(pcVar14 + 0x2a0) = local_11c8;
                *(undefined8 *)(pcVar14 + 0x2a8) = local_11c0;
                *(ulong *)(pcVar14 + 0x2b0) = local_11b8;
                *(undefined8 *)((long)&local_38 + lVar3) = 0x100183162;
                cVar12 = FUN_100183a4b(local_11c8);
                pcVar14[0x2cc] = cVar12;
                if ((cVar12 != '\0') && (pcVar14[0xf] == '\x02')) {
                  pcVar14[0xf] = '\x01';
                }
                *(undefined8 *)((long)&local_38 + lVar3) = 0x10018318d;
                iVar13 = FUN_100183add(lVar2,local_11a8,0);
                if (iVar13 != -0x80) {
                  if (iVar13 == 0) {
                    *(undefined1 **)(pcVar14 + 0x2b8) = local_11a8;
                    *(undefined8 *)((long)&local_38 + lVar3) = 0x1001831b1;
                    cVar12 = FUN_100183b4f(lVar2);
                    pcVar14[0x2cd] = cVar12;
                    *(undefined8 *)((long)&local_38 + lVar3) = 0x1001831c9;
                    FUN_1001c62d9(local_d10,0x420);
                    *(undefined8 *)((long)&local_38 + lVar3) = 0x1001831da;
                    FUN_1001c62d9(local_8f0);
                    uVar19 = 0;
                    local_11c0 = 0;
                    do {
                      lVar16 = *(long *)(pcVar14 + 0x278);
                      pvVar1 = (void *)(lVar16 + uVar19 * 0xac0);
                      *(undefined8 *)((long)&local_38 + lVar3) = 0x100183214;
                      local_11b8 = uVar19;
                      FUN_1001c62d9(local_1220,0x50);
                      lVar16 = lVar16 + uVar19 * 0xac0 + 0x420;
                      *(undefined8 *)((long)&local_38 + lVar3) = 0x10018322e;
                      iVar13 = FUN_10017d406(pvVar1,0,local_1220,lVar16);
                      if (iVar13 == 0) {
                        if ((char)local_11c0 == '\0') {
LAB_100183264:
                          *(undefined8 *)((long)&local_38 + lVar3) = 0x100183275;
                          iVar13 = FUN_100183add(pvVar1,local_8f0,0);
                          if (iVar13 != 0) {
                            pcVar14 = local_11b0;
                            if (iVar13 != -0x80) {
                              *(undefined8 *)((long)&local_38 + lVar3) = 0x1001837b3;
                              uVar18 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar3) = 0x1001837c3;
                              cVar12 = _os_log_type_enabled(uVar18,0x10);
                              pcVar14 = local_11b0;
                              if (cVar12 != '\0') {
                                *(undefined8 *)((long)&local_38 + lVar3) = 0x1001837dd;
                                FUN_10068a457(iVar13,uVar18);
                              }
                            }
                            goto LAB_1001835b0;
                          }
                          *(undefined8 *)((long)&local_38 + lVar3) = 0x100183291;
                          pvVar17 = _memcpy(local_d10,pvVar1,0x420);
                          local_11c0 = CONCAT71((int7)((ulong)pvVar17 >> 8),1);
                        }
                        else {
                          *(undefined8 *)((long)&local_38 + lVar3) = 0x100183260;
                          cVar12 = FUN_10017ec13(pvVar1,local_d10);
                          if (cVar12 == '\0') goto LAB_100183264;
                        }
                        *(byte *)((long)pvVar1 + 0xab8) = *(byte *)((long)pvVar1 + 0xab8) | 1;
                        *(undefined8 *)((long)&local_38 + lVar3) = 0x1001832bd;
                        _memcpy((void *)((long)pvVar1 + 0x620),local_8f0,0x498);
                        pcVar14 = local_11b0;
                        *(void **)(local_11b0 + 0x268) = (void *)((long)pvVar1 + 0x620);
                        if (local_1220[0] == '\0') {
                          *(undefined8 *)((long)&local_38 + lVar3) = 0x10018331c;
                          FUN_100183f98(local_11b0,pvVar1,local_1220,lVar16);
                        }
                        else {
                          *(byte *)((long)pvVar1 + 0xab8) = *(byte *)((long)pvVar1 + 0xab8) | 2;
                          *(undefined8 *)((long)&local_38 + lVar3) = 0x1001832eb;
                          cVar12 = FUN_100183bb2(pvVar1,local_11c8);
                          if (cVar12 != '\0') {
                            iVar13 = -0x32;
                            goto LAB_1001835b0;
                          }
                          *(undefined8 *)((long)&local_38 + lVar3) = 0x1001832fe;
                          iVar13 = FUN_100183d74(pcVar14,pvVar1);
                          if (iVar13 != 0) {
                            if (iVar13 != -0x80) {
                              *(undefined8 *)((long)&local_38 + lVar3) = 0x1001837f3;
                              uVar18 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar3) = 0x100183803;
                              cVar12 = _os_log_type_enabled(uVar18,0x10);
                              if (cVar12 != '\0') {
                                *(undefined8 *)((long)&local_38 + lVar3) = 0x100183816;
                                FUN_100689f22(iVar13,uVar18);
                              }
                            }
                            goto LAB_1001835b0;
                          }
                        }
                        if (pcVar14[0x2cc] == '\0') {
                          if (pcVar14[0xf] == '\x02') {
                            iVar13 = 0;
                          }
                          else {
                            *(undefined8 *)((long)&local_38 + lVar3) = 0x100183360;
                            uVar18 = FUN_100184067(pcVar14);
                            *(undefined8 *)((long)&local_38 + lVar3) = 0x100183378;
                            iVar13 = FUN_10017ecc9(local_11c8,uVar18,local_458,0);
                            if (iVar13 != 0) goto LAB_100183326;
                            if ((local_1220[0] == '\0') && (pcVar14[0xf] == '\x01')) {
                              *(undefined8 *)((long)&local_38 + lVar3) = 0x1001839be;
                              uVar18 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar3) = 0x1001839ce;
                              cVar12 = _os_log_type_enabled(uVar18,0x10);
                              if (cVar12 != '\0') {
                                *(undefined8 *)((long)&local_38 + lVar3) = 0x100183a3a;
                                FUN_10068a145(uVar18);
                              }
                              *(undefined8 *)((long)&local_38 + lVar3) = 0x1001839db;
                              FUN_1001782e9(0,0);
                              iVar13 = -0x2f;
                              pcVar14 = local_11b0;
                              goto LAB_1001835b0;
                            }
                            *(byte *)((long)pvVar1 + 0xab8) = *(byte *)((long)pvVar1 + 0xab8) | 4;
                            *(undefined8 *)((long)&local_38 + lVar3) = 0x1001833af;
                            iVar13 = FUN_10017d406(local_458,0,local_1220,0);
                            if (iVar13 != 0) {
                              if (iVar13 != -0x80) {
                                *(undefined8 *)((long)&local_38 + lVar3) = 0x1001838d0;
                                uVar18 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar3) = 0x1001838e0;
                                cVar12 = _os_log_type_enabled(uVar18,0x10);
                                pcVar14 = local_11b0;
                                if (cVar12 != '\0') {
                                  *(undefined8 *)((long)&local_38 + lVar3) = 0x1001838f3;
                                  FUN_10068a0d9(iVar13,uVar18);
                                  pcVar14 = local_11b0;
                                }
                              }
                              goto LAB_1001835b0;
                            }
                            if (local_1220[0] == '\0') {
                              *(undefined8 *)((long)&local_38 + lVar3) = 0x100183441;
                              iVar13 = FUN_1001842e8(pcVar14,local_458,local_1220);
                              if (iVar13 != 0) {
                                pcVar14 = local_11b0;
                                if (iVar13 != -0x80) {
                                  *(undefined8 *)((long)&local_38 + lVar3) = 0x10018345e;
                                  uVar18 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar3) = 0x10018346e;
                                  cVar12 = _os_log_type_enabled(uVar18,0x10);
                                  pcVar14 = local_11b0;
                                  if (cVar12 != '\0') {
                                    *(undefined8 *)((long)&local_38 + lVar3) = 0x100183484;
                                    FUN_10068a06d(iVar13,uVar18);
                                    pcVar14 = local_11b0;
                                  }
                                }
                                goto LAB_1001835b0;
                              }
                            }
                            else {
                              if ((*(byte *)((long)pvVar1 + 0xab8) & 2) != 0) {
                                lVar16 = 0;
                                uVar19 = local_11d0;
                                do {
                                  lVar20 = *(long *)(local_11b0 + 0x278);
                                  *(undefined8 *)((long)&local_38 + lVar3) = 0x1001833f1;
                                  cVar12 = FUN_100183bb2(local_458,lVar20 + lVar16);
                                  if (cVar12 != '\0') {
                                    *(undefined8 *)((long)&local_38 + lVar3) = 0x100183894;
                                    uVar18 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar3) = 0x1001838a4;
                                    cVar12 = _os_log_type_enabled(uVar18,0x10);
                                    iVar13 = -0x32;
                                    pcVar14 = local_11b0;
                                    if (cVar12 != '\0') {
                                      *(undefined8 *)((long)&local_38 + lVar3) = 0x1001838ba;
                                      FUN_100689f8e(uVar18);
                                      pcVar14 = local_11b0;
                                    }
                                    goto LAB_1001835b0;
                                  }
                                  lVar16 = lVar16 + 0xac0;
                                  uVar19 = uVar19 - 1;
                                } while (uVar19 != 0);
                              }
                              pcVar14 = local_11b0;
                              *(undefined8 *)((long)&local_38 + lVar3) = 0x10018341b;
                              iVar13 = FUN_10018412d(local_11b0,local_458);
                              if (iVar13 != 0) {
                                pcVar14 = local_11b0;
                                if (iVar13 != -0x80) {
                                  *(undefined8 *)((long)&local_38 + lVar3) = 0x100183985;
                                  uVar18 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar3) = 0x100183995;
                                  cVar12 = _os_log_type_enabled(uVar18,0x10);
                                  pcVar14 = local_11b0;
                                  if (cVar12 != '\0') {
                                    *(undefined8 *)((long)&local_38 + lVar3) = 0x100183a2d;
                                    FUN_10068a001(iVar13,uVar18);
                                    pcVar14 = local_11b0;
                                  }
                                }
                                goto LAB_1001835b0;
                              }
                            }
                          }
                        }
                        else {
LAB_100183326:
                          iVar13 = 0;
                        }
                      }
                      else if (*pcVar14 != '\0') {
                        iVar13 = 0;
                      }
                      lVar16 = local_11c8;
                      uVar19 = local_11b8 + 1;
                    } while (uVar19 != local_11d0);
                    if ((char)local_11c0 == '\0') {
                      *(undefined8 *)((long)&local_38 + lVar3) = 0x100183820;
                      uVar18 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar3) = 0x100183830;
                      cVar12 = _os_log_type_enabled(uVar18,0x10);
                      if (cVar12 != '\0') {
                        *(undefined8 *)((long)&local_38 + lVar3) = 0x100183972;
                        FUN_10068a3e1(uVar18);
                      }
                      *(undefined8 *)((long)&local_38 + lVar3) = 0x100183841;
                      FUN_1001782e9(0,0);
                    }
                    else if (*(ulong *)(pcVar14 + 0x288) <
                             (ulong)(*(long *)(pcVar14 + 0x2c0) +
                                    *(long *)(*(long *)(pcVar14 + 0x2b8) + 0x488))) {
                      if ((pcVar14[0xf] == '\x03') || (pcVar14[0xf] == '\0')) {
                        lVar20 = 0x620;
                        uVar19 = 0;
                        do {
                          *(long *)(local_11b0 + 0x268) = *(long *)(local_11b0 + 0x278) + lVar20;
                          if ((*(byte *)(*(long *)(local_11b0 + 0x278) + 0x498 + lVar20) & 4) != 0)
                          {
                            *(undefined8 *)((long)&local_38 + lVar3) = 0x1001836ae;
                            uVar18 = FUN_100184067(local_11b0,uVar19 & 0xffffffff);
                            *(undefined8 *)((long)&local_38 + lVar3) = 0x1001836be;
                            iVar13 = FUN_10017ecc9(lVar16,uVar18,local_458,0);
                            if (iVar13 == 0) {
                              *(undefined8 *)((long)&local_38 + lVar3) = 0x1001836d1;
                              iVar13 = FUN_10017d406(local_458,0,local_1220,0);
                              if (iVar13 != 0) {
                                pcVar14 = local_11b0;
                                if (iVar13 != -0x80) {
                                  *(undefined8 *)((long)&local_38 + lVar3) = 0x100183909;
                                  uVar18 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar3) = 0x100183919;
                                  cVar12 = _os_log_type_enabled(uVar18,0x10);
                                  pcVar14 = local_11b0;
                                  if (cVar12 != '\0') {
                                    *(undefined8 *)((long)&local_38 + lVar3) = 0x10018392c;
                                    FUN_10068a309(iVar13,uVar18);
                                    pcVar14 = local_11b0;
                                  }
                                }
                                goto LAB_1001835b0;
                              }
                              if (local_1220[0] == '\0') {
                                if ((local_11b0[0xf] != '\x03') || (local_458[0] != 0x41464350)) {
                                  *(undefined8 *)((long)&local_38 + lVar3) = 0x100183725;
                                  iVar13 = FUN_1001845ab(local_11b0,local_458,local_1220);
                                  if (iVar13 != 0) {
                                    pcVar14 = local_11b0;
                                    if (iVar13 != -0x80) {
                                      *(undefined8 *)((long)&local_38 + lVar3) = 0x1001839f7;
                                      uVar18 = FUN_1001cc310();
                                      *(undefined8 *)((long)&local_38 + lVar3) = 0x100183a07;
                                      cVar12 = _os_log_type_enabled(uVar18,0x10);
                                      pcVar14 = local_11b0;
                                      if (cVar12 != '\0') {
                                        *(undefined8 *)((long)&local_38 + lVar3) = 0x100183a1a;
                                        FUN_10068a29d(iVar13,uVar18);
                                        pcVar14 = local_11b0;
                                      }
                                    }
                                    goto LAB_1001835b0;
                                  }
                                }
                              }
                              else {
                                *(undefined8 *)((long)&local_38 + lVar3) = 0x1001836f1;
                                iVar13 = FUN_1001843c4(local_11b0,local_458);
                                if (iVar13 != 0) {
                                  pcVar14 = local_11b0;
                                  if (iVar13 != -0x80) {
                                    *(undefined8 *)((long)&local_38 + lVar3) = 0x100183942;
                                    uVar18 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar3) = 0x100183952;
                                    cVar12 = _os_log_type_enabled(uVar18,0x10);
                                    pcVar14 = local_11b0;
                                    if (cVar12 != '\0') {
                                      *(undefined8 *)((long)&local_38 + lVar3) = 0x100183965;
                                      FUN_10068a231(iVar13,uVar18);
                                      pcVar14 = local_11b0;
                                    }
                                  }
                                  goto LAB_1001835b0;
                                }
                              }
                            }
                          }
                          uVar19 = uVar19 + 1;
                          lVar20 = lVar20 + 0xac0;
                        } while (local_11d0 != uVar19);
                      }
                      pcVar14 = local_11b0;
                      *(undefined8 *)((long)&local_38 + lVar3) = 0x100183753;
                      iVar13 = FUN_1001845f5(local_11b0);
                      if ((iVar13 != -0x80) && (iVar13 != 0)) {
                        *(undefined8 *)((long)&local_38 + lVar3) = 0x10018376d;
                        uVar18 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar3) = 0x10018377d;
                        cVar12 = _os_log_type_enabled(uVar18,0x10);
                        if (cVar12 != '\0') {
                          *(undefined8 *)((long)&local_38 + lVar3) = 0x100183790;
                          FUN_10068a375(iVar13,uVar18);
                        }
                      }
                    }
                    else {
                      *(undefined8 *)((long)&local_38 + lVar3) = 0x10018384b;
                      uVar18 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar3) = 0x10018385b;
                      cVar12 = _os_log_type_enabled(uVar18,0x10);
                      if (cVar12 != '\0') {
                        *(undefined8 *)((long)&local_38 + lVar3) = 0x1001839b4;
                        FUN_10068a1bb(uVar18);
                      }
                      *(undefined8 *)((long)&local_38 + lVar3) = 0x10018386c;
                      FUN_1001782e9(0,0);
                      iVar13 = -0x22;
                    }
                  }
                  else {
                    *(undefined8 *)((long)&local_38 + lVar3) = 0x1001835f9;
                    uVar18 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar3) = 0x100183609;
                    cVar12 = _os_log_type_enabled(uVar18,0x10);
                    if (cVar12 != '\0') {
                      *(undefined8 *)((long)&local_38 + lVar3) = 0x100183618;
                      FUN_10068a4c3(iVar13,uVar18);
                    }
                  }
                }
              }
LAB_1001835b0:
              puVar15 = *(undefined8 **)(pcVar14 + 0x58);
              while (puVar15 != (undefined8 *)0x0) {
                puVar15 = (undefined8 *)*puVar15;
                *(undefined8 *)((long)&local_38 + lVar3) = 0x1001835c1;
                FUN_1001c64c1();
              }
              if (*(long *)(pcVar14 + 0x278) != 0) {
                *(undefined8 *)((long)&local_38 + lVar3) = 0x1001835da;
                FUN_1001c64c1();
              }
              *(undefined8 *)((long)&local_38 + lVar3) = 0x1001835e2;
              FUN_1001c64c1(pcVar14);
            }
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar3) = 0x10018350b;
            uVar18 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar3) = 0x10018351b;
            cVar12 = _os_log_type_enabled(uVar18,0x10);
            if (cVar12 != '\0') {
              *(undefined8 *)((long)&local_38 + lVar3) = 0x10018352a;
              FUN_10068a691(iVar13,uVar18);
            }
          }
        }
        goto LAB_1001834dd;
      }
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1001834b6;
      uVar18 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar3) = 0x1001834c6;
      cVar12 = _os_log_type_enabled(uVar18,0x10);
      if (cVar12 != '\0') {
        *(undefined8 *)((long)&local_38 + lVar3) = 0x1001835ef;
        FUN_10068a6fd(uVar18);
      }
    }
    *(undefined8 *)((long)&local_38 + lVar3) = 0x1001834d7;
    FUN_1001782e9(0,0);
    iVar13 = -0x32;
  }
LAB_1001834dd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar13;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((long)&local_38 + lVar3) = FUN_100183a41;
  ___stack_chk_fail();
}

