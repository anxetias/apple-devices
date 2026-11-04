// name: FUN_100412388
// address: 100412388

int FUN_100412388(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  void *pvVar3;
  code *pcVar4;
  undefined *puVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  void *pvVar15;
  ulong uVar16;
  size_t sVar17;
  undefined4 uVar18;
  void *pvVar19;
  char *pcVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar24 [16];
  undefined8 in_stack_fffffffffffff4e8;
  undefined4 uVar25;
  undefined8 in_stack_fffffffffffff4f0;
  uint uVar26;
  undefined1 *in_stack_fffffffffffff4f8;
  undefined8 in_stack_fffffffffffff508;
  uint uVar27;
  undefined1 local_ad8 [16];
  double local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  long lStack_ab0;
  long *local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined1 local_a78 [16];
  undefined1 local_a68 [16];
  undefined1 local_a58 [16];
  undefined1 local_a48 [16];
  long local_a38;
  long local_a30;
  undefined8 local_a28;
  undefined8 local_a20;
  undefined *local_a18;
  undefined *local_a10;
  undefined *local_a08;
  undefined *local_a00;
  undefined *local_9f8;
  undefined *local_9f0;
  undefined *local_9e8;
  undefined *local_9e0;
  long local_9d8;
  undefined *local_9d0;
  undefined *local_9c8;
  undefined *local_9c0;
  double local_9b8;
  long local_9b0;
  undefined *local_9a8;
  long *local_9a0;
  undefined1 local_998 [16];
  undefined1 local_988 [16];
  undefined1 local_978 [16];
  undefined1 local_968 [16];
  undefined1 local_958 [16];
  undefined1 local_948 [16];
  long local_938;
  long local_930;
  undefined8 local_928;
  undefined1 local_920 [16];
  undefined1 local_910 [16];
  undefined8 local_900;
  char local_8f1;
  void *local_8f0;
  char local_8e1;
  undefined8 local_8e0;
  undefined1 local_8d8 [128];
  undefined8 local_858;
  undefined4 uStack_850;
  undefined2 local_84c;
  char *local_84a;
  undefined8 local_438;
  undefined4 uStack_430;
  undefined2 local_42c;
  char *local_42a;
  long local_38;
  
  puVar5 = PTR__objc_retain_10082c7b8;
  uVar25 = (undefined4)((ulong)in_stack_fffffffffffff4e8 >> 0x20);
  uVar26 = (uint)((ulong)in_stack_fffffffffffff4f0 >> 0x20);
  uVar27 = (uint)((ulong)in_stack_fffffffffffff508 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar10 = *param_3;
  local_900 = (*(code *)PTR__objc_retain_10082c7b8)(*param_2);
  local_938 = (*(code *)puVar5)(uVar10);
  local_8e1 = '\0';
  iVar9 = FUN_1001ceb24(*(undefined8 *)(*(long *)(param_1 + 8) + 0x10),0x696d7074,0,0,0);
  puVar5 = PTR_s_mediaLibraryTypeIdentifier_10088ca50;
  if (iVar9 == -0x80) goto LAB_100412638;
  if (iVar9 != 0) {
    uVar10 = FUN_1001cc310();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar6 = _os_log_type_enabled(uVar10,0x10);
    if (cVar6 != '\0') {
      local_858._0_4_ = 0x8220202;
      local_858._4_4_ = 0x7a0a90;
      uStack_850 = 1;
      local_84c = 0x400;
      local_84a = (char *)CONCAT44(local_84a._4_4_,iVar9);
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_858,0x12);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    goto LAB_100412638;
  }
  puVar22 = *(undefined8 **)(param_1 + 0x10);
  uVar10 = (*(code *)PTR__objc_msgSend_10082c770)
                     (local_900,PTR_s_mediaLibraryTypeIdentifier_10088ca50);
  uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
  uVar11 = (*(code *)PTR__objc_msgSend_10082c770)(local_900,PTR_s_identifier_10088ca58);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  iVar9 = (**(code **)*puVar22)(puVar22,uVar10,uVar11,&local_8e1);
  (*(code *)PTR__objc_release_10082c7b0)(uVar11);
  (*(code *)PTR__objc_release_10082c7b0)(uVar10);
  if (iVar9 != 0) goto LAB_100412638;
  uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(local_938,PTR_s_identifier_10088ca58);
  FUN_1001b7eb0(local_978,uVar10);
  if ((local_938 != 0) && (cVar6 = FUN_1001b8428(local_978), cVar6 != '\0')) {
    uVar10 = FUN_1001cc310();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar6 = _os_log_type_enabled(uVar10,0x10);
    if (cVar6 != '\0') {
      local_858._0_4_ = 0x8220202;
      local_858._4_4_ = 0x7a0a90;
      uStack_850 = 1;
      local_84c = 0x822;
      local_84a = "currentParentMediaGroup == nullptr || parentIDString.IsEmpty() == false";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_858,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    FUN_1001782e9(0,0);
  }
  uVar18 = **(undefined4 **)(param_1 + 0x18);
  local_8e0 = (*(code *)PTR__objc_retain_10082c7b8)(local_900);
  FUN_1001b7a44(&local_438);
  FUN_1001b7a44(local_8d8);
  FUN_1001b7a44(&local_ab8);
  FUN_1001b7a44(local_920);
  FUN_1001b7a44(local_958);
  uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(local_8e0,puVar5);
  uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
  cVar6 = FUN_1004100f4(uVar10);
  (*(code *)PTR__objc_release_10082c7b0)(uVar10);
  if (cVar6 == '\0') {
    uVar10 = FUN_1001cc310();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar6 = _os_log_type_enabled(uVar10,0x10);
    if (cVar6 != '\0') {
      local_84a = "iTunesAlbumKind != 0";
LAB_10041297a:
      local_84c = 0x822;
      uStack_850 = 1;
      local_858._4_4_ = 0x7a0a90;
      local_858._0_4_ = 0x8220202;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_858,0x16);
    }
LAB_10041299f:
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    local_8f0 = (void *)0x0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(local_8e0,PTR_s_name_10088be00);
    FUN_1001b81f2(&local_438,uVar10);
    cVar7 = FUN_1001b8428(&local_438);
    if (cVar7 != '\0') {
      uVar10 = FUN_1001cc310();
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      cVar6 = _os_log_type_enabled(uVar10,0x10);
      if (cVar6 != '\0') {
        local_84a = "name.IsEmpty() == false";
        goto LAB_10041297a;
      }
      goto LAB_10041299f;
    }
    uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(local_8e0,puVar5);
    FUN_1001b81f2(local_8d8,uVar10);
    cVar7 = FUN_1001b8428(local_8d8);
    if (cVar7 != '\0') {
      uVar10 = FUN_1001cc310();
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      cVar6 = _os_log_type_enabled(uVar10,0x10);
      if (cVar6 != '\0') {
        local_84a = "typeString.IsEmpty() == false";
        goto LAB_10041297a;
      }
      goto LAB_10041299f;
    }
    uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(local_8e0,PTR_s_identifier_10088ca58);
    FUN_1001b81f2(&local_ab8,uVar10);
    cVar7 = FUN_1001b8428(&local_ab8);
    if (cVar7 != '\0') {
      uVar10 = FUN_1001cc310();
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      cVar6 = _os_log_type_enabled(uVar10,0x10);
      if (cVar6 != '\0') {
        local_84a = "idString.IsEmpty() == false";
        goto LAB_10041297a;
      }
      goto LAB_10041299f;
    }
    local_8f0 = operator_new(0xa0,(nothrow_t *)PTR_nothrow_10082c970);
    if (local_8f0 == (void *)0x0) {
      uVar10 = FUN_1001cc310();
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      cVar6 = _os_log_type_enabled(uVar10,0x10);
      if (cVar6 != '\0') {
        local_84a = "itmlMediaGroup != nullptr";
        goto LAB_10041297a;
      }
      goto LAB_10041299f;
    }
    FUN_1001b7a5c(&local_858,&local_438);
    FUN_1001b7a5c(local_948,local_8d8);
    FUN_1001b7a5c(local_968,&local_ab8);
    FUN_1001b7a5c(local_998,local_920);
    in_stack_fffffffffffff4f8 = local_988;
    FUN_1001b7a5c(in_stack_fffffffffffff4f8,local_958);
    FUN_10040ffae(local_8f0,&local_858,cVar6,local_948,0,local_968,0,local_998,
                  CONCAT44(uVar25,uVar18),(ulong)uVar26 << 0x20,in_stack_fffffffffffff4f8,0,
                  (ulong)uVar27 << 0x20);
    FUN_1001b7a50(local_988);
    FUN_1001b7a50(local_998);
    FUN_1001b7a50(local_968);
    FUN_1001b7a50(local_948);
    FUN_1001b7a50(&local_858);
  }
  FUN_1001b7a50(local_958);
  FUN_1001b7a50(local_920);
  FUN_1001b7a50(&local_ab8);
  FUN_1001b7a50(local_8d8);
  FUN_1001b7a50(&local_438);
  (*(code *)PTR__objc_release_10082c7b0)(local_8e0);
  if (local_8f0 == (void *)0x0) {
    uVar10 = FUN_1001cc310();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar6 = _os_log_type_enabled(uVar10,0x10);
    if (cVar6 != '\0') {
      local_858._0_4_ = 0x8220202;
      local_858._4_4_ = 0x7a0a90;
      uStack_850 = 1;
      local_84c = 0x822;
      local_84a = "itmlMediaGroup != nullptr";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_858,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    iVar9 = 0;
    FUN_1001782e9(0,0);
LAB_100413b61:
    FUN_1001b7a50(local_978);
  }
  else {
    lVar13 = (long)local_8f0 + 0x30;
    FUN_1001b7a5c(&local_858,lVar13);
    cVar6 = FUN_1001b8428(&local_858);
    FUN_1001b7a50(&local_858);
    if (cVar6 == '\0') {
      lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x18);
      FUN_1001b7a5c(&local_858,lVar13);
      lVar12 = FUN_1004117e4(lVar12 + 0x28,&local_858);
      FUN_1001b7a50(&local_858);
      if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x20), lVar12 == 0)) {
        FUN_1001b8172((long)local_8f0 + 0x48,local_978);
        lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x18);
        FUN_1001b7a5c(&local_858,lVar13);
        local_438 = &local_858;
        lVar13 = FUN_100411906(lVar12 + 0x28,&local_858,&DAT_100712240,&local_438,local_8d8);
        pvVar15 = local_8f0;
        *(void **)(lVar13 + 0x20) = local_8f0;
        FUN_1001b7a50(&local_858);
        lVar13 = *(long *)(*(long *)(param_1 + 8) + 0x18);
        puVar22 = *(undefined8 **)(lVar13 + 0x58);
        if (puVar22 < *(undefined8 **)(lVar13 + 0x60)) {
          *puVar22 = pvVar15;
          puVar22 = puVar22 + 1;
          puVar1 = local_438;
        }
        else {
          lVar12 = (long)puVar22 - *(long *)(lVar13 + 0x50) >> 3;
          uVar23 = lVar12 + 1;
          if (uVar23 >> 0x3d != 0) {
            FUN_100411534();
LAB_100413cc7:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar16 = (long)*(undefined8 **)(lVar13 + 0x60) - *(long *)(lVar13 + 0x50);
          uVar21 = (long)uVar16 >> 2;
          if (uVar21 <= uVar23) {
            uVar21 = uVar23;
          }
          if (0x7ffffffffffffff7 < uVar16) {
            uVar21 = 0x1fffffffffffffff;
          }
          if (uVar21 == 0) {
            auVar24 = ZEXT816(0);
          }
          else {
            auVar24 = FUN_100249b6c(lVar13 + 0x60);
          }
          lVar14 = auVar24._0_8_;
          puVar1 = (undefined8 *)(lVar14 + lVar12 * 8);
          *puVar1 = local_8f0;
          puVar22 = (undefined8 *)(lVar14 + lVar12 * 8 + 8);
          sVar17 = *(long *)(lVar13 + 0x58) - (long)*(void **)(lVar13 + 0x50);
          pvVar15 = (void *)((long)puVar1 - sVar17);
          _memcpy(pvVar15,*(void **)(lVar13 + 0x50),sVar17);
          pvVar3 = *(void **)(lVar13 + 0x50);
          *(void **)(lVar13 + 0x50) = pvVar15;
          *(undefined8 **)(lVar13 + 0x58) = puVar22;
          *(long *)(lVar13 + 0x60) = lVar14 + auVar24._8_8_ * 8;
          pvVar15 = local_8f0;
          puVar1 = local_438;
          if (pvVar3 != (void *)0x0) {
            operator_delete(pvVar3);
            pvVar15 = local_8f0;
            puVar1 = local_438;
          }
        }
        local_438._4_4_ = (undefined4)((ulong)puVar1 >> 0x20);
        *(undefined8 **)(lVar13 + 0x58) = puVar22;
        **(int **)(param_1 + 0x18) = **(int **)(param_1 + 0x18) + 1;
        local_438._0_4_ = *(int *)((long)pvVar15 + 0x84);
        if ((int)local_438 != 0) {
          local_858 = &local_438;
          lVar13 = FUN_100411ddc(*(long *)(*(long *)(param_1 + 8) + 0x18) + 0x80,local_858,
                                 &DAT_100712240,&local_858,local_8d8);
          puVar1 = (undefined8 *)CONCAT44(local_438._4_4_,(int)local_438);
          *(void **)(lVar13 + 0x28) = local_8f0;
        }
        iVar9 = 0;
        local_438 = puVar1;
        if (**(int **)(param_1 + 8) == 2) {
          local_a88 = 0;
          uStack_a80 = 0;
          local_a98 = 0;
          uStack_a90 = 0;
          local_aa8 = (long *)0x0;
          uStack_aa0 = 0;
          local_ab8 = 0;
          lStack_ab0 = 0;
          uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(local_8e0,PTR_s_mediaObjects_10088cac0);
          local_928 = _objc_retainAutoreleasedReturnValue(uVar10);
          lVar13 = (*(code *)PTR__objc_msgSend_10082c770)
                             (local_928,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_ab8,
                              local_8d8,0x10);
          if (lVar13 == 0) {
            iVar9 = 0;
          }
          else {
            local_a30 = *local_aa8;
            local_9a0 = (long *)((long)local_8f0 + 0x88);
            local_9d8 = (long)local_8f0 + 0x98;
            local_9b8 = *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008;
            local_9b0 = lVar13;
            do {
              local_9a8 = PTR_s_currentVersionURL_10088ca60;
              local_a18 = PTR_s_originalURL_10088ca68;
              local_9e0 = PTR_s_thumbURL_10088ca70;
              local_a10 = PTR_s_videoComplementURL_10088ca78;
              local_9c8 = PTR_s_creationDate_10088ca80;
              local_9c0 = PTR_s_timeIntervalSinceReferenceDate_10088ca88;
              local_a08 = PTR_s_userDescription_10088ca90;
              local_a00 = PTR_s_latitude_10088ca98;
              local_9f8 = PTR_s_longitude_10088caa0;
              local_9f0 = PTR_s_isFavorite_10088caa8;
              local_9e8 = PTR_s_isHighEfficiency_10088cab0;
              local_9d0 = PTR_s_isVideo_10088cab8;
              lVar13 = 0;
              do {
                if (*local_aa8 != local_a30) {
                  _objc_enumerationMutation(local_928);
                }
                uVar10 = *(undefined8 *)(lStack_ab0 + lVar13 * 8);
                local_a38 = lVar13;
                if (local_8e1 == '\x01') {
LAB_100412f3b:
                  local_930 = *(long *)(param_1 + 8);
                  local_8e0 = (*(code *)PTR__objc_retain_10082c7b8)(uVar10);
                  FUN_1001b7a44(local_920);
                  FUN_1001b7a44(local_958);
                  FUN_1001b7a44(local_948);
                  FUN_1001b7a44(local_968);
                  FUN_1001b7a44(local_998);
                  FUN_1001b7a44(local_988);
                  FUN_1001c62d9(&local_858,0x420);
                  uVar10 = (*(code *)PTR__objc_msgSend_10082c770)
                                     (local_8e0,PTR_s_identifier_10088ca58);
                  FUN_1001b81f2(local_920,uVar10);
                  cVar6 = FUN_1001b8428(local_920);
                  if (cVar6 == '\0') {
                    lVar13 = (*(code *)PTR__objc_msgSend_10082c770)(local_8e0,local_9a8);
                    if (lVar13 == 0) {
                      if ((*(byte *)(local_930 + 5) & 4) == 0) {
                        uVar10 = FUN_1001cc310();
                        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
                        cVar6 = _os_log_type_enabled(uVar10,0x10);
                        if (cVar6 != '\0') {
                          local_42a = 
                          "url != nullptr || PhotoImportOptions::UsePhotosApp(importParams.mImportOptions)"
                          ;
                          goto LAB_100413aaa;
                        }
                        goto LAB_100413159;
                      }
                    }
                    else {
                      uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(local_8e0,local_9a8);
                      cVar6 = FUN_100174666(uVar10,1,&local_438);
                      pcVar20 = (char *)&local_438;
                      if (cVar6 == '\0') {
                        pcVar20 = "";
                      }
                      FUN_1001b7b04(local_910,pcVar20);
                      FUN_1001b80b2(local_958,local_910);
                      FUN_1001b7a50(local_910);
                      cVar6 = FUN_1001b8428(local_958);
                      if ((cVar6 != '\0') && ((*(byte *)(local_930 + 5) & 4) == 0)) {
                        uVar10 = FUN_1001cc310();
                        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
                        cVar6 = _os_log_type_enabled(uVar10,0x10);
                        if (cVar6 != '\0') {
                          local_42a = 
                          "path.IsEmpty() == false || PhotoImportOptions::UsePhotosApp(importParams.mImportOptions)"
                          ;
LAB_100413aaa:
                          local_42c = 0x822;
                          uStack_430 = 1;
                          local_438._4_4_ = 0x7a0a90;
                          local_438._0_4_ = 0x8220202;
                          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",
                                              &local_438,0x16);
                        }
LAB_100413159:
                        (*(code *)PTR__objc_release_10082c7b0)(uVar10);
                        FUN_1001782e9(0,0);
                        goto LAB_1004134dd;
                      }
                    }
                    lVar13 = (*(code *)PTR__objc_msgSend_10082c770)(local_8e0,local_a18);
                    if (lVar13 != 0) {
                      pcVar20 = (char *)&local_438;
                      cVar6 = FUN_100174666(lVar13,1,pcVar20);
                      if (cVar6 == '\0') {
                        pcVar20 = "";
                      }
                      FUN_1001b7b04(local_910,pcVar20);
                      FUN_1001b80b2(local_948,local_910);
                      FUN_1001b7a50(local_910);
                    }
                    cVar6 = FUN_1001b8428(local_958);
                    if (cVar6 == '\0') {
LAB_1004131fb:
                      lVar13 = (*(code *)PTR__objc_msgSend_10082c770)(local_8e0,local_9e0);
                      if (lVar13 != 0) {
                        pcVar20 = (char *)&local_438;
                        cVar6 = FUN_100174666(lVar13,1,pcVar20);
                        if (cVar6 == '\0') {
                          pcVar20 = "";
                        }
                        FUN_1001b7b04(local_910,pcVar20);
                        FUN_1001b80b2(local_968,local_910);
                        FUN_1001b7a50(local_910);
                      }
                    }
                    else {
                      cVar6 = FUN_1001b8428(local_948);
                      if (cVar6 == '\0') goto LAB_1004131fb;
                    }
                    lVar13 = (*(code *)PTR__objc_msgSend_10082c770)(local_8e0,local_a10);
                    if (lVar13 != 0) {
                      pcVar20 = (char *)&local_438;
                      cVar6 = FUN_100174666(lVar13,1,pcVar20);
                      if (cVar6 == '\0') {
                        pcVar20 = "";
                      }
                      FUN_1001b7b04(local_910,pcVar20);
                      FUN_1001b80b2(local_998,local_910);
                      FUN_1001b7a50(local_910);
                    }
                    local_ac8 = 0.0;
                    uStack_ac0 = 0;
                    if ((*(byte *)(local_930 + 5) & 4) != 0) {
                      uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(local_8e0,local_9c8);
                      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
                      local_ac8 = (double)(*(code *)PTR__objc_msgSend_10082c770)(uVar10,local_9c0);
                      uStack_ac0 = extraout_XMM0_Qb;
                      (*(code *)PTR__objc_release_10082c7b0)(uVar10);
                    }
                    uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(local_8e0,local_a08);
                    FUN_1001b81f2(local_988,uVar10);
                    local_a28 = (*(code *)PTR__objc_msgSend_10082c770)(local_8e0,local_a00);
                    local_a20 = (*(code *)PTR__objc_msgSend_10082c770)(local_8e0,local_9f8);
                    cVar6 = (*(code *)PTR__objc_msgSend_10082c770)(local_8e0,local_9f0);
                    cVar7 = (*(code *)PTR__objc_msgSend_10082c770)(local_8e0,local_9e8);
                    pvVar15 = operator_new(0xb8,(nothrow_t *)PTR_nothrow_10082c970);
                    uVar25 = (undefined4)((ulong)in_stack_fffffffffffff4f8 >> 0x20);
                    if (pvVar15 == (void *)0x0) {
                      uVar10 = FUN_1001cc310();
                      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
                      cVar6 = _os_log_type_enabled(uVar10,0x10);
                      if (cVar6 != '\0') {
                        local_438._0_4_ = 0x8220202;
                        local_438._4_4_ = 0x7a168c;
                        uStack_430 = 1;
                        local_42c = 0x822;
                        local_42a = "itmlMediaObject";
                        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",
                                            &local_438,0x16);
                      }
                      (*(code *)PTR__objc_release_10082c7b0)(uVar10);
                      cVar6 = FUN_1001782e9(0,0);
                      if (cVar6 == '\0') goto LAB_1004134dd;
                    }
                    else {
                      cVar8 = (*(code *)PTR__objc_msgSend_10082c770)(local_8e0,local_9d0);
                      FUN_1001b7a5c(&local_438,local_920);
                      FUN_1001b7a44(local_910);
                      FUN_1001b7a5c(local_ad8,local_958);
                      FUN_1001b7a5c(local_a78,local_948);
                      FUN_1001b7a5c(local_a68,local_968);
                      FUN_1001b7a5c(local_a58,local_998);
                      if ((local_ac8 != 0.0) || (NAN(local_ac8))) {
                        uVar23 = -(ulong)(0.0 < local_ac8 + local_9b8);
                        uVar18 = (undefined4)
                                 (long)(double)(~uVar23 & DAT_100700458 |
                                               (ulong)(local_ac8 + local_9b8) & uVar23);
                      }
                      else {
                        uVar18 = 0;
                      }
                      local_8f1 = cVar8;
                      FUN_1001b7a5c(local_a48,local_988);
                      in_stack_fffffffffffff4f8 = (undefined1 *)CONCAT44(uVar25,uVar18);
                      FUN_10041035e(local_a28,pvVar15,local_8f1 != '\0',cVar7 != '\0',&local_438,0,
                                    local_910,local_ad8,local_a78,local_a68,local_a58,
                                    in_stack_fffffffffffff4f8,0,local_a48,0,cVar6 != '\0',0);
                      FUN_1001b7a50(local_a48);
                      FUN_1001b7a50(local_a58);
                      FUN_1001b7a50(local_a68);
                      FUN_1001b7a50(local_a78);
                      FUN_1001b7a50(local_ad8);
                      FUN_1001b7a50(local_910);
                      FUN_1001b7a50(&local_438);
                    }
                    if ((*(byte *)(local_930 + 4) & 0x80) != 0) {
                      FUN_10041053a(pvVar15,&local_858);
                    }
                  }
                  else {
                    uVar10 = FUN_1001cc310();
                    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
                    cVar6 = _os_log_type_enabled(uVar10,0x10);
                    if (cVar6 != '\0') {
                      local_438._0_4_ = 0x8220202;
                      local_438._4_4_ = 0x7a0a90;
                      uStack_430 = 1;
                      local_42c = 0x822;
                      local_42a = "idString.IsEmpty() == false";
                      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",
                                          &local_438,0x16);
                    }
                    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
                    FUN_1001782e9(0,0);
LAB_1004134dd:
                    pvVar15 = (void *)0x0;
                  }
                  FUN_1001b7a50(local_988);
                  FUN_1001b7a50(local_998);
                  FUN_1001b7a50(local_968);
                  FUN_1001b7a50(local_948);
                  FUN_1001b7a50(local_958);
                  FUN_1001b7a50(local_920);
                  (*(code *)PTR__objc_release_10082c7b0)(local_8e0);
                  if (pvVar15 != (void *)0x0) {
LAB_100413579:
                    FUN_1001b7a5c(&local_438,(long)pvVar15 + 8);
                    cVar6 = FUN_1001b8428(&local_438);
                    if (cVar6 == '\0') {
                      FUN_1001b7a50(&local_438);
LAB_10041360b:
                      uVar10 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x18);
                      puVar22 = &local_858;
                      FUN_1001b7a5c(puVar22,(long)pvVar15 + 8);
                      local_438 = puVar22;
                      lVar13 = FUN_100411e74(uVar10,puVar22,&DAT_100712240,&local_438);
                      *(void **)(lVar13 + 0x20) = pvVar15;
                      goto LAB_100413653;
                    }
                    uVar10 = FUN_1001cc310();
                    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
                    cVar6 = _os_log_type_enabled(uVar10,0x10);
                    if (cVar6 != '\0') {
                      local_858._0_4_ = 0x8220202;
                      local_858._4_4_ = 0x7ab58c;
                      uStack_850 = 1;
                      local_84c = 0x822;
                      local_84a = "itmlMediaObject->GetIDString().IsEmpty() == false";
                      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",
                                          &local_858,0x16);
                    }
                    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
                    cVar6 = FUN_1001782e9(0,0);
                    FUN_1001b7a50(&local_438);
                    if (cVar6 != '\0') goto LAB_10041360b;
                    if (pvVar15 == (void *)0x0) goto LAB_100413752;
                    FUN_1004104d2(pvVar15);
                    operator_delete(pvVar15);
                    goto LAB_100413661;
                  }
                  uVar10 = FUN_1001cc310();
                  uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
                  cVar6 = _os_log_type_enabled(uVar10,0x10);
                  if (cVar6 != '\0') {
                    local_858._0_4_ = 0x8220202;
                    local_858._4_4_ = 0x7a168c;
                    uStack_850 = 1;
                    local_84c = 0x822;
                    local_84a = "itmlMediaObject";
                    __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",
                                        &local_858,0x16);
                  }
                  (*(code *)PTR__objc_release_10082c7b0)(uVar10);
                  cVar6 = FUN_1001782e9(0,0);
                  if (cVar6 != '\0') goto LAB_100413579;
                }
                else {
                  uVar11 = (*(code *)PTR__objc_msgSend_10082c770)(uVar10,PTR_s_identifier_10088ca58)
                  ;
                  FUN_1001b7eb0(&local_438,uVar11);
                  cVar6 = FUN_1001b8428(&local_438);
                  if (cVar6 == '\0') {
LAB_100412f0d:
                    lVar13 = FUN_1004117e4(*(undefined8 *)(*(long *)(param_1 + 8) + 0x18),&local_438
                                          );
                    if (lVar13 == 0) {
                      FUN_1001b7a50(&local_438);
                      goto LAB_100412f3b;
                    }
                    pvVar15 = *(void **)(lVar13 + 0x20);
                  }
                  else {
                    uVar11 = FUN_1001cc310();
                    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
                    cVar6 = _os_log_type_enabled(uVar11,0x10);
                    if (cVar6 != '\0') {
                      local_858._0_4_ = 0x8220202;
                      local_858._4_4_ = 0x7ab58c;
                      uStack_850 = 1;
                      local_84c = 0x822;
                      local_84a = "idString.IsEmpty() == false";
                      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",
                                          &local_858,0x16);
                    }
                    (*(code *)PTR__objc_release_10082c7b0)(uVar11);
                    cVar6 = FUN_1001782e9(0,0);
                    if (cVar6 != '\0') goto LAB_100412f0d;
                    pvVar15 = (void *)0x0;
                  }
                  puVar22 = &local_438;
LAB_100413653:
                  FUN_1001b7a50(puVar22);
                  if (pvVar15 != (void *)0x0) {
LAB_100413661:
                    puVar22 = *(undefined8 **)((long)local_8f0 + 0x90);
                    if (puVar22 < *(undefined8 **)((long)local_8f0 + 0x98)) {
                      *puVar22 = pvVar15;
                      puVar22 = puVar22 + 1;
                    }
                    else {
                      lVar13 = (long)puVar22 - *local_9a0 >> 3;
                      uVar23 = lVar13 + 1;
                      if (0x1fffffffffffffff < uVar23) {
                        FUN_100411544(local_9a0);
                        goto LAB_100413cc7;
                      }
                      uVar16 = (long)*(undefined8 **)((long)local_8f0 + 0x98) - *local_9a0;
                      uVar21 = (long)uVar16 >> 2;
                      if (uVar21 <= uVar23) {
                        uVar21 = uVar23;
                      }
                      if (0x7ffffffffffffff7 < uVar16) {
                        uVar21 = 0x1fffffffffffffff;
                      }
                      if (uVar21 == 0) {
                        auVar24 = ZEXT816(0);
                      }
                      else {
                        auVar24 = FUN_100249b6c(local_9d8);
                      }
                      pvVar3 = local_8f0;
                      lVar12 = auVar24._0_8_;
                      puVar1 = (undefined8 *)(lVar12 + lVar13 * 8);
                      *puVar1 = pvVar15;
                      puVar22 = (undefined8 *)(lVar12 + lVar13 * 8 + 8);
                      sVar17 = *(long *)((long)local_8f0 + 0x90) -
                               (long)*(void **)((long)local_8f0 + 0x88);
                      pvVar19 = (void *)((long)puVar1 - sVar17);
                      _memcpy(pvVar19,*(void **)((long)local_8f0 + 0x88),sVar17);
                      pvVar15 = *(void **)((long)pvVar3 + 0x88);
                      *(void **)((long)pvVar3 + 0x88) = pvVar19;
                      *(undefined8 **)((long)pvVar3 + 0x90) = puVar22;
                      *(long *)((long)pvVar3 + 0x98) = lVar12 + auVar24._8_8_ * 8;
                      if (pvVar15 != (void *)0x0) {
                        operator_delete(pvVar15);
                      }
                    }
                    *(undefined8 **)((long)local_8f0 + 0x90) = puVar22;
                  }
                }
LAB_100413752:
                iVar9 = FUN_1001ceb24(*(undefined8 *)(*(long *)(param_1 + 8) + 0x10),0x696d7074,0,0)
                ;
                if (iVar9 != 0) {
                  if (iVar9 != -0x80) {
                    uVar10 = FUN_1001cc310();
                    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
                    cVar6 = _os_log_type_enabled(uVar10,0x10);
                    if (cVar6 != '\0') {
                      local_858._0_4_ = 0x8220202;
                      local_858._4_4_ = 0x7a0a90;
                      uStack_850 = 1;
                      local_84c = 0x400;
                      local_84a = (char *)CONCAT44(local_84a._4_4_,iVar9);
                      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",
                                          &local_858,0x12);
                    }
                    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
                  }
                  goto LAB_100413b54;
                }
                lVar13 = local_a38 + 1;
              } while (local_9b0 != lVar13);
              local_9b0 = (*(code *)PTR__objc_msgSend_10082c770)
                                    (local_928,PTR_s_countByEnumeratingWithState_obje_10088bb48,
                                     &local_ab8,local_8d8);
              iVar9 = 0;
            } while (local_9b0 != 0);
          }
LAB_100413b54:
          (*(code *)PTR__objc_release_10082c7b0)(local_928);
        }
        goto LAB_100413b61;
      }
      piVar2 = *(int **)(param_1 + 0x18);
      iVar9 = *piVar2;
      *(int *)(lVar12 + 0x58) = iVar9;
      *piVar2 = iVar9 + 1;
      FUN_1001b8172(lVar12 + 0x48,local_978);
    }
    else {
      uVar10 = FUN_1001cc310();
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      cVar6 = _os_log_type_enabled(uVar10,0x10);
      if (cVar6 != '\0') {
        local_858._0_4_ = 0x8220202;
        local_858._4_4_ = 0x7a0a90;
        uStack_850 = 1;
        local_84c = 0x822;
        local_84a = "itmlMediaGroup->GetIDString().IsEmpty() == false";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_858,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar10);
      FUN_1001782e9(0,0);
    }
    FUN_1001b7a50(local_978);
    pvVar15 = local_8f0;
    FUN_1004100a0(local_8f0);
    operator_delete(pvVar15);
    iVar9 = 0;
  }
LAB_100412638:
  (*(code *)PTR__objc_release_10082c7b0)(local_938);
  (*(code *)PTR__objc_release_10082c7b0)(local_900);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar9;
}

