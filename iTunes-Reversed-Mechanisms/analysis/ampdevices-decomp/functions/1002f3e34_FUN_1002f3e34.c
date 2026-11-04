// name: FUN_1002f3e34
// address: 1002f3e34

void FUN_1002f3e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1002f348c(param_2,param_4,0,0);
  if (lVar2 != 0) {
    lVar2 = FUN_1002f3636(lVar2);
    if (lVar2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_238 = 0x8220202;
        local_234 = "Assertion failure";
        local_22c = 0x822;
        local_22a = "value != nullptr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_238,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      FUN_1001e115f(lVar2,&local_238);
      FUN_1001e6a04(&local_238);
      FUN_100168550(param_1,param_3,&local_238,0);
      FUN_10017060f(lVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

