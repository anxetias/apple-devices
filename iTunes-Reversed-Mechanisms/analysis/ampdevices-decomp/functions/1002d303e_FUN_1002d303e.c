// name: FUN_1002d303e
// address: 1002d303e

undefined8 FUN_1002d303e(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **local_a8;
  long local_a0;
  undefined ***local_88;
  undefined **local_78;
  long local_70;
  undefined ***local_58;
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
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "ITIPodRefIsValid(iPod)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if ((*(char *)(param_1 + 0x3c) == '\0') && (*(char *)(param_1 + 0x3f) == '\0')) {
    if (*(char *)(param_1 + 0x6d64) != '\0') {
      local_78 = &PTR_FUN_100852648;
      local_a8 = &PTR_FUN_1008526d8;
      local_a0 = param_1;
      local_88 = &local_a8;
      local_70 = param_1;
      local_58 = &local_78;
      uVar2 = FUN_100636177(*(undefined2 *)(param_1 + 0x24),&local_78,&local_a8,1);
      if (local_88 == &local_a8) {
        lVar3 = 0x20;
LAB_1002d31fe:
        (**(code **)((long)*local_88 + lVar3))();
      }
      else {
        lVar3 = 0x28;
        if (local_88 != (undefined ***)0x0) goto LAB_1002d31fe;
      }
      if (local_58 == &local_78) {
        lVar3 = 0x20;
      }
      else {
        lVar3 = 0x28;
        if (local_58 == (undefined ***)0x0) goto LAB_1002d30c7;
      }
      (**(code **)((long)*local_58 + lVar3))();
      goto LAB_1002d30c7;
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "iPod->isVirtualDevice == false && iPod->isAppleMobileDevice == false";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar2 = 0;
LAB_1002d30c7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

