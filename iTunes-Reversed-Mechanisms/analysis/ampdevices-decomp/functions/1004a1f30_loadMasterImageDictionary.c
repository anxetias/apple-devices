// name: loadMasterImageDictionary
// address: 1004a1f30

/* Function Stack Size: 0x10 bytes */

void __thiscall
AMPPhotoKitImporter::loadMasterImageDictionary(AMPPhotoKitImporter *this,ID param_1,SEL param_2)

{
  dispatch_group_t pdVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  dispatch_queue_attr_t attr;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined4 in_XMM1_Da;
  undefined8 local_8c8;
  long lStack_8c0;
  long *local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  long lStack_880;
  long *local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined *local_840;
  undefined8 local_838;
  code *local_830;
  undefined *local_828;
  AMPPhotoKitImporter *local_820;
  undefined *local_818;
  undefined8 local_810;
  undefined8 local_808;
  long lStack_800;
  long *local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  long lStack_7c0;
  long *local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 local_788;
  long lStack_780;
  long *local_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  long lStack_740;
  long *local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  long lStack_700;
  long *local_6f8;
  undefined8 uStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined *local_6c0;
  undefined8 local_6b8;
  code *local_6b0;
  undefined *local_6a8;
  undefined8 local_6a0;
  long local_698;
  undefined8 local_690;
  undefined *local_688;
  undefined8 local_680;
  code *local_678;
  undefined *local_670;
  undefined8 local_668;
  long local_660;
  undefined8 local_658;
  undefined *local_650;
  undefined8 local_648;
  code *local_640;
  undefined *local_638;
  undefined8 local_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined *local_618;
  undefined8 local_610;
  code *local_608;
  undefined *local_600;
  dispatch_group_t local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined *local_5d0;
  undefined *local_5c8;
  undefined *local_5c0;
  undefined *local_5b8;
  undefined *local_5b0;
  undefined *local_5a8;
  undefined *local_5a0;
  undefined *local_598;
  undefined *local_590;
  undefined *local_588;
  undefined *local_580;
  undefined *local_578;
  undefined *local_570;
  long local_568;
  undefined *local_560;
  undefined *local_558;
  undefined *local_550;
  undefined *local_548;
  undefined *local_540;
  undefined *local_538;
  undefined *local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined *local_510;
  undefined8 local_508;
  code *local_500;
  undefined *local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  dispatch_group_t local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined *local_498;
  undefined *local_490;
  undefined *local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined *local_470;
  undefined *local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined *local_440;
  AMPPhotoKitImporter *local_438;
  dispatch_queue_t local_430;
  undefined *local_428;
  undefined *local_420;
  dispatch_group_t local_418;
  undefined *local_410;
  undefined8 local_408;
  undefined *local_400;
  undefined *local_3f8;
  undefined *local_3f0;
  undefined *local_3e8;
  undefined *local_3e0;
  long local_3d8;
  undefined1 local_3d0 [128];
  undefined1 local_350 [128];
  undefined1 local_2d0 [128];
  undefined1 local_250 [128];
  undefined1 local_1d0 [128];
  undefined1 local_150 [128];
  undefined1 local_d0 [128];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_480 = _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0);
  local_438 = this;
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (this,PTR_s_getFetchOptionsForFetchLimit__10088d398,0);
  local_478 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_10082c770)(local_478,PTR_s_setIncludeAssetSourceTypes__10088d3a0,3);
  local_50 = *(undefined8 *)PTR__PHAssetPropertySetGridMetadata_10082b548;
  local_48 = *(undefined8 *)PTR__PHAssetPropertySetDescription_10082b540;
  local_40 = *(undefined8 *)PTR__PHAssetPropertySetOriginalMetadata_10082b550;
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSArray_10082df78,PTR_s_arrayWithObjects_count__10088bda0,
                     &local_50,3);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_msgSend_10082c770)(local_478,PTR_s_setFetchPropertySets__10088d3a8,uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___PHAsset_10082b4f0,PTR_s_fetchAssetsWithOptions__10088d3b0,
                     local_478);
  local_448 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_4b0 = _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_10082dfa0);
  local_4b8 = _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_10082dfa0);
  uVar4 = _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(local_448,PTR_s_count_10088bdc0);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_initWithCapacity__10088c9d8,uVar5);
  (*(code *)PTR__objc_msgSend_10082c770)
            (local_438,PTR_s_setAssetUUIDToAssetDictionary__10088d3b8,uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  puVar8 = PTR__objc_retain_10082c7b8;
  local_840 = PTR___NSConcreteStackBlock_10082caf0;
  local_838 = 0xc2000000;
  local_830 = FUN_1004a41cc;
  local_828 = &DAT_10085cda8;
  local_820 = local_438;
  puVar6 = (undefined *)(*(code *)PTR__objc_retain_10082c7b8)(local_4b8);
  local_818 = puVar6;
  uVar4 = (*(code *)puVar8)(local_4b0);
  local_810 = uVar4;
  (*(code *)PTR__objc_msgSend_10082c770)
            (local_448,PTR_s_enumerateObjectsUsingBlock__10088bdc8,&local_840);
  uVar5 = _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0);
  uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(local_448,PTR_s_count_10088bdc0);
  local_4a0 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_initWithCapacity__10088c9d8,uVar7);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___PHImageManager_10082b518,PTR_s_defaultManager_10088bfa0);
  local_4a8 = _objc_retainAutoreleasedReturnValue(uVar5);
  local_488 = puVar6;
  uVar3 = _qos_class_self();
  uVar5 = _dispatch_queue_attr_make_with_qos_class(0,uVar3,0);
  attr = (dispatch_queue_attr_t)_objc_retainAutoreleasedReturnValue(uVar5);
  local_430 = _dispatch_queue_create("combining queue",attr);
  (*(code *)PTR__objc_release_10082c7b0)(attr);
  local_4c0 = _dispatch_group_create();
  uVar5 = _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_10082b520);
  local_4c8 = uVar5;
  (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_setDeliveryMode__10088d3d0,1);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_setLoadingMode__10088d3d8,0x10000);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_setNetworkAccessAllowed__10088d3e0,0);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_setVersion__10088d3e8,0);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_setSynchronous__10088d3f0,0);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_setOnlyUseFetchedAssetProperties_10088d3f8,1);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_setResultHandlerQueue__10088d400,local_430);
  uVar5 = _objc_alloc_init(PTR__OBJC_CLASS___PHVideoRequestOptions_10082b538);
  local_518 = uVar5;
  (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_setNetworkAccessAllowed__10088d3e0,0);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_setVersion__10088d3e8,0);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_setDeliveryMode__10088d3d0,1);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_setResultHandlerQueue__10088d400,local_430);
  uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                    (local_438,PTR_s_assetUUIDToAssetDictionary_10088d3c0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  puVar8 = PTR__objc_retain_10082c7b8;
  local_618 = PTR___NSConcreteStackBlock_10082caf0;
  local_610 = 0xc2000000;
  local_608 = FUN_1004a4302;
  local_600 = &DAT_10085ce38;
  local_5f8 = (dispatch_group_t)(*(code *)PTR__objc_retain_10082c7b8)(local_4c0);
  local_418 = local_5f8;
  local_5f0 = (*(code *)puVar8)(local_4a8);
  local_4d0 = local_5f0;
  local_5e8 = (*(code *)puVar8)(uVar5);
  local_528 = local_5e8;
  local_5e0 = (*(code *)puVar8)(local_4a0);
  local_408 = local_5e0;
  local_5d8 = (*(code *)puVar8)(local_4c8);
  local_520 = local_5d8;
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar7,PTR_s_enumerateKeysAndObjectsUsingBloc_10088d428,&local_618);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  _dispatch_group_wait(local_418,0xffffffffffffffff);
  local_8c8 = 0;
  lStack_8c0 = 0;
  local_8b8 = (long *)0x0;
  uStack_8b0 = 0;
  local_8a8 = 0;
  uStack_8a0 = 0;
  local_898 = 0;
  uStack_890 = 0;
  local_460 = (*(code *)PTR__objc_retain_10082c7b8)(uVar4);
  puVar8 = (undefined *)
           (*(code *)PTR__objc_msgSend_10082c770)
                     (local_460,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_8c8,local_d0
                      ,0x10);
  if (puVar8 != (undefined *)0x0) {
    local_420 = (undefined *)*local_8b8;
    do {
      local_400 = PTR_s_uuid_10088c5d8;
      local_428 = PTR_s_objectForKeyedSubscript__10088be30;
      local_440 = PTR_s_hasAdjustments_10088d430;
      local_470 = PTR_s_assetResourcesForAsset__10088d438;
      local_468 = PTR_s_privateFileURL_10088d440;
      local_490 = PTR_s_isHighFrameRateVideo_10088d448;
      local_498 = PTR_s_mainFileURL_10088d418;
      puVar6 = (undefined *)0x0;
      local_410 = puVar8;
      do {
        if ((undefined *)*local_8b8 != local_420) {
          _objc_enumerationMutation(local_460);
        }
        local_3d8 = *(long *)(lStack_8c0 + (long)puVar6 * 8);
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(local_3d8,local_400);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(local_408,local_428,uVar4);
        local_3e8 = (undefined *)_objc_retainAutoreleasedReturnValue(uVar5);
        local_3f8 = puVar6;
        (*(code *)PTR__objc_release_10082c7b0)(uVar4);
        cVar2 = FUN_1004a4776(local_3e8);
        if (cVar2 == '\0') {
          cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(local_3d8,local_440);
          if (cVar2 == '\0') {
            uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(local_3d8,local_498);
            lVar9 = _objc_retainAutoreleasedReturnValue(uVar4);
          }
          else {
            local_7d8 = 0;
            uStack_7d0 = 0;
            local_7e8 = 0;
            uStack_7e0 = 0;
            local_7f8 = (long *)0x0;
            uStack_7f0 = 0;
            local_808 = 0;
            lStack_800 = 0;
            uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                              (PTR__OBJC_CLASS___PHAssetResource_10082b500,local_470,local_3d8);
            local_3f0 = (undefined *)_objc_retainAutoreleasedReturnValue(uVar4);
            local_3e0 = (undefined *)0x0;
            lVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                              (local_3f0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_808
                               ,local_150,0x10);
            if (lVar9 == 0) {
              (*(code *)PTR__objc_release_10082c7b0)(local_3f0);
              lVar9 = 0;
              puVar8 = (undefined *)0x0;
            }
            else {
              lVar13 = *local_7f8;
              local_3e0 = (undefined *)0x0;
              do {
                puVar8 = PTR_s_type_10088c110;
                lVar12 = 0;
                do {
                  if (*local_7f8 != lVar13) {
                    _objc_enumerationMutation(local_3f0);
                  }
                  uVar4 = *(undefined8 *)(lStack_800 + lVar12 * 8);
                  lVar10 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar8);
                  if (lVar10 == 6) {
                    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,local_468);
                    lVar9 = _objc_retainAutoreleasedReturnValue(uVar4);
                    goto LAB_1004a26c9;
                  }
                  lVar10 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar8);
                  if (lVar10 == 2) {
                    puVar6 = (undefined *)(*(code *)PTR__objc_retain_10082c7b8)(uVar4);
                    (*(code *)PTR__objc_release_10082c7b0)(local_3e0);
                    local_3e0 = puVar6;
                  }
                  lVar12 = lVar12 + 1;
                } while (lVar9 != lVar12);
                lVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                                  (local_3f0,PTR_s_countByEnumeratingWithState_obje_10088bb48,
                                   &local_808,local_150,0x10);
              } while (lVar9 != 0);
              lVar9 = 0;
LAB_1004a26c9:
              (*(code *)PTR__objc_release_10082c7b0)(local_3f0);
              puVar8 = local_3e0;
              if (local_3e0 != (undefined *)0x0 && lVar9 == 0) {
                cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(local_3d8,local_490);
                if (cVar2 == '\0') {
                  lVar9 = 0;
                  puVar8 = local_3e0;
                }
                else {
                  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(local_3e0,local_468);
                  lVar9 = _objc_retainAutoreleasedReturnValue(uVar4);
                  puVar8 = local_3e0;
                }
              }
            }
            (*(code *)PTR__objc_release_10082c7b0)(puVar8);
          }
          cVar2 = FUN_1004a4776(lVar9);
          puVar8 = PTR__objc_retain_10082c7b8;
          if (cVar2 != '\0') {
            local_688 = PTR___NSConcreteStackBlock_10082caf0;
            local_680 = 0xc2000000;
            local_678 = FUN_1004a486e;
            local_670 = &DAT_10085ce68;
            local_668 = (*(code *)PTR__objc_retain_10082c7b8)(local_408);
            local_660 = local_3d8;
            local_658 = (*(code *)puVar8)(lVar9);
            _dispatch_group_async(local_418,local_430,&local_688);
            (*(code *)PTR__objc_release_10082c7b0)(local_658);
            (*(code *)PTR__objc_release_10082c7b0)(local_668);
          }
          (*(code *)PTR__objc_release_10082c7b0)(lVar9);
        }
        (*(code *)PTR__objc_release_10082c7b0)(local_3e8);
        puVar6 = local_3f8 + 1;
      } while (puVar6 != local_410);
      puVar8 = (undefined *)
               (*(code *)PTR__objc_msgSend_10082c770)
                         (local_460,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_8c8,
                          local_d0,0x10);
    } while (puVar8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(local_460);
  uVar4 = _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0);
  puVar8 = local_488;
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(local_488,PTR_s_count_10088bdc0);
  local_440 = (undefined *)
              (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_initWithCapacity__10088c9d8,uVar5);
  local_858 = 0;
  uStack_850 = 0;
  local_868 = 0;
  uStack_860 = 0;
  local_878 = (long *)0x0;
  uStack_870 = 0;
  local_888 = 0;
  lStack_880 = 0;
  local_458 = (*(code *)PTR__objc_retain_10082c7b8)(puVar8);
  puVar8 = (undefined *)
           (*(code *)PTR__objc_msgSend_10082c770)
                     (local_458,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_888,
                      local_1d0,0x10);
  if (puVar8 != (undefined *)0x0) {
    local_420 = (undefined *)*local_878;
    do {
      local_428 = PTR_s_assetResourcesForAsset__10088d438;
      puVar6 = (undefined *)0x0;
      local_410 = puVar8;
      do {
        if ((undefined *)*local_878 != local_420) {
          _objc_enumerationMutation(local_458);
        }
        local_3d8 = *(long *)(lStack_880 + (long)puVar6 * 8);
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___PHAssetResource_10082b500,local_428);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        local_798 = 0;
        uStack_790 = 0;
        local_7a8 = 0;
        uStack_7a0 = 0;
        local_7b8 = (long *)0x0;
        uStack_7b0 = 0;
        local_7c8 = 0;
        lStack_7c0 = 0;
        local_3e8 = (undefined *)(*(code *)PTR__objc_retain_10082c7b8)(uVar4);
        lVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (local_3e8,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_7c8,
                           local_250,0x10);
        local_400 = puVar6;
        if (lVar9 != 0) {
          local_3e0 = (undefined *)*local_7b8;
          do {
            puVar8 = PTR_s_type_10088c110;
            local_3f8 = PTR_s_hasAdjustments_10088d430;
            local_3f0 = PTR_s_privateFileURL_10088d440;
            lVar13 = 0;
            pcVar11 = (code *)PTR__objc_msgSend_10082c770;
            do {
              if ((undefined *)*local_7b8 != local_3e0) {
                _objc_enumerationMutation(local_3e8);
              }
              uVar4 = *(undefined8 *)(lStack_7c0 + lVar13 * 8);
              lVar12 = (*pcVar11)(uVar4,puVar8);
              if ((lVar12 == 10) ||
                 ((lVar12 = (*pcVar11)(uVar4,puVar8), lVar12 == 9 &&
                  (cVar2 = (*pcVar11)(local_3d8,local_3f8), cVar2 == '\0')))) {
                uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,local_3f0);
                lVar12 = _objc_retainAutoreleasedReturnValue(uVar5);
                (*(code *)PTR__objc_release_10082c7b0)(lVar12);
                pcVar11 = (code *)PTR__objc_msgSend_10082c770;
                if (lVar12 != 0) {
                  local_6c0 = PTR___NSConcreteStackBlock_10082caf0;
                  local_6b8 = 0xc2000000;
                  local_6b0 = FUN_1004a48d9;
                  local_6a8 = &DAT_10085ce68;
                  local_6a0 = (*(code *)PTR__objc_retain_10082c7b8)(local_440);
                  local_698 = local_3d8;
                  local_690 = uVar4;
                  _dispatch_group_async(local_418,local_430,&local_6c0);
                  (*(code *)PTR__objc_release_10082c7b0)(local_6a0);
                  goto LAB_1004a2b96;
                }
              }
              lVar13 = lVar13 + 1;
            } while (lVar9 != lVar13);
            lVar9 = (*pcVar11)(local_3e8,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_7c8
                               ,local_250,0x10);
          } while (lVar9 != 0);
        }
LAB_1004a2b96:
        (*(code *)PTR__objc_release_10082c7b0)(local_3e8);
        (*(code *)PTR__objc_release_10082c7b0)(local_3e8);
        puVar6 = local_400 + 1;
      } while (puVar6 != local_410);
      puVar8 = (undefined *)
               (*(code *)PTR__objc_msgSend_10082c770)
                         (local_458,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_888,
                          local_1d0,0x10);
    } while (puVar8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(local_458);
  _dispatch_group_wait(local_418,0xffffffffffffffff);
  uVar4 = _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(local_408,PTR_s_count_10088bdc0);
  local_428 = (undefined *)
              (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_initWithCapacity__10088c9d8,uVar5);
  local_758 = 0;
  uStack_750 = 0;
  local_768 = 0;
  uStack_760 = 0;
  local_778 = (long *)0x0;
  uStack_770 = 0;
  local_788 = 0;
  lStack_780 = 0;
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(local_408,PTR_s_allKeys_10088d450);
  local_400 = (undefined *)_objc_retainAutoreleasedReturnValue(uVar4);
  puVar6 = (undefined *)
           (*(code *)PTR__objc_msgSend_10082c770)
                     (local_400,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_788,
                      local_2d0,0x10);
  puVar8 = PTR__objc_release_10082c7b0;
  if (puVar6 != (undefined *)0x0) {
    local_3d8 = *local_778;
    do {
      local_3e0 = PTR_s_objectForKeyedSubscript__10088be30;
      local_3f0 = PTR_s_hasAdjustments_10088d430;
      local_410 = PTR_s_isRAW_10088d458;
      local_3f8 = PTR_s_mainFileURL_10088d418;
      local_420 = PTR_s_uuid_10088c5d8;
      puVar14 = (undefined *)0x0;
      local_3e8 = puVar6;
      do {
        if (*local_778 != local_3d8) {
          _objc_enumerationMutation(local_400);
        }
        uVar4 = *(undefined8 *)(lStack_780 + (long)puVar14 * 8);
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                          (local_438,PTR_s_assetUUIDToAssetDictionary_10088d3c0);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,local_3e0,uVar4);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        (*(code *)puVar8)(uVar5);
        cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,local_3f0);
        if ((cVar2 == '\0') &&
           (cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,local_410), cVar2 == '\0')) {
          uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,local_420);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar5);
          uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(local_408,local_3e0,uVar7);
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          (*(code *)puVar8)(uVar7);
        }
        else {
          uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,local_3f8);
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        }
        puVar6 = PTR__objc_retain_10082c7b8;
        local_650 = PTR___NSConcreteStackBlock_10082caf0;
        local_648 = 0xc2000000;
        local_640 = FUN_1004a4979;
        local_638 = &DAT_10085ce68;
        local_630 = (*(code *)PTR__objc_retain_10082c7b8)(local_428);
        local_628 = uVar4;
        local_620 = uVar5;
        uVar5 = (*(code *)puVar6)(uVar5);
        uVar4 = (*(code *)puVar6)(uVar4);
        _dispatch_group_async(local_418,local_430,&local_650);
        (*(code *)puVar8)(local_620);
        (*(code *)puVar8)(local_628);
        (*(code *)puVar8)(local_630);
        (*(code *)puVar8)(uVar5);
        (*(code *)puVar8)(uVar4);
        puVar14 = puVar14 + 1;
      } while (local_3e8 != puVar14);
      puVar6 = (undefined *)
               (*(code *)PTR__objc_msgSend_10082c770)
                         (local_400,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_788,
                          local_2d0,0x10);
    } while (puVar6 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(local_400);
  _dispatch_group_wait(local_418,0xffffffffffffffff);
  uVar4 = _objc_alloc(PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(local_408,PTR_s_count_10088bdc0);
  local_410 = (undefined *)
              (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_initWithCapacity__10088c9d8,uVar5);
  uVar4 = _objc_alloc_init(PTR__OBJC_CLASS___PHImageRequestOptions_10082b520);
  local_470 = (undefined *)uVar4;
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setDeliveryMode__10088d3d0,1);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setLoadingMode__10088d3d8,0x10000);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setNetworkAccessAllowed__10088d3e0,0);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setVersion__10088d3e8,0);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setSynchronous__10088d3f0,0);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setOnlyUseFetchedAssetProperties_10088d3f8,1);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_setResultHandlerQueue__10088d400,local_430);
  local_718 = 0;
  uStack_710 = 0;
  local_728 = 0;
  uStack_720 = 0;
  local_738 = (long *)0x0;
  uStack_730 = 0;
  local_748 = 0;
  lStack_740 = 0;
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(local_408,PTR_s_allKeys_10088d450);
  puVar6 = (undefined *)_objc_retainAutoreleasedReturnValue(uVar4);
  puVar14 = (undefined *)
            (*(code *)PTR__objc_msgSend_10082c770)
                      (puVar6,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_748,local_350,
                       0x10);
  puVar8 = PTR__objc_release_10082c7b0;
  if (puVar14 != (undefined *)0x0) {
    local_3d8 = *local_738;
    local_3f8 = puVar6;
    do {
      local_3e0 = PTR_s_objectForKeyedSubscript__10088be30;
      local_3f0 = PTR_s_requestImageForAsset_targetSize__10088d420;
      puVar15 = (undefined *)0x0;
      local_3e8 = puVar14;
      do {
        if (*local_738 != local_3d8) {
          _objc_enumerationMutation(puVar6);
        }
        uVar4 = *(undefined8 *)(lStack_740 + (long)puVar15 * 8);
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                          (local_438,PTR_s_assetUUIDToAssetDictionary_10088d3c0);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,local_3e0,uVar4);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        (*(code *)puVar8)(uVar5);
        pdVar1 = local_418;
        _dispatch_group_enter(local_418);
        puVar6 = PTR__objc_retain_10082c7b8;
        local_510 = PTR___NSConcreteStackBlock_10082caf0;
        local_508 = 0xc2000000;
        local_500 = FUN_1004a49e4;
        local_4f8 = &DAT_10085ce08;
        local_4f0 = (*(code *)PTR__objc_retain_10082c7b8)(local_410);
        uVar4 = (*(code *)puVar6)(uVar4);
        local_4e8 = uVar4;
        local_4e0 = (*(code *)puVar6)(local_408);
        local_4d8 = (*(code *)puVar6)(pdVar1);
        in_XMM1_Da = (undefined4)DAT_10074b9b0;
        (*(code *)PTR__objc_msgSend_10082c770)
                  (in_XMM1_Da,in_XMM1_Da,local_4d0,local_3f0,uVar4,0,local_470,&local_510);
        (*(code *)puVar8)(local_4d8);
        (*(code *)puVar8)(local_4e0);
        (*(code *)puVar8)(local_4e8);
        (*(code *)puVar8)(local_4f0);
        (*(code *)puVar8)(uVar4);
        puVar6 = local_3f8;
        puVar15 = puVar15 + 1;
      } while (local_3e8 != puVar15);
      puVar14 = (undefined *)
                (*(code *)PTR__objc_msgSend_10082c770)
                          (local_3f8,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_748,
                           local_350,0x10);
    } while (puVar14 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(puVar6);
  _dispatch_group_wait(local_418,0xffffffffffffffff);
  local_708 = 0;
  lStack_700 = 0;
  local_6f8 = (long *)0x0;
  uStack_6f0 = 0;
  local_6e8 = 0;
  uStack_6e0 = 0;
  local_6d8 = 0;
  uStack_6d0 = 0;
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (local_438,PTR_s_assetUUIDToAssetDictionary_10088d3c0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_allValues_10088d460);
  local_450 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  local_468 = (undefined *)
              (*(code *)PTR__objc_msgSend_10082c770)
                        (local_450,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_708,
                         local_3d0,0x10);
  puVar8 = PTR__objc_msgSend_10082c770;
  if (local_468 != (undefined *)0x0) {
    local_568 = *local_6f8;
    do {
      local_498 = PTR_s_fetchPropertySetsIfNeeded_10088d468;
      local_3f0 = PTR_s_uuid_10088c5d8;
      local_490 = PTR_s_setIdentifier__10088d470;
      local_3e8 = PTR_s_objectForKeyedSubscript__10088be30;
      local_560 = PTR_s_setCurrentVersionURL__10088d478;
      local_558 = PTR_s_setOriginalURL__10088d480;
      local_550 = PTR_s_setThumbURL__10088d488;
      local_548 = PTR_s_setVideoComplementURL__10088d490;
      local_488 = PTR_s_creationDate_10088ca80;
      local_5d0 = PTR_s_setCreationDate__10088d498;
      local_5c8 = PTR_s_modificationDate_10088cae8;
      local_5c0 = PTR_s_setModificationDate__10088d4a0;
      local_5b8 = PTR_s_isFavorite_10088caa8;
      local_5b0 = PTR_s_setIsFavorite__10088d4a8;
      local_3f8 = PTR_s_isVideo_10088cab8;
      local_5a8 = PTR_s_setIsVideo__10088d4b0;
      local_5a0 = PTR_s_isHEIF_10088d4b8;
      local_420 = PTR_s_setIsHighEfficiency__10088d4c0;
      local_540 = PTR_s_photosInfoPanelExtendedPropertie_10088d4c8;
      local_538 = PTR_s_codec_10088d4d0;
      local_530 = PTR_s_isEqualToString__10088bb98;
      local_400 = PTR_s_locationCoordinate_10088d4d8;
      local_598 = PTR_s_setLatitude__10088d4e0;
      local_590 = PTR_s_setLongitude__10088d4e8;
      local_588 = PTR_s_descriptionProperties_10088d4f0;
      local_580 = PTR_s_assetDescription_10088d4f8;
      local_578 = PTR_s_setUserDescription__10088d500;
      local_570 = PTR_s_setObject_forKey__10088c000;
      local_3d8 = 0;
      do {
        if (*local_6f8 != local_568) {
          _objc_enumerationMutation(local_450);
        }
        uVar4 = *(undefined8 *)(lStack_700 + local_3d8 * 8);
        (*(code *)puVar8)(uVar4,local_498);
        local_3e0 = (undefined *)_objc_alloc_init(&objc::class_t::AMPPHMediaObject);
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,local_3f0);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        (*(code *)puVar8)(local_3e0,local_490,uVar5);
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,local_3f0);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(local_408,local_3e8,uVar5);
        lVar9 = _objc_retainAutoreleasedReturnValue(uVar7);
        puVar6 = PTR__objc_release_10082c7b0;
        (*(code *)PTR__objc_release_10082c7b0)(lVar9);
        (*(code *)puVar6)(uVar5);
        if (lVar9 != 0) {
          uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,local_3f0);
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(local_408,local_3e8,uVar5);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          (*(code *)puVar8)(local_3e0,local_560,uVar7);
          puVar6 = PTR__objc_release_10082c7b0;
          (*(code *)PTR__objc_release_10082c7b0)(uVar7);
          (*(code *)puVar6)(uVar5);
          uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,local_3f0);
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(local_428,local_3e8,uVar5);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          (*(code *)puVar8)(local_3e0,local_558,uVar7);
          puVar6 = PTR__objc_release_10082c7b0;
          (*(code *)PTR__objc_release_10082c7b0)(uVar7);
          (*(code *)puVar6)(uVar5);
          uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,local_3f0);
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(local_410,local_3e8,uVar5);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          (*(code *)puVar8)(local_3e0,local_550,uVar7);
          puVar6 = PTR__objc_release_10082c7b0;
          (*(code *)PTR__objc_release_10082c7b0)(uVar7);
          (*(code *)puVar6)(uVar5);
          uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,local_3f0);
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(local_440,local_3e8,uVar5);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          (*(code *)puVar8)(local_3e0,local_548,uVar7);
          puVar6 = PTR__objc_release_10082c7b0;
          (*(code *)PTR__objc_release_10082c7b0)(uVar7);
          (*(code *)puVar6)(uVar5);
        }
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,local_488);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        (*(code *)puVar8)(local_3e0,local_5d0,uVar5);
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,local_5c8);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        (*(code *)puVar8)(local_3e0,local_5c0,uVar5);
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        cVar2 = (*(code *)puVar8)(uVar4,local_5b8);
        (*(code *)puVar8)(local_3e0,local_5b0,(int)cVar2);
        cVar2 = (*(code *)puVar8)(uVar4,local_3f8);
        (*(code *)puVar8)(local_3e0,local_5a8,(int)cVar2);
        cVar2 = (*(code *)puVar8)(uVar4,local_5a0);
        (*(code *)puVar8)(local_3e0,local_420,(int)cVar2);
        cVar2 = (*(code *)puVar8)(local_3e0,local_3f8);
        if (cVar2 != '\0') {
          uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,local_540);
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,local_538);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          cVar2 = (*(code *)puVar8)(uVar7,local_530,&cf_hvc1);
          puVar6 = PTR__objc_release_10082c7b0;
          (*(code *)PTR__objc_release_10082c7b0)(uVar7);
          (*(code *)puVar6)(uVar5);
          if (cVar2 != '\0') {
            (*(code *)puVar8)(local_3e0,local_420,1);
          }
        }
        (*(code *)puVar8)(uVar4,local_400);
        (*(code *)puVar8)(local_3e0,local_598);
        (*(code *)puVar8)(uVar4,local_400);
        (*(code *)puVar8)(in_XMM1_Da,local_3e0,local_590);
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,local_588);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,local_580);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        (*(code *)puVar8)(local_3e0,local_578,uVar7);
        puVar6 = PTR__objc_release_10082c7b0;
        (*(code *)PTR__objc_release_10082c7b0)(uVar7);
        (*(code *)puVar6)(uVar5);
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,local_3f0);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        (*(code *)puVar8)(local_480,local_570,local_3e0,uVar4);
        puVar6 = PTR__objc_release_10082c7b0;
        (*(code *)PTR__objc_release_10082c7b0)(uVar4);
        (*(code *)puVar6)(local_3e0);
        local_3d8 = local_3d8 + 1;
      } while (local_468 != (undefined *)local_3d8);
      local_468 = (undefined *)
                  (*(code *)puVar8)(local_450,PTR_s_countByEnumeratingWithState_obje_10088bb48,
                                    &local_708,local_3d0,0x10);
    } while (local_468 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(local_450);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(local_480,PTR_s_copy_10088d508);
  (*(code *)PTR__objc_msgSend_10082c770)(local_438,PTR_s_setMasterImageDictionary__10088d510,uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(local_470);
  (*(code *)PTR__objc_release_10082c7b0)(local_410);
  (*(code *)PTR__objc_release_10082c7b0)(local_428);
  (*(code *)PTR__objc_release_10082c7b0)(local_440);
  (*(code *)PTR__objc_release_10082c7b0)(local_5d8);
  (*(code *)PTR__objc_release_10082c7b0)(local_5e0);
  (*(code *)PTR__objc_release_10082c7b0)(local_5e8);
  (*(code *)PTR__objc_release_10082c7b0)(local_5f0);
  (*(code *)PTR__objc_release_10082c7b0)(local_5f8);
  (*(code *)PTR__objc_release_10082c7b0)(local_528);
  (*(code *)PTR__objc_release_10082c7b0)(local_520);
  (*(code *)PTR__objc_release_10082c7b0)(local_418);
  (*(code *)PTR__objc_release_10082c7b0)(local_430);
  (*(code *)PTR__objc_release_10082c7b0)(local_4d0);
  (*(code *)PTR__objc_release_10082c7b0)(local_408);
  (*(code *)PTR__objc_release_10082c7b0)(local_810);
  (*(code *)PTR__objc_release_10082c7b0)(local_818);
  (*(code *)PTR__objc_release_10082c7b0)(local_458);
  (*(code *)PTR__objc_release_10082c7b0)(local_460);
  (*(code *)PTR__objc_release_10082c7b0)(local_448);
  (*(code *)PTR__objc_release_10082c7b0)(local_478);
  (*(code *)PTR__objc_release_10082c7b0)(local_480);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

