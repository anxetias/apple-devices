// name: FUN_1002005d3
// address: 1002005d3

undefined8
FUN_1002005d3(long *param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5,
             undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
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
LAB_100200800:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else if (param_2 == 0) {
LAB_10020073a:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
      goto LAB_100200800;
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
      if (cVar1 == '\0') goto LAB_10020073a;
    }
    if (*(char *)(param_2 + 0x35a) == '\0') {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_4a = "handlerData->deviceInfo.supportsBackupRestore";
        goto LAB_100200800;
      }
    }
    else {
      if (param_3 != 0) {
        *param_1 = param_2;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x66b0);
        _memcpy(param_1 + 2,(void *)(param_2 + 0x6b40),0x420);
        lVar3 = FUN_1001705fc(param_3);
        param_1[0xca] = lVar3;
        lVar3 = FUN_1001705fc(param_4);
        param_1[0xcb] = lVar3;
        lVar3 = FUN_1001705fc(*(undefined8 *)(param_2 + 0x152c8));
        param_1[0xcc] = lVar3;
        *(undefined4 *)(param_1 + 0xce) = param_5;
        FUN_100203686(param_1 + 0xcf,param_6);
        *(undefined4 *)((long)param_1 + 0x68c) = 0;
        uVar2 = 0;
        goto LAB_100200833;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_4a = "backupDict != nullptr";
        goto LAB_100200800;
      }
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_100200833:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

