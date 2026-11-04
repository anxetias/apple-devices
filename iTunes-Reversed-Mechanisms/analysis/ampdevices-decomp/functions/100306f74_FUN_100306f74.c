// name: FUN_100306f74
// address: 100306f74

long FUN_100306f74(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 != (undefined8 *)0x0) && ((int *)*param_1 != (int *)0x0)) {
    if (*(int *)*param_1 != 0x706c7374) {
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
      if (cVar2 == '\0') goto LAB_100306ff9;
    }
    if (*(int *)(param_1 + 8) != 0) {
      lVar1 = param_1[1];
      if (lVar1 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = FUN_1005974ad(lVar1,0);
        if (lVar4 == 0) {
          lVar4 = *(long *)(lVar1 + 0x58);
        }
      }
      goto LAB_10030701d;
    }
  }
LAB_100306ff9:
  uVar3 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar3,0x10);
  if (cVar2 != '\0') {
    local_38 = 0x8220202;
    local_34 = "Assertion failure";
    local_2c = 0x822;
    local_2a = "PlaylistItemIsValid(playlistItem)";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
  }
  lVar4 = 0;
  FUN_1001782e9(0,0);
LAB_10030701d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

