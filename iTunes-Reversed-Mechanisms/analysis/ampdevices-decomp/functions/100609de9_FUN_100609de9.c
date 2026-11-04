// name: FUN_100609de9
// address: 100609de9

int FUN_100609de9(long param_1)

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
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "context->mobileDeviceRef != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    iVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    iVar2 = FUN_10060274a(param_1,FUN_10061909d,"InstallMobileDeviceProfilesThread");
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = FUN_100602806(param_1);
        if (iVar2 == -0x80) goto LAB_100609f4d;
        if (iVar2 == 0) {
          if (*(char *)(param_1 + 0x4da) == '\0') {
            iVar2 = 0;
          }
          else {
            iVar2 = 0;
            FUN_100500aa3(*(undefined8 *)(param_1 + 0x10),0,1,0x69706463);
          }
          goto LAB_100609f4d;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') goto LAB_100609f4d;
        local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') goto LAB_100609f4d;
        local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
      }
      local_2c = 0x400;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
    }
  }
LAB_100609f4d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

