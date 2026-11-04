// name: FUN_100308738
// address: 100308738

undefined8 FUN_100308738(long param_1)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0x616c6269) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "inAlbumInfo->mMagic == kAlbumInfoMagic";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1003087b0;
    }
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 != 0) {
      uVar3 = FUN_1003a2088(param_1);
      uVar4 = FUN_10030806a(lVar1,uVar3);
      goto LAB_1003087d4;
    }
  }
LAB_1003087b0:
  uVar4 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar4,0x10);
  if (cVar2 != '\0') {
    local_38 = 0x8220202;
    local_34 = "Assertion failure";
    local_2c = 0x822;
    local_2a = "AlbumInfoIsValid(albumInfo)";
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
  }
  uVar4 = 0;
  FUN_1001782e9(0,0);
LAB_1003087d4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

