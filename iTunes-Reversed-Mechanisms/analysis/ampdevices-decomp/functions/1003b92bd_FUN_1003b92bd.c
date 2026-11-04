// name: FUN_1003b92bd
// address: 1003b92bd

void FUN_1003b92bd(long param_1)

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
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "encoder != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x184);
    if (iVar2 < 1) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "encoder->useCount > 0";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = *(int *)(param_1 + 0x184);
    }
    *(int *)(param_1 + 0x184) = iVar2 + -1;
    if ((iVar2 + -1 == 0) && (*(long *)(param_1 + 0x30) == 0)) {
      if (*(long *)(param_1 + 400) != 0) {
        FUN_1003b8523();
        *(undefined8 *)(param_1 + 400) = 0;
      }
      *(undefined8 *)(param_1 + 0x188) = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

