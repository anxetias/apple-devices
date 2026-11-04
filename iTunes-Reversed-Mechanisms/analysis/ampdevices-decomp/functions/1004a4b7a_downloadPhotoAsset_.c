// name: downloadPhotoAsset:
// address: 1004a4b7a

/* Function Stack Size: 0x18 bytes */

ID AMPPhotoKitImporter::downloadPhotoAsset_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  code *local_60;
  code *local_58;
  undefined8 local_50;
  uint local_48;
  undefined8 local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  puVar1 = PTR_s_assetUUIDToAssetDictionary_10088d3c0;
  local_70 = &local_78;
  local_78 = 0;
  local_68 = 0x3032000000;
  local_60 = FUN_1004a4ed9;
  local_58 = FUN_1004a4eef;
  local_50 = 0;
  IVar4 = assetUUIDToAssetDictionary(param_1,PTR_s_assetUUIDToAssetDictionary_10088d3c0);
  lVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
  (*(code *)PTR__objc_release_10082c7b0)(lVar5);
  if (lVar5 == 0) {
    uVar6 = FUN_1004a4efe();
    lVar5 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar2 = _os_log_type_enabled(lVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = local_48 & 0xffff0000;
      __os_log_error_impl(0x100000000,lVar5,0x10,"No asset dictionary loaded yet!",&local_48,2);
    }
    uVar6 = 0;
  }
  else {
    IVar4 = assetUUIDToAssetDictionary(param_1,puVar1);
    uVar6 = _objc_retainAutoreleasedReturnValue(IVar4);
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar6,PTR_s_objectForKeyedSubscript__10088be30,uVar3);
    lVar5 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    if (lVar5 == 0) {
      uVar6 = FUN_1004a4efe();
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8420102;
        local_44 = uVar3;
        __os_log_error_impl(0x100000000,uVar7,0x10,"Could not look up asset %{public}@!",&local_48,
                            0xc);
      }
      uVar6 = 0;
    }
    else {
      IVar4 = PHImageManager::defaultManager
                        ((ID)PTR__OBJC_CLASS___PHImageManager_10082b518,
                         PTR_s_defaultManager_10088bfa0);
      uVar7 = _objc_retainAutoreleasedReturnValue(IVar4);
      IVar4 = _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_10082b520);
      PHImageRequestOptions::setDeliveryMode_(IVar4,PTR_s_setDeliveryMode__10088d3d0,1);
      PHImageRequestOptions::setLoadingMode_(IVar4,PTR_s_setLoadingMode__10088d3d8,1);
      PHImageRequestOptions::setNetworkAccessAllowed_
                (IVar4,PTR_s_setNetworkAccessAllowed__10088d3e0,1);
      PHImageRequestOptions::setVersion_(IVar4,PTR_s_setVersion__10088d3e8,0);
      PHImageRequestOptions::setSynchronous_(IVar4,PTR_s_setSynchronous__10088d3f0,1);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar7,PTR_s_requestImageDataAndOrientationFo_10088d518,lVar5,IVar4);
      uVar6 = (*(code *)PTR__objc_retain_10082c7b8)(local_70[5]);
      (*(code *)PTR__objc_release_10082c7b0)(IVar4);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar5);
  __Block_object_dispose(&local_78,8);
  (*(code *)PTR__objc_release_10082c7b0)(local_50);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    IVar4 = _objc_autoreleaseReturnValue(uVar6);
    return IVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

