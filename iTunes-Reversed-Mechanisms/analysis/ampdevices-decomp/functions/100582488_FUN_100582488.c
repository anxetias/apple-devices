// name: FUN_100582488
// address: 100582488

int FUN_100582488(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_100582531:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "PlaylistIsValid( playlist )";
LAB_1005825f2:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100582531;
    }
    if ((*(byte *)(param_1 + 0xa6) & 1) != 0) {
      iVar2 = param_1[0xba];
      if (iVar2 == 0) {
        iVar2 = FUN_10028961e(*(undefined8 *)(param_1 + 0xaa));
        param_1[0xba] = iVar2;
        if (iVar2 == 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_38 = 0x8220202;
            local_34 = "Assertion failure";
            local_2c = 0x822;
            local_2a = "playlist->smartMatchedMediaKindsPrivate != 0";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
          }
          FUN_1001782e9(0,0);
          iVar2 = param_1[0xba];
        }
      }
      goto LAB_10058255a;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "playlist->isSmartPlaylist";
      goto LAB_1005825f2;
    }
  }
  iVar2 = 0;
  FUN_1001782e9(0,0);
LAB_10058255a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

