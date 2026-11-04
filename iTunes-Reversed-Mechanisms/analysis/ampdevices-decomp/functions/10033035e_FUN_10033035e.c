// name: FUN_10033035e
// address: 10033035e

void FUN_10033035e(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 8) != 0x64756c63) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure (expected to be true)";
      local_2c = 0x822;
      local_2a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "DulcimerHandlerDataIsValid(handlerData)";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_10033042c;
    }
  }
  if (((*(int *)(param_1 + 0x6b10) == 0) && (*(int *)(param_1 + 0x167d8) == 0)) &&
     (*(int *)(param_1 + 0x166d4) - 7U < 3)) {
    FUN_10017060f(*(undefined8 *)(param_1 + 0x16830));
    *(undefined8 *)(param_1 + 0x16830) = 0;
    FUN_10017060f(*(undefined8 *)(param_1 + 0x16838));
    *(undefined8 *)(param_1 + 0x16838) = 0;
    FUN_10033470c(param_1,1,0);
  }
LAB_10033042c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

