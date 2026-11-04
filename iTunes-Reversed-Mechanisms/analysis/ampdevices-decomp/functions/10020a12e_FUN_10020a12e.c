// name: FUN_10020a12e
// address: 10020a12e

long FUN_10020a12e(undefined8 param_1)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  size_t sVar10;
  undefined8 uVar11;
  long lVar12;
  char *pcVar13;
  undefined8 local_4a0;
  undefined8 local_498;
  long local_490;
  long local_488;
  undefined4 local_47c;
  long local_478;
  undefined8 local_470;
  long local_468;
  long local_460;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined2 local_44c;
  char *local_44a;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_468 = 0;
  iVar4 = FUN_1001f7388(param_1,1);
  if (iVar4 != -0x80) {
    if (iVar4 == 0) {
      lVar6 = FUN_10020d28b(local_468);
      local_478 = lVar6;
      if (lVar6 == 0) {
        uVar11 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar11,0x10);
        if (cVar3 != '\0') {
          local_44a = "bundleInfoDict != __null";
LAB_10020a99c:
          local_44c = 0x822;
          uStack_450 = 1;
          uStack_454 = 0x7a0a90;
          local_458 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
LAB_10020a2f4:
        lVar7 = 0;
        FUN_1001782e9(0,0);
        bVar1 = true;
        lVar6 = 0;
        lVar8 = 0;
        lVar12 = 0;
      }
      else {
        lVar7 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        lVar8 = local_468;
        if (lVar7 == 0) {
          uVar11 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar11,0x10);
          if (cVar3 != '\0') {
            local_44a = "appInfoDict != __null";
            goto LAB_10020a99c;
          }
          goto LAB_10020a2f4;
        }
        iVar4 = FUN_1001f7ba5(local_468);
        if (iVar4 == 0) {
          local_460 = 0;
          do {
            iVar4 = FUN_1001f802f(lVar8,&local_458,0x400);
            if (iVar4 != 0) {
              if (iVar4 != -0x80) {
                uVar11 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar11,0x10);
                if (cVar3 != '\0') {
                  local_58 = 0x8220202;
                  uStack_54 = 0x7a0a90;
                  uStack_50 = 1;
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                  __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
              }
              break;
            }
            pcVar9 = _strrchr((char *)&local_458,0x2f);
            if (pcVar9 != (char *)0x0) {
              *pcVar9 = '\0';
              cVar3 = FUN_1001df957(pcVar9 + 1,"InfoPlist.strings",1);
              if ((cVar3 != '\0') &&
                 (pcVar9 = _strrchr((char *)&local_458,0x2f), pcVar9 != (char *)0x0)) {
                pcVar13 = pcVar9 + 1;
                *pcVar9 = '\0';
                cVar3 = FUN_1001e3631(pcVar13,".lproj",1);
                if (cVar3 != '\0') {
                  sVar10 = _strlen(pcVar13);
                  pcVar9[sVar10 - 5] = '\0';
                  cVar3 = FUN_1001e3631(&local_458,".app",1);
                  if (cVar3 != '\0') {
                    local_470 = 0;
                    iVar4 = FUN_1001fbc5d(lVar8,0,&local_470);
                    if ((iVar4 == 0) &&
                       ((lVar6 = FUN_100166c1b(local_470,&cf_CFBundleDisplayName), lVar6 != 0 ||
                        (lVar6 = FUN_100166c1b(local_470,&cf_CFBundleName), lVar6 != 0)))) {
                      local_490 = lVar6;
                      if ((local_460 == 0) &&
                         (local_460 = FUN_100171409(DAT_1008c4d90,0,
                                                    PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                                    PTR__kCFTypeDictionaryValueCallBacks_10082e140),
                         local_460 == 0)) {
                        uVar11 = FUN_1001cc310();
                        cVar3 = _os_log_type_enabled(uVar11,0x10);
                        if (cVar3 != '\0') {
                          local_58 = 0x8220202;
                          uStack_54 = 0x7a0a90;
                          uStack_50 = 1;
                          local_4c = 0x822;
                          local_4a = "localizedNamesDict != __null";
                          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",
                                              &local_58,0x16);
                        }
                        local_460 = 0;
                        FUN_1001782e9(0,0);
                        break;
                      }
                      lVar6 = FUN_100172473(DAT_1008c4d90,pcVar13,0x8000100);
                      if (lVar6 != 0) {
                        local_488 = lVar6;
                        lVar6 = FUN_100171d85(DAT_1008c4d90,lVar6);
                        if (lVar6 == 0) {
                          lVar6 = FUN_1001705fc(local_488);
                        }
                        FUN_100171502(local_460,lVar6,local_490);
                        FUN_10017060f(lVar6);
                        FUN_10017060f(local_488);
                      }
                    }
                    FUN_10017060f(local_470);
                  }
                }
              }
            }
            iVar4 = FUN_1001f7c48(lVar8);
          } while (iVar4 == 0);
          lVar12 = local_460;
          if (local_460 == 0) {
            lVar12 = 0;
            lVar6 = local_478;
            goto LAB_10020a1de;
          }
          FUN_100171502(lVar7,&cf_LocalizedNames,local_460);
          lVar8 = FUN_100209a79(lVar12);
          lVar6 = local_478;
          if (lVar8 == 0) goto LAB_10020a1de;
LAB_10020a54d:
          FUN_100171502(lVar7,&cf_Name,lVar8);
          lVar8 = FUN_100166c1b(lVar6,&cf_CFBundleIdentifier);
          if (lVar8 == 0) goto LAB_10020a879;
          FUN_100171502(lVar7,&cf_Identifier,lVar8);
          lVar8 = FUN_100166c1b(lVar6,&cf_CFBundleVersion);
          if (lVar8 == 0) goto LAB_10020a879;
          FUN_100171502(lVar7,&cf_InternalVersion,lVar8);
          lVar8 = FUN_100166c1b(lVar6,&cf_CFBundleShortVersionString);
          if (lVar8 != 0) {
            FUN_100171502(lVar7,&cf_UserVisibleVersion,lVar8);
          }
          local_460 = lVar12;
          uVar5 = FUN_100167d66(lVar6,&cf_CFBundleBuild);
          FUN_100168746(lVar7,&cf_Build,uVar5,0);
          lVar8 = FUN_100166c1b(lVar6,&cf_MinimumOSVersion);
          if (lVar8 != 0) {
            FUN_100171502(lVar7,&cf_MinimumOSVersion,lVar8);
          }
          local_458 = 0;
          uStack_454 = 0;
          FUN_1001fbd49(local_468,"iTunesMetadata.plist",0,&local_458);
          lVar8 = CONCAT44(uStack_454,local_458);
          if (lVar8 != 0) {
            uVar11 = FUN_100166c1b(lVar8,&cf_appleId);
            FUN_100171502(lVar7,&cf_AppleID,uVar11);
            uVar11 = FUN_100166c1b(lVar8,&cf_downloaderAppleId);
            FUN_100171502(lVar7,&cf_DownloaderAppleID,uVar11);
            uVar11 = FUN_100166c1b(lVar8,&cf_downloaderName);
            FUN_100171502(lVar7,&cf_DownloaderName,uVar11);
            uVar11 = FUN_100166bb8(lVar8,&cf_softwareVersionExternalIdentifier);
            FUN_100171502(lVar7,&cf_StoreVersion,uVar11);
            uVar11 = FUN_100166844(lVar8,&cf_softwareSupportedDeviceIds);
            FUN_100171502(lVar7,&cf_SupportedDeviceIDs,uVar11);
            uVar11 = FUN_1001668a7(lVar8,&cf_is32BitOnly);
            FUN_100171502(lVar7,&cf_Is32BitOnly,uVar11);
          }
          lVar6 = FUN_10020ac03(local_468,lVar6);
          if (lVar6 != 0) {
            FUN_10020d941(lVar6,&local_458,&local_58,&local_470,&local_47c,&local_4a0,&local_498);
            FUN_100168550(lVar7,&cf_DRMUserName,&local_458,1);
            FUN_100168746(lVar7,&cf_DRMUserID,CONCAT44(uStack_54,local_58),1);
            FUN_100168746(lVar7,&cf_DRMKeyID,local_470,1);
            FUN_100168746(lVar7,&cf_DRMVersions,local_47c,1);
            FUN_100168746(lVar7,&cf_DRMDownloaderUserID,local_4a0,0);
            FUN_100168746(lVar7,&cf_DRMFamilyID,local_498,0);
          }
          lVar12 = local_478;
          uVar11 = FUN_100171475(local_478,&cf_UIRequiredDeviceCapabilities);
          FUN_100171502(lVar7,&cf_RequiredDeviceCapabilities,uVar11);
          cVar3 = FUN_100171439(lVar7,&cf_Is32BitOnly);
          if (cVar3 == '\0') {
            uVar2 = FUN_10020d3f4(local_468,lVar12);
            FUN_100168b0b(lVar7,&cf_Is32BitOnly,uVar2,1);
          }
          bVar1 = false;
          lVar12 = local_460;
        }
        else {
          lVar12 = 0;
LAB_10020a1de:
          lVar8 = FUN_100166c1b(lVar6,&cf_CFBundleDisplayName);
          if (((lVar8 != 0) || (lVar8 = FUN_100166c1b(lVar6,&cf_CFBundleName), lVar8 != 0)) ||
             (lVar8 = FUN_100166c1b(lVar6,&cf_CFBundleExecutable), lVar8 != 0)) goto LAB_10020a54d;
LAB_10020a879:
          uVar11 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar11,0x10);
          if (cVar3 != '\0') {
            local_458 = 0x8220202;
            uStack_454 = 0x7a0a90;
            uStack_450 = 1;
            local_44c = 0x822;
            local_44a = "infoString != __null";
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          lVar6 = 0;
          FUN_1001782e9(0,0);
          bVar1 = true;
          lVar8 = 0;
        }
      }
      FUN_10017060f(lVar6);
      FUN_10017060f(lVar8);
      FUN_10017060f(lVar12);
      FUN_10017060f(local_478);
      if (local_468 != 0) {
        FUN_1001f7652();
      }
      if (!bVar1) goto LAB_10020a8ed;
      FUN_10017060f(lVar7);
    }
    else {
      uVar11 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar11,0x10);
      if (cVar3 != '\0') {
        local_458 = 0x8220202;
        uStack_454 = 0x7a0a90;
        uStack_450 = 1;
        local_44c = 0x400;
        local_44a = (char *)CONCAT44(local_44a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_458,0x12);
      }
    }
  }
  lVar7 = 0;
LAB_10020a8ed:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar7;
}

