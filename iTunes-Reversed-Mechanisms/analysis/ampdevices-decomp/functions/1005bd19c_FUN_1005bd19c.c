// name: FUN_1005bd19c
// address: 1005bd19c

int FUN_1005bd19c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  int iStack_4a;
  undefined2 local_46;
  undefined8 local_44;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1005b98e2(param_1,&cf_com_apple_mobile_notification_proxy,0,&local_60);
  if (iVar2 == -0x80) goto LAB_1005bd260;
  if (iVar2 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x400;
      iStack_4a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    goto LAB_1005bd260;
  }
  iVar2 = _AMDSecurePostNotification(local_60,param_2,param_3);
  if (iVar2 == -0x80) {
LAB_1005bd21a:
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 != '\0') {
      uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(local_68,uVar3);
      local_58 = 0x4000302;
      uStack_50 = 0x842;
      uStack_4e = local_68._0_2_;
      uStack_4c = local_68._2_2_;
      iStack_4a = local_68._4_4_;
      local_46 = 0x800;
      local_54 = iVar2;
      local_44 = param_1;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "AMDPostNotification failed (0x%08X) for device %{public}@ (%p)",&local_58
                          ,0x1c);
      FUN_1001ab006(local_68);
    }
  }
  else if (iVar2 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x400;
      iStack_4a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    goto LAB_1005bd21a;
  }
  _AMDSecureShutdownNotificationProxy(local_60);
  FUN_10017060f(local_60);
LAB_1005bd260:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

