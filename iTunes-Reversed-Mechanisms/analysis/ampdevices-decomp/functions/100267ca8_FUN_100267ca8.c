// name: FUN_100267ca8
// address: 100267ca8

undefined8 FUN_100267ca8(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_4e [5];
  undefined1 local_49;
  undefined4 local_48;
  int local_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100263428();
  if (cVar1 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_3a = "ITIPodRefIsValid(iPod)";
LAB_100267e61:
      uStack_3c = 0x822;
      uStack_3e = 0;
      uStack_40 = 1;
      local_44 = 0x7a0a90;
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_100267e86:
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    if (param_2 == (undefined1 *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_3a = "batteryState != nullptr";
        goto LAB_100267e61;
      }
      goto LAB_100267e86;
    }
    *param_2 = 0;
    if (param_3 == (undefined1 *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_3a = "batteryPercent != nullptr";
        goto LAB_100267e61;
      }
      goto LAB_100267e86;
    }
    *param_3 = 0xff;
    uVar5 = 0xfffffffc;
    if (*(char *)(param_1 + 0x3c) == '\0') {
      if (*(char *)(param_1 + 0x3f) == '\0') {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
          uVar5 = FUN_1002d327d(param_1,param_2,param_3);
          return uVar5;
        }
        goto LAB_100267f0d;
      }
      uVar4 = FUN_10055ae0c(param_1);
      iVar3 = FUN_1005bda08(uVar4,local_4e);
      if (iVar3 == 0) {
        *param_3 = local_49;
        uVar2 = FUN_100267f12();
        *param_2 = uVar2;
        uVar5 = 0;
      }
      else {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar4 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x4000200;
          uStack_40 = 0x400;
          uStack_3e = (undefined2)iVar3;
          uStack_3c = (undefined2)((uint)iVar3 >> 0x10);
          local_44 = iVar3;
          __os_log_impl(0x100000000,uVar4,0x10,"MobileDeviceGetBatteryInfo failed (%d / 0x%08X)",
                        &local_48,0xe);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar5;
  }
LAB_100267f0d:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

