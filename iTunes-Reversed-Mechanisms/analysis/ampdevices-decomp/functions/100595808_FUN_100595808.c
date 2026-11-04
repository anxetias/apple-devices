// name: FUN_100595808
// address: 100595808

undefined8
FUN_100595808(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_68;
  char *local_64;
  undefined2 local_5c;
  char *local_5a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 != (undefined8 *)0x0) && ((int *)*param_2 != (int *)0x0)) {
    if (*(int *)*param_2 != 0x706c7374) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_68 = 0x8220202;
        local_64 = "Assertion failure (expected to be true)";
        local_5c = 0x822;
        local_5a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_68,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100595898;
    }
    if (*(int *)(param_2 + 8) != 0) {
      FUN_100490f45(param_2,&local_68);
      uVar2 = FUN_100594f1e(param_1,&local_68,0,param_4);
      goto LAB_1005958bf;
    }
  }
LAB_100595898:
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    local_68 = 0x8220202;
    local_64 = "Assertion failure";
    local_5c = 0x822;
    local_5a = "PlaylistItemIsValid(playlistItem)";
    __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_68,0x16);
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_1005958bf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

