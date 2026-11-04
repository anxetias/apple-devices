// name: FUN_1003a746e
// address: 1003a746e

void FUN_1003a746e(undefined8 *param_1,char param_2)

{
  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (undefined8 *)0x0) || ((int *)*param_1 == (int *)0x0)) {
LAB_1003a752d:
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_3a = "PlaylistItemIsValid(playlistItem)";
LAB_1003a75d3:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (*(int *)*param_1 != 0x706c7374) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_1003a752d;
    }
    if (*(int *)(param_1 + 8) == 0) goto LAB_1003a752d;
    lVar1 = param_1[1];
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
      puVar2 = *(undefined8 **)(lVar1 + 0x68);
      if (puVar2 == (undefined8 *)0x0) {
LAB_1003a75fd:
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "curItem != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else if (puVar2 == param_1) {
        *(undefined8 *)(lVar1 + 0x68) = puVar2[10];
      }
      else {
        do {
          puVar5 = puVar2;
          puVar2 = (undefined8 *)puVar5[10];
          if (puVar2 == (undefined8 *)0x0) goto LAB_1003a75fd;
        } while (puVar2 != param_1);
        puVar5[10] = puVar2[10];
      }
      if ((param_2 != '\0') && (*(long *)(lVar1 + 0x68) == 0)) {
        FUN_1004737f5(lVar1);
        param_1[1] = 0;
      }
      goto LAB_1003a754f;
    }
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_3a = "TrackInfoIsValid( trackInfo )";
      goto LAB_1003a75d3;
    }
  }
  FUN_1001782e9(0,0);
LAB_1003a754f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

