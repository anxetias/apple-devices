// name: FUN_10046c38a
// address: 10046c38a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10046c38a(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar3 = *(char *)(param_1 + 0x70);
  if (cVar3 == '\x06') {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mState != ServiceState::eUninitializing";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001c1811(6);
    *(undefined1 *)(param_1 + 0x70) = 6;
    FUN_1004d82aa(param_1,6);
    if (*(char *)(param_1 + 0x70) == '\x06') {
      FUN_1002188e4(&DAT_1008c5470);
      _DAT_1008c5480 = 0xbff0000000000000;
      _DAT_1008c54b0 = 0;
      if (DAT_1008bf930 == '\x01') {
        FUN_1001c019a("litUAylD22AMPDevicesAgentService",1);
      }
      FUN_1001b1a6e();
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar5,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "mState == ServiceState::eUninitializing";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (DAT_1008c76a0 != 0) {
      if (cVar3 == '\x05') {
        FUN_100536365();
        if (DAT_1008bf928 != 0) {
          __LSUnscheduleNotificationFunction();
          DAT_1008bf928 = 0;
        }
        FUN_100178bf5(4,0);
        FUN_1003b8716(0x70727174,0);
        FUN_1004af9ee();
        FUN_1005e26d9(0,0);
        FUN_1005e27cb();
        lVar1 = DAT_1008c7598;
        while (lVar1 != 0) {
          lVar1 = *(long *)(lVar1 + 8);
          FUN_1003b8523();
        }
        DAT_1008bf920 = 0;
        FUN_1002188e4(&DAT_1008c54d0);
        FUN_10043dd6c();
        if (DAT_1008c77a8 != 0) {
          FUN_1002188e4(&DAT_1008c77a8);
        }
        if (DAT_1008c7af0._os_obj != (_os_object_s *)0x0) {
          _dispatch_release(DAT_1008c7af0);
          DAT_1008c7af0._os_obj = (_os_object_s *)0x0;
        }
        FUN_1001119bc();
        FUN_100178bf5(4,0);
        FUN_1004a7d04();
        if (DAT_1008c7588 != (long *)0x0) {
          (**(code **)(*DAT_1008c7588 + 0x40))();
          DAT_1008c7588 = (long *)0x0;
        }
        FUN_100132ead();
        FUN_100415213();
        FUN_10001b6b0();
        FUN_1001a5b00();
        FUN_1001cc8db();
        cVar3 = FUN_1001c6646(DAT_1008c76a0 + 0x15c8);
        puVar2 = DAT_1008c75b0;
        if (cVar3 != '\0') {
          FUN_1001c72e9(DAT_1008c76a0 + 0x15c8);
          puVar2 = DAT_1008c75b0;
        }
        while (puVar2 != (undefined8 *)0x0) {
          puVar2 = (undefined8 *)*puVar2;
          FUN_1001c64c1();
        }
        DAT_1008c75b0 = (undefined8 *)0x0;
        FUN_100178bf5(8,0);
      }
      FUN_100105c62();
      FUN_1001c040a();
      FUN_1003b791c(DAT_1008c76a0);
      DAT_1008c76a0 = 0;
      FUN_1001c3554();
      *(undefined1 *)(param_1 + 0x70) = 7;
      FUN_1004d82aa(param_1,7);
      FUN_1001c147c();
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        FUN_1001e8daa();
        return;
      }
      goto LAB_10046c6fb;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
LAB_10046c6fb:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

