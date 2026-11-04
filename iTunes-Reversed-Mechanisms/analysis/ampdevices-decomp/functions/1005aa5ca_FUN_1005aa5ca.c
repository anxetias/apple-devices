// name: FUN_1005aa5ca
// address: 1005aa5ca

undefined1 FUN_1005aa5ca(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((int *)*param_2 == (int *)0x0) {
LAB_1005aa6f6:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "PlaylistItemIsValid(playlistItem)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar4 = 0;
  }
  else {
    if (*(int *)*param_2 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1005aa6f6;
    }
    if ((int)param_2[8] == 0) goto LAB_1005aa6f6;
    lVar1 = param_2[1];
    if ((((lVar1 == 0) || ((*(byte *)(lVar1 + 0xc5) & 4) == 0)) ||
        (*(short *)(*param_2 + 0x10) != 0xb)) || (*(char *)(*param_1 + 0x392) == '\0')) {
      uVar4 = 0;
      goto LAB_1005aa720;
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0x70) + 0x38);
    *param_3 = lVar1;
    uVar4 = 1;
    if (lVar1 != 0) goto LAB_1005aa720;
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    uVar4 = 1;
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "id != 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  FUN_1001782e9(0,0);
LAB_1005aa720:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

