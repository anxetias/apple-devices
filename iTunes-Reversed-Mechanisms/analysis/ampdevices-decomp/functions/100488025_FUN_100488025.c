// name: FUN_100488025
// address: 100488025

undefined8 FUN_100488025(int *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_1004880e1:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "PlaylistIsValid(inPlaylist)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
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
      if (cVar1 == '\0') goto LAB_1004880e1;
    }
    FUN_100487d03(&local_48,param_1,&cf_cover_artwork_recipe);
    iVar2 = FUN_1001b9c66(param_2,&local_48);
    FUN_1001b7a50(&local_48);
    if (iVar2 != 0) {
      FUN_100487d96(param_1,&cf_cover_artwork_recipe,param_2,1);
      FUN_1004874fd(param_1,0x2000000000);
      uVar3 = 1;
      goto LAB_100488105;
    }
  }
  uVar3 = 0;
LAB_100488105:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

