// name: createPeopleGroupAndAddTo:withFetchLimit:
// address: 1004a64ad

/* Function Stack Size: 0x20 bytes */

void AMPPhotoKitImporter::createPeopleGroupAndAddTo_withFetchLimit_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ID IVar9;
  long lVar10;
  undefined8 local_178;
  long lStack_170;
  long *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  long local_108;
  unsigned_long_long local_100;
  long local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ID local_d8;
  undefined8 local_d0;
  ID local_c8;
  undefined1 local_c0 [128];
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_100 = param_4;
  local_e0 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  local_c8 = param_1;
  IVar2 = getPersonDictionary(param_1,PTR_s_getPersonDictionary_10088d5b0);
  local_e8 = _objc_retainAutoreleasedReturnValue(IVar2);
  lVar3 = (*(code *)PTR__objc_msgSend_10082c770)(local_e8,PTR_s_count_10088bdc0);
  if (lVar3 != 0) {
    IVar2 = _objc_alloc(&objc::class_t::AMPPHMediaGroup);
    uVar4 = FUN_1004a6aca(&cf_People);
    IVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    local_d8 = AMPPHMediaGroup::initWithName_uuid_mediaLibraryTypeIdentifier_
                         (IVar2,PTR_s_initWithName_uuid_mediaLibraryTy_10088d5b8,IVar5,0x10087edb0,
                          0x10087ed50);
    (*(code *)PTR__objc_release_10082c7b0)(IVar5);
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(local_e8,PTR_s_allValues_10088d460);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    IVar2 = NSSortDescriptor::sortDescriptorWithKey_ascending_selector_
                      ((ID)PTR__OBJC_CLASS___NSSortDescriptor_10082c6b0,
                       PTR_s_sortDescriptorWithKey_ascending__10088d5c8,&cf_name,1,
                       PTR_s_caseInsensitiveCompare__10088d5c0);
    uVar6 = _objc_retainAutoreleasedReturnValue(IVar2);
    local_40 = uVar6;
    IVar2 = NSArray::arrayWithObjects_count_
                      ((ID)PTR__OBJC_CLASS___NSArray_10082df78,
                       PTR_s_arrayWithObjects_count__10088bda0,&local_40,1);
    uVar7 = _objc_retainAutoreleasedReturnValue(IVar2);
    uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar4,PTR_s_sortedArrayUsingDescriptors__10088d5d0,uVar7);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_168 = (long *)0x0;
    uStack_160 = 0;
    local_178 = 0;
    lStack_170 = 0;
    local_d0 = (*(code *)PTR__objc_retain_10082c7b8)(uVar8);
    lVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (local_d0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_178,local_c0
                       ,0x10);
    if (lVar3 == 0) {
      local_f0 = PTR_s_childGroups_10088cad0;
    }
    else {
      local_f8 = *local_168;
      do {
        local_138 = PTR_s_name_10088be00;
        local_130 = PTR_s_uuid_10088c5d8;
        local_128 = PTR_s_getFetchOptionsForFetchLimit__10088d398;
        local_120 = PTR_s_fetchAssetsForPerson_options__10088d5d8;
        local_118 = PTR_s_loadMediaObjectsFromAssetFetchRe_10088d5e0;
        local_f0 = PTR_s_childGroups_10088cad0;
        local_110 = PTR_s_addObject__10088c218;
        lVar10 = 0;
        local_108 = lVar3;
        do {
          if (*local_168 != local_f8) {
            _objc_enumerationMutation(local_d0);
          }
          uVar4 = *(undefined8 *)(lStack_170 + lVar10 * 8);
          IVar2 = _objc_alloc(&objc::class_t::AMPPHMediaGroup);
          uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,local_138);
          IVar5 = _objc_retainAutoreleasedReturnValue(uVar6);
          uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,local_130);
          IVar9 = _objc_retainAutoreleasedReturnValue(uVar6);
          IVar2 = AMPPHMediaGroup::initWithName_uuid_mediaLibraryTypeIdentifier_
                            (IVar2,PTR_s_initWithName_uuid_mediaLibraryTy_10088d5b8,IVar5,IVar9,
                             0x10087ed50);
          puVar1 = PTR__objc_release_10082c7b0;
          (*(code *)PTR__objc_release_10082c7b0)(IVar9);
          (*(code *)puVar1)(IVar5);
          puVar1 = PTR__OBJC_CLASS___PHAsset_10082b4f0;
          uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(local_c8,local_128,local_100);
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(puVar1,local_120,uVar4,uVar6);
          uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
          (*(code *)PTR__objc_release_10082c7b0)(uVar6);
          (*(code *)PTR__objc_msgSend_10082c770)(local_c8,local_118,uVar4,IVar2);
          uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(local_d8,local_f0);
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
          (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_110,IVar2);
          puVar1 = PTR__objc_release_10082c7b0;
          (*(code *)PTR__objc_release_10082c7b0)(uVar6);
          (*(code *)puVar1)(uVar4);
          (*(code *)puVar1)(IVar2);
          lVar10 = lVar10 + 1;
        } while (local_108 != lVar10);
        lVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                          (local_d0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_178,
                           local_c0,0x10);
      } while (lVar3 != 0);
    }
    (*(code *)PTR__objc_release_10082c7b0)(local_d0);
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(local_e0,local_f0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_addObject__10088c218,local_d8);
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    (*(code *)PTR__objc_release_10082c7b0)(local_d0);
    (*(code *)PTR__objc_release_10082c7b0)(local_d8);
  }
  (*(code *)PTR__objc_release_10082c7b0)(local_e8);
  (*(code *)PTR__objc_release_10082c7b0)(local_e0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

