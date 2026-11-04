// name: FUN_100441c22
// address: 100441c22

undefined8 FUN_100441c22(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 local_278;
  ulong local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  ushort uStack_25c;
  undefined2 uStack_25a;
  undefined2 uStack_258;
  undefined6 uStack_256;
  undefined8 local_248;
  undefined4 local_240;
  ushort local_238;
  undefined2 uStack_236;
  undefined4 uStack_234;
  undefined4 uStack_230;
  ushort uStack_22c;
  undefined2 uStack_22a;
  undefined2 uStack_228;
  undefined4 uStack_226;
  undefined2 uStack_222;
  long local_220;
  uint local_214;
  long local_210;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(long *)(param_1 + 0x498) == 0) && (FUN_10043e902(param_1), *(long *)(param_1 + 0x498) == 0)
     ) {
    uVar8 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar8,0x10);
    if (cVar6 != '\0') {
      local_238 = 0x202;
      uStack_236 = 0x822;
      uStack_234 = 0x7a168c;
      uStack_230 = 1;
      uStack_22c = 0x822;
      uStack_22a = 0xe94c;
      uStack_228 = 0x7c;
      uStack_226 = 1;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    cVar6 = FUN_1001782e9(0,0);
    uVar8 = 0;
    if (cVar6 == '\0') goto LAB_100442679;
  }
  if (*(long *)(param_1 + 0x4d8) == 0) {
    lVar10 = _AVCFAssetCopyAvailableChapterLocales(*(undefined8 *)(param_1 + 0x498));
    if ((lVar10 == 0) || (lVar19 = FUN_10017076e(lVar10), lVar19 < 1)) {
      uVar8 = 0;
    }
    else {
      lVar19 = FUN_100170853(lVar10,0);
      if (lVar19 == 0) {
        uVar8 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar8,0x10);
        if (cVar6 != '\0') {
          local_238 = 0x202;
          uStack_236 = 0x822;
          uStack_234 = 0x7a168c;
          uStack_230 = 1;
          uStack_22c = 0x822;
          uStack_22a = 0xbe5e;
          uStack_228 = 0x7a;
          uStack_226 = 1;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        uVar8 = 0;
        cVar6 = FUN_1001782e9(0,0);
        if (cVar6 == '\0') goto LAB_100441d61;
      }
      if ((param_2 & 1) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_100170716(DAT_1008c4d90,PTR__AVCFMetadataCommonKeyArtwork_10082b248,1,
                              PTR__kCFTypeArrayCallBacks_10082e130);
      }
      uVar9 = _AVCFAssetCopyChapterMetadataGroupsWithTitleLocale
                        (*(undefined8 *)(param_1 + 0x498),lVar19,uVar8);
      *(undefined8 *)(param_1 + 0x4d8) = uVar9;
    }
LAB_100441d61:
    FUN_10017060f(uVar8);
    FUN_10017060f(lVar10);
    local_278 = 0;
    uVar8 = local_278;
    if (*(long *)(param_1 + 0x4d8) == 0) goto LAB_100442679;
  }
  local_278 = 0;
  lVar10 = FUN_10017076e();
  uVar8 = local_278;
  if (0 < lVar10) {
    iVar7 = FUN_1001752d4(&local_278);
    if (iVar7 != -0x80) {
      if (iVar7 == 0) {
        uVar9 = *(undefined8 *)PTR__AVCFMetadataCommonKeyTitle_10082b250;
        uVar1 = *(undefined8 *)PTR__AVCFMetadataItemPropertyStringValue_10082b2c8;
        uVar2 = *(undefined8 *)PTR__AVCFMetadataCommonKeyArtwork_10082b248;
        uVar3 = *(undefined8 *)PTR__AVCFMetadataItemPropertyDataValue_10082b2c0;
        lVar19 = 0;
        do {
          lVar11 = FUN_100170853(*(undefined8 *)(param_1 + 0x4d8),lVar19);
          uVar8 = local_278;
          if (lVar11 == 0) {
            uVar8 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar8,0x10);
            if (cVar6 != '\0') {
              local_238 = 0x202;
              uStack_236 = 0x822;
              uStack_234 = 0x7a0a90;
              uStack_230 = 1;
              uStack_22c = 0x822;
              uStack_22a = 0xe953;
              uStack_228 = 0x7c;
              uStack_226 = 1;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_238,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            uVar8 = local_278;
            break;
          }
          lVar12 = _AVCFTimedMetadataGroupCopyItems(lVar11);
          if (lVar12 == 0) {
            uVar8 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar8,0x10);
            if (cVar6 != '\0') {
              pcVar14 = "items != __null";
LAB_100441f66:
              uStack_230 = 1;
              uStack_234 = 0x7a0a90;
              uStack_236 = 0x822;
              local_238 = 0x202;
              uStack_22c = 0x822;
              uStack_22a = SUB82(pcVar14,0);
              uStack_228 = (undefined2)((ulong)pcVar14 >> 0x10);
              uStack_226 = (undefined4)((ulong)pcVar14 >> 0x20);
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_238,0x16)
              ;
            }
LAB_1004420a7:
            FUN_1001782e9(0,0);
LAB_1004420b0:
            FUN_10017060f(lVar12);
          }
          else {
            lVar13 = FUN_10017076e(lVar12);
            if (lVar13 < 1) {
              uVar8 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar8,0x10);
              if (cVar6 != '\0') {
                pcVar14 = "count > 0";
                goto LAB_100441f66;
              }
              goto LAB_1004420a7;
            }
            _AVCFTimedMetadataGroupGetTimeRange(&local_238,lVar11);
            local_240 = uStack_230;
            local_248 = CONCAT44(uStack_234,CONCAT22(uStack_236,local_238));
            if (((((uStack_22c & 1) == 0) || ((local_214 & 1) == 0)) || (local_210 != 0)) ||
               (local_220 < 0)) {
              uVar8 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar8,0x10);
              if (cVar6 != '\0') {
                pcVar14 = 
                "((Boolean)(((Boolean)(((timeRange.start).flags & kCMTimeFlags_Valid) != 0)) && ((Boolean)(((timeRange.duration).flags & kCMTimeFlags_Valid) != 0)) && (timeRange.duration.epoch == 0) && (timeRange.duration.value >= 0)))"
                ;
                goto LAB_100441f66;
              }
              goto LAB_1004420a7;
            }
            uStack_260 = uStack_230;
            uStack_264 = uStack_234;
            uStack_25c = uStack_22c;
            uStack_25a = uStack_22a;
            uStack_258 = uStack_228;
            uStack_256 = (undefined6)(CONCAT26(uStack_222,CONCAT42(uStack_226,uStack_228)) >> 0x10);
            local_268 = CONCAT22(uStack_236,local_238);
            _CMTimeConvertScale(&local_238,1000,4);
            if ((uStack_22c & 0x1d) != 1) {
              uVar8 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar8,0x10);
              if (cVar6 != '\0') {
                pcVar14 = 
                "((Boolean)(((cmStartTimeInMS).flags & (kCMTimeFlags_Valid | kCMTimeFlags_ImpliedValueFlagsMask)) == kCMTimeFlags_Valid))"
                ;
                goto LAB_100441f66;
              }
              goto LAB_1004420a7;
            }
            uVar4 = CONCAT44(uStack_234,CONCAT22(uStack_236,local_238));
            iVar7 = FUN_1001753f5(uVar8,CONCAT22(uStack_236,local_238));
            if (iVar7 == 0) {
              lVar11 = 0;
              do {
                lVar15 = FUN_100170853(lVar12,lVar11);
                if (lVar15 == 0) {
                  uVar8 = FUN_1001cc310();
                  cVar6 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar6 != '\0') {
                    local_238 = 0x202;
                    uStack_236 = 0x822;
                    uStack_234 = 0x7a0a90;
                    uStack_230 = 1;
                    uStack_22c = 0x822;
                    uStack_22a = 0xead3;
                    uStack_228 = 0x7c;
                    uStack_226 = 1;
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_238
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                  FUN_10017060f(lVar12);
                  iVar7 = -0x6c;
                  goto LAB_1004426fe;
                }
                local_270 = (ulong)*(uint *)(param_1 + 0x490);
                lVar16 = _AVCFMetadataItemCopyCommonKey(lVar15);
                if (lVar16 == 0) {
                  uVar18 = FUN_1001cc310();
                  cVar6 = _os_log_type_enabled(uVar18,0x10);
                  if (cVar6 != '\0') {
                    local_238 = 0x202;
                    uStack_236 = 0x822;
                    uStack_234 = 0x7a0a90;
                    uStack_230 = 1;
                    uStack_22c = 0x822;
                    uStack_22a = 0xeae2;
                    uStack_228 = 0x7c;
                    uStack_226 = 1;
                    __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: (%{public}s)",
                                        &local_238,0x16);
                  }
                  FUN_1001782e9(0,0);
LAB_100442430:
                  FUN_10017060f(lVar16);
                }
                else {
                  cVar6 = FUN_100170633(lVar16,uVar9);
                  if (cVar6 == '\0') {
                    cVar6 = FUN_100170633(lVar16,uVar2);
                    if (cVar6 != '\0') {
                      lVar17 = _AVCFMetadataItemGetStatusOfValueForProperty(lVar15,uVar3,0);
                      puVar5 = PTR__AVCFMetadataItemPropertyDataValue_10082b2c0;
                      if (lVar17 != 2) goto joined_r0x0001004421ee;
                      lVar15 = _AVCFMetadataItemCopyDataValue(lVar15);
                      if (lVar15 != 0) {
                        lVar17 = FUN_100170ef7(lVar15);
                        if (lVar17 == 0) {
                          local_270 = local_270 & 0xffffffff00000000;
                        }
                        else {
                          FUN_1001c62d9(&local_238,0x10);
                          local_238 = (ushort)s__kartff__13CoreMediaItem_100749b3f._1_4_;
                          uStack_236 = SUB42(s__kartff__13CoreMediaItem_100749b3f._1_4_,2);
                          uStack_234 = 0;
                          uStack_230 = 0;
                          uStack_22c = 0;
                          uStack_22a = 0;
                          iVar7 = FUN_100175c68(uVar8,uVar4,0x706c6f63,0,0x10,&local_238);
                          if (iVar7 == 0) {
                            local_270 = FUN_100170ef7(lVar15);
                            uVar18 = FUN_100170f3b(lVar15);
                            iVar7 = FUN_100175c68(uVar8,uVar4,0x70636368,0,local_270,uVar18);
                          }
                          local_270 = CONCAT44(local_270._4_4_,iVar7);
                        }
                        goto LAB_1004424be;
                      }
                    }
                    goto LAB_100442430;
                  }
                  lVar17 = _AVCFMetadataItemGetStatusOfValueForProperty(lVar15,uVar1,0);
                  puVar5 = PTR__AVCFMetadataItemPropertyStringValue_10082b2c8;
                  if (lVar17 != 2) {
joined_r0x0001004421ee:
                    if (lVar17 == 0) {
                      lVar17 = FUN_100170716(DAT_1008c4d90,puVar5,1);
                      if (lVar17 == 0) {
                        uVar18 = FUN_1001cc310();
                        cVar6 = _os_log_type_enabled(uVar18,0x10);
                        if (cVar6 != '\0') {
                          local_238 = 0x202;
                          uStack_236 = 0x822;
                          uStack_234 = 0x7a168c;
                          uStack_230 = 1;
                          uStack_22c = 0x822;
                          uStack_22a = 0xfa9b;
                          uStack_228 = 0x79;
                          uStack_226 = 1;
                          __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: (%{public}s)",
                                              &local_238,0x16);
                        }
                        cVar6 = FUN_1001782e9(0,0);
                        if (cVar6 == '\0') goto LAB_100442430;
                      }
                      _AVCFMetadataItemLoadValuesAsynchronouslyForProperties
                                (lVar15,lVar17,FUN_1004428f0);
                      FUN_10017060f(lVar17);
                    }
                    goto LAB_100442430;
                  }
                  lVar15 = _AVCFMetadataItemCopyStringValue(lVar15);
                  if (lVar15 == 0) goto LAB_100442430;
                  FUN_1001e115f(lVar15,&local_238);
                  iVar7 = FUN_100175c68(uVar8,uVar4,0x6e616d65,0,(uint)local_238 * 2 + 2,&local_238)
                  ;
                  local_270 = CONCAT44(local_270._4_4_,iVar7);
                  if ((iVar7 != -0x80) && (iVar7 != 0)) {
                    uVar18 = FUN_1001cc310();
                    cVar6 = _os_log_type_enabled(uVar18,0x10);
                    if (cVar6 != '\0') {
                      local_268 = 0x8220202;
                      uStack_264 = 0x7a0a90;
                      uStack_260 = 1;
                      uStack_25c = 0x400;
                      uStack_25a = (undefined2)local_270;
                      uStack_258 = (undefined2)(local_270 >> 0x10);
                      __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: err == (%d)",
                                          &local_268,0x12);
                    }
                  }
LAB_1004424be:
                  FUN_10017060f(lVar15);
                  FUN_10017060f(lVar16);
                  if ((int)local_270 != 0) {
                    if ((int)local_270 == -0x80) goto LAB_1004427ea;
                    uVar8 = FUN_1001cc310();
                    cVar6 = _os_log_type_enabled(uVar8,0x10);
                    if (cVar6 == '\0') goto LAB_100442071;
                    uStack_22a = (undefined2)local_270;
                    uStack_228 = (undefined2)(local_270 >> 0x10);
                    goto LAB_100442627;
                  }
                }
                lVar11 = lVar11 + 1;
              } while (lVar13 != lVar11);
              goto LAB_1004420b0;
            }
            if (iVar7 == -0x80) {
LAB_1004427ea:
              FUN_10017060f(lVar12);
              goto LAB_10044265b;
            }
            local_270 = CONCAT44(local_270._4_4_,iVar7);
            uVar8 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar8,0x10);
            if (cVar6 != '\0') {
              uStack_22a = (undefined2)local_270;
              uStack_228 = (undefined2)(local_270 >> 0x10);
LAB_100442627:
              uStack_22c = 0x400;
              uStack_230 = 1;
              uStack_234 = 0x7a0a90;
              uStack_236 = 0x822;
              local_238 = 0x202;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_238,0x12);
            }
LAB_100442071:
            FUN_10017060f(lVar12);
            iVar7 = (int)local_270;
            if ((int)local_270 != 0) {
LAB_1004426fe:
              uVar8 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar8,0x10);
              if (cVar6 == '\0') goto LAB_10044265b;
              uStack_22a = (undefined2)iVar7;
              uStack_228 = (undefined2)((uint)iVar7 >> 0x10);
              goto LAB_100442781;
            }
          }
          lVar19 = lVar19 + 1;
          uVar8 = local_278;
        } while (lVar19 != lVar10);
        goto LAB_100442679;
      }
      uVar8 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar8,0x10);
      if (cVar6 != '\0') {
        uStack_22a = (undefined2)iVar7;
        uStack_228 = (undefined2)((uint)iVar7 >> 0x10);
LAB_100442781:
        uStack_22c = 0x400;
        uStack_230 = 1;
        uStack_234 = 0x7a0a90;
        uStack_236 = 0x822;
        local_238 = 0x202;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_238,0x12);
      }
    }
LAB_10044265b:
    FUN_100175848(local_278);
    local_278 = 0;
    uVar8 = local_278;
  }
LAB_100442679:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

