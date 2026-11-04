// name: createAMPPHMediaGroupFromPHAssetCollection:andAddTo:orAddTo:withFetchLimit:
// address: 1004a6cb4

/* Function Stack Size: 0x30 bytes */

void AMPPhotoKitImporter::
     createAMPPHMediaGroupFromPHAssetCollection_andAddTo_orAddTo_withFetchLimit_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,unsigned_long_long param_6)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  cfstringStruct *pcVar10;
  long lVar11;
  cfstringStruct *pcVar12;
  cfstringStruct *pcVar13;
  undefined4 local_48;
  undefined4 local_44;
  long local_38;
  
  puVar2 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar5 = (*(code *)puVar2)(param_4);
  uVar6 = (*(code *)puVar2)(param_5);
  uVar7 = _objc_alloc(&objc::class_t::AMPPHMediaGroup);
  uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_localizedTitle_10088d5f8);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(uVar4);
  uVar9 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_uuid_10088c5d8);
  pcVar10 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue(uVar9);
  lVar11 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_assetCollectionType_10088d698);
  puVar2 = PTR_s_assetCollectionSubtype_10088d6a0;
  pcVar12 = pcVar10;
  if (lVar11 != 2) {
switchD_1004a6dac_caseD_d1:
    pcVar13 = &cf_com_apple_Photos_Album;
    goto switchD_1004a6dac_caseD_c8;
  }
  uVar9 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_assetCollectionSubtype_10088d6a0);
  pcVar13 = &cf_com_apple_Photos_SmartAlbum;
  switch(uVar9) {
  case 200:
  case 0xcd:
  case 0xce:
  case 0xd8:
    goto switchD_1004a6dac_caseD_c8;
  case 0xc9:
    pcVar12 = &cf_panoramaAlbum;
    break;
  case 0xca:
    pcVar12 = &cf_videoAlbum;
    break;
  case 0xcb:
    (*(code *)PTR__objc_release_10082c7b0)(pcVar10);
    pcVar13 = &cf_com_apple_Photos_FavoritesGroup;
    pcVar12 = &cf_favoritesAlbum;
    goto switchD_1004a6dac_caseD_c8;
  case 0xcc:
    pcVar12 = &cf_videoTimelapseAlbum;
    break;
  case 0xcf:
    pcVar12 = &cf_burstAlbum;
    break;
  case 0xd0:
    pcVar12 = &cf_videoSloMoAlbum;
    break;
  case 0xd1:
    goto switchD_1004a6dac_caseD_d1;
  case 0xd2:
    pcVar12 = &cf_iPhoneFrontCameraAlbum;
    break;
  case 0xd3:
    pcVar12 = &cf_screenshotAlbum;
    break;
  case 0xd4:
    pcVar12 = &cf_depthEffectAlbum;
    break;
  case 0xd5:
    pcVar12 = &cf_livePhotoAlbum;
    break;
  case 0xd6:
    pcVar12 = &cf_animatedAlbum;
    break;
  case 0xd7:
    pcVar12 = &cf_longExposureAlbum;
    break;
  default:
    uVar9 = FUN_1004a4efe();
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    cVar3 = _os_log_type_enabled(uVar9,0x10);
    if (cVar3 != '\0') {
      local_44 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar2);
      local_48 = 0x4000100;
      __os_log_error_impl(0x100000000,uVar9,0x10,"unknown asset collection subtype %d",&local_48,8);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
switchD_1004a6dac_caseD_c8:
    bVar1 = false;
    goto LAB_1004a6e90;
  }
  (*(code *)PTR__objc_release_10082c7b0)(pcVar10);
  bVar1 = true;
LAB_1004a6e90:
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar7,PTR_s_initWithName_uuid_mediaLibraryTy_10088d5b8,uVar8,pcVar12,pcVar13);
  (*(code *)PTR__objc_release_10082c7b0)(pcVar12);
  (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  puVar2 = PTR__OBJC_CLASS___PHAsset_10082b4f0;
  uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                    (param_1,PTR_s_getFetchOptionsForFetchLimit__10088d398,param_6);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                    (puVar2,PTR_s_fetchAssetsInAssetCollection_opt_10088d600,uVar4,uVar8);
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
  (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  lVar11 = (*(code *)PTR__objc_msgSend_10082c770)(uVar9,PTR_s_count_10088bdc0);
  if (lVar11 != 0) {
    (*(code *)PTR__objc_msgSend_10082c770)
              (param_1,PTR_s_loadMediaObjectsFromAssetFetchRe_10088d5e0,uVar9,uVar7);
    if (bVar1) {
      uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      (*(code *)PTR__objc_msgSend_10082c770)(uVar8,PTR_s_addObject__10088c218,uVar7);
    }
    else {
      uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_childGroups_10088cad0);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      (*(code *)PTR__objc_msgSend_10082c770)(uVar8,PTR_s_addObject__10088c218,uVar7);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar9);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

