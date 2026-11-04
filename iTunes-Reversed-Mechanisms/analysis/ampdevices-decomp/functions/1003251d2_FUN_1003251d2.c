// name: FUN_1003251d2
// address: 1003251d2

ulong FUN_1003251d2(long param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong unaff_R14;
  ulong uVar4;
  char local_4a;
  char local_49;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 8) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mSyncServicePrefs != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar2 = FUN_1002eb5ec(*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 0x40),0,&local_4a,
                          &local_49);
    if ((uVar2 != 0xffffff80) && (unaff_R14 = (ulong)uVar2, uVar2 != 0)) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,uVar2);
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
    uVar4 = CONCAT71((int7)(unaff_R14 >> 8),1);
    if ((local_4a == *(char *)(param_1 + 0x48)) && (local_49 == *(char *)(param_1 + 0x49))) {
      uVar2 = FUN_100325338();
      uVar4 = (ulong)uVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

