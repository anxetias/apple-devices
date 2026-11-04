// name: FUN_1002baca8
// address: 1002baca8

byte FUN_1002baca8(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (undefined8 *)0x0) || ((int *)*param_1 == (int *)0x0)) {
LAB_1002bad6c:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "PlaylistItemIsValid(inChannelPlaylistItem)";
LAB_1002baddc:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
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
      if (cVar2 == '\0') goto LAB_1002bad6c;
    }
    if (*(int *)(param_1 + 8) == 0) goto LAB_1002bad6c;
    if ((param_1[1] != 0) && (uVar1 = *(uint *)(param_1[1] + 0xc2), (uVar1 >> 0x1a & 1) != 0)) {
      bVar4 = (byte)(uVar1 >> 0x18) & 1;
      goto LAB_1002bad90;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = 
      "( ((inChannelPlaylistItem)->trackInfo != nullptr) && ((inChannelPlaylistItem)->trackInfo->isPodcastChannel) )"
      ;
      goto LAB_1002baddc;
    }
  }
  bVar4 = 0;
  FUN_1001782e9(0,0);
LAB_1002bad90:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

