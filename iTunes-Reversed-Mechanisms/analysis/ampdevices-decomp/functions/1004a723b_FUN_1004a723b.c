// name: FUN_1004a723b
// address: 1004a723b

void FUN_1004a723b(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ID IVar7;
  undefined8 uVar8;
  ID IVar9;
  ID IVar10;
  
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  uVar4 = _objc_opt_class(PTR__OBJC_CLASS___PHAssetCollection_10082b4f8);
  cVar2 = _objc_opt_isKindOfClass(uVar3,uVar4);
  if (cVar2 == '\0') {
    uVar4 = _objc_opt_class(PTR__OBJC_CLASS___PHCollectionList_10082b510);
    cVar2 = _objc_opt_isKindOfClass(uVar3,uVar4);
    if (cVar2 != '\0') {
      uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(uVar3);
      lVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_collectionListSubtype_10088d610);
      puVar1 = PTR__OBJC_CLASS___PHCollection_10082b508;
      if (lVar5 != 0xc9) {
        uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(param_1 + 0x20),
                           PTR_s_getFetchOptionsForFetchLimit__10088d398,0);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        IVar7 = PHCollection::fetchCollectionsInCollectionList_options_
                          ((ID)puVar1,PTR_s_fetchCollectionsInCollectionList_10088d618,uVar4,uVar6);
        uVar8 = _objc_retainAutoreleasedReturnValue(IVar7);
        (*(code *)PTR__objc_release_10082c7b0)(uVar6);
        lVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,PTR_s_count_10088bdc0);
        if (lVar5 != 0) {
          IVar7 = _objc_alloc(&objc::class_t::AMPPHMediaGroup);
          uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_localizedTitle_10088d5f8);
          IVar9 = _objc_retainAutoreleasedReturnValue(uVar6);
          uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_uuid_10088c5d8);
          IVar10 = _objc_retainAutoreleasedReturnValue(uVar6);
          IVar7 = AMPPHMediaGroup::initWithName_uuid_mediaLibraryTypeIdentifier_
                            (IVar7,PTR_s_initWithName_uuid_mediaLibraryTy_10088d5b8,IVar9,IVar10,
                             0x10087eb90);
          puVar1 = PTR__objc_release_10082c7b0;
          (*(code *)PTR__objc_release_10082c7b0)(IVar10);
          (*(code *)puVar1)(IVar9);
          uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                            (*(undefined8 *)(param_1 + 0x28),PTR_s_childGroups_10088cad0);
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_addObject__10088c218,IVar7);
          (*(code *)PTR__objc_release_10082c7b0)(uVar6);
          (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x20),
                     PTR_s_recursePHCollectionFetchResult_w_10088d620,uVar8,IVar7,
                     *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
          (*(code *)PTR__objc_release_10082c7b0)(IVar7);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar8);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_createAMPPHMediaGroupFromPHAsset_10088d608,
               uVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x38));
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  return;
}

