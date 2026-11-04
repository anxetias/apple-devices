// name: recursePHCollectionList:withParent:and:withFetchLimit:
// address: 1004a74e7

/* Function Stack Size: 0x30 bytes */

void AMPPhotoKitImporter::recursePHCollectionList_withParent_and_withFetchLimit_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,unsigned_long_long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  IVar3 = (*(code *)puVar1)(param_4);
  IVar4 = (*(code *)puVar1)(param_5);
  puVar1 = PTR__OBJC_CLASS___PHCollection_10082b508;
  IVar5 = getFetchOptionsForFetchLimit_(param_1,PTR_s_getFetchOptionsForFetchLimit__10088d398,0);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
  IVar5 = PHCollection::fetchCollectionsInCollectionList_options_
                    ((ID)puVar1,PTR_s_fetchCollectionsInCollectionList_10088d618,uVar2,uVar6);
  IVar5 = _objc_retainAutoreleasedReturnValue(IVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  recursePHCollectionFetchResult_withParent_and_withFetchLimit_
            (param_1,PTR_s_recursePHCollectionFetchResult_w_10088d620,IVar5,IVar3,IVar4,param_6);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(IVar5);
  (*(code *)puVar1)(IVar4);
  (*(code *)puVar1)(IVar3);
  (*(code *)puVar1)(uVar2);
  return;
}

