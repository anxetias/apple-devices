// name: FUN_1003a3b18
// address: 1003a3b18

void FUN_1003a3b18(long param_1,long param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  long lVar7;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1003a3d52;
  }
  if ((*(long *)(param_2 + 0x30) != 0) || (*(long *)(param_2 + 0x38) != 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 
      "(trackInfo->nextTrackInAlbumPrivate == nullptr) && (trackInfo->prevTrackInAlbumPrivate == nullptr)"
      ;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  plVar5 = (long *)(param_1 + 0x60);
  lVar7 = *(long *)(param_1 + 0x60);
  if (lVar7 == 0) {
    *(long *)(param_2 + 0x28) = param_1;
    *(undefined8 *)(param_2 + 0x30) = 0;
    lVar7 = *(long *)(param_1 + 0x68);
    *(long *)(param_2 + 0x38) = lVar7;
    if (lVar7 != 0) goto LAB_1003a3c8d;
LAB_1003a3cea:
    plVar6 = plVar5;
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mNumTracks == 0";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
LAB_1003a3d19:
    plVar5 = (long *)(param_1 + 0x68);
  }
  else {
    uVar3 = *(uint *)(lVar7 + 0xd4);
    if (uVar3 == 0) {
      uVar3 = FUN_10031f884(*(undefined1 *)(lVar7 + 200));
    }
    if ((uVar3 & 0x10090) == 0) {
      *(long *)(param_2 + 0x28) = param_1;
LAB_1003a3c74:
      *(undefined8 *)(param_2 + 0x30) = 0;
      lVar7 = *(long *)(param_1 + 0x68);
      *(long *)(param_2 + 0x38) = lVar7;
      if (lVar7 == 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "mFirstTrackPrivate == nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_1003a3cea;
      }
LAB_1003a3c8d:
      if (*(long *)(lVar7 + 0x30) != 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "mLastTrackPrivate->nextTrackInAlbumPrivate == nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        lVar7 = *(long *)(param_1 + 0x68);
      }
      plVar6 = (long *)(lVar7 + 0x30);
      goto LAB_1003a3d19;
    }
    uVar3 = *(uint *)(param_2 + 0xd4);
    if (uVar3 == 0) {
      uVar3 = FUN_10031f884(*(undefined1 *)(param_2 + 200));
    }
    *(long *)(param_2 + 0x28) = param_1;
    if ((uVar3 & 0x10090) != 0) goto LAB_1003a3c74;
    *(long *)(param_2 + 0x30) = lVar7;
    *(undefined8 *)(param_2 + 0x38) = 0;
    if (*(long *)(lVar7 + 0x38) != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mFirstTrackPrivate->prevTrackInAlbumPrivate == nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      lVar7 = *plVar5;
    }
    plVar6 = (long *)(lVar7 + 0x38);
  }
  *plVar6 = param_2;
  *plVar5 = param_2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(ushort *)(param_1 + 0xf8) = ((ushort)*(undefined4 *)(param_1 + 0xf8) & 0xbffc) + 1;
  if (*(long *)(param_1 + 0x48) != 0) {
    pbVar1 = (byte *)(*(long *)(param_1 + 0x48) + 0x1bb1);
    *pbVar1 = *pbVar1 | 0x10;
  }
  FUN_1003a0352(param_1);
LAB_1003a3d52:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

