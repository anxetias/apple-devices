// name: FUN_1002c13d4
// address: 1002c13d4

void FUN_1002c13d4(long *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "nameList != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar1 = *param_1;
    lVar4 = param_1[1];
    while (lVar4 != lVar1) {
      lVar4 = lVar4 + -0x10;
      FUN_1001b7a50(lVar4);
    }
    param_1[1] = lVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

