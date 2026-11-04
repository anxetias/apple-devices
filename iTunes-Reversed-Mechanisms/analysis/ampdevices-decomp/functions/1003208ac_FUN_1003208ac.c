// name: FUN_1003208ac
// address: 1003208ac

void FUN_1003208ac(long param_1,byte param_2,undefined1 param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x6950;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100320a06;
  }
  if ((char)param_2 < '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xec99;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    param_2 = 0;
LAB_1003209b1:
    FUN_1001782e9(0,0);
  }
  else if (100 < param_2) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    param_2 = 100;
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xecaa;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    goto LAB_1003209b1;
  }
  *(byte *)(param_1 + 300) = param_2;
  *(undefined1 *)(param_1 + 0x12d) = param_3;
  if (param_4 != '\0') {
    uStack_48 = 0;
    uStack_42 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_4a = 0;
    FUN_1005389ba(&local_58,0x19);
    FUN_1004755ef(param_1,0,&local_58);
  }
  FUN_1001778c4(PTR_cf_RatingStateChangedNotification_10083c0e0);
LAB_100320a06:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

