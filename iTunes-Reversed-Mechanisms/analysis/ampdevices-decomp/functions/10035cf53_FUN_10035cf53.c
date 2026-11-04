// name: FUN_10035cf53
// address: 10035cf53

uint * FUN_10035cf53(uint *param_1,uint param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (uint *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "codecList != nullptr";
LAB_10035d033:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      uVar2 = (ulong)*param_1;
      if (uVar2 != 0) {
        param_1 = param_1 + 1;
        do {
          if (*param_1 == param_2) goto LAB_10035cff5;
          param_1 = param_1 + 9;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      param_1 = (uint *)0x0;
      goto LAB_10035cff5;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "codecType != kUnknownDeviceAudioCodecType";
      goto LAB_10035d033;
    }
  }
  param_1 = (uint *)0x0;
  FUN_1001782e9(0,0);
LAB_10035cff5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

