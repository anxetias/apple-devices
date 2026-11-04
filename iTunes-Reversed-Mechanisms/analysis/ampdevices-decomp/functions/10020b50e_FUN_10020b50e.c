// name: FUN_10020b50e
// address: 10020b50e

int FUN_10020b50e(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_ea8;
  undefined8 local_ea0;
  undefined4 local_e98;
  char *local_e94;
  undefined2 local_e8c;
  char *local_e8a;
  undefined4 local_a78;
  char *local_a74;
  undefined2 local_a6c;
  char *local_a6a;
  undefined1 local_878 [1024];
  undefined1 local_478 [1056];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_ea0 = 0;
  local_ea8 = 0;
  cVar1 = FUN_1001681c8(param_1,&cf_Location,local_478);
  if (cVar1 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_e98 = 0x8220202;
      local_e94 = "Assertion failure";
      local_e8c = 0x822;
      local_e8a = 
      "JRCFDictionaryGetFileSpec(appInfoDict, kIPhoneApplicationLocationKey, &archiveFileSpec)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_e98,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x2b;
    goto LAB_10020bae9;
  }
  iVar2 = FUN_1001f7388(local_478,1,&local_ea0);
  if (iVar2 == -0x80) goto LAB_10020bae9;
  if (iVar2 != 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_e98 = 0x8220202;
      local_e94 = "Assertion failure";
      local_e8c = 0x400;
      local_e8a = (char *)CONCAT44(local_e8a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_e98,0x12);
    }
    goto LAB_10020bae9;
  }
  iVar2 = FUN_10020bf57(local_ea0,local_878);
  uVar5 = local_ea0;
  if (iVar2 == -0x80) {
LAB_10020bab4:
    lVar4 = 0;
    lVar3 = 0;
    lVar10 = 0;
  }
  else {
    if (iVar2 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_e98 = 0x8220202;
        local_e94 = "Assertion failure";
        local_e8c = 0x400;
        local_e8a = (char *)CONCAT44(local_e8a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_e98,0x12);
      }
      goto LAB_10020bab4;
    }
    local_58 = 0;
    uStack_54 = 0;
    cVar1 = FUN_10020d864(local_ea0,&local_e98);
    if (cVar1 == '\0') {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_a78 = 0x8220202;
        local_a74 = "Assertion failure";
        local_a6c = 0x822;
        local_a6a = 
        "GetIPhoneApplicationBundleInfoPropertyListPath(archiveFileRef, propertyListFilePath, sizeof(propertyListFilePath))"
        ;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_a78,0x16);
      }
      FUN_1001782e9(0,0);
LAB_10020ba85:
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_e98 = 0x8220202;
        local_e94 = "Assertion failure";
        local_e8c = 0x822;
        local_e8a = "bundleInfoData != __null";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_e98,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = 0x4e2;
      goto LAB_10020bab4;
    }
    iVar2 = FUN_1001fbb12(uVar5,&local_e98,&local_58);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_a78 = 0x8220202;
        local_a74 = "Assertion failure";
        local_a6c = 0x400;
        local_a6a = (char *)CONCAT44(local_a6a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_a78,0x12);
      }
      goto LAB_10020ba85;
    }
    if ((iVar2 != 0) || (lVar10 = CONCAT44(uStack_54,local_58), lVar10 == 0)) goto LAB_10020ba85;
    lVar3 = FUN_10016a9bd(DAT_1008c4d90,lVar10,0,0);
    if (lVar3 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_e98 = 0x8220202;
        local_e94 = "Assertion failure";
        local_e8c = 0x822;
        local_e8a = "bundleInfoDict != __null";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_e98,0x16);
      }
      lVar4 = 0;
      FUN_1001782e9(0,0);
      iVar2 = 0x4e2;
      lVar3 = 0;
    }
    else {
      lVar4 = FUN_100166c1b(lVar3,&cf_CFBundleIdentifier);
      if (lVar4 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_e98 = 0x8220202;
          local_e94 = "Assertion failure";
          local_e8c = 0x822;
          local_e8a = "appIdentifier != __null";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_e98,0x16);
        }
        lVar4 = 0;
        FUN_1001782e9(0,0);
        iVar2 = 0x4e3;
      }
      else {
        FUN_100169c4c(lVar4,&local_a78);
        iVar2 = FUN_100181256(param_2,&local_a78,&local_e98);
        if (iVar2 == -0x30) {
          iVar2 = FUN_100182d59(&local_e98,1);
          if ((iVar2 != -0x80) && (iVar2 != 0)) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          iVar2 = FUN_100181256(param_2,&local_a78,&local_e98);
        }
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            lVar4 = 0;
            iVar2 = FUN_10016614c(lVar10,&local_e98,"Info.plist",0,1);
            if (iVar2 == -0x80) goto LAB_10020bab9;
            if (iVar2 == 0) {
              local_58 = 0;
              uStack_54 = 0;
              FUN_1001fbb12(local_ea0,"iTunesMetadata.plist",&local_58);
              lVar4 = CONCAT44(uStack_54,local_58);
              if (lVar4 == 0) {
LAB_10020b76e:
                iVar2 = FUN_1001fbb12(local_ea0,"iTunesArtwork",&local_ea8);
                if (iVar2 == 0) {
                  iVar2 = FUN_10016614c(local_ea8,&local_e98,"iTunesArtwork",0,1);
                  if (iVar2 != -0x80) {
                    if (iVar2 == 0) goto LAB_10020b790;
                    uVar5 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar1 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                      goto LAB_10020be9c;
                    }
                  }
                }
                else {
LAB_10020b790:
                  lVar6 = FUN_100166c1b(lVar3,&cf_CFBundleIconFile);
                  if (lVar6 != 0) {
                    FUN_10020c0a8(local_ea0,local_878,lVar6,&local_e98);
                  }
                  lVar6 = FUN_100166844(lVar3,&cf_CFBundleIconFiles);
                  if (lVar6 != 0) {
                    FUN_10020c453(local_ea0,local_878,lVar6,&local_e98);
                  }
                  lVar6 = FUN_100166b7f(lVar3,&cf_CFBundleIcons);
                  iVar2 = 0;
                  if ((lVar6 != 0) && (lVar7 = FUN_100171426(lVar6), iVar2 = 0, 0 < lVar7)) {
                    lVar8 = FUN_1001c6429(lVar7 * 8);
                    lVar11 = 0;
                    FUN_1001714b1(lVar6,0,lVar8);
                    do {
                      lVar6 = FUN_1001705e9(*(undefined8 *)(lVar8 + lVar11 * 8));
                      lVar9 = _CFDictionaryGetTypeID();
                      if (lVar6 == lVar9) {
                        lVar6 = FUN_100166844(*(undefined8 *)(lVar8 + lVar11 * 8),
                                              &cf_CFBundleIconFiles);
                        if (lVar6 != 0) {
                          FUN_10020c453(local_ea0,local_878,lVar6,&local_e98);
                        }
                      }
                      else {
                        uVar5 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar5,0x10);
                        if (cVar1 != '\0') {
                          local_58 = 0x8220202;
                          uStack_54 = 0x7a0a90;
                          uStack_50 = 1;
                          local_4c = 0x822;
                          local_4a = 
                          "JRCFGetTypeID(appIconsValues[appIconsIndex]) == CFDictionaryGetTypeID()";
                          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                              &local_58,0x16);
                        }
                        FUN_1001782e9(0,0);
                      }
                      lVar11 = lVar11 + 1;
                    } while (lVar7 != lVar11);
                    FUN_1001c64c1(lVar8);
                    iVar2 = 0;
                  }
                }
              }
              else {
                iVar2 = FUN_10016614c(lVar4,&local_e98,"iTunesMetadata.plist",0,1);
                if (iVar2 == -0x80) goto LAB_10020bab9;
                if (iVar2 == 0) goto LAB_10020b76e;
                uVar5 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 == '\0') goto LAB_10020bab9;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_10020be9c:
                local_4c = 0x400;
                uStack_50 = 1;
                uStack_54 = 0x7a0a90;
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
              goto LAB_10020bab9;
            }
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
              goto LAB_10020bf3a;
            }
          }
          else {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_10020bf3a:
              local_4c = 0x400;
              uStack_50 = 1;
              uStack_54 = 0x7a0a90;
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
        lVar4 = 0;
      }
    }
  }
LAB_10020bab9:
  FUN_10017060f(local_ea8);
  FUN_10017060f(lVar4);
  FUN_10017060f(lVar3);
  FUN_10017060f(lVar10);
  FUN_1001f7652(local_ea0);
LAB_10020bae9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

