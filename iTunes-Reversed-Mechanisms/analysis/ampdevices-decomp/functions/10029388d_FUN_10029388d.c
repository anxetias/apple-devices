// name: FUN_10029388d
// address: 10029388d

int FUN_10029388d(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,uint param_11,undefined8 param_12,char param_13)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 local_5b8 [8];
  undefined8 local_5b0;
  long *plStack_5a8;
  ulong local_530;
  undefined4 local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined8 local_510;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined8 local_4e8;
  byte local_4dc [4];
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined1 local_4c0 [1128];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4d8 = (long *)0x0;
  uStack_4d0 = (long *)0x0;
  local_5b0 = 0;
  plStack_5a8 = (long *)0x0;
  local_510 = param_2;
  local_4e8 = param_4;
  if (param_5 == 0x46494c45) {
    FUN_10017e137(param_6 + 0x2c,local_4c0,0);
  }
  *(undefined1 *)(param_1 + 0x6065) = 0;
  iVar6 = FUN_1002969d8(0,param_5,param_6,1,(param_13 != '\0') * '\x04' + '\x02',&local_4d8);
  if (iVar6 != -0x80) {
    if (iVar6 == 0) {
      if (*(char *)(param_1 + 0x6065) == '\0') {
        if (*(undefined8 **)(param_1 + 0xc88) == (undefined8 *)0x0) {
          if (param_11 == 0) goto LAB_100293949;
          iVar6 = (**(code **)(*local_4d8 + 0x118))(local_4d8,2,param_11 >> 1);
          if (iVar6 != -0x80) {
            if (iVar6 == 0) goto LAB_100293949;
            uVar7 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar7,0x10);
            if (cVar5 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
              goto LAB_100293d22;
            }
          }
        }
        else {
          iVar6 = (**(code **)(*local_4d8 + 0x120))(local_4d8,**(undefined8 **)(param_1 + 0xc88));
          if (iVar6 != -0x80) {
            if (iVar6 == 0) goto LAB_100293949;
            uVar7 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar7,0x10);
            if (cVar5 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
              goto LAB_100293d22;
            }
          }
        }
      }
      else {
LAB_100293949:
        puVar1 = (ulong *)(param_1 + 0xd40);
        iVar6 = (**(code **)(*local_4d8 + 0x100))(local_4d8,puVar1);
        if (iVar6 != -0x80) {
          if (iVar6 == 0) {
            local_508 = (undefined4)local_4d8;
            uStack_504 = local_4d8._4_4_;
            uStack_500 = (undefined4)uStack_4d0;
            uStack_4fc = uStack_4d0._4_4_;
            if (uStack_4d0 != (long *)0x0) {
              LOCK();
              uStack_4d0[1] = uStack_4d0[1] + 1;
              UNLOCK();
            }
            iVar6 = FUN_10042db01(&local_508,local_5b8,0,0);
            plVar4 = (long *)CONCAT44(uStack_4fc,uStack_500);
            if (plVar4 != (long *)0x0) {
              LOCK();
              plVar2 = plVar4 + 1;
              lVar3 = *plVar2;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (lVar3 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (iVar6 == 0) {
              if (local_530 != 0) {
                *puVar1 = local_530;
              }
              FUN_100426d30(local_5b8);
            }
            plVar4 = uStack_4d0;
            local_528 = (undefined4)local_4d8;
            uStack_524 = local_4d8._4_4_;
            uStack_520 = (undefined4)uStack_4d0;
            uStack_51c = uStack_4d0._4_4_;
            if (uStack_4d0 != (long *)0x0) {
              LOCK();
              uStack_4d0[1] = uStack_4d0[1] + 1;
              UNLOCK();
            }
            iVar6 = FUN_100298e0d(&local_528,param_3,local_4e8,0);
            if (plVar4 != (long *)0x0) {
              LOCK();
              plVar2 = plVar4 + 1;
              lVar3 = *plVar2;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (lVar3 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (iVar6 != -0x80) {
              if (iVar6 == 0) {
                iVar6 = (**(code **)(*local_4d8 + 0xf8))(local_4d8,(ulong *)(param_1 + 0xd38));
                if (iVar6 != -0x80) {
                  if (iVar6 == 0) {
                    if (*puVar1 < *(ulong *)(param_1 + 0xd38)) {
                      uVar7 = FUN_1001cc310();
                      cVar5 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar5 != '\0') {
                        local_58 = 0x8220202;
                        local_54 = "Assertion failure";
                        local_4c = 0x822;
                        local_4a = 
                        "connectionData->audioDataStartOffset <= connectionData->audioDataEndOffset"
                        ;
                        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",
                                            &local_58,0x16);
                      }
                      iVar6 = -0x27;
                      FUN_1001782e9(0,0);
                    }
                    else {
                      iVar6 = (**(code **)(*local_4d8 + 0xf0))(local_4d8,0);
                      if (iVar6 != -0x80) {
                        if (iVar6 == 0) {
                          local_4f8 = (undefined4)local_4d8;
                          uStack_4f4 = local_4d8._4_4_;
                          uStack_4f0 = (undefined4)uStack_4d0;
                          uStack_4ec = uStack_4d0._4_4_;
                          if (uStack_4d0 != (long *)0x0) {
                            LOCK();
                            uStack_4d0[1] = uStack_4d0[1] + 1;
                            UNLOCK();
                          }
                          FUN_100297013(&local_4f8,param_1 + 0x474,param_3,local_4e8,param_12,
                                        param_7,param_8,0,param_9,0,param_10,0,local_4dc,0);
                          FUN_10021e316(&local_4f8);
                          *(byte *)(param_1 + 0x6064) = local_4dc[0] & 1;
                          (**(code **)(*local_4d8 + 0xf8))(local_4d8,param_1 + 0xd48);
                          FUN_100203686(local_510,&local_4d8);
                          iVar6 = 0;
                          goto LAB_100293d4a;
                        }
                        uVar7 = FUN_1001cc310();
                        cVar5 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar5 != '\0') {
                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                          goto LAB_100293d22;
                        }
                      }
                    }
                  }
                  else {
                    uVar7 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar5 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                      goto LAB_100293d22;
                    }
                  }
                }
              }
              else {
                uVar7 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar7,0x10);
                if (cVar5 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                  goto LAB_100293d22;
                }
              }
            }
          }
          else {
            uVar7 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar7,0x10);
            if (cVar5 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
LAB_100293d22:
              local_4c = 0x400;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
      }
    }
    else {
      uVar7 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
        goto LAB_100293d22;
      }
    }
  }
  if (local_4d8 != (long *)0x0) {
    (**(code **)(*local_4d8 + 0x1d0))();
  }
LAB_100293d4a:
  if (plStack_5a8 != (long *)0x0) {
    LOCK();
    plVar4 = plStack_5a8 + 1;
    lVar3 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_5a8 + 0x10))(plStack_5a8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (uStack_4d0 != (long *)0x0) {
    LOCK();
    plVar4 = uStack_4d0 + 1;
    lVar3 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*uStack_4d0 + 0x10))(uStack_4d0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

