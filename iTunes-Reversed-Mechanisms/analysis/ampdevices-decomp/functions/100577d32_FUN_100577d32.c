// name: FUN_100577d32
// address: 100577d32

void FUN_100577d32(undefined8 param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  size_t sVar16;
  undefined1 *puVar17;
  void *pvVar18;
  void *pvVar19;
  undefined *puVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined8 local_428;
  long lStack_420;
  long *local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  long lStack_3e0;
  long *local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  long *local_3a0;
  undefined *local_398;
  undefined *local_390;
  undefined *local_388;
  undefined *local_380;
  long *local_378;
  long local_370;
  long *local_368;
  long local_360;
  undefined8 local_358;
  undefined1 *local_350;
  undefined4 local_348;
  char *local_344;
  undefined2 local_33c;
  int local_33a;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  long local_38;
  
  puVar11 = PTR__objc_msgSend_10082c770;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(param_1,PTR_s_syncPhotos_10088d848);
  *(undefined1 *)(param_4 + 0x34) = uVar5;
  uVar5 = (*(code *)puVar11)(param_1,PTR_s_photoSyncSource_10088d850);
  *(undefined1 *)(param_4 + 0x35) = uVar5;
  uVar5 = (*(code *)puVar11)(param_1,PTR_s_photoSyncMode_10088d858);
  *(undefined1 *)(param_4 + 0x36) = uVar5;
  uVar5 = (*(code *)puVar11)(param_1,PTR_s_copyOriginalPhotos_10088d860);
  *(undefined1 *)(param_4 + 0x37) = uVar5;
  uVar5 = (*(code *)puVar11)(param_1,PTR_s_photoEventCount_10088d868);
  *(undefined1 *)(param_4 + 0xf4) = uVar5;
  uVar5 = (*(code *)puVar11)(param_1,PTR_s_autoIncludePhotosEnabled_10088d870);
  *(undefined1 *)(param_4 + 0x130) = uVar5;
  uVar5 = (*(code *)puVar11)(param_1,PTR_s_onlyFavoritePhotos_10088d878);
  *(undefined1 *)(param_4 + 0x131) = uVar5;
  uVar5 = (*(code *)puVar11)(param_1,PTR_s_photoSyncAllAlbums_10088d880);
  *(undefined1 *)(param_4 + 0x132) = uVar5;
  uVar5 = (*(code *)puVar11)(param_1,PTR_s_photoSyncAllFaces_10088d888);
  *(undefined1 *)(param_4 + 0x133) = uVar5;
  uVar5 = (*(code *)puVar11)(param_1,PTR_s_photoSyncPhotoVideos_10088d890);
  *(undefined1 *)(param_4 + 0x116) = uVar5;
  uVar5 = (*(code *)puVar11)(param_1,PTR_s_photosAppSyncMode_10088d898);
  *param_3 = uVar5;
  uVar5 = (*(code *)puVar11)(param_1,PTR_s_photosAppEventCount_10088d8a0);
  param_3[1] = uVar5;
  uVar5 = (*(code *)puVar11)(param_1,PTR_s_photosAppCopyOriginalPhotos_10088d8a8);
  param_3[2] = uVar5;
  uVar5 = (*(code *)puVar11)(param_1,PTR_s_photosAppSyncPhotoVideos_10088d8b0);
  param_3[3] = uVar5;
  uVar5 = (*(code *)puVar11)(param_1,PTR_s_photosAppSyncAllAlbums_10088d8b8);
  param_3[4] = uVar5;
  uVar5 = (*(code *)puVar11)(param_1,PTR_s_photosAppSyncAllFaces_10088d8c0);
  param_3[5] = uVar5;
  uVar5 = (*(code *)puVar11)(param_1,PTR_s_photosAppAutoIncludeEnabled_10088d8c8);
  param_3[6] = uVar5;
  uVar5 = (*(code *)puVar11)(param_1,PTR_s_photosAppOnlyFavorites_10088d8d0);
  param_3[7] = uVar5;
  local_358 = param_1;
  uVar5 = (*(code *)puVar11)(param_1,PTR_s_photosAppCustomAlbumOrder_10088d8d8);
  param_3[8] = uVar5;
  local_368 = (long *)(param_3 + 0x10);
  pvVar19 = *(void **)(param_3 + 0x10);
  if (pvVar19 != (void *)0x0) {
    *(void **)(param_3 + 0x18) = pvVar19;
    operator_delete(pvVar19);
    *local_368 = 0;
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined8 *)(param_3 + 0x20) = 0;
  }
  *local_368 = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  puVar11 = PTR_s_photosAppAlbums_10088d8e0;
  local_350 = param_3;
  uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(local_358,PTR_s_photosAppAlbums_10088d8e0);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  lVar9 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,PTR_s_count_10088bdc0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  if (lVar9 != 0) {
    uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(local_358,puVar11);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,PTR_s_count_10088bdc0);
    local_3a0 = (long *)(local_350 + 0x20);
    lVar9 = *local_368;
    if ((ulong)((*local_3a0 - lVar9 >> 2) * -0x5555555555555555) < uVar10) {
      if (0x1555555555555555 < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_10022bc28(local_368);
      }
      lVar15 = *(long *)(local_350 + 0x18);
      auVar22 = FUN_10022bc38(local_3a0,uVar10);
      puVar17 = local_350;
      lVar9 = (lVar15 - lVar9) + auVar22._0_8_;
      sVar16 = *(long *)(local_350 + 0x18) - (long)*(void **)(local_350 + 0x10);
      pvVar18 = (void *)(lVar9 - sVar16);
      _memcpy(pvVar18,*(void **)(local_350 + 0x10),sVar16);
      pvVar19 = *(void **)(puVar17 + 0x10);
      *(void **)(puVar17 + 0x10) = pvVar18;
      *(long *)(puVar17 + 0x18) = lVar9;
      *(long *)(puVar17 + 0x20) = auVar22._0_8_ + auVar22._8_8_ * 0xc;
      puVar11 = PTR_s_photosAppAlbums_10088d8e0;
      if (pvVar19 != (void *)0x0) {
        operator_delete(pvVar19);
      }
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
    local_3f8 = 0;
    uStack_3f0 = 0;
    local_408 = 0;
    uStack_400 = 0;
    local_418 = (long *)0x0;
    uStack_410 = 0;
    local_428 = 0;
    lStack_420 = 0;
    uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(local_358,puVar11);
    local_360 = _objc_retainAutoreleasedReturnValue(uVar8);
    puVar11 = (undefined *)
              (*(code *)PTR__objc_msgSend_10082c770)
                        (local_360,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_428,
                         local_b8,0x10);
    if (puVar11 != (undefined *)0x0) {
      local_370 = *local_418;
      do {
        local_398 = PTR_s_unsignedLongLongValue_10088be80;
        local_390 = PTR_s_photosAppSelectedAlbums_10088d8e8;
        local_388 = PTR_s_containsObject__10088caf0;
        puVar20 = (undefined *)0x0;
        local_380 = puVar11;
        do {
          if (*local_418 != local_370) {
            _objc_enumerationMutation(local_360);
          }
          uVar8 = *(undefined8 *)(lStack_420 + (long)puVar20 * 8);
          local_348 = local_348 & 0xff000000;
          uVar12 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,local_398);
          uVar13 = (*(code *)PTR__objc_msgSend_10082c770)(local_358,local_390);
          uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
          uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar13,local_388,uVar8);
          (*(code *)PTR__objc_release_10082c7b0)(uVar13);
          puVar17 = *(undefined1 **)(local_350 + 0x18);
          if (puVar17 < *(undefined1 **)(local_350 + 0x20)) {
            *puVar17 = uVar5;
            *(undefined2 *)(puVar17 + 1) = 0;
            puVar17[3] = 0;
            *(undefined8 *)(puVar17 + 4) = uVar12;
            puVar17 = puVar17 + 0xc;
          }
          else {
            lVar9 = (long)puVar17 - *local_368 >> 2;
            uVar10 = lVar9 * -0x5555555555555555 + 1;
            if (0x1555555555555555 < uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_10022bc28(local_368);
            }
            lVar15 = (long)*(undefined1 **)(local_350 + 0x20) - *local_368 >> 2;
            uVar3 = lVar15 * 0x5555555555555556;
            if (uVar10 < uVar3) {
              uVar10 = uVar3;
            }
            if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar15 * -0x5555555555555555)) {
              uVar10 = 0x1555555555555555;
            }
            if (uVar10 == 0) {
              auVar22 = ZEXT816(0);
            }
            else {
              auVar22 = FUN_10022bc38(local_3a0);
            }
            puVar4 = local_350;
            lVar15 = auVar22._0_8_;
            puVar2 = (undefined1 *)(lVar15 + lVar9 * 4);
            local_378 = (long *)(lVar15 + auVar22._8_8_ * 0xc);
            *puVar2 = uVar5;
            *(undefined2 *)(puVar2 + 1) = (undefined2)local_348;
            puVar2[3] = local_348._2_1_;
            *(undefined8 *)(puVar2 + 4) = uVar12;
            puVar17 = (undefined1 *)(lVar15 + 0xc + lVar9 * 4);
            sVar16 = *(long *)(local_350 + 0x18) - (long)*(void **)(local_350 + 0x10);
            _memcpy(puVar2 + -sVar16,*(void **)(local_350 + 0x10),sVar16);
            pvVar19 = *(void **)(puVar4 + 0x10);
            *(undefined1 **)(puVar4 + 0x10) = puVar2 + -sVar16;
            *(undefined1 **)(puVar4 + 0x18) = puVar17;
            *(long **)(puVar4 + 0x20) = local_378;
            if (pvVar19 != (void *)0x0) {
              operator_delete(pvVar19);
            }
          }
          *(undefined1 **)(local_350 + 0x18) = puVar17;
          puVar20 = puVar20 + 1;
        } while (local_380 != puVar20);
        puVar11 = (undefined *)
                  (*(code *)PTR__objc_msgSend_10082c770)
                            (local_360,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_428,
                             local_b8,0x10);
      } while (puVar11 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_10082c7b0)(local_360);
  }
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(local_358,PTR_s_photosFolderSyncMode_10088d8f0);
  local_350[0x68] = uVar5;
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (local_358,PTR_s_photosFolderCopyOriginalPhotos_10088d8f8);
  local_350[0x69] = uVar5;
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (local_358,PTR_s_photosFolderSyncPhotoVideos_10088d900);
  local_350[0x6a] = uVar5;
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (local_358,PTR_s_photosFolderCustomAlbumOrder_10088d908);
  puVar17 = local_350;
  local_350[0x6b] = uVar5;
  plVar1 = (long *)(local_350 + 0x4a8);
  pvVar19 = *(void **)(local_350 + 0x4a8);
  if (pvVar19 != (void *)0x0) {
    *(void **)(local_350 + 0x4b0) = pvVar19;
    operator_delete(pvVar19);
    *plVar1 = 0;
    *(undefined8 *)(puVar17 + 0x4b0) = 0;
    *(undefined8 *)(puVar17 + 0x4b8) = 0;
  }
  *plVar1 = 0;
  *(undefined8 *)(puVar17 + 0x4b0) = 0;
  *(undefined8 *)(puVar17 + 0x4b8) = 0;
  puVar11 = PTR_s_photosFolderBookmark_10088d910;
  local_378 = plVar1;
  uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(local_358,PTR_s_photosFolderBookmark_10088d910);
  lVar9 = _objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)PTR__objc_release_10082c7b0)(lVar9);
  if (lVar9 != 0) {
    *(undefined2 *)(local_350 + 0x70) = 0x101;
    uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(local_358,puVar11);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar8 = _objc_retainAutorelease(uVar8);
    uVar12 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,PTR_s_bytes_10088d918);
    uVar13 = (*(code *)PTR__objc_msgSend_10082c770)(local_358,puVar11);
    uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
    uVar14 = (*(code *)PTR__objc_msgSend_10082c770)(uVar13,PTR_s_length_10088bdf0);
    FUN_1001a833e(&local_348,uVar12,uVar14,0);
    FUN_1001a7b1c(local_350 + 0x78,&local_348);
    FUN_1001a85d4(&local_348);
    (*(code *)PTR__objc_release_10082c7b0)(uVar13);
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
    iVar7 = FUN_100170286(*(undefined8 *)(local_350 + 0x78),local_350 + 0x88,0,0,0);
    if ((iVar7 != -0x80) && (iVar7 != 0)) {
      uVar8 = FUN_1001cc310();
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      cVar6 = _os_log_type_enabled(uVar8,0x10);
      if (cVar6 != '\0') {
        local_348 = 0x8220202;
        local_344 = "Assertion failure";
        local_33c = 0x400;
        local_33a = iVar7;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_348,0x12);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar8);
    }
    puVar11 = PTR_s_photosFolderNames_10088d920;
    uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(local_358,PTR_s_photosFolderNames_10088d920);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    lVar9 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,PTR_s_count_10088bdc0);
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
    if (lVar9 != 0) {
      uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(local_358,puVar11);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(uVar8,PTR_s_count_10088bdc0);
      local_368 = (long *)(local_350 + 0x4b8);
      lVar9 = *local_378;
      if ((ulong)((*local_368 - lVar9 >> 2) * -0x7f01fc07f01fc07f) < uVar10) {
        if (0x7f01fc07f01fc0 < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_10022bfc4(local_378);
        }
        lVar15 = *(long *)(local_350 + 0x4b0);
        auVar22 = FUN_10022bfd4(local_368,uVar10);
        puVar17 = local_350;
        lVar9 = (lVar15 - lVar9) + auVar22._0_8_;
        sVar16 = *(long *)(local_350 + 0x4b0) - (long)*(void **)(local_350 + 0x4a8);
        pvVar18 = (void *)(lVar9 - sVar16);
        _memcpy(pvVar18,*(void **)(local_350 + 0x4a8),sVar16);
        pvVar19 = *(void **)(puVar17 + 0x4a8);
        *(void **)(puVar17 + 0x4a8) = pvVar18;
        *(long *)(puVar17 + 0x4b0) = lVar9;
        *(long *)(puVar17 + 0x4b8) = auVar22._8_8_ * 0x204 + auVar22._0_8_;
        puVar11 = PTR_s_photosFolderNames_10088d920;
        if (pvVar19 != (void *)0x0) {
          operator_delete(pvVar19);
        }
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar8);
      local_3b8 = 0;
      uStack_3b0 = 0;
      local_3c8 = 0;
      uStack_3c0 = 0;
      local_3d8 = (long *)0x0;
      uStack_3d0 = 0;
      local_3e8 = 0;
      lStack_3e0 = 0;
      uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(local_358,puVar11);
      local_370 = _objc_retainAutoreleasedReturnValue(uVar8);
      puVar11 = (undefined *)
                (*(code *)PTR__objc_msgSend_10082c770)
                          (local_370,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_3e8,
                           local_138,0x10);
      if (puVar11 != (undefined *)0x0) {
        lVar9 = *local_3d8;
        local_360 = lVar9;
        do {
          local_390 = PTR_s_photosFolderSelectedNames_10088d928;
          local_388 = PTR_s_containsObject__10088caf0;
          puVar20 = (undefined *)0x0;
          local_380 = puVar11;
          do {
            if (*local_3d8 != lVar9) {
              _objc_enumerationMutation(local_370);
            }
            uVar8 = *(undefined8 *)(lStack_3e0 + (long)puVar20 * 8);
            local_398 = puVar20;
            ___bzero(&local_348,0x204);
            FUN_1001e115f(uVar8,&local_344);
            uVar12 = (*(code *)PTR__objc_msgSend_10082c770)(local_358,local_390);
            uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
            uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar12,local_388,uVar8);
            local_348 = CONCAT31(local_348._1_3_,uVar5);
            (*(code *)PTR__objc_release_10082c7b0)(uVar12);
            pvVar19 = *(void **)(local_350 + 0x4b0);
            if (pvVar19 < *(void **)(local_350 + 0x4b8)) {
              _memcpy(pvVar19,&local_348,0x204);
              lVar21 = (long)pvVar19 + 0x204;
            }
            else {
              lVar9 = (long)pvVar19 - *local_378 >> 2;
              uVar10 = lVar9 * -0x7f01fc07f01fc07f + 1;
              if (0x7f01fc07f01fc0 < uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_10022bfc4();
              }
              lVar15 = (long)*(void **)(local_350 + 0x4b8) - *local_378 >> 2;
              uVar3 = lVar15 * 0x1fc07f01fc07f02;
              if (uVar10 < uVar3) {
                uVar10 = uVar3;
              }
              if (0x3f80fe03f80fdf < (ulong)(lVar15 * -0x7f01fc07f01fc07f)) {
                uVar10 = 0x7f01fc07f01fc0;
              }
              if (uVar10 == 0) {
                auVar22 = ZEXT816(0);
              }
              else {
                auVar22 = FUN_10022bfd4(local_368);
              }
              lVar15 = auVar22._0_8_;
              lVar9 = lVar9 * 4;
              pvVar19 = (void *)(lVar9 + lVar15);
              _memcpy(pvVar19,&local_348,0x204);
              puVar17 = local_350;
              lVar21 = lVar9 + lVar15 + 0x204;
              sVar16 = *(long *)(local_350 + 0x4b0) - (long)*(void **)(local_350 + 0x4a8);
              pvVar19 = (void *)((long)pvVar19 - sVar16);
              _memcpy(pvVar19,*(void **)(local_350 + 0x4a8),sVar16);
              pvVar18 = *(void **)(puVar17 + 0x4a8);
              *(void **)(puVar17 + 0x4a8) = pvVar19;
              *(long *)(puVar17 + 0x4b0) = lVar21;
              *(long *)(puVar17 + 0x4b8) = auVar22._8_8_ * 0x204 + lVar15;
              lVar9 = local_360;
              if (pvVar18 != (void *)0x0) {
                operator_delete(pvVar18);
                lVar9 = local_360;
              }
            }
            *(long *)(local_350 + 0x4b0) = lVar21;
            puVar20 = local_398 + 1;
          } while (local_380 != puVar20);
          puVar11 = (undefined *)
                    (*(code *)PTR__objc_msgSend_10082c770)
                              (local_370,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_3e8
                               ,local_138,0x10);
        } while (puVar11 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_10082c7b0)(local_370);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

