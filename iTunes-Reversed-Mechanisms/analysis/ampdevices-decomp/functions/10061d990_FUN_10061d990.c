// name: FUN_10061d990
// address: 10061d990

ulong FUN_10061d990(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong unaff_R14;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    unaff_R14 = 0;
  }
  else {
    if (*(int *)(param_1 + 8) != 0x616c6269) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "inAlbumInfo->mMagic == kAlbumInfoMagic";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      unaff_R14 = 0;
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10061d9f4;
    }
    unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),*(long *)(param_1 + 0x48) != 0);
  }
LAB_10061d9f4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return unaff_R14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

