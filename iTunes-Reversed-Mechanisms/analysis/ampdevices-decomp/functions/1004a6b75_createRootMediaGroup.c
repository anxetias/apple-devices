// name: createRootMediaGroup
// address: 1004a6b75

/* Function Stack Size: 0x10 bytes */

void AMPPhotoKitImporter::createRootMediaGroup(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  IVar3 = _objc_alloc(&objc::class_t::AMPPHMediaGroup);
  uVar4 = FUN_1004a6aca(&cf_AllPhotos);
  IVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  IVar3 = AMPPHMediaGroup::initWithName_uuid_mediaLibraryTypeIdentifier_
                    (IVar3,PTR_s_initWithName_uuid_mediaLibraryTy_10088d5b8,IVar5,0x10087f530,
                     0x10087ed70);
  setRootMediaGroup_(param_1,PTR_s_setRootMediaGroup__10088d5e8,IVar3);
  puVar2 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(IVar3);
  (*(code *)puVar2)(IVar5);
  puVar1 = PTR__objc_msgSend_10082c770;
  IVar3 = masterImageDictionary(param_1,PTR_s_masterImageDictionary_10088d5a0);
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  uVar6 = (*(code *)puVar1)(uVar4,PTR_s_allValues_10088d460);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  IVar3 = rootMediaGroup(param_1,PTR_s_rootMediaGroup_10088d5f0);
  uVar7 = _objc_retainAutoreleasedReturnValue(IVar3);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar7,PTR_s_setMediaObjects__10088d5a8,uVar6);
  (*(code *)puVar2)(uVar7);
  (*(code *)puVar2)(uVar6);
  (*(code *)puVar2)(uVar4);
  return;
}

