// name: FUN_1002b732e
// address: 1002b732e

undefined8 FUN_1002b732e(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar1 == 0)) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (((*(byte *)(lVar1 + 0x1bb0) & 1) != 0) && (*(int *)(param_1 + 0x3c) == 0x46494c45)) {
    uVar2 = FUN_1002b458b();
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
      uVar4 = FUN_10027bef3(uVar2);
      return uVar4;
    }
    goto LAB_1002b741b;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return 0;
  }
LAB_1002b741b:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

