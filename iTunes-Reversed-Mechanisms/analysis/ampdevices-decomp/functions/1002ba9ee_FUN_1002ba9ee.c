// name: FUN_1002ba9ee
// address: 1002ba9ee

bool FUN_1002ba9ee(undefined8 *param_1,char param_2,undefined1 param_3,undefined1 param_4)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  bool bVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined2 local_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (undefined8 *)0x0) || ((int *)*param_1 == (int *)0x0)) {
LAB_1002baac1:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      pcVar3 = "PlaylistItemIsValid(inChannelPlaylistItem)";
LAB_1002bab78:
      local_4c = 0x822;
      uStack_4d = 0;
      uStack_4e = 0;
      uStack_4f = 0;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      uStack_4a = SUB82(pcVar3,0);
      uStack_48 = (undefined6)((ulong)pcVar3 >> 0x10);
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)*param_1 != 0x706c7374) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7ab58c;
        uStack_50 = 1;
        uStack_4f = 0;
        uStack_4e = 0;
        uStack_4d = 0;
        local_4c = 0x822;
        uStack_4a = 0x2d50;
        uStack_48 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1002baac1;
    }
    if (*(int *)(param_1 + 8) == 0) goto LAB_1002baac1;
    if ((param_1[1] != 0) && ((*(byte *)(param_1[1] + 0xc5) & 4) != 0)) {
      bVar4 = true;
      if (param_2 == '\0') {
        local_58 = SUB84(param_1,0);
        uStack_54 = (undefined4)((ulong)param_1 >> 0x20);
        uStack_50 = 0;
        local_4c = 0;
        uStack_4a = 0;
        uStack_4f = param_3;
        uStack_4e = param_4;
        FUN_100484ae5(*param_1,FUN_1002babf5,&local_58);
        bVar4 = CONCAT22(uStack_4a,local_4c) != 0;
      }
      goto LAB_1002baae6;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      pcVar3 = 
      "( ((inChannelPlaylistItem)->trackInfo != nullptr) && ((inChannelPlaylistItem)->trackInfo->isPodcastChannel) )"
      ;
      goto LAB_1002bab78;
    }
  }
  bVar4 = false;
  FUN_1001782e9(0,0);
LAB_1002baae6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

