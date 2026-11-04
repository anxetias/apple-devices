// name: FUN_1002bea27
// address: 1002bea27

undefined1 FUN_1002bea27(long param_1,undefined1 param_2,undefined1 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_79;
  undefined **local_78;
  uint *local_70;
  undefined1 *local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined ***local_58;
  uint local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_79 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x58) != 0x61747369) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "inArtistInfo->mMagic == kArtistInfoMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1002beaef;
    }
    if (*(long *)(param_1 + 8) != 0) {
      local_70 = &local_48;
      local_48 = local_48 & 0xffffff00;
      local_78 = &PTR_FUN_100845bf0;
      local_68 = &local_79;
      local_60 = param_3;
      local_5f = param_2;
      local_58 = &local_78;
      FUN_1005e405e(param_1,1,&local_78);
      if (local_58 == &local_78) {
        lVar4 = 0x20;
      }
      else {
        lVar4 = 0x28;
        uVar2 = local_79;
        if (local_58 == (undefined ***)0x0) goto LAB_1002beb23;
      }
      (**(code **)((long)*local_58 + lVar4))();
      uVar2 = local_79;
      goto LAB_1002beb23;
    }
  }
LAB_1002beaef:
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "ArtistInfo::IsValid(artistInfo)";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
  uVar2 = 0;
LAB_1002beb23:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

