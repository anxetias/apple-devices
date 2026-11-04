// name: FUN_1003a7de7
// address: 1003a7de7

byte FUN_1003a7de7(undefined8 *param_1)

{
  char cVar1;
  byte bVar2;
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
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1003a7e70;
    }
    if (*(int *)(param_1 + 8) != 0) {
      bVar2 = 1;
      if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
        lVar4 = FUN_100242590(param_1);
        if (lVar4 == 0) {
          bVar2 = 0;
        }
        else {
          bVar2 = *(byte *)(lVar4 + 0xc2) >> 1 & 1;
        }
      }
      goto LAB_1003a7e94;
    }
  }
LAB_1003a7e70:
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_38 = 0x8220202;
    local_34 = "Assertion failure";
    local_2c = 0x822;
    local_2a = "PlaylistItemIsValid(playlistItem)";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
  }
  FUN_1001782e9(0,0);
  bVar2 = 1;
LAB_1003a7e94:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

