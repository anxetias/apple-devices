// name: FUN_10055c08b
// address: 10055c08b

undefined8 FUN_10055c08b(undefined8 param_1,uint param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_468;
  char *local_464;
  undefined2 local_45c;
  int local_45a;
  undefined4 local_448;
  char *local_444;
  undefined2 local_43c;
  char *local_43a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (2 < param_2) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_448 = 0x8220202;
      local_444 = "Assertion failure";
      local_43c = 0x822;
      local_43a = 
      "wakeupResult == RESULT_DEVICE_AWAKE || wakeupResult == RESULT_OPERATION_EXPIRED || wakeupResult == RESULT_ASYNC_ERROR"
      ;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
    FUN_1001782e9(0,0);
  }
  cVar1 = FUN_100263428(param_3);
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_448 = 0x8220202;
      local_444 = "Assertion failure";
      local_43c = 0x822;
      local_43a = "ITIPodRefIsValid(podRef)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(uint *)(param_3 + 0x6df0) = param_2;
    if (param_2 == 0) {
      if (*(long *)(param_3 + 0x6de0) != 0) {
        cVar1 = FUN_10017cbd0(param_3 + 0x48);
        if (cVar1 == '\0') {
          iVar2 = FUN_10036f93f(*(undefined8 *)(param_3 + 0x6de0),&local_448);
          if (iVar2 != -0x80) {
            if (iVar2 != 0) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_468 = 0x8220202;
                local_464 = "Assertion failure";
                local_45c = 0x400;
                local_45a = iVar2;
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_468,0x12
                                   );
              }
              if (iVar2 != 0) goto LAB_10055c189;
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar3 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar1 != '\0') {
              local_464 = *(char **)(param_3 + 0x6dc8);
              local_468 = 0x8420102;
              __os_log_impl(0x100000000,uVar3,1,
                            "support> mounting device %{public}@ from wakeup callback",&local_468,
                            0xc);
            }
            FUN_100264a2f(param_3,&local_448);
            FUN_100264704(param_3,0x706f646d,0);
            if (*(char *)(param_3 + 0x6df4) != '\0') {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar3 = DAT_1008c75b8;
              cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar1 != '\0') {
                local_464 = *(char **)(param_3 + 0x6dc8);
                local_468 = 0x8420102;
                __os_log_impl(0x100000000,uVar3,1,"support> finished wakeup for device %{public}@",
                              &local_468,0xc);
              }
              *(undefined1 *)(param_3 + 0x6df4) = 0;
            }
          }
        }
      }
    }
    else {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar3 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar1 != '\0') {
        local_444 = *(char **)(param_3 + 0x6dc8);
        local_448 = 0x8420202;
        local_43c = 0x400;
        local_43a = (char *)CONCAT44(local_43a._4_4_,param_2);
        __os_log_impl(0x100000000,uVar3,0x10,"wakeup operation for device %{public}@ failed (%d)",
                      &local_448,0x12);
      }
    }
  }
LAB_10055c189:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

