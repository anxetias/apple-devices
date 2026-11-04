// name: FUN_10024f023
// address: 10024f023

undefined8 FUN_10024f023(undefined8 param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_58;
  int local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (int *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "outRecoveryProductTypeID != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  else {
    *param_3 = 0;
    FUN_1001c62d9(&local_58,0x10);
    lVar2 = FUN_100166b7f(param_1,&cf_MobileDeviceProductTypes);
    uVar4 = 0x5c6;
    if (lVar2 != 0) {
      lVar2 = FUN_100166b7f(lVar2,&cf_Recovery);
      if (lVar2 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "recoveryProductTypeIDsDictionary != nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        local_58 = param_2;
        FUN_1001714c2(lVar2,FUN_10024f1cc,&local_58);
        if (local_50 != 0) {
          *param_3 = local_50;
          uVar4 = 0;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

