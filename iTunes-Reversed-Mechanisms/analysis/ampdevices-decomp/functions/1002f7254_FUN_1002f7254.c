// name: FUN_1002f7254
// address: 1002f7254

int FUN_1002f7254(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,undefined4 param_7,ulong param_8)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "sessionRef != nullptr";
LAB_1002f73cf:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else if (param_3 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "cfstrText != nullptr";
      goto LAB_1002f73cf;
    }
  }
  else {
    if (param_4 != 0) {
      if (*(code **)(param_1 + 0xa0) == (code *)0x0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "mUpdateSyncInfoProc != nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
        iVar4 = -4;
      }
      else {
        iVar4 = 0;
        iVar2 = (**(code **)(param_1 + 0xa0))
                          (param_2,param_3,param_4,param_5,param_6,param_7,
                           -(ulong)(param_8 == 0) | param_8);
        if (iVar2 != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_38 = 0x8220202;
            local_34 = "Assertion failure";
            local_2c = 0x822;
            local_2a = "libErr == eVVViTSLSuccess";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
          }
          FUN_1001782e9(0,0);
          iVar4 = iVar2 + 0x5dc;
        }
      }
      goto LAB_1002f7403;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "cfstrConditionedText != nullptr";
      goto LAB_1002f73cf;
    }
  }
  FUN_1001782e9(0,0);
  iVar4 = -0x32;
LAB_1002f7403:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

