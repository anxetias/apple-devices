// name: FUN_1001ccca4
// address: 1001ccca4

void FUN_1001ccca4(undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  int local_2e;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  switch(param_3 << 0x1c | param_3 + 0x1ffffd90U >> 4) {
  case 0:
    cVar1 = FUN_1001cc660();
    if (cVar1 == '\0') {
      _IOCancelPowerChange(DAT_1008a22cc,param_4);
      uVar2 = FUN_1001cc35a();
      cVar1 = _os_log_type_enabled(uVar2,0);
      if (cVar1 == '\0') goto LAB_1001ccf10;
      pcVar3 = "pm) sys-can-sleep?   %u  -> denied";
    }
    else {
      _IOAllowPowerChange();
      uVar2 = FUN_1001cc35a();
      cVar1 = _os_log_type_enabled(uVar2,0);
      if (cVar1 == '\0') goto LAB_1001ccf10;
      pcVar3 = "pm) sys-can-sleep?   %u  -> ok";
    }
    uVar4 = 0;
    goto LAB_1001ccf05;
  case 1:
    uVar2 = FUN_1001cc35a();
    cVar1 = _os_log_type_enabled(uVar2,1);
    if (cVar1 != '\0') {
      local_38 = 0x4000100;
      local_34 = param_2;
      __os_log_impl(0x100000000,uVar2,1,"pm) sys-sleep        %u",&local_38,8);
    }
    FUN_1001cc72b();
    _IOAllowPowerChange(DAT_1008a22cc,param_4);
    goto LAB_1001ccf10;
  case 2:
    uVar2 = FUN_1001cc35a();
    cVar1 = _os_log_type_enabled(uVar2,1);
    if (cVar1 == '\0') goto LAB_1001ccf10;
    pcVar3 = "pm) sys-sleep-denied %u";
    break;
  default:
    uVar2 = FUN_1001cc35a();
    cVar1 = _os_log_type_enabled(uVar2,1);
    if (cVar1 == '\0') goto LAB_1001ccf10;
    local_38 = 0x4000200;
    local_30 = 0x400;
    pcVar3 = "pm) ???              %u  0x%x";
    uVar4 = 1;
    uVar5 = 0xe;
    local_2e = param_3;
    goto LAB_1001ccf0b;
  case 9:
    uVar2 = FUN_1001cc35a();
    cVar1 = _os_log_type_enabled(uVar2,1);
    if (cVar1 != '\0') {
      local_38 = 0x4000100;
      local_34 = param_2;
      __os_log_impl(0x100000000,uVar2,1,"pm) sys-wake         %u",&local_38,8);
    }
    FUN_1001cc76d();
    goto LAB_1001ccf10;
  case 0xb:
    uVar2 = FUN_1001cc35a();
    cVar1 = _os_log_type_enabled(uVar2,1);
    if (cVar1 == '\0') goto LAB_1001ccf10;
    pcVar3 = "pm) sys-will-wake    %u";
  }
  uVar4 = 1;
LAB_1001ccf05:
  local_38 = 0x4000100;
  uVar5 = 8;
LAB_1001ccf0b:
  local_34 = param_2;
  __os_log_impl(0x100000000,uVar2,uVar4,pcVar3,&local_38,uVar5);
LAB_1001ccf10:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

