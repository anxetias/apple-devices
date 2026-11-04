// name: FUN_100453d55
// address: 100453d55

void FUN_100453d55(int *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  long lVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined8 local_278;
  long lStack_270;
  long *local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  long lStack_230;
  long *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f0;
  undefined *local_1e8;
  long local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined *local_188;
  undefined8 local_180;
  long local_178;
  int *local_170;
  undefined1 local_168 [128];
  undefined1 local_e8 [128];
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_190 = param_3;
  FUN_100453394(param_1,"**** MEDIA GROUP ****");
  puVar12 = PTR__objc_msgSend_10082c770;
  local_178 = (*(code *)PTR__objc_msgSend_10082c770)(param_2,PTR_s_mediaSourceIdentifier_10088d2f8);
  uVar3 = (*(code *)puVar12)(param_2,PTR_s_name_10088be00);
  uVar4 = (*(code *)puVar12)(param_2,PTR_s_identifier_10088ca58);
  uVar5 = (*(code *)puVar12)(param_2,PTR_s_typeIdentifier_10088d2a8);
  FUN_100453394(param_1,"%@ %@ %@ %@",local_178,uVar3,uVar4,uVar5);
  uVar6 = FUN_1001cd9a6("log-mlmedialibrary",0,0);
  if ((uVar6 & 4) != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(param_2,PTR_s_attributes_10088d2b0);
    FUN_100453394(param_1,"attributes: %@",uVar3);
  }
  puVar12 = PTR__objc_msgSend_10082c770;
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(param_2,PTR_s_URL_10088d2c0);
  FUN_100453394(param_1,"URL: %@",uVar3);
  uVar3 = (*(code *)puVar12)(param_2,PTR_s_modificationDate_10088cae8);
  FUN_100453394(param_1,"modificationDate: %@",uVar3);
  *param_1 = *param_1 + 1;
  uVar6 = FUN_1001cd9a6("log-mlmedialibrary",0,0);
  if ((uVar6 & 2) == 0) goto LAB_1004542ab;
  local_48 = (long *)0x0;
  local_198 = param_2;
  iVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    ((int)DAT_100700af8,local_190,PTR_s_waitForProperty_onObject_withTim_10088d280,
                     &cf_mediaObjects,param_2,local_68,0,&local_1f0);
  local_170 = param_1;
  if (local_48 == local_68) {
    lVar7 = 0x20;
LAB_100453f0a:
    (**(code **)(*local_48 + lVar7))();
  }
  else {
    lVar7 = 0x28;
    if (local_48 != (long *)0x0) goto LAB_100453f0a;
  }
  param_1 = local_170;
  param_2 = local_198;
  if (iVar2 == 0) {
    local_248 = 0;
    uStack_240 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_268 = (long *)0x0;
    uStack_260 = 0;
    local_278 = 0;
    lStack_270 = 0;
    local_180 = local_1f0;
    local_178 = (*(code *)PTR__objc_msgSend_10082c770)
                          (local_1f0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_278,
                           local_e8,0x10);
    param_1 = local_170;
    param_2 = local_198;
    if (local_178 != 0) {
      local_1e0 = *local_268;
      do {
        local_1e8 = PTR_s_containsObject__10088caf0;
        local_1c8 = PTR_s_addObject__10088c218;
        local_1c0 = PTR_s_contentType_10088c440;
        local_1b8 = PTR_s_fileSize_10088cae0;
        local_188 = PTR_s_mediaType_10088d2b8;
        local_1b0 = PTR_s_originalURL_10088ca68;
        local_1a8 = PTR_s_thumbnailURL_10088d2c8;
        local_1a0 = PTR_s_attributes_10088d2b0;
        lVar7 = 0;
        do {
          if (*local_268 != local_1e0) {
            _objc_enumerationMutation(local_180);
          }
          uVar3 = *(undefined8 *)(lStack_270 + lVar7 * 8);
          uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_identifier_10088ca58);
          cVar1 = (*(code *)PTR__objc_msgSend_10082c770)
                            (*(undefined8 *)(local_170 + 8),local_1e8,uVar4);
          pcVar13 = "MEDIA OBJECT: %@";
          puVar12 = PTR_s_identifier_10088ca58;
          if (cVar1 == '\0') {
            (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(local_170 + 8),local_1c8,uVar4);
            FUN_100453394(local_170,"---- MEDIA OBJECT ----");
            local_1d8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_identifier_10088ca58);
            local_1d0 = (*(code *)PTR__objc_msgSend_10082c770)
                                  (uVar3,PTR_s_mediaSourceIdentifier_10088d2f8);
            uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,local_1c0);
            uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_name_10088be00);
            uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,local_1b8);
            lVar9 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,local_188);
            pcVar10 = &cf_image;
            if (lVar9 != 2) {
              lVar9 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,local_188);
              pcVar10 = &cf_audio;
              if (lVar9 == 4) {
                pcVar10 = &cf_movie;
              }
            }
            FUN_100453394(local_170,"%@ %@ %@ %@ fileSize: %lu %@",local_1d8,local_1d0,uVar4,uVar5,
                          uVar8,pcVar10);
            uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_URL_10088d2c0);
            FUN_100453394(local_170,"URL: %@",uVar4);
            uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,local_1b0);
            FUN_100453394(local_170,"originalURL: %@",uVar4);
            uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,local_1a8);
            FUN_100453394(local_170,"thumbnailURL: %@",uVar4);
            uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_modificationDate_10088cae8);
            FUN_100453394(local_170,"modificationDate: %@",uVar4);
            uVar6 = FUN_1001cd9a6("log-mlmedialibrary",0,0);
            pcVar13 = "attributes: %@";
            puVar12 = local_1a0;
            if ((uVar6 & 8) != 0) goto LAB_100454233;
          }
          else {
LAB_100454233:
            uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,puVar12);
            FUN_100453394(local_170,pcVar13,uVar3);
          }
          lVar7 = lVar7 + 1;
        } while (local_178 != lVar7);
        local_178 = (*(code *)PTR__objc_msgSend_10082c770)
                              (local_180,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_278
                               ,local_e8,0x10);
        param_1 = local_170;
        param_2 = local_198;
      } while (local_178 != 0);
    }
  }
LAB_1004542ab:
  local_208 = 0;
  uStack_200 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_228 = (long *)0x0;
  uStack_220 = 0;
  local_238 = 0;
  lStack_230 = 0;
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(param_2,PTR_s_childGroups_10088cad0);
  lVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_238,local_168,
                     0x10);
  if (lVar7 != 0) {
    lVar9 = *local_228;
    do {
      lVar11 = 0;
      do {
        if (*local_228 != lVar9) {
          _objc_enumerationMutation(uVar3);
        }
        FUN_100453d55(param_1,*(undefined8 *)(lStack_230 + lVar11 * 8),local_190);
        lVar11 = lVar11 + 1;
      } while (lVar7 != lVar11);
      lVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                        (uVar3,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_238,local_168
                         ,0x10);
    } while (lVar7 != 0);
  }
  *param_1 = *param_1 + -1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

