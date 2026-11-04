// name: FUN_100264a2f
// address: 100264a2f

int FUN_100264a2f(long param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined4 local_4c8;
  char *local_4c4;
  undefined2 local_4bc;
  char *local_4ba;
  undefined4 local_a8;
  short sStack_a6;
  undefined1 local_a0 [72];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_100263428();
  if (cVar2 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_4ba = "ITIPodRefIsValid(iPod)";
LAB_100264cd4:
      local_4bc = 0x822;
      local_4c4 = "Assertion failure";
      local_4c8 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_4c8,0x16);
    }
  }
  else {
    cVar2 = FUN_10017cbd0(param_2);
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0x36) = 1;
      _memcpy((void *)(param_1 + 0x48),param_2,0x420);
      *(undefined8 *)(param_1 + 0x6db8) = 0;
      *(undefined1 *)(param_1 + 0x6d61) = 1;
      if (*param_2 == 0x41464350) {
        *(undefined1 *)(param_1 + 0x3a) = 0;
        iVar3 = 0;
        goto LAB_100264b21;
      }
      iVar3 = FUN_10017e137(param_2,&local_4c8,0);
      if (iVar3 == -0x80) goto LAB_100264b21;
      if (iVar3 != 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        if (iVar3 != 0) goto LAB_100264b21;
      }
      *(bool *)(param_1 + 0x3a) = sStack_a6 == 0x4244 && (short)local_a8 == 0x4953;
      if ((*(char *)(param_1 + 0x40) == '\0') || (*(char *)(param_1 + 0x3c) != '\0'))
      goto LAB_100264b21;
      piVar1 = (int *)(param_1 + 0x6d68);
      if (*(int *)(param_1 + 0x6d68) != 0) {
        _IOObjectRelease();
        *piVar1 = 0;
      }
      piVar6 = (int *)(param_1 + 0x6d6c);
      if (*(int *)(param_1 + 0x6d6c) != 0) {
        _IOObjectRelease();
        *piVar6 = 0;
      }
      iVar4 = FUN_100631e82(local_a0,"com_apple_driver_iPodNub","com_apple_driver_iPodRBCNub",
                            "com_apple_driver_iPodSBCNub",piVar1);
      if (iVar4 == 0) {
        iVar4 = *piVar1;
        if (iVar4 == 0) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure (expected to be true)";
            local_4c = 0x822;
            local_4a = "iPod->driverObject != ((io_object_t) 0)";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          cVar2 = FUN_1001782e9(0,0);
          if (cVar2 == '\0') goto LAB_100264c5a;
          iVar4 = *piVar1;
        }
        _IOObjectRetain(iVar4);
      }
LAB_100264c5a:
      iVar4 = FUN_10063228c(local_a0,piVar6);
      if (iVar4 == 0) {
        iVar4 = *piVar6;
        if (iVar4 == 0) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure (expected to be true)";
            local_4c = 0x822;
            local_4a = "iPod->usbDeviceObject != ((io_object_t) 0)";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          cVar2 = FUN_1001782e9(0,0);
          if (cVar2 == '\0') goto LAB_100264b21;
          iVar4 = *piVar6;
        }
        _IOObjectRetain(iVar4);
      }
      goto LAB_100264b21;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_4ba = "JRFileSpecIsValid(volumeSpec)";
      goto LAB_100264cd4;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_100264b21:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

