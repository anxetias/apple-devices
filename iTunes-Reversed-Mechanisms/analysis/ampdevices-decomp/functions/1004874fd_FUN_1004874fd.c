// name: FUN_1004874fd
// address: 1004874fd

void FUN_1004874fd(int *param_1,ulong param_2)

{
  byte *pbVar1;
  char cVar2;
  undefined8 uVar3;
  ulong local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = param_2;
  if (param_1 == (int *)0x0) {
LAB_1004875ab:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "PlaylistIsValid( inPlaylist )";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_1 != 0x706c7374) {
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
      if (cVar2 == '\0') goto LAB_1004875ab;
    }
    param_2 = param_2 | *(ulong *)(param_1 + 0x92);
    if (*(ulong *)(param_1 + 0x92) != param_2) {
      *(ulong *)(param_1 + 0x92) = param_2;
      FUN_100484c95(param_1);
      if (*(long *)(param_1 + 2) != 0) {
        pbVar1 = (byte *)(*(long *)(param_1 + 2) + 0x1bb1);
        *pbVar1 = *pbVar1 | 1;
      }
    }
    FUN_1001c6987(param_1 + 0x32,0x706d7066,param_1,&local_50,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

