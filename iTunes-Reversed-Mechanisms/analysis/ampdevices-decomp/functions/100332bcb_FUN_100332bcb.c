// name: FUN_100332bcb
// address: 100332bcb

int FUN_100332bcb(long param_1,char param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar5 = 0;
  cVar1 = FUN_1001c19de();
  if (cVar1 != '\0') goto LAB_100332ce1;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "handlerData != nullptr";
LAB_100332d26:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    lVar3 = FUN_10055ae0c(*(undefined8 *)(param_1 + 0x66d8));
    if (lVar3 != 0) {
      if (*(char *)(param_1 + 0x3a2) != '\0') {
        if (param_2 != '\0') {
          FUN_100332d99(param_1);
        }
        if (*(long *)(param_1 + 0x16688) == 0) {
          FUN_100332458(param_1);
          iVar2 = FUN_10033295f(param_1);
          iVar5 = 0;
          if (iVar2 != 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            iVar5 = iVar2;
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x400;
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
            }
          }
        }
      }
      goto LAB_100332ce1;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "ITIPodGetAMDeviceRef( handlerData->podRef ) != nullptr";
      goto LAB_100332d26;
    }
  }
  FUN_1001782e9(0,0);
  iVar5 = -0xcb8;
LAB_100332ce1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

