// name: FUN_1004887bb
// address: 1004887bb

bool FUN_1004887bb(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_10048886c:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "PlaylistIsValid(inPlaylist)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_1 != 0x706c7374) {
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
      if (cVar2 == '\0') goto LAB_10048886c;
    }
    bVar5 = false;
    if (((short)param_1[4] == 0x23) || ((short)param_1[4] == 0x3d)) goto LAB_100488891;
    iVar1 = *(int *)(*(long *)(param_1 + 2) + 0x84);
    bVar5 = true;
    if ((iVar1 == 0x2062696c) || (iVar1 == 0x646f5069)) goto LAB_100488891;
    if (iVar1 == 0x6973756d) {
      FUN_10015095e(&local_38);
      lVar4 = FUN_100150dd2(&local_38);
      bVar5 = lVar4 != 0;
      FUN_100150de8(&local_38);
      goto LAB_100488891;
    }
  }
  bVar5 = false;
LAB_100488891:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

