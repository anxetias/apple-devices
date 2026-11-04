// name: FUN_10058a90a
// address: 10058a90a

int FUN_10058a90a(long param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 local_cc4;
  long local_cc0;
  undefined4 local_cb8;
  char *local_cb4;
  undefined2 local_cac;
  int local_caa;
  undefined4 local_c98;
  char *local_c94;
  undefined2 local_c8c;
  char *local_c8a;
  int local_46c [269];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10058ac75:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_c8a = "TrackDataIsValid(trackData)";
LAB_10058acfb:
      local_c8c = 0x822;
      local_c94 = "Assertion failure";
      local_c98 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_c98,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_c98 = 0x8220202;
        local_c94 = "Assertion failure (expected to be true)";
        local_c8c = 0x822;
        local_c8a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_c98,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10058ac75;
    }
    if (param_2 != 0) {
      local_cc0 = 0;
      FUN_1003071cd(param_1);
      iVar3 = FUN_1001601fd(param_2,0x20000);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          iVar3 = FUN_1001f2303(FUN_1001f42e5,param_2,&local_cc0);
          if (iVar3 != -0x80) {
            if (iVar3 == 0) {
              iVar3 = FUN_1001f3a72(local_cc0);
              if (iVar3 != -0x80) {
                if (iVar3 == 0) {
                  iVar3 = FUN_1001f3883(local_cc0,0);
                  if (iVar3 != -0x80) {
                    if (iVar3 == 0) {
                      iVar3 = FUN_1001f3964(local_cc0,"Rentals");
                      if (iVar3 != -0x80) {
                        if (iVar3 == 0) {
                          lVar5 = FUN_1002f930c(param_1);
                          if (lVar5 != 0) {
                            do {
                              cVar1 = FUN_1002bd28d(lVar5);
                              if (((((cVar1 != '\0') && (lVar6 = FUN_1005974ad(lVar5,0), lVar6 != 0)
                                    ) && (*(int *)(lVar6 + 0x3c) == 0x46494c45)) &&
                                  ((iVar3 = FUN_1002b0559(lVar6), iVar3 == 0 &&
                                   (iVar3 = FUN_1002b3b9a(lVar6), iVar3 == 0)))) &&
                                 (iVar3 = FUN_10017dbe8(local_46c,0,&local_c98,0x400,&local_cc4),
                                 iVar3 != -0x80)) {
                                if (iVar3 == 0) {
                                  if (local_46c[0] == 0x41464350) {
                                    FUN_1001dfe56(&local_c98,local_cc4,0x2f,0x2f);
                                  }
                                  iVar3 = FUN_1001f3883(local_cc0,0);
                                  if (iVar3 != 0) {
                                    if (iVar3 == -0x80) goto LAB_10058b08f;
                                    uVar4 = FUN_1001cc310();
                                    cVar1 = _os_log_type_enabled(uVar4,0x10);
                                    if (cVar1 == '\0') goto LAB_10058b08f;
                                    puVar7 = &local_cb8;
                                    local_cb8 = 0x8220202;
                                    local_cb4 = "Assertion failure";
                                    local_cac = 0x400;
                                    local_caa = iVar3;
                                    goto LAB_10058b07c;
                                  }
                                  iVar3 = FUN_1001f366d(local_cc0,"Name",param_1 + 0x1c10,
                                                        *(undefined4 *)(lVar5 + 0xd8));
                                  if (iVar3 != 0) {
                                    if (iVar3 == -0x80) goto LAB_10058b08f;
                                    uVar4 = FUN_1001cc310();
                                    cVar1 = _os_log_type_enabled(uVar4,0x10);
                                    if (cVar1 == '\0') goto LAB_10058b08f;
                                    puVar7 = &local_cb8;
                                    local_cb8 = 0x8220202;
                                    local_cb4 = "Assertion failure";
                                    local_cac = 0x400;
                                    local_caa = iVar3;
                                    goto LAB_10058b07c;
                                  }
                                  iVar3 = FUN_1001f2c28(local_cc0,"Path",&local_c98,local_cc4);
                                  lVar6 = local_cc0;
                                  if (iVar3 != 0) {
                                    if (iVar3 == -0x80) goto LAB_10058b08f;
                                    uVar4 = FUN_1001cc310();
                                    cVar1 = _os_log_type_enabled(uVar4,0x10);
                                    if (cVar1 == '\0') goto LAB_10058b08f;
                                    puVar7 = &local_cb8;
                                    local_cb8 = 0x8220202;
                                    local_cb4 = "Assertion failure";
                                    local_cac = 0x400;
                                    local_caa = iVar3;
                                    goto LAB_10058b07c;
                                  }
                                  uVar2 = FUN_10047eee6(lVar5);
                                  uVar4 = FUN_10015009d(uVar2);
                                  iVar3 = FUN_1001f32a7(lVar6,"Kind",uVar4);
                                  if (iVar3 != 0) {
                                    if (iVar3 == -0x80) goto LAB_10058b08f;
                                    uVar4 = FUN_1001cc310();
                                    cVar1 = _os_log_type_enabled(uVar4,0x10);
                                    if (cVar1 == '\0') goto LAB_10058b08f;
                                    puVar7 = &local_cb8;
                                    local_cb8 = 0x8220202;
                                    local_cb4 = "Assertion failure";
                                    local_cac = 0x400;
                                    local_caa = iVar3;
                                    goto LAB_10058b07c;
                                  }
                                  iVar3 = FUN_1003186de(lVar5);
                                  if ((iVar3 != 0) &&
                                     (iVar3 = FUN_1001f29da(local_cc0,"Expiration Date",iVar3),
                                     iVar3 != 0)) {
                                    if (iVar3 == -0x80) goto LAB_10058b08f;
                                    uVar4 = FUN_1001cc310();
                                    cVar1 = _os_log_type_enabled(uVar4,0x10);
                                    if (cVar1 == '\0') goto LAB_10058b08f;
                                    puVar7 = &local_cb8;
                                    local_cb8 = 0x8220202;
                                    local_cb4 = "Assertion failure";
                                    local_cac = 0x400;
                                    local_caa = iVar3;
                                    goto LAB_10058b07c;
                                  }
                                  iVar3 = FUN_1001f3953(local_cc0);
                                  if (iVar3 != 0) {
                                    if (iVar3 == -0x80) goto LAB_10058b08f;
                                    uVar4 = FUN_1001cc310();
                                    cVar1 = _os_log_type_enabled(uVar4,0x10);
                                    if (cVar1 == '\0') goto LAB_10058b08f;
                                    puVar7 = &local_cb8;
                                    local_cb8 = 0x8220202;
                                    local_cb4 = "Assertion failure";
                                    local_cac = 0x400;
                                    local_caa = iVar3;
                                    goto LAB_10058b07c;
                                  }
                                }
                                else {
                                  uVar4 = FUN_1001cc310();
                                  cVar1 = _os_log_type_enabled(uVar4);
                                  if (cVar1 != '\0') {
                                    local_cb8 = 0x8220202;
                                    local_cb4 = "Assertion failure";
                                    local_cac = 0x400;
                                    local_caa = iVar3;
                                    __os_log_error_impl(0x100000000,uVar4,0x10,
                                                        "%{public}s: err == (%d)",&local_cb8,0x12);
                                  }
                                }
                              }
                              lVar5 = FUN_1002f9451(lVar5);
                            } while (lVar5 != 0);
                          }
                          iVar3 = FUN_1001f3a61(local_cc0);
                          if (iVar3 != -0x80) {
                            if (iVar3 == 0) {
                              iVar3 = FUN_1001f3953(local_cc0);
                              if (iVar3 != -0x80) {
                                if (iVar3 == 0) {
                                  iVar3 = FUN_1001f3c2b(local_cc0);
                                  if ((iVar3 != -0x80) && (iVar3 != 0)) {
                                    uVar4 = FUN_1001cc310();
                                    cVar1 = _os_log_type_enabled(uVar4,0x10);
                                    if (cVar1 != '\0') {
                                      puVar7 = &local_c98;
                                      local_c98 = 0x8220202;
                                      local_c94 = "Assertion failure";
                                      local_c8c = 0x400;
                                      local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar3);
                                      goto LAB_10058b07c;
                                    }
                                  }
                                }
                                else {
                                  uVar4 = FUN_1001cc310();
                                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                                  if (cVar1 != '\0') {
                                    puVar7 = &local_c98;
                                    local_c98 = 0x8220202;
                                    local_c94 = "Assertion failure";
                                    local_c8c = 0x400;
                                    local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar3);
LAB_10058b07c:
                                    __os_log_error_impl(0x100000000,uVar4,0x10,
                                                        "%{public}s: err == (%d)",puVar7,0x12);
                                  }
                                }
                              }
                            }
                            else {
                              uVar4 = FUN_1001cc310();
                              cVar1 = _os_log_type_enabled(uVar4,0x10);
                              if (cVar1 != '\0') {
                                puVar7 = &local_c98;
                                local_c98 = 0x8220202;
                                local_c94 = "Assertion failure";
                                local_c8c = 0x400;
                                local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar3);
                                goto LAB_10058b07c;
                              }
                            }
                          }
                        }
                        else {
                          uVar4 = FUN_1001cc310();
                          cVar1 = _os_log_type_enabled(uVar4,0x10);
                          if (cVar1 != '\0') {
                            puVar7 = &local_c98;
                            local_c98 = 0x8220202;
                            local_c94 = "Assertion failure";
                            local_c8c = 0x400;
                            local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar3);
                            goto LAB_10058b07c;
                          }
                        }
                      }
                    }
                    else {
                      uVar4 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar4,0x10);
                      if (cVar1 != '\0') {
                        puVar7 = &local_c98;
                        local_c98 = 0x8220202;
                        local_c94 = "Assertion failure";
                        local_c8c = 0x400;
                        local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar3);
                        goto LAB_10058b07c;
                      }
                    }
                  }
                }
                else {
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar1 != '\0') {
                    puVar7 = &local_c98;
                    local_c98 = 0x8220202;
                    local_c94 = "Assertion failure";
                    local_c8c = 0x400;
                    local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar3);
                    goto LAB_10058b07c;
                  }
                }
              }
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                puVar7 = &local_c98;
                local_c98 = 0x8220202;
                local_c94 = "Assertion failure";
                local_c8c = 0x400;
                local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar3);
                goto LAB_10058b07c;
              }
            }
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            puVar7 = &local_c98;
            local_c98 = 0x8220202;
            local_c94 = "Assertion failure";
            local_c8c = 0x400;
            local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar3);
            goto LAB_10058b07c;
          }
        }
      }
LAB_10058b08f:
      FUN_100307383(param_1);
      if (local_cc0 != 0) {
        FUN_1001f23c4();
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        FUN_10016013b(param_2);
      }
      goto LAB_10058b0ba;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_c8a = "buffer != nullptr";
      goto LAB_10058acfb;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_10058b0ba:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

