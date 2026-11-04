// name: FUN_10039bae8
// address: 10039bae8

undefined8 FUN_10039bae8(long param_1,int param_2,int param_3,void *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == (void *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "logFileSpec != nullptr";
LAB_10039bc27:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    ___bzero(param_4,0x420);
    if (param_2 == 1) {
      if (param_3 == 0x69506f64) {
        cVar1 = FUN_10017cbd0((void *)(param_1 + 0x18));
        if (cVar1 == '\0') {
          uVar2 = 0xffffffd5;
        }
        else {
          _memcpy(param_4,(void *)(param_1 + 0x18),0x420);
          uVar2 = 0;
        }
        goto LAB_10039bc5a;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_3a = "deviceClass == kITIPodDeviceClassAppleIPod";
        goto LAB_10039bc27;
      }
    }
    else {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_3a = "updateRestoreDeviceClass == kUpdateRestoreDeviceClassTraditionalIPod";
        goto LAB_10039bc27;
      }
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_10039bc5a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

