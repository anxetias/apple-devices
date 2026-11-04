// name: FUN_1002226f9
// address: 1002226f9

undefined8
FUN_1002226f9(undefined8 param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 - 1U < 2) {
    if (*(char *)(param_3 + 0x28) != '\0' ||
        ((*(int *)(param_3 + 0x18) != 0 || *(int *)(param_3 + 0x20) != 0) ||
        *(int *)(param_3 + 0x24) != 0)) {
      if ((*(int *)(param_3 + 0x20) == 0 && *(int *)(param_3 + 0x24) == 0) &&
          *(char *)(param_3 + 0x28) == '\0') {
        cVar1 = FUN_10022130a(param_1,param_3,param_3,param_5,param_6);
      }
      else if (param_2 == 1) {
        cVar1 = FUN_1002216f4(param_1,param_3,param_4,param_5,param_6);
      }
      else {
        cVar1 = FUN_100221ce3(param_1,param_3,param_3,param_5,param_6);
      }
      uVar2 = 0x669;
      if (cVar1 != '\0') {
        uVar2 = 0;
      }
      goto LAB_10022280a;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = 
      "deviceUpdaterFamilyInfo.IsTraditionalIPod() || deviceUpdaterFamilyInfo.IsMobileDevice()";
      goto LAB_100222847;
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = 
      "(deviceSoftwareType == kDeviceSoftwareTypeUpdate) || (deviceSoftwareType == kDeviceSoftwareTypeRestore)"
      ;
LAB_100222847:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_10022280a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

