// name: FUN_10033c199
// address: 10033c199

undefined8 FUN_10033c199(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  bool bVar9;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar3 = FUN_100170633(param_2,&cf_insert_album);
  if (cVar3 == '\0') {
    cVar3 = FUN_100170633(param_2,&cf_update_album);
    if (cVar3 == '\0') {
      cVar3 = FUN_100170633(param_2,&cf_delete_album);
      if (cVar3 == '\0') {
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = 
          "JRCFEqual(operationKind, kAirTrafficSyncOperation_InsertAlbum) || JRCFEqual(operationKind, kAirTrafficSyncOperation_UpdateAlbum) || JRCFEqual(operationKind, kAirTrafficSyncOperation_DeleteAlbum)"
          ;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
  }
  if (param_3 == 0) {
LAB_10033c35e:
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "AlbumInfoIsValid(albumInfo)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_3 + 8) != 0x616c6269) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "inAlbumInfo->mMagic == kAlbumInfoMagic";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_10033c35e;
    }
    if (*(long *)(param_3 + 0x48) == 0) goto LAB_10033c35e;
    uVar4 = FUN_10033b60c(param_2,*(undefined8 *)(param_3 + 0x20));
    cVar3 = FUN_100170633(param_2,&cf_delete_album);
    if (cVar3 != '\0') goto LAB_10033c383;
    lVar8 = *(long *)(param_3 + 0x48);
    if (lVar8 != 0) {
      uVar5 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                            PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      FUN_100168746(uVar5,&cf_kind,*(undefined4 *)(param_3 + 0x10),0);
      FUN_100168746(uVar5,&cf_artwork_item_pid,*(undefined8 *)(param_3 + 0x70),0);
      FUN_100168746(uVar5,&cf_user_rating,0,0);
      iVar1 = *(int *)(param_3 + 0x10);
      if (iVar1 == 4) {
        FUN_10033d168(uVar5,&cf_name,lVar8 + 0x2070,*(undefined4 *)(param_3 + 0xc0),0x100);
        if (*(int *)(param_3 + 0x10) == 4) {
          uVar7 = *(undefined4 *)(param_3 + 0x100);
        }
        else {
          uVar7 = 0;
        }
        FUN_100168746(uVar5,&cf_season_number,uVar7,0);
      }
      else if (iVar1 == 3) {
        FUN_10033d168(uVar5,&cf_name,lVar8 + 0x1c60,*(undefined4 *)(param_3 + 0xc0),0x100);
        FUN_1003a4bd4(&local_58,param_3);
        FUN_10016865a(uVar5,&cf_feed_url,&local_58,0);
        FUN_1001b7a50(&local_58);
        FUN_1003a4c06(&local_58,param_3);
        FUN_10016865a(uVar5,&cf_store_link_url,&local_58,0);
        FUN_1001b7a50(&local_58);
      }
      else if (iVar1 == 2) {
        FUN_10033d168(uVar5,&cf_name,lVar8 + 0x1c60,*(undefined4 *)(param_3 + 0xc0),0x100);
        if (*(int *)(param_3 + 0x10) == 2) {
          bVar9 = *(char *)(param_3 + 0x108) != '\0';
        }
        else {
          bVar9 = false;
        }
        FUN_100168b97(uVar5,&cf_all_compilations,bVar9);
      }
      if (*(char *)(param_1 + 0x3b0) != '\0') {
        uVar2 = *(uint *)(param_3 + 0x84);
        FUN_100168746(uVar5,&cf_liked_state,*(undefined1 *)(param_3 + 0xe6),0);
        lVar8 = 0;
        if (uVar2 != 0) {
          lVar8 = (long)((double)uVar2 - *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008)
          ;
        }
        FUN_100168746(uVar5,&cf_date_liked,lVar8,0);
        uVar6 = FUN_1003a35b8(param_3);
        FUN_100168746(uVar5,&cf_store_item_id,uVar6,0);
      }
      FUN_100171502(uVar4,&cf_album,uVar5);
      FUN_10017060f(uVar5);
      goto LAB_10033c383;
    }
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "trackData";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar4 = 0;
LAB_10033c383:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

