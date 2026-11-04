// name: FUN_100486ef1
// address: 100486ef1

undefined8 FUN_100486ef1(undefined8 param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44();
  if (param_2 == (int *)0x0) {
LAB_100486f7f:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "PlaylistIsValid(inPlaylist)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_2 != 0x706c7374) {
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
      if (cVar1 == '\0') goto LAB_100486f7f;
    }
    cVar1 = FUN_1001cc254();
    if (cVar1 == '\0') {
      FUN_100486d8f(&local_48,param_2);
      FUN_1001b80b2(param_1,&local_48);
    }
    else {
      FUN_1001bb78a(&local_48,"PID:0x%.16llx-IKIND:ePlaylist",*(undefined8 *)(param_2 + 0x18));
      FUN_1001b80b2(param_1,&local_48);
    }
    FUN_1001b7a50(&local_48);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

