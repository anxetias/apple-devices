// name: FUN_100395408
// address: 100395408

void FUN_100395408(undefined8 param_1,undefined8 param_2)

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
  lVar2 = FUN_100166844(param_1,PTR_cf_assetUUIDs_10086f588);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "assetUUIDArray != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = FUN_10017076e(lVar2);
    if (0 < lVar2) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        FUN_1001709a5(param_2,param_1);
        return;
      }
      goto LAB_1003954f2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
LAB_1003954f2:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

