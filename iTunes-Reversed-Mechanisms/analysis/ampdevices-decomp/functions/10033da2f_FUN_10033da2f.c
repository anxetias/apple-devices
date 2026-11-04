// name: FUN_10033da2f
// address: 10033da2f

void FUN_10033da2f(long param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  cfstringStruct *pcVar9;
  undefined8 uVar10;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  char local_62;
  char local_61;
  char local_60;
  char local_5f;
  char local_5e;
  char local_5d;
  uint local_5c;
  undefined4 local_58;
  cfstringStruct *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_5d = '\0';
  local_62 = '\0';
  local_61 = '\0';
  local_60 = '\0';
  local_5f = '\0';
  local_5c = 0;
  local_5e = '\0';
  local_70 = param_2;
  lVar5 = _ATCFMessageGetParam(param_2,&cf_DisabledAssetTypes);
  if (lVar5 != 0) {
    lVar6 = _CFGetTypeID(lVar5);
    lVar7 = _CFArrayGetTypeID();
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar8 = DAT_1008c75b8;
    if (lVar6 == lVar7) {
      local_90 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      local_88 = lVar5;
      if (cVar1 != '\0') {
        pcVar9 = *(cfstringStruct **)(param_1 + 0x152c8);
        FUN_1001b7a44(local_a0);
        FUN_1001b7b04(local_80,"{ ");
        FUN_1001bbcfe(local_a0,local_80);
        lVar5 = local_88;
        FUN_1001b7a50(local_80);
        lVar5 = FUN_10017076e(lVar5);
        if (0 < lVar5) {
          lVar6 = 0;
          do {
            if (lVar6 != 0) {
              FUN_1001b7b04(local_80,", ");
              FUN_1001bbcfe(local_a0,local_80);
              FUN_1001b7a50(local_80);
            }
            uVar8 = FUN_100164a01(local_88,lVar6);
            FUN_1001b7eb0(local_80,uVar8);
            FUN_1001bbcfe(local_a0,local_80);
            FUN_1001b7a50(local_80);
            lVar6 = lVar6 + 1;
          } while (lVar5 != lVar6);
        }
        FUN_1001b7b04(local_80," }");
        FUN_1001bbcfe(local_a0,local_80);
        FUN_1001b7a50(local_80);
        local_4a = (char *)FUN_1001b83ae(local_a0);
        lVar5 = local_88;
        local_58 = 0x8420202;
        local_4c = 0x822;
        local_54 = pcVar9;
        __os_log_impl(0x100000000,local_90,1,
                      "airtraffic> disabled asset types for device %{public}@ = %{public}s",
                      &local_58,0x16);
        FUN_1001b7a50(local_a0);
      }
      lVar5 = FUN_10017076e(lVar5);
      if (0 < lVar5) {
        lVar6 = 0;
        local_5c = 0;
        do {
          pcVar9 = (cfstringStruct *)FUN_100164a01(local_88,lVar6);
          if (pcVar9 == (cfstringStruct *)0x0) {
            uVar8 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar8,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = (cfstringStruct *)0x1007a0a90;
              local_4c = 0x822;
              local_4a = "assetType != nullptr";
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            cVar1 = FUN_100170633(pcVar9,&cf_Audiobook);
            if (cVar1 == '\0') {
              cVar1 = FUN_100170633(pcVar9,&cf_HomeVideo);
              if (cVar1 == '\0') {
                cVar1 = FUN_100170633(pcVar9,&cf_Movie);
                if (cVar1 == '\0') {
                  cVar1 = FUN_100170633(pcVar9,&cf_Music);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_100170633(pcVar9,&cf_MusicVideo);
                    if (cVar1 == '\0') {
                      cVar1 = FUN_100170633(pcVar9,&cf_TVEpisode);
                      if (cVar1 == '\0') {
                        cVar1 = FUN_100170633(pcVar9,&cf_Podcast);
                        if (cVar1 == '\0') {
                          cVar1 = FUN_100170633(pcVar9,&cf_VideoPodcast);
                          if (cVar1 == '\0') {
                            cVar1 = FUN_100170633(pcVar9,&cf_iTunesU);
                            if (cVar1 == '\0') {
                              cVar1 = FUN_100170633(pcVar9,&cf_iTunesUVideo);
                              if (cVar1 == '\0') {
                                cVar1 = FUN_100170633(pcVar9,&cf_Photo);
                                if (cVar1 == '\0') {
                                  if (DAT_1008c75c0 != -1) {
                                    _dispatch_once(&DAT_1008c75c0,
                                                   &PTR___NSConcreteGlobalBlock_100857068);
                                  }
                                  local_90 = DAT_1008c75b8;
                                  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                                  if (cVar1 != '\0') {
                                    local_58 = 0x8420102;
                                    local_54 = pcVar9;
                                    __os_log_impl(0x100000000,local_90,1,
                                                  "airtraffic> unknown disabled asset type %{public}@"
                                                  ,&local_58,0xc);
                                  }
                                }
                                else {
                                  local_5c = local_5c | 0x400;
                                }
                              }
                              else {
                                local_5c = local_5c | 0x100;
                              }
                            }
                            else {
                              local_5c = local_5c | 0x80;
                            }
                          }
                          else {
                            local_5c = local_5c | 0x40;
                          }
                        }
                        else {
                          local_5c = local_5c | 0x20;
                        }
                      }
                      else {
                        local_5c = local_5c | 0x10;
                      }
                    }
                    else {
                      local_5c = local_5c | 8;
                    }
                  }
                  else {
                    local_5c = local_5c | 4;
                  }
                }
                else {
                  local_5c = local_5c | 2;
                }
              }
              else {
                local_5c = local_5c | 0x200;
              }
            }
            else {
              local_5c = local_5c | 1;
            }
          }
          lVar6 = lVar6 + 1;
        } while (lVar5 != lVar6);
      }
    }
    else {
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8420102;
        local_54 = &cf_DisabledAssetTypes;
        __os_log_impl(0x100000000,uVar8,0x10,"airtraffic> expected array for %{public}@ param",
                      &local_58,0xc);
      }
    }
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar8 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar1 != '\0') {
    pcVar11 = "on";
    if ((local_5c & 0xc) == 0) {
      pcVar11 = "off";
    }
    local_4a = *(char **)(param_1 + 0x152c8);
    local_58 = 0x8220202;
    local_4c = 0x842;
    local_54 = (cfstringStruct *)pcVar11;
    __os_log_impl(0x100000000,uVar8,1,
                  "airtraffic> cloud music library is %{public}s for device %{public}@",&local_58,
                  0x16);
  }
  if (*(char *)(param_1 + 0x345) != '\0') {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar8 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      pcVar11 = "on";
      if ((local_5c >> 10 & 1) == 0) {
        pcVar11 = "off";
      }
      local_4a = *(char **)(param_1 + 0x152c8);
      local_58 = 0x8220202;
      local_4c = 0x842;
      local_54 = (cfstringStruct *)pcVar11;
      __os_log_impl(0x100000000,uVar8,1,
                    "airtraffic> cloud photo library is %{public}s for device %{public}@",&local_58,
                    0x16);
    }
  }
  cVar1 = FUN_100340015(local_70,&cf_ManualSync,&local_5d);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar8 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar1 == '\0') {
    if (cVar2 != '\0') {
      local_4a = (char *)_ATCFMessageGetName(local_70);
      local_58 = 0x8420202;
      local_54 = &cf_ManualSync;
      pcVar11 = "airtraffic> missing %{public}@ in %{public}@ message";
      goto LAB_10033e08e;
    }
  }
  else if (cVar2 != '\0') {
    pcVar12 = "is";
    if (local_5d == '\0') {
      pcVar12 = "is not";
    }
    local_4a = *(char **)(param_1 + 0x152c8);
    local_58 = 0x8220202;
    pcVar11 = "airtraffic> manual sync %{public}s allowed for device %{public}@";
    local_54 = (cfstringStruct *)pcVar12;
LAB_10033e08e:
    local_4c = 0x842;
    __os_log_impl(0x100000000,uVar8,1,pcVar11,&local_58,0x16);
  }
  cVar1 = FUN_100340015(local_70,&cf_AutoSync,&local_62);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar8 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar1 == '\0') {
    if (cVar2 != '\0') {
      local_4a = (char *)_ATCFMessageGetName(local_70);
      local_58 = 0x8420202;
      local_54 = &cf_AutoSync;
      pcVar11 = "airtraffic> missing %{public}@ in %{public}@ message";
      goto LAB_10033e166;
    }
  }
  else if (cVar2 != '\0') {
    pcVar12 = "is";
    if (local_62 == '\0') {
      pcVar12 = "is not";
    }
    local_4a = *(char **)(param_1 + 0x152c8);
    local_58 = 0x8220202;
    pcVar11 = "airtraffic> auto sync %{public}s allowed for device %{public}@";
    local_54 = (cfstringStruct *)pcVar12;
LAB_10033e166:
    local_4c = 0x842;
    __os_log_impl(0x100000000,uVar8,1,pcVar11,&local_58,0x16);
  }
  cVar1 = FUN_100340015(local_70,&cf_DataProtected,&local_61);
  if (cVar1 != '\0') {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar8 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      pcVar11 = "is";
      if (local_61 == '\0') {
        pcVar11 = "is not";
      }
      local_4a = *(char **)(param_1 + 0x152c8);
      local_58 = 0x8220202;
      local_4c = 0x842;
      local_54 = (cfstringStruct *)pcVar11;
      __os_log_impl(0x100000000,uVar8,1,
                    "airtraffic> data protection %{public}s enabled for device %{public}@",&local_58
                    ,0x16);
    }
  }
  cVar1 = FUN_100340015(local_70,&cf_PurgeAllowed,&local_60);
  if (cVar1 != '\0') {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar8 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      pcVar11 = "is";
      if (local_60 == '\0') {
        pcVar11 = "is not";
      }
      local_4a = *(char **)(param_1 + 0x152c8);
      local_58 = 0x8220202;
      local_4c = 0x842;
      local_54 = (cfstringStruct *)pcVar11;
      __os_log_impl(0x100000000,uVar8,1,"airtraffic> purge %{public}s allowed for device %{public}@"
                    ,&local_58,0x16);
    }
  }
  bVar3 = FUN_100340015(local_70,&cf_EducationModeEnabled,&local_5f);
  if ((bVar3 & local_5f != '\0') == 1) {
    uVar8 = FUN_1003400ee(local_70,&cf_ManagedOrganizationName);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar10 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_54 = *(cfstringStruct **)(param_1 + 0x152c8);
      local_58 = 0x8420102;
      __os_log_impl(0x100000000,uVar10,1,
                    "airtraffic> education mode is enabled for device %{public}@",&local_58,0xc);
    }
  }
  else {
    uVar8 = 0;
  }
  cVar1 = FUN_100340015(local_70,&cf_SupportsFavorites,&local_5e);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0x3b0) = local_5e;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar10 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      pcVar11 = "is";
      if (local_5e == '\0') {
        pcVar11 = "is not";
      }
      local_4a = *(char **)(param_1 + 0x152c8);
      local_58 = 0x8220202;
      local_4c = 0x842;
      local_54 = (cfstringStruct *)pcVar11;
      __os_log_impl(0x100000000,uVar10,1,
                    "airtraffic> favoriting %{public}s supported for device %{public}@",&local_58,
                    0x16);
    }
  }
  *(undefined1 *)(param_1 + 0x16841) = 1;
  if (*(uint *)(param_1 + 0x166e0) != local_5c) {
    if (*(long *)(param_1 + 0x30) == 0) {
      *(uint *)(param_1 + 0x166e0) = local_5c;
      uVar4 = local_5c;
    }
    else {
      for (lVar5 = FUN_1002f930c(); lVar5 != 0; lVar5 = FUN_1002f9451(lVar5)) {
        cVar1 = FUN_1004ebf47(param_1,lVar5);
        if (cVar1 != '\0') {
          FUN_10047659f(lVar5,0);
        }
      }
      *(uint *)(param_1 + 0x166e0) = local_5c;
      uVar4 = local_5c;
      if (*(long *)(param_1 + 0x30) != 0) {
        for (lVar5 = FUN_1002f930c(); lVar5 != 0; lVar5 = FUN_1002f9451(lVar5)) {
          cVar1 = FUN_1004ebf47(param_1,lVar5);
          if (cVar1 != '\0') {
            FUN_10047659f(lVar5,1);
          }
        }
        bVar3 = (byte)~(byte)local_5c >> 1 & 2;
        if (*(char *)(param_1 + 0x38f) == '\0') {
          bVar3 = 0;
        }
        *(byte *)(*(long *)(param_1 + 0x30) + 0x2d1a) =
             *(byte *)(*(long *)(param_1 + 0x30) + 0x2d1a) & 0xfd | bVar3;
        *(byte *)(*(long *)(param_1 + 0x30) + 0x2d1a) =
             *(byte *)(*(long *)(param_1 + 0x30) + 0x2d1a) & 0x7f | ((local_5c & 0xc) != 0) << 7;
        uVar4 = *(uint *)(param_1 + 0x166e0);
      }
    }
    if (((uVar4 & 4) != 0) && (*(char *)(param_1 + 0x14df4) == '\0')) {
      *(char *)(param_1 + 0x14df4) = (*(char *)(param_1 + 0x14cdb) == '\x02') + '\x01';
    }
    if ((uVar4 >> 10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x151de) = 0;
      *(undefined1 *)(param_1 + 0x14d04) = 0;
    }
    FUN_10033295f(param_1);
    uVar10 = FUN_1001c156e();
    FUN_1001c6987(uVar10,0x69707372,*(undefined4 *)(param_1 + 0x28),0,0);
  }
  *(char *)(param_1 + 0x16845) = local_60;
  *(char *)(param_1 + 0x16846) = local_5f;
  uVar8 = FUN_1001705fc(uVar8);
  FUN_10017060f(*(undefined8 *)(param_1 + 0x16850));
  *(undefined8 *)(param_1 + 0x16850) = uVar8;
  if ((*(char *)(param_1 + 0x16843) != local_5d) || (*(char *)(param_1 + 0x16844) != local_61)) {
    *(char *)(param_1 + 0x16843) = local_5d;
    *(char *)(param_1 + 0x16844) = local_61;
    uVar8 = FUN_1001c156e();
    if (local_5d == '\0') {
      bVar13 = false;
    }
    else {
      bVar13 = *(char *)(DAT_1008c76a0 + 0x1a93) == '\0';
    }
    FUN_1001c6987(uVar8,0x69707361,*(undefined4 *)(param_1 + 0x28),bVar13,0);
  }
  if (*(char *)(param_1 + 0x16848) != '\0') {
    *(undefined1 *)(param_1 + 0x16848) = 0;
    FUN_1004e1392(param_1,1);
  }
  if (*(char *)(param_1 + 0x16842) == local_62) {
    if (*(char *)(param_1 + 0x16842) == '\0') goto LAB_10033e60f;
    cVar1 = *(char *)(param_1 + 0x16840);
  }
  else {
    *(char *)(param_1 + 0x16842) = local_62;
    cVar1 = local_62;
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x16840) = 0;
    FUN_1003304ea(param_1,0);
  }
LAB_10033e60f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

