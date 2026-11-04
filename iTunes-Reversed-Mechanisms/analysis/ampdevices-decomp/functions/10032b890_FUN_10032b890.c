// name: FUN_10032b890
// address: 10032b890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10032b890(long param_1,char param_2,byte *param_3,ulong *param_4,byte *param_5,uint param_6)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined2 uVar12;
  double dVar13;
  double local_2e0;
  ulong local_2d8;
  ulong local_2d0;
  byte *local_2c8;
  byte *local_2c0;
  byte *local_2b8;
  undefined1 local_2b0 [16];
  byte *local_2a0;
  long local_298;
  long local_290;
  long local_288;
  ulong *local_280;
  byte *local_278;
  long local_270;
  byte *local_268;
  uint local_260;
  byte local_259;
  undefined1 local_258 [512];
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_268 = param_5;
  local_260 = param_6;
  FUN_1001b7a44(local_2b0);
  if (param_1 == 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "inMetadataDict != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar7 = 0x2077;
    FUN_1001782e9(0,0);
    goto LAB_10032d046;
  }
  if (param_3 == (byte *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "inITTrackInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar7 = 0x2078;
    FUN_1001782e9(0,0);
    goto LAB_10032d046;
  }
  if (param_4 == (ulong *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "inITTrackInfoPriv != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar7 = 0x2079;
    FUN_1001782e9(0,0);
    goto LAB_10032d046;
  }
  if (local_268 == (byte *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "inITTrackInfoVar != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar7 = 0x207a;
    FUN_1001782e9(0,0);
    goto LAB_10032d046;
  }
  local_288 = FUN_100166b7f(param_1,PTR_cf_asset_info_1008529a0);
  if ((local_260 & 2) != 0 && param_2 == '\0') {
    cVar2 = FUN_100167dd2(param_1,PTR_cf_isRental_100852820,0);
    param_2 = '\x01';
    if (cVar2 == '\0') {
      cVar2 = FUN_100167dd2(param_1,&cf_rental,0);
      param_2 = cVar2 != '\0';
    }
  }
  lVar6 = FUN_100171426(param_1);
  if (lVar6 == 0) {
    uVar7 = 0;
    goto LAB_10032d046;
  }
  local_298 = FUN_100167d88(param_1,PTR_cf_itemId_100852748);
  if (local_298 != 0) {
    *(long *)((long)param_4 + 0xccc) = local_298;
    *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 8;
  }
  local_278 = param_3 + 8;
  if ((local_260 & 4) == 0) {
    cVar2 = FUN_100166ce2(param_1,PTR_cf_itemName_100852750);
    if (cVar2 != '\0') goto LAB_10032bac2;
    cVar2 = FUN_100166ce2(param_1,PTR_cf_songName_1008528d8,local_278);
LAB_10032b9d2:
    if (cVar2 != '\0') goto LAB_10032bac2;
  }
  else {
    cVar2 = FUN_100166ce2(param_1,PTR_cf_BKTrackTitle_10083e4c0);
    if (cVar2 == '\0') {
      uVar7 = FUN_100166c1b(param_1,PTR_cf_BKBookType_10083e480);
      cVar2 = FUN_100170633(uVar7,PTR_cf_audiobook_track_10083e4c8);
      if (((cVar2 == '\0') ||
          (cVar2 = FUN_100166ce2(param_1,PTR_cf_BKDisplayName_10083e498,local_278), cVar2 == '\0'))
         && (cVar2 = FUN_100166ce2(param_1,PTR_cf_itemName_10083e4b0,local_278), cVar2 == '\0')) {
        cVar2 = FUN_100166ce2(param_1,PTR_cf_BKDisplayName_10083e498,local_278);
        goto LAB_10032b9d2;
      }
    }
LAB_10032bac2:
    *param_3 = *param_3 | 1;
  }
  local_2c8 = param_3 + 0x408;
  cVar2 = FUN_100166ce2(param_1,PTR_cf_artistName_100852788);
  if (cVar2 != '\0') {
    *param_3 = *param_3 | 4;
  }
  local_2c0 = param_3 + 0x1458;
  cVar2 = FUN_100166ce2(param_1,PTR_cf_playlistArtistName_100852770);
  if (cVar2 != '\0') {
    param_3[3] = param_3[3] | 0x40;
  }
  local_2a0 = param_3 + 0x608;
  cVar2 = FUN_100166ce2(param_1,PTR_cf_playlistName_100852778);
  if (cVar2 == '\0') {
    if ((local_260 & 4) != 0) {
      uVar7 = FUN_100166c1b(param_1,PTR_cf_BKBookType_10083e480);
      cVar2 = FUN_100170633(uVar7,PTR_cf_audiobook_track_10083e4c8);
      if ((cVar2 != '\0') &&
         (cVar2 = FUN_100166ce2(param_1,PTR_cf_itemName_100852750,local_2a0), cVar2 != '\0'))
      goto LAB_10032bb38;
    }
  }
  else {
LAB_10032bb38:
    *param_3 = *param_3 | 8;
  }
  cVar2 = FUN_100166ce2(param_1,PTR_cf_movement_100852830,(byte *)((long)param_4 + 0x3024));
  if (cVar2 != '\0') {
    *(byte *)((long)param_4 + 9) = *(byte *)((long)param_4 + 9) | 0x10;
  }
  cVar2 = FUN_1001677f4(param_1,PTR_cf_movement_number_100852840,(byte *)((long)param_4 + 0x3224));
  if (cVar2 != '\0') {
    *(byte *)((long)param_4 + 9) = *(byte *)((long)param_4 + 9) | 0x20;
  }
  cVar2 = FUN_1001677f4(param_1,PTR_cf_movement_count_100852838,(byte *)((long)param_4 + 0x3226));
  uVar11 = param_4[1];
  if (cVar2 != '\0') {
    uVar11 = uVar11 | 0x2000;
    param_4[1] = uVar11;
  }
  if ((uVar11 & 0x3000) == 0) {
    cVar2 = FUN_100166ce2(param_1,PTR_cf_work_100852808,param_3 + 0x1254);
    if (cVar2 != '\0') {
      param_3[3] = param_3[3] | 0x10;
    }
  }
  else {
    cVar2 = FUN_100166ce2(param_1,PTR_cf_work_100852900,(byte *)((long)param_4 + 0x2e24));
    if (cVar2 != '\0') {
      *(byte *)((long)param_4 + 0x2e23) = 1;
      *(byte *)((long)param_4 + 9) = *(byte *)((long)param_4 + 9) | 0x48;
    }
  }
  local_2b8 = param_3 + 0x1040;
  cVar2 = FUN_100166ce2(param_1,PTR_cf_composerName_1008527c0);
  if (cVar2 != '\0') {
    param_3[2] = param_3[2] | 0x20;
  }
  cVar2 = FUN_100166ce2(param_1,PTR_cf_genre_100852800,param_3 + 0x808);
  if (cVar2 != '\0') {
    *param_3 = *param_3 | 0x10;
  }
  cVar2 = FUN_100166ce2(param_1,PTR_cf_comments_1008527a8,param_3 + 0xe08);
  if (cVar2 != '\0') {
    param_3[1] = param_3[1] | 4;
  }
  cVar2 = FUN_1001677f4(param_1,PTR_cf_discNumber_1008527d8,param_3 + 0x1244);
  if (cVar2 != '\0') {
    param_3[2] = param_3[2] | 0x80;
  }
  cVar2 = FUN_1001677f4(param_1,PTR_cf_discCount_1008527d0,param_3 + 0x1246);
  if (cVar2 != '\0') {
    param_3[2] = param_3[2] | 0x80;
  }
  cVar2 = FUN_100167740(param_1,PTR_cf_trackNumber_1008528f0,param_3 + 0x1008);
  if ((cVar2 != '\0') ||
     (((local_260 & 4) != 0 &&
      (cVar2 = FUN_100167740(param_1,PTR_cf_BKTrackNumber_10083e4b8,param_3 + 0x1008), cVar2 != '\0'
      )))) {
    *param_3 = *param_3 | 0x40;
  }
  cVar2 = FUN_100167740(param_1,PTR_cf_trackCount_1008528e8,param_3 + 0x100c);
  if (cVar2 != '\0') {
    *param_3 = *param_3 | 0x40;
  }
  cVar2 = FUN_1001677f4(param_1,PTR_cf_year_100852910,param_3 + 0x1010);
  if (cVar2 != '\0') {
    *param_3 = *param_3 | 0x80;
  }
  cVar2 = FUN_100167740(param_1,PTR_cf_duration_1008528e0,param_3 + 0x1014);
  if (cVar2 == '\0') {
    if (((local_260 & 4) != 0) &&
       (dVar13 = (double)FUN_100167f44(param_1,PTR_cf_BKDuration_10083e4a0), 0.0 < dVar13)) {
      *(int *)(param_3 + 0x1014) = (int)(long)(dVar13 * _DAT_100708b48);
      goto LAB_10032bd86;
    }
  }
  else {
LAB_10032bd86:
    param_3[1] = param_3[1] | 8;
  }
  dVar13 = (double)FUN_100167f44(param_1,PTR_cf_sampleRate_100852860);
  if (0.0 < dVar13) {
    *(float *)(param_3 + 0x1454) = (float)dVar13;
    *(int *)(param_3 + 0x102c) = (int)(long)((float)dVar13 * _DAT_1007439c4);
    param_3[2] = param_3[2] | 1;
  }
  cVar2 = FUN_100167740(param_1,PTR_cf_bitRate_100852790,param_3 + 0x1028);
  if (cVar2 != '\0') {
    param_3[1] = param_3[1] | 0x80;
  }
  cVar2 = FUN_100167ab3(param_1,PTR_cf_size_100852870,&local_298);
  if ((cVar2 != '\0') ||
     (((local_260 & 4) != 0 &&
      (cVar2 = FUN_100167ab3(param_1,PTR_cf_BKAllocatedSize_10083e468,&local_298), cVar2 != '\0'))))
  {
    FUN_1003aead8(param_3,local_298);
    param_3[1] = param_3[1] | 0x40;
  }
  bVar3 = FUN_100167dd2(param_1,PTR_cf_compilation_1008527b0,0);
  param_3[0x1240] = bVar3;
  param_3[2] = param_3[2] | 0x40;
  bVar3 = FUN_100167dd2(param_1,PTR_cf_gapless_1008527f0,0);
  param_3[0x1241] = bVar3;
  param_3[3] = param_3[3] | 0x20;
  cVar2 = FUN_100167ab3(param_1,PTR_cf_artistId_100852780,(byte *)((long)param_4 + 0xcd4));
  if (cVar2 != '\0') {
    *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 0x40;
  }
  cVar2 = FUN_100167ab3(param_1,PTR_cf_composerId_1008527b8,(byte *)((long)param_4 + 0xcdc));
  if (cVar2 != '\0') {
    *(byte *)((long)param_4 + 2) = *(byte *)((long)param_4 + 2) | 0x10;
  }
  cVar2 = FUN_100167ab3(param_1,PTR_cf_playlistId_100852848,(byte *)((long)param_4 + 0xcec));
  if (cVar2 != '\0') {
    *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 0x80;
  }
  cVar2 = FUN_100167ab3(param_1,PTR_cf_genreId_1008527f8,(byte *)((long)param_4 + 0xce4));
  if (cVar2 != '\0') {
    *(byte *)((long)param_4 + 2) = *(byte *)((long)param_4 + 2) | 1;
  }
  cVar2 = FUN_100167ab3(param_1,PTR_cf_s_100852758,(byte *)((long)param_4 + 0xcf4));
  if (cVar2 != '\0') {
    *(byte *)((long)param_4 + 3) = *(byte *)((long)param_4 + 3) | 2;
  }
  cVar2 = FUN_100166e24(param_1,PTR_cf_kind_100852950,local_2b0);
  if (cVar2 == '\0') {
    local_280 = param_4 + 0x1a1;
    if ((byte)param_4[0x1a1] == 0) goto LAB_10032bfbb;
    uVar11 = *param_4;
  }
  else {
    bVar3 = FUN_100150106(local_2b0,param_2);
    local_280 = param_4 + 0x1a1;
    *(byte *)(param_4 + 0x1a1) = bVar3;
    if (bVar3 == 0) {
LAB_10032bfbb:
      local_280 = param_4 + 0x1a1;
      cVar2 = FUN_10016769f(param_1,PTR_cf_itunes_kind_id_100852948,&local_259);
      uVar11 = *param_4;
      if (cVar2 == '\0') goto LAB_10032bfea;
      *(byte *)(param_4 + 0x1a1) = local_259;
    }
    else {
      uVar11 = *param_4;
    }
    uVar11 = uVar11 | 0x2000000000;
    *param_4 = uVar11;
  }
LAB_10032bfea:
  if ((uVar11 & 0x2000000000) != 0) {
    if ((((local_260 & 4) != 0) && ((byte)*local_280 == 2)) &&
       (lVar6 = FUN_100166b7f(param_1,PTR_cf_book_info_100853678), lVar6 != 0)) {
      uVar7 = FUN_100166c1b(lVar6,PTR_cf_mime_type_1008536b8);
      cVar2 = FUN_1002f3b1a(uVar7);
      if ((cVar2 != '\0') || (cVar2 = FUN_1002f3b9d(uVar7), cVar2 != '\0')) {
        *(byte *)local_280 = 0x19;
      }
    }
    uVar5 = FUN_10031f884((byte)param_4[0x1a1]);
    *(undefined4 *)((long)param_4 + 0x1c) = uVar5;
    *(byte *)((long)param_4 + 4) = *(byte *)((long)param_4 + 4) | 0x40;
    FUN_10031f90b(param_4,uVar5,0);
  }
  cVar2 = FUN_10016769f(param_1,PTR_cf_explicit_1008527e0,(byte *)((long)param_4 + 0x11));
  if (cVar2 != '\0') {
    *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 0x20;
  }
  lVar6 = FUN_100166b7f(param_1,PTR_cf_rating_100852850);
  if (lVar6 != 0) {
    FUN_10057b7a6(lVar6,param_4 + 0x3fd);
    *(byte *)((long)param_4 + 2) = *(byte *)((long)param_4 + 2) | 4;
  }
  cVar2 = FUN_100166ce2(param_1,PTR_cf_category_100852798,(byte *)((long)param_4 + 0x15c4));
  if (cVar2 != '\0') {
    *(byte *)((long)param_4 + 3) = *(byte *)((long)param_4 + 3) | 4;
  }
  cVar2 = FUN_100166ce2(param_1,PTR_cf_xid_100852908,(byte *)((long)param_4 + 0xd24));
  if (cVar2 != '\0') {
    *(byte *)((long)param_4 + 7) = *(byte *)((long)param_4 + 7) | 0x40;
  }
  if ((local_260 & 8) != 0) {
    local_58 = 0;
    uStack_54 = 0;
    cVar2 = FUN_100167ab3(param_1,PTR_cf_cloud_id_1008527a0);
    if ((cVar2 != '\0') || (cVar2 = FUN_100167ab3(param_1,&cf_sagaId,&local_58), cVar2 != '\0')) {
      param_4[0x225] = CONCAT44(uStack_54,local_58);
      param_4[0x227] = 0;
      *(byte *)((long)param_4 + 7) = *(byte *)((long)param_4 + 7) | 0x80;
      if ((local_260 & 0x10) != 0) {
        *(byte *)(param_4 + 0x228) = 2;
      }
    }
  }
  cVar2 = FUN_100166ce2(param_1,PTR_cf_description_1008527c8,(byte *)((long)param_4 + 0x17c4));
  if (cVar2 != '\0') {
    *(byte *)((long)param_4 + 3) = *(byte *)((long)param_4 + 3) | 8;
  }
  lVar6 = FUN_100166c1b(param_1,PTR_cf_longDescription_100852a30);
  if ((lVar6 == 0) || (lVar8 = FUN_1001737f8(lVar6), lVar8 < 1)) {
LAB_10032c1c5:
    lVar6 = FUN_100166c1b(param_1,PTR_cf_longSeasonDescription_100852a38);
    if ((lVar6 != 0) && (lVar8 = FUN_1001737f8(lVar6), 0 < lVar8)) {
      lVar6 = FUN_1001e60c1(lVar6);
      if (lVar6 == 0) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "collectionDescription != nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        local_270 = 0;
        FUN_1001782e9(0,0);
        goto LAB_10032d034;
      }
      FUN_1001c64c1(*(undefined8 *)(local_268 + 0x14));
      *(long *)(local_268 + 0x14) = lVar6;
      *local_268 = *local_268 | 0x40;
    }
    lVar6 = FUN_100166b7f(param_1,PTR_cf_videoDetails_1008529a8);
    if (local_288 == 0) {
      local_270 = 0;
      if (lVar6 != 0) goto LAB_10032c477;
    }
    else {
      if (lVar6 == 0) {
        lVar6 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        if (lVar6 == 0) {
          uVar7 = FUN_1001cc310();
LAB_10032d008:
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            local_4c = 0x822;
            local_4a = "localMovieInfoDict != nullptr";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          local_270 = 0;
          FUN_1001782e9(0,0);
          goto LAB_10032d034;
        }
      }
      else {
        lVar8 = FUN_100166b7f(param_1,PTR_cf_asset_info_1008529a0);
        if (lVar8 != 0) {
          local_270 = 0;
          goto LAB_10032c477;
        }
        lVar6 = FUN_100171413(DAT_1008c4d90,0,lVar6);
        if (lVar6 == 0) {
          uVar7 = FUN_1001cc310();
          goto LAB_10032d008;
        }
      }
      FUN_1001714de(lVar6,PTR_cf_asset_info_1008529a0,local_288);
      local_270 = lVar6;
LAB_10032c477:
      lVar6 = FUN_1001726ca(DAT_1008c4d90,lVar6);
      if (lVar6 != 0) {
        local_290 = lVar6;
        lVar6 = FUN_100170ef7(lVar6);
        if (lVar6 != 0) {
          lVar8 = FUN_1001c63e1(lVar6 + 1);
          if (lVar8 == 0) {
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x822;
              local_4a = "movieInfo != nullptr";
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            uVar7 = 0xffffff94;
            FUN_10017060f(local_290);
            goto LAB_10032d03a;
          }
          FUN_100170fc3(local_290,0,lVar6,lVar8);
          *(undefined1 *)(lVar8 + lVar6) = 0;
          FUN_1001c64c1(*(undefined8 *)(local_268 + 0x1c));
          *(long *)(local_268 + 0x1c) = lVar8;
          *local_268 = *local_268 | 4;
        }
        FUN_10017060f(local_290);
      }
    }
    local_268 = (byte *)((long)param_4 + 0x19c4);
    cVar2 = FUN_100166ce2(param_1,PTR_cf_show_name_100852918);
    if (cVar2 != '\0') {
      *(byte *)((long)param_4 + 4) = *(byte *)((long)param_4 + 4) | 1;
    }
    cVar2 = FUN_100166ce2(param_1,PTR_cf_episode_number_100852930,(byte *)((long)param_4 + 0x1bc4));
    if (cVar2 != '\0') {
      *(byte *)((long)param_4 + 4) = *(byte *)((long)param_4 + 4) | 4;
    }
    cVar2 = FUN_100167740(param_1,PTR_cf_season_number_100852920,param_4 + 0x3b9);
    if (cVar2 != '\0') {
      *(byte *)((long)param_4 + 4) = *(byte *)((long)param_4 + 4) | 2;
    }
    pbVar1 = (byte *)((long)param_4 + 0x1dc4);
    cVar2 = FUN_100167740(param_1,PTR_cf_episode_sort_id_100852938,pbVar1);
    if (cVar2 != '\0') {
      *param_4 = *param_4 | 0x800000000;
    }
    cVar2 = FUN_10016794a(param_1,PTR_cf_episode_fractional_sort_id_100852940,
                          (float *)((long)param_4 + 0x3634));
    if (cVar2 != '\0') {
      if (*(int *)pbVar1 == 0) {
        *(int *)pbVar1 = (int)(long)*(float *)((long)param_4 + 0x3634);
      }
      *param_4 = *param_4 | 0x800000000;
    }
    cVar2 = FUN_100166ce2(param_1,PTR_cf_season_title_100852928,(byte *)((long)param_4 + 0x3434));
    if (cVar2 != '\0') {
      *(byte *)((long)param_4 + 0xb) = *(byte *)((long)param_4 + 0xb) | 0x20;
    }
    cVar2 = FUN_100166ce2(param_1,PTR_cf_episodeDisplayLabel_1008529d0,param_4 + 0x3ba);
    if (cVar2 != '\0') {
      *(byte *)((long)param_4 + 10) = *(byte *)((long)param_4 + 10) | 0x10;
    }
    if ((((local_260 & 4) == 0) ||
        (cVar2 = FUN_100166a6a(param_1,PTR_cf_releaseDate_100852858,&local_2e0), cVar2 == '\0')) ||
       ((local_2e0 == 0.0 && (!NAN(local_2e0))))) {
      cVar2 = FUN_100166ce2(param_1,PTR_cf_releaseDate_100852858,param_4 + 0x159);
      if (cVar2 != '\0') goto LAB_10032c66e;
    }
    else {
      FUN_1001e6b38((long)(local_2e0 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008),
                    param_4 + 0x159);
LAB_10032c66e:
      *(byte *)((long)param_4 + 2) = *(byte *)((long)param_4 + 2) | 2;
    }
    cVar2 = FUN_100166ce2(param_1,PTR_cf_copyright_100852a28,param_4 + 0x119);
    if (cVar2 != '\0') {
      *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 0x10;
    }
    cVar2 = FUN_100167dd2(param_1,PTR_cf_show_composer_100852868,0);
    *(bool *)((long)param_4 + 0x2e22) = cVar2 != '\0';
    *(byte *)((long)param_4 + 9) = *(byte *)((long)param_4 + 9) | 4;
    cVar2 = FUN_100166ce2(param_1,PTR_cf_sort_album_100852878,local_258);
    if ((cVar2 != '\0') && (cVar2 = FUN_1001e3edc(local_2a0,local_258,0), cVar2 == '\0')) {
      FUN_1001e1c39(local_258,param_4 + 0x47d);
      *(byte *)((long)param_4 + 5) = *(byte *)((long)param_4 + 5) | 0x40;
      cVar2 = FUN_10016769f(param_1,PTR_cf_sort_album_status_100852880,&local_259);
      bVar3 = 2;
      if (cVar2 != '\0') {
        bVar3 = local_259;
      }
      *(byte *)((long)param_4 + 0x2de9) = bVar3;
      *(byte *)((long)param_4 + 6) = *(byte *)((long)param_4 + 6) | 0x10;
    }
    cVar2 = FUN_100166ce2(param_1,PTR_cf_sort_artist_100852898,local_258);
    if ((cVar2 != '\0') && (cVar2 = FUN_1001e3edc(local_2c8,local_258,0), cVar2 == '\0')) {
      FUN_1001e1c39(local_258,param_4 + 0x4bd);
      *(byte *)((long)param_4 + 5) = *(byte *)((long)param_4 + 5) | 0x80;
      cVar2 = FUN_10016769f(param_1,PTR_cf_sort_artist_status_1008528a0,&local_259);
      bVar3 = 2;
      if (cVar2 != '\0') {
        bVar3 = local_259;
      }
      *(byte *)((long)param_4 + 0x2dea) = bVar3;
      *(byte *)((long)param_4 + 6) = *(byte *)((long)param_4 + 6) | 0x20;
    }
    cVar2 = FUN_100166ce2(param_1,PTR_cf_sort_album_artist_100852888,local_258);
    if ((cVar2 != '\0') && (cVar2 = FUN_1001e3edc(local_2c0,local_258,0), cVar2 == '\0')) {
      FUN_1001e1c39(local_258,param_4 + 0x4fd);
      *(byte *)((long)param_4 + 6) = *(byte *)((long)param_4 + 6) | 1;
      cVar2 = FUN_10016769f(param_1,PTR_cf_sort_album_artist_status_100852890,&local_259);
      bVar3 = 2;
      if (cVar2 != '\0') {
        bVar3 = local_259;
      }
      *(byte *)((long)param_4 + 0x2deb) = bVar3;
      *(byte *)((long)param_4 + 6) = *(byte *)((long)param_4 + 6) | 0x40;
    }
    cVar2 = FUN_100166ce2(param_1,PTR_cf_sort_composer_1008528a8,local_258);
    if ((cVar2 != '\0') && (cVar2 = FUN_1001e3edc(local_2b8,local_258,0), cVar2 == '\0')) {
      FUN_1001e1c39(local_258,param_4 + 0x53d);
      *(byte *)((long)param_4 + 6) = *(byte *)((long)param_4 + 6) | 2;
      cVar2 = FUN_10016769f(param_1,PTR_cf_sort_composer_status_1008528b0,&local_259);
      bVar3 = 2;
      if (cVar2 != '\0') {
        bVar3 = local_259;
      }
      *(byte *)((long)param_4 + 0x2dec) = bVar3;
      *(byte *)((long)param_4 + 6) = *(byte *)((long)param_4 + 6) | 0x80;
    }
    cVar2 = FUN_100166ce2(param_1,PTR_cf_sort_name_1008528b8,local_258);
    if ((cVar2 != '\0') && (cVar2 = FUN_1001e3edc(local_278,local_258,0), cVar2 == '\0')) {
      FUN_1001e1c39(local_258,param_4 + 0x43d);
      *(byte *)((long)param_4 + 5) = *(byte *)((long)param_4 + 5) | 0x20;
      cVar2 = FUN_10016769f(param_1,PTR_cf_sort_name_status_1008528c0,&local_259);
      bVar3 = 2;
      if (cVar2 != '\0') {
        bVar3 = local_259;
      }
      *(byte *)(param_4 + 0x5bd) = bVar3;
      *(byte *)((long)param_4 + 6) = *(byte *)((long)param_4 + 6) | 8;
    }
    cVar2 = FUN_100166ce2(param_1,PTR_cf_sort_show_name_1008528c8,local_258);
    if ((cVar2 != '\0') && (cVar2 = FUN_1001e3edc(local_268,local_258,0), cVar2 == '\0')) {
      FUN_1001e1c39(local_258,param_4 + 0x57d);
      *(byte *)((long)param_4 + 6) = *(byte *)((long)param_4 + 6) | 4;
      cVar2 = FUN_10016769f(param_1,PTR_cf_sort_show_name_status_1008528d0,&local_259);
      bVar3 = 2;
      if (cVar2 != '\0') {
        bVar3 = local_259;
      }
      *(byte *)((long)param_4 + 0x2ded) = bVar3;
      *(byte *)((long)param_4 + 7) = *(byte *)((long)param_4 + 7) | 1;
    }
    if (local_288 == 0) {
      cVar2 = FUN_100167dd2(param_1,PTR_cf_hd_100852810,0);
      uVar12 = 1;
      if ((cVar2 != '\0') ||
         (cVar2 = FUN_100167dd2(param_1,PTR_cf_high_definition_100852818,0), cVar2 != '\0'))
      goto LAB_10032ca91;
    }
    else {
      cVar2 = FUN_100167dd2(local_288,PTR_cf_high_definition_100852818,0);
      if (cVar2 != '\0') {
        ((byte *)((long)param_4 + 0x4c))[0] = 1;
        ((byte *)((long)param_4 + 0x4c))[1] = 0;
        *param_4 = *param_4 | 0x400000000000000;
      }
      pbVar1 = (byte *)((long)param_4 + 0xf24);
      cVar2 = FUN_100166ce2(local_288,PTR_cf_flavor_1008527e8,pbVar1);
      if (cVar2 != '\0') {
        *(byte *)((long)param_4 + 2) = *(byte *)((long)param_4 + 2) | 8;
        cVar2 = FUN_1001e4e7c("7:720p",pbVar1,1);
        uVar12 = 1;
        if (cVar2 == '\0') {
          cVar2 = FUN_1001e4e7c("18:1080p",pbVar1,1);
          uVar12 = 2;
          if (cVar2 == '\0') {
            if ((local_260 & 2) == 0) goto LAB_10032caa3;
            cVar2 = FUN_1001e4e7c("1080p",pbVar1,1);
            if (cVar2 == '\0') {
              cVar2 = FUN_1001e4e7c("720p",pbVar1,1);
              if (cVar2 == '\0') goto LAB_10032caa3;
              FUN_1001e04f5("7:720p",pbVar1);
              uVar12 = 1;
            }
            else {
              FUN_1001e04f5("18:1080p",pbVar1);
            }
          }
        }
LAB_10032ca91:
        *(undefined2 *)((long)param_4 + 0x4c) = uVar12;
        *param_4 = *param_4 | 0x400000000000000;
      }
    }
LAB_10032caa3:
    cVar2 = FUN_100167dd2(param_1,PTR_cf_isSample_100852828,0);
    if (cVar2 != '\0') {
      param_3[0x103b] = param_3[0x103b] | 8;
      param_3[2] = param_3[2] | 2;
    }
    cVar2 = FUN_100167dd2(param_1,PTR_cf_is_apple_music_show_1008529b0,0);
    if (cVar2 != '\0') {
      *(byte *)((long)param_4 + 0x1141) = 1;
      *(byte *)((long)param_4 + 10) = *(byte *)((long)param_4 + 10) | 1;
    }
    cVar2 = FUN_10016769f(param_1,PTR_cf_showType_1008529b8,(byte *)((long)param_4 + 0x1dcc));
    if (cVar2 != '\0') {
      *(byte *)((long)param_4 + 10) = *(byte *)((long)param_4 + 10) | 2;
    }
    cVar2 = FUN_10016769f(param_1,PTR_cf_episodeType_1008529c0,(byte *)((long)param_4 + 0x1dcd));
    if (cVar2 != '\0') {
      *(byte *)((long)param_4 + 10) = *(byte *)((long)param_4 + 10) | 4;
    }
    cVar2 = FUN_10016769f(param_1,PTR_cf_episodeSortOrder_1008529c8,(byte *)((long)param_4 + 0x1dce)
                         );
    if (cVar2 != '\0') {
      *(byte *)((long)param_4 + 10) = *(byte *)((long)param_4 + 10) | 8;
    }
    cVar2 = FUN_100167dd2(param_1,PTR_cf_transferable_1008528f8,1);
    if (cVar2 == '\0') {
      param_3[0x103b] = param_3[0x103b] | 0x10;
      param_3[2] = param_3[2] | 2;
    }
    lVar6 = FUN_100166b7f(param_1,&cf_com_apple_iTunesStore_downloadInfo);
    if (lVar6 == 0) {
      cVar2 = FUN_100166ce2(param_1,PTR_cf_apple_id_100852958,param_4 + 0x19);
      if (cVar2 != '\0') {
        FUN_100166ce2(param_1,PTR_cf_downloader_apple_id_100852968,param_4 + 0x99);
        *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 4;
      }
      cVar2 = FUN_100166ce2(param_1,PTR_cf_owner_name_100852960,param_4 + 0x59);
      if (cVar2 != '\0') {
        FUN_100166ce2(param_1,PTR_cf_downloader_name_100852970,param_4 + 0xd9);
        *(byte *)(param_4 + 1) = (byte)param_4[1] | 2;
      }
      cVar2 = FUN_100166a6a(param_1,PTR_cf_purchaseDate_100852760,&local_58);
      if (cVar2 != '\0') {
        *(int *)((long)param_4 + 0xcfc) =
             (int)(long)((double)CONCAT44(uStack_54,local_58) +
                        *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008);
        *(byte *)((long)param_4 + 4) = *(byte *)((long)param_4 + 4) | 0x80;
      }
    }
    else {
      cVar2 = FUN_100166a6a(lVar6,PTR_cf_purchaseDate_100852760,&local_58);
      if (cVar2 != '\0') {
        *(int *)((long)param_4 + 0xcfc) =
             (int)(long)((double)CONCAT44(uStack_54,local_58) +
                        *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008);
        *(byte *)((long)param_4 + 4) = *(byte *)((long)param_4 + 4) | 0x80;
      }
      lVar6 = FUN_100166b7f(lVar6,&cf_accountInfo);
      if (lVar6 != 0) {
        cVar2 = FUN_100166ce2(lVar6,&cf_AppleID,param_4 + 0x19);
        if (cVar2 != '\0') {
          *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 4;
        }
        cVar2 = FUN_100166ce2(lVar6,&cf_UserName,param_4 + 0x59);
        if (cVar2 != '\0') {
          *(byte *)(param_4 + 1) = (byte)param_4[1] | 2;
        }
        cVar2 = FUN_100167ab3(param_1,PTR_cf_cloud_id_1008527a0,&local_2d8);
        if ((cVar2 != '\0') &&
           (cVar2 = FUN_100167ab3(lVar6,&cf_DSPersonID,&local_2d0), cVar2 != '\0')) {
          param_4[0x225] = local_2d8;
          param_4[0x226] = local_2d0;
          param_4[0x227] = 0;
          *(byte *)(param_4 + 0x228) = 2;
          *(byte *)((long)param_4 + 7) = *(byte *)((long)param_4 + 7) | 0x80;
        }
      }
    }
    if (((local_260 & 1) != 0) && (cVar2 = FUN_100167dd2(param_1,&cf_is_podcast,0), cVar2 != '\0'))
    {
      *(byte *)((long)param_4 + 0x1c) = *(byte *)((long)param_4 + 0x1c) | 4;
      *(byte *)((long)param_4 + 4) = *(byte *)((long)param_4 + 4) | 0x40;
    }
    if ((byte)*local_280 == 0x19) {
      if ((local_260 & 4) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_100166b7f(param_1,PTR_cf_book_info_100853678);
      }
      lVar8 = FUN_100171475(param_1,PTR_cf_publication_version_100852990);
      if (lVar8 == 0) {
LAB_10032cda3:
        uVar7 = FUN_100171475(lVar6,PTR_cf_publication_version_1008536c8);
        lVar8 = FUN_10032d236(uVar7);
        if (lVar8 != 0) goto LAB_10032cdc2;
      }
      else {
        lVar9 = _CFNumberGetTypeID();
        lVar10 = _CFGetTypeID(lVar8);
        if (lVar9 != lVar10) goto LAB_10032cda3;
LAB_10032cdc2:
        uVar7 = FUN_1001696f3(lVar8,0);
        *(undefined8 *)((long)param_4 + 0xd1c) = uVar7;
        *(byte *)(param_4 + 1) = (byte)param_4[1] | 1;
      }
      cVar2 = FUN_100167064(param_1,PTR_cf_human_friendly_publication_version_100852998,
                            (byte *)((long)param_4 + 0x2dee),0x20);
      if ((cVar2 != '\0') ||
         ((lVar6 != 0 &&
          (cVar2 = FUN_100167064(lVar6,PTR_cf_human_friendly_publication_version_1008536d0,
                                 (byte *)((long)param_4 + 0x2dee),0x20), cVar2 != '\0')))) {
        *(byte *)((long)param_4 + 3) = *(byte *)((long)param_4 + 3) | 0x20;
      }
      if (((*param_4 & 0x80000) == 0) &&
         (cVar2 = FUN_100166ce2(param_1,PTR_cf_flavor_1008527e8,(byte *)((long)param_4 + 0xf24)),
         cVar2 != '\0')) {
        *(byte *)((long)param_4 + 2) = *(byte *)((long)param_4 + 2) | 8;
      }
      if (((short)param_4[0x99] == 0) &&
         (cVar2 = FUN_100166ce2(param_1,PTR_cf_downloader_apple_id_100852968,param_4 + 0x99),
         cVar2 != '\0')) {
        *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 4;
      }
      if (((short)param_4[0xd9] == 0) &&
         (cVar2 = FUN_100166ce2(param_1,PTR_cf_downloader_name_100852970,param_4 + 0xd9),
         cVar2 != '\0')) {
        *(byte *)(param_4 + 1) = (byte)param_4[1] | 2;
      }
    }
    uVar7 = 0;
    if (((local_260 & 4) != 0) && (uVar4 = FUN_1002310ff(param_1), 1 < uVar4)) {
      *(ushort *)((long)param_4 + 0x1a) = uVar4;
      *(byte *)param_4 = (byte)*param_4 | 4;
      if ((ushort)(uVar4 - 0x191) < 6) {
        cVar2 = FUN_100167dd2(param_1,PTR_cf_BKAudibleAuthorized_10083e470,0);
        uVar7 = 0;
        if ((cVar2 == '\0') ||
           (cVar2 = FUN_100167740(param_1,PTR_cf_BKAudibleGroupID_10083e478,&local_58),
           cVar2 == '\0')) {
          uVar11 = 0;
        }
        else {
          uVar11 = (ulong)(local_58 + (uint)(local_58 == 0));
        }
        param_4[0xf] = uVar11;
        *(byte *)param_4 = (byte)*param_4 | 8;
      }
    }
  }
  else {
    lVar6 = FUN_1001e60c1(lVar6);
    if (lVar6 != 0) {
      FUN_1001c64c1(*(undefined8 *)(local_268 + 0xc));
      *(long *)(local_268 + 0xc) = lVar6;
      *local_268 = *local_268 | 1;
      goto LAB_10032c1c5;
    }
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "longDescription != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    local_270 = 0;
    FUN_1001782e9(0,0);
LAB_10032d034:
    uVar7 = 0xffffff94;
  }
LAB_10032d03a:
  FUN_10017060f(local_270);
LAB_10032d046:
  FUN_1001b7a50(local_2b0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

