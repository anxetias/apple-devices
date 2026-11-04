// name: FUN_100487957
// address: 100487957

undefined8 FUN_100487957(int *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_1004879e9:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "PlaylistIsValid(playlist)";
LAB_100487a69:
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
      if (cVar1 == '\0') goto LAB_1004879e9;
    }
    if (param_2 != 0) {
      uVar2 = FUN_1001ddeca(param_1 + 0x5e,param_2,param_1 + 0x73);
      if ((int)uVar2 == 0) {
        FUN_1004874fd(param_1,2);
        uVar2 = 0;
      }
      goto LAB_100487a9c;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "description != nullptr";
      goto LAB_100487a69;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_100487a9c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

