// name: FUN_1003ca1bc
// address: 1003ca1bc

undefined8 FUN_1003ca1bc(long param_1,long param_2,long param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1003ca2e6:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_1003ca4b1:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1003ca2e6;
    }
    if ((*(char *)(param_1 + 0x37c) == '\0') && (*(char *)(param_1 + 0x38e) == '\0')) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_3a = 
        "handlerData->deviceInfo.supportsStore || handlerData->deviceInfo.supportsDownloadedPodcasts"
        ;
        goto LAB_1003ca4b1;
      }
    }
    else if (((param_2 == 0) || (*(long *)(param_2 + 8) == 0)) ||
            (*(long *)(*(long *)(param_2 + 8) + 0x10) == 0)) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_3a = "TrackInstanceIsValid(trackInstance)";
        goto LAB_1003ca4b1;
      }
    }
    else {
      cVar2 = FUN_1003ca4e0();
      if (cVar2 == '\0') {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_3a = "TrackInfoIsValidIPodPurchasedTrack(trackInstance->trackInfo)";
          goto LAB_1003ca4b1;
        }
      }
      else if (((param_3 == 0) || (*(long *)(param_3 + 8) == 0)) ||
              (lVar1 = *(long *)(*(long *)(param_3 + 8) + 0x10), lVar1 == 0)) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_3a = "TrackInstanceIsValid(destTrackInstance)";
          goto LAB_1003ca4b1;
        }
      }
      else {
        uVar3 = 0;
        if (*(int *)(lVar1 + 0x84) == 0x2062696c) goto LAB_1003ca353;
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_3a = 
          "(((destTrackInstance->trackInfo) != nullptr) ? ((destTrackInstance->trackInfo)->trackDataPrivate) : nullptr)->trackDataKind == kTrackDataKind_Library"
          ;
          goto LAB_1003ca4b1;
        }
      }
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_1003ca353:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

