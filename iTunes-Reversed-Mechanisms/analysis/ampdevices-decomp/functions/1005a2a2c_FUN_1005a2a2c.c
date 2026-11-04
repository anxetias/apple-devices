// name: FUN_1005a2a2c
// address: 1005a2a2c

void FUN_1005a2a2c(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x78) != 0) {
    *(undefined1 *)(param_1 + 0x7d) = 1;
    FUN_1005b08fa(param_1);
    if (*(int *)(param_1 + 0x78) != 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "mSpeechTaskFiberID == kInvalidFiberID";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  if (*(long *)(param_1 + 0x16b8) != 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mNuanceSession == nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(int *)(param_1 + 0x16b0) != 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mSessionRefCount == 0";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_1005a2cc6(param_1);
  if (*(long *)(param_1 + 0x80) != 0) {
    FUN_1001ecf9f();
  }
  FUN_1005a2d1e(param_1);
  FUN_10017060f(*(undefined8 *)(param_1 + 0x15e0));
  FUN_10017060f(*(undefined8 *)(param_1 + 0x10));
  FUN_10017060f(*(undefined8 *)(param_1 + 0x1570));
  FUN_10017060f(*(undefined8 *)(param_1 + 0x16a8));
  FUN_10017060f(*(undefined8 *)(param_1 + 0x15f0));
  FUN_10017060f(*(undefined8 *)(param_1 + 0x15d0));
  FUN_10017060f(*(undefined8 *)(param_1 + 0x15d8));
  FUN_1001e9d75(param_1 + 0x18);
  FUN_1001e9d75(param_1 + 0x88);
  FUN_100230408(*(undefined8 *)(param_1 + 0x1698));
  FUN_100230408(*(undefined8 *)(param_1 + 0x1680));
  FUN_100230408(*(undefined8 *)(param_1 + 0x1668));
  FUN_10039e992(param_1 + 0x60);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

