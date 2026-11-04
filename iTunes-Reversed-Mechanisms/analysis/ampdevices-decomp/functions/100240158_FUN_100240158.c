// name: FUN_100240158
// address: 100240158

undefined8
FUN_100240158(long param_1,undefined8 param_2,long param_3,long *param_4,undefined4 param_5)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_4a = "dragRef != __null";
LAB_1002402d0:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_100240276:
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    if ((param_4 == (long *)0x0 || param_3 == 0) || (lVar1 = *param_4, lVar1 == 0)) {
      uVar3 = FUN_1001cc310();
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_4a = "data != __null && dataSize != __null && *dataSize != 0";
        goto LAB_1002402d0;
      }
      goto LAB_100240276;
    }
    uVar3 = FUN_10023f756(param_1,param_2,param_5,param_4);
    if ((int)uVar3 == 0) {
      uVar3 = 0;
      if (*param_4 <= lVar1 && 0 < *param_4) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
          uVar3 = FUN_10023ebfe(param_1,param_2,param_5,param_3,param_4);
          return uVar3;
        }
        goto LAB_1002402fa;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
LAB_1002402fa:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

