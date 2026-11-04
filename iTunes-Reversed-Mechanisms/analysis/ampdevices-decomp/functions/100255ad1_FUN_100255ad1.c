// name: FUN_100255ad1
// address: 100255ad1

void FUN_100255ad1(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x66d8) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "handlerData->podRef != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*(int *)(param_1 + 0x61f4) == 0) {
    uVar3 = FUN_1005e9a2c();
    uVar4 = FUN_10055ae0c(*(undefined8 *)(param_1 + 0x66d8));
    lVar5 = FUN_1005f1520(uVar3,uVar4);
    if (lVar5 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be not NULL)";
        local_3c = 0x822;
        local_3a = "restorableDeviceRef";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(1,0);
      if (cVar1 == '\0') goto LAB_100255ba6;
    }
    uVar2 = _AMRestorableDeviceGetBoardID(lVar5);
    *(undefined4 *)(param_1 + 0x61f0) = uVar2;
    uVar2 = _AMRestorableDeviceGetChipID(lVar5);
    *(undefined4 *)(param_1 + 0x61f4) = uVar2;
    FUN_10017060f(lVar5);
  }
LAB_100255ba6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

