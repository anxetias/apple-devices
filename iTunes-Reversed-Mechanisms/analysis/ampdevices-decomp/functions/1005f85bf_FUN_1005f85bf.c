// name: FUN_1005f85bf
// address: 1005f85bf

int FUN_1005f85bf(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  uint *puVar12;
  undefined1 local_69c [4];
  undefined1 local_698 [8];
  undefined8 local_690;
  long local_688;
  long local_680;
  long local_678;
  long local_670;
  long local_668;
  long local_660;
  uint local_658;
  char *local_654;
  undefined2 local_64c;
  char *local_64a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  uint local_438;
  char *local_434;
  undefined2 local_42c;
  char *local_42a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_678 = 0;
  if (param_1 == 0) {
LAB_1005f8848:
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_42a = "TrackDataIsValid(trackData)";
LAB_1005f8917:
      local_42c = 0x822;
      local_434 = "Assertion failure";
      local_438 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_438 = 0x8220202;
        local_434 = "Assertion failure (expected to be true)";
        local_42c = 0x822;
        local_42a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1005f8848;
    }
    cVar1 = FUN_10017cbd0(param_2);
    if (cVar1 == '\0') {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_42a = "JRFileSpecIsValid(archiveFileSpec)";
        goto LAB_1005f8917;
      }
    }
    else {
      lVar7 = FUN_1004de07b(param_1);
      if (lVar7 != 0) {
        local_680 = 0;
        local_690 = 0;
        local_688 = 0;
        if (param_2 == 0) {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_438 = 0x8220202;
            local_434 = "Assertion failure";
            local_42c = 0x822;
            local_42a = "archiveFileSpec != __null";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
          }
          FUN_1001782e9(0,0);
          iVar2 = -0x32;
LAB_1005f8cb9:
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_42a = (char *)CONCAT44(local_42a._4_4_,iVar2);
LAB_1005f8d6d:
            local_42c = 0x400;
            local_434 = "Assertion failure";
            local_438 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_438,0x12);
          }
LAB_1005f8cd2:
          uVar6 = 0;
        }
        else {
          iVar2 = FUN_1001f7388(param_2,1,&local_680);
          if (iVar2 == -0x80) {
LAB_1005f8af9:
            lVar8 = 0;
          }
          else {
            if (iVar2 != 0) {
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              if (cVar1 != '\0') {
                local_42a = (char *)CONCAT44(local_42a._4_4_,iVar2);
LAB_1005f8ae6:
                local_42c = 0x400;
                local_434 = "Assertion failure";
                local_438 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_438,0x12
                                   );
              }
              goto LAB_1005f8af9;
            }
            iVar2 = FUN_1001fbb12(local_680,"Manifest.plist",&local_690);
            if (iVar2 == -0x80) goto LAB_1005f8af9;
            if (iVar2 != 0) {
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              if (cVar1 != '\0') {
                local_42a = (char *)CONCAT44(local_42a._4_4_,iVar2);
                goto LAB_1005f8ae6;
              }
              goto LAB_1005f8af9;
            }
            iVar2 = FUN_1001fbb12(local_680,"Manifest.plist.p7b",&local_688);
            lVar8 = local_688;
            uVar6 = local_690;
            if (iVar2 == -0x80) goto LAB_1005f8af9;
            if (iVar2 != 0) {
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              if (cVar1 != '\0') {
                local_42a = (char *)CONCAT44(local_42a._4_4_,iVar2);
                goto LAB_1005f8ae6;
              }
              goto LAB_1005f8af9;
            }
            if (local_688 == 0) {
LAB_1005f877e:
              lVar8 = FUN_10016a9bd(DAT_1008c4d90,uVar6,0,0);
              if (lVar8 == 0) {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  local_458 = 0x8220202;
                  local_454 = "Assertion failure";
                  local_44c = 0x822;
                  local_44a = "*manifestDictionary != nullptr";
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,
                                      0x16);
                }
                lVar8 = 0;
LAB_1005f8f37:
                FUN_1001782e9(0,0);
                iVar2 = 0x4b1;
                goto LAB_1005f8f46;
              }
              uVar5 = FUN_100167d23(lVar8,&cf_ManifestVersion);
              if (1 < uVar5) {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  local_44a = "manifestVersion == 0 || manifestVersion == 1";
                  goto LAB_1005f9290;
                }
                goto LAB_1005f8f37;
              }
              iVar2 = FUN_1005f6d4d(lVar8,&cf_GUID,local_698);
              if (iVar2 != 0) {
                local_660 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(local_660,0x10);
                if (cVar1 != '\0') {
                  local_458 = 0x8220202;
                  local_454 = "Assertion failure";
                  local_44c = 0x400;
                  local_44a = (char *)CONCAT44(local_44a._4_4_,iVar2);
                  __os_log_error_impl(0x100000000,local_660,0x10,"%{public}s: err == (%d)",
                                      &local_458,0x12);
                }
                goto LAB_1005f8f46;
              }
              cVar1 = FUN_100166ce2(lVar8,&cf_Name,&local_438);
              if (cVar1 == '\0') {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  local_44a = 
                  "JRCFDictionaryGetUString(*manifestDictionary, kIPodGameManifestNameKey, gameName)"
                  ;
LAB_1005f9290:
                  local_44c = 0x822;
                  local_454 = "Assertion failure";
                  local_458 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,
                                      0x16);
                }
                goto LAB_1005f8f37;
              }
              cVar1 = FUN_100166ce2(lVar8,&cf_Version,&local_658);
              if (cVar1 == '\0') {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  local_44a = 
                  "JRCFDictionaryGetUString(*manifestDictionary, kIPodGameManifestVersionKey, gameVersion)"
                  ;
                  goto LAB_1005f9290;
                }
                goto LAB_1005f8f37;
              }
              lVar9 = FUN_100166844(lVar8);
              if (lVar9 == 0) {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  puVar12 = &local_438;
                  local_438 = 0x8220202;
                  local_434 = "Assertion failure";
                  local_42c = 0x822;
                  pcVar11 = "platformsArray != nullptr";
LAB_1005f94d8:
                  *(char **)((long)puVar12 + 0xe) = pcVar11;
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",puVar12,0x16
                                     );
                }
LAB_1005f92d7:
                FUN_1001782e9(0,0);
                local_660 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(local_660,0x10);
                iVar2 = 0x4b1;
                if (cVar1 == '\0') goto LAB_1005f8afc;
                local_42a = (char *)CONCAT44(local_42a._4_4_,0x4b1);
                goto LAB_1005f8f99;
              }
              local_670 = lVar9;
              local_668 = FUN_10017076e(lVar9);
              if (local_668 < 1) {
                iVar2 = 0;
              }
              else {
                lVar9 = 0;
                do {
                  local_660 = lVar9;
                  lVar9 = FUN_10016499b(local_670);
                  if (lVar9 == 0) {
                    uVar6 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar1 == '\0') goto LAB_1005f92d7;
                    puVar12 = &local_658;
                    local_658 = 0x8220202;
                    local_654 = "Assertion failure";
                    local_64c = 0x822;
                    pcVar11 = "platformDictionary != nullptr";
                    goto LAB_1005f94d8;
                  }
                  cVar1 = FUN_100167896(lVar9,&cf_PlatformID,&local_458);
                  if (cVar1 == '\0') {
                    uVar6 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar1 == '\0') goto LAB_1005f92d7;
                    puVar12 = &local_658;
                    local_658 = 0x8220202;
                    local_654 = "Assertion failure";
                    local_64c = 0x822;
                    pcVar11 = 
                    "JRCFDictionaryGetSInt32(platformDictionary, kIPodGameManifestPlatformIDKey, &platformID)"
                    ;
                    goto LAB_1005f94d8;
                  }
                  cVar1 = FUN_100167896(lVar9,&cf_PlatformVersion,local_698);
                  if (cVar1 == '\0') {
                    uVar6 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar1 == '\0') goto LAB_1005f92d7;
                    puVar12 = &local_658;
                    local_658 = 0x8220202;
                    local_654 = "Assertion failure";
                    local_64c = 0x822;
                    pcVar11 = 
                    "JRCFDictionaryGetSInt32(platformDictionary, kIPodGameManifestPlatformVersionKey, &platformVersion)"
                    ;
                    goto LAB_1005f94d8;
                  }
                  cVar1 = FUN_100167896(lVar9,&cf_BuildID,local_69c);
                  if (cVar1 == '\0') {
                    uVar6 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar1 == '\0') goto LAB_1005f92d7;
                    puVar12 = &local_658;
                    local_658 = 0x8220202;
                    local_654 = "Assertion failure";
                    local_64c = 0x822;
                    pcVar11 = 
                    "JRCFDictionaryGetSInt32(platformDictionary, kIPodGameManifestBuildIDKey, &platformBuildID)"
                    ;
                    goto LAB_1005f94d8;
                  }
                  cVar1 = FUN_100167064(lVar9,&cf_ExecutablePath,&local_438,0x400);
                  if (cVar1 == '\0') {
                    uVar6 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar1 == '\0') goto LAB_1005f92d7;
                    puVar12 = &local_658;
                    local_658 = 0x8220202;
                    local_654 = "Assertion failure";
                    local_64c = 0x822;
                    pcVar11 = 
                    "JRCFDictionaryGetCString(platformDictionary, kIPodGameManifestExecutablePathKey, executablePath, sizeof(executablePath))"
                    ;
                    goto LAB_1005f94d8;
                  }
                  lVar9 = local_660 + 1;
                  iVar2 = 0;
                } while (local_668 != lVar9);
              }
            }
            else {
              local_660 = FUN_100170f3b(local_690);
              local_670 = FUN_100170ef7(uVar6);
              local_668 = FUN_100170f3b(lVar8);
              uVar3 = FUN_100170ef7(lVar8);
              iVar4 = FUN_1000fa200(local_660,local_670,local_668,uVar3);
              iVar2 = 0x4b4;
              if (iVar4 != -0x80) {
                if (iVar4 == 0) goto LAB_1005f877e;
                local_660 = CONCAT44(local_660._4_4_,iVar4);
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  local_458 = 0x8220202;
                  local_454 = "Assertion failure";
                  local_44c = 0x400;
                  local_44a = (char *)CONCAT44(local_44a._4_4_,(undefined4)local_660);
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_458,
                                      0x12);
                }
              }
              lVar8 = 0;
LAB_1005f8f46:
              local_660 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(local_660,0x10);
              if (cVar1 != '\0') {
                local_42a = (char *)CONCAT44(local_42a._4_4_,iVar2);
LAB_1005f8f99:
                local_42c = 0x400;
                local_434 = "Assertion failure";
                local_438 = 0x8220202;
                __os_log_error_impl(0x100000000,local_660,0x10,"%{public}s: err == (%d)",&local_438,
                                    0x12);
              }
            }
          }
LAB_1005f8afc:
          FUN_10017060f(lVar8);
          FUN_10017060f(local_690);
          FUN_10017060f(local_688);
          if (local_680 != 0) {
            FUN_1001f7652();
          }
          if (iVar2 == -0x80) goto LAB_1005f8cd2;
          if (iVar2 != 0) goto LAB_1005f8cb9;
          iVar2 = FUN_1005f6edb(param_2,&local_678);
          if (iVar2 == -0x80) goto LAB_1005f8cd2;
          if (iVar2 != 0) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 == '\0') goto LAB_1005f8cd2;
            local_42a = (char *)CONCAT44(local_42a._4_4_,iVar2);
            goto LAB_1005f8d6d;
          }
          lVar8 = FUN_100167d88(local_678,PTR_cf_GUID_10088fbf0);
          local_438 = local_438 & 0xffff0000;
          if (local_678 == 0) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_658 = 0x8220202;
              local_654 = "Assertion failure";
              local_64c = 0x822;
              local_64a = "gameInfo != __null";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_658,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          else {
            local_670 = local_678;
            lVar9 = FUN_100166b7f(local_678,&cf_LocalizedNames);
            if (lVar9 == 0) {
LAB_1005f8c9a:
              FUN_100166ce2(local_670,&cf_Name,&local_438);
            }
            else {
              local_660 = lVar8;
              lVar8 = FUN_1001c1ec5();
              cVar1 = FUN_100170633(lVar8,&cf_nb_NO);
              if (cVar1 != '\0') {
                local_668 = FUN_1001705fc(&cf_no_NO);
                FUN_10017060f(lVar8);
                lVar8 = local_668;
              }
              cVar1 = FUN_100166ce2(lVar9,lVar8,&local_438);
              local_668 = lVar9;
              FUN_10017060f(lVar8);
              lVar9 = local_668;
              lVar8 = local_660;
              if (cVar1 == '\0') {
                uVar10 = FUN_1001c1d9c();
                cVar1 = FUN_100170633(uVar10,&cf_nb);
                uVar6 = uVar10;
                if (cVar1 != '\0') {
                  uVar6 = FUN_1001705fc(&cf_no);
                  FUN_10017060f(uVar10);
                  lVar9 = local_668;
                }
                cVar1 = FUN_100166ce2(lVar9,uVar6,&local_438);
                FUN_10017060f(uVar6);
                lVar8 = local_660;
                if (cVar1 == '\0') goto LAB_1005f8c9a;
              }
            }
          }
          uVar6 = FUN_1001658f1(0,&local_438);
          iVar2 = FUN_1004066de(param_1,param_2,lVar8,uVar6,0,0);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              cVar1 = FUN_100167ab3(local_678,PTR_cf_DRMUserID_10088fbf8,&local_658);
              iVar2 = 0;
              if (cVar1 != '\0') {
                *(undefined2 *)(lVar7 + 0x15429) = 0x100;
              }
            }
            else {
              uVar10 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar10,0x10);
              if (cVar1 != '\0') {
                local_658 = 0x8220202;
                local_654 = "Assertion failure";
                local_64c = 0x400;
                local_64a = (char *)CONCAT44(local_64a._4_4_,iVar2);
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_658,
                                    0x12);
              }
            }
          }
        }
        FUN_10017060f(uVar6);
        FUN_10017060f(local_678);
        goto LAB_1005f894b;
      }
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_42a = "handlerData != nullptr";
        goto LAB_1005f8917;
      }
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1005f894b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

