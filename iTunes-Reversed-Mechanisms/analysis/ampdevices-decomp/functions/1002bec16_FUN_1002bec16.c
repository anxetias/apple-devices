// name: FUN_1002bec16
// address: 1002bec16

undefined1 FUN_1002bec16(long param_1,ulong param_2,uint param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_79;
  undefined **local_78;
  undefined1 *local_70;
  ulong local_68;
  undefined ***local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_79 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0x616c6269) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "inAlbumInfo->mMagic == kAlbumInfoMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1002becd4;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      local_68 = (ulong)((param_3 & 0xff) << 8) | param_2 & 0xff;
      local_78 = &PTR_FUN_100845c70;
      local_70 = &local_79;
      local_58 = &local_78;
      FUN_1003a0178(param_1,0,&local_78);
      if (local_58 == &local_78) {
        lVar4 = 0x20;
      }
      else {
        lVar4 = 0x28;
        uVar2 = local_79;
        if (local_58 == (undefined ***)0x0) goto LAB_1002bed08;
      }
      (**(code **)((long)*local_58 + lVar4))();
      uVar2 = local_79;
      goto LAB_1002bed08;
    }
  }
LAB_1002becd4:
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "AlbumInfoIsValid(albumInfo)";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
  uVar2 = 0;
LAB_1002bed08:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

