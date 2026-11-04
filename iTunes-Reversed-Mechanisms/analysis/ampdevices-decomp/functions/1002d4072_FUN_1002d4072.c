// name: FUN_1002d4072
// address: 1002d4072

undefined8 FUN_1002d4072(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100263428();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "ITIPodRefIsValid(iPod)";
LAB_1002d415f:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x2c) != 0) {
      uVar3 = 0;
      iVar2 = *(int *)(param_1 + 0x2c) + -1;
      *(int *)(param_1 + 0x2c) = iVar2;
      if ((iVar2 == 0) && (*(char *)(param_1 + 0x42) != '\0')) {
        FUN_1002d61b2(param_1);
      }
      goto LAB_1002d4120;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "iPod->lockCount > 0";
      goto LAB_1002d415f;
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_1002d4120:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

