// name: FUN_10024093e
// address: 10024093e

long * FUN_10024093e(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (undefined8 *)0x0) || ((int *)*param_1 == (int *)0x0)) {
LAB_1002409e6:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "PlaylistItemIsValid(playlistItem)";
LAB_100240a52:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (*(int *)*param_1 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1002409e6;
    }
    if (*(int *)(param_1 + 8) == 0) goto LAB_1002409e6;
    lVar1 = param_1[1];
    if (lVar1 == 0) {
LAB_100240a2a:
      plVar4 = (long *)0x0;
      goto LAB_100240a0a;
    }
    if (*(long *)(lVar1 + 0x10) != 0) {
      plVar4 = *(long **)(lVar1 + 0x58);
      if (plVar4 != (long *)0x0) {
        if (*plVar4 != 0) {
          plVar4 = (long *)FUN_100597a61(lVar1);
          if (plVar4 == (long *)0x0) {
            plVar4 = (long *)FUN_1005977c1(lVar1);
          }
        }
        goto LAB_100240a0a;
      }
      goto LAB_100240a2a;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "TrackInfoIsValid(inTrackInfo)";
      goto LAB_100240a52;
    }
  }
  plVar4 = (long *)0x0;
  FUN_1001782e9(0,0);
LAB_100240a0a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

