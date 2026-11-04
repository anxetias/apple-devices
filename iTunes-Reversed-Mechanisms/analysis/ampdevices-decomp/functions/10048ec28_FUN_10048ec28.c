// name: FUN_10048ec28
// address: 10048ec28

void FUN_10048ec28(int *param_1,uint param_2,char param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_10048ecd6:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "PlaylistIsValid(inPlaylist)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10048ed46;
  }
  if (*param_1 != 0x706c7374) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') goto LAB_10048ecd6;
  }
  FUN_1001c62d9(&local_58,2);
  local_58 = local_58 & 0xffff0000;
  lVar3 = FUN_100352c96(param_1,&local_58,0);
  if (lVar3 == 0) {
LAB_10048eccf:
    if (param_4 == '\0') goto LAB_10048ed46;
  }
  else {
    if ((*(char *)(lVar3 + 0x1c) == param_3) && (*(uint *)(lVar3 + 0x18) == param_2)) {
      FUN_100352999(lVar3);
      goto LAB_10048eccf;
    }
    *(uint *)(lVar3 + 0x18) = param_2;
    *(char *)(lVar3 + 0x1c) = param_3;
    FUN_100352999(lVar3);
    if ((param_2 & 0xfffffffe) == 0x1a) {
      FUN_10037ee15(param_1,param_2);
    }
    if (param_4 == '\0') goto LAB_10048ed46;
    FUN_100482e3c(param_1);
  }
  FUN_1001c6987(param_1 + 0x32,0x6370706f,param_1,0,0);
LAB_10048ed46:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

