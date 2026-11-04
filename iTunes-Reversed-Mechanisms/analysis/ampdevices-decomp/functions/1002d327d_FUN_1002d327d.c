// name: FUN_1002d327d
// address: 1002d327d

int FUN_1002d327d(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100263428();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    iVar2 = -0x32;
    if (cVar1 != '\0') {
      local_3a = "ITIPodRefIsValid(iPod)";
LAB_1002d33f5:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else if (param_2 == (undefined1 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    iVar2 = -0x32;
    if (cVar1 != '\0') {
      local_3a = "batteryState != nullptr";
      goto LAB_1002d33f5;
    }
  }
  else {
    *param_2 = 0;
    if (param_3 == (undefined1 *)0x0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      iVar2 = -0x32;
      if (cVar1 != '\0') {
        local_3a = "batteryPercent != nullptr";
        goto LAB_1002d33f5;
      }
    }
    else {
      *param_3 = 0xff;
      if ((*(char *)(param_1 + 0x3c) == '\0') && (*(char *)(param_1 + 0x3f) == '\0')) {
        iVar2 = FUN_100635a98(*(undefined4 *)(param_1 + 0x6d6c),param_2,param_3);
        if (iVar2 == 0) {
          iVar2 = 0;
          goto LAB_1002d3456;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_3a = "err == 0";
          goto LAB_1002d33f5;
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        iVar2 = -4;
        if (cVar1 != '\0') {
          local_3a = "iPod->isVirtualDevice == false && iPod->isAppleMobileDevice == false";
          goto LAB_1002d33f5;
        }
      }
    }
  }
  FUN_1001782e9(0,0);
LAB_1002d3456:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

