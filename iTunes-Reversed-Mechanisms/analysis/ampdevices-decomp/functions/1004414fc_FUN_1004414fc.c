// name: FUN_1004414fc
// address: 1004414fc

undefined4 FUN_1004414fc(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = *(long *)(param_1 + 0x498);
  if (lVar3 == 0) {
    FUN_10043e902(param_1);
    lVar3 = *(long *)(param_1 + 0x498);
    if (lVar3 != 0) goto LAB_100441542;
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mAsset != __null";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    lVar3 = 0;
    FUN_1001782e9(0,0);
LAB_10044167e:
    lVar4 = 0;
    uVar2 = 0;
  }
  else {
LAB_100441542:
    uVar6 = *(undefined8 *)PTR__AVCFMediaTypeVideo_10082b240;
    lVar3 = _AVCFAssetCopyTracksWithMediaType(lVar3,uVar6);
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_10044167e;
    }
    lVar4 = FUN_10017076e(lVar3);
    if (lVar4 < 1) goto LAB_10044167e;
    lVar4 = 0;
    lVar5 = FUN_100170853(lVar3,0);
    FUN_10017060f(lVar3);
    uVar2 = 0;
    if (lVar5 == 0) goto LAB_10044168c;
    lVar3 = *(long *)(param_1 + 0x498);
    if (lVar3 == 0) {
      FUN_10043e902(param_1);
      lVar3 = *(long *)(param_1 + 0x498);
      if (lVar3 != 0) goto LAB_1004415bc;
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_4a = "mAsset != __null";
        goto LAB_100441905;
      }
LAB_100441781:
      lVar3 = 0;
LAB_100441783:
      FUN_1001782e9(0,0);
      goto LAB_10044167e;
    }
LAB_1004415bc:
    lVar3 = _AVCFAssetCopyTracksWithMediaType(lVar3,uVar6);
    if (lVar3 == 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_4a = "tracksArray != __null";
LAB_100441905:
        local_4c = 0x822;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      goto LAB_100441781;
    }
    lVar4 = FUN_10017076e(lVar3);
    if (lVar4 < 1) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "JRCFArrayGetCount(tracksArray) > 0";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      goto LAB_100441783;
    }
    lVar4 = 0;
    uVar6 = FUN_100170853(lVar3,0);
    lVar5 = FUN_1001705fc(uVar6);
    FUN_10017060f(lVar3);
    if (lVar5 == 0) goto LAB_10044168c;
    lVar3 = _AVCFAssetTrackCopyFormatDescriptions(lVar5);
    lVar4 = lVar5;
    if (lVar3 == 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_4a = "formatDescriptions != __null";
LAB_1004418ab:
        local_4c = 0x822;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
LAB_1004418d0:
      uVar2 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      lVar5 = FUN_10017076e(lVar3);
      if (lVar5 < 1) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_4a = "JRCFArrayGetCount(formatDescriptions) > 0";
          goto LAB_1004418ab;
        }
        goto LAB_1004418d0;
      }
      lVar5 = FUN_100170853(lVar3,0);
      if (lVar5 == 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_4a = "formatDescription != __null";
          goto LAB_1004418ab;
        }
        goto LAB_1004418d0;
      }
      uVar2 = _CMFormatDescriptionGetMediaSubType(lVar5);
    }
  }
  FUN_10017060f(lVar3);
LAB_10044168c:
  FUN_10017060f(lVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

