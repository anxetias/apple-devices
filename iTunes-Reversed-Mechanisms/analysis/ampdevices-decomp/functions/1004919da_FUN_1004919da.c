// name: FUN_1004919da
// address: 1004919da

int FUN_1004919da(int *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_100491a85:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    iVar5 = 0;
    FUN_1001782e9(0,0);
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100491a85;
    }
    if (param_1[5] == 0) {
      param_1[7] = -1;
      for (lVar4 = FUN_100485529(param_1); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x18)) {
        uVar2 = FUN_1004744bf(*(undefined8 *)(lVar4 + 8),0);
        param_1[5] = param_1[5] | uVar2;
        param_1[7] = param_1[7] & uVar2;
      }
    }
    if (param_2 != (int *)0x0) {
      *param_2 = param_1[7];
    }
    iVar5 = param_1[5];
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

