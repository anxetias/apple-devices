// name: FUN_10041753c
// address: 10041753c

ID FUN_10041753c(ID param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  objc_super local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined *local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  ID local_38;
  
  local_88.super_class = (class_t *)PTR__OBJC_CLASS___AMPDeviceSyncPrefs_1008856f0;
  local_88.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_88,PTR_s_init_10088c4d0);
  if (IVar2 != 0) {
    local_40 = param_3;
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setNeedsActivation__10088caf8,(int)*(char *)(param_3 + 4));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setNeedsSetupAssistant__10088cb00,(int)*(char *)(param_3 + 5));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setNeedsRestoreFromBackup__10088cb08,(int)*(char *)(param_3 + 6));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setConfigured__10088cb10,(int)*(char *)(param_3 + 0x288));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setIsHomeMusicLibrary__10088cb18,(int)*(char *)(param_3 + 0xd30));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setIsHomePodcastLibrary__10088cb20,(int)*(char *)(param_3 + 0xd31));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setIsHomeMobileSyncLibrary__10088cb28,(int)*(char *)(param_3 + 0xd39));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setHasSyncedTracks__10088cb30,(int)*(char *)(param_3 + 0x46));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setHasSyncedAudiobooks__10088cb38,(int)*(char *)(param_3 + 0x4b));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setHasSyncedBooks__10088cb40,(int)*(char *)(param_3 + 0x4c));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setHasSyncedMovies__10088cb48,(int)*(char *)(param_3 + 0x48));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setHasSyncedMusic__10088cb50,(int)*(char *)(param_3 + 0x47));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setHasSyncedPodcasts__10088cb58,(int)*(char *)(param_3 + 0x4a));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setHasSyncedTVShows__10088cb60,(int)*(char *)(param_3 + 0x49));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setHasSyncedPhotos__10088cb68,*(char *)(param_3 + 0x58) == '\x01');
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setHasDownloadedTracks__10088cb70,(int)*(char *)(param_3 + 0x4e));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setHasDownloadedMusic__10088cb78,(int)*(char *)(param_3 + 0x4f));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setHasDownloadedMovies__10088cb80,(int)*(char *)(param_3 + 0x50));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setHasDownloadedTVShows__10088cb88,(int)*(char *)(param_3 + 0x51));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setHasDownloadedPodcasts__10088cb90,(int)*(char *)(param_3 + 0x52));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setHasDownloadedAudiobooks__10088cb98,(int)*(char *)(param_3 + 0x53));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setHasDownloadedBooks__10088cba0,(int)*(char *)(param_3 + 0x54));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setDisableMusic__10088cba8,(int)*(char *)(param_3 + 0x36));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setDisableMusicVideos__10088cbb0,(int)*(char *)(param_3 + 0x37));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setDisableMovies__10088cbb8,(int)*(char *)(param_3 + 0x38));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setDisableHomeVideos__10088cbc0,(int)*(char *)(param_3 + 0x39));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setDisableTVShows__10088cbc8,(int)*(char *)(param_3 + 0x3a));
    if (*(char *)(param_3 + 0x3b) == '\0') {
      bVar8 = false;
    }
    else {
      bVar8 = *(char *)(param_3 + 0x3c) != '\0';
    }
    local_38 = IVar2;
    (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setDisablePodcasts__10088cbd0,bVar8);
    lVar5 = local_40;
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setDisableAudiobooks__10088cbd8,(int)*(char *)(local_40 + 0x3f));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setDisableVoiceMemos__10088cbe0,(int)*(char *)(lVar5 + 0x40));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setDisableRingtones__10088cbe8,(int)*(char *)(lVar5 + 0x41));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setDisableBooks__10088cbf0,(int)*(char *)(lVar5 + 0x42));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setDisablePhotos__10088cbf8,(int)*(char *)(lVar5 + 0x43));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setDisableBackup__10088cc00,(int)*(char *)(lVar5 + 0x44));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setDisableRestoreFromBackup__10088cc08,(int)*(char *)(lVar5 + 0x45));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setLaunchApplication__10088cc10,(int)*(char *)(lVar5 + 0x289));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setDontSyncWhenConnected__10088cc18,(int)*(char *)(lVar5 + 0x32e));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setEnableDiskMode__10088cc20,(int)*(char *)(lVar5 + 0x29f));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setDontWarnEnableDiskMode__10088cc28,(int)*(char *)(lVar5 + 0x29e));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setUpdateEnabledItemsOnly__10088cc30,(int)*(char *)(lVar5 + 0x2a2));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setPreferSDVideos__10088cc38,(int)*(char *)(lVar5 + 0x39b));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setSyncOverWifi__10088cc40,(int)*(char *)(lVar5 + 0xd68));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setBackupToCloud__10088cc48,(int)*(char *)(lVar5 + 0xd69));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setUpdateMusic__10088cc50,(int)*(char *)(lVar5 + 0x31c));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setMusicUpdateMode__10088cc58,*(undefined1 *)(lVar5 + 0x28b));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setAutomaticUpdateMode__10088cc60,(int)*(char *)(lVar5 + 0x28a));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setCreateArtworkThumbs__10088cc68,(int)*(char *)(lVar5 + 0x2b0));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setSyncMusicVideosWithMusic__10088cc70,(int)*(char *)(lVar5 + 0x31d));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setSyncPodcastsWithMusic__10088cc78,(int)*(char *)(lVar5 + 0x31e));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setAutofillFreeSpaceWithMusic__10088cc80,(int)*(char *)(lVar5 + 0x394));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setSyncMusicBooklets__10088cc88,(int)*(char *)(lVar5 + 0x398));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setTranscodeSongs__10088cc90,(int)*(char *)(lVar5 + 0x2c8));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setTranscodeBitRate__10088cc98,*(undefined2 *)(lVar5 + 0x3a6));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setDontSyncGeniusData__10088cca0,(int)*(char *)(lVar5 + 0x3a8));
    uVar3 = FUN_1004185cc(*(undefined8 *)(lVar5 + 0x7c0));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setSelectedMusicTrackIDs__10088cca8,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    IVar2 = local_38;
    uVar3 = FUN_1004185cc(*(undefined8 *)(local_40 + 0x7c8));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setSelectedMusicPlaylistIDs__10088ccb0,uVar3)
    ;
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    IVar2 = local_38;
    uVar3 = FUN_1004185cc(*(undefined8 *)(local_40 + 2000));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setSelectedMusicArtistIDs__10088ccb8,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    IVar2 = local_38;
    uVar3 = FUN_1004185cc(*(undefined8 *)(local_40 + 0x7d8));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setSelectedMusicAlbumIDs__10088ccc0,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    IVar2 = local_38;
    uVar3 = FUN_100418690(*(undefined8 *)(local_40 + 0x7e0));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setSelectedMusicGenreNames__10088ccc8,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    lVar5 = local_40;
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setUseSoundCheck__10088ccd0,(int)*(char *)(local_40 + 0x2f8));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setVolumeLimitEnabled__10088ccd8,(int)*(char *)(lVar5 + 0x305));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setVolumeLimitLocked__10088cce0,(int)*(char *)(lVar5 + 0x306));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setVolumeLimit__10088cce8,*(undefined1 *)(lVar5 + 0x304));
    IVar4 = NSData::dataWithBytes_length_
                      ((ID)PTR__OBJC_CLASS___NSData_10082df80,PTR_s_dataWithBytes_length__10088ccf0,
                       lVar5 + 0x308,0x10);
    uVar3 = _objc_retainAutoreleasedReturnValue(IVar4);
    (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setVolumeLimitPasswordHash__10088ccf8,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    lVar5 = local_40;
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setDisableHighVolumeLimit__10088cd00,(int)*(char *)(local_40 + 0x3a5));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setUpdateMovies__10088cd08,(int)*(char *)(lVar5 + 0x318));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setMovieUpdateMode__10088cd10,*(undefined1 *)(lVar5 + 0x319));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setMovieCount__10088cd18,(long)*(char *)(lVar5 + 0x31a));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setSyncMovieBooklets__10088cd20,(int)*(char *)(lVar5 + 0x399));
    uVar3 = FUN_1004185cc(*(undefined8 *)(lVar5 + 0x7e8));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setSelectedMovieTrackIDs__10088cd28,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    IVar2 = local_38;
    uVar3 = FUN_1004185cc(*(undefined8 *)(local_40 + 0x7f0));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setSelectedMoviePlaylistIDs__10088cd30,uVar3)
    ;
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    lVar5 = local_40;
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setUpdateTVShows__10088cd38,(int)*(char *)(local_40 + 0x328));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setTvShowUpdateMode__10088cd40,*(undefined1 *)(lVar5 + 0x329));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setTvShowEpisodeCount__10088cd48,(long)*(char *)(lVar5 + 0x32a));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setTvShowEpisodeAction__10088cd50,*(undefined1 *)(lVar5 + 0x32b));
    uVar3 = FUN_100418690(*(undefined8 *)(lVar5 + 0x7f8));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setSelectedTVShowNames__10088cd58,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    IVar2 = local_38;
    uVar3 = FUN_1004185cc(*(undefined8 *)(local_40 + 0x800));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setSelectedTVShowTrackIDs__10088cd60,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    IVar2 = local_38;
    uVar3 = FUN_1004185cc(*(undefined8 *)(local_40 + 0x808));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setSelectedTVShowAlbumIDs__10088cd68,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    IVar2 = local_38;
    uVar3 = FUN_1004185cc(*(undefined8 *)(local_40 + 0x810));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setSelectedTVShowPlaylistIDs__10088cd70,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    lVar5 = local_40;
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setUpdatePodcasts__10088cd78,(int)*(char *)(local_40 + 0x2da));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setPodcastUpdateMode__10088cd80,*(undefined1 *)(lVar5 + 0x2d9));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setPodcastEpisodeCount__10088cd88,(long)*(char *)(lVar5 + 0x31b));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setPodcastEpisodeAction__10088cd90,*(undefined1 *)(lVar5 + 0x2db));
    uVar3 = FUN_1004185cc(*(undefined8 *)(lVar5 + 0x818));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setSelectedPodcastChannelIDs__10088cd98,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    IVar2 = local_38;
    uVar3 = FUN_1004185cc(*(undefined8 *)(local_40 + 0x820));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setSelectedPodcastTrackIDs__10088cda0,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    IVar2 = local_38;
    uVar3 = FUN_1004185cc(*(undefined8 *)(local_40 + 0x828));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setSelectedPodcastPlaylistIDs__10088cda8,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    lVar5 = local_40;
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setUpdateAudiobooks__10088cdb0,(int)*(char *)(local_40 + 0x39c));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setAudiobookUpdateMode__10088cdb8,*(undefined1 *)(lVar5 + 0x39d));
    uVar3 = FUN_1004185cc(*(undefined8 *)(lVar5 + 0x830));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setSelectedAudiobookTrackIDs__10088cdc0,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    IVar2 = local_38;
    uVar3 = FUN_1004185cc(*(undefined8 *)(local_40 + 0x838));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setSelectedAudiobookPlaylistIDs__10088cdc8,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    lVar5 = local_40;
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setUpdateBooks__10088cdd0,(int)*(char *)(local_40 + 0x39e));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setBookUpdateMode__10088cdd8,*(undefined1 *)(lVar5 + 0x39f));
    uVar3 = FUN_1004185cc(*(undefined8 *)(lVar5 + 0x840));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setSelectedBookTrackIDs__10088cde0,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    IVar2 = local_38;
    uVar3 = FUN_1004185cc(*(undefined8 *)(local_40 + 0x848));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setRentalTransferToTrackIDs__10088cde8,uVar3)
    ;
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    IVar2 = local_38;
    uVar3 = FUN_1004185cc(*(undefined8 *)(local_40 + 0x850));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setRentalTransferFromTrackIDs__10088cdf0,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    IVar2 = local_38;
    uVar3 = FUN_1004185cc(*(undefined8 *)(local_40 + 0x858));
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setRentalDeleteTrackIDs__10088cdf8,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    IVar2 = local_38;
    IVar4 = _objc_alloc(PTR__OBJC_CLASS___AMPPhotoSyncPrefs_10082b9d0);
    IVar4 = AMPPhotoSyncPrefs::initWithIPodPhotoPrefs_dulcimerPrefs_
                      (IVar4,PTR_s_initWithIPodPhotoPrefs_dulcimerP_10088ce00,local_40 + 0x860,
                       local_40 + 0x280);
    (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setPhotoSyncPrefs__10088ce08,IVar4);
    (*(code *)PTR__objc_release_10082c7b0)(IVar4);
    lVar5 = local_40;
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setGenerateSpeechClips__10088ce10,(int)*(char *)(local_40 + 0x379));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setSpeechClipsMode__10088ce18,*(undefined1 *)(lVar5 + 0x385));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setPreferSystemVoiceForSpeechCli_10088ce20,(int)*(char *)(lVar5 + 0x395))
    ;
    IVar4 = NSString::stringWithUTF8String_
                      ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                       PTR_s_stringWithUTF8String__10088bfc8,lVar5 + 0x386);
    uVar3 = _objc_retainAutoreleasedReturnValue(IVar4);
    (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setVoiceOverLanguageCode__10088ce28,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setVoiceOverSupportedLanguageCod_10088ce30,
               *(undefined8 *)(local_40 + 0xd60));
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (IVar2,PTR_s_voiceOverSupportedLanguageCodes_10088ce38);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    lVar5 = (*(code *)PTR__objc_retain_10082c7b8)(uVar3);
    if (lVar5 == 0) {
      uVar3 = 0;
    }
    else {
      IVar2 = NSMutableArray::array
                        ((ID)PTR__OBJC_CLASS___NSMutableArray_10082dfa0,PTR_s_array_10088c210);
      local_48 = _objc_retainAutoreleasedReturnValue(IVar2);
      lVar6 = (*(code *)PTR__objc_msgSend_10082c770)(lVar5,PTR_s_count_10088bdc0);
      uVar3 = local_48;
      if (lVar6 != 0) {
        local_58 = PTR_s_addObject__10088c218;
        lVar7 = 0;
        local_50 = lVar6;
        do {
          uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(lVar5,PTR_s_objectAtIndex__10088bf78,lVar7)
          ;
          uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
          FUN_1001bdca6(local_78,uVar3);
          (*(code *)PTR__objc_release_10082c7b0)(uVar3);
          FUN_100247f70(local_68,local_78);
          uVar3 = FUN_1001bdcb0(local_68,0);
          uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
          (*(code *)PTR__objc_msgSend_10082c770)(local_48,local_58,uVar3);
          (*(code *)PTR__objc_release_10082c7b0)(uVar3);
          FUN_1001b7a50(local_68);
          FUN_1001b7a50(local_78);
          lVar7 = lVar7 + 1;
          uVar3 = local_48;
        } while (local_50 != lVar7);
      }
    }
    (*(code *)PTR__objc_release_10082c7b0)(lVar5);
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_10082c770)
              (local_38,PTR_s_setVoiceOverSupportedLanguageNam_10088ce40,uVar3);
    puVar1 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    (*(code *)puVar1)(lVar5);
    lVar5 = local_40;
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setSyncVoiceMemosWithMusic__10088ce48,(int)*(char *)(local_40 + 0x38f));
    (*(code *)PTR__objc_msgSend_10082c770)
              (IVar2,PTR_s_setVoiceMemoUpdateMode__10088ce50,*(undefined1 *)(lVar5 + 0x3a4));
    lVar5 = *(long *)(lVar5 + 0xd40);
    if (lVar5 != 0) {
      lVar6 = *(long *)(lVar5 + 0x20);
      if (lVar6 != 0) {
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_38,PTR_s_setSyncContacts__10088ce58,(int)*(char *)(lVar6 + 0x48));
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_38,PTR_s_setResetContacts__10088ce60,(int)*(char *)(lVar6 + 0x49));
        uVar3 = FUN_1003256d6(lVar6);
        (*(code *)PTR__objc_msgSend_10082c770)(local_38,PTR_s_setContactGroupNames__10088ce68,uVar3)
        ;
        (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        uVar3 = FUN_10032575a(lVar6);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_38,PTR_s_setSelectedContactGroups__10088ce70,uVar3);
        (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        uVar3 = FUN_100601742(lVar6);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_38,PTR_s_setDeviceDefaultContactGroup__10088ce78,uVar3);
        lVar5 = *(long *)(local_40 + 0xd40);
      }
      IVar2 = local_38;
      lVar5 = *(long *)(lVar5 + 0x28);
      if (lVar5 != 0) {
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_38,PTR_s_setSyncCalendars__10088ce80,(int)*(char *)(lVar5 + 0x48));
        (*(code *)PTR__objc_msgSend_10082c770)
                  (IVar2,PTR_s_setResetCalendars__10088ce88,(int)*(char *)(lVar5 + 0x49));
        uVar3 = FUN_1003256d6(lVar5);
        (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setCalendarNames__10088ce90,uVar3);
        (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        IVar2 = local_38;
        uVar3 = FUN_10032575a(lVar5);
        (*(code *)PTR__objc_msgSend_10082c770)(IVar2,PTR_s_setSelectedCalendars__10088ce98,uVar3);
        (*(code *)PTR__objc_release_10082c7b0)(uVar3);
        IVar2 = local_38;
        uVar3 = FUN_1002061f0(lVar5);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (IVar2,PTR_s_setDeviceDefaultCalendar__10088cea0,uVar3);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (IVar2,PTR_s_setCalendarSyncDaysLimit__10088cea8,*(undefined4 *)(lVar5 + 0x6c));
        (*(code *)PTR__objc_msgSend_10082c770)
                  (IVar2,PTR_s_setSupportsMultipleCalendars__10088ceb0,(int)*(char *)(lVar5 + 0x68))
        ;
      }
    }
  }
  return IVar2;
}

