// name: FUN_1004471ac
// address: 1004471ac

int FUN_1004471ac(int param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long local_78;
  long *local_70;
  long local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 != 0x6175636d) {
    local_78 = 0;
    cVar5 = _AVCFAssetHasProtectedContent(param_2);
    if (cVar5 != '\0') {
      iVar6 = -0x7c;
      lVar9 = 0;
      lVar8 = 0;
      lVar7 = 0;
      goto LAB_10044759a;
    }
    lVar7 = _AVCFAssetCopyTracksWithMediaType
                      (param_2,*(undefined8 *)PTR__AVCFMediaTypeAudio_10082b228);
    if (lVar7 == 0) {
      uVar12 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar12,0x10);
      if (cVar5 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "tracksArray != __null";
        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      lVar7 = 0;
LAB_100447526:
      lVar9 = 0;
LAB_100447529:
      iVar6 = 0;
      lVar8 = 0;
    }
    else {
      lVar8 = FUN_10017076e(lVar7);
      if (lVar8 < 1) {
        uVar12 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar12,0x10);
        if (cVar5 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "numTracks > 0";
          __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_100447526;
      }
      lVar9 = 0;
      lVar13 = 0;
      local_60 = 0;
      local_70 = param_3;
      local_68 = lVar7;
      lVar7 = lVar13;
LAB_10044732f:
      do {
        lVar10 = FUN_100170853(local_68,lVar13);
        if ((lVar10 != 0) && (cVar5 = _AVCFAssetTrackIsEnabled(lVar10), cVar5 != '\0')) {
          if ((lVar9 == 0) &&
             (lVar9 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130),
             lVar9 == 0)) {
            uVar12 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar12,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "returnedTracksArray != __null";
              __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            lVar9 = 0;
            FUN_1001782e9(0,0);
            iVar6 = -0x6c;
            param_3 = local_70;
            lVar8 = local_60;
            lVar7 = local_68;
            goto LAB_10044759a;
          }
          FUN_1001709a5(lVar9,lVar10);
          if (param_4 == (undefined4 *)0x0) {
            lVar13 = lVar13 + 1;
            if (lVar8 == lVar13) goto LAB_1004474f1;
            goto LAB_10044732f;
          }
          if ((local_60 == 0) &&
             (local_60 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130),
             local_60 == 0)) {
            uVar12 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar12,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "formatDescriptionArray != __null";
              __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            iVar6 = -0x6c;
            param_3 = local_70;
            lVar8 = 0;
            lVar7 = local_68;
            goto LAB_10044759a;
          }
          lVar10 = _AVCFAssetTrackCopyFormatDescriptions(lVar10);
          lVar13 = lVar7;
          if (lVar10 != 0) {
            uVar12 = FUN_10017076e(lVar10);
            FUN_100170664(local_60,lVar10,0,uVar12);
            FUN_10017060f(lVar10);
          }
        }
        lVar13 = lVar13 + 1;
        lVar7 = lVar13;
      } while (lVar13 != lVar8);
      if (param_4 != (undefined4 *)0x0) {
        FUN_1001c62d9(param_4,0x28);
        lVar7 = local_68;
        param_3 = local_70;
        if (local_60 != 0) {
          iVar6 = _CMAudioFormatDescriptionCreateSummary(0,local_60,0,&local_78);
          lVar8 = local_60;
          if (iVar6 != -0x80) {
            if (iVar6 == 0) {
              if (local_78 == 0) {
                uVar12 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar12,0x10);
                if (cVar5 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "summaryDescription != __null";
                  __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                iVar6 = -0x32;
                lVar8 = local_60;
              }
              else {
                puVar11 = (undefined4 *)_CMAudioFormatDescriptionGetStreamBasicDescription();
                uVar1 = puVar11[1];
                uVar2 = puVar11[2];
                uVar3 = puVar11[3];
                uVar12 = *(undefined8 *)(puVar11 + 4);
                uVar4 = *(undefined8 *)(puVar11 + 6);
                *param_4 = *puVar11;
                param_4[1] = uVar1;
                param_4[2] = uVar2;
                param_4[3] = uVar3;
                *(undefined8 *)(param_4 + 4) = uVar12;
                *(undefined8 *)(param_4 + 6) = uVar4;
                *(undefined8 *)(param_4 + 8) = *(undefined8 *)(puVar11 + 8);
                iVar6 = 0;
                lVar8 = local_60;
              }
            }
            else {
              uVar12 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar12,0x10);
              lVar8 = local_60;
              lVar7 = local_68;
              if (cVar5 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",&local_58,0x12
                                   );
                lVar8 = local_60;
                lVar7 = local_68;
              }
            }
          }
          goto LAB_10044759a;
        }
        goto LAB_100447529;
      }
LAB_1004474f1:
      iVar6 = 0;
      param_3 = local_70;
      lVar8 = local_60;
      lVar7 = local_68;
    }
LAB_10044759a:
    FUN_10017060f(lVar7);
    FUN_10017060f(lVar8);
    if (local_78 != 0) {
      _CFRelease();
    }
    *param_3 = lVar9;
    goto LAB_1004475bc;
  }
  lVar7 = _AVCFAssetCopyTracksWithMediaType
                    (param_2,*(undefined8 *)PTR__AVCFMediaTypeAudio_10082b228);
  if (lVar7 == 0) {
    uVar12 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar12,0x10);
    if (cVar5 != '\0') {
      local_4a = "tracksArray != __null";
LAB_100447605:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_1004474a4:
    FUN_1001782e9(0,0);
LAB_1004474b0:
    lVar9 = 0;
    iVar6 = 0;
  }
  else {
    lVar8 = FUN_10017076e(lVar7);
    if (lVar8 < 1) {
      uVar12 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar12,0x10);
      if (cVar5 != '\0') {
        local_4a = "numTracks > 0";
        goto LAB_100447605;
      }
      goto LAB_1004474a4;
    }
    lVar9 = 0;
    lVar8 = FUN_100170853(lVar7,0);
    iVar6 = 0;
    if (lVar8 != 0) {
      cVar5 = _AVCFAssetTrackIsEnabled(lVar8);
      if (cVar5 != '\0') {
        iVar6 = 0;
        lVar9 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
        if (lVar9 == 0) {
          uVar12 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar12,0x10);
          if (cVar5 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "returnedTracksArray != __null";
            __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          lVar9 = 0;
          FUN_1001782e9(0,0);
          iVar6 = -0x6c;
        }
        else {
          FUN_1001709a5(lVar9,lVar8);
        }
        goto LAB_1004474b2;
      }
      goto LAB_1004474b0;
    }
  }
LAB_1004474b2:
  FUN_10017060f(lVar7);
  *param_3 = lVar9;
LAB_1004475bc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

