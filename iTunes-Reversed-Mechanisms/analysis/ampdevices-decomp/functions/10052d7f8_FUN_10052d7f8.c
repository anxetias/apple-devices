// name: FUN_10052d7f8
// address: 10052d7f8

long FUN_10052d7f8(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x524) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mHashResult.hashSize > 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    lVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = FUN_100170dc5(0,param_1 + 0x528);
    if (lVar2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "hashResult != __null";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      lVar2 = 0;
      FUN_1001782e9(0,0);
      FUN_100179a7b(*(undefined8 *)(param_1 + 0x518));
      *(undefined8 *)(param_1 + 0x518) = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

