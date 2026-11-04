// name: FUN_10033c696
// address: 10033c696

undefined8 FUN_10033c696(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_100170633(param_2,&cf_insert_artist);
  if (cVar2 == '\0') {
    cVar2 = FUN_100170633(param_2,&cf_update_artist);
    if (cVar2 == '\0') {
      cVar2 = FUN_100170633(param_2,&cf_delete_artist);
      if (cVar2 == '\0') {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = 
          "JRCFEqual(operationKind, kAirTrafficSyncOperation_InsertArtist) || JRCFEqual(operationKind, kAirTrafficSyncOperation_UpdateArtist) || JRCFEqual(operationKind, kAirTrafficSyncOperation_DeleteArtist)"
          ;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
  }
  if (param_3 == (long *)0x0) {
LAB_10033c8b4:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_4a = "ArtistInfo::IsValid(artistInfo)";
LAB_10033c923:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if ((int)param_3[0xb] != 0x61747369) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "inArtistInfo->mMagic == kArtistInfoMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_10033c8b4;
    }
    if (param_3[1] == 0) goto LAB_10033c8b4;
    uVar3 = FUN_10033b60c(param_2,param_3[3]);
    cVar2 = FUN_100170633(param_2,&cf_delete_artist);
    if (cVar2 != '\0') goto LAB_10033c8d9;
    lVar6 = param_3[1];
    if (lVar6 != 0) {
      uVar4 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                            PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      FUN_10033d168(uVar4,&cf_name,lVar6 + 0x1cb0,(int)param_3[0x1e],0x100);
      FUN_10033d168(uVar4,&cf_sort_name,lVar6 + 0x24d0,(int)param_3[0x20],0x100);
      FUN_100168746(uVar4,&cf_kind,*(undefined2 *)((long)param_3 + 0x62),0);
      if (*(char *)(param_1 + 0x3b0) != '\0') {
        uVar1 = *(uint *)((long)param_3 + 0xa4);
        FUN_100168746(uVar4,&cf_liked_state,(char)param_3[0x11],0);
        lVar6 = 0;
        if (uVar1 != 0) {
          lVar6 = (long)((double)uVar1 - *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008)
          ;
        }
        FUN_100168746(uVar4,&cf_date_liked,lVar6,0);
        uVar5 = (**(code **)(*param_3 + 0xe0))(param_3);
        FUN_100168746(uVar4,&cf_store_item_id,uVar5,0);
      }
      FUN_100171502(uVar3,&cf_artist,uVar4);
      FUN_10017060f(uVar4);
      goto LAB_10033c8d9;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_4a = "trackData";
      goto LAB_10033c923;
    }
  }
  uVar3 = 0;
  FUN_1001782e9(0,0);
LAB_10033c8d9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

