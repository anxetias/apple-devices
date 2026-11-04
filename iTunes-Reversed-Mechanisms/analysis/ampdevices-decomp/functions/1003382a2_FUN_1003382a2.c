// name: FUN_1003382a2
// address: 1003382a2

undefined8
FUN_1003382a2(long param_1,undefined8 param_2,undefined8 *param_3,long param_4,byte *param_5,
             byte *param_6)

{
  long lVar1;
  double dVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  byte *pbVar32;
  double dVar33;
  long local_708;
  undefined1 *local_6f8;
  int local_6d4;
  long local_6c0;
  long local_6b0;
  long local_6a8;
  long local_688;
  long local_680;
  uint local_674;
  undefined2 local_658 [256];
  uint local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined2 local_44c;
  char *local_44a;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  char *local_24a;
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar9 = FUN_100170633(param_2,&cf_insert_track);
  if ((((cVar9 == '\0') && (cVar9 = FUN_100170633(param_2,&cf_update_track), cVar9 == '\0')) &&
      (cVar9 = FUN_100170633(param_2,&cf_delete_track), cVar9 == '\0')) &&
     (cVar9 = FUN_100170633(param_2,&cf_upload_track), cVar9 == '\0')) {
    uVar18 = FUN_1001cc310();
    cVar9 = _os_log_type_enabled(uVar18,0x10);
    if (cVar9 != '\0') {
      local_258 = 0x8220202;
      local_254 = "Assertion failure";
      local_24c = 0x822;
      local_24a = 
      "JRCFEqual(operationKind, kAirTrafficSyncOperation_InsertTrack) || JRCFEqual(operationKind, kAirTrafficSyncOperation_UpdateTrack) || JRCFEqual(operationKind, kAirTrafficSyncOperation_DeleteTrack) || JRCFEqual(operationKind, kAirTrafficSyncOperation_UploadTrack)"
      ;
      __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if ((param_3 == (undefined8 *)0x0) || (param_3[2] == 0)) {
    uVar18 = FUN_1001cc310();
    cVar9 = _os_log_type_enabled(uVar18,0x10);
    if (cVar9 != '\0') {
      local_258 = 0x8220202;
      local_254 = "Assertion failure";
      local_24c = 0x822;
      local_24a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar18 = FUN_10033b60c(param_2,*param_3);
    cVar9 = FUN_100170633(param_2,&cf_upload_track);
    if (cVar9 != '\0') {
      cVar9 = FUN_10044acc3(param_3);
      if (cVar9 != '\0') {
        FUN_100171502(uVar18,&cf_delete_after_upload,*(undefined8 *)PTR__kCFBooleanTrue_10082e038);
      }
      goto LAB_1003383e4;
    }
    cVar9 = FUN_100170633(param_2,&cf_delete_track);
    if (cVar9 != '\0') {
      if ((0x6ff < *(ushort *)(param_1 + 100)) && (*(int *)((long)param_3 + 0xc2) < 0)) {
        lVar28 = param_3[0xb];
        if ((lVar28 != 0) &&
           (((*(long *)(lVar28 + 8) != 0 && (*(long *)(*(long *)(lVar28 + 8) + 0x10) != 0)) &&
            (*(long *)(*(long *)(lVar28 + 0x10) + 0x38) != 0)))) {
          uVar19 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                 PTR__kCFTypeDictionaryValueCallBacks_10082e140);
          if ((*(long *)(lVar28 + 8) == 0) || (*(long *)(*(long *)(lVar28 + 8) + 0x10) == 0)) {
            uVar20 = 0;
          }
          else {
            uVar20 = *(undefined8 *)(*(long *)(lVar28 + 0x10) + 0x38);
          }
          FUN_100168746(uVar19,&cf_store_item_id,uVar20,0);
          FUN_100171502(uVar18,&cf_store_info,uVar19);
          FUN_10017060f(uVar19);
        }
        uVar29 = FUN_1004744bf(param_3,0);
        if ((uVar29 & 0x200004) != 0) {
          FUN_10047edcd(&local_258,param_3);
          cVar9 = FUN_1001b8428(&local_258);
          if (cVar9 == '\0') {
            uVar19 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                   PTR__kCFTypeDictionaryValueCallBacks_10082e140);
            FUN_10016865a(uVar19,&cf_external_guid,&local_258,0);
            FUN_100171502(uVar18,&cf_podcast_info,uVar19);
            FUN_10017060f(uVar19);
          }
          FUN_1001b7a50(&local_258);
        }
      }
      goto LAB_1003383e4;
    }
    lVar28 = param_3[0xb];
    if (((lVar28 != 0) && (*(long *)(lVar28 + 8) != 0)) &&
       (*(long *)(*(long *)(lVar28 + 8) + 0x10) != 0)) {
      lVar26 = param_3[2];
      local_674 = FUN_1004744bf(param_3,0);
      uVar19 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                             PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      uVar20 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                             PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      uVar21 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                             PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      cVar9 = FUN_100474d03(param_3);
      if (cVar9 == '\0') {
        local_688 = 0;
      }
      else {
        local_688 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                  PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      }
      cVar9 = FUN_1002b1ae4(lVar28);
      if ((cVar9 == '\0') &&
         (((local_674 & 4) == 0 || (*(int *)(*(long *)(lVar28 + 0x10) + 0x8c) == 0)))) {
        local_680 = 0;
      }
      else {
        local_680 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                  PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      }
      if ((local_674 & 0x200004) == 0) {
        local_6b0 = 0;
      }
      else {
        local_6b0 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                  PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      }
      if ((local_674 & 0x1004000) == 0) {
        local_6c0 = 0;
      }
      else {
        local_6c0 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                  PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      }
      if ((local_674 & 0xc00000) == 0) {
        local_6a8 = 0;
      }
      else {
        local_6a8 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                  PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      }
      bVar7 = param_5 != (byte *)0x0;
      bVar8 = param_6 != (byte *)0x0;
      bVar6 = param_4 != 0;
      bVar4 = (bVar7 || bVar8) || bVar6;
      if (param_4 == 0) {
        local_6f8 = (undefined1 *)0x0;
      }
      else {
        FUN_100538877(local_58,param_4);
        uVar22 = FUN_1005396f9(&DAT_1008c7af8,&DAT_10075bfc0,0);
        cVar9 = FUN_10053941c(local_58,uVar22);
        if (cVar9 != '\0') {
          FUN_1005389ba(local_58,0x8e);
        }
        uVar22 = FUN_1005396f9(&DAT_1008c787c,&DAT_100756570,0);
        local_6f8 = local_58;
        cVar9 = FUN_10053941c(local_6f8,uVar22);
        if (cVar9 != '\0') {
          FUN_1005389ba(local_58,0x4d);
        }
        if ((0x6ff < *(ushort *)(param_1 + 100)) && (*(int *)((long)param_3 + 0xc2) < 0)) {
          if (local_680 != 0) {
            FUN_1005389ba(local_58,0x29);
          }
          if (local_6b0 != 0) {
            local_6f8 = local_58;
            FUN_1005389ba(local_6f8,0x57);
          }
        }
      }
      dVar2 = *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008;
      lVar1 = lVar26 + 0x2020;
      uVar31 = 1;
      do {
        if (((!bVar7 && !bVar8) && !bVar6) ||
           ((local_6f8 != (undefined1 *)0x0 &&
            (cVar9 = FUN_10053916d(local_6f8,uVar31), cVar9 != '\0')))) {
          switch(uVar31 & 0xff) {
          case 2:
            FUN_100476928(param_3,&local_258);
            FUN_100168550(uVar19,&cf_title,&local_258,bVar4);
            break;
          case 3:
            FUN_1004772c4(param_3,&local_258);
            FUN_100168550(uVar19,&cf_album,&local_258,bVar4);
            break;
          case 4:
            FUN_1004779ac(param_3,&local_258);
            FUN_100168550(uVar19,&cf_artist,&local_258,bVar4);
            break;
          case 5:
            FUN_100168746(uVar21,&cf_bit_rate,*(undefined2 *)(lVar28 + 0x54),0);
            FUN_100168b97(uVar21,&cf_is_transcoded,*(uint *)(lVar28 + 0x48) >> 0x10 & 1);
            break;
          case 6:
            FUN_100168d20((double)*(float *)(lVar28 + 0x50),uVar21,&cf_sample_rate,0);
            break;
          case 7:
            FUN_100168746(uVar19,&cf_year,*(undefined2 *)((long)param_3 + 0x142),bVar4);
            break;
          case 8:
            FUN_10047a7b5(param_3,&local_258);
            FUN_100168550(uVar19,&cf_genre,&local_258,bVar4);
            break;
          case 9:
            lVar23 = FUN_100171475(uVar18);
            if (lVar23 == 0) {
              uVar22 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                     PTR__kCFTypeDictionaryValueCallBacks_10082e140);
              FUN_10047aca3(param_3,&local_258);
              FUN_100168550(uVar22,&cf_kind,&local_258,0);
              FUN_100171502(uVar18,&cf_location,uVar22);
              FUN_10017060f(uVar22);
            }
            break;
          case 10:
            if (*(int *)(lVar28 + 0x5c) != 0) {
              FUN_100177f88();
              FUN_10016909e(uVar19);
            }
            break;
          case 0xb:
            FUN_100168746(uVar19,&cf_track_number,*(undefined2 *)((long)param_3 + 0x136),bVar4);
            break;
          case 0xd:
            FUN_100168746(uVar19,&cf_total_time_ms,*(undefined4 *)(lVar28 + 100),0);
            break;
          case 0xe:
            FUN_10047b65a(param_3,&local_258);
            FUN_100168550(uVar19,&cf_comment,&local_258,bVar4);
            break;
          case 0xf:
            if ((*(char *)(lVar28 + 0x45) == '\0') &&
               (iVar16 = FUN_100320fae(lVar28,(long)&local_258 + 2,0xff,local_658), iVar16 != -0x80)
               ) {
              if (iVar16 == 0) {
                local_258 = CONCAT22(local_258._2_2_,local_658[0]);
                uVar22 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                       PTR__kCFTypeDictionaryValueCallBacks_10082e140);
                FUN_10032fde1(&local_258);
                FUN_100168550(uVar22,&cf_location,&local_258,0);
                FUN_100168a98(uVar22,&cf_location_type,*(undefined4 *)(lVar28 + 0x3c),0);
                FUN_10047aca3(param_3,&local_258);
                FUN_100168550(uVar22,&cf_kind,&local_258,0);
                FUN_100168746(uVar22,&cf_file_size,*(undefined8 *)(lVar28 + 0x68),0);
                if (*(int *)(lVar28 + 0x40) != 0) {
                  FUN_100168a98(uVar22,&cf_extension,*(int *)(lVar28 + 0x40),0);
                }
                if (*(int *)(lVar28 + 0x60) != 0) {
                  FUN_100177f88();
                  FUN_10016909e(uVar22,&cf_date_created);
                }
                FUN_100171502(uVar18,&cf_location,uVar22);
                FUN_10017060f(uVar22);
              }
              else {
                uVar22 = FUN_1001cc310();
                cVar9 = _os_log_type_enabled(uVar22);
                if (cVar9 != '\0') {
                  local_458 = 0x8220202;
                  uStack_454 = 0x7a0a90;
                  uStack_450 = 1;
                  local_44c = 0x400;
                  local_44a = (char *)CONCAT44(local_44a._4_4_,iVar16);
                  __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: err == (%d)",&local_458,
                                      0x12);
                }
              }
            }
            break;
          case 0x10:
            if (*(int *)(lVar28 + 0x60) != 0) {
              FUN_100177f88();
              FUN_10016909e(uVar19);
            }
            break;
          case 0x11:
            FUN_10047b307(param_3,&local_258);
            FUN_100168550(uVar19,&cf_eq_preset,&local_258,bVar4);
            break;
          case 0x12:
            FUN_10047a0d2(param_3,&local_258);
            FUN_100168550(uVar19,&cf_composer,&local_258,bVar4);
            break;
          case 0x14:
            FUN_100168746(uVar21,&cf_volume_normalization_energy,*(undefined2 *)(lVar28 + 0x5a),0);
            break;
          case 0x15:
            FUN_10047d8a6(param_3,&local_258);
            FUN_100168550(uVar19,&cf_radio_stream_status,&local_258,0);
            break;
          case 0x16:
            FUN_100168746(uVar20,&cf_play_count_user,*(undefined4 *)((long)param_3 + 0x144),1);
            FUN_100168746(uVar20,&cf_play_count_recent,*(undefined4 *)(param_3 + 0x29),1);
            break;
          case 0x17:
            if (*(int *)((long)param_3 + 0x14c) != 0) {
              FUN_100177f88();
              FUN_10016909e(uVar20);
            }
            break;
          case 0x18:
            FUN_100168746(uVar19,&cf_disc_number,*(undefined2 *)((long)param_3 + 0x13a),bVar4);
            break;
          case 0x19:
          case 0x5a:
            lVar23 = (long)*(char *)((long)param_3 + 300);
            if (!(bool)(~bVar4 & lVar23 == 0)) {
              FUN_100168746(uVar20,&cf_user_rating,lVar23,1);
              FUN_100168746(uVar20,&cf_user_rating_common,lVar23,1);
              FUN_100168b0b(uVar20,&cf_user_rating_is_derived,0,1);
            }
            if (bVar4) {
              FUN_100168746(uVar20,&cf_album_rating,0,1);
              FUN_100168b0b(uVar20,&cf_album_rating_is_derived,0,1);
            }
            break;
          case 0x1d:
          case 0x7d:
            FUN_100168b0b(uVar19,&cf_is_user_disabled,*(byte *)((long)param_3 + 0xc2) >> 2 & 1,bVar4
                         );
            break;
          case 0x1f:
            FUN_100168b0b(uVar19,&cf_is_compilation,*(uint *)((long)param_3 + 0xc2) >> 10 & 1,bVar4)
            ;
            break;
          case 0x20:
            if ((local_680 != 0) &&
               (uVar12 = *(uint *)(*(long *)(lVar28 + 0x10) + 0x88), uVar12 != 0)) {
              dVar33 = (double)uVar12 - dVar2;
              uVar29 = (ulong)dVar33;
              FUN_100168746(local_680,&cf_date_purchased,
                            (long)(dVar33 - DAT_10070e4c0) & (long)uVar29 >> 0x3f | uVar29,0);
            }
            break;
          case 0x21:
            if (local_680 != 0) {
              FUN_100168d20((double)*(float *)(param_3[0xe] + 4),local_680,&cf_relevance,0);
            }
            break;
          case 0x22:
            uVar12 = *(uint *)(*(long *)(lVar28 + 0x10) + 0x8c);
            if (uVar12 != 0) {
              dVar33 = (double)uVar12 - dVar2;
              uVar29 = (ulong)dVar33;
              uVar29 = (long)(dVar33 - DAT_10070e4c0) & (long)uVar29 >> 0x3f | uVar29;
              if (local_680 != 0) {
                FUN_100168746(local_680,&cf_date_released,uVar29,0);
              }
              if (local_6b0 != 0) {
                FUN_100168746(local_6b0,&cf_date_released,uVar29,0);
              }
            }
            break;
          case 0x23:
            FUN_100168746(uVar19,&cf_bpm,*(undefined2 *)((long)param_3 + 0x15c),bVar4);
            break;
          case 0x25:
            if ((-1 < *(int *)((long)param_3 + 0xc2)) || (*(int *)(lVar28 + 0x78) != 0)) {
              FUN_100168746(uVar19,&cf_artwork_cache_id,*(undefined4 *)((long)param_3 + 0x174),bVar4
                           );
              uVar17 = FUN_1005d1c9c(param_3);
              FUN_100168746(uVar19,&cf_artwork_checksum,uVar17,1);
            }
            break;
          case 0x26:
            if (local_680 != 0) {
              FUN_100168d20((double)*(float *)(param_3[0xe] + 8),local_680,&cf_popularity,0);
            }
            break;
          case 0x27:
            FUN_100478a09(param_3,&local_258);
            FUN_100168550(uVar19,&cf_grouping,&local_258,bVar4);
            break;
          case 0x29:
            if (local_680 != 0) {
              if ((*(long *)(lVar28 + 8) == 0) || (*(long *)(*(long *)(lVar28 + 8) + 0x10) == 0)) {
                uVar22 = 0;
              }
              else {
                uVar22 = *(undefined8 *)(*(long *)(lVar28 + 0x10) + 0x38);
              }
              FUN_100168746(local_680,&cf_store_item_id,uVar22,0);
            }
            break;
          case 0x2a:
            if (local_680 != 0) {
              FUN_100168746(local_680,&cf_artist_id,*(undefined8 *)(*(long *)(lVar28 + 0x10) + 0x48)
                            ,0);
            }
            break;
          case 0x2b:
            if (local_680 != 0) {
              FUN_100168746(local_680,&cf_playlist_id,
                            *(undefined8 *)(*(long *)(lVar28 + 0x10) + 0x58),0);
            }
            break;
          case 0x2c:
            if (local_680 != 0) {
              FUN_100168746(local_680,&cf_composer_id,
                            *(undefined8 *)(*(long *)(lVar28 + 0x10) + 0x50),0);
            }
            break;
          case 0x2d:
            if (local_680 != 0) {
              FUN_100168746(local_680,&cf_genre_id,*(undefined8 *)(*(long *)(lVar28 + 0x10) + 0x40),
                            0);
            }
            break;
          case 0x31:
            FUN_100168746(uVar19,&cf_disc_count,*(undefined2 *)((long)param_3 + 0x13c),bVar4);
            break;
          case 0x32:
            FUN_100168746(uVar19,&cf_start_time_ms,*(undefined4 *)(param_3[0x10] + 4),bVar4);
            break;
          case 0x33:
            FUN_100168746(uVar19,&cf_stop_time_ms,*(undefined4 *)(param_3[0x10] + 8),bVar4);
            break;
          case 0x34:
            FUN_100168746(uVar19,&cf_track_count,*(undefined2 *)(param_3 + 0x27),bVar4);
            break;
          case 0x35:
            if (local_680 != 0) {
              FUN_100168746(local_680,&cf_storefront_id,
                            *(undefined8 *)(*(long *)(lVar28 + 0x10) + 0x60),0);
            }
            break;
          case 0x36:
            FUN_10033d168(uVar19,&cf_description,lVar1,*(undefined4 *)(param_3[0xe] + 0x20));
            break;
          case 0x37:
            FUN_10047ced8(param_3,&local_258);
            FUN_100168550(uVar19,&cf_category,&local_258,bVar4);
            break;
          case 0x3c:
            if (((local_674 >> 10 & 1) != 0) && (*(char *)(param_1 + 0x351) == '\0')) {
              local_674 = local_674 & 0xfffffbfd | 2;
            }
            FUN_100168b0b(uVar19,&cf_is_song,(local_674 & 0x101) != 0,bVar4);
            bVar10 = (byte)local_674;
            FUN_100168b0b(uVar19,&cf_is_audio_book,bVar10 >> 3 & 1,bVar4);
            FUN_100168b0b(uVar19,&cf_is_music_video,bVar10 >> 5 & 1,bVar4);
            FUN_100168b0b(uVar19,&cf_is_movie,bVar10 >> 1 & 1,bVar4);
            FUN_100168b0b(uVar19,&cf_is_home_video,local_674 >> 10 & 1,bVar4);
            FUN_100168b0b(uVar19,&cf_is_tv_show,bVar10 >> 6 & 1,bVar4);
            FUN_100168b0b(uVar19,&cf_is_ringtone,local_674 >> 0xe & 1,bVar4);
            FUN_100168b0b(uVar19,&cf_is_tone,local_674 >> 0x18 & 1,bVar4);
            FUN_100168b0b(uVar19,&cf_is_voice_memo,local_674 >> 0x14 & 1,bVar4);
            FUN_100168b0b(uVar19,&cf_is_book,(local_674 & 0xc00000) != 0,bVar4);
            FUN_100168b0b(uVar19,&cf_is_rental,local_674 >> 0xf & 1,bVar4);
            FUN_100168b0b(uVar19,&cf_is_itunes_u,local_674 >> 0x15 & 1,bVar4);
            FUN_100168b0b(uVar19,&cf_is_podcast,bVar10 >> 2 & 1,bVar4);
            FUN_100168b0b(uVar19,&cf_is_digital_booklet,local_674 >> 0x10 & 1,bVar4);
            FUN_100168b0b(uVar19,&cf_is_subscription,*(uint *)(lVar28 + 0x48) >> 0x13 & 1,bVar4);
            break;
          case 0x3e:
            if (local_688 != 0) {
              FUN_10047dc87(param_3,&local_258);
              FUN_100168550(local_688,&cf_series_name,&local_258,bVar4);
            }
            break;
          case 0x3f:
            if (local_688 != 0) {
              FUN_100168746(local_688,&cf_season_number,*(undefined4 *)(param_3[0xf] + 0xc),bVar4);
            }
            break;
          case 0x40:
            if (local_688 != 0) {
              FUN_10047e782(param_3,&local_258);
              FUN_100168550(local_688,&cf_episode_id,&local_258,bVar4);
              FUN_100168550(uVar19,&cf_episode_id,&local_258,bVar4);
            }
            break;
          case 0x41:
            if (local_688 != 0) {
              FUN_100168746(local_688,&cf_episode_sort_id,*(undefined4 *)(param_3[0xf] + 4),bVar4);
              FUN_100168746(uVar19,&cf_episode_sort_id,*(undefined4 *)(param_3[0xf] + 4),bVar4);
            }
            break;
          case 0x44:
            FUN_100168746(uVar20,&cf_skip_count_user,*(undefined4 *)(param_3 + 0x2a),1);
            FUN_100168746(uVar20,&cf_skip_count_recent,*(undefined4 *)((long)param_3 + 0x154),1);
            break;
          case 0x45:
            if (*(int *)(param_3 + 0x2b) != 0) {
              FUN_100177f88();
              FUN_10016909e(uVar20);
            }
            break;
          case 0x46:
            FUN_100168b0b(uVar19,&cf_part_of_gapless_album,
                          *(uint *)((long)param_3 + 0xc2) >> 0x11 & 1,bVar4);
            break;
          case 0x47:
            FUN_100478022(param_3,&local_258);
            FUN_100168550(uVar19,&cf_album_artist,&local_258,bVar4);
            break;
          case 0x4a:
            FUN_100168746(uVar19,&cf_relative_volume,
                          (long)((*(short *)((long)param_3 + 0x12a) * 1000) / 0xff),0);
            break;
          case 0x4d:
            if (param_3[5] != 0) {
              FUN_100168746(uVar19,&cf_album_pid,*(undefined8 *)(param_3[5] + 0x20),0);
            }
            break;
          case 0x4e:
            FUN_100476e65(param_3,&local_258);
            FUN_100168550(uVar19,&cf_sort_name,&local_258,bVar4);
            break;
          case 0x4f:
            FUN_1004777d6(param_3,&local_258);
            FUN_100168550(uVar19,&cf_sort_album,&local_258,bVar4);
            break;
          case 0x50:
            FUN_100477dec(param_3,&local_258);
            FUN_100168550(uVar19,&cf_sort_artist,&local_258,bVar4);
            break;
          case 0x51:
            FUN_100478401(param_3,&local_258);
            FUN_100168550(uVar19,&cf_sort_album_artist,&local_258,bVar4);
            break;
          case 0x52:
            FUN_10047a452(param_3,&local_258);
            FUN_100168550(uVar19,&cf_sort_composer,&local_258,bVar4);
            break;
          case 0x53:
            if (local_688 != 0) {
              FUN_1002fb8c8(param_3,5,&local_258);
              FUN_100168550(local_688,&cf_sort_series_name,&local_258,bVar4);
            }
            break;
          case 0x54:
            if (local_688 != 0) {
              FUN_10033d168(local_688,&cf_movie_info,lVar26 + 0x2200,
                            *(undefined4 *)(param_3[0xf] + 0x24));
            }
            break;
          case 0x55:
            if (local_6b0 != 0) {
              FUN_10047d1cb(&local_458,param_3,PTR_cf_podcast_feed_url_100844b30);
              FUN_10016865a(local_6b0,&cf_feed_url,&local_458,0);
LAB_10033a08a:
              FUN_1001b7a50(&local_458);
            }
            break;
          case 0x56:
            FUN_10033d168(uVar19,&cf_description_long,lVar1,*(undefined4 *)(param_3[0xe] + 0x24));
            break;
          case 0x57:
            if (local_6b0 != 0) {
              FUN_10047edcd(&local_458,param_3);
              FUN_10016865a(local_6b0,&cf_external_guid,&local_458,0);
              goto LAB_10033a08a;
            }
            break;
          case 0x58:
            lVar23 = FUN_1002af284(lVar28);
            if (lVar23 != 0) {
              uVar22 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
              uVar12 = FUN_100176d97(lVar23);
              if (uVar12 != 0) {
                local_6d4 = -1;
                local_708 = 0;
                uVar13 = 2;
                do {
                  iVar16 = FUN_100176de6(lVar23,uVar13 - 1);
                  if (iVar16 == -1) {
                    uVar25 = FUN_1001cc310();
                    cVar9 = _os_log_type_enabled(uVar25);
                    if (cVar9 != '\0') {
                      local_458 = 0x8220202;
                      uStack_454 = 0x7a0a90;
                      uStack_450 = 1;
                      local_44c = 0x822;
                      local_44a = "chapterStartTime != kChapterDataInvalidTime";
                      __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: (%{public}s)",
                                          &local_458,0x16);
                    }
                    FUN_1001782e9(0);
                    break;
                  }
                  if (uVar13 - 1 < uVar12) {
                    iVar14 = FUN_100176de6(lVar23,uVar13);
                  }
                  else {
                    iVar14 = *(int *)(lVar28 + 100);
                  }
                  uVar25 = FUN_100171409(DAT_1008c4d90,0,
                                         PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                         PTR__kCFTypeDictionaryValueCallBacks_10082e140);
                  FUN_100168746(uVar25,&cf_start_time_ms,(long)iVar16,1);
                  FUN_100168746(uVar25,&cf_stop_time_ms,(long)iVar14,1);
                  uVar15 = FUN_100176d48(lVar23);
                  if (((uVar15 & 1) != 0) &&
                     (iVar14 = FUN_10017610a(lVar23,iVar16,0x6e616d65,0,0x200,&local_458),
                     iVar14 == 0)) {
                    FUN_100168550(uVar25,&cf_name,&local_458,0);
                  }
                  if ((uVar15 & 4) != 0) {
                    iVar14 = FUN_10017610a(lVar23,iVar16,0x75726c20,0,0x200,&local_458);
                    if (iVar14 == 0) {
                      FUN_10016843e(uVar25,&cf_url,&local_458,0);
                    }
                    iVar14 = FUN_10017610a(lVar23,iVar16,0x75726c74,0,0x200,local_658);
                    if (iVar14 == 0) {
                      FUN_100168550(uVar25,&cf_url_title,local_658,0);
                    }
                  }
                  if ((uVar15 & 2) != 0) {
                    iVar14 = FUN_1001776af(lVar23,iVar16,0,&local_458);
                    if (local_708 == CONCAT44(uStack_454,local_458)) {
                      iVar16 = local_6d4;
                    }
                    if (iVar14 == 0) {
                      local_6d4 = iVar16;
                      local_708 = CONCAT44(uStack_454,local_458);
                    }
                  }
                  FUN_100168746(uVar25,&cf_artwork_start_time_ms,(long)local_6d4,1);
                  FUN_1001709a5(uVar22);
                  FUN_10017060f(uVar25);
                  bVar5 = uVar13 <= uVar12;
                  uVar13 = uVar13 + 1;
                } while (bVar5);
              }
              lVar24 = FUN_10017076e(uVar22);
              if (0 < lVar24) {
                FUN_100171502(uVar18,&cf_chapter_info,uVar22);
              }
              FUN_10017060f(uVar22);
              FUN_100175848(lVar23);
            }
            break;
          case 0x59:
            FUN_100475454(param_3);
            if (local_688 != 0) {
              FUN_100168550(local_688,&cf_extended_content_rating,&local_258,bVar4);
            }
            if ((short)local_258 != 0) {
              FUN_10057b535(&local_258,0,0,&local_458,0);
              FUN_100168746(uVar19,&cf_content_rating_level,local_458,bVar4);
            }
            break;
          case 0x5b:
            cVar9 = FUN_10044acc3(param_3);
            if (cVar9 != '\0') {
              uVar22 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                     PTR__kCFTypeDictionaryValueCallBacks_10082e140);
              uVar12 = *(uint *)(param_3[0xf] + 0x10);
              dVar33 = (double)uVar12 - dVar2;
              uVar29 = (ulong)dVar33;
              uVar29 = (long)(dVar33 - DAT_10070e4c0) & (long)uVar29 >> 0x3f | uVar29;
              if (uVar12 == 0) {
                uVar29 = 0;
              }
              uVar12 = *(uint *)(param_3[0xf] + 0x18);
              dVar33 = (double)uVar12 - dVar2;
              uVar30 = (ulong)dVar33;
              uVar30 = (long)(dVar33 - DAT_10070e4c0) & (long)uVar30 >> 0x3f | uVar30;
              if (uVar12 == 0) {
                uVar30 = 0;
              }
              FUN_100168746(uVar22,&cf_rental_date_started,uVar29,0);
              FUN_100168746(uVar22,&cf_rental_playback_date_started,uVar30,0);
              FUN_100168746(uVar22,&cf_rental_duration,*(undefined4 *)(param_3[0xf] + 0x14),0);
              FUN_100168746(uVar22,&cf_rental_playback_duration,*(undefined4 *)(param_3[0xf] + 0x1c)
                            ,0);
              FUN_100171502(uVar18,&cf_rental_info,uVar22);
              FUN_10017060f(uVar22);
            }
            break;
          case 0x5d:
            uVar17 = FUN_10047f424(param_3);
            FUN_100168746(uVar20,&cf_bookmark_time_ms,uVar17,bVar4);
            FUN_100168746(uVar20,&cf_bookmark_time_ms_common,*(undefined4 *)(param_3[0x10] + 0x10),
                          bVar4);
            break;
          case 0x5e:
            uVar11 = FUN_10047f358(param_3);
            FUN_100168b0b(uVar19,&cf_remember_bookmark,uVar11,1);
            break;
          case 0x5f:
            FUN_100168b0b(uVar20,&cf_has_been_played,*(uint *)((long)param_3 + 0xc2) >> 0x1d & 1,1);
            break;
          case 0x60:
            cVar9 = FUN_100474d03(param_3);
            if (cVar9 != '\0') {
              FUN_100168b0b(local_688,&cf_has_alternate_audio,**(byte **)(lVar28 + 0x18) >> 1 & 1,1)
              ;
            }
            break;
          case 0x61:
            cVar9 = FUN_100474d03(param_3);
            if (cVar9 != '\0') {
              FUN_100168b0b(local_688,&cf_has_subtitles,**(byte **)(lVar28 + 0x18) >> 2 & 1,1);
            }
            break;
          case 0x6e:
            if ((*(byte *)(lVar28 + 0xe0) & 1) != 0) {
              FUN_100168746(uVar21,&cf_duration,*(undefined8 *)(lVar28 + 0xd0),1);
              FUN_100168746(uVar21,&cf_gapless_heuristic_info,*(undefined4 *)(lVar28 + 0xe0),1);
              FUN_100168746(uVar21,&cf_gapless_encoding_delay,*(undefined4 *)(lVar28 + 0xe4),1);
              FUN_100168746(uVar21,&cf_gapless_encoding_drain,*(undefined4 *)(lVar28 + 0xe8),1);
              FUN_100168746(uVar21,&cf_gapless_last_frame_resynch,*(undefined8 *)(lVar28 + 0xd8),1);
            }
            break;
          case 0x6f:
            FUN_100168746(uVar19,&cf_genius_id,param_3[0x32],bVar4);
            FUN_100168746(uVar19,&cf_genius_checksum,*(undefined4 *)(param_3 + 0x33),bVar4);
            break;
          case 0x70:
            FUN_100168b0b(uVar19,&cf_exclude_from_shuffle,*(uint *)((long)param_3 + 0xc2) >> 0xf & 1
                          ,bVar4);
            break;
          case 0x71:
            if (*(int *)(lVar28 + 0x7c) != 0) {
              uVar22 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                     PTR__kCFTypeDictionaryValueCallBacks_10082e140);
              FUN_100168746(uVar22,&cf_checksum,*(undefined4 *)(lVar28 + 0x7c),0);
              FUN_100171502(uVar19,&cf_lyrics,uVar22);
              FUN_10017060f(uVar22);
            }
            break;
          case 0x77:
            if (local_680 != 0) {
              FUN_10033d168(local_680,&cf_xid,lVar26 + 0x2250,
                            *(undefined4 *)(*(long *)(lVar28 + 0x10) + 0x68),0x100);
            }
            break;
          case 0x7c:
            iVar16 = FUN_10047b9ad(param_3);
            if (iVar16 == 0) {
              FUN_100168550(uVar19,&cf_copyright,&local_258,0);
            }
            break;
          case 0x7f:
            FUN_10033d168(uVar19,&cf_collection_description,lVar1,
                          *(undefined4 *)(param_3[0xe] + 0x28),0x100);
            break;
          case 0x80:
            if ((local_680 != 0) && (iVar16 = FUN_10030666b(lVar28,&local_258,1), iVar16 == 0)) {
              FUN_100168550(local_680,&cf_flavor,&local_258,0);
            }
            break;
          case 0x81:
            lVar23 = FUN_1002b44c2(lVar28);
            if (lVar23 != 0) {
              uVar22 = FUN_1002b44c2(lVar28);
              FUN_100168746(uVar19,&cf_cloud_id,uVar22,bVar4);
            }
            break;
          case 0x83:
            FUN_100168b0b(uVar19,&cf_chosen_by_auto_fill,*(byte *)((long)param_3 + 0xc6) >> 2 & 1,
                          bVar4);
            break;
          case 0x84:
            lVar23 = FUN_1002b44c2(lVar28);
            if (lVar23 != 0) {
              uVar22 = FUN_1002b71b5(lVar28);
              FUN_100168746(uVar19,&cf_cloud_user_id,uVar22,bVar4);
            }
            break;
          case 0x86:
            uVar11 = FUN_1004764e6(param_3);
            FUN_100168746(uVar19,&cf_cloud_status,uVar11,bVar4);
            break;
          case 0x88:
            FUN_100168746(uVar21,&cf_channels,*(undefined2 *)(lVar28 + 0x56),0);
            break;
          case 0x8e:
            if (param_3[8] != 0) {
              FUN_100168746(uVar19,&cf_artist_pid,*(undefined8 *)(param_3[8] + 0x18),0);
            }
            break;
          case 0x99:
            FUN_100168b0b(uVar19,&cf_is_playlist_only,*(byte *)((long)param_3 + 0xc6) >> 7,bVar4);
            break;
          case 0x9a:
            uVar11 = FUN_1004817dc(param_3,&local_458);
            FUN_100168746(uVar20,&cf_liked_state,uVar11,bVar4);
            if (*(char *)(param_1 + 0x3b0) != '\0') {
              lVar23 = 0;
              if (local_458 != 0) {
                lVar23 = (long)((double)local_458 - dVar2);
              }
              FUN_100168746(uVar20,&cf_date_liked,lVar23,bVar4);
            }
            break;
          case 0x9c:
            if (*(char *)(param_1 + 0x3b0) == '\0') {
              uVar11 = FUN_10030c70d(param_3,0);
              FUN_100168746(uVar20,&cf_album_liked_state,uVar11,bVar4);
            }
            break;
          case 0x9e:
            FUN_100168b0b(uVar19,&cf_show_composer,*(ushort *)((long)param_3 + 0xc6) >> 0xb & 1,
                          bVar4);
            break;
          case 0x9f:
            FUN_100478ed2(param_3,&local_258);
            FUN_100168550(uVar19,&cf_work,&local_258,bVar4);
            break;
          case 0xa0:
            FUN_1004793b3(param_3,&local_258);
            FUN_100168550(uVar19,&cf_movement_name,&local_258,bVar4);
            break;
          case 0xa1:
            FUN_100168746(uVar19,&cf_movement_number,*(undefined2 *)(param_3[0xe] + 0x10),bVar4);
            break;
          case 0xa2:
            FUN_100168746(uVar19,&cf_movement_count,*(undefined2 *)(param_3[0xe] + 0x12),bVar4);
            break;
          case 0xa3:
            FUN_100168b0b(uVar19,&cf_show_work_and_movement,*(byte *)param_3[0xe] >> 2 & 1,bVar4);
            break;
          case 0xa4:
            FUN_100168b0b(uVar19,&cf_is_music_show,*(uint *)(lVar28 + 0x48) >> 0x14 & 1,bVar4);
            break;
          case 0xa5:
            if (local_688 != 0) {
              FUN_100168746(local_688,&cf_show_sort_type,*(undefined1 *)(param_3[0xf] + 0x20),bVar4)
              ;
            }
            break;
          case 0xa6:
            if (local_688 != 0) {
              FUN_100168746(local_688,&cf_episode_type,*(undefined1 *)(param_3[0xf] + 0x21),bVar4);
            }
            break;
          case 0xa7:
            if (local_688 != 0) {
              FUN_100168746(local_688,&cf_episode_sub_sort_order,
                            *(undefined1 *)(param_3[0xf] + 0x22),bVar4);
            }
            break;
          case 0xa8:
            if (local_688 != 0) {
              FUN_10047ea77(param_3,&local_258);
              FUN_100168550(local_688,&cf_episode_type_display_name,&local_258,bVar4);
            }
            break;
          case 0xcf:
            FUN_100168746(uVar19,&cf_content_rating,*(undefined1 *)(param_3 + 0x17),bVar4);
          }
        }
        uVar31 = uVar31 + 1;
      } while (uVar31 != 0xfb);
      if ((bVar7 || bVar8) || bVar6) {
        if (*(char *)(param_1 + 0x3b0) != '\0') {
          if ((param_5 != (byte *)0x0) && ((*param_5 & 0x10) != 0)) goto LAB_10033ae80;
LAB_10033aef2:
          if ((param_6 != (byte *)0x0) && ((*param_6 & 0x10) != 0)) goto LAB_10033af08;
        }
      }
      else {
        if ((local_674 & 0x1304def) != 0) {
          FUN_10031ab0f(lVar28,&local_258,1);
          FUN_100168746(uVar21,&cf_audio_format,(short)local_258,0);
          FUN_100168746(uVar21,&cf_duration,*(undefined8 *)(lVar28 + 0xd0),0);
          FUN_100168746(uVar21,&cf_analysis_inhibit_flags,*(undefined1 *)(lVar28 + 0x47),0);
          FUN_100168746(uVar21,&cf_audio_fingerprint,*(undefined8 *)(lVar28 + 200),0);
        }
        if (local_680 != 0) {
          uVar11 = FUN_10047eee6(param_3);
          FUN_100168746(local_680,&cf_store_kind,uVar11,0);
          uVar22 = FUN_1002b5390(lVar28);
          FUN_100168746(local_680,&cf_account_id,uVar22,0);
          FUN_100168746(local_680,&cf_key_versions,*(undefined4 *)(*(long *)(lVar28 + 0x10) + 0x84),
                        0);
          plVar27 = (long *)(lVar28 + 0x10);
          FUN_100168746(local_680,&cf_key_platform_id,*(undefined4 *)(*plVar27 + 4),0);
          FUN_100168746(local_680,&cf_key_id,*(undefined8 *)(*plVar27 + 0x10),0);
          FUN_100168746(local_680,&cf_key_id2,*(undefined8 *)(*plVar27 + 0x18),0);
          FUN_100168746(local_680,&cf_download_account_id,*(undefined8 *)(*plVar27 + 0x28),0);
          FUN_100168746(local_680,&cf_family_id,*(undefined8 *)(*plVar27 + 0x30),0);
        }
        if (local_688 != 0) {
          pbVar3 = *(byte **)(lVar28 + 0x18);
          FUN_100168b0b(local_688,&cf_characteristics_valid,*pbVar3 >> 3 & 1,1);
          FUN_100168b0b(local_688,&cf_has_closed_captions,pbVar3[8] == 0,1);
          FUN_100168b0b(local_688,&cf_is_self_contained,*pbVar3 >> 4 & 1,1);
          FUN_100168b0b(local_688,&cf_is_compressed,pbVar3[9],1);
          FUN_100168b0b(local_688,&cf_is_anamorphic,pbVar3[10],1);
          FUN_100168b0b(local_688,&cf_is_hd,(ushort)(*(short *)(pbVar3 + 2) - 1U) < 3,1);
          FUN_100168746(local_688,&cf_quality,*(undefined2 *)(pbVar3 + 2),0);
          FUN_100168746(local_688,&cf_color_capability,*(undefined2 *)(pbVar3 + 4),0);
          if ((*pbVar3 & 8) != 0) {
            uVar22 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
            if (*(int *)(pbVar3 + 0xc) != 0) {
              pbVar32 = pbVar3 + 0x40;
              uVar29 = 0;
              do {
                uVar25 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                       PTR__kCFTypeDictionaryValueCallBacks_10082e140);
                FUN_100168746(uVar25,&cf_track_id,*(undefined4 *)(pbVar32 + -0x24),0);
                FUN_100168746(uVar25,&cf_height,*(undefined4 *)(pbVar32 + -0x30),0);
                FUN_100168746(uVar25,&cf_width,*(undefined4 *)(pbVar32 + -0x2c),0);
                FUN_100168746(uVar25,&cf_depth,*(undefined4 *)(pbVar32 + -0x28),0);
                FUN_100168746(uVar25,&cf_codec,*(undefined4 *)(pbVar32 + -0x20),0);
                FUN_100168c16(*(undefined4 *)(pbVar32 + -0x1c),uVar25,&cf_frame_rate,0);
                FUN_100168c16(*(undefined4 *)(pbVar32 + -0x18),uVar25,&cf_non_droppable_frame_rate,0
                             );
                FUN_100168c16(*(undefined4 *)(pbVar32 + -0x14),uVar25,&cf_percentage_encrypted,0);
                FUN_100168746(uVar25,&cf_bit_rate,*(undefined4 *)(pbVar32 + -0x10),0);
                FUN_100168746(uVar25,&cf_peak_bit_rate,*(undefined4 *)(pbVar32 + -0xc),0);
                FUN_100168746(uVar25,&cf_buffer_size,*(undefined4 *)(pbVar32 + -8),0);
                FUN_100168746(uVar25,&cf_profile,pbVar32[-3],0);
                FUN_100168746(uVar25,&cf_level,pbVar32[-2],0);
                FUN_100168746(uVar25,&cf_complexity_level,(long)*(int *)pbVar32,0);
                FUN_1001709a5(uVar22);
                FUN_10017060f(uVar25);
                uVar29 = uVar29 + 1;
                pbVar32 = pbVar32 + 0x38;
              } while (uVar29 < *(uint *)(pbVar3 + 0xc));
            }
            FUN_100171502(uVar18,&cf_video_characteristics,uVar22);
            FUN_10017060f(uVar22);
          }
        }
        if (local_6c0 != 0) {
          lVar26 = FUN_1002b5390(lVar28);
          FUN_100168b97(local_6c0,&cf_is_purchased,lVar26 != 0);
          FUN_10016883b(local_6c0,&cf_guid,*(undefined8 *)(lVar28 + 200),0);
        }
        if (local_6a8 != 0) {
          FUN_100168b97(local_6a8,&cf_is_sample,*(uint *)((long)param_3 + 0xc2) >> 0xc & 1);
          lVar26 = *(long *)(*(long *)(lVar28 + 0x10) + 0x98);
          if (lVar26 != 0) {
            uVar22 = FUN_100166c1b(lVar26,PTR_cf_cover_image_hash_100853688);
            FUN_10016826a(local_6a8,&cf_cover_image_hash,uVar22,0);
            uVar22 = FUN_100166c1b(*(undefined8 *)(*(long *)(lVar28 + 0x10) + 0x98),
                                   PTR_cf_cover_image_path_100853680);
            FUN_10016826a(local_6a8,&cf_cover_image_path,uVar22,0);
            plVar27 = (long *)(lVar28 + 0x10);
            uVar22 = FUN_100166c1b(*(undefined8 *)(*plVar27 + 0x98),
                                   PTR_cf_package_file_hash_1008536a0);
            FUN_10016826a(local_6a8,&cf_package_file_hash,uVar22,0);
            uVar22 = FUN_100166c1b(*(undefined8 *)(*plVar27 + 0x98),PTR_cf_file_hash_1008536a8);
            FUN_10016826a(local_6a8,&cf_file_hash,uVar22,0);
            uVar22 = FUN_100166c1b(*(undefined8 *)(*plVar27 + 0x98),
                                   PTR_cf_publisher_unique_id_100853690);
            FUN_10016826a(local_6a8,&cf_publisher_unique_id,uVar22,0);
            uVar22 = FUN_100167d88(*(undefined8 *)(*plVar27 + 0x98),PTR_cf_unique_id_100853698);
            FUN_100168746(local_6a8,&cf_unique_id,uVar22,0);
          }
        }
        if (*(char *)(param_1 + 0x3b0) != '\0') {
LAB_10033ae80:
          lVar28 = param_3[5];
          if (lVar28 != 0) {
            uVar31 = *(uint *)(lVar28 + 0x84);
            FUN_100168746(uVar20,&cf_album_liked_state,*(undefined1 *)(lVar28 + 0xe6),bVar4);
            lVar28 = 0;
            if (uVar31 != 0) {
              lVar28 = (long)((double)uVar31 - dVar2);
            }
            FUN_100168746(uVar20,&cf_album_liked_date,lVar28,bVar4);
          }
          if (bVar4) goto LAB_10033aef2;
LAB_10033af08:
          lVar28 = param_3[8];
          if (lVar28 != 0) {
            uVar31 = *(uint *)(lVar28 + 0xa4);
            FUN_100168746(uVar20,&cf_artist_liked_state,*(undefined1 *)(lVar28 + 0x88),bVar4);
            lVar28 = 0;
            if (uVar31 != 0) {
              lVar28 = (long)((double)uVar31 - dVar2);
            }
            FUN_100168746(uVar20,&cf_artist_liked_date,lVar28,bVar4);
          }
        }
      }
      lVar28 = FUN_100171426(uVar19);
      if (0 < lVar28) {
        FUN_100171502(uVar18,&cf_item,uVar19);
      }
      lVar28 = FUN_100171426(uVar20);
      if (0 < lVar28) {
        FUN_100171502(uVar18,&cf_item_stats,uVar20);
      }
      lVar28 = FUN_100171426(uVar21);
      if (0 < lVar28) {
        FUN_100171502(uVar18,&cf_avformat_info,uVar21);
      }
      lVar28 = FUN_100171426(local_688);
      if (0 < lVar28) {
        FUN_100171502(uVar18,&cf_video_info,local_688);
      }
      lVar28 = FUN_100171426(local_680);
      if (0 < lVar28) {
        FUN_100171502(uVar18,&cf_store_info,local_680);
      }
      lVar28 = FUN_100171426(local_6b0);
      if (0 < lVar28) {
        FUN_100171502(uVar18,&cf_podcast_info,local_6b0);
      }
      lVar28 = FUN_100171426(local_6c0);
      if (0 < lVar28) {
        FUN_100171502(uVar18,&cf_ringtone_info,local_6c0);
      }
      lVar28 = FUN_100171426(local_6a8);
      if (0 < lVar28) {
        FUN_100171502(uVar18,&cf_book_info,local_6a8);
      }
      FUN_10017060f(uVar21);
      FUN_10017060f(local_688);
      FUN_10017060f(local_680);
      FUN_10017060f(local_6b0);
      FUN_10017060f(local_6c0);
      FUN_10017060f(local_6a8);
      FUN_10017060f(uVar20);
      FUN_10017060f(uVar19);
      goto LAB_1003383e4;
    }
    uVar19 = FUN_1001cc310();
    cVar9 = _os_log_type_enabled(uVar19,0x10);
    if (cVar9 != '\0') {
      local_258 = 0x8220202;
      local_254 = "Assertion failure";
      local_24c = 0x822;
      local_24a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_10017060f(uVar18);
  }
  uVar18 = 0;
LAB_1003383e4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar18;
}

