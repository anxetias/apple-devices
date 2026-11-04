// name: FUN_100596379
// address: 100596379

undefined4 FUN_100596379(undefined8 param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_80;
  undefined **local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined ***local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_80 = param_1;
  if (*(int *)(param_2 + 0x58) == 0x61747369) {
LAB_1005963d4:
    if (*(long *)(param_2 + 8) != 0) {
      local_78 = &PTR_FUN_10086ab88;
      local_70 = &local_80;
      local_68 = param_3;
      local_58 = &local_78;
      uVar2 = FUN_1005e405e(param_2,1,&local_78);
      if (local_58 == &local_78) {
        lVar4 = 0x20;
      }
      else {
        lVar4 = 0x28;
        if (local_58 == (undefined ***)0x0) goto LAB_100596454;
      }
      (**(code **)((long)*local_58 + lVar4))();
      goto LAB_100596454;
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be true)";
      local_3c = 0x822;
      local_3a = "inArtistInfo->mMagic == kArtistInfoMagic";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 != '\0') goto LAB_1005963d4;
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "ArtistInfoIsValid(artistInfo)";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_100596454:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

