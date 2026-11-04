// name: FUN_1005c68f3
// address: 1005c68f3

void FUN_1005c68f3(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_50 [8];
  undefined4 local_48;
  int iStack_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 uStack_3c;
  int iStack_3a;
  undefined2 local_36;
  undefined8 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = _AMDeviceDisconnect();
  if (iVar2 == 0) goto LAB_1005c69f2;
  if (iVar2 == -0x80) {
LAB_1005c69dd:
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 == '\0') goto LAB_1005c69f2;
    uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
    FUN_1001aaedc(local_50,uVar3);
    local_48 = 0x4000302;
    local_40 = 0x842;
    local_3e = local_50._0_2_;
    uStack_3c = local_50._2_2_;
    iStack_3a = local_50._4_4_;
    local_36 = 0x800;
    iStack_44 = iVar2;
    local_34 = param_1;
    __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                        "AMDeviceDisconnect failed (0x%08X) for device %{public}@ (%p)",&local_48,
                        0x1c);
  }
  else {
    if (iVar2 != -0x17fffff5) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        iStack_44 = 0x7a0a90;
        local_40 = 1;
        local_3e = 0;
        uStack_3c = 0x400;
        iStack_3a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
      goto LAB_1005c69dd;
    }
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
    if (cVar1 == '\0') goto LAB_1005c69f2;
    uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
    FUN_1001aaedc(local_50,uVar3);
    local_48 = 0x4000302;
    iStack_44 = -0x17fffff5;
    local_40 = 0x842;
    local_3e = local_50._0_2_;
    uStack_3c = local_50._2_2_;
    iStack_3a = local_50._4_4_;
    local_36 = 0x800;
    local_34 = param_1;
    __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                  "AMDeviceDisconnect returned 0x%08X for device %{public}@ (%p), ignoring",
                  &local_48,0x1c);
  }
  FUN_1001ab006(local_50);
LAB_1005c69f2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

