// name: FUN_10030c70d
// address: 10030c70d

undefined1 FUN_10030c70d(long param_1,undefined4 *param_2)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0x28), lVar1 != 0)) {
    if (*(int *)(lVar1 + 8) != 0x616c6269) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "inAlbumInfo->mMagic == kAlbumInfoMagic";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_10030c78a;
    }
    if (*(long *)(lVar1 + 0x48) != 0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *(undefined4 *)(lVar1 + 0x84);
      }
      uVar3 = *(undefined1 *)(lVar1 + 0xe6);
      goto LAB_10030c797;
    }
  }
LAB_10030c78a:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  uVar3 = 0;
LAB_10030c797:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

