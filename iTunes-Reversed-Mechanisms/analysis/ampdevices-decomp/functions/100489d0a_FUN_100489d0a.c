// name: FUN_100489d0a
// address: 100489d0a

ulong FUN_100489d0a(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 unaff_R14;
  ulong uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_100489d98:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_1 != 0x706c7374) {
      unaff_R14 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(unaff_R14,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,unaff_R14,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100489d98;
    }
    cVar1 = FUN_10048c3a1(param_1);
    uVar4 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
    if (cVar1 == '\0') {
      uVar3 = *(ushort *)(param_1 + 4) - 7;
      if (((0x3e < uVar3) || ((0x5800020000000001U >> ((ulong)uVar3 & 0x3f) & 1) == 0)) &&
         (1 < *(ushort *)(param_1 + 4) - 2)) {
        uVar4 = 0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

