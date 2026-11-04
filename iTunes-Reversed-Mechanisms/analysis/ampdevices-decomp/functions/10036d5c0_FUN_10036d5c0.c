// name: FUN_10036d5c0
// address: 10036d5c0

undefined8 FUN_10036d5c0(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "device != nullptr";
LAB_10036d6d7:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      lVar2 = FUN_10036d183();
      if (lVar2 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "afcVolumeInfo != nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
        uVar3 = 0xffffffdd;
      }
      else {
        FUN_10036d4d2(lVar2);
        FUN_10036d4d2(lVar2);
        uVar3 = 0;
      }
      goto LAB_10036d66f;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "appIdentifier != nullptr";
      goto LAB_10036d6d7;
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_10036d66f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

