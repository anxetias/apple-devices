// name: FUN_1001fdd4d
// address: 1001fdd4d

undefined8 FUN_1001fdd4d(long *param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "context != nullptr";
LAB_1001fdedf:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else if (param_2 == 0) {
LAB_1001fde5f:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
      goto LAB_1001fdedf;
    }
  }
  else {
    if (*(int *)(param_2 + 8) != 0x64756c63) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1001fde5f;
    }
    if (*(char *)(param_2 + 0x35a) != '\0') {
      if (*(char *)(DAT_1008c76a0 + 0x1a94) == '\0') {
        cVar1 = FUN_1005458b5(param_2,1);
        if (cVar1 == '\0') {
          uVar2 = 0xffffff80;
        }
        else {
          *param_1 = param_2;
          *(undefined4 *)(param_1 + 1) = param_3;
          FUN_100203686(param_1 + 2,param_4);
          param_1[4] = 0;
          *(undefined1 *)(param_1 + 5) = 0;
          uVar2 = 0;
        }
      }
      else {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "gAppContext->deviceBackupsDisabled == false";
          __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        uVar2 = 0x494;
      }
      goto LAB_1001fdf12;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "handlerData->deviceInfo.supportsBackupRestore";
      goto LAB_1001fdedf;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_1001fdf12:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

