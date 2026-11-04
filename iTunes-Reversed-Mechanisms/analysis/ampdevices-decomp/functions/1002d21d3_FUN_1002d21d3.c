// name: FUN_1002d21d3
// address: 1002d21d3

int FUN_1002d21d3(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_4bc;
  undefined4 local_4b8;
  char *local_4b4;
  undefined2 local_4ac;
  int local_4aa;
  undefined4 local_498;
  char *local_494;
  undefined2 local_48c;
  char *local_48a;
  undefined1 local_70 [72];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_498 = 0x8220202;
      local_494 = "Assertion failure";
      local_48c = 0x822;
      local_48a = "deviceSpeed != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_498,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    *param_2 = 0xffffffff;
    iVar2 = FUN_10017e137(param_1,&local_498,0);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar3 = FUN_100181e82(&local_498);
        iVar2 = -0x1ffffd10;
        if (iVar3 != 2) {
          iVar2 = FUN_1001c4787(local_70,"IOSCSIPeripheralDeviceNub",&local_4bc);
          if (iVar2 != -0x80) {
            if (iVar2 != 0) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_4b8 = 0x8220202;
                local_4b4 = "Assertion failure";
                local_4ac = 0x400;
                local_4aa = iVar2;
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_4b8,0x12
                                   );
              }
              if (iVar2 != 0) goto LAB_1002d22e4;
            }
            iVar2 = FUN_1001c4831(local_4bc,param_2);
            _IOObjectRelease(local_4bc);
          }
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_4b8 = 0x8220202;
          local_4b4 = "Assertion failure";
          local_4ac = 0x400;
          local_4aa = iVar2;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_4b8,0x12);
        }
      }
    }
  }
LAB_1002d22e4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

