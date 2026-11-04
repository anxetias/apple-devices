// name: FUN_1003e554a
// address: 1003e554a

/* WARNING: Type propagation algorithm not settling */

int FUN_1003e554a(long param_1,uint param_2,long param_3,undefined8 param_4,undefined8 *param_5)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0 [2];
  long local_98;
  undefined8 *local_90;
  uint local_84;
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 local_6c;
  int local_6a;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_a8 = 0;
  if (param_1 == 0) {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_4a = "trackData != nullptr";
LAB_1003e57dd:
      local_4c = 0x822;
      uStack_50 = 1;
      local_58._4_4_ = 0x7a0a90;
      local_58._0_4_ = 0x8220202;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else if (*(int *)(param_1 + 0x98) == 0) {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_4a = "trackData->numPlaylists != 0";
      goto LAB_1003e57dd;
    }
  }
  else if (param_3 == 0) {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_4a = "handlerProc != nullptr";
      goto LAB_1003e57dd;
    }
  }
  else {
    if (param_5 != (undefined8 *)0x0) {
      local_84 = param_2;
      iVar4 = FUN_100160cb6(param_5,0);
      if (iVar4 == -0x80) goto LAB_1003e5811;
      if (iVar4 != 0) {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          local_58._0_4_ = 0x8220202;
          local_58._4_4_ = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        goto LAB_1003e5811;
      }
      lVar6 = FUN_1001c6429(0x100170);
      uVar1 = local_84;
      if (lVar6 == 0) {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          local_58._0_4_ = 0x8220202;
          local_58._4_4_ = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "context != nullptr";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar4 = -0x6c;
        goto LAB_1003e5811;
      }
      puVar7 = &local_e8;
      if ((local_84 >> 0x16 & 1) == 0) {
        puVar7 = param_5;
      }
      *(long *)(lVar6 + 0x100008) = param_1;
      *(long *)(lVar6 + 0x100020) = param_3;
      *(undefined8 *)(lVar6 + 0x100028) = param_4;
      *(undefined8 **)(lVar6 + 0x100000) = puVar7;
      *(uint *)(lVar6 + 0x100018) = local_84;
      *(byte *)(lVar6 + 0x100127) = (byte)local_84 & 1;
      *(uint *)(lVar6 + 0x100138) = 2 - (uint)((local_84 & 2) == 0);
      local_90 = param_5;
      FUN_1001c62d9(&local_58,0x20);
      puVar7 = local_90;
      if ((uVar1 >> 0xd & 1) != 0) {
        *(undefined2 *)(lVar6 + 0x100060) = 1;
        *(byte *)(lVar6 + 0x1000a0) = *(byte *)(lVar6 + 0x1000a0) | 1;
      }
      if ((short)uVar1 < 0) {
        uVar3 = 4;
        if (*(short *)(lVar6 + 0x100060) == 0) {
          *(undefined2 *)(lVar6 + 0x100060) = 3;
        }
LAB_1003e58e9:
        *(ushort *)(lVar6 + 0x1000a0) = *(ushort *)(lVar6 + 0x1000a0) | uVar3;
      }
      else if ((uVar1 >> 0xe & 1) != 0) {
        uVar3 = 2;
        if (*(short *)(lVar6 + 0x100060) == 0) {
          *(undefined2 *)(lVar6 + 0x100060) = 2;
        }
        goto LAB_1003e58e9;
      }
      *(undefined8 *)(lVar6 + 0x100030) = 0xf46462686d;
      *(undefined1 *)(lVar6 + 0x100050) = 1;
      uVar8 = FUN_100309008(param_1);
      *(undefined8 *)(lVar6 + 0x100078) = uVar8;
      uVar5 = FUN_100177d88();
      *(undefined4 *)(lVar6 + 0x10009c) = uVar5;
      *(undefined8 *)(lVar6 + 0x1000d0) = 0xa0019ffffffff;
      if ((uVar1 >> 0x16 & 1) == 0) {
        *(undefined8 *)(lVar6 + 0x10003c) = 0x7500000001;
LAB_1003e598b:
        local_80 = lVar6;
        FUN_1001c62d9(&local_58,0x20);
        lVar9 = local_80;
        local_98 = lVar6 + 0x100030;
        local_58 = lVar6 + 0x100030;
        iVar4 = (**(code **)(local_80 + 0x100020))(param_1,0x77686472,&local_58,param_4);
        lVar6 = lVar9;
        if (iVar4 != -0x80) {
          if (iVar4 == 0) {
            local_f0 = 0xf4;
            iVar4 = FUN_100160894(puVar7,&local_f0,local_98);
            if (iVar4 != -0x80) {
              if (iVar4 != 0) {
                uVar8 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar8,0x10);
                goto joined_r0x0001003e5c0f;
              }
              if ((local_84 & 0x10) != 0) {
                iVar4 = FUN_1003e66f6(lVar9);
                if (iVar4 == -0x80) goto LAB_1003e5e2a;
                if (iVar4 != 0) {
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  goto joined_r0x0001003e5c0f;
                }
                *(int *)(lVar9 + 0x100044) = *(int *)(lVar9 + 0x100044) + 1;
              }
              if ((local_84 & 0x20) != 0) {
                iVar4 = FUN_1003e7619(lVar9);
                if (iVar4 == -0x80) goto LAB_1003e5e2a;
                if (iVar4 != 0) {
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  goto joined_r0x0001003e5c0f;
                }
                *(int *)(lVar9 + 0x100044) = *(int *)(lVar9 + 0x100044) + 1;
              }
              iVar4 = FUN_1003e8134(lVar9,1);
              if (iVar4 != -0x80) {
                if (iVar4 != 0) {
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  goto joined_r0x0001003e5c0f;
                }
                *(int *)(lVar9 + 0x100044) = *(int *)(lVar9 + 0x100044) + 1;
                if ((local_84 >> 0x14 & 1) != 0) {
                  iVar4 = FUN_1003e8134(lVar9,10);
                  if (iVar4 == -0x80) goto LAB_1003e5e2a;
                  if (iVar4 != 0) {
                    uVar8 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar8,0x10);
                    goto joined_r0x0001003e5c0f;
                  }
                  *(int *)(local_80 + 0x100044) = *(int *)(local_80 + 0x100044) + 1;
                  lVar9 = local_80;
                }
                if ((local_84 >> 0xb & 1) != 0) {
                  iVar4 = FUN_1003e8134(lVar9,6);
                  lVar6 = lVar9;
                  if (iVar4 == -0x80) goto LAB_1003e5e2a;
                  if (iVar4 != 0) {
                    uVar8 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar8,0x10);
                    goto joined_r0x0001003e5c0f;
                  }
                  *(int *)(local_80 + 0x100044) = *(int *)(local_80 + 0x100044) + 1;
                  lVar9 = local_80;
                }
                iVar4 = FUN_1003e86e8(lVar9,3);
                lVar6 = lVar9;
                if (iVar4 != -0x80) {
                  if (iVar4 != 0) {
                    uVar8 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar8,0x10);
                    goto joined_r0x0001003e5c0f;
                  }
                  *(int *)(local_80 + 0x100044) = *(int *)(local_80 + 0x100044) + 1;
                  if ((local_84 >> 0x16 & 1) == 0) {
                    iVar4 = FUN_1003e86e8(local_80,2);
                    lVar6 = local_80;
                    if (iVar4 == -0x80) goto LAB_1003e5e2a;
                    if (iVar4 != 0) {
                      uVar8 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar8,0x10);
                      goto joined_r0x0001003e5c0f;
                    }
                    *(int *)(local_80 + 0x100044) = *(int *)(local_80 + 0x100044) + 1;
                  }
                  if ((local_84 >> 9 & 1) != 0) {
                    iVar4 = FUN_1003e86e8(local_80,5);
                    lVar6 = local_80;
                    if (iVar4 == -0x80) goto LAB_1003e5e2a;
                    if (iVar4 != 0) {
                      uVar8 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar8,0x10);
                      goto joined_r0x0001003e5c0f;
                    }
                    *(int *)(local_80 + 0x100044) = *(int *)(local_80 + 0x100044) + 1;
                  }
                  cVar2 = FUN_1001b8428(*(long *)(local_80 + 0x100008) + 0x2740);
                  if (cVar2 == '\0') {
                    iVar4 = FUN_1003e8d33(local_80);
                    lVar6 = local_80;
                    if (iVar4 == -0x80) goto LAB_1003e5e2a;
                    if (iVar4 != 0) {
                      uVar8 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar8,0x10);
                      goto joined_r0x0001003e5c0f;
                    }
                    *(int *)(local_80 + 0x100044) = *(int *)(local_80 + 0x100044) + 1;
                  }
                  if ((local_84 >> 0x1a & 1) == 0) {
LAB_1003e5bd6:
                    if ((local_84 >> 0x16 & 1) == 0) {
                      local_90 = *(undefined8 **)(local_80 + 0x100000);
                    }
                    else {
                      iVar4 = FUN_1003e98f6(&local_e8,local_90);
                      lVar6 = local_80;
                      if (iVar4 == -0x80) goto LAB_1003e5e2a;
                      if (iVar4 != 0) {
                        uVar8 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar8,0x10);
                        goto joined_r0x0001003e5c0f;
                      }
                      *(undefined8 **)(local_80 + 0x100000) = local_90;
                    }
                    iVar4 = FUN_100160c3f(local_90,local_a0);
                    lVar6 = local_80;
                    if (iVar4 != -0x80) {
                      if (iVar4 != 0) {
                        uVar8 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar8,0x10);
                        goto joined_r0x0001003e5c0f;
                      }
                      *(undefined4 *)(local_80 + 0x100038) = local_a0[0];
                      *(undefined8 *)(local_80 + 0x100080) = *(undefined8 *)(local_80 + 0x10013c);
                      if (*(char *)(local_80 + 0x100127) != '\0') {
                        FUN_1003e9ee7(local_98);
                      }
                      local_78 = 0xf4;
                      uStack_74 = 0;
                      iVar4 = FUN_100160a0d(*(undefined8 *)(local_80 + 0x100000),0,&local_78,
                                            local_98);
                      lVar6 = local_80;
                      if (iVar4 != -0x80) {
                        if (iVar4 != 0) {
                          uVar8 = FUN_1001cc310();
                          cVar2 = _os_log_type_enabled(uVar8,0x10);
                          goto joined_r0x0001003e5c0f;
                        }
                        if ((local_84 >> 0xe & 1) == 0) {
LAB_1003e6155:
                          if ((short)local_84 < 0) {
                            iVar4 = FUN_1003e9f77(local_80,3,0);
                            lVar6 = local_80;
                            if (iVar4 != -0x80) {
                              if (iVar4 == 0) {
                                local_78 = 0x39;
                                uStack_74 = 0;
                                iVar4 = FUN_100160a0d(*(undefined8 *)(local_80 + 0x100000),0xab,
                                                      &local_78,local_80 + 0x1000db);
                                lVar6 = local_80;
                                if (iVar4 == -0x80) goto LAB_1003e5e2a;
                                if (iVar4 == 0) goto LAB_1003e6160;
                                uVar8 = FUN_1001cc310();
                                cVar2 = _os_log_type_enabled(uVar8,0x10);
                              }
                              else {
                                uVar8 = FUN_1001cc310();
                                cVar2 = _os_log_type_enabled(uVar8,0x10);
                              }
                              goto joined_r0x0001003e5c0f;
                            }
                          }
                          else {
LAB_1003e6160:
                            if ((local_84 >> 0xd & 1) == 0) {
LAB_1003e616b:
                              FUN_1003eb04b(local_98);
                              local_78 = 8;
                              uStack_74 = 0;
                              iVar4 = FUN_100160a0d(*(undefined8 *)(local_80 + 0x100000),0x18,
                                                    &local_78,local_80 + 0x100048);
                              lVar6 = local_80;
                              if ((iVar4 != -0x80) && (iVar4 != 0)) {
                                uVar8 = FUN_1001cc310();
                                cVar2 = _os_log_type_enabled(uVar8,0x10);
                                goto joined_r0x0001003e5c0f;
                              }
                            }
                            else {
                              iVar4 = FUN_1003ea814(local_80,0);
                              lVar6 = local_80;
                              if (iVar4 != -0x80) {
                                if (iVar4 == 0) {
                                  local_78 = 0x14;
                                  uStack_74 = 0;
                                  iVar4 = FUN_100160a0d(*(undefined8 *)(local_80 + 0x100000),0x58,
                                                        &local_78,local_80 + 0x100088);
                                  lVar6 = local_80;
                                  if (iVar4 == -0x80) goto LAB_1003e5e2a;
                                  if (iVar4 == 0) goto LAB_1003e616b;
                                  uVar8 = FUN_1001cc310();
                                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                                }
                                else {
                                  uVar8 = FUN_1001cc310();
                                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                                }
                                goto joined_r0x0001003e5c0f;
                              }
                            }
                          }
                        }
                        else {
                          iVar4 = FUN_1003e9f77(local_80,2,0);
                          lVar6 = local_80;
                          if (iVar4 != -0x80) {
                            if (iVar4 == 0) {
                              local_78 = 0x2e;
                              uStack_74 = 0;
                              iVar4 = FUN_100160a0d(*(undefined8 *)(local_80 + 0x100000),0x72,
                                                    &local_78,local_80 + 0x1000a2);
                              lVar6 = local_80;
                              if (iVar4 == -0x80) goto LAB_1003e5e2a;
                              if (iVar4 == 0) goto LAB_1003e6155;
                              uVar8 = FUN_1001cc310();
                              cVar2 = _os_log_type_enabled(uVar8,0x10);
                            }
                            else {
                              uVar8 = FUN_1001cc310();
                              cVar2 = _os_log_type_enabled(uVar8,0x10);
                            }
                            goto joined_r0x0001003e5c0f;
                          }
                        }
                      }
                    }
                  }
                  else {
                    iVar4 = FUN_1003e8f99(local_80);
                    lVar6 = local_80;
                    if (iVar4 != -0x80) {
                      if (iVar4 == 0) {
                        *(int *)(local_80 + 0x100044) = *(int *)(local_80 + 0x100044) + 1;
                        iVar4 = FUN_1003e91f2();
                        lVar6 = local_80;
                        if (iVar4 == -0x80) goto LAB_1003e5e2a;
                        if (iVar4 == 0) {
                          *(int *)(local_80 + 0x100044) = *(int *)(local_80 + 0x100044) + 1;
                          goto LAB_1003e5bd6;
                        }
                        uVar8 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar8,0x10);
                      }
                      else {
                        uVar8 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar8,0x10);
                      }
                      goto joined_r0x0001003e5c0f;
                    }
                  }
                }
              }
            }
          }
          else {
            uVar8 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar8,0x10);
joined_r0x0001003e5c0f:
            lVar6 = local_80;
            if (cVar2 != '\0') {
              uStack_70 = 1;
              uStack_74 = 0x7a0a90;
              local_6c = 0x400;
              local_78 = 0x8220202;
              local_6a = iVar4;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_78,0x12);
              lVar6 = local_80;
            }
          }
        }
      }
      else {
        *(undefined8 *)(lVar6 + 0x10003c) = 0x7500000002;
        *(undefined1 *)(lVar6 + 0x1000d8) = 1;
        iVar4 = FUN_1001601fd(&local_e8,0x7d000);
        if (iVar4 != -0x80) {
          if (iVar4 == 0) goto LAB_1003e598b;
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 != '\0') {
            local_78 = 0x8220202;
            uStack_74 = 0x7a0a90;
            uStack_70 = 1;
            local_6c = 0x400;
            local_6a = iVar4;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_78,0x12);
          }
        }
      }
LAB_1003e5e2a:
      *(undefined8 *)(lVar6 + 0x100000) = 0;
      if (*(long *)(lVar6 + 0x100130) != 0) {
        FUN_1001c64c1();
      }
      if ((local_84 >> 0x16 & 1) != 0) {
        FUN_10016013b(&local_e8);
      }
      FUN_1001c64c1(lVar6);
      goto LAB_1003e5811;
    }
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_4a = "buffer != nullptr";
      goto LAB_1003e57dd;
    }
  }
  FUN_1001782e9(0,0);
  iVar4 = -0x32;
LAB_1003e5811:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

