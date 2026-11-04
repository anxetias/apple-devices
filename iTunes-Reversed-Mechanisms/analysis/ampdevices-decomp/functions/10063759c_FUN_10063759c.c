// name: FUN_10063759c
// address: 10063759c

uint FUN_10063759c(long *param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 local_8a [18];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  uint local_5c;
  undefined1 local_58;
  byte local_57;
  undefined1 local_56;
  undefined1 local_54;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar4 = (long *)(**(code **)(*param_1 + 0x50))();
  if (plVar4 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "task != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xfffffffc;
  }
  else {
    local_70 = 0xff;
    local_78 = param_2;
    _bzero(local_8a,0x12);
    local_68 = 0;
    _bzero(&local_58,0x10);
    local_58 = 0x12;
    local_57 = local_57 | 1;
    local_54 = 0xff;
    local_56 = param_3;
    iVar2 = (**(code **)(*plVar4 + 0x40))(plVar4,&local_58,6);
    if (iVar2 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "err == 0";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    iVar2 = (**(code **)(*plVar4 + 0x58))(plVar4,&local_78,1,0xff,2);
    if (iVar2 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "err == 0";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    iVar2 = (**(code **)(*plVar4 + 0x60))(plVar4,10000);
    if (iVar2 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "err == 0";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    uVar3 = (**(code **)(*plVar4 + 0x80))(plVar4,local_8a,&local_5c,&local_68);
    if (uVar3 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "err == 0";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if ((local_5c & 0xfffffffd) != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = 
        "taskStatus == kSCSITaskStatus_GOOD || taskStatus == kSCSITaskStatus_CHECK_CONDITION";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      if ((local_5c & 0xfffffffd) != 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = 
          "taskStatus == kSCSITaskStatus_GOOD || taskStatus == kSCSITaskStatus_CHECK_CONDITION";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    (**(code **)(*plVar4 + 0x18))(plVar4);
    uVar3 = uVar3 | local_5c;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

