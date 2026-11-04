// name: FUN_10025b7fa
// address: 10025b7fa

long * FUN_10025b7fa(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008a2e70 == 0) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "sService != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
  }
  *param_1 = DAT_1008a2e70;
  lVar2 = DAT_1008a2e78;
  param_1[1] = DAT_1008a2e78;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

