// name: FUN_1002d23f2
// address: 1002d23f2

int FUN_1002d23f2(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  int *piVar6;
  uint local_6c8;
  char *local_6c4;
  undefined2 local_6bc;
  char *local_6ba;
  undefined1 local_2a0 [72];
  undefined1 local_258 [512];
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100263428();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_6c8 = 0x8220202;
      local_6c4 = "Assertion failure";
      local_6bc = 0x822;
      local_6ba = "ITIPodRefIsValid(iPod)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_6c8,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1002d278b;
  }
  FUN_1001c34b7(0x10cf0001,local_258);
  iVar2 = *(int *)(param_1 + 0x6d68);
  piVar6 = (int *)(param_1 + 0x6d68);
  if (iVar2 == 0) {
    iVar2 = FUN_10017e137(param_2,&local_6c8,0);
    if (iVar2 == -0x80) goto LAB_1002d278b;
    if (iVar2 == 0) {
      iVar2 = FUN_100631e82(local_2a0,"com_apple_driver_iPodNub","com_apple_driver_iPodRBCNub",
                            "com_apple_driver_iPodSBCNub",piVar6);
      if (iVar2 == -0x80) goto LAB_1002d278b;
      if (iVar2 != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 == '\0') goto LAB_1002d278b;
        puVar5 = &local_58;
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        goto LAB_1002d2778;
      }
      iVar2 = *piVar6;
      if (iVar2 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure (expected to be true)";
          local_4c = 0x822;
          local_4a = "iPod->driverObject != ((io_object_t) 0)";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar1 = FUN_1001782e9(0,0);
        if (cVar1 != '\0') {
          iVar2 = *piVar6;
          goto LAB_1002d262d;
        }
      }
      else {
LAB_1002d262d:
        _IOObjectRetain(iVar2);
      }
      iVar2 = *piVar6;
      goto LAB_1002d2451;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 == '\0') goto LAB_1002d278b;
    puVar5 = &local_58;
    local_58 = 0x8220202;
    local_54 = "Assertion failure";
    local_4c = 0x400;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
  }
  else {
LAB_1002d2451:
    iVar2 = FUN_1006326bc(iVar2);
    if (iVar2 == -0x80) goto LAB_1002d278b;
    if (iVar2 == 0) {
      iVar2 = FUN_10018a0cf(param_2);
      if (iVar2 == -0x80) goto LAB_1002d278b;
      if (iVar2 == 0) {
        local_6c8 = local_6c8 & 0xffff0000;
        iVar2 = FUN_100632762(*piVar6);
        if ((iVar2 == 0) && (1 < (ushort)(((ushort)local_6c8 >> 8) - 1))) {
          uVar4 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
          do {
            FUN_1001ceb24(param_3,0x7570726d,(ushort)local_6c8 & 0xff,100,local_258);
            iVar2 = FUN_1001b1a0f();
            iVar3 = FUN_1001b19b0();
            if (iVar2 == iVar3) {
              FUN_1001727b4(DAT_100700b00,uVar4,0);
            }
            else {
              FUN_1001b0d8d(DAT_100700b00);
            }
            local_6c8 = local_6c8 & 0xffff0000;
            iVar2 = FUN_100632762(*piVar6,&local_6c8);
          } while ((iVar2 == 0) && (1 < (ushort)(((ushort)local_6c8 >> 8) - 1)));
        }
        goto LAB_1002d278b;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 == '\0') goto LAB_1002d278b;
      puVar5 = &local_6c8;
      local_6c8 = 0x8220202;
      local_6c4 = "Assertion failure";
      local_6bc = 0x400;
      local_6ba = (char *)CONCAT44(local_6ba._4_4_,iVar2);
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 == '\0') goto LAB_1002d278b;
      puVar5 = &local_6c8;
      local_6c8 = 0x8220202;
      local_6c4 = "Assertion failure";
      local_6bc = 0x400;
      local_6ba = (char *)CONCAT44(local_6ba._4_4_,iVar2);
    }
  }
LAB_1002d2778:
  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",puVar5,0x12);
LAB_1002d278b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

