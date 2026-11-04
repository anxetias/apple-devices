// name: FUN_1002d9254
// address: 1002d9254

/* WARNING: Removing unreachable block (ram,0x0001002d9ab5) */
/* WARNING: Removing unreachable block (ram,0x0001002d9d0f) */
/* WARNING: Removing unreachable block (ram,0x0001002d9e7a) */
/* WARNING: Removing unreachable block (ram,0x0001002d9d2c) */
/* WARNING: Removing unreachable block (ram,0x0001002d9b00) */
/* WARNING: Removing unreachable block (ram,0x0001002d9b29) */
/* WARNING: Removing unreachable block (ram,0x0001002d9ec8) */
/* WARNING: Removing unreachable block (ram,0x0001002d9b46) */

int FUN_1002d9254(long *param_1,undefined4 param_2,long param_3,long param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong *puVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  bool bVar14;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined4 local_84;
  long *local_80;
  long local_78;
  uint local_6c;
  ulong local_68;
  long *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_38 = lVar5;
  if (param_5 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "outputKeybagData != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *param_5 = 0;
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = 0;
    }
    if (param_1 == (long *)0x0) {
LAB_1002d9365:
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "DulcimerHandlerDataIsValid(handlerData)";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      if ((int)param_1[1] != 0x64756c63) {
        local_60 = param_1;
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure (expected to be true)";
          local_4c = 0x822;
          local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        lVar5 = FUN_1001782e9(0,1);
        param_1 = local_60;
        if ((char)lVar5 == '\0') goto LAB_1002d9365;
      }
      if (*(char *)((long)param_1 + 0x15429) != '\0') {
        local_80 = (long *)CONCAT44(local_80._4_4_,param_2);
        if ((((char)param_2 == '\0') && (*(char *)((long)param_1 + 0x37c) == '\0')) ||
           (*(char *)((long)param_1 + 0x6ae7) != '\0')) {
          iVar3 = 0;
          local_84 = 0;
          if ((int)param_1[0x2a89] == 0) goto LAB_1002d93b9;
        }
        else {
          iVar3 = 1;
          local_84 = (undefined4)CONCAT71((int7)((ulong)lVar5 >> 8),1);
        }
        uVar2 = 0;
        local_90 = 0;
        local_78 = 0;
        if (param_1[0x2af3] != 0) {
          FUN_1000bfd00();
          param_1[0x2af3] = 0;
          *(undefined4 *)(param_1 + 0x2af4) = 0;
        }
        if ((char)local_84 == '\0') {
          uVar4 = 0;
          local_a0 = 0;
          local_a8 = 0;
        }
        else {
          uVar2 = 0;
          if (param_3 == 0) {
            local_a0 = 0;
            local_a8 = 0;
          }
          else {
            local_a8 = FUN_100170f3b(param_3);
            local_a0 = FUN_100170ef7(param_3);
          }
          if (param_4 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_100170f3b(param_4);
            uVar2 = FUN_100170ef7(param_4);
          }
        }
        iVar3 = FUN_1002d834e(param_1,iVar3,0,&local_90,&local_78);
        if (iVar3 != -0x80) {
          if (iVar3 == 0) {
            iVar3 = FUN_1000a52e0(local_78,local_a8,local_a0,uVar4,uVar2);
            if (iVar3 != -0x80) {
              if (iVar3 == 0) {
                local_68 = 0;
                local_6c = 0;
                local_60 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
                if (local_60 == (long *)0x0) {
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "userIDs != nullptr";
                    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                else {
                  local_60[1] = 0;
                  local_60[2] = 0;
                  *local_60 = (long)(local_60 + 1);
                  iVar3 = FUN_1002db96b(param_1,0,local_a8,local_a0,&local_68,&local_6c);
                  if ((iVar3 == 0) && (local_6c != 0)) {
                    lVar5 = 0;
                    uVar13 = 0;
                    do {
                      FUN_1002b7e7c(local_60,local_68 + lVar5);
                      uVar13 = uVar13 + 1;
                      lVar5 = lVar5 + 0x10;
                    } while (uVar13 < local_6c);
                  }
                  if (local_68 != 0) {
                    FUN_1000bfd00();
                  }
                }
                if ((int)param_1[0x2a89] != 0) {
                  puVar10 = (ulong *)(param_1 + 0x2a8a);
                  uVar13 = 0;
                  do {
                    local_68 = *puVar10;
                    if ((local_68 != 0) &&
                       (iVar3 = FUN_1000468b0(local_78,local_68,0), iVar3 != -0x80)) {
                      if (iVar3 == 0) {
                        FUN_1002b7e7c(local_60,&local_68);
                      }
                      else {
                        uVar4 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar4,0x10);
                        if (cVar1 != '\0') {
                          local_58 = 0x8220202;
                          local_54 = "Assertion failure";
                          local_4c = 0x400;
                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",
                                              &local_58,0x12);
                        }
                      }
                    }
                    uVar13 = uVar13 + 1;
                    puVar10 = puVar10 + 2;
                  } while (uVar13 < *(uint *)(param_1 + 0x2a89));
                }
                cVar1 = *(char *)((long)param_1 + 0x37c);
                plVar11 = local_60;
                if (cVar1 == '\0' || (char)local_80 != '\0') {
LAB_1002d99fd:
                  if (cVar1 != '\0') goto LAB_1002d9a01;
                }
                else {
                  if (*(char *)((long)param_1 + 0x6ae7) == '\0') {
                    local_80 = local_60 + 1;
                    plVar6 = (long *)*local_60;
                    if ((long *)*local_60 != local_80) {
                      do {
                        plVar8 = (long *)plVar6[1];
                        plVar7 = plVar6;
                        if ((long *)plVar6[1] == (long *)0x0) {
                          do {
                            plVar9 = (long *)plVar7[2];
                            bVar14 = (long *)*plVar9 != plVar7;
                            plVar7 = plVar9;
                          } while (bVar14);
                        }
                        else {
                          do {
                            plVar9 = plVar8;
                            plVar8 = (long *)*plVar9;
                          } while ((long *)*plVar9 != (long *)0x0);
                        }
                        local_68 = plVar6[4];
                        if ((ulong)*(uint *)(param_1 + 0x2a89) != 0) {
                          lVar5 = 0;
                          do {
                            if (*(ulong *)((long)param_1 + lVar5 + 0x15450) == local_68) {
                              if (*(char *)((long)param_1 + lVar5 + 0x15458) != '\0')
                              goto LAB_1002d99a7;
                              break;
                            }
                            lVar5 = lVar5 + 0x10;
                          } while ((ulong)*(uint *)(param_1 + 0x2a89) << 4 != lVar5);
                        }
                        uVar2 = FUN_10041576c(local_90);
                        iVar3 = FUN_1000e0dc0(uVar2,local_68,0);
                        plVar11 = local_60;
                        if ((iVar3 != 0) &&
                           (iVar3 = FUN_1000ca3d0(local_78,local_68,0), plVar11 = local_60,
                           iVar3 != -0x80)) {
                          if (iVar3 == 0) {
                            FUN_1002dbb04(local_60,&local_68);
                            plVar11 = local_60;
                          }
                          else {
                            uVar4 = FUN_1001cc310();
                            cVar1 = _os_log_type_enabled(uVar4,0x10);
                            plVar11 = local_60;
                            if (cVar1 != '\0') {
                              local_58 = 0x8220202;
                              local_54 = "Assertion failure";
                              local_4c = 0x400;
                              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",
                                                  &local_58,0x12);
                            }
                          }
                        }
LAB_1002d99a7:
                        plVar6 = plVar9;
                      } while (plVar9 != local_80);
                      cVar1 = *(char *)((long)param_1 + 0x37c);
                      goto LAB_1002d99fd;
                    }
                  }
LAB_1002d9a01:
                  if (*(char *)((long)param_1 + 0x337) == '\0') {
                    uVar2 = FUN_10041576c(local_90);
                    iVar3 = FUN_1000da880(uVar2,0,&local_6c);
                    plVar11 = local_60;
                    if (iVar3 != -0x80) {
                      if (iVar3 == 0) {
                        if (local_6c != 0) {
                          local_80 = local_60 + 1;
                          uVar12 = 0;
                          do {
                            uVar2 = FUN_10041576c(local_90);
                            iVar3 = FUN_100030490(uVar2,0,uVar12,&local_68);
                            plVar11 = local_60;
                            if (iVar3 != -0x80) {
                              if (iVar3 == 0) {
                                if (((char)local_84 == '\0') &&
                                   (plVar6 = (long *)*local_80, plVar8 = local_80,
                                   plVar6 != (long *)0x0)) {
                                  do {
                                    if ((ulong)plVar6[4] >= local_68) {
                                      plVar8 = plVar6;
                                    }
                                    plVar6 = (long *)plVar6[(ulong)plVar6[4] < local_68];
                                  } while (plVar6 != (long *)0x0);
                                  if ((plVar8 != local_80) && ((ulong)plVar8[4] <= local_68))
                                  goto LAB_1002d9cbb;
                                }
                                FUN_1002b7e7c(local_60);
                                plVar11 = local_60;
                                if (((ulong)local_60[2] < 6) &&
                                   ((iVar3 = FUN_1000468b0(local_78,local_68,1), plVar11 = local_60,
                                    iVar3 != -0x80 && (iVar3 != 0)))) {
                                  uVar4 = FUN_1001cc310();
                                  cVar1 = _os_log_type_enabled(uVar4);
                                  plVar11 = local_60;
                                  if (cVar1 != '\0') {
                                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                                    goto LAB_1002d9cfe;
                                  }
                                }
                              }
                              else {
                                uVar4 = FUN_1001cc310();
                                cVar1 = _os_log_type_enabled(uVar4);
                                plVar11 = local_60;
                                if (cVar1 != '\0') {
                                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
LAB_1002d9cfe:
                                  plVar11 = local_60;
                                  local_4c = 0x400;
                                  local_54 = "Assertion failure";
                                  local_58 = 0x8220202;
                                  __os_log_error_impl(0x100000000,uVar4,0x10,
                                                      "%{public}s: err == (%d)",&local_58,0x12);
                                }
                              }
                            }
LAB_1002d9cbb:
                            uVar12 = uVar12 + 1;
                          } while (uVar12 < local_6c);
                        }
                      }
                      else {
                        uVar4 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar4,0x10);
                        plVar11 = local_60;
                        if (cVar1 != '\0') {
                          local_58 = 0x8220202;
                          local_54 = "Assertion failure";
                          local_4c = 0x400;
                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",
                                              &local_58,0x12);
                        }
                      }
                    }
                  }
                }
                if (plVar11 != (long *)0x0) {
                  FUN_1002a41f4(plVar11,plVar11[1]);
                  operator_delete(plVar11);
                }
                iVar3 = FUN_1002db96b(param_1,local_78,0,0,param_1 + 0x2af3,param_1 + 0x2af4);
                if ((iVar3 != -0x80) && (iVar3 != 0)) {
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                }
                FUN_1002d8fc9();
                local_78 = 0;
                iVar3 = 0;
              }
              else {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                  goto LAB_1002d96f9;
                }
              }
            }
          }
          else {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
LAB_1002d96f9:
              local_4c = 0x400;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
        if (local_78 != 0) {
          FUN_1002d8fc9();
        }
        FUN_1000bfd00(0);
        FUN_1000bfd00(0);
        goto LAB_1002d93b9;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "handlerData->appleUserIDListValid";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  iVar3 = -0x32;
LAB_1002d93b9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

