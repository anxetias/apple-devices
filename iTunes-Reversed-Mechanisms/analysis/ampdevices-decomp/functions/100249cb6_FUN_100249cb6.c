// name: FUN_100249cb6
// address: 100249cb6

void FUN_100249cb6(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5
                  ,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = param_6;
  param_1[1] = param_7;
  FUN_1001b7a44();
  param_1[6] = 0;
  param_1[8] = param_2;
  param_1[9] = param_3;
  *(undefined8 *)(param_1 + 0x12) = 0;
  param_1[0x14] = param_4;
  param_1[0x15] = param_5;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((param_3 == 0) == (param_2 == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 
      "((mobileDeviceDFUProductTypeID != 0) && (mobileDeviceRecoveryProductTypeID == 0)) || ((mobileDeviceDFUProductTypeID == 0) && (mobileDeviceRecoveryProductTypeID != 0))"
      ;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_1001c62d9(param_1 + 7,4);
  FUN_1001c62d9(param_1 + 10,0x20);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

