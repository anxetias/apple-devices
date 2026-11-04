// name: FUN_1002c473e
// address: 1002c473e

void FUN_1002c473e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1001723b0(&cf_Devices,&cf_com_apple_iPod,param_2,param_3);
  if (lVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "oldDevicesDict != nullptr";
LAB_1002c48a0:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    lVar3 = FUN_100171413(DAT_1008c4d90,0,lVar2);
    if (lVar3 != 0) {
      cVar1 = FUN_1004ff6f3(param_1,lVar3);
      if (cVar1 != '\0') {
        FUN_1001724e6(&cf_Devices,lVar3,&cf_com_apple_iPod,param_2,param_3);
        FUN_100159ff2(&cf_com_apple_iPod,param_2,param_3);
      }
      goto LAB_1002c484d;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "newDevicesDict != nullptr";
      goto LAB_1002c48a0;
    }
  }
  lVar3 = 0;
  FUN_1001782e9(0,0);
LAB_1002c484d:
  FUN_10017060f(lVar2);
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

