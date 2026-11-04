// name: FUN_10055ed62
// address: 10055ed62

undefined * FUN_10055ed62(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar3 = &DAT_100756a90;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0x616c6269) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "inAlbumInfo->mMagic == kAlbumInfoMagic";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10055edef;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      puVar3 = &DAT_100756a90;
      if (*(int *)(param_1 + 0x10) == 3) {
        puVar3 = &DAT_100756aa0;
      }
      if (param_2 != 0) {
        *(bool *)param_2 = *(int *)(param_1 + 0x10) == 3;
      }
    }
  }
LAB_10055edef:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

