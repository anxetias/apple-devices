// name: FUN_100352b93
// address: 100352b93

void FUN_100352b93(int *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "inHandler != __null";
LAB_100352c67:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (*param_1 == 0x63737468) {
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
      FUN_1001c2470(param_1 + 2);
      param_1[1] = param_1[1] + 1;
      goto LAB_100352c2c;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "inHandler->magic == \'csth\'";
      goto LAB_100352c67;
    }
  }
  FUN_1001782e9(0,0);
LAB_100352c2c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

