// name: FUN_1002ae434
// address: 1002ae434

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1002ae434(undefined8 param_1,int param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  int local_3c [2];
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_3c[0] = param_2;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3c[1] = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "inKey != 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",local_3c + 1,0x16);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = FUN_1002b7f7c(param_1,local_3c);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar2 + 0x18);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

