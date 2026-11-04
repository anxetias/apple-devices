// name: FUN_10033b6c1
// address: 10033b6c1

undefined8 FUN_10033b6c1(long param_1,undefined8 param_2,int *param_3)

{
  ushort uVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  uint local_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = param_1;
  cVar3 = FUN_100170633(param_2,&cf_insert_playlist);
  if (((cVar3 == '\0') && (cVar3 = FUN_100170633(param_2,&cf_update_playlist), cVar3 == '\0')) &&
     (cVar3 = FUN_100170633(param_2,&cf_delete_playlist), cVar3 == '\0')) {
    uVar9 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar9,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 
      "JRCFEqual(operationKind, kAirTrafficSyncOperation_InsertPlaylist) || JRCFEqual(operationKind, kAirTrafficSyncOperation_UpdatePlaylist) || JRCFEqual(operationKind, kAirTrafficSyncOperation_DeletePlaylist)"
      ;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (param_3 == (int *)0x0) {
LAB_10033b92f:
    uVar9 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar9,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar9 = 0;
  }
  else {
    if (*param_3 != 0x706c7374) {
      uVar9 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar9,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_10033b92f;
    }
    local_70 = FUN_10033b60c(param_2,*(undefined8 *)(param_3 + 0x18));
    cVar3 = FUN_100170633(param_2,&cf_delete_playlist);
    uVar9 = local_70;
    if (cVar3 == '\0') {
      uVar9 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                            PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      local_68 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                               PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      local_78 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
      uVar4 = FUN_100170633(param_2,&cf_update_playlist);
      FUN_100486d8f(&local_58,param_3);
      FUN_10016865a(uVar9,&cf_name,&local_58,0);
      FUN_1001b7a50(&local_58);
      FUN_10048768a(&local_58,param_3,0);
      FUN_10016865a(uVar9,&cf_description,&local_58,0);
      FUN_1001b7a50(&local_58);
      FUN_100487ce4(&local_58,param_3);
      FUN_10016865a(uVar9,&cf_description_long,&local_58,0);
      FUN_1001b7a50(&local_58);
      FUN_10048826c(&local_58,param_3);
      FUN_10016865a(uVar9,&cf_uuid,&local_58,0);
      FUN_1001b7a50(&local_58);
      FUN_100168746(uVar9,&cf_distinguished_kind,(short)param_3[4],0);
      if (param_3[0x9b] != 0) {
        FUN_100177f88();
        FUN_10016909e(uVar9,&cf_date_created);
      }
      if (param_3[0x9c] != 0) {
        FUN_100177f88();
        FUN_10016909e(uVar9,&cf_date_modified);
      }
      if (*(long *)(param_3 + 10) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(*(long *)(param_3 + 10) + 0x60);
      }
      FUN_100168746(uVar9,&cf_parent_pid,uVar14,uVar4);
      uVar5 = 1;
      if (((*(byte *)(param_3 + 0x90) & 0xc) == 0) &&
         ((uVar1 = *(ushort *)(param_3 + 4), 0xfff8 < (ushort)(uVar1 - 0xcf) ||
          ((uVar1 < 0x15 && ((0x180021U >> (uVar1 & 0x1f) & 1) != 0)))))) {
        uVar5 = 0;
      }
      FUN_100168b97(uVar9,&cf_is_hidden,uVar5);
      FUN_100168746(uVar9,&cf_cloud_id,*(undefined8 *)(param_3 + 0x76),0);
      uVar5 = FUN_100488488(param_3,&local_8c);
      FUN_100168746(uVar9,&cf_liked_state,uVar5,uVar4);
      if (*(char *)(local_60 + 0x3b0) != '\0') {
        lVar10 = 0;
        if (local_8c != 0) {
          lVar10 = (long)((double)local_8c -
                         *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008);
        }
        FUN_100168746(uVar9,&cf_date_liked,lVar10,uVar4);
      }
      if ((short)param_3[4] == 0x14) {
        FUN_100168746(uVar9,&cf_source_device_guid,*(undefined8 *)(param_3 + 0x13c),0);
      }
      if (*(char *)(local_60 + 0x356) != '\0') {
        iVar6 = FUN_1004f2b0b(local_60,1);
        uVar8 = 0;
        if (iVar6 != -0x80) {
          if (iVar6 == 0) {
            lVar10 = FUN_100353aeb(*(undefined8 *)(local_60 + 0x66c0),param_3);
            if (lVar10 != 0) {
              uVar8 = *(undefined4 *)(lVar10 + 0x18);
            }
          }
          else {
            uVar14 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar14,0x10);
            uVar8 = 0;
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
              __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
        FUN_100168746(uVar9,&cf_artwork_cache_id,uVar8,uVar4);
      }
      if (*(char *)(local_60 + 0x3af) != '\0') {
        FUN_1004883aa(&local_58,param_3);
        cVar3 = FUN_1001b8428(&local_58);
        if (cVar3 == '\0') {
          FUN_100168b0b(uVar9,&cf_is_external_vendor_playlist,1,1);
          FUN_10016865a(uVar9,&cf_external_vendor_identifier,&local_58,0);
          FUN_1004883f9(local_88,param_3);
          FUN_10016865a(uVar9,&cf_external_vendor_display_name,local_88,0);
          FUN_1001b7a50(local_88);
          FUN_100488448(local_88,param_3);
          FUN_10016865a(uVar9,&cf_external_tag,local_88,0);
          FUN_1001b7a50(local_88);
        }
        FUN_1001b7a50(&local_58);
      }
      if ((*(byte *)(param_3 + 0xa6) & 1) != 0) {
        FUN_100168b0b(uVar9,&cf_smart_is_folder,*(byte *)(param_3 + 0xa6) >> 1 & 1,1);
        FUN_100168b0b(uVar9,&cf_smart_is_dynamic,(char)param_3[0xa8],1);
        FUN_100168b0b(uVar9,&cf_smart_is_filtered,*(undefined1 *)((long)param_3 + 0x2a2),1);
        FUN_100168b0b(uVar9,&cf_smart_is_genius,*(undefined1 *)((long)param_3 + 0x2a3),1);
        FUN_100168b0b(uVar9,&cf_smart_enabled_only,(char)param_3[0xa9],1);
        FUN_100168b0b(uVar9,&cf_smart_is_limited,*(undefined1 *)((long)param_3 + 0x2a1),1);
        FUN_100168746(uVar9,&cf_smart_limit_kind,(char)param_3[0xaf],1);
        FUN_100168746(uVar9,&cf_smart_limit_value,param_3[0xae],1);
        FUN_100168746(uVar9,&cf_smart_limit_order,param_3[0xb0],1);
        FUN_100168746(uVar9,&cf_smart_evaluation_order,param_3[0xb1],1);
        FUN_100168746(uVar9,&cf_smart_reverse_limit_order,*(undefined1 *)((long)param_3 + 0x2a5),1);
        if ((*(long *)(param_3 + 0xaa) != 0) &&
           (uVar7 = FUN_1001d153d(), local_58 = uVar7, uVar7 != 0)) {
          uVar11 = FUN_100170ea9(DAT_1008c4d90,uVar7);
          FUN_10017103d(uVar11,uVar7);
          uVar14 = *(undefined8 *)(param_3 + 0xaa);
          uVar12 = FUN_100170f7f(uVar11);
          iVar6 = FUN_100289fdc(uVar14,uVar12,uVar7,&local_58);
          if (iVar6 == 0) {
            FUN_10017103d(uVar11,local_58);
            FUN_100171502(uVar9,&cf_smart_criteria,uVar11);
          }
          FUN_10017060f(uVar11);
        }
        if (*(long *)(param_3 + 0xac) != 0) {
          local_60 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
          piVar2 = *(int **)(param_3 + 0xac);
          if ((((piVar2 != (int *)0x0) && (*piVar2 == 0x4f4c5354)) && (piVar2[1] != 0)) &&
             (iVar6 = (int)((ulong)(*(long *)(piVar2 + 4) - *(long *)(piVar2 + 2)) >> 3) *
                      -0x49249249, iVar6 != 0)) {
            iVar15 = 0;
            do {
              puVar13 = (undefined8 *)FUN_1005968ea(*(undefined8 *)(param_3 + 0xac),iVar15,0);
              if (puVar13 == (undefined8 *)0x0) {
                uVar14 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar14,0x10);
                if (cVar3 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "trackInfo != nullptr";
                  __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else {
                FUN_1001659a7(local_60,*puVar13);
              }
              iVar15 = iVar15 + 1;
            } while (iVar6 != iVar15);
          }
          FUN_100171502(uVar9,&cf_genius_seed_tracks,local_60);
          FUN_10017060f(local_60);
        }
      }
      lVar10 = *(long *)(*(long *)(param_3 + 0x1e) + 8);
      if (lVar10 != 0) {
        do {
          if (*(undefined8 **)(lVar10 + 8) == (undefined8 *)0x0) {
            uVar14 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar14,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "trackInfo != nullptr";
              __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          else {
            FUN_1001659a7(local_78,**(undefined8 **)(lVar10 + 8));
          }
          lVar10 = *(long *)(lVar10 + 0x18);
        } while (lVar10 != 0);
      }
      local_58 = local_58 & 0xffffff00;
      uVar8 = FUN_100492887(param_3);
      FUN_100168746(local_68,&cf_play_order,uVar8,1);
      FUN_100168b0b(local_68,&cf_is_reversed,(undefined1)local_58,1);
      FUN_100168746(local_68,&cf_album_field_order,param_3[0x10c],1);
      FUN_100168746(local_68,&cf_repeat_mode,0,1);
      FUN_100168b0b(local_68,&cf_shuffle_items,0,1);
      FUN_100168b0b(local_68,&cf_has_been_shuffled,0,1);
      FUN_100171502(local_70,&cf_container,uVar9);
      FUN_100171502(local_70,&cf_container_ui,local_68);
      FUN_100171502(local_70,&cf_item_to_container,local_78);
      FUN_10017060f(local_78);
      FUN_10017060f(local_68);
      FUN_10017060f(uVar9);
      uVar9 = local_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

