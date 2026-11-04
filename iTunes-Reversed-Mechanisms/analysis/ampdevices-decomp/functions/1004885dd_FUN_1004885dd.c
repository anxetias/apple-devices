// name: FUN_1004885dd
// address: 1004885dd

/* WARNING: Type propagation algorithm not settling */

void FUN_1004885dd(int *param_1,char param_2,uint param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  uint local_5c [2];
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_100488696:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "PlaylistIsValid(inPlaylist)";
LAB_10048873e:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_5c[1] = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
    }
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_5c[1] = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100488696;
    }
    cVar1 = FUN_100488488(param_1,local_5c);
    if (cVar1 == param_2) goto LAB_1004886b8;
    if (param_2 != '\0') {
      if (param_3 == 0) {
        param_3 = FUN_100177d5c(0);
      }
      if (local_5c[0] < param_3) {
        local_5c[0] = param_3;
      }
      *(char *)(param_1 + 0x10e) = param_2;
      param_1[0x10f] = local_5c[0];
      if (param_4 != '\0') {
        FUN_1004874fd(param_1,0x20);
      }
      goto LAB_1004886b8;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "inLikedState != kITLikedState_Unknown";
      goto LAB_10048873e;
    }
  }
  FUN_1001782e9(0,0);
LAB_1004886b8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

