// name: FUN_10018ab13
// address: 10018ab13

void FUN_10018ab13(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  char local_b88 [32];
  ulong local_b68;
  char local_b38 [32];
  ulong local_b18;
  long local_ae8;
  undefined8 local_ae0;
  long local_ad8;
  long local_ad0;
  long local_ac8;
  long local_ac0;
  undefined1 local_ab8 [32];
  undefined1 local_a98 [32];
  undefined1 local_a78 [512];
  int local_878;
  undefined4 uStack_874;
  undefined8 local_458;
  int local_450;
  undefined2 uStack_44c;
  undefined2 uStack_44a;
  undefined2 uStack_448;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_10069093d(uVar5);
    }
    FUN_1001782e9(0,0);
    goto LAB_10018b153;
  }
  lVar7 = *(long *)(param_2 + 0x60);
  local_ad0 = *(long *)(lVar7 + 0x30);
  iVar4 = *(int *)(param_2 + 0x98);
  local_ac8 = lVar7;
  if (iVar4 == -0x80) {
LAB_10018afec:
    if (*(int *)(lVar7 + 0x88) == 0) {
      *(int *)(lVar7 + 0x88) = iVar4;
    }
    if (*(long **)(lVar7 + 0xb8) != (long *)0x0) {
      lVar9 = **(long **)(lVar7 + 0xb8);
      *(long *)(lVar7 + 0xb8) = lVar9;
      if (lVar9 != 0) {
        *(undefined8 *)(lVar7 + 0x98) = *(undefined8 *)(lVar9 + 0x20);
        *(undefined1 *)(lVar7 + 0xc0) = 1;
        *(undefined4 *)(param_2 + 0x98) = 0;
        *(code **)(param_2 + 0x40) = FUN_10018ab13;
        *(long *)(param_2 + 0x48) = param_2;
        uVar5 = *(undefined8 *)(lVar7 + 0xa8);
        goto LAB_10018b04a;
      }
    }
    if (*(long *)(param_2 + 0x78) != 0) {
      FUN_1001c652e();
      *(undefined8 *)(param_2 + 0x78) = 0;
    }
    *(int *)(lVar7 + 0xa0) = *(int *)(lVar7 + 0xa0) + -1;
    FUN_1001c64c1(param_2);
    lVar9 = local_ad0;
    if (*(int *)(lVar7 + 0xa0) == 0) {
      for (puVar8 = *(undefined8 **)(lVar7 + 0x38); lVar7 = local_ac8, puVar8 != (undefined8 *)0x0;
          puVar8 = (undefined8 *)*puVar8) {
        if (puVar8[1] != 0) {
          FUN_10017cdfb();
          puVar8[1] = 0;
        }
        if (puVar8[2] != 0) {
          plVar1 = *(long **)(lVar9 + 0x2e8);
          if (plVar1 == (long *)0x0) {
            FUN_10017cdfb();
          }
          else {
            *plVar1 = puVar8[2];
            *(undefined8 *)(lVar9 + 0x2e8) = 0;
          }
          puVar8[2] = 0;
        }
      }
      lVar9 = local_ac8 + 0x40;
      iVar4 = FUN_1001e9de0(lVar9);
      if ((iVar4 != -0x80) && (iVar4 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          FUN_1006908d1(iVar4,uVar5);
        }
      }
      *(undefined1 *)(lVar7 + 0x8d) = 1;
      if (*(char *)(local_ad0 + 3) == '\0') {
        FUN_1001e8f15(lVar7 + 0x10);
      }
      else {
        FUN_1001e9809(lVar7);
      }
      FUN_1001e9eb9(lVar9);
    }
  }
  else {
    local_ac0 = *(long *)(lVar7 + 0xb8);
    if (iVar4 == 0) {
      *(undefined8 *)(param_2 + 0x68) = 0;
      if (local_ac0 != 0) {
        if (((*(char *)(lVar7 + 0xc0) != '\0') && (*(char *)(lVar7 + 0x8c) == '\0')) &&
           (*(char *)(local_ad0 + 0xf) == '\x03')) {
          if ((*(int *)(local_ac0 + 0x18) == 0x64617461) &&
             (iVar4 = FUN_10017d35c(*(undefined8 *)(local_ac0 + 8),&local_458), iVar4 != -0x80)) {
            if (iVar4 == 0) {
              iVar4 = FUN_10017d35c(*(undefined8 *)(local_ac0 + 0x10),&local_878);
              if (iVar4 != -0x80) {
                if (iVar4 == 0) {
                  if ((((int)local_458 == 0x41464350) || (local_878 == 0x41464350)) &&
                     (iVar4 = FUN_10017d406(&local_878,0,local_b38,local_a78), iVar4 != -0x80)) {
                    if (iVar4 == 0) {
                      if (local_b38[0] == '\0') {
                        if ((local_b18 != 0) &&
                           (iVar4 = FUN_10017d406(&local_458,0,local_b88,0), iVar4 != -0x80)) {
                          if (iVar4 == 0) {
                            if (local_b88[0] == '\0') {
                              if (local_b18 <= local_b68) {
                                iVar4 = FUN_100181047(&local_458,0,local_b18,local_a98);
                                lVar7 = local_ac8;
                                if (iVar4 != -0x80) {
                                  if (iVar4 == 0) {
                                    iVar4 = FUN_100181047(&local_878,0,local_b18,local_ab8);
                                    lVar7 = local_ac8;
                                    if (iVar4 != -0x80) {
                                      if (iVar4 == 0) {
                                        cVar3 = FUN_1001c5630(local_a98,local_ab8,0x14);
                                        lVar7 = local_ac8;
                                        if (cVar3 != '\0') {
                                          iVar4 = FUN_10017d068(*(undefined8 *)(local_ac0 + 8),
                                                                local_b18);
                                          lVar7 = local_ac8;
                                          if (iVar4 != -0x80) {
                                            if (iVar4 == 0) {
                                              iVar4 = FUN_10017d068(*(undefined8 *)
                                                                     (local_ac0 + 0x10),local_b18);
                                              lVar7 = local_ac8;
                                              if (iVar4 != -0x80) {
                                                if (iVar4 == 0) {
                                                  uVar10 = *(ulong *)(local_ac0 + 0x20);
                                                  if (uVar10 < local_b18) {
                                                    uVar5 = FUN_1001cc310();
                                                    cVar3 = _os_log_type_enabled(uVar5,0x10);
                                                    if (cVar3 != '\0') {
                                                      FUN_1006901f3(uVar5);
                                                    }
                                                    FUN_1001782e9(0,0);
                                                    uVar10 = *(ulong *)(local_ac0 + 0x20);
                                                  }
                                                  *(ulong *)(local_ac0 + 0x20) = uVar10 - local_b18;
                                                  uVar10 = *(ulong *)(local_ac8 + 0x98);
                                                  if (uVar10 < local_b18) {
                                                    uVar5 = FUN_1001cc310();
                                                    cVar3 = _os_log_type_enabled(uVar5,0x10);
                                                    if (cVar3 != '\0') {
                                                      FUN_100690269(uVar5);
                                                    }
                                                    FUN_1001782e9(0,0);
                                                    uVar10 = *(ulong *)(local_ac8 + 0x98);
                                                  }
                                                  *(ulong *)(local_ac8 + 0x98) = uVar10 - local_b18;
                                                  lVar7 = local_ac8 + 0x40;
                                                  iVar4 = FUN_1001e9de0(lVar7);
                                                  if ((iVar4 != -0x80) && (iVar4 != 0)) {
                                                    uVar5 = FUN_1001cc310();
                                                    cVar3 = _os_log_type_enabled(uVar5,0x10);
                                                    if (cVar3 != '\0') {
                                                      FUN_1006902df(iVar4,uVar5);
                                                    }
                                                  }
                                                  *(long *)(local_ad0 + 0x290) =
                                                       *(long *)(local_ad0 + 0x290) + local_b18;
                                                  *(long *)(local_ad0 + 0x2d8) =
                                                       *(long *)(local_ad0 + 0x2d8) + local_b18;
                                                  FUN_1001e9eb9(lVar7);
                                                  lVar7 = local_ac8;
                                                  goto LAB_10018adc1;
                                                }
                                                uVar5 = FUN_1001cc310();
                                                cVar3 = _os_log_type_enabled(uVar5,0x10);
                                                lVar7 = local_ac8;
                                                if (cVar3 != '\0') {
                                                  FUN_10069034b(iVar4,uVar5);
                                                  lVar7 = local_ac8;
                                                }
                                              }
                                            }
                                            else {
                                              uVar5 = FUN_1001cc310();
                                              cVar3 = _os_log_type_enabled(uVar5,0x10);
                                              lVar7 = local_ac8;
                                              if (cVar3 != '\0') {
                                                FUN_1006903b7(iVar4,uVar5);
                                                lVar7 = local_ac8;
                                              }
                                            }
                                          }
                                          goto LAB_10018afec;
                                        }
                                      }
                                      else {
                                        uVar5 = FUN_1001cc310();
                                        cVar3 = _os_log_type_enabled(uVar5,0x10);
                                        lVar7 = local_ac8;
                                        if (cVar3 != '\0') {
                                          FUN_100690423(iVar4,uVar5);
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    uVar5 = FUN_1001cc310();
                                    cVar3 = _os_log_type_enabled(uVar5,0x10);
                                    lVar7 = local_ac8;
                                    if (cVar3 != '\0') {
                                      FUN_10069048f(iVar4,uVar5);
                                    }
                                  }
                                }
                                goto LAB_10018ad9a;
                              }
                              uVar5 = FUN_1001cc310();
                              cVar3 = _os_log_type_enabled(uVar5,0x10);
                              if (cVar3 != '\0') {
                                FUN_1006904fb(uVar5);
                              }
                            }
                            else {
                              uVar5 = FUN_1001cc310();
                              cVar3 = _os_log_type_enabled(uVar5,0x10);
                              if (cVar3 != '\0') {
                                FUN_10069017d(uVar5);
                              }
                            }
                            FUN_1001782e9(0,0);
                            lVar7 = local_ac8;
                          }
                          else {
                            uVar5 = FUN_1001cc310();
                            cVar3 = _os_log_type_enabled(uVar5,0x10);
                            lVar7 = local_ac8;
                            if (cVar3 != '\0') {
                              FUN_100690571(iVar4,uVar5);
                            }
                          }
                        }
                      }
                      else {
                        uVar5 = FUN_1001cc310();
                        cVar3 = _os_log_type_enabled(uVar5,0x10);
                        if (cVar3 != '\0') {
                          FUN_100690107(uVar5);
                        }
                        FUN_1001782e9(0,0);
                      }
                    }
                    else {
                      uVar5 = FUN_1001cc310();
                      cVar3 = _os_log_type_enabled(uVar5,0x10);
                      if (cVar3 != '\0') {
                        FUN_1006905dd(iVar4,uVar5);
                      }
                    }
                  }
                }
                else {
                  uVar5 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar3 != '\0') {
                    FUN_100690649(iVar4,uVar5);
                  }
                }
              }
            }
            else {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                FUN_1006906b5(iVar4,uVar5);
              }
            }
          }
LAB_10018ad9a:
          iVar4 = FUN_10017cf3c(*(undefined8 *)(local_ac0 + 0x10),0);
          if (iVar4 != -0x80) {
            if (iVar4 == 0) goto LAB_10018adc1;
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              FUN_100690721(iVar4,uVar5);
            }
          }
          goto LAB_10018afec;
        }
LAB_10018adc1:
        uVar10 = *(ulong *)(lVar7 + 0x98) & 0xffffffff;
        if (*(ulong *)(param_2 + 0x70) <= *(ulong *)(lVar7 + 0x98)) {
          uVar10 = *(ulong *)(param_2 + 0x70);
        }
        if (uVar10 != 0) {
          lVar9 = *(long *)(param_2 + 0x78);
          local_ad8 = lVar7 + 0x40;
          local_ae8 = lVar7 + 0x10;
          do {
            uVar6 = (ulong)*(uint *)(param_2 + 0x80);
            if (uVar10 < *(uint *)(param_2 + 0x80)) {
              uVar6 = uVar10;
            }
            iVar4 = FUN_10017d186(*(undefined8 *)(local_ac0 + 8),lVar9,uVar6,1,&local_878);
            if (iVar4 != 0) {
              if (iVar4 != -0x80) {
                uVar5 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar5,0x10);
                if (cVar3 != '\0') {
                  FUN_1006907f9(iVar4,uVar5);
                }
              }
              goto LAB_10018afec;
            }
            lVar2 = CONCAT44(uStack_874,local_878);
            *(long *)(lVar7 + 0x98) = *(long *)(lVar7 + 0x98) - lVar2;
            *(long *)(param_2 + 0x68) = *(long *)(param_2 + 0x68) + lVar2;
            lVar9 = lVar9 + lVar2;
            if (*(char *)(lVar7 + 0x8c) == '\0') {
              iVar4 = FUN_1001e9de0(local_ad8);
              if ((iVar4 != -0x80) && (iVar4 != 0)) {
                local_ae0 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(local_ae0,0x10);
                if (cVar3 != '\0') {
                  local_458._0_4_ = 0x8220202;
                  local_458._4_4_ = 0x7a0a90;
                  local_450 = 1;
                  uStack_44c = 0x400;
                  uStack_44a = (undefined2)iVar4;
                  uStack_448 = (undefined2)((uint)iVar4 >> 0x10);
                  __os_log_error_impl(0x100000000,local_ae0,0x10,"%{public}s: err == (%d)",
                                      &local_458,0x12);
                }
              }
              lVar7 = local_ad0;
              if (*(char *)(local_ad0 + 0xc) == '\0') {
                iVar4 = *(int *)(local_ac8 + 0x90);
              }
              else {
                FUN_1001c62d9(&local_458,0x40);
                local_458 = lVar9 - CONCAT44(uStack_874,local_878);
                local_450 = local_878;
                uStack_44c = (undefined2)uStack_874;
                uStack_44a = (undefined2)((uint)uStack_874 >> 0x10);
                iVar4 = (**(code **)(lVar7 + 0x30))
                                  (0x64617461,&local_458,*(undefined8 *)(lVar7 + 0x38));
                *(int *)(local_ac8 + 0x90) = iVar4;
              }
              *(long *)(lVar7 + 0x290) = *(long *)(lVar7 + 0x290) + CONCAT44(uStack_874,local_878);
              if (*(char *)(lVar7 + 3) == '\0') {
                FUN_1001e8f15(local_ae8);
              }
              else {
                FUN_1001e9809(local_ac8);
              }
              FUN_1001e9eb9(local_ad8);
              if (iVar4 != 0) {
                lVar7 = local_ac8;
                if (iVar4 != -0x80) {
                  uVar5 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar5,0x10);
                  lVar7 = local_ac8;
                  if (cVar3 != '\0') {
                    FUN_10069078d(iVar4,uVar5);
                  }
                }
                goto LAB_10018afec;
              }
            }
            uVar10 = uVar10 - lVar2;
            lVar7 = local_ac8;
          } while (uVar10 != 0);
        }
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        FUN_100690865(iVar4,uVar5);
      }
      if (iVar4 != 0) goto LAB_10018afec;
    }
    if (*(long *)(param_2 + 0x68) == 0) {
      iVar4 = 0;
      goto LAB_10018afec;
    }
    *(undefined1 *)(param_2 + 0x88) = *(undefined1 *)(lVar7 + 0xc0);
    *(undefined1 *)(lVar7 + 0xc0) = 0;
    *(long *)(param_2 + 0x90) = local_ac0;
    *(code **)(param_2 + 0x40) = FUN_10018b640;
    *(long *)(param_2 + 0x48) = param_2;
    uVar5 = *(undefined8 *)(lVar7 + 0xb0);
LAB_10018b04a:
    FUN_1001ecf95(uVar5,param_2);
  }
LAB_10018b153:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

