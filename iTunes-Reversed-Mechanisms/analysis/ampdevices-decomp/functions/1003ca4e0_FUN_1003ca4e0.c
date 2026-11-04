// name: FUN_1003ca4e0
// address: 1003ca4e0

undefined1 FUN_1003ca4e0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "TrackInfoIsValid(trackInfo)";
LAB_1003ca5e8:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else if (*(int *)(*(long *)(param_1 + 0x10) + 0x84) == 0x646f5069) {
    if (*(int *)(param_1 + 0xc2) < 0) {
      uVar3 = 1;
      if (*(int *)(*(long *)(param_1 + 0x58) + 0x3c) == 0x46494c45) goto LAB_1003ca642;
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_2a = "trackInfo->firstInstance->trackKind == kITFileKind";
        goto LAB_1003ca5e8;
      }
    }
    else {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_2a = "trackInfo->isDeviceDownload";
        goto LAB_1003ca5e8;
      }
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = 
      "(((trackInfo) != nullptr) ? ((trackInfo)->trackDataPrivate) : nullptr)->trackDataKind == kTrackDataKind_iPod"
      ;
      goto LAB_1003ca5e8;
    }
  }
  uVar3 = 0;
  FUN_1001782e9(0,0);
LAB_1003ca642:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

