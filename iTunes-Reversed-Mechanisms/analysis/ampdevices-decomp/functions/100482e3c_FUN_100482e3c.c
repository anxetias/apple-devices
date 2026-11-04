// name: FUN_100482e3c
// address: 100482e3c

void FUN_100482e3c(int *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_1 == 0x706c7374) {
LAB_100482e91:
    uVar1 = *(uint *)(DAT_1008c76a0 + 0x1a54);
    if (uVar1 < (uint)param_1[0xee]) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_2a = "playlist->revision <= revision";
LAB_100482ffd:
        local_2c = 0x822;
        local_34 = "Assertion failure";
        local_38 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
    }
    else {
      param_1[0xee] = uVar1;
      if (*(uint *)(*(long *)(param_1 + 2) + 0x2ca8) <= uVar1) {
        *(uint *)(*(long *)(param_1 + 2) + 0x2ca8) = uVar1;
        goto LAB_100482f66;
      }
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_2a = "playlist->trackData->revision <= revision";
        goto LAB_100482ffd;
      }
    }
  }
  else {
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
    if (cVar2 != '\0') goto LAB_100482e91;
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "PlaylistIsValid(playlist)";
      goto LAB_100482ffd;
    }
  }
  FUN_1001782e9(0,0);
LAB_100482f66:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

