// name: FUN_10024d72a
// address: 10024d72a

ulong FUN_10024d72a(long param_1,undefined8 param_2,int *param_3,cfstringStruct *param_4,
                   undefined4 param_5,undefined4 param_6,long param_7,undefined1 *param_8,
                   undefined1 *param_9,long param_10,char param_11,long param_12,
                   undefined8 *param_13,undefined4 *param_14)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *pcVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  bool bVar15;
  undefined4 local_dc;
  long local_d8;
  undefined8 local_d0;
  cfstringStruct *local_c8;
  undefined4 local_bc;
  int *local_b8;
  char local_aa;
  char local_a9;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined2 local_9c;
  char *local_9a;
  uint local_68;
  uint local_58 [3];
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_8 != (undefined1 *)0x0) {
    *param_8 = 0;
  }
  if (param_9 != (undefined1 *)0x0) {
    *param_9 = 0;
  }
  if (param_13 != (undefined8 *)0x0) {
    *param_13 = 0;
  }
  if (param_14 != (undefined4 *)0x0) {
    *param_14 = 0;
  }
  local_d0 = param_2;
  local_bc = param_5;
  if (2 < (int)param_2 - 1U) {
    uVar9 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar9,0x10);
    if (cVar1 != '\0') {
      local_a8 = 0x8220202;
      uStack_a4 = 0x7a0a90;
      uStack_a0 = 1;
      local_9c = 0x822;
      local_9a = 
      "(deviceSoftwareType == kDeviceSoftwareTypeUpdate) || (deviceSoftwareType == kDeviceSoftwareTypeRestore) || (deviceSoftwareType == kDeviceSoftwareTypePurchasedUpgrade)"
      ;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
    uVar13 = 0;
    goto LAB_10024dc7a;
  }
  if (param_1 == 0) {
    local_d8 = FUN_1005f4b1c(*param_3);
    if (local_d8 != 0) goto LAB_10024d7f9;
    uVar9 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar9,0x10);
    if (cVar1 != '\0') {
      local_a8 = 0x8220202;
      uStack_a4 = 0x7a0a90;
      uStack_a0 = 1;
      local_9c = 0x822;
      local_9a = "webUpdateDictionary != nullptr";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(1,0);
    lVar7 = 0;
    local_d8 = 0;
    goto LAB_10024dc64;
  }
  local_d8 = FUN_1001705fc(param_1);
LAB_10024d7f9:
  local_c8 = param_4;
  local_b8 = param_3;
  lVar6 = FUN_10024e6d3(local_d8,param_6,&local_dc);
  lVar7 = lVar6;
  if (lVar6 == 0) {
    lVar7 = local_d8;
  }
  if (param_14 != (undefined4 *)0x0 && lVar6 != 0) {
    *param_14 = local_dc;
    lVar7 = lVar6;
  }
  if ((*local_b8 == 0x6950686e) &&
     (cVar1 = FUN_10024bd01(0x6950686e,&cf_MobileDeviceSoftwareVersionsByCarrier,param_6),
     cVar1 != '\0')) {
    if (*(long *)(local_b8 + 0x12) != 0) {
      lVar6 = FUN_100166b7f(lVar7,&cf_MobileDeviceSoftwareVersionsByCarrier);
      if (lVar6 == 0) {
        uVar9 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar9,0x10);
        if (cVar1 != '\0') {
          local_a8 = 0x8220202;
          uStack_a4 = 0x7a0a90;
          uStack_a0 = 1;
          local_9c = 0x822;
          local_9a = "mobileDeviceSoftwareVersionsByCarrierDictionary != nullptr";
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        lVar7 = FUN_100166b7f(lVar6,*(undefined8 *)(local_b8 + 0x12));
        if (lVar7 != 0) {
LAB_10024d8c3:
          if ((char)local_bc != '\x01' || (int)local_d0 != 2) goto LAB_10024db3a;
          FUN_10024f22a(&local_a8);
          cVar1 = FUN_10024d72a(param_1,2,local_b8,local_c8,0,0,&local_a8,0,0,0,0,0,0,0);
          if (cVar1 == '\0') {
LAB_10024db13:
            lVar7 = FUN_100166b7f(lVar6,&cf_Unlocked);
            if (lVar7 == 0) {
              uVar9 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar9,0x10);
              if (cVar1 != '\0') {
                local_58[0] = 0x8220202;
                local_58[1] = 0x7a0a90;
                local_58[2] = 1;
                uStack_4c = 0x822;
                uStack_4a = 0x40a6;
                uStack_48 = 0x1007b;
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",local_58,0x16)
                ;
              }
              FUN_1001782e9(0,0);
              FUN_10024f3ba(&local_a8);
              goto LAB_10024dc61;
            }
          }
          else if ((local_c8 == (cfstringStruct *)0x0) ||
                  (lVar8 = FUN_100173bb7(local_c8,&cf___,0), lVar8 == 0)) {
            if ((local_b8[0x14] != 0xffffffff) && (local_68 < (uint)local_b8[0x14]))
            goto LAB_10024db13;
          }
          else {
            local_58[0] = 0x73766d64;
            uVar9 = FUN_1001705fc(local_c8);
            local_58[2] = (uint)uVar9;
            uStack_4c = (undefined2)((ulong)uVar9 >> 0x20);
            uStack_4a = (undefined2)((ulong)uVar9 >> 0x30);
            cVar1 = FUN_10024aa49(&local_a8);
            FUN_100249fca(local_58);
            if (cVar1 != '\0') goto LAB_10024db13;
          }
          FUN_10024f3ba(&local_a8);
          goto LAB_10024db3a;
        }
        lVar7 = FUN_100166b7f(local_d8,&cf_MobileDeviceCarrierGroupsForSoftwareVersions);
        if (lVar7 == 0) {
          uVar9 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar9,0x10);
          if (cVar1 != '\0') {
            local_a8 = 0x8220202;
            uStack_a4 = 0x7a0a90;
            uStack_a0 = 1;
            local_9c = 0x822;
            local_9a = "mobileDeviceCarrierGroupsForSoftwareVersionsDictionary != nullptr";
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          lVar7 = FUN_100166c1b(lVar7,*(undefined8 *)(local_b8 + 0x12));
          if (lVar7 == 0) {
            uVar9 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar9,0x10);
            if (cVar1 != '\0') {
              local_a8 = 0x8220202;
              uStack_a4 = 0x7a0a90;
              uStack_a0 = 1;
              local_9c = 0x822;
              local_9a = "carrierGroupString != nullptr";
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            lVar7 = FUN_100166b7f(lVar6,lVar7);
            if (lVar7 != 0) goto LAB_10024d8c3;
            uVar9 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar9,0x10);
            if (cVar1 != '\0') {
              local_a8 = 0x8220202;
              uStack_a4 = 0x7a0a90;
              uStack_a0 = 1;
              local_9c = 0x822;
              local_9a = "carrierDictionary != nullptr";
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
            }
            FUN_1001782e9(0,0);
          }
        }
      }
    }
LAB_10024dc61:
    lVar7 = 0;
LAB_10024dc64:
    uVar13 = 0;
  }
  else {
LAB_10024db3a:
    lVar6 = FUN_100166b7f(lVar7,&cf_MobileDeviceSoftwareVersions);
    if (lVar6 == 0) goto LAB_10024dc61;
    if (local_b8[9] != 0 || local_b8[8] != 0) {
      lVar7 = FUN_10024c50f(local_d8,&cf_MobileDeviceProductTypes);
      if (lVar7 != 0) {
        lVar8 = _CFGetTypeID(lVar7);
        lVar12 = _CFStringGetTypeID();
        if (lVar8 != lVar12) {
          uVar9 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar9,0x10);
          if (cVar1 != '\0') {
            local_a8 = 0x8220202;
            uStack_a4 = 0x7a0a90;
            uStack_a0 = 1;
            local_9c = 0x822;
            local_9a = "CFGetTypeID(productTypeString) == CFStringGetTypeID()";
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_10024dc64;
        }
        goto LAB_10024dbed;
      }
      uVar9 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar9,0x10);
      if (cVar1 != '\0') {
        local_a8 = 0x8220202;
        uStack_a4 = 0x7a0a90;
        uStack_a0 = 1;
        local_9c = 0x822;
        local_9a = "productTypeString != nullptr";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_10024dc61;
    }
    lVar7 = FUN_1001734f5(DAT_1008c4d90,local_b8 + 10,0x600,
                          *(undefined8 *)PTR__kCFAllocatorNull_10082e028);
    if (lVar7 == 0) {
      uVar9 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar9,0x10);
      if (cVar1 != '\0') {
        local_a8 = 0x8220202;
        uStack_a4 = 0x7a0a90;
        uStack_a0 = 1;
        local_9c = 0x822;
        local_9a = "productTypeString != nullptr";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_10024dc61;
    }
LAB_10024dbed:
    lVar6 = FUN_100166b7f(lVar6,lVar7);
    if (lVar6 == 0) goto LAB_10024dc64;
    if (param_12 == 0) {
      if (local_c8 == (cfstringStruct *)0x0) {
        if ((int)local_d0 == 2) {
          pcVar11 = &cf_Unknown;
          goto LAB_10024dd2a;
        }
      }
      else {
        bVar15 = (int)local_d0 == 2;
        lVar8 = FUN_100173bb7(local_c8,&cf___,0);
        pcVar11 = &cf_Unknown;
        if (lVar8 != 0) {
          pcVar11 = local_c8;
        }
        if (bVar15 || lVar8 != 0) {
LAB_10024dd2a:
          do {
            pcVar10 = pcVar11;
            lVar8 = FUN_100166b7f(lVar6,pcVar10);
            if (lVar8 == 0) goto LAB_10024dc64;
            pcVar11 = (cfstringStruct *)FUN_100166c1b(lVar8,&cf_SameAs);
          } while (pcVar11 != (cfstringStruct *)0x0);
          lVar6 = FUN_100173bb7(pcVar10,&cf_Unknown,0);
          if (lVar6 == 0) {
            local_a9 = '\0';
            if (param_11 == '\0') {
              uVar5 = local_b8[0x14];
              if (uVar5 == 0xffffffff || *(char *)(DAT_1008c76a0 + 0x1a93) == '\0') {
                iVar4 = local_b8[1];
                if ((iVar4 == 0x2711) && (local_b8[8] != 0)) {
                  if (1 < local_b8[0x15] + 1U) {
                    iVar4 = FUN_10024c7e6(local_b8,local_58);
                    if (iVar4 != 0) {
                      uVar9 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar9,0x10);
                      if (cVar1 != '\0') {
                        local_a8 = 0x8220202;
                        uStack_a4 = 0x7a0a90;
                        uStack_a0 = 1;
                        local_9c = 0x400;
                        local_9a = (char *)CONCAT44(local_9a._4_4_,iVar4);
                        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",
                                            &local_a8,0x12);
                      }
                      goto LAB_10024dc64;
                    }
                    uVar5 = local_b8[0x15];
                    if (uVar5 < local_58[0]) {
                      if (local_b8[9] != 0) {
                        uVar9 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar9,0x10);
                        if (cVar1 != '\0') {
                          local_a8 = 0x8220202;
                          uStack_a4 = 0x7a0a90;
                          uStack_a0 = 1;
                          local_9c = 0x822;
                          local_9a = 
                          "deviceUpdaterFamilyInfo.mobileDeviceRecoveryProductTypeID == 0";
                          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",
                                              &local_a8,0x16);
                        }
                        FUN_1001782e9(0,0);
                        uVar5 = local_b8[0x15];
                      }
                      goto LAB_10024e202;
                    }
                    iVar4 = local_b8[1];
                    goto LAB_10024e223;
                  }
LAB_10024e22a:
                  lVar6 = FUN_100279568();
                  lVar12 = 0;
                  do {
                    if (*(short *)(lVar6 + 0xcbc + lVar12 * 4) == 0x2711) {
                      local_a9 = *(char *)(lVar6 + 0xcbe + lVar12 * 4);
                      goto LAB_10024e256;
                    }
                    lVar12 = lVar12 + 1;
                  } while ((int)lVar12 != 0x10);
                }
                else {
LAB_10024e223:
                  if (iVar4 == 0x2711) goto LAB_10024e22a;
                }
                local_a9 = '\0';
              }
              else {
LAB_10024e202:
                FUN_10024be76(uVar5,local_b8,&local_a9);
              }
LAB_10024e256:
              if (local_a9 != '\0') goto LAB_10024e25a;
LAB_10024e26f:
              lVar6 = FUN_100166b7f(lVar8,&cf_Universal);
              lVar12 = lVar8;
              if (lVar6 != 0) {
                lVar12 = lVar6;
              }
            }
            else {
              local_a9 = param_11;
LAB_10024e25a:
              lVar12 = FUN_10024e933(lVar8,local_a9,0);
              if (lVar12 == 0) goto LAB_10024e26f;
            }
            if (param_10 != 0) {
              FUN_10024ea66(lVar8);
            }
          }
          else {
            lVar6 = FUN_100166b7f(lVar8,&cf_2);
            lVar12 = lVar8;
            if (lVar6 != 0) {
              lVar12 = lVar6;
            }
          }
          lVar8 = FUN_100166b7f(lVar12,&cf_PurchasedRestore);
          cVar1 = FUN_100167e61(lVar12,&cf_OfferPurchasedRestoreAsUpdate,0);
          local_bc = CONCAT31(local_bc._1_3_,cVar1);
          bVar2 = 1;
          if (cVar1 == '\0') {
            bVar2 = FUN_100167e61(lVar12,&cf_OfferPurchasedPartialRestoreAsUpdate,0);
          }
          if ((lVar8 == 0) || (cVar1 = FUN_10024eaa7(local_b8[1],lVar8), cVar1 == '\0')) {
            iVar4 = (int)local_d0;
            lVar14 = 0;
LAB_10024e333:
            if (iVar4 != 3) goto LAB_10024e362;
            local_c8 = (cfstringStruct *)CONCAT71(local_c8._1_7_,bVar2);
            lVar6 = lVar14;
            if (lVar14 == 0) {
LAB_10024e348:
              lVar6 = lVar8;
              if ((bVar2 & lVar8 != 0) == 0) goto LAB_10024dc64;
            }
            goto LAB_10024e4cf;
          }
          iVar4 = (int)local_d0;
          if (*(char *)(DAT_1008c76a0 + 0x1a93) != '\0') {
            lVar14 = 0;
            goto LAB_10024e333;
          }
          if (iVar4 != 1) {
            lVar14 = 0;
            if (iVar4 == 2) {
              lVar14 = lVar8;
            }
            goto LAB_10024e333;
          }
          if (bVar2 != 0) {
            local_c8 = (cfstringStruct *)CONCAT71(local_c8._1_7_,1);
            goto LAB_10024e348;
          }
          lVar14 = 0;
LAB_10024e362:
          cVar1 = FUN_100167e61(lVar12,&cf_OfferRestoreAsUpdate,0);
          local_bc = CONCAT31(local_bc._1_3_,cVar1);
          local_c8 = (cfstringStruct *)CONCAT71(local_c8._1_7_,1);
          if (cVar1 == '\0') {
            uVar3 = FUN_100167e61(lVar12,&cf_OfferPartialRestoreAsUpdate,0);
            local_c8 = (cfstringStruct *)CONCAT71(local_c8._1_7_,uVar3);
          }
          lVar6 = FUN_100166b7f(lVar12,&cf_RateLimitedRestore);
          if (lVar6 == 0) {
LAB_10024e4c3:
            lVar6 = lVar14;
            if (lVar14 == 0) {
              if (((int)local_d0 == 2) || (((int)local_d0 == 1 && ((char)local_c8 != '\0')))) {
                lVar6 = FUN_100166b7f(lVar12,&cf_Restore);
                if (lVar6 != 0) goto LAB_10024e4cf;
                uVar9 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar9,0x10);
                if (cVar1 != '\0') {
                  local_a8 = 0x8220202;
                  uStack_a4 = 0x7a0a90;
                  uStack_a0 = 1;
                  local_9c = 0x822;
                  local_9a = "softwareDictionary != nullptr";
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_a8,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else {
                lVar6 = FUN_100166b7f(lVar12,&cf_Update);
                if (lVar6 != 0) goto LAB_10024e4cf;
              }
              goto LAB_10024dc64;
            }
          }
          else {
            lVar8 = FUN_10016696d(lVar6,&cf_UniqueBuildID);
            if (lVar8 == 0) {
              uVar9 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar9,0x10);
              if (cVar1 != '\0') {
                local_a8 = 0x8220202;
                uStack_a4 = 0x7a0a90;
                uStack_a0 = 1;
                local_9c = 0x822;
                local_9a = "uniqueBuildID != nullptr";
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_a8,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              goto LAB_10024e4c3;
            }
            if ((int)local_d0 == 1) {
              local_aa = FUN_100167e61(lVar12,&cf_OfferRateLimitedRestoreAsUpdate,0);
              if ((local_aa == '\0') &&
                 (cVar1 = FUN_100167e61(lVar12,&cf_OfferRateLimitedPartialRestoreAsUpdate,0),
                 cVar1 == '\0')) goto LAB_10024e4c3;
              cVar1 = FUN_10024d52e(*(undefined8 *)(local_b8 + 0x16),lVar8);
              if (cVar1 == '\0') goto LAB_10024e4a8;
              local_c8 = (cfstringStruct *)CONCAT71(local_c8._1_7_,1);
              local_bc = CONCAT31(local_bc._1_3_,local_aa);
            }
            else {
              cVar1 = FUN_10024d52e(*(undefined8 *)(local_b8 + 0x16),lVar8);
              if (cVar1 == '\0') {
LAB_10024e4a8:
                if (param_13 != (undefined8 *)0x0) {
                  uVar9 = FUN_1001705fc(lVar8);
                  *param_13 = uVar9;
                  goto LAB_10024dc37;
                }
                goto LAB_10024e4c3;
              }
            }
          }
LAB_10024e4cf:
          if (param_7 == 0) {
            uVar13 = 0;
          }
          else {
            uVar5 = FUN_10024ebc1(lVar6,0,param_7,local_dc);
            uVar13 = (ulong)uVar5;
          }
          if (param_8 != (undefined1 *)0x0) {
            *param_8 = (char)local_c8;
          }
          if (param_9 != (undefined1 *)0x0) {
            *param_9 = (undefined1)local_bc;
          }
          goto LAB_10024dc66;
        }
      }
      goto LAB_10024dc64;
    }
    FUN_1001c62d9(&local_a8,8);
    local_a8 = (undefined4)param_12;
    uStack_a4 = (undefined4)((ulong)param_12 >> 0x20);
    FUN_1001714c2(lVar6,FUN_10025a955);
LAB_10024dc37:
    uVar13 = CONCAT71((int7)((ulong)lVar6 >> 8),1);
  }
LAB_10024dc66:
  FUN_10017060f(lVar7);
  FUN_10017060f(local_d8);
LAB_10024dc7a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13 & 0xffffffff;
}

