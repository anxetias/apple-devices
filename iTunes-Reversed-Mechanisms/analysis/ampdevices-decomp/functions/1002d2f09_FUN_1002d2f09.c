// name: FUN_1002d2f09
// address: 1002d2f09

undefined8 FUN_1002d2f09(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100263428();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "ITIPodRefIsValid(iPod)";
LAB_1002d3012:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (*(char *)(param_1 + 0x40) != '\0') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        uVar2 = FUN_100636d70(*(undefined4 *)(param_1 + 0x6d68),param_2,param_3);
        return uVar2;
      }
      goto LAB_1002d3039;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "iPod->isMassStorageDevice";
      goto LAB_1002d3012;
    }
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return 0xffffffce;
  }
LAB_1002d3039:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

