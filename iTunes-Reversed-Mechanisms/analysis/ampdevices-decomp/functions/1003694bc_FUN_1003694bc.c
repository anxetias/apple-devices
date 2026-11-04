// name: FUN_1003694bc
// address: 1003694bc

undefined8 FUN_1003694bc(long *param_1)

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
  if (param_1 == (long *)0x0) {
LAB_100369575:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffe4;
  }
  else {
    if ((int)param_1[0x10] != 0x74646174) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100369575;
    }
    if (param_1[0x599] != 0) {
      FUN_10036965e(param_1);
    }
    lVar3 = FUN_1002ecc60(&PTR_FUN_10088f890,param_1,0);
    param_1[0x599] = lVar3;
    if (lVar3 == 0) {
      uVar2 = 0xffffff94;
    }
    else {
      (**(code **)(*param_1 + 0x10))(param_1,0x7464676c,param_1,0,0);
      uVar2 = 0xffffff94;
      if (param_1[0x599] != 0) {
        uVar2 = 0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

