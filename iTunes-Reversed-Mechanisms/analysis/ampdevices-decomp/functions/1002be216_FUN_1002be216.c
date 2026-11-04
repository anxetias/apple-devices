// name: FUN_1002be216
// address: 1002be216

undefined8 FUN_1002be216(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "idList != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0;
  }
  else {
    plVar1 = (long *)param_1[1];
    param_1 = (long *)*param_1;
    plVar4 = param_1;
    for (; (param_1 != plVar1 && (plVar4 = param_1, *param_1 != param_2)); param_1 = param_1 + 1) {
      plVar4 = plVar1;
    }
    uVar3 = CONCAT71((int7)((ulong)plVar1 >> 8),plVar4 != plVar1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

