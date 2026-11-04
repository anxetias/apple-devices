// name: FUN_1003a8311
// address: 1003a8311

bool FUN_1003a8311(long *param_1)

{
  long lVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (long *)0x0) || ((int *)*param_1 == (int *)0x0)) {
LAB_1003a8377:
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "PlaylistItemIsValid(playlistItem)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    if (param_1 != (long *)0x0) goto LAB_1003a83a2;
LAB_1003a83e5:
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "PlaylistItemIsValid(playlistItem)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar2 = '\0';
    FUN_1001782e9(0,0);
    if (param_1 == (long *)0x0) goto LAB_1003a84d3;
  }
  else {
    if (*(int *)*param_1 != 0x706c7374) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1003a8377;
    }
    if ((int)param_1[8] == 0) goto LAB_1003a8377;
LAB_1003a83a2:
    if ((int *)*param_1 == (int *)0x0) goto LAB_1003a83e5;
    if (*(int *)*param_1 != 0x706c7374) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1003a83e5;
    }
    if ((int)param_1[8] == 0) goto LAB_1003a83e5;
  }
  cVar2 = *(char *)((long)param_1 + 99);
  if (cVar2 != '\0') goto LAB_1003a84d3;
  if ((int *)*param_1 == (int *)0x0) {
LAB_1003a84a6:
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_3a = "PlaylistItemIsValid(playlistItem)";
LAB_1003a869f:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_1003a84c3:
    cVar2 = '\0';
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)*param_1 != 0x706c7374) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1003a84a6;
    }
    if ((int)param_1[8] == 0) goto LAB_1003a84a6;
    lVar1 = *param_1;
    if (lVar1 == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_3a = "playlist != nullptr";
        goto LAB_1003a869f;
      }
      goto LAB_1003a84c3;
    }
    cVar3 = FUN_10047669e(param_1[1]);
    cVar2 = '\x02';
    if (cVar3 == '\0') {
      if (*(long *)(lVar1 + 0x360) == 0) {
        cVar2 = '\x01';
      }
      else {
        cVar2 = FUN_100289589(param_1);
        cVar2 = (cVar2 == '\0') + '\x01';
      }
    }
  }
  *(char *)((long)param_1 + 99) = cVar2;
LAB_1003a84d3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return cVar2 == '\x01';
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

