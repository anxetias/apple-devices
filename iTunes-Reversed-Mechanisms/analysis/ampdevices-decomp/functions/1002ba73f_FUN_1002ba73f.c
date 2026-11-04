// name: FUN_1002ba73f
// address: 1002ba73f

long FUN_1002ba73f(int *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_1002ba7eb:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "PlaylistIsValid(inPlaylist) != 0";
LAB_1002ba86b:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1002ba7eb;
    }
    if (param_2 != 0) {
      for (lVar3 = FUN_100485529(param_1); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x18)) {
        if (((*(long *)(lVar3 + 8) != 0) && ((*(byte *)(*(long *)(lVar3 + 8) + 0xc5) & 4) != 0)) &&
           (lVar4 = FUN_1002ba359(lVar3), lVar4 == param_2)) goto LAB_1002ba89c;
      }
      lVar3 = 0;
      goto LAB_1002ba89c;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "inChannelPersistentID != 0";
      goto LAB_1002ba86b;
    }
  }
  lVar3 = 0;
  FUN_1001782e9(0,0);
LAB_1002ba89c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

