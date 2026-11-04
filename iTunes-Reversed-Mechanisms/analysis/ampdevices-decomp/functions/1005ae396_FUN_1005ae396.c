// name: FUN_1005ae396
// address: 1005ae396

undefined8
FUN_1005ae396(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5,
             undefined4 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_fffffffffffffd40;
  undefined4 uVar6;
  undefined8 in_stack_fffffffffffffd48;
  undefined4 uVar7;
  undefined8 in_stack_fffffffffffffd58;
  undefined1 local_280 [16];
  char *local_270;
  long local_268;
  char *local_260;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  char *local_24a;
  undefined2 local_242;
  char *local_240;
  undefined1 local_238 [512];
  long local_38;
  
  uVar6 = (undefined4)((ulong)in_stack_fffffffffffffd40 >> 0x20);
  uVar7 = (undefined4)((ulong)in_stack_fffffffffffffd48 >> 0x20);
  uVar3 = (undefined4)((ulong)in_stack_fffffffffffffd58 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_270 = param_2;
  cVar2 = FUN_1001ee041();
  local_268 = 0;
  if (cVar2 != '\0') {
    local_268 = param_1 + 0x88;
  }
  if (*(char *)(param_1 + 0x15a0) != '\0') {
    cVar2 = FUN_100537ef0(0);
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x15a0) == '\0') {
LAB_1005ae7ae:
        lVar1 = *(long *)(param_1 + 0x16b8);
        local_260 = param_3;
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar4 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        param_3 = local_260;
        if (lVar1 == 0) {
          if (cVar2 != '\0') {
            local_258 = 0x8420202;
            local_254 = local_260;
            local_24c = 0x842;
            local_24a = param_4;
            __os_log_impl(0x100000000,uVar4,1,
                          "speech> speaking \"%{public}@\" using Nuance voice (%{public}@)",
                          &local_258,0x16);
          }
          uVar4 = (**(code **)(**(long **)(param_1 + 0x1598) + 0x18))
                            (*(long **)(param_1 + 0x1598),param_3,param_4,param_5,param_8,param_9,
                             param_9,CONCAT44(uVar6,*(undefined4 *)(param_1 + 0x15a8)),
                             CONCAT44(uVar7,*(undefined4 *)(param_1 + 0x15ac)),local_268,param_11);
          uVar6 = (undefined4)((ulong)param_9 >> 0x20);
        }
        else {
          if (cVar2 != '\0') {
            local_258 = 0x8420302;
            local_254 = local_270;
            local_24c = 0x842;
            local_24a = local_260;
            local_242 = 0x842;
            local_240 = param_4;
            __os_log_impl(0x100000000,uVar4,1,
                          "speech> speaking \"%{public}@\" (\"%{public}@\") using Nuance voice (%{public}@)"
                          ,&local_258,0x20);
          }
          uVar5 = param_7;
          uVar4 = FUN_1002f6ce8(*(undefined8 *)(param_1 + 0x1598),*(undefined8 *)(param_1 + 0x16b8),
                                local_270,param_3,param_4,param_5,param_7,param_8,param_9,param_9,
                                CONCAT44(uVar3,*(undefined4 *)(param_1 + 0x15a8)),
                                *(undefined4 *)(param_1 + 0x15ac),local_268,param_11);
          uVar6 = (undefined4)((ulong)uVar5 >> 0x20);
        }
      }
      else {
        if (*(char *)(param_1 + 0x15a4) == '\0') {
LAB_1005ae648:
          if (*(char *)(param_1 + 0x15a5) != '\0') {
            cVar2 = FUN_100170633(param_4,&cf_en_US);
            if (cVar2 != '\0') {
              uVar3 = (**(code **)(**(long **)(param_1 + 0x1590) + 0x40))
                                (*(long **)(param_1 + 0x1590),local_238);
              local_260 = (char *)CONCAT44(local_260._4_4_,uVar3);
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar4 = DAT_1008c75b8;
              cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar2 != '\0') {
                FUN_1001b8dfc(local_280,local_238);
                local_24a = (char *)FUN_1001b83ae(local_280);
                local_258 = 0x8420302;
                local_24c = 0x822;
                local_242 = 0x842;
                local_254 = param_3;
                local_240 = param_4;
                __os_log_impl(0x100000000,uVar4,1,
                              "speech> speaking \"%{public}@\" using preferred system voice \"%{public}s\" (%{public}@)"
                              ,&local_258,0x20);
                FUN_1001b7a50(local_280);
              }
              if (((int)local_260 != -0x80) && ((int)local_260 != 0)) {
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 != '\0') {
                  local_258 = 0x8220202;
                  local_254 = "Assertion failure";
                  local_24c = 0x400;
                  local_24a = (char *)CONCAT44(local_24a._4_4_,(int)local_260);
                  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_258,
                                      0x12);
                }
              }
              uVar4 = (**(code **)(**(long **)(param_1 + 0x1590) + 0x18))
                                (*(long **)(param_1 + 0x1590),param_3,param_4,param_5,param_8,
                                 param_9,param_9,CONCAT44(uVar6,*(undefined4 *)(param_1 + 0x15a8)),
                                 CONCAT44(uVar7,*(undefined4 *)(param_1 + 0x15ac)),local_268,
                                 param_11);
              uVar6 = (undefined4)((ulong)param_9 >> 0x20);
              goto LAB_1005ae968;
            }
          }
          goto LAB_1005ae7ae;
        }
        cVar2 = (**(code **)(**(long **)(param_1 + 0x1590) + 0x50))
                          (*(long **)(param_1 + 0x1590),param_4);
        if (cVar2 == '\0') {
          if (*(char *)(param_1 + 0x15a0) == '\0') goto LAB_1005ae7ae;
          goto LAB_1005ae648;
        }
        uVar3 = (**(code **)(**(long **)(param_1 + 0x1590) + 0x38))
                          (*(long **)(param_1 + 0x1590),local_238);
        local_260 = (char *)CONCAT44(local_260._4_4_,uVar3);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar4 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar2 != '\0') {
          FUN_1001b8dfc(local_280,local_238);
          local_24a = (char *)FUN_1001b83ae(local_280);
          local_258 = 0x8420302;
          local_24c = 0x822;
          local_242 = 0x842;
          local_254 = param_3;
          local_240 = param_4;
          __os_log_impl(0x100000000,uVar4,1,
                        "speech> speaking \"%{public}@\" using default system voice \"%{public}s\" (%{public}@)"
                        ,&local_258,0x20);
          FUN_1001b7a50(local_280);
        }
        if (((int)local_260 != -0x80) && ((int)local_260 != 0)) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_258 = 0x8220202;
            local_254 = "Assertion failure";
            local_24c = 0x400;
            local_24a = (char *)CONCAT44(local_24a._4_4_,(int)local_260);
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_258,0x12);
          }
        }
        uVar4 = (**(code **)(**(long **)(param_1 + 0x1590) + 0x18))
                          (*(long **)(param_1 + 0x1590),param_3,param_4,param_5,param_8,param_9,
                           param_10,CONCAT44(uVar6,*(undefined4 *)(param_1 + 0x15a8)),
                           CONCAT44(uVar7,*(undefined4 *)(param_1 + 0x15ac)),local_268,param_11);
        uVar6 = (undefined4)((ulong)param_10 >> 0x20);
      }
LAB_1005ae968:
      if ((int)uVar4 == 0) {
        if (*(long *)(param_1 + 0x16b8) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_1002f7254(*(undefined8 *)(param_1 + 0x1598),*(long *)(param_1 + 0x16b8),
                                local_270,param_3,param_4,param_5,CONCAT44(uVar6,param_6),param_7);
        }
      }
      goto LAB_1005ae9ac;
    }
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar4 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_258 = 0x8420102;
    local_254 = param_3;
    __os_log_impl(0x100000000,uVar4,1,"speech> speaking \"%{public}@\" using default system voice",
                  &local_258,0xc);
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x1590) + 0x18))
                    (*(long **)(param_1 + 0x1590),param_3,param_4,param_5,param_8,param_9,param_9,
                     CONCAT44(uVar6,*(undefined4 *)(param_1 + 0x15a8)),
                     CONCAT44(uVar7,*(undefined4 *)(param_1 + 0x15ac)),local_268,param_11);
LAB_1005ae9ac:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

