// name: FUN_10033f7de
// address: 10033f7de

void FUN_10033f7de(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 local_84 [4];
  int *local_80;
  long local_78;
  ulong local_70;
  undefined4 local_68;
  uint local_64;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 local_5c;
  undefined4 local_5a;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 local_52;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar5 = FUN_1001cd44e("log-air-traffic-asset-metrics",0,0);
  if (cVar5 != '\0') {
    FUN_10016ab5c(param_2);
  }
  FUN_1001c62d9(param_1 + 0x168d0,0x128);
  lVar7 = FUN_10034bb06(param_2,&cf__PhysicalSize);
  lVar8 = FUN_10034bb06(param_2,&cf__FreeSize);
  lVar9 = FUN_10034bb06(param_2,&cf__PurgeableSize);
  if (lVar8 == 0 || lVar7 == 0) {
    FUN_1004e48c6(param_1);
    *(undefined4 *)(param_1 + 0x168d0) = *(undefined4 *)(param_1 + 0x153a0);
    *(undefined4 *)(param_1 + 0x168d4) = *(undefined4 *)(param_1 + 0x153a4);
    *(undefined4 *)(param_1 + 0x168d8) = *(undefined4 *)(param_1 + 0x153a8);
    *(undefined4 *)(param_1 + 0x168dc) = *(undefined4 *)(param_1 + 0x153ac);
    *(undefined8 *)(param_1 + 0x168e0) = 0;
  }
  else {
    uVar10 = FUN_1001696f3(lVar7,0);
    *(undefined8 *)(param_1 + 0x168d0) = uVar10;
    uVar10 = FUN_1001696f3(lVar8,0);
    *(undefined8 *)(param_1 + 0x168d8) = uVar10;
    uVar10 = 0;
    if (lVar9 != 0) {
      uVar10 = FUN_1001696f3(lVar9,0);
    }
    *(undefined8 *)(param_1 + 0x168e0) = uVar10;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar10 = DAT_1008c75b8;
    cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar5 != '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0x168d0);
      uVar3 = *(undefined8 *)(param_1 + 0x168d8);
      uVar4 = *(undefined8 *)(param_1 + 0x168e0);
      local_68 = 0x8000300;
      local_64 = (uint)uVar2;
      uStack_60 = (undefined2)((ulong)uVar2 >> 0x20);
      uStack_5e = (undefined2)((ulong)uVar2 >> 0x30);
      local_5c = 0x800;
      local_5a = (undefined4)uVar3;
      uStack_56 = (undefined2)((ulong)uVar3 >> 0x20);
      uStack_54 = (undefined2)((ulong)uVar3 >> 0x30);
      local_52 = 0x800;
      local_50 = (undefined4)uVar4;
      uStack_4c = (undefined2)((ulong)uVar4 >> 0x20);
      uStack_4a = (undefined2)((ulong)uVar4 >> 0x30);
      __os_log_impl(0x100000000,uVar10,1,
                    "airtraffic> totalDiskBytes = %llu, freeDiskBytes = %llu, purgeableDiskBytes = %llu"
                    ,&local_68,0x20);
    }
  }
  bVar15 = *(char *)(param_1 + 0x16845) != '\0';
  uVar14 = *(uint *)(param_1 + 0x6f60);
  uVar12 = (ulong)uVar14;
  local_80 = (int *)(param_1 + 0x168e8);
  FUN_10034bbd3(param_2,&cf_Media,&cf_Music,local_80,param_1 + 0x168f0,uVar12,bVar15);
  FUN_10034bbd3(param_2,&cf_Media,&cf_Audiobook,param_1 + 0x168f8,param_1 + 0x16900,uVar14,bVar15);
  FUN_10034bbd3(param_2,&cf_Media,&cf_MusicVideo,param_1 + 0x16908,param_1 + 0x16910,uVar12,bVar15);
  FUN_10034bbd3(param_2,&cf_Media,&cf_Movie,param_1 + 0x16918,param_1 + 0x16920,uVar14,bVar15);
  FUN_10034bbd3(param_2,&cf_Media,&cf_HomeVideo,param_1 + 0x16928,param_1 + 0x16930,uVar14,bVar15);
  FUN_10034bbd3(param_2,&cf_Media,&cf_TVEpisode,param_1 + 0x16938,param_1 + 0x16940,uVar14,bVar15);
  FUN_10034bbd3(param_2,&cf_Media,&cf_Podcast,param_1 + 0x16948,param_1 + 0x16950,uVar12,bVar15);
  FUN_10034bbd3(param_2,&cf_Media,&cf_VideoPodcast,param_1 + 0x16958,param_1 + 0x16960,uVar14,bVar15
               );
  FUN_10034bbd3(param_2,&cf_Media,&cf_iTunesU,param_1 + 0x16968,param_1 + 0x16970,uVar14,bVar15);
  FUN_10034bbd3(param_2,&cf_Media,&cf_iTunesUVideo,param_1 + 0x16978,param_1 + 0x16980,uVar14,bVar15
               );
  FUN_10034bbd3(param_2,&cf_Ringtone,0,param_1 + 0x16988,param_1 + 0x16990,uVar14,bVar15);
  FUN_10034bbd3(param_2,&cf_VoiceMemo,0,param_1 + 0x16998,param_1 + 0x169a0,uVar14,bVar15);
  FUN_10034bbd3(param_2,&cf_Book,0,param_1 + 0x169a8,param_1 + 0x169b0,uVar14,bVar15);
  FUN_10034bbd3(param_2,&cf_Application,0,param_1 + 0x169b8,param_1 + 0x169c0,uVar14,bVar15);
  FUN_10034bbd3(param_2,&cf_Photo,&cf_Photo,param_1 + 0x169c8,param_1 + 0x169d0,uVar12,bVar15);
  FUN_10034bbd3(param_2,&cf_Photo,&cf_CameraRoll,param_1 + 0x169d8,param_1 + 0x169e0,uVar14,bVar15);
  FUN_10034bbd3(param_2,&cf_UserData,0,local_84,param_1 + 0x169e8,uVar14,bVar15);
  FUN_10034bbd3(param_2,&cf_Logs,0,local_84,param_1 + 0x169f0,uVar14,bVar15);
  if (((*(char *)(param_1 + 0x16845) != '\0') && (*(ushort *)(param_1 + 100) < 0x840)) &&
     (lVar7 = FUN_1002f9fc5(*(undefined8 *)(param_1 + 0x30)), lVar7 != 0)) {
    local_78 = uVar12 - 1;
    uVar14 = 0;
    uVar13 = 0;
    do {
      if (((*(byte *)(*(long *)(lVar7 + 8) + 0xc6) & 4) != 0) && (*(char *)(lVar7 + 0x45) == '\0'))
      {
        lVar7 = *(long *)(lVar7 + 0x68);
        if (uVar12 != 0) {
          lVar7 = (lVar7 + local_78) - (ulong)(lVar7 + local_78) % uVar12;
        }
        uVar14 = uVar14 + 1;
        uVar13 = uVar13 + lVar7;
      }
      lVar7 = FUN_1002fa118();
    } while (lVar7 != 0);
    if (uVar14 != 0) {
      local_70 = 0;
      lVar7 = FUN_1003401bb(param_2,&cf_Media);
      if ((lVar7 == 0) || (lVar7 = FUN_100166b7f(lVar7,&cf_Music), lVar7 == 0)) {
        bVar15 = false;
      }
      else {
        cVar5 = FUN_100167ab3(lVar7,&cf__PurgeableSize,&local_70);
        bVar15 = cVar5 != '\0';
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar10 = DAT_1008c75b8;
      cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar5 != '\0') {
        local_68 = 0x4000400;
        uStack_60 = 0x800;
        uStack_5e = (undefined2)uVar13;
        local_5c = (undefined2)(uVar13 >> 0x10);
        local_5a = (undefined4)(uVar13 >> 0x20);
        uStack_56 = 0x800;
        uStack_54 = (undefined2)local_70;
        local_52 = (undefined2)(local_70 >> 0x10);
        local_50 = (undefined4)(local_70 >> 0x20);
        uStack_4c = 0x800;
        uStack_4a = (undefined2)*(undefined8 *)(param_1 + 0x168e0);
        uStack_48 = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x168e0) >> 0x10);
        local_64 = uVar14;
        __os_log_impl(0x100000000,uVar10,1,
                      "airtraffic> totalAutoFilledMusicTracks = %u, totalAutoFilledMusicBytes = %llu, totalPurgeableMusicBytes = %llu, purgeableDiskBytes = %llu"
                      ,&local_68,0x26);
      }
      if (bVar15) {
        uVar12 = *(ulong *)(param_1 + 0x168e0);
        uVar11 = local_70;
        if (uVar12 <= local_70) {
          uVar11 = uVar12;
        }
      }
      else {
        uVar12 = *(ulong *)(param_1 + 0x168e0);
        uVar11 = uVar12;
      }
      if (uVar13 < uVar11) {
        uVar11 = uVar13;
      }
      if (0x82f < *(ushort *)(param_1 + 100)) {
        *local_80 = *local_80 + uVar14;
      }
      *(long *)(param_1 + 0x168f0) = *(long *)(param_1 + 0x168f0) + uVar11;
      *(ulong *)(param_1 + 0x168e0) = uVar12 - uVar11;
    }
  }
  *(undefined1 *)(param_1 + 0x168ce) = 1;
  iVar1 = *(int *)(param_1 + 0x169c8);
  cVar5 = (iVar1 == 0) + '\x01';
  if (*(char *)(param_1 + 0x6add) != cVar5) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar10 = DAT_1008c75b8;
    cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar6 != '\0') {
      local_68 = 0x4000100;
      local_64 = (uint)(iVar1 != 0);
      __os_log_impl(0x100000000,uVar10,1,"airtraffic> hasSyncedPhotos = %{BOOL}d",&local_68,8);
    }
    *(char *)(param_1 + 0x6add) = cVar5;
    uVar10 = FUN_1001c156e();
    FUN_1001c6987(uVar10,0x69707372,*(undefined4 *)(param_1 + 0x28),0,0);
  }
  FUN_100321e5c(*(undefined8 *)(param_1 + 0x30));
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

