// name: FUN_10039d35c
// address: 10039d35c

undefined4 FUN_10039d35c(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_6c8;
  char *local_6c4;
  undefined2 local_6bc;
  char *local_6ba;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x698) != 0x7572646d) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_6c8 = 0x8220202;
      local_6c4 = "Assertion failure (expected to be true)";
      local_6bc = 0x822;
      local_6ba = "updateRestoreDeviceSpec->magic == ((OSType) \'urdm\')";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_6c8,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_6c8 = 0x8220202;
        local_6c4 = "Assertion failure";
        local_6bc = 0x822;
        local_6ba = "::UpdateRestoreDeviceSpecIsValid(&mCurrentUpdateRestoreDeviceSpec)";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_6c8,0x16);
      }
      FUN_1001782e9(0,0);
      uVar2 = 0xffffffce;
      goto LAB_10039d469;
    }
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x6a0) + 0x10))();
  uStack_40 = 0;
  ___bzero(&local_6c8,0x684);
  ___bzero(param_1 + 0x18,0x671);
  if (*(long *)(param_1 + 0x690) == 0) {
    local_50 = 0;
  }
  else {
    _CFRelease();
  }
  *(undefined8 *)(param_1 + 0x690) = local_50;
  local_50 = 0;
  *(undefined4 *)(param_1 + 0x698) = local_48;
  *(undefined4 *)(param_1 + 0x69c) = uStack_44;
  *(undefined4 *)(param_1 + 0x6a0) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x6a4) = uStack_40._4_4_;
  FUN_10026340c(&local_50);
LAB_10039d469:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

