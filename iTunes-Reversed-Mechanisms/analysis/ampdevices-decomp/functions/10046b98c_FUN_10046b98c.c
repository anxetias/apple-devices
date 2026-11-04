// name: FUN_10046b98c
// address: 10046b98c

undefined4 FUN_10046b98c(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *local_50;
  undefined8 *local_48;
  long local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_88 = 0;
  local_78 = 0x2000000000;
  local_70 = 0;
  local_80 = &local_88;
  if (*(char *)(param_1 + 0x70) == '\x03') {
    cVar1 = FUN_1001edfc7();
    if (cVar1 == '\0') {
      _dispatch_sync(PTR___dispatch_main_q_10082cb60);
    }
    else {
      local_68 = PTR___NSConcreteStackBlock_10082caf0;
      local_60 = 0x42000000;
      local_58 = FUN_10046bb44;
      local_50 = &DAT_10085c120;
      local_48 = &local_88;
      local_40 = param_1;
      if (DAT_1008bf918 != -1) {
        _dispatch_once(&DAT_1008bf918,&local_68);
      }
    }
    uVar3 = *(undefined4 *)(local_80 + 3);
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mState == ServiceState::eRunningMinimal";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar3 = 0x234f;
    FUN_1001782e9(0,0);
  }
  __Block_object_dispose(&local_88,8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

