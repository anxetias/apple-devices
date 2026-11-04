// name: FUN_100489a1f
// address: 100489a1f

long FUN_100489a1f(int *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == 0) || (lVar3 = *(long *)(param_2 + 0x10), lVar3 == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "TrackInfoIsValid(trackInfo)";
LAB_100489b7a:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else if (param_1 == (int *)0x0) {
LAB_100489b39:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "PlaylistIsValid(playlist)";
      goto LAB_100489b7a;
    }
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100489b39;
      lVar3 = *(long *)(param_2 + 0x10);
    }
    if (lVar3 == *(long *)(param_1 + 2)) {
      if (*(uint *)(*(long *)(param_1 + 0x1e) + 0x18) < 0x7fffffff) {
        if ((*(long *)(param_2 + 0x68) != 0) && ((*(byte *)(param_1 + 0x90) & 0x40) != 0)) {
          lVar3 = FUN_10048584d(param_2,param_1,0);
          if (lVar3 != 0) goto LAB_100489c63;
        }
        lVar3 = FUN_1003a5cc4(param_1,param_4);
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          *(long *)(lVar3 + 8) = param_2;
          *(undefined4 *)(lVar3 + 0x44) = *(undefined4 *)(lVar3 + 0x40);
          *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(param_2 + 0x68);
          *(long *)(param_2 + 0x68) = lVar3;
          FUN_1003a66f6(lVar3,param_3,1);
          cVar1 = FUN_100489d0a(param_1);
          if (cVar1 != '\0') {
            FUN_100489e7b(param_1);
          }
          FUN_10048533f(lVar3);
        }
        goto LAB_100489c63;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_4a = "((playlist) != nullptr ? (playlist)->rootFolder->numTracks : 0) < 0x7FFFFFFF";
        goto LAB_100489b7a;
      }
    }
    else {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_4a = 
        "(((trackInfo) != nullptr) ? ((trackInfo)->trackDataPrivate) : nullptr) == playlist->trackData"
        ;
        goto LAB_100489b7a;
      }
    }
  }
  lVar3 = 0;
  FUN_1001782e9(0,0);
LAB_100489c63:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

