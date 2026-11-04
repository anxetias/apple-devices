// name: FUN_100160f8a
// address: 100160f8a

int FUN_100160f8a(int *param_1)

{
  uint uVar1;
  short *psVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  char local_b50 [3];
  char local_b4d;
  ulong local_b00 [10];
  ulong local_ab0;
  ulong local_aa8;
  long local_aa0;
  uint local_a94;
  ulong local_a90;
  long local_a88;
  long local_a80;
  int local_a78 [264];
  int local_658 [264];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      FUN_10067032f(uVar8);
    }
  }
  else if (*param_1 == 0x62776266) {
    if (*(long *)(param_1 + 6) == 0) {
      uVar8 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 != '\0') {
        FUN_1006702b9(uVar8);
      }
    }
    else {
      psVar2 = *(short **)(param_1 + 8);
      if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
        local_a88 = 0;
        uVar1 = param_1[4];
        iVar6 = FUN_10017ecc9(*(long *)(param_1 + 6),psVar2,local_a78,local_b50);
        bVar3 = iVar6 != 0;
        if (iVar6 == 0) {
          if (local_b50[0] != '\0') {
            uVar8 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar8,0x10);
            if (cVar5 != '\0') {
              FUN_10066f55f(uVar8);
            }
            FUN_1001782e9(0,0);
            iVar6 = -0x516;
            goto LAB_10016110e;
          }
          if (local_b4d != '\0') {
            uVar8 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar8,0x10);
            if (cVar5 != '\0') {
              FUN_10066f5d5(uVar8);
            }
            FUN_1001782e9(0,0);
            iVar6 = -0x2d;
            goto LAB_10016110e;
          }
          if ((uVar1 & 1) != 0) {
            iVar6 = FUN_10017cc65(local_a78,0x64617461,3,&local_a88);
            if (iVar6 == -0x80) goto LAB_10016110e;
            if (iVar6 != 0) {
              uVar8 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar8,0x10);
              if (cVar5 != '\0') {
                FUN_10066f64b(iVar6,uVar8);
              }
              goto LAB_10016110e;
            }
            FUN_10017cdfb(local_a88);
            local_a88 = 0;
            goto LAB_1001612c6;
          }
          iVar6 = FUN_100182d4d();
          if (iVar6 == -0x2f) {
            iVar6 = FUN_10018498f(*(undefined8 *)(param_1 + 6),"Temp File","tmp",local_238);
            if (iVar6 == -0x80) goto LAB_10016110e;
            if (iVar6 != 0) {
              uVar8 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar8,0x10);
              if (cVar5 != '\0') {
                FUN_10066f78f(iVar6,uVar8);
              }
              goto LAB_10016110e;
            }
            iVar6 = FUN_1001894bc(local_a78,local_238,local_658);
            if (iVar6 == -0x80) goto LAB_10016110e;
            if (iVar6 != 0) {
              uVar8 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar8,0x10);
              if (cVar5 != '\0') {
                FUN_10066f723(iVar6,uVar8);
              }
              goto LAB_10016110e;
            }
            iVar6 = FUN_1001893fe(local_658);
          }
          if (iVar6 == -0x80) goto LAB_10016110e;
          if (iVar6 != 0) {
            uVar8 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar8,0x10);
            if (cVar5 != '\0') {
              FUN_10066f6b7(iVar6,uVar8);
            }
            goto LAB_10016110e;
          }
LAB_100161020:
          iVar6 = FUN_1001891ea(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 8),local_a78)
          ;
          if (iVar6 == -0x80) goto LAB_10016110e;
          bVar3 = true;
          if (iVar6 != 0) {
            uVar8 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar8,0x10);
            if (cVar5 != '\0') {
              FUN_1006701d7(iVar6,uVar8);
            }
            goto LAB_10016110e;
          }
        }
        else {
          if ((uVar1 & 1) == 0) goto LAB_100161020;
LAB_1001612c6:
          if ((*(byte *)(param_1 + 4) & 4) == 0) {
            iVar6 = FUN_10018498f(*(undefined8 *)(param_1 + 6),"Temp File","tmp",local_238);
            if (iVar6 == -0x80) goto LAB_10016110e;
            if (iVar6 != 0) {
              uVar8 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar8,0x10);
              if (cVar5 != '\0') {
                FUN_10066f93f(iVar6,uVar8);
              }
              goto LAB_10016110e;
            }
          }
          else {
            iVar6 = FUN_10017ede0(*(undefined8 *)(param_1 + 8),"tmp",local_238);
            if (iVar6 == -0x80) goto LAB_10016110e;
            if (iVar6 != 0) {
              uVar8 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar8,0x10);
              if (cVar5 != '\0') {
                FUN_10066f867(iVar6,uVar8);
              }
              goto LAB_10016110e;
            }
            iVar6 = FUN_10017ecc9(*(undefined8 *)(param_1 + 6),local_238,local_658,0);
            if (iVar6 == 0) {
              iVar6 = FUN_100182d4d(local_658);
              if (iVar6 == -0x80) goto LAB_10016110e;
              if (iVar6 != 0) {
                uVar8 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar8,0x10);
                if (cVar5 != '\0') {
                  FUN_10066f7fb(iVar6,uVar8);
                }
                goto LAB_10016110e;
              }
            }
          }
          iVar6 = FUN_1001891ea(*(undefined8 *)(param_1 + 6),local_238,local_658);
          if (iVar6 == -0x80) goto LAB_10016110e;
          if (iVar6 != 0) {
            uVar8 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar8,0x10);
            if (cVar5 != '\0') {
              FUN_10066f8d3(iVar6,uVar8);
            }
            goto LAB_10016110e;
          }
        }
        lVar9 = FUN_1001c63e1(1000000);
        if (lVar9 == 0) {
          uVar8 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar8,0x10);
          if (cVar5 != '\0') {
            FUN_10066fe6d(uVar8);
          }
          FUN_1001782e9(0,0);
LAB_100161454:
          iVar6 = -0x6c;
        }
        else {
          if (*(long *)(param_1 + 0xe) == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = FUN_1001c63e1(1000000);
            if (lVar10 == 0) {
              uVar8 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar8,0x10);
              if (cVar5 != '\0') {
                FUN_10066f9ab(uVar8);
              }
              FUN_1001782e9(0,0);
              FUN_1001c64c1(lVar9);
              goto LAB_100161454;
            }
          }
          local_aa0 = lVar10;
          if ((uVar1 & 1) == 0) {
            iVar6 = FUN_10017cc65(local_a78,0x64617461,0x103,&local_a88);
            if (iVar6 != -0x80) {
              if (iVar6 == 0) {
LAB_100161502:
                iVar6 = FUN_1001602ae(*(undefined8 *)(param_1 + 2));
                if (iVar6 != -0x80) {
                  if (iVar6 == 0) {
                    iVar6 = FUN_100160772(*(undefined8 *)(param_1 + 2),0);
                    if (iVar6 != -0x80) {
                      if (iVar6 == 0) {
                        iVar6 = FUN_100160c3f(*(undefined8 *)(param_1 + 2));
                        if (iVar6 != -0x80) {
                          if (iVar6 == 0) {
                            local_a80 = lVar9;
                            uVar11 = 0;
                            uVar12 = local_ab0;
                            while (local_ab0 = uVar11, local_aa8 != 0) {
                              uVar12 = *(ulong *)(param_1 + 10);
                              uVar11 = uVar12 - local_ab0;
                              local_b00[0] = local_aa8;
                              if (uVar12 < local_ab0 || uVar11 == 0) {
                                if (*(long *)(param_1 + 0xc) != 0) {
                                  uVar12 = *(long *)(param_1 + 0xc) + uVar12;
                                  bVar4 = true;
                                  uVar11 = uVar12 - local_ab0;
                                  if (uVar12 < local_ab0 || uVar11 == 0) goto LAB_1001615be;
                                  if (uVar11 < local_aa8) {
                                    local_b00[0] = uVar11;
                                  }
                                }
                                bVar4 = false;
                              }
                              else {
                                if (uVar11 < local_aa8) {
                                  local_b00[0] = uVar11;
                                }
                                bVar4 = true;
                              }
LAB_1001615be:
                              if (999999 < local_b00[0]) {
                                local_b00[0] = 1000000;
                              }
                              iVar6 = FUN_100160380(*(undefined8 *)(param_1 + 2),local_b00,local_a80
                                                   );
                              uVar12 = local_b00[0];
                              if (iVar6 != 0) {
                                lVar9 = local_a80;
                                if (iVar6 != -0x80) {
                                  uVar8 = FUN_1001cc310();
                                  cVar5 = _os_log_type_enabled(uVar8,0x10);
                                  lVar9 = local_a80;
                                  if (cVar5 != '\0') {
                                    FUN_10066fbe5(iVar6,uVar8);
                                    lVar9 = local_a80;
                                  }
                                }
                                goto LAB_1001619cf;
                              }
                              lVar9 = local_a80;
                              if ((!bVar4) && (*(long *)(param_1 + 0xe) != 0)) {
                                local_a94 = (uint)local_b00[0];
                                FUN_100177bc5(*(long *)(param_1 + 0xe),local_a80,
                                              local_b00[0] & 0xffffffff,local_aa0,&local_a94);
                                if (uVar12 == local_a94) {
                                  local_a90 = uVar12;
                                  lVar9 = local_aa0;
                                  goto LAB_100161664;
                                }
                                uVar8 = FUN_1001cc310();
                                cVar5 = _os_log_type_enabled(uVar8,0x10);
                                if (cVar5 != '\0') {
                                  FUN_10066fa8d(uVar8);
                                }
LAB_1001619b6:
                                FUN_1001782e9(0,0);
                                iVar6 = -0x24;
                                lVar9 = local_a80;
                                goto LAB_1001619cf;
                              }
LAB_100161664:
                              iVar6 = FUN_10017d230(local_a88,lVar9,uVar12,1,&local_a90);
                              if (iVar6 != 0) {
                                lVar9 = local_a80;
                                if (iVar6 != -0x80) {
                                  uVar8 = FUN_1001cc310();
                                  cVar5 = _os_log_type_enabled(uVar8,0x10);
                                  lVar9 = local_a80;
                                  if (cVar5 != '\0') {
                                    FUN_10066fb79(iVar6,uVar8);
                                    lVar9 = local_a80;
                                  }
                                }
                                goto LAB_1001619cf;
                              }
                              if (local_a90 != uVar12) {
                                uVar8 = FUN_1001cc310();
                                cVar5 = _os_log_type_enabled(uVar8,0x10);
                                if (cVar5 != '\0') {
                                  FUN_10066fb03(uVar8);
                                }
                                goto LAB_1001619b6;
                              }
                              local_aa8 = local_aa8 - uVar12;
                              uVar11 = local_ab0 + uVar12;
                              uVar12 = local_ab0;
                            }
                            lVar9 = local_a80;
                            local_ab0 = uVar12;
                            iVar6 = 0;
                            if (((local_a78[0] == 0x41464350) &&
                                (iVar6 = FUN_10017cf3c(local_a88), lVar9 = local_a80, iVar6 != -0x80
                                )) && (iVar6 != 0)) {
                              uVar8 = FUN_1001cc310();
                              cVar5 = _os_log_type_enabled(uVar8,0x10);
                              lVar9 = local_a80;
                              if (cVar5 != '\0') {
                                FUN_10066fc51(iVar6,uVar8);
                                lVar9 = local_a80;
                              }
                            }
                          }
                          else {
                            local_a80 = lVar9;
                            uVar8 = FUN_1001cc310();
                            cVar5 = _os_log_type_enabled(uVar8,0x10);
                            lVar9 = local_a80;
                            if (cVar5 != '\0') {
                              FUN_10066fcbd(iVar6,uVar8);
                              lVar9 = local_a80;
                            }
                          }
                        }
                      }
                      else {
                        local_a80 = lVar9;
                        uVar8 = FUN_1001cc310();
                        cVar5 = _os_log_type_enabled(uVar8,0x10);
                        lVar9 = local_a80;
                        if (cVar5 != '\0') {
                          FUN_10066fd29(iVar6,uVar8);
                          lVar9 = local_a80;
                        }
                      }
                    }
                  }
                  else {
                    local_a80 = lVar9;
                    uVar8 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar8,0x10);
                    lVar9 = local_a80;
                    if (cVar5 != '\0') {
                      FUN_10066fd95(iVar6,uVar8);
                      lVar9 = local_a80;
                    }
                  }
                }
              }
              else {
                local_a80 = lVar9;
                uVar8 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar8,0x10);
                lVar9 = local_a80;
                if (cVar5 != '\0') {
                  FUN_10066fe01(iVar6,uVar8);
                  lVar9 = local_a80;
                }
              }
            }
          }
          else {
            iVar6 = FUN_10017cc65(local_658,0x64617461,0x103,&local_a88);
            if (iVar6 != -0x80) {
              if (iVar6 == 0) goto LAB_100161502;
              local_a80 = lVar9;
              uVar8 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar8,0x10);
              lVar9 = local_a80;
              if (cVar5 != '\0') {
                FUN_10066fa21(iVar6,uVar8);
                lVar9 = local_a80;
              }
            }
          }
LAB_1001619cf:
          FUN_1001c64c1(lVar9);
          if (local_aa0 != 0) {
            FUN_1001c64c1();
          }
        }
        if (local_a88 != 0) {
          FUN_10017cdfb();
        }
        if ((uVar1 & 1) == 0) {
          if (iVar6 == 0) {
LAB_100161c47:
            iVar6 = 0;
            if (*(void **)(param_1 + 0x10) != (void *)0x0) {
              _memcpy(*(void **)(param_1 + 0x10),local_a78,0x420);
              iVar6 = 0;
            }
            goto LAB_10016110e;
          }
          piVar13 = local_a78;
        }
        else {
          if (iVar6 == 0) {
            if (bVar3) {
              iVar6 = FUN_1001894bc(local_658,*(undefined8 *)(param_1 + 8),local_a78);
              if ((iVar6 != -0x80) && (iVar6 != 0)) {
                uVar8 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar8,0x10);
                if (cVar5 != '\0') {
                  FUN_10067016b(iVar6,uVar8);
                }
              }
            }
            else {
              iVar6 = FUN_100189700(local_a78,local_658);
              if (iVar6 == 0) {
                iVar6 = FUN_100189954(0,local_658,0,0,0);
                if ((iVar6 != -0x80) && (iVar6 != 0)) {
                  uVar8 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar5 != '\0') {
                    FUN_1006700ff(iVar6,uVar8);
                  }
                }
              }
              else {
                iVar6 = FUN_10017d477(local_658,local_b00,0);
                if ((iVar6 == -0x80) || (iVar6 == 0)) {
                  if ((iVar6 == 0) && ((char)local_b00[0] == '\0')) {
                    local_a90 = local_a90 & 0xffffffff00000000;
                    iVar6 = FUN_10018906f(local_a78);
                    if ((iVar6 != -0x80) && (iVar6 != 0)) {
                      uVar8 = FUN_1001cc310();
                      cVar5 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar5 != '\0') {
                        FUN_10066fee3(iVar6,uVar8);
                      }
                    }
                    iVar7 = FUN_100189954(0,local_a78,0,0,0);
                    if ((iVar7 != -0x80) && (iVar7 != 0)) {
                      uVar8 = FUN_1001cc310();
                      cVar5 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar5 != '\0') {
                        FUN_10066ff4f(iVar7,uVar8);
                      }
                    }
                    iVar7 = FUN_1001894bc(local_658,*(undefined8 *)(param_1 + 8),local_a78);
                    if ((iVar7 != -0x80) && (iVar7 != 0)) {
                      uVar8 = FUN_1001cc310();
                      cVar5 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar5 != '\0') {
                        FUN_10066ffbb(iVar7,uVar8);
                      }
                    }
                    if (((iVar7 == 0 && iVar6 == 0) &&
                        (iVar6 = FUN_100189139(local_a78,local_a90 & 0xffffffff), iVar6 != -0x80))
                       && (iVar6 != 0)) {
                      uVar8 = FUN_1001cc310();
                      cVar5 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar5 != '\0') {
                        FUN_100670027(iVar6,uVar8);
                      }
                    }
                  }
                }
                else {
                  uVar8 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar5 != '\0') {
                    FUN_100670093(iVar6,uVar8);
                  }
                }
              }
            }
            goto LAB_100161c47;
          }
          piVar13 = local_658;
        }
        FUN_100182d4d(piVar13);
        goto LAB_10016110e;
      }
      uVar8 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 != '\0') {
        FUN_100670243(uVar8);
      }
    }
  }
  else {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      FUN_10066f4e9(uVar8);
    }
  }
  FUN_1001782e9(0,0);
  iVar6 = -0x32;
LAB_10016110e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

