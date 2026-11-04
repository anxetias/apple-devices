// name: FUN_1002be476
// address: 1002be476

undefined1 FUN_1002be476(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_69;
  undefined **local_68;
  undefined1 *local_60;
  uint *local_58;
  undefined ***local_48;
  uint local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_69 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x58) != 0x61747369) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "inArtistInfo->mMagic == kArtistInfoMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1002be523;
    }
    if (*(long *)(param_1 + 8) != 0) {
      local_58 = &local_38;
      local_38 = local_38 & 0xffffff00;
      local_68 = &PTR_FUN_100845af0;
      local_60 = &local_69;
      local_48 = &local_68;
      FUN_1005e405e(param_1,0,&local_68);
      if (local_48 == &local_68) {
        lVar4 = 0x20;
      }
      else {
        lVar4 = 0x28;
        uVar2 = local_69;
        if (local_48 == (undefined ***)0x0) goto LAB_1002be557;
      }
      (**(code **)((long)*local_48 + lVar4))();
      uVar2 = local_69;
      goto LAB_1002be557;
    }
  }
LAB_1002be523:
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_38 = 0x8220202;
    local_34 = "Assertion failure";
    local_2c = 0x822;
    local_2a = "ArtistInfoIsValid(artistInfo)";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
  }
  FUN_1001782e9(0,0);
  uVar2 = 0;
LAB_1002be557:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

