// name: FUN_100264ec8
// address: 100264ec8

void FUN_100264ec8(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100263428();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "ITIPodRefIsValid(iPod)";
LAB_100264fbb:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
LAB_100264f77:
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x28) == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_2a = "iPod->retainCount != 0";
        goto LAB_100264fbb;
      }
      goto LAB_100264f77;
    }
    iVar2 = *(int *)(param_1 + 0x28) + -1;
    *(int *)(param_1 + 0x28) = iVar2;
    if (iVar2 == 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
        FUN_100264fe7(param_1);
        return;
      }
      goto LAB_100264fe2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
LAB_100264fe2:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

