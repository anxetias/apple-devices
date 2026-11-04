// name: FUN_100209980
// address: 100209980

long FUN_100209980(long param_1)

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
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "appInfoDict != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    lVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar2 = FUN_100166b7f(param_1,&cf_LocalizedNames);
    lVar3 = FUN_100209a79(uVar2);
    if (lVar3 == 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        lVar3 = FUN_100166c1b(param_1,&cf_Name);
        return lVar3;
      }
      goto LAB_100209a74;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return lVar3;
  }
LAB_100209a74:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

