// name: FUN_1005c4527
// address: 1005c4527

void FUN_1005c4527(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_3e;
  undefined2 local_36;
  undefined8 local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = 0;
  uVar2 = _CFNumberGetTypeID();
  lVar3 = FUN_1005ba383(param_1,&cf_com_apple_mobile_backup,&cf_LastCloudBackupDate,uVar2,0);
  if (lVar3 != 0) {
    cVar1 = FUN_100172017(lVar3,0xd,&local_50);
    if (cVar1 != '\0') {
      FUN_10017060f(lVar3);
      goto LAB_1005c45b8;
    }
  }
  FUN_10017060f(lVar3);
  local_50 = 0;
  cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
  if (cVar1 != '\0') {
    uVar2 = _AMDeviceCopyDeviceIdentifier(param_1);
    FUN_1001aaedc(&local_58,uVar2);
    local_48 = 0xe800000804000302;
    local_40 = 0x842;
    local_3e = local_58;
    local_36 = 0x800;
    local_34 = param_1;
    __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                        "failed to get LastCloudBackupDate (0x%08X) for device %{public}@ (%p)",
                        &local_48,0x1c);
    FUN_1001ab006(&local_58);
  }
LAB_1005c45b8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(local_50);
}

