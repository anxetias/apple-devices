// name: FUN_10061c1ee
// address: 10061c1ee

void FUN_10061c1ee(long param_1,int *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x10);
  if (*param_2 != 0x706c7374) {
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
    if (cVar2 == '\0') {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "PlaylistIsValid(devicePurchasedPlaylist)";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_10061c2b9;
    }
  }
  lVar4 = FUN_100491c6b(1,0);
  if (lVar4 != 0) {
    cVar2 = FUN_1002be216(*(undefined8 *)(lVar1 + 0x152f8),*(undefined8 *)(lVar4 + 0x60));
    if (cVar2 != '\0') goto LAB_10061c2b9;
  }
  FUN_100436de8(lVar1,param_2,1,&local_48);
  if ((char)local_48 != '\0') {
    FUN_100609d02(param_1);
  }
LAB_10061c2b9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

