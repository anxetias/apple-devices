// name: FUN_10026570c
// address: 10026570c

undefined8 FUN_10026570c(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100263428();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "ITIPodRefIsValid(iPod)";
      goto LAB_100265892;
    }
  }
  else {
    if (*(long *)(param_1 + 0x6e0) != 0) {
LAB_10026573d:
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        uVar2 = FUN_1001705fc();
        return uVar2;
      }
      goto LAB_1002658bc;
    }
    lVar3 = FUN_1002652df(param_1);
    if (lVar3 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_2a = "checkpointData != nullptr";
LAB_100265892:
        local_2c = 0x822;
        local_34 = "Assertion failure";
        local_38 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
    }
    else {
      uVar2 = FUN_10016a9bd(DAT_1008c4d90,lVar3,0,0);
      *(undefined8 *)(param_1 + 0x6e0) = uVar2;
      FUN_10017060f(lVar3);
      if (*(long *)(param_1 + 0x6e0) != 0) goto LAB_10026573d;
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_2a = "iPod->checkpointDict != nullptr";
        goto LAB_100265892;
      }
    }
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return 0;
  }
LAB_1002658bc:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

