// name: FUN_100589900
// address: 100589900

int FUN_100589900(long param_1,undefined1 param_2,undefined1 param_3,char param_4,long param_5)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  long local_ac0;
  undefined4 local_ab8;
  char *local_ab4;
  undefined2 local_aac;
  int local_aaa;
  undefined2 local_a98;
  undefined1 local_a96 [510];
  undefined1 local_898 [512];
  undefined1 local_698 [512];
  undefined4 local_498;
  char *local_494;
  undefined2 local_48c;
  char *local_48a;
  undefined1 local_46c [1076];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100589efb:
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48a = "TrackDataIsValid(trackData)";
LAB_100589f81:
      local_48c = 0x822;
      local_494 = "Assertion failure";
      local_498 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_498,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_498 = 0x8220202;
        local_494 = "Assertion failure (expected to be true)";
        local_48c = 0x822;
        local_48a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_498,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_100589efb;
    }
    if (param_5 != 0) {
      local_ac0 = 0;
      FUN_1003071cd(param_1);
      iVar3 = FUN_1001601fd(param_5,0x20000);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          iVar3 = FUN_1001f2303(FUN_1001f42e5,param_5,&local_ac0);
          if (iVar3 != -0x80) {
            if (iVar3 == 0) {
              iVar3 = FUN_1001f3a72(local_ac0);
              if (iVar3 != -0x80) {
                if (iVar3 == 0) {
                  iVar3 = FUN_1001f3883(local_ac0,0);
                  if (iVar3 != -0x80) {
                    if (iVar3 == 0) {
                      iVar3 = FUN_1001f3883(local_ac0,"Ringtones");
                      if (iVar3 != -0x80) {
                        if (iVar3 == 0) {
                          puVar5 = (undefined8 *)FUN_1002f930c(param_1);
                          if (puVar5 != (undefined8 *)0x0) {
                            do {
                              cVar2 = FUN_1002bcf4c(puVar5,param_2,param_3);
                              if ((((cVar2 != '\0') && (lVar6 = FUN_1005974ad(puVar5,0), lVar6 != 0)
                                   ) && (*(int *)(lVar6 + 0x3c) == 0x46494c45)) &&
                                 ((iVar3 = FUN_1002b0559(lVar6,0x42), iVar3 == 0 &&
                                  (iVar3 = FUN_1002b3b9a(lVar6,&local_498), iVar3 == 0)))) {
                                lVar6 = puVar5[0xb];
                                lVar7 = FUN_1002b5390();
                                iVar3 = FUN_10017d489(local_46c,local_698);
                                if (iVar3 != -0x80) {
                                  if (iVar3 == 0) {
                                    FUN_1001e5b77(local_698,local_898,0x200);
                                    iVar3 = FUN_1001f3883(local_ac0,local_898);
                                    if (iVar3 != 0) {
                                      if (iVar3 == -0x80) goto LAB_10058a315;
                                      uVar4 = FUN_1001cc310();
                                      cVar2 = _os_log_type_enabled(uVar4,0x10);
                                      if (cVar2 == '\0') goto LAB_10058a315;
                                      puVar8 = &local_ab8;
                                      local_ab8 = 0x8220202;
                                      local_ab4 = "Assertion failure";
                                      local_aac = 0x400;
                                      local_aaa = iVar3;
                                      goto LAB_10058a302;
                                    }
                                    uVar1 = *(ulong *)(lVar6 + 200);
                                    if (((lVar7 == 0) || (uVar1 >> 0x20 != 0)) ||
                                       (*(uint *)(lVar6 + 0x60) < 0xc7f3f080)) {
                                      FUN_1001e0b83(uVar1,&local_a98,0);
                                    }
                                    else {
                                      FUN_1001e0cbe(uVar1,&local_a98,0);
                                    }
                                    iVar3 = FUN_1001f2c28(local_ac0,"GUID",local_a96,local_a98);
                                    if (iVar3 != 0) {
                                      if (iVar3 == -0x80) goto LAB_10058a315;
                                      uVar4 = FUN_1001cc310();
                                      cVar2 = _os_log_type_enabled(uVar4,0x10);
                                      if (cVar2 == '\0') goto LAB_10058a315;
                                      puVar8 = &local_ab8;
                                      local_ab8 = 0x8220202;
                                      local_ab4 = "Assertion failure";
                                      local_aac = 0x400;
                                      local_aaa = iVar3;
                                      goto LAB_10058a302;
                                    }
                                    if ((param_4 != '\0') &&
                                       (iVar3 = FUN_1001f29da(local_ac0,"PID",*puVar5), iVar3 != 0))
                                    {
                                      if (iVar3 == -0x80) goto LAB_10058a315;
                                      uVar4 = FUN_1001cc310();
                                      cVar2 = _os_log_type_enabled(uVar4,0x10);
                                      if (cVar2 == '\0') goto LAB_10058a315;
                                      puVar8 = &local_ab8;
                                      local_ab8 = 0x8220202;
                                      local_ab4 = "Assertion failure";
                                      local_aac = 0x400;
                                      local_aaa = iVar3;
                                      goto LAB_10058a302;
                                    }
                                    iVar3 = FUN_1001f366d(local_ac0,"Name",param_1 + 0x1c10,
                                                          *(undefined4 *)(puVar5 + 0x1b));
                                    if (iVar3 != 0) {
                                      if (iVar3 == -0x80) goto LAB_10058a315;
                                      uVar4 = FUN_1001cc310();
                                      cVar2 = _os_log_type_enabled(uVar4,0x10);
                                      if (cVar2 == '\0') goto LAB_10058a315;
                                      puVar8 = &local_ab8;
                                      local_ab8 = 0x8220202;
                                      local_ab4 = "Assertion failure";
                                      local_aac = 0x400;
                                      local_aaa = iVar3;
                                      goto LAB_10058a302;
                                    }
                                    iVar3 = FUN_1001f366d(local_ac0,"Artist",param_1 + 0x1cb0,
                                                          *(undefined4 *)((long)puVar5 + 0xdc));
                                    if (iVar3 != 0) {
                                      if (iVar3 == -0x80) goto LAB_10058a315;
                                      uVar4 = FUN_1001cc310();
                                      cVar2 = _os_log_type_enabled(uVar4,0x10);
                                      if (cVar2 == '\0') goto LAB_10058a315;
                                      puVar8 = &local_ab8;
                                      local_ab8 = 0x8220202;
                                      local_ab4 = "Assertion failure";
                                      local_aac = 0x400;
                                      local_aaa = iVar3;
                                      goto LAB_10058a302;
                                    }
                                    iVar3 = FUN_1001f366d(local_ac0,"Album Artist",param_1 + 0x1cb0,
                                                          *(undefined4 *)(puVar5 + 0x1c));
                                    if (iVar3 != 0) {
                                      if (iVar3 == -0x80) goto LAB_10058a315;
                                      uVar4 = FUN_1001cc310();
                                      cVar2 = _os_log_type_enabled(uVar4,0x10);
                                      if (cVar2 == '\0') goto LAB_10058a315;
                                      puVar8 = &local_ab8;
                                      local_ab8 = 0x8220202;
                                      local_ab4 = "Assertion failure";
                                      local_aac = 0x400;
                                      local_aaa = iVar3;
                                      goto LAB_10058a302;
                                    }
                                    iVar3 = FUN_1001f366d(local_ac0,"Album",param_1 + 0x1c60,
                                                          *(undefined4 *)((long)puVar5 + 0xe4));
                                    if (iVar3 != 0) {
                                      if (iVar3 == -0x80) goto LAB_10058a315;
                                      uVar4 = FUN_1001cc310();
                                      cVar2 = _os_log_type_enabled(uVar4,0x10);
                                      if (cVar2 == '\0') goto LAB_10058a315;
                                      puVar8 = &local_ab8;
                                      local_ab8 = 0x8220202;
                                      local_ab4 = "Assertion failure";
                                      local_aac = 0x400;
                                      local_aaa = iVar3;
                                      goto LAB_10058a302;
                                    }
                                    iVar3 = FUN_1001f366d(local_ac0,"Genre",param_1 + 0x1df0,
                                                          *(undefined4 *)(puVar5 + 0x1e));
                                    if (iVar3 != 0) {
                                      if (iVar3 == -0x80) goto LAB_10058a315;
                                      uVar4 = FUN_1001cc310();
                                      cVar2 = _os_log_type_enabled(uVar4,0x10);
                                      if (cVar2 == '\0') goto LAB_10058a315;
                                      puVar8 = &local_ab8;
                                      local_ab8 = 0x8220202;
                                      local_ab4 = "Assertion failure";
                                      local_aac = 0x400;
                                      local_aaa = iVar3;
                                      goto LAB_10058a302;
                                    }
                                    iVar3 = FUN_1001f366d(local_ac0,"Sort Name",param_1 + 0x2430,
                                                          *(undefined4 *)(puVar5 + 0x35));
                                    if (iVar3 != 0) {
                                      if (iVar3 == -0x80) goto LAB_10058a315;
                                      uVar4 = FUN_1001cc310();
                                      cVar2 = _os_log_type_enabled(uVar4,0x10);
                                      if (cVar2 == '\0') goto LAB_10058a315;
                                      puVar8 = &local_ab8;
                                      local_ab8 = 0x8220202;
                                      local_ab4 = "Assertion failure";
                                      local_aac = 0x400;
                                      local_aaa = iVar3;
                                      goto LAB_10058a302;
                                    }
                                    iVar3 = FUN_1001f366d(local_ac0,"Sort Artist",param_1 + 0x24d0,
                                                          *(undefined4 *)(puVar5 + 0x36));
                                    if (iVar3 != 0) {
                                      if (iVar3 == -0x80) goto LAB_10058a315;
                                      uVar4 = FUN_1001cc310();
                                      cVar2 = _os_log_type_enabled(uVar4,0x10);
                                      if (cVar2 == '\0') goto LAB_10058a315;
                                      puVar8 = &local_ab8;
                                      local_ab8 = 0x8220202;
                                      local_ab4 = "Assertion failure";
                                      local_aac = 0x400;
                                      local_aaa = iVar3;
                                      goto LAB_10058a302;
                                    }
                                    iVar3 = FUN_1001f366d(local_ac0,"Sort Album Artist",
                                                          param_1 + 0x24d0,
                                                          *(undefined4 *)((long)puVar5 + 0x1b4));
                                    if (iVar3 != 0) {
                                      if (iVar3 == -0x80) goto LAB_10058a315;
                                      uVar4 = FUN_1001cc310();
                                      cVar2 = _os_log_type_enabled(uVar4,0x10);
                                      if (cVar2 == '\0') goto LAB_10058a315;
                                      puVar8 = &local_ab8;
                                      local_ab8 = 0x8220202;
                                      local_ab4 = "Assertion failure";
                                      local_aac = 0x400;
                                      local_aaa = iVar3;
                                      goto LAB_10058a302;
                                    }
                                    iVar3 = FUN_1001f366d(local_ac0,"Sort Album",param_1 + 0x2480,
                                                          *(undefined4 *)((long)puVar5 + 0x1ac));
                                    if (iVar3 != 0) {
                                      if (iVar3 == -0x80) goto LAB_10058a315;
                                      uVar4 = FUN_1001cc310();
                                      cVar2 = _os_log_type_enabled(uVar4,0x10);
                                      if (cVar2 == '\0') goto LAB_10058a315;
                                      puVar8 = &local_ab8;
                                      local_ab8 = 0x8220202;
                                      local_ab4 = "Assertion failure";
                                      local_aac = 0x400;
                                      local_aaa = iVar3;
                                      goto LAB_10058a302;
                                    }
                                    iVar3 = FUN_1001f29da(local_ac0,"Total Time",
                                                          *(undefined4 *)(lVar6 + 100));
                                    if (iVar3 != 0) {
                                      if (iVar3 == -0x80) goto LAB_10058a315;
                                      uVar4 = FUN_1001cc310();
                                      cVar2 = _os_log_type_enabled(uVar4,0x10);
                                      if (cVar2 == '\0') goto LAB_10058a315;
                                      puVar8 = &local_ab8;
                                      local_ab8 = 0x8220202;
                                      local_ab4 = "Assertion failure";
                                      local_aac = 0x400;
                                      local_aaa = iVar3;
                                      goto LAB_10058a302;
                                    }
                                    iVar3 = FUN_1001f24c1(local_ac0,"Purchased",lVar7 != 0);
                                    if (iVar3 != 0) {
                                      if (iVar3 == -0x80) goto LAB_10058a315;
                                      uVar4 = FUN_1001cc310();
                                      cVar2 = _os_log_type_enabled(uVar4,0x10);
                                      if (cVar2 == '\0') goto LAB_10058a315;
                                      puVar8 = &local_ab8;
                                      local_ab8 = 0x8220202;
                                      local_ab4 = "Assertion failure";
                                      local_aac = 0x400;
                                      local_aaa = iVar3;
                                      goto LAB_10058a302;
                                    }
                                    iVar3 = FUN_1001f3953(local_ac0);
                                    if (iVar3 != 0) {
                                      if (iVar3 == -0x80) goto LAB_10058a315;
                                      uVar4 = FUN_1001cc310();
                                      cVar2 = _os_log_type_enabled(uVar4,0x10);
                                      if (cVar2 == '\0') goto LAB_10058a315;
                                      puVar8 = &local_ab8;
                                      local_ab8 = 0x8220202;
                                      local_ab4 = "Assertion failure";
                                      local_aac = 0x400;
                                      local_aaa = iVar3;
                                      goto LAB_10058a302;
                                    }
                                  }
                                  else {
                                    uVar4 = FUN_1001cc310();
                                    cVar2 = _os_log_type_enabled(uVar4,0x10);
                                    if (cVar2 != '\0') {
                                      local_ab8 = 0x8220202;
                                      local_ab4 = "Assertion failure";
                                      local_aac = 0x400;
                                      local_aaa = iVar3;
                                      __os_log_error_impl(0x100000000,uVar4,0x10,
                                                          "%{public}s: err == (%d)",&local_ab8,0x12)
                                      ;
                                    }
                                  }
                                }
                              }
                              puVar5 = (undefined8 *)FUN_1002f9451(puVar5);
                            } while (puVar5 != (undefined8 *)0x0);
                          }
                          iVar3 = FUN_1001f3953(local_ac0);
                          if (iVar3 != -0x80) {
                            if (iVar3 == 0) {
                              iVar3 = FUN_1001f3953(local_ac0);
                              if (iVar3 != -0x80) {
                                if (iVar3 == 0) {
                                  iVar3 = FUN_1001f3c2b(local_ac0);
                                  if ((iVar3 != -0x80) && (iVar3 != 0)) {
                                    uVar4 = FUN_1001cc310();
                                    cVar2 = _os_log_type_enabled(uVar4,0x10);
                                    if (cVar2 != '\0') {
                                      puVar8 = &local_498;
                                      local_498 = 0x8220202;
                                      local_494 = "Assertion failure";
                                      local_48c = 0x400;
                                      local_48a = (char *)CONCAT44(local_48a._4_4_,iVar3);
                                      goto LAB_10058a302;
                                    }
                                  }
                                }
                                else {
                                  uVar4 = FUN_1001cc310();
                                  cVar2 = _os_log_type_enabled(uVar4,0x10);
                                  if (cVar2 != '\0') {
                                    puVar8 = &local_498;
                                    local_498 = 0x8220202;
                                    local_494 = "Assertion failure";
                                    local_48c = 0x400;
                                    local_48a = (char *)CONCAT44(local_48a._4_4_,iVar3);
LAB_10058a302:
                                    __os_log_error_impl(0x100000000,uVar4,0x10,
                                                        "%{public}s: err == (%d)",puVar8,0x12);
                                  }
                                }
                              }
                            }
                            else {
                              uVar4 = FUN_1001cc310();
                              cVar2 = _os_log_type_enabled(uVar4,0x10);
                              if (cVar2 != '\0') {
                                puVar8 = &local_498;
                                local_498 = 0x8220202;
                                local_494 = "Assertion failure";
                                local_48c = 0x400;
                                local_48a = (char *)CONCAT44(local_48a._4_4_,iVar3);
                                goto LAB_10058a302;
                              }
                            }
                          }
                        }
                        else {
                          uVar4 = FUN_1001cc310();
                          cVar2 = _os_log_type_enabled(uVar4,0x10);
                          if (cVar2 != '\0') {
                            puVar8 = &local_498;
                            local_498 = 0x8220202;
                            local_494 = "Assertion failure";
                            local_48c = 0x400;
                            local_48a = (char *)CONCAT44(local_48a._4_4_,iVar3);
                            goto LAB_10058a302;
                          }
                        }
                      }
                    }
                    else {
                      uVar4 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar4,0x10);
                      if (cVar2 != '\0') {
                        puVar8 = &local_498;
                        local_498 = 0x8220202;
                        local_494 = "Assertion failure";
                        local_48c = 0x400;
                        local_48a = (char *)CONCAT44(local_48a._4_4_,iVar3);
                        goto LAB_10058a302;
                      }
                    }
                  }
                }
                else {
                  uVar4 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar2 != '\0') {
                    puVar8 = &local_498;
                    local_498 = 0x8220202;
                    local_494 = "Assertion failure";
                    local_48c = 0x400;
                    local_48a = (char *)CONCAT44(local_48a._4_4_,iVar3);
                    goto LAB_10058a302;
                  }
                }
              }
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                puVar8 = &local_498;
                local_498 = 0x8220202;
                local_494 = "Assertion failure";
                local_48c = 0x400;
                local_48a = (char *)CONCAT44(local_48a._4_4_,iVar3);
                goto LAB_10058a302;
              }
            }
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            puVar8 = &local_498;
            local_498 = 0x8220202;
            local_494 = "Assertion failure";
            local_48c = 0x400;
            local_48a = (char *)CONCAT44(local_48a._4_4_,iVar3);
            goto LAB_10058a302;
          }
        }
      }
LAB_10058a315:
      FUN_100307383(param_1);
      if (local_ac0 != 0) {
        FUN_1001f23c4();
      }
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        FUN_10016013b(param_5);
      }
      goto LAB_10058a344;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48a = "buffer != nullptr";
      goto LAB_100589f81;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_10058a344:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

