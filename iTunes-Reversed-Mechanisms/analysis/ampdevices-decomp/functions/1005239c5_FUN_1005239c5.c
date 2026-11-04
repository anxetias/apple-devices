// name: FUN_1005239c5
// address: 1005239c5

int FUN_1005239c5(long *param_1)

{
  void *pvVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 0x14cd8) == '\0') {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    iVar4 = 0;
    if (cVar3 != '\0') {
      local_58 = local_58 & 0xffff0000;
      __os_log_impl(0x100000000,uVar6,1,
                    "sync> not saving prefs files because prefs are not configured",&local_58,2);
      iVar4 = 0;
    }
  }
  else {
    if (*(long *)(lVar2 + 0x30) != 0) {
      lVar5 = FUN_10048604a();
      if (lVar5 != 0) {
        *(byte *)(lVar2 + 0x14cf1) = *(byte *)(lVar5 + 0x330) & 1;
      }
    }
    if ((char)param_1[0x2a9] != '\0') {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "fileData->bufferValid == false";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    pvVar1 = (void *)(lVar2 + 0x75e0);
    cVar3 = FUN_10017cbd0(pvVar1);
    if (cVar3 == '\0') {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "JRFileSpecIsValid(&handlerData->iTunesFolderSpec)";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    _memcpy(param_1 + 0x2b3,pvVar1,0x420);
    FUN_1001e04f5("iTunesPrefs",param_1 + 0x337);
    iVar4 = FUN_100245f38(param_1 + 0x2a9,lVar2 + 0x14cd0);
    if ((iVar4 != -0x80) && (iVar4 != 0)) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    if ((char)param_1[0x3fc] != '\0') {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "fileData->bufferValid == false";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    cVar3 = FUN_10017cbd0(pvVar1);
    if (cVar3 == '\0') {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "JRFileSpecIsValid(&handlerData->iTunesFolderSpec)";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    _memcpy(param_1 + 0x406,pvVar1,0x420);
    FUN_1001e04f5("iTunesPrefs.plist",param_1 + 0x48a);
    uVar6 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    FUN_100171502(uVar6,&cf_DevicesVersion,&cf_1_5_6);
    FUN_100248292(uVar6,lVar2 + 0x14cd0);
    FUN_100526643(uVar6,&cf_MusicTrackIDs,*(undefined8 *)(lVar2 + 0x152f0));
    FUN_100526643(uVar6,&cf_MusicPlaylistIDs,*(undefined8 *)(lVar2 + 0x152f8));
    FUN_100526643(uVar6,&cf_MusicArtistIDs,*(undefined8 *)(lVar2 + 0x15300));
    FUN_100526643(uVar6,&cf_MusicAlbumIDs,*(undefined8 *)(lVar2 + 0x15308));
    FUN_100526709(uVar6,&cf_MusicGenreNames,*(undefined8 *)(lVar2 + 0x15310));
    FUN_100526643(uVar6,&cf_PodcastChannelIDs,*(undefined8 *)(lVar2 + 0x15318));
    FUN_100526643(uVar6,&cf_PodcastTrackIDs,*(undefined8 *)(lVar2 + 0x15320));
    FUN_100526643(uVar6,&cf_PodcastPlaylistIDs,*(undefined8 *)(lVar2 + 0x15328));
    FUN_100526643(uVar6,&cf_AudiobookTrackIDs,*(undefined8 *)(lVar2 + 0x15360));
    FUN_100526643(uVar6,&cf_AudiobookPlaylistIDs,*(undefined8 *)(lVar2 + 0x15368));
    if (*(char *)(lVar2 + 0x34e) != '\0') {
      FUN_100526643(uVar6,&cf_MoviePlaylistIDs,*(undefined8 *)(lVar2 + 0x15338));
      FUN_100526643(uVar6,&cf_MovieTrackIDs,*(undefined8 *)(lVar2 + 0x15330));
    }
    if (*(char *)(lVar2 + 0x34f) != '\0') {
      FUN_100526709(uVar6,&cf_TVShowNames,*(undefined8 *)(lVar2 + 0x15340));
      FUN_100526643(uVar6,&cf_TVShowPlaylistIDs,*(undefined8 *)(lVar2 + 0x15358));
      FUN_100526643(uVar6,&cf_TVShowTrackIDs,*(undefined8 *)(lVar2 + 0x15348));
      FUN_100526643(uVar6,&cf_TVShowAlbumIDs,*(undefined8 *)(lVar2 + 0x15350));
    }
    if (*(char *)(lVar2 + 0x39c) != '\0') {
      FUN_100526643(uVar6,&cf_BookTrackIDs,*(undefined8 *)(lVar2 + 0x15370));
      FUN_100526643(uVar6,&cf_LibraryBookTrackIDs,*(undefined8 *)(lVar2 + 0x15378));
    }
    iVar4 = FUN_100245a08(param_1 + 0x3fc,uVar6);
    if ((iVar4 != -0x80) && (iVar4 != 0)) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    FUN_10017060f(uVar6);
    FUN_100265d29(*(undefined8 *)(lVar2 + 0x66d8),0x636f6e66,lVar2 + 0x14cd8);
    FUN_100265d29(*(undefined8 *)(lVar2 + 0x66d8),0x6469736b,lVar2 + 0x14cef);
    if (*(char *)(lVar2 + 0x3a1) != '\0') {
      FUN_100265d29(*(undefined8 *)(lVar2 + 0x66d8),0x77696669,lVar2 + 0x151e2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

