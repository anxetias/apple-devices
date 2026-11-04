// name: beginDownloadVideoAsset:withQuality:
// address: 1004a505b

/* Function Stack Size: 0x1c bytes */

int AMPPhotoKitImporter::beginDownloadVideoAsset_withQuality_
              (ID param_1,SEL param_2,ID param_3,int param_4)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ID IVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *local_80;
  ID local_78;
  undefined8 local_70;
  undefined8 local_68;
  ID local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48;
  undefined8 local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  puVar1 = PTR_s_assetUUIDToAssetDictionary_10088d3c0;
  IVar5 = assetUUIDToAssetDictionary(param_1,PTR_s_assetUUIDToAssetDictionary_10088d3c0);
  lVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
  (*(code *)PTR__objc_release_10082c7b0)(lVar6);
  if (lVar6 == 0) {
    uVar7 = FUN_1004a4efe();
    lVar6 = _objc_retainAutoreleasedReturnValue(uVar7);
    cVar2 = _os_log_type_enabled(lVar6,0x10);
    iVar3 = 0;
    if (cVar2 != '\0') {
      local_48 = local_48 & 0xffff0000;
      __os_log_error_impl(0x100000000,lVar6,0x10,"No asset dictionary loaded yet!",&local_48,2);
    }
    goto LAB_1004a5399;
  }
  IVar5 = assetUUIDToAssetDictionary(param_1,puVar1);
  uVar7 = _objc_retainAutoreleasedReturnValue(IVar5);
  uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar7,PTR_s_objectForKeyedSubscript__10088be30,uVar4);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  if (lVar6 == 0) {
    uVar7 = FUN_1004a4efe();
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    iVar3 = 0;
    if (cVar2 != '\0') {
      local_48 = 0x8420102;
      pcVar10 = "Could not look up asset %{public}@!";
      uVar8 = 0xc;
      local_44 = uVar4;
LAB_1004a5219:
      iVar3 = 0;
      __os_log_error_impl(0x100000000,uVar7,0x10,pcVar10,&local_48,uVar8);
    }
  }
  else {
    iVar3 = currentPHImageRequestID(param_1,PTR_s_currentPHImageRequestID_10088d538);
    if (iVar3 == 0) {
      IVar5 = PHImageManager::defaultManager
                        ((ID)PTR__OBJC_CLASS___PHImageManager_10082b518,
                         PTR_s_defaultManager_10088bfa0);
      local_58 = _objc_retainAutoreleasedReturnValue(IVar5);
      IVar5 = _objc_alloc_init(PTR__OBJC_CLASS___PHVideoRequestOptions_10082b538);
      local_60 = IVar5;
      local_50 = uVar4;
      PHVideoRequestOptions::setNetworkAccessAllowed_
                (IVar5,PTR_s_setNetworkAccessAllowed__10088d3e0,1);
      PHVideoRequestOptions::setVersion_(IVar5,PTR_s_setVersion__10088d3e8,0);
      PHVideoRequestOptions::setDeliveryMode_(IVar5,PTR_s_setDeliveryMode__10088d3d0,0);
      uVar7 = local_58;
      puVar9 = (undefined8 *)PTR__AVAssetExportPresetAppleM4ViPod_10082bad0;
      if (param_4 == 1) {
        puVar9 = (undefined8 *)PTR__AVAssetExportPresetAppleM4V720pHD_10082bac8;
      }
      if (param_4 == 2) {
        puVar9 = (undefined8 *)PTR__AVAssetExportPresetAppleM4V1080pHD_10082bac0;
      }
      uVar4 = *puVar9;
      local_98 = PTR___NSConcreteStackBlock_10082caf0;
      local_90 = 0xc2000000;
      local_88 = FUN_1004a547c;
      local_80 = &DAT_10085cef8;
      local_78 = param_1;
      local_70 = (*(code *)PTR__objc_retain_10082c7b8)(local_50);
      iVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                        (uVar7,PTR_s_requestExportSessionForVideo_opt_10088d578,lVar6,local_60,uVar4
                         ,&local_98);
      uVar4 = local_50;
      if (iVar3 == 0) {
        uVar4 = FUN_1004a4efe();
        local_68 = _objc_retainAutoreleasedReturnValue(uVar4);
        cVar2 = _os_log_type_enabled(local_68,0x10);
        uVar4 = local_50;
        if (cVar2 != '\0') {
          local_48 = local_48 & 0xffff0000;
          __os_log_error_impl(0x100000000,local_68,0x10,"zero PHImageRequestID returned on begin!",
                              &local_48,2);
        }
        (*(code *)PTR__objc_release_10082c7b0)(local_68);
        resetCurrentVideoAssetExport(param_1,PTR_s_resetCurrentVideoAssetExport_10088d540);
      }
      else {
        setCurrentPHImageRequestID_(param_1,PTR_s_setCurrentPHImageRequestID__10088d530,iVar3);
      }
      (*(code *)PTR__objc_release_10082c7b0)(local_70);
      (*(code *)PTR__objc_release_10082c7b0)(local_60);
    }
    else {
      uVar7 = FUN_1004a4efe();
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      iVar3 = 0;
      if (cVar2 != '\0') {
        local_48 = local_48 & 0xffff0000;
        pcVar10 = "Existing video download in progress!";
        uVar8 = 2;
        goto LAB_1004a5219;
      }
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
LAB_1004a5399:
  (*(code *)PTR__objc_release_10082c7b0)(lVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

