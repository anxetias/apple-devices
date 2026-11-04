// name: FUN_10048f96c
// address: 10048f96c

undefined8 FUN_10048f96c(int *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_10048f9f4:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "PlaylistIsValid(playlist)";
LAB_10048fa74:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
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
      if (cVar2 == '\0') goto LAB_10048f9f4;
    }
    lVar1 = *(long *)(param_1 + 0x1e);
    if (lVar1 != 0) {
      *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar1;
      FUN_100380783(param_1);
      FUN_100484df3(param_1);
      uVar3 = 0;
      goto LAB_10048faa7;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "playlist->rootFolder != nullptr";
      goto LAB_10048fa74;
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_10048faa7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

