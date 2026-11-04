// name: FUN_100320d0a
// address: 100320d0a

undefined1 FUN_100320d0a(long param_1,undefined4 *param_2)

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
  if ((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0x40), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x58) != 0x61747369) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "inArtistInfo->mMagic == kArtistInfoMagic";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_100320d87;
    }
    if (*(long *)(lVar1 + 8) != 0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *(undefined4 *)(lVar1 + 0xa4);
      }
      uVar3 = *(undefined1 *)(lVar1 + 0x88);
      goto LAB_100320d94;
    }
  }
LAB_100320d87:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  uVar3 = 0;
LAB_100320d94:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

