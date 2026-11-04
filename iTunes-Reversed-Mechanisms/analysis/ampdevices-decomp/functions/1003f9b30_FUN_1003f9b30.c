// name: FUN_1003f9b30
// address: 1003f9b30

long FUN_1003f9b30(undefined8 *param_1)

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
LAB_1003f9bbf:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "PlaylistItemIsValid(playlistItem)";
LAB_1003f9c2b:
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
      if (cVar2 == '\0') goto LAB_1003f9bbf;
    }
    if (*(int *)(param_1 + 8) == 0) goto LAB_1003f9bbf;
    lVar1 = param_1[1];
    if (lVar1 == 0) {
LAB_1003f9c03:
      plVar4 = (long *)0x0;
      goto LAB_1003f9be3;
    }
    if (*(long *)(lVar1 + 0x10) != 0) {
      plVar4 = (long *)(lVar1 + 0x58);
      do {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_1003f9c03;
      } while (*(int *)((long)plVar4 + 0x3c) != 0x46494c45);
      goto LAB_1003f9be3;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "TrackInfoIsValid(trackInfo)";
      goto LAB_1003f9c2b;
    }
  }
  plVar4 = (long *)0x0;
  FUN_1001782e9(0,0);
LAB_1003f9be3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return (long)plVar4;
}

