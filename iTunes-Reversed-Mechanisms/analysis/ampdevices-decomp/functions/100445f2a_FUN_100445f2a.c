// name: FUN_100445f2a
// address: 100445f2a

undefined8 FUN_100445f2a(long param_1,undefined1 *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  char cVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  int local_9c;
  undefined1 *local_98;
  uint local_8c;
  long local_88;
  long local_80;
  int *local_78;
  ulong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 local_5c;
  char *local_5a;
  long local_50;
  int local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined1 *)0x0) {
    uVar21 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar21,0x10);
    if (cVar7 != '\0') {
      local_68 = 0x8220202;
      uStack_64 = 0x7a0a90;
      uStack_60 = 1;
      local_5c = 0x822;
      local_5a = "outVideoCharacteristics != nullptr";
      __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    uVar21 = 0xffffffce;
    goto LAB_100446b5b;
  }
  FUN_1001c62d9(param_2,0x238);
  FUN_10043e902(param_1);
  if (*(long *)(param_1 + 0x498) == 0) {
    uVar21 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar21,0x10);
    if (cVar7 != '\0') {
      local_68 = 0x8220202;
      uStack_64 = 0x7a0a90;
      uStack_60 = 1;
      local_5c = 0x822;
      local_5a = "mAsset != __null";
      __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    lVar12 = 0;
    FUN_1001782e9(0,0);
    uVar21 = 0xffffffce;
  }
  else {
    lVar12 = _AVCFAssetCopyTracksWithMediaType
                       (*(long *)(param_1 + 0x498),*(undefined8 *)PTR__AVCFMediaTypeVideo_10082b240)
    ;
    if (lVar12 == 0) {
      uVar21 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar21,0x10);
      if (cVar7 != '\0') {
        local_68 = 0x8220202;
        uStack_64 = 0x7a0a90;
        uStack_60 = 1;
        local_5c = 0x822;
        local_5a = "tracksArray != __null";
        __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      lVar12 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      FUN_10043e902(param_1);
      local_88 = lVar12;
      if (*(long *)(param_1 + 0x498) == 0) {
        uVar21 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar21,0x10);
        if (cVar7 != '\0') {
          local_68 = 0x8220202;
          uStack_64 = 0x7a0a90;
          uStack_60 = 1;
          local_5c = 0x822;
          local_5a = "mAsset != __null";
          __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
        }
        lVar13 = 0;
        FUN_1001782e9(0,0);
LAB_10044614a:
        uVar8 = 0;
      }
      else {
        lVar13 = _AVCFAssetCopyAssetTracks();
        if (lVar13 == 0) {
          lVar13 = 0;
          goto LAB_10044614a;
        }
        lVar14 = FUN_10017076e(lVar13);
        if (lVar14 < 1) goto LAB_10044614a;
        local_98 = param_2;
        do {
          lVar12 = FUN_100170853(lVar13,0);
          if (lVar12 == 0) {
            uVar21 = FUN_1001cc310();
            cVar7 = _os_log_type_enabled(uVar21);
            if (cVar7 != '\0') {
              local_68 = 0x8220202;
              uStack_64 = 0x7a0a90;
              uStack_60 = 1;
              local_5c = 0x822;
              local_5a = "currentTrack != __null";
              __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",&local_68,0x16)
              ;
            }
            FUN_1001782e9(0);
          }
          else {
            cVar7 = _AVCFAssetTrackIsEnabled(lVar12);
            if ((cVar7 != '\0') && (cVar7 = _AVCFAssetTrackIsSelfContained(lVar12), cVar7 == '\0'))
            {
              uVar8 = 1;
              lVar12 = local_88;
              param_2 = local_98;
              goto LAB_1004461b0;
            }
          }
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        uVar8 = 0;
        lVar12 = local_88;
        param_2 = local_98;
      }
LAB_1004461b0:
      FUN_10017060f(lVar13);
      *param_2 = uVar8;
      if (*(long *)(param_1 + 0x498) == 0) {
        uVar21 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar21,0x10);
        if (cVar7 != '\0') {
          local_68 = 0x8220202;
          uStack_64 = 0x7a0a90;
          uStack_60 = 1;
          local_5c = 0x822;
          local_5a = "mAsset != __null";
          __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
        }
        bVar22 = false;
        FUN_1001782e9(0,0);
      }
      else {
        cVar7 = _AVCFAssetHasCompressedMovieAtom();
        bVar22 = cVar7 != '\0';
      }
      param_2[1] = bVar22;
      lVar13 = FUN_10017076e(lVar12);
      if (lVar13 < 1) {
        uVar21 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar21,0x10);
        if (cVar7 != '\0') {
          local_68 = 0x8220202;
          uStack_64 = 0x7a0a90;
          uStack_60 = 1;
          local_5c = 0x822;
          local_5a = "numTracks > 0";
          __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
        }
        uVar21 = 0;
        FUN_1001782e9(0,0);
        goto LAB_100446b53;
      }
      local_70 = (ulong *)(param_2 + 8);
      uVar21 = *(undefined8 *)PTR__kCMFormatDescriptionExtension_Depth_10082bbf8;
      uVar3 = *(undefined8 *)PTR__kCVImageBufferPixelAspectRatioKey_10082e590;
      uVar4 = *(undefined8 *)PTR__kCVImageBufferPixelAspectRatioHorizontalSpacingKey_10082e588;
      uVar5 = *(undefined8 *)PTR__kCVImageBufferPixelAspectRatioVerticalSpacingKey_10082e598;
      lVar14 = 0;
      local_8c = 0;
      local_b8 = lVar13;
      local_98 = param_2;
      do {
        lVar15 = FUN_100170853(lVar12,lVar14);
        if (lVar15 == 0) {
          uVar20 = FUN_1001cc310();
          cVar7 = _os_log_type_enabled(uVar20,0x10);
          if (cVar7 != '\0') {
            local_68 = 0x8220202;
            uStack_64 = 0x7a0a90;
            uStack_60 = 1;
            local_5c = 0x822;
            local_5a = "currentTrack != __null";
            __os_log_error_impl(0x100000000,uVar20,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          cVar7 = _AVCFAssetTrackIsEnabled(lVar15);
          if (cVar7 != '\0') {
            uVar9 = _AVCFAssetTrackGetTrackID(lVar15);
            *(undefined4 *)((long)local_70 + 0xc) = uVar9;
            lVar13 = _AVCFAssetTrackCopyFormatDescriptions(lVar15);
            if (lVar13 == 0) {
              uVar20 = FUN_1001cc310();
              cVar7 = _os_log_type_enabled(uVar20,0x10);
              if (cVar7 != '\0') {
                local_5a = "formatDescriptions != __null";
LAB_1004464da:
                local_5c = 0x822;
                uStack_60 = 1;
                uStack_64 = 0x7a0a90;
                local_68 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar20,0x10,"%{public}s: (%{public}s)",&local_68,
                                    0x16);
              }
LAB_100446503:
              FUN_1001782e9(0,0);
            }
            else {
              lVar16 = FUN_10017076e(lVar13);
              if (lVar16 < 1) {
                uVar20 = FUN_1001cc310();
                cVar7 = _os_log_type_enabled(uVar20,0x10);
                if (cVar7 != '\0') {
                  local_5a = "JRCFArrayGetCount(formatDescriptions) > 0";
                  goto LAB_1004464da;
                }
                goto LAB_100446503;
              }
              lVar16 = FUN_100170853(lVar13,0);
              if (lVar16 == 0) {
                uVar20 = FUN_1001cc310();
                cVar7 = _os_log_type_enabled(uVar20,0x10);
                if (cVar7 != '\0') {
                  local_5a = "formatDescription != __null";
                  goto LAB_1004464da;
                }
                goto LAB_100446503;
              }
              local_b0 = lVar13;
              lVar13 = _CMFormatDescriptionGetExtensions(lVar16);
              if (lVar13 != 0) {
                uVar9 = FUN_100167d66(lVar13,uVar21);
                puVar1 = local_70;
                *(undefined4 *)(local_70 + 1) = uVar9;
                uVar17 = _CMVideoFormatDescriptionGetDimensions(lVar16);
                *puVar1 = uVar17 >> 0x20 | uVar17 << 0x20;
                local_80 = lVar16;
                uVar9 = _CMFormatDescriptionGetMediaSubType(lVar16);
                *(undefined4 *)(puVar1 + 2) = uVar9;
                lVar12 = FUN_100166b7f(lVar13,uVar3);
                if (lVar12 != 0) {
                  iVar10 = FUN_100167d23(lVar12,uVar4);
                  iVar11 = FUN_100167d23(lVar12,uVar5);
                  if (iVar10 != iVar11) {
                    local_98[2] = 1;
                  }
                }
                uVar17 = local_70[2];
                lVar18 = _AVCFAssetTrackGetTotalSampleDataLength(lVar15);
                auVar24._0_8_ = _AVCFAssetTrackGetTimeRange(&local_68,lVar15);
                puVar1 = local_70;
                lVar12 = local_88;
                lVar13 = local_b0;
                auVar24._8_8_ = extraout_XMM0_Qb;
                lVar16 = local_50;
                if ((int)uVar17 == 0x61766331) {
                  auVar23._4_12_ = auVar24._4_12_;
                  auVar23._0_4_ =
                       (float)local_48 * (float)s__kartff__13CoreMediaItem_100749b3f._5_4_;
                  auVar24 = roundss(auVar23,auVar23,9);
                  lVar16 = local_50 + (long)auVar24._0_4_;
                }
                if (lVar16 == 0) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = (undefined4)((lVar18 * local_48) / (lVar16 * 0x7d));
                }
                *(undefined4 *)(local_70 + 4) = uVar9;
                *(undefined4 *)((long)local_70 + 0x24) = uVar9;
                uVar9 = _AVCFAssetTrackGetNominalFrameRate(lVar15);
                *(undefined4 *)((long)puVar1 + 0x14) = uVar9;
                uVar9 = _AVCFAssetTrackGetNonDroppableFrameRate(lVar15);
                *(undefined4 *)(puVar1 + 3) = uVar9;
                uVar8 = _AVCFAssetTrackIsFrameReorderingRequired(lVar15);
                *(undefined1 *)((long)puVar1 + 0x35) = uVar8;
                local_68 = 0;
                uStack_64 = 0;
                local_a8 = 0;
                cVar7 = FUN_100443148(lVar15,&cf_sinf,0x73696e66,&local_68,0,0);
                fVar25 = 0.0;
                if (cVar7 != '\0') {
                  piVar19 = (int *)FUN_100170f3b(CONCAT44(uStack_64,local_68));
                  uVar9 = FUN_100170ef7(CONCAT44(uStack_64,local_68));
                  iVar10 = FUN_100070b70(piVar19,uVar9,4,&local_a8);
                  if (iVar10 == 0) {
                    *(uint *)(local_70 + 2) =
                         (uint)local_a8 >> 0x18 | ((uint)local_a8 & 0xff0000) >> 8 |
                         ((uint)local_a8 & 0xff00) << 8 | (uint)local_a8 << 0x18;
                  }
                  local_78 = piVar19;
                  iVar10 = FUN_100070b70(piVar19,uVar9,0xd,&local_a8);
                  piVar19 = local_78;
                  fVar25 = DAT_10070bcf0;
                  if ((iVar10 == 0) && (local_a8 == 3)) {
                    local_d0 = 0;
                    local_c8 = 0;
                    local_c0 = 0;
                    iVar10 = FUN_100070b70(local_78,uVar9,0x13,&local_d0);
                    fVar25 = DAT_10070bcf0;
                    if ((iVar10 == 0) &&
                       ((iVar10 = FUN_100070b70(piVar19,uVar9,0x14,&local_c8),
                        fVar25 = DAT_10070bcf0, iVar10 == 0 &&
                        (iVar10 = FUN_100070b70(piVar19,uVar9,0x15,&local_c0),
                        fVar25 = DAT_10070bcf0, iVar10 == 0)))) {
                      fVar25 = ((float)local_c8 * DAT_10070bcf0) /
                               ((float)local_c8 + (float)local_d0 + (float)local_c0);
                    }
                  }
                }
                local_78 = (int *)CONCAT44(local_78._4_4_,fVar25);
                FUN_10017060f(CONCAT44(uStack_64,local_68));
                *(undefined4 *)((long)local_70 + 0x1c) = local_78._0_4_;
                iVar10 = (int)local_70[2];
                if (iVar10 < 0x68766331) {
                  if (iVar10 == 0x61766331) {
                    local_68 = 0;
                    uStack_64 = 0;
                    cVar7 = FUN_1004432f6(local_80,&cf_avcC,0x61766343,0,&local_68,0,0);
                    if (cVar7 == '\0') goto LAB_100446b09;
                    local_78 = (int *)((long)local_70 + 0x34);
                    lVar15 = (long)local_70 + 0x2e;
                    lVar16 = (long)local_70 + 0x2d;
                    uVar20 = FUN_100170f3b(CONCAT44(uStack_64,local_68));
                    uVar9 = FUN_100170ef7(CONCAT44(uStack_64,local_68));
                    lVar12 = local_88;
                    iVar10 = FUN_1005dfb13(uVar20,uVar9,lVar16,lVar15);
                    FUN_10017060f(CONCAT44(uStack_64,local_68));
                    if (iVar10 != 0) goto LAB_10044650c;
                    FUN_100445bea(local_80,local_70 + 6);
                  }
                  else if (iVar10 == 0x68323633) {
                    local_68 = 0;
                    uStack_64 = 0;
                    cVar7 = FUN_1004432f6(local_80,&cf_d263,0x64323633,0,&local_68,0,0);
                    if (cVar7 != '\0') {
                      lVar15 = (long)local_70 + 0x2e;
                      lVar16 = (long)local_70 + 0x2d;
                      uVar20 = FUN_100170f3b(CONCAT44(uStack_64,local_68));
                      uVar9 = FUN_100170ef7(CONCAT44(uStack_64,local_68));
                      lVar12 = local_88;
                      iVar10 = FUN_1005dfc70(uVar20,uVar9,lVar16,lVar15);
                      goto LAB_100446ad1;
                    }
LAB_100446b09:
                    FUN_10017060f(CONCAT44(uStack_64,local_68));
                    goto LAB_10044650c;
                  }
                }
                else if (iVar10 == 0x68766331) {
                  local_68 = 0;
                  uStack_64 = 0;
                  cVar7 = FUN_1004432f6(local_80,&cf_hvcC,0x68766343,0,&local_68,0,0);
                  if (cVar7 == '\0') goto LAB_100446b09;
                  local_78 = (int *)((long)local_70 + 0x2e);
                  lVar15 = (long)local_70 + 0x2c;
                  lVar16 = (long)local_70 + 0x2d;
                  uVar20 = FUN_100170f3b(CONCAT44(uStack_64,local_68));
                  uVar9 = FUN_100170ef7(CONCAT44(uStack_64,local_68));
                  lVar12 = local_88;
                  iVar10 = FUN_1005dfd20(uVar20,uVar9,lVar16,lVar15);
LAB_100446ad1:
                  FUN_10017060f(CONCAT44(uStack_64,local_68));
                  if (iVar10 != 0) goto LAB_10044650c;
                }
                else if (iVar10 == 0x6d703476) {
                  puVar1 = local_70 + 4;
                  local_78 = (int *)((long)local_70 + 0x24);
                  local_9c = (int)*puVar1;
                  bVar22 = false;
                  local_68 = 0;
                  uStack_64 = 0;
                  cVar7 = FUN_1004432f6(local_80,&cf_esds,0x65736473,0,&local_68,0,0);
                  puVar6 = local_70;
                  if (cVar7 != '\0') {
                    local_80 = (long)local_70 + 4;
                    lVar15 = (long)local_70 + 0x2e;
                    lVar16 = (long)local_70 + 0x2d;
                    puVar2 = local_70 + 5;
                    uVar20 = FUN_100170f3b(CONCAT44(uStack_64,local_68));
                    uVar9 = FUN_100170ef7(CONCAT44(uStack_64,local_68));
                    lVar12 = local_88;
                    iVar10 = FUN_1005dec0c(uVar20,uVar9,local_80,puVar6,puVar1,local_78,puVar2,
                                           lVar16,lVar15);
                    bVar22 = iVar10 == 0;
                  }
                  FUN_10017060f(CONCAT44(uStack_64,local_68));
                  if ((int)*puVar1 == 0) {
                    *(int *)puVar1 = local_9c;
                  }
                  if (*local_78 == 0) {
                    *local_78 = local_9c;
                  }
                  if (!bVar22) goto LAB_10044650c;
                }
                FUN_10017060f(lVar13);
                local_8c = local_8c + 1;
                if (local_8c < 10) {
                  local_70 = local_70 + 7;
                  lVar13 = local_b8;
                  goto LAB_10044651b;
                }
                break;
              }
              uVar20 = FUN_1001cc310();
              cVar7 = _os_log_type_enabled(uVar20,0x10);
              if (cVar7 != '\0') {
                local_68 = 0x8220202;
                uStack_64 = 0x7a0a90;
                uStack_60 = 1;
                local_5c = 0x822;
                local_5a = "extensionsDict != __null";
                __os_log_error_impl(0x100000000,uVar20,0x10,"%{public}s: (%{public}s)",&local_68,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              lVar13 = local_b0;
            }
LAB_10044650c:
            FUN_10017060f(lVar13);
            lVar13 = local_b8;
          }
        }
LAB_10044651b:
        lVar14 = lVar14 + 1;
      } while (lVar13 != lVar14);
      *(uint *)(local_98 + 4) = local_8c;
    }
    uVar21 = 0;
  }
LAB_100446b53:
  FUN_10017060f(lVar12);
LAB_100446b5b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar21;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

