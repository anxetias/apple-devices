// name: FUN_1004d6810
// address: 1004d6810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004d6810(long *param_1)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  cfstringStruct *pcVar9;
  bool bVar10;
  double dVar11;
  int local_84;
  double local_80;
  long local_78;
  undefined1 local_70 [16];
  cfstringStruct *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 local_48;
  undefined2 uStack_42;
  double local_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar5 = (long *)(**(code **)(*param_1 + 0x10))();
  if (*plVar5 == 0) {
    uVar8 = FUN_1001cc310();
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x521a;
      local_48 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001a7b90(&local_58,&PTR_cf_app_10085e9d0);
    FUN_1001aaef6(local_70,PTR_cf_com_apple_AMPDevicesAgent_10085c0f8);
    FUN_100367584(plVar5,&local_58,local_70);
    FUN_1001ab006(local_70);
    FUN_1001ab240(&local_58);
    FUN_1001a7b90(local_70,&PTR_cf_baseVersion_10085e9d8);
    FUN_1001aa318(&local_58);
    FUN_1001aadc4(&local_58,1);
    FUN_1001a9c84(plVar5,local_70,&local_58);
    FUN_1001aae6c(&local_58);
    FUN_1001ab240(local_70);
    cVar2 = (**(code **)(*param_1 + 0x60))(param_1);
    if (cVar2 != '\0') {
      FUN_1001a7b90(&local_58,&PTR_cf_clientVersion_10085e9e0);
      FUN_1004d7036(plVar5,&local_58);
      FUN_1001ab240(&local_58);
    }
    FUN_1001a7b90(&local_58,&PTR_cf_appVersion_10085e9e8);
    FUN_1004d7036(plVar5,&local_58);
    FUN_1001ab240(&local_58);
    FUN_1001a7b90(local_70,&PTR_cf_eventTime_10085e9f0);
    dVar11 = (double)_CFAbsoluteTimeGetCurrent();
    dVar11 = (dVar11 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1970_10082e010) * _DAT_100708b48;
    uVar6 = (ulong)dVar11;
    pcVar9 = (cfstringStruct *)((long)(dVar11 - DAT_10070e4c0) & (long)uVar6 >> 0x3f | uVar6);
    bVar10 = DAT_1008c77b8 < pcVar9;
    DAT_1008c77b8 = (cfstringStruct *)((long)&DAT_1008c77b8->field0_0x0 + 1);
    if (bVar10) {
      DAT_1008c77b8 = pcVar9;
    }
    local_60 = DAT_1008c77b8;
    FUN_10021f1aa(&local_58,&local_60,0);
    FUN_1001a9b66(plVar5,local_70,&local_58);
    FUN_1001aae6c(&local_58);
    FUN_1001ab240(local_70);
    FUN_10015095e(local_70);
    FUN_1001a7b90(&local_60,&PTR_cf_dsId_100855a38);
    local_78 = FUN_100150dd2(local_70);
    if (local_78 != 0) {
      FUN_10021f1aa(&local_58,&local_78,0);
      FUN_10021f14e(plVar5,&local_60,&local_58);
      FUN_1001aae6c(&local_58);
    }
    FUN_1001ab240(&local_60);
    FUN_1001a7b90(&local_60,&PTR_cf_isSignedIn_100855a40);
    FUN_10015095e(&local_58);
    lVar7 = FUN_100150dd2(&local_58);
    FUN_1001a9d34(plVar5,&local_60,lVar7 != 0);
    FUN_100150de8(&local_58);
    FUN_1001ab240(&local_60);
    FUN_1001aff66(&local_58);
    lVar7 = CONCAT44(uStack_54,local_58);
    plVar1 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50));
    if (lVar7 != 0) {
      local_80 = (double)FUN_1001afe8e(lVar7);
      FUN_1001a7b90(&local_58,&PTR_cf_pixelRatio_100855a48);
      local_60._0_4_ = (int)local_80;
      FUN_10036799a(plVar5,&local_58);
      FUN_1001ab240(&local_58);
      FUN_1001afba0(&local_58,lVar7);
      dVar11 = (double)CONCAT26(uStack_42,local_48);
      local_80 = local_40;
      FUN_1001a7b90(&local_58,&PTR_cf_screenHeight_100855a50);
      local_60._0_4_ = (int)local_80;
      FUN_10036799a(plVar5,&local_58);
      FUN_1001ab240(&local_58);
      FUN_1001a7b90(&local_58,&PTR_cf_screenWidth_100855a58);
      local_60 = (cfstringStruct *)CONCAT44(local_60._4_4_,(int)dVar11);
      FUN_10036799a(plVar5,&local_58);
      FUN_1001ab240(&local_58);
    }
    iVar4 = FUN_100178263();
    iVar4 = (int)((ulong)((long)iVar4 * 0x77777777) >> 0x20) - iVar4;
    local_84 = (iVar4 >> 5) - (iVar4 >> 0x1f);
    FUN_1001a7b90(&local_58,&PTR_cf_timezoneOffset_10085e9f8);
    FUN_100365d78(plVar5,&local_58,&local_84);
    FUN_1001ab240(&local_58);
    FUN_1001a7b90(&local_60,&PTR_cf_userAgent_10085ea00);
    FUN_100132900(&local_58);
    FUN_100365cc6(plVar5,&local_60,&local_58);
    FUN_1001b7a50(&local_58);
    FUN_1001ab240(&local_60);
    FUN_1001a7b90(&local_60,&PTR_cf_storeFrontHeader_10085ea08);
    FUN_10020e0d0(&local_58,local_70,0);
    FUN_1004d7090(plVar5,&local_60,&local_58);
    FUN_1001b7a50(&local_58);
    FUN_1001ab240(&local_60);
    cVar2 = (**(code **)(*param_1 + 0x68))(param_1);
    if (cVar2 != '\0') {
      FUN_1001a7b90(&local_60,&PTR_cf_osLanguages_10085ea10);
      uVar8 = _CFLocaleCopyPreferredLanguages();
      FUN_1001a78d6(&local_58,uVar8);
      FUN_1001a7bac(&local_78,&local_58);
      FUN_1001a9c16(plVar5,&local_60,&local_78);
      FUN_1001ab240(&local_78);
      FUN_1001a7a94(&local_58);
      FUN_1001ab240(&local_60);
    }
    cVar2 = (**(code **)(*param_1 + 0x70))(param_1);
    if (cVar2 != '\0') {
      FUN_1001a7b90(&local_58,&PTR_cf_isOffline_10085ea18);
      bVar3 = FUN_1001a5b46();
      FUN_1001a9d34(plVar5,&local_58,bVar3 ^ 1);
      FUN_1001ab240(&local_58);
    }
    FUN_1001a7b90(&local_58,&PTR_cf_osBuildNumber_10085ea20);
    uVar8 = FUN_1001eb66f();
    FUN_1001aaedc(&local_60,uVar8);
    FUN_1004d70ec(plVar5,&local_58,&local_60);
    FUN_1001ab006(&local_60);
    FUN_1001ab240(&local_58);
    FUN_1001a7b90(&local_58,&PTR_cf_osVersion_10085ea28);
    uVar8 = FUN_1001eb65d();
    FUN_1001aaedc(&local_60,uVar8);
    FUN_1004d70ec(plVar5,&local_58,&local_60);
    FUN_1001ab006(&local_60);
    FUN_1001ab240(&local_58);
    FUN_1001a7b90(&local_58,&PTR_cf_os_10085ea30);
    local_60 = &cf_macOS;
    FUN_10021f0aa(plVar5,&local_58);
    FUN_1001ab240(&local_58);
    FUN_1001a7b90(&local_60,&PTR_cf_hardwareFamily_10085ea38);
    FUN_1001ebf58(&local_58);
    FUN_1004d7090(plVar5,&local_60,&local_58);
    FUN_1001b7a50(&local_58);
    FUN_1001ab240(&local_60);
    FUN_1001a7b90(&local_58,&PTR_cf_hardwareModel_10085ea40);
    uVar8 = FUN_1001eb6f8();
    FUN_1001aaedc(&local_60,uVar8);
    FUN_1004d70ec(plVar5,&local_58,&local_60);
    FUN_1001ab006(&local_60);
    FUN_1001ab240(&local_58);
    FUN_100150de8(local_70);
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar5 = plVar1 + 1;
      lVar7 = *plVar5;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

