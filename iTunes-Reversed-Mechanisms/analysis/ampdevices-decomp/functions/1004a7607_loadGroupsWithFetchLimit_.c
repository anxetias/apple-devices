// name: loadGroupsWithFetchLimit:
// address: 1004a7607

/* Function Stack Size: 0x18 bytes */

void AMPPhotoKitImporter::loadGroupsWithFetchLimit_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *local_b8;
  ID local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  unsigned_long_long local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  code *local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  unsigned_long_long local_58;
  undefined8 local_50;
  long local_48;
  ID local_40;
  ID local_38;
  
  local_58 = param_3;
  IVar3 = getFetchOptionsForFetchLimit_(param_1,PTR_s_getFetchOptionsForFetchLimit__10088d398,0);
  local_50 = _objc_retainAutoreleasedReturnValue(IVar3);
  IVar3 = PHCollectionList::fetchRootAlbumCollectionListWithOptions_
                    ((ID)PTR__OBJC_CLASS___PHCollectionList_10082b510,
                     PTR_s_fetchRootAlbumCollectionListWith_10088d628,local_50);
  local_60 = _objc_retainAutoreleasedReturnValue(IVar3);
  local_88 = &local_90;
  local_90 = 0;
  local_80 = 0x3032000000;
  local_78 = FUN_1004a4ed9;
  local_70 = FUN_1004a4eef;
  local_68 = 0;
  (*(code *)PTR__objc_msgSend_10082c770)(local_60,PTR_s_enumerateObjectsUsingBlock__10088bdc8);
  IVar3 = _objc_alloc(&objc::class_t::AMPPHMediaGroup);
  uVar4 = FUN_1004a6aca(&cf_MediaTypes);
  IVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar2 = PTR_s_initWithName_uuid_mediaLibraryTy_10088d5b8;
  local_38 = AMPPHMediaGroup::initWithName_uuid_mediaLibraryTypeIdentifier_
                       (IVar3,PTR_s_initWithName_uuid_mediaLibraryTy_10088d5b8,IVar5,0x10087f570,
                        0x10087ed90);
  (*(code *)PTR__objc_release_10082c7b0)(IVar5);
  IVar3 = rootMediaGroup(param_1,PTR_s_rootMediaGroup_10088d5f0);
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_childGroups_10088cad0);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_addObject__10088c218,local_38);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  (*(code *)puVar1)(uVar4);
  IVar3 = local_88[5];
  IVar5 = rootMediaGroup(param_1,PTR_s_rootMediaGroup_10088d5f0);
  IVar5 = _objc_retainAutoreleasedReturnValue(IVar5);
  recursePHCollectionList_withParent_and_withFetchLimit_
            (param_1,PTR_s_recursePHCollectionList_withPare_10088d630,IVar3,IVar5,local_38,local_58)
  ;
  (*(code *)PTR__objc_release_10082c7b0)(IVar5);
  IVar3 = PHAssetCollection::fetchAssetCollectionsWithType_subtype_options_
                    ((ID)PTR__OBJC_CLASS___PHAssetCollection_10082b4f8,
                     PTR_s_fetchAssetCollectionsWithType_su_10088d638,1,0x65,local_50);
  local_48 = _objc_retainAutoreleasedReturnValue(IVar3);
  if (local_48 != 0) {
    IVar3 = _objc_alloc(&objc::class_t::AMPPHMediaGroup);
    uVar4 = FUN_1004a6aca(&cf_SharedAlbums);
    IVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    IVar3 = AMPPHMediaGroup::initWithName_uuid_mediaLibraryTypeIdentifier_
                      (IVar3,puVar2,IVar5,0x10087f5b0,0x10087f5d0);
    (*(code *)PTR__objc_release_10082c7b0)(IVar5);
    IVar5 = rootMediaGroup(param_1,PTR_s_rootMediaGroup_10088d5f0);
    uVar4 = _objc_retainAutoreleasedReturnValue(IVar5);
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_childGroups_10088cad0);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    local_40 = IVar3;
    (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_addObject__10088c218,IVar3);
    puVar1 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    (*(code *)puVar1)(uVar4);
    puVar2 = PTR__objc_retain_10082c7b8;
    local_d0 = PTR___NSConcreteStackBlock_10082caf0;
    local_c8 = 0xc2000000;
    local_c0 = FUN_1004a7ac2;
    local_b8 = &DAT_10085cfb8;
    local_b0 = param_1;
    uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(local_40);
    local_a8 = uVar4;
    local_a0 = (*(code *)puVar2)(local_38);
    local_98 = local_58;
    (*(code *)PTR__objc_msgSend_10082c770)
              (local_48,PTR_s_enumerateObjectsUsingBlock__10088bdc8,&local_d0);
    (*(code *)puVar1)(local_a0);
    (*(code *)puVar1)(local_a8);
    (*(code *)puVar1)(uVar4);
  }
  IVar3 = rootMediaGroup(param_1,PTR_s_rootMediaGroup_10088d5f0);
  IVar3 = _objc_retainAutoreleasedReturnValue(IVar3);
  createPeopleGroupAndAddTo_withFetchLimit_
            (param_1,PTR_s_createPeopleGroupAndAddTo_withFe_10088d640,IVar3,local_58);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(IVar3);
  (*(code *)puVar1)(local_48);
  (*(code *)puVar1)(local_38);
  __Block_object_dispose(&local_90,8);
  (*(code *)puVar1)(local_68);
  (*(code *)puVar1)(local_60);
  (*(code *)puVar1)(local_50);
  return;
}

