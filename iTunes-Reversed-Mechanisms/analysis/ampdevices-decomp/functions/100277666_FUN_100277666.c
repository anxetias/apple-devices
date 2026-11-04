// name: FUN_100277666
// address: 100277666

void FUN_100277666(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10027772d:
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_3a = "AlbumInfoIsValid(inAlbumInfo)";
LAB_100277871:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0x616c6269) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "inAlbumInfo->mMagic == kAlbumInfoMagic";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_10027772d;
    }
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 == 0) goto LAB_10027772d;
    if (*(int *)(lVar1 + 0x80) == 0x74646174) {
LAB_10027770c:
      *(undefined8 *)(param_1 + 0x50) = 0;
      lVar2 = *(long *)(lVar1 + 0x1b88);
      *(long *)(param_1 + 0x58) = lVar2;
      if (lVar2 == 0) {
        if (*(long *)(lVar1 + 0x1b80) != 0) {
          uVar4 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar4,0x10);
          if (cVar3 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "trackData->firstAlbumPrivate == nullptr";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        plVar5 = (long *)(lVar1 + 0x1b80);
        if (*(int *)(lVar1 + 0xa4) != 0) {
          uVar4 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar4,0x10);
          if (cVar3 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "trackData->numAlbums == 0";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      else {
        plVar5 = (long *)(lVar2 + 0x50);
      }
      *plVar5 = param_1;
      *(long *)(lVar1 + 0x1b88) = param_1;
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_1002779d8(lVar1 + 0x2678,*(long *)(param_1 + 0x20),param_1);
      }
      *(int *)(lVar1 + 0xa4) = *(int *)(lVar1 + 0xa4) + 1;
      goto LAB_1002777e9;
    }
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be true)";
      local_3c = 0x822;
      local_3a = "trackData->magic == \'tdat\'";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    cVar3 = FUN_1001782e9(0,1);
    if (cVar3 != '\0') goto LAB_10027770c;
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_3a = "TrackDataIsValid(trackData)";
      goto LAB_100277871;
    }
  }
  FUN_1001782e9(0,0);
LAB_1002777e9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

