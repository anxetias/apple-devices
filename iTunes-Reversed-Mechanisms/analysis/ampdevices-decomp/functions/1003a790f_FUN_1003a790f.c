// name: FUN_1003a790f
// address: 1003a790f

long FUN_1003a790f(long *param_1,undefined8 param_2,int *param_3,undefined8 param_4,uint param_5)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (long *)0x0) || ((int *)*param_1 == (int *)0x0)) {
LAB_1003a7b49:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_4a = "PlaylistItemIsValid(playlistItem)";
LAB_1003a7bf7:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)*param_1 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1003a7b49;
    }
    if ((int)param_1[8] == 0) goto LAB_1003a7b49;
    if (param_3 == (int *)0x0) {
LAB_1003a7b94:
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 == '\0') goto LAB_1003a7b62;
      local_4a = "PlaylistIsValid(destPlaylist)";
      goto LAB_1003a7bf7;
    }
    if (*param_3 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1003a7b94;
    }
    cVar2 = FUN_1003a77fe(param_3,param_4);
    if (cVar2 == '\0') {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_4a = "PlaylistItemPositionIsValid(destPlaylist, destItemPosition)";
        goto LAB_1003a7bf7;
      }
    }
    else {
      if (*param_3 != 0x706c7374) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure (expected to be true)";
          local_4c = 0x822;
          local_4a = "playlist->magic == \'plst\'";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar2 = FUN_1001782e9(0,1);
        if (cVar2 == '\0') goto LAB_1003a7b94;
      }
      if (*(long *)(param_3 + 2) != *(long *)(*param_1 + 8)) {
        param_1 = (long *)FUN_1002ff3cd(param_1[1],param_2,*(long *)(param_3 + 2),
                                        (param_5 & 7) + (param_5 & 0x38) * 8);
        if (param_1 == (long *)0x0) {
          lVar4 = 0;
          goto LAB_1003a7b6e;
        }
      }
      lVar1 = param_1[1];
      if ((lVar1 == 0) || (*(long *)(lVar1 + 0x10) == 0)) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_4a = "TrackInfoIsValid( destTrackInfo )";
          goto LAB_1003a7bf7;
        }
      }
      else {
        if (((*(byte *)(param_3 + 0x90) & 0x40) != 0) && (*(long *)(lVar1 + 0x68) != 0)) {
          lVar4 = FUN_10048584d(lVar1,param_3,0);
          if (lVar4 != 0) goto LAB_1003a7b6e;
        }
        if (*(uint *)(*(long *)(param_3 + 0x1e) + 0x18) < 0x7fffffff) {
          lVar5 = FUN_1003a5cc4(param_3,0);
          lVar4 = 0;
          if (lVar5 != 0) {
            *(undefined4 *)(lVar5 + 0x44) = *(undefined4 *)(lVar5 + 0x40);
            *(long *)(lVar5 + 8) = lVar1;
            *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(lVar1 + 0x68);
            *(long *)(lVar1 + 0x68) = lVar5;
            FUN_1003a66f6(lVar5,param_4,1);
            FUN_10048533f(lVar5);
            lVar4 = lVar5;
          }
          goto LAB_1003a7b6e;
        }
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_4a = 
          "((destPlaylist) != nullptr ? (destPlaylist)->rootFolder->numTracks : 0) < 0x7FFFFFFF";
          goto LAB_1003a7bf7;
        }
      }
    }
  }
LAB_1003a7b62:
  lVar4 = 0;
  FUN_1001782e9(0,0);
LAB_1003a7b6e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

