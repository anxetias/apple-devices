// name: FUN_10051950f
// address: 10051950f

void FUN_10051950f(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  ulong in_RAX;
  long lVar4;
  ulong local_28;
  
  lVar1 = param_1 + 0x75e0;
  local_28 = in_RAX;
  lVar4 = FUN_10016aa8e(DAT_1008c4d90,lVar1,"iTunesPrefs.plist",0,0);
  if (lVar4 != 0) {
    FUN_10051cb08(lVar4,&cf_MusicTrackIDs,*(undefined8 *)(param_1 + 0x152f0));
    FUN_10051cb08(lVar4,&cf_MusicPlaylistIDs,*(undefined8 *)(param_1 + 0x152f8));
    FUN_10051cb08(lVar4,&cf_MusicArtistIDs,*(undefined8 *)(param_1 + 0x15300));
    FUN_10051cb08(lVar4,&cf_MusicAlbumIDs,*(undefined8 *)(param_1 + 0x15308));
    FUN_10051cbce(lVar4,&cf_MusicGenreNames,*(undefined8 *)(param_1 + 0x15310));
    FUN_10051cb08(lVar4,&cf_PodcastChannelIDs,*(undefined8 *)(param_1 + 0x15318));
    FUN_10051cb08(lVar4,&cf_PodcastTrackIDs,*(undefined8 *)(param_1 + 0x15320));
    FUN_10051cb08(lVar4,&cf_PodcastPlaylistIDs,*(undefined8 *)(param_1 + 0x15328));
    FUN_10051cb08(lVar4,&cf_AudiobookTrackIDs,*(undefined8 *)(param_1 + 0x15360));
    FUN_10051cb08(lVar4,&cf_AudiobookPlaylistIDs,*(undefined8 *)(param_1 + 0x15368));
    if (*(char *)(param_1 + 0x34e) != '\0') {
      FUN_10051cb08(lVar4,&cf_MoviePlaylistIDs,*(undefined8 *)(param_1 + 0x15338));
      FUN_10051cb08(lVar4,&cf_MovieTrackIDs,*(undefined8 *)(param_1 + 0x15330));
    }
    if (*(char *)(param_1 + 0x34f) != '\0') {
      FUN_10051cbce(lVar4,&cf_TVShowNames,*(undefined8 *)(param_1 + 0x15340));
      FUN_10051cb08(lVar4,&cf_TVShowPlaylistIDs,*(undefined8 *)(param_1 + 0x15358));
      FUN_10051cb08(lVar4,&cf_TVShowTrackIDs,*(undefined8 *)(param_1 + 0x15348));
      FUN_10051cb08(lVar4,&cf_TVShowAlbumIDs,*(undefined8 *)(param_1 + 0x15350));
    }
    if (*(char *)(param_1 + 0x39c) != '\0') {
      FUN_10051cb08(lVar4,&cf_BookTrackIDs,*(undefined8 *)(param_1 + 0x15370));
      FUN_10051cb08(lVar4,&cf_LibraryBookTrackIDs,*(undefined8 *)(param_1 + 0x15378));
    }
    FUN_10017060f(lVar4);
    return;
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar2 = DAT_1008c75b8;
  cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
  if (cVar3 != '\0') {
    local_28 = local_28 & 0xffffffffffff0000;
    __os_log_impl(0x100000000,uVar2,0x10,"ReadIPodPrefsLists() - failed to read iTunesPrefs.plist",
                  &local_28,2);
  }
  FUN_1005ce7c2(*(undefined8 *)(param_1 + 0x152f8),lVar1,"iTunesPlaylists");
  FUN_1005ce7c2(*(undefined8 *)(param_1 + 0x15318),lVar1,"iTunesPodcasts");
  if (*(char *)(param_1 + 0x34e) != '\0') {
    FUN_1005ce7c2(*(undefined8 *)(param_1 + 0x15330),lVar1,"iTunesMovies");
    FUN_1005ce7c2(*(undefined8 *)(param_1 + 0x15338),lVar1,"iTunesMoviePlaylists");
  }
  if (*(char *)(param_1 + 0x34f) != '\0') {
    FUN_1003bb0b6(*(undefined8 *)(param_1 + 0x15340),lVar1,"iTunesTVShows");
    FUN_1005ce7c2(*(undefined8 *)(param_1 + 0x15358),lVar1,"iTunesTVShowPlaylists");
  }
  return;
}

