// name: FUN_1002b0295
// address: 1002b0295

bool FUN_1002b0295(long param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "trackInstance != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    bVar5 = false;
    FUN_1001782e9(0,0);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x80);
    lVar3 = FUN_1001c6588();
    bVar5 = lVar1 != lVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

