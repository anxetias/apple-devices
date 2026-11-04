// name: FUN_100208c67
// address: 100208c67

undefined8 FUN_100208c67(undefined1 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 uVar4;
  char cVar5;
  undefined2 uVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  short sVar12;
  char local_59;
  uint local_58;
  undefined8 local_54;
  undefined2 local_4c;
  undefined8 local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar10 = FUN_1001ce537();
  FUN_10017236c(uVar10);
  uVar10 = FUN_1001ce537();
  FUN_10017232a(&cf_disableMusicStore,0,uVar10);
  FUN_10017232a(&cf_disableAppleMusic,0,uVar10);
  FUN_10017232a(&cf_disableMusicSocial,0,uVar10);
  FUN_10017232a(&cf_disableSharedMusic,0,uVar10);
  FUN_10017232a(&cf_restrictExplicit,0,uVar10);
  FUN_10017232a(&cf_restrictMusicVideos,0,uVar10);
  FUN_10017232a(&cf_restrictMovies,0,uVar10);
  FUN_10017232a(&cf_restrictUSMovies,0,uVar10);
  FUN_10017232a(&cf_restrictTVShows,0,uVar10);
  FUN_10017232a(&cf_USTVShowsLimit,0,uVar10);
  FUN_10017232a(&cf_moviesLimit,0,uVar10);
  FUN_10017232a(&cf_tvShowsLimit,0,uVar10);
  FUN_10017232a(&cf_ratingSystemID,0,uVar10);
  FUN_10017232a(&cf_disablePodcasts,0,uVar10);
  FUN_10017232a(&cf_restrictExplicitBooks,0,uVar10);
  FUN_10017232a(&cf_restrictGames,0,uVar10);
  FUN_10017232a(&cf_gamesLimit,0,uVar10);
  *param_1 = 1;
  uVar4 = FUN_100209820(&cf_disableMusicStore,param_1 + 9,0);
  param_1[1] = uVar4;
  uVar4 = FUN_100209820(&cf_disableAppleMusic,param_1 + 10,0);
  param_1[2] = uVar4;
  pcVar1 = param_1 + 0xb;
  uVar4 = FUN_100209820(&cf_disableMusicSocial,pcVar1,&local_59);
  param_1[3] = uVar4;
  if (local_59 == '\0') {
    uVar4 = FUN_100209820(&cf_disableArtistConnect,pcVar1,0);
    param_1[3] = uVar4;
  }
  uVar4 = FUN_100209820(&cf_disableSharedMusic,param_1 + 0xc,0);
  param_1[4] = uVar4;
  uVar4 = FUN_100209820(&cf_restrictExplicit,param_1 + 0xd,0);
  param_1[5] = uVar4;
  uVar4 = FUN_100209820(&cf_restrictMusicVideos,param_1 + 0xe,0);
  param_1[6] = uVar4;
  pcVar2 = param_1 + 0xf;
  uVar4 = FUN_100209820(&cf_restrictMovies,pcVar2,&local_59);
  param_1[7] = uVar4;
  if (local_59 == '\0') {
    uVar4 = FUN_100209820(&cf_restrictUSMovies,pcVar2,0);
    param_1[7] = uVar4;
  }
  pcVar3 = param_1 + 0x10;
  uVar4 = FUN_100209820(&cf_restrictTVShows,pcVar3,&local_59);
  param_1[8] = uVar4;
  if (local_59 == '\0') {
    uVar4 = FUN_100209820(&cf_restrictUSTVShows,pcVar3,0);
    param_1[8] = uVar4;
  }
  iVar8 = FUN_1002098a7(&cf_ratingSystemID,0);
  *(int *)(param_1 + 0x16) = iVar8;
  if (iVar8 == 0) {
    uVar9 = FUN_10057af3e();
    *(undefined4 *)(param_1 + 0x16) = uVar9;
  }
  uVar6 = FUN_1002098a7(&cf_moviesLimit,&local_59);
  *(undefined2 *)(param_1 + 0x12) = uVar6;
  if (local_59 == '\0') {
    uVar6 = FUN_1002098a7(&cf_USMoviesLimit,0);
    *(undefined2 *)(param_1 + 0x12) = uVar6;
  }
  uVar6 = FUN_1002098a7(&cf_tvShowsLimit,&local_59);
  *(undefined2 *)(param_1 + 0x14) = uVar6;
  if (local_59 == '\0') {
    uVar6 = FUN_1002098a7(&cf_USTVShowsLimit,0);
    *(undefined2 *)(param_1 + 0x14) = uVar6;
  }
  uVar4 = FUN_100209820(&cf_disableAutomaticDeviceSync,0,0);
  param_1[0x1c] = uVar4;
  uVar4 = FUN_100209820(&cf_disableGetAlbumArtwork,0,0);
  param_1[0x1d] = uVar4;
  uVar4 = FUN_100209820(&cf_disablePlugins,0,0);
  param_1[0x1e] = uVar4;
  uVar4 = FUN_100209820(&cf_disableOpenStream,0,0);
  param_1[0x1f] = uVar4;
  uVar4 = FUN_100209820(&cf_disableAppleTV,0,0);
  param_1[0x20] = uVar4;
  uVar4 = FUN_100209820(&cf_disableDeviceRegistration,0,0);
  param_1[0x21] = uVar4;
  uVar4 = FUN_100209820(&cf_requireEncryptedBackups,0,0);
  param_1[0x22] = uVar4;
  uVar4 = FUN_100209820(&cf_disableHomeSharing,0,0);
  param_1[0x23] = uVar4;
  uVar4 = FUN_100209820(&cf_disableFirstRunWelcomeWindow,0,0);
  param_1[0x24] = uVar4;
  uVar4 = FUN_100209820(&cf_disableDeviceFileSharing,0,0);
  param_1[0x25] = uVar4;
  cVar5 = FUN_100209820(&cf_disableCheckForUpdates,0,0);
  if (cVar5 == '\0') {
    uVar4 = FUN_100209820(&cf_disableCheckForApplicationUpdates,0,0);
    param_1[0x1a] = uVar4;
    uVar4 = FUN_100209820(&cf_disableCheckForDeviceUpdates,0,0);
  }
  else {
    param_1[0x1a] = 1;
    uVar4 = 1;
  }
  param_1[0x1b] = uVar4;
  uVar4 = FUN_100209820(&cf_disablePodcasts,param_1 + 0x2c,0);
  param_1[0x26] = uVar4;
  uVar4 = FUN_100209820(&cf_restrictGames,param_1 + 0x2e,0);
  param_1[0x28] = uVar4;
  sVar7 = FUN_1002098a7(&cf_gamesLimit,0);
  sVar12 = 300;
  if (sVar7 != 0) {
    sVar12 = sVar7;
  }
  *(short *)(param_1 + 0x2a) = sVar12;
  uVar4 = FUN_100209820(&cf_restrictExplicitBooks,param_1 + 0x2d,0);
  param_1[0x27] = uVar4;
  cVar5 = FUN_1001cd44e("log-parental-prefs",0,0);
  if (cVar5 != '\0') {
    uVar10 = FUN_100208c03();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar5 = _os_log_type_enabled(uVar10,1);
    if (cVar5 != '\0') {
      local_58 = local_58 & 0xffff0000;
      __os_log_impl(0x100000000,uVar10,1,"PARENTAL PREFS:",&local_58,2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    uVar10 = FUN_100208c03();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar5 = _os_log_type_enabled(uVar10,1);
    if (cVar5 != '\0') {
      uVar11 = FUN_1001779ba(param_1[1] != '\0');
      local_4a = FUN_1001779ba(param_1[9] != '\0');
      local_58 = 0x8220202;
      local_4c = 0x822;
      local_54 = uVar11;
      __os_log_impl(0x100000000,uVar10,1,
                    "   disableMusicStorePrivate: %{public}s (forced = %{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    uVar10 = FUN_100208c03();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar5 = _os_log_type_enabled(uVar10,1);
    if (cVar5 != '\0') {
      uVar11 = FUN_1001779ba(param_1[1] != '\0');
      local_4a = FUN_1001779ba(param_1[10] != '\0');
      local_58 = 0x8220202;
      local_4c = 0x822;
      local_54 = uVar11;
      __os_log_impl(0x100000000,uVar10,1,"   disableAppleMusic: %{public}s (forced = %{public}s)",
                    &local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    uVar10 = FUN_100208c03();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar5 = _os_log_type_enabled(uVar10,1);
    if (cVar5 != '\0') {
      uVar11 = FUN_1001779ba(param_1[1] != '\0');
      local_4a = FUN_1001779ba(*pcVar1 != '\0');
      local_58 = 0x8220202;
      local_4c = 0x822;
      local_54 = uVar11;
      __os_log_impl(0x100000000,uVar10,1,"   disableMusicSocial: %{public}s (forced = %{public}s)",
                    &local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    uVar10 = FUN_100208c03();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar5 = _os_log_type_enabled(uVar10,1);
    if (cVar5 != '\0') {
      uVar11 = FUN_1001779ba(param_1[1] != '\0');
      local_4a = FUN_1001779ba(param_1[0xc] != '\0');
      local_58 = 0x8220202;
      local_4c = 0x822;
      local_54 = uVar11;
      __os_log_impl(0x100000000,uVar10,1,"   disableSharing: %{public}s (forced = %{public}s)",
                    &local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    uVar10 = FUN_100208c03();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar5 = _os_log_type_enabled(uVar10,1);
    if (cVar5 != '\0') {
      uVar11 = FUN_1001779ba(param_1[1] != '\0');
      local_4a = FUN_1001779ba(param_1[0xd] != '\0');
      local_58 = 0x8220202;
      local_4c = 0x822;
      local_54 = uVar11;
      __os_log_impl(0x100000000,uVar10,1,
                    "   disableExplicitContent: %{public}s (forced = %{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    uVar10 = FUN_100208c03();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar5 = _os_log_type_enabled(uVar10,1);
    if (cVar5 != '\0') {
      uVar11 = FUN_1001779ba(param_1[1] != '\0');
      local_4a = FUN_1001779ba(param_1[0xe] != '\0');
      local_58 = 0x8220202;
      local_4c = 0x822;
      local_54 = uVar11;
      __os_log_impl(0x100000000,uVar10,1,"   disableMusicVideos: %{public}s (forced = %{public}s)",
                    &local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    uVar10 = FUN_100208c03();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar5 = _os_log_type_enabled(uVar10,1);
    if (cVar5 != '\0') {
      uVar11 = FUN_1001779ba(param_1[7] != '\0');
      local_4a = FUN_1001779ba(*pcVar2 != '\0');
      local_58 = 0x8220202;
      local_4c = 0x822;
      local_54 = uVar11;
      __os_log_impl(0x100000000,uVar10,1,"   restrictMovieContent: %{public}s (forced = %{public}s)"
                    ,&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    uVar10 = FUN_100208c03();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar5 = _os_log_type_enabled(uVar10,1);
    if (cVar5 != '\0') {
      uVar11 = FUN_1001779ba(param_1[8] != '\0');
      local_4a = FUN_1001779ba(*pcVar3 != '\0');
      local_58 = 0x8220202;
      local_4c = 0x822;
      local_54 = uVar11;
      __os_log_impl(0x100000000,uVar10,1,
                    "   restrictTVShowContent: %{public}s (forced = %{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    uVar10 = FUN_100208c03();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar5 = _os_log_type_enabled(uVar10,1);
    if (cVar5 != '\0') {
      local_58 = 0x4000100;
      local_54 = CONCAT44(local_54._4_4_,(uint)*(ushort *)(param_1 + 0x12));
      __os_log_impl(0x100000000,uVar10,1,"   maxMovieRating: %d",&local_58,8);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    uVar10 = FUN_100208c03();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar5 = _os_log_type_enabled(uVar10,1);
    if (cVar5 != '\0') {
      local_58 = 0x4000100;
      local_54 = CONCAT44(local_54._4_4_,(uint)*(ushort *)(param_1 + 0x14));
      __os_log_impl(0x100000000,uVar10,1,"   maxTVRating: %d",&local_58,8);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    uVar10 = FUN_100208c03();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar5 = _os_log_type_enabled(uVar10,1);
    if (cVar5 != '\0') {
      local_54 = FUN_1001779ba(param_1[0x26] != '\0');
      local_58 = 0x8220102;
      __os_log_impl(0x100000000,uVar10,1,"   disablePodcasts: %{public}s ",&local_58,0xc);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    uVar10 = FUN_100208c03();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar5 = _os_log_type_enabled(uVar10,1);
    if (cVar5 != '\0') {
      local_54 = FUN_1001779ba(param_1[0x27] != '\0');
      local_58 = 0x8220102;
      __os_log_impl(0x100000000,uVar10,1,"   disableExplicitBooks: %{public}s ",&local_58,0xc);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    uVar10 = FUN_100208c03();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar5 = _os_log_type_enabled(uVar10,1);
    if (cVar5 != '\0') {
      local_54 = FUN_1001779ba(param_1[0x28] != '\0');
      local_58 = 0x8220102;
      __os_log_impl(0x100000000,uVar10,1,"   restrictGameContent: %{public}s ",&local_58,0xc);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    uVar10 = FUN_100208c03();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar5 = _os_log_type_enabled(uVar10,1);
    if (cVar5 != '\0') {
      local_58 = 0x4000100;
      local_54 = CONCAT44(local_54._4_4_,(uint)*(ushort *)(param_1 + 0x2a));
      __os_log_impl(0x100000000,uVar10,1,"   maxGameRating: %d",&local_58,8);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
  }
  FUN_10017060f(0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

