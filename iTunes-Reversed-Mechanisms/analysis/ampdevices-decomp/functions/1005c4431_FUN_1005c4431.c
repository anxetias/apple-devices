// name: FUN_1005c4431
// address: 1005c4431

undefined1 FUN_1005c4431(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined1 local_49;
  undefined4 local_48;
  int local_44;
  undefined2 local_40;
  undefined8 local_3e;
  undefined2 local_36;
  undefined8 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_49 = 0;
  iVar2 = FUN_1005bbcf4(param_1,&cf_com_apple_mobile_backup,&cf_CloudBackupEnabled);
  if (iVar2 != 0) {
    local_49 = 0;
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 != '\0') {
      uVar3 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(&local_58,uVar3);
      local_48 = 0x4000302;
      local_40 = 0x842;
      local_3e = local_58;
      local_36 = 0x800;
      local_44 = iVar2;
      local_34 = param_1;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "failed to get CloudBackupEnabled flag (0x%08X) for device %{public}@ (%p), assuming cloud backup is disabled"
                          ,&local_48,0x1c);
      FUN_1001ab006(&local_58);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return local_49;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

