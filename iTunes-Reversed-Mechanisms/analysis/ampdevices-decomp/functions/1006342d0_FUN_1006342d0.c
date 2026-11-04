// name: FUN_1006342d0
// address: 1006342d0

undefined1 FUN_1006342d0(char *param_1,undefined8 *param_2,undefined8 *param_3,undefined2 *param_4)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (char *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "driveName != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    uVar1 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (undefined2 *)0x0) {
      *param_4 = 0;
    }
    if (*param_1 == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      iVar3 = FUN_100631e82(param_1,"IOSCSIPeripheralDeviceNub",0,0,&local_48);
      if (iVar3 == 0) {
        uVar1 = FUN_100633eda(local_48,param_2,param_3,param_4);
        _IOObjectRelease(local_48);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

