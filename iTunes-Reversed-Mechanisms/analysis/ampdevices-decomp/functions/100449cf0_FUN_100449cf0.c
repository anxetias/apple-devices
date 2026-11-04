// name: FUN_100449cf0
// address: 100449cf0

undefined8 FUN_100449cf0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mExportSession == __null";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
    lVar4 = 0;
    goto LAB_100449ed7;
  }
  plVar3 = (long *)PTR__AVCFAssetExportPresetAppleM4ViPod_10082b070;
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    plVar3 = (long *)PTR__AVCFAssetExportPresetAppleM4VAppleTV_10082b068;
  }
  if (*plVar3 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "preset != __null";
LAB_100449ea1:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_100449ec6:
    lVar4 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) {
      lVar4 = _AVCFAssetExportSessionCreateWithAssetAndPreset
                        (DAT_1008c4d90,*(undefined8 *)(param_1 + 0x18));
    }
    else {
      lVar4 = _PFVideoAVCFObjectBuilderCreateExportSessionWithExportPreset();
    }
    *(long *)(param_1 + 0x28) = lVar4;
    if (lVar4 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_3a = "mExportSession != __null";
        goto LAB_100449ea1;
      }
      goto LAB_100449ec6;
    }
    _AVCFAssetExportSessionSetOutputURL(lVar4,*(undefined8 *)(param_1 + 0x10));
    lVar4 = _AVCFAssetExportSessionCopySupportedFileTypes(*(undefined8 *)(param_1 + 0x28));
    if (lVar4 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_3a = "fileTypeList != __null";
        goto LAB_100449ea1;
      }
      goto LAB_100449ec6;
    }
    uVar2 = 0;
    lVar5 = FUN_100164a01(lVar4,0);
    if (lVar5 != 0) {
      _AVCFAssetExportSessionSetOutputFileType(*(undefined8 *)(param_1 + 0x28),lVar5);
      goto LAB_100449ed7;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "fileType != __null";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_100449ed7:
  FUN_10017060f(lVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

