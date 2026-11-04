// name: FUN_1002d783e
// address: 1002d783e

undefined4 FUN_1002d783e(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = *(int *)(*(long *)(param_1 + 8) + 0x6d6c);
  if (iVar2 == 0) {
    iVar2 = FUN_1006352f4(*(undefined4 *)(*(long *)(param_1 + 8) + 0x6d68));
    *(int *)(*(long *)(param_1 + 8) + 0x6d6c) = iVar2;
    if (iVar2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "iPod->usbDeviceObject != 0";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = *(int *)(*(long *)(param_1 + 8) + 0x6d6c);
      if (iVar2 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure (expected to be true)";
          local_2c = 0x822;
          local_2a = "iPod->usbDeviceObject != ((io_object_t) 0)";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        cVar1 = FUN_1001782e9(0,0);
        if (cVar1 == '\0') goto LAB_1002d78ec;
        iVar2 = *(int *)(*(long *)(param_1 + 8) + 0x6d6c);
      }
    }
  }
  _IOObjectRetain(iVar2);
LAB_1002d78ec:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return *(undefined4 *)(*(long *)(param_1 + 8) + 0x6d6c);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

