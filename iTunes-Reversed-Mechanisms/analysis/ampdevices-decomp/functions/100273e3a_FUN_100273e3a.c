// name: FUN_100273e3a
// address: 100273e3a

undefined8 FUN_100273e3a(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 8) == 0x616c6269) {
LAB_100273e8c:
    if (*(long *)(param_1 + 0x48) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      goto LAB_100273ebd;
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure (expected to be true)";
      local_2c = 0x822;
      local_2a = "inAlbumInfo->mMagic == kAlbumInfoMagic";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 != '\0') goto LAB_100273e8c;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    local_38 = 0x8220202;
    local_34 = "Assertion failure";
    local_2c = 0x822;
    local_2a = "AlbumInfoIsValid(albumInfo)";
    __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_38,0x16);
  }
  uVar2 = 0;
  FUN_1001782e9(0,0);
LAB_100273ebd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

