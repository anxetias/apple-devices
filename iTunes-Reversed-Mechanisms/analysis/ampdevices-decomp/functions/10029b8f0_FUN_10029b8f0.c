// name: FUN_10029b8f0
// address: 10029b8f0

ulong FUN_10029b8f0(long param_1,code *param_2,uint param_3,uint param_4,undefined8 param_5,
                   long param_6,long *param_7,undefined4 *param_8)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  undefined **ppuVar15;
  char cVar16;
  undefined1 uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined8 uVar22;
  long lVar23;
  long *plVar24;
  undefined8 uVar25;
  long lVar26;
  void *pvVar27;
  code *pcVar28;
  uint *puVar29;
  char *pcVar30;
  long lVar31;
  undefined7 uVar32;
  ulong uVar33;
  code *pcVar34;
  undefined4 *puVar35;
  long *plVar36;
  long lVar37;
  ulong uVar38;
  bool bVar39;
  undefined1 auVar40 [16];
  undefined4 uVar42;
  void **ppvVar41;
  undefined1 local_630 [8];
  ulong local_628;
  ulong local_620;
  long local_618;
  undefined4 local_60c;
  int local_608;
  int local_604;
  void *local_600;
  void *local_5f8;
  void *local_5f0;
  long local_5e8;
  void *local_5e0;
  uint *local_5d8;
  undefined8 local_5d0;
  long local_5c8;
  undefined8 local_5c0;
  int local_5b4;
  uint local_5b0;
  undefined4 local_5ac;
  undefined8 local_5a8;
  ulong local_5a0;
  int local_598;
  uint local_594;
  ulong local_590;
  long local_588;
  int local_57c;
  long local_578;
  undefined4 local_56c;
  long *local_568;
  uint local_560;
  undefined4 local_55c;
  uint local_554;
  code *local_550;
  undefined1 local_542;
  undefined1 local_541;
  uint local_540;
  uint local_53c;
  long local_538;
  ulong local_530;
  uint *local_528;
  void *local_520;
  undefined1 local_513;
  char local_512;
  char local_511;
  uint *local_510;
  long local_508;
  uint local_4fc;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined2 local_4ec;
  uint local_4ea;
  undefined8 local_4d8;
  code *local_4d0;
  char *local_4c8;
  undefined4 local_4c0;
  code *local_4b8;
  long **local_4b0;
  code *local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 local_490;
  undefined2 uStack_48c;
  undefined2 uStack_48a;
  undefined2 uStack_488;
  undefined4 uStack_486;
  undefined2 uStack_482;
  undefined4 local_480;
  code *local_478;
  uint *local_470;
  long *local_468;
  undefined8 uStack_460;
  uint local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_578 = 0;
  local_554 = param_4;
  local_550 = param_2;
  cVar16 = FUN_100495380();
  if (cVar16 == '\0') {
    uVar22 = FUN_1001cc310();
    uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
    cVar16 = _os_log_type_enabled(uVar22,0x10);
    if (cVar16 != '\0') {
      local_44a = "ITImageLibraryIsValid(imageLibrary)";
LAB_10029ba9b:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
  }
  else if (local_550 == (code *)0x0) {
    uVar22 = FUN_1001cc310();
    uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
    cVar16 = _os_log_type_enabled(uVar22,0x10);
    if (cVar16 != '\0') {
      local_44a = "formatDescriptionList != nullptr";
      goto LAB_10029ba9b;
    }
  }
  else if (param_3 == 0) {
    uVar22 = FUN_1001cc310();
    uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
    cVar16 = _os_log_type_enabled(uVar22,0x10);
    if (cVar16 != '\0') {
      local_44a = "numFormats != 0";
      goto LAB_10029ba9b;
    }
  }
  else {
    cVar16 = FUN_1001edfc7();
    if (cVar16 == '\0') {
      FUN_1001b7a44(&local_4d8);
      if (*(char *)(param_1 + 5) == '\0') {
        uVar22 = FUN_1001cc310();
        uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
        cVar16 = _os_log_type_enabled(uVar22,0x10);
        if (cVar16 != '\0') {
          local_498 = 0x8220202;
          uStack_494 = 0x7a0a90;
          local_490 = 1;
          uStack_48c = 0x822;
          uStack_48a = 0x7d7c;
          uStack_488 = 0x7b;
          uStack_486 = 1;
          __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",&local_498,0x16);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar22);
        FUN_1001782e9(0,0);
LAB_10029bebd:
        FUN_1001b7a50(&local_4d8);
        local_4f8 = 0;
        uStack_4f4 = 0;
LAB_10029bed4:
        uVar22 = FUN_1001cc310();
        uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
        cVar16 = _os_log_type_enabled(uVar22,0x10);
        if (cVar16 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x822;
          local_44a = "spIPodPhotoCachePathString";
          __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar22);
        FUN_1001782e9(0,0);
        FUN_10014d890(&local_4f8);
      }
      else {
        local_5c0 = param_5;
        local_588 = param_6;
        iVar18 = FUN_10017d5ba(param_1 + 4000,&local_458);
        if (iVar18 == -0x80) goto LAB_10029bebd;
        if (iVar18 != 0) {
          uVar22 = FUN_1001cc310();
          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
          cVar16 = _os_log_type_enabled(uVar22,0x10);
          if (cVar16 != '\0') {
            uStack_48a = (undefined2)iVar18;
            uStack_488 = (undefined2)((uint)iVar18 >> 0x10);
LAB_10029c0f2:
            uStack_48c = 0x400;
            local_490 = 1;
            uStack_494 = 0x7a0a90;
            local_498 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: err == (%d)",&local_498,0x12);
          }
LAB_10029beb4:
          (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          goto LAB_10029bebd;
        }
        iVar18 = FUN_10017dca4(&local_458,&local_4d8);
        if (iVar18 == -0x80) goto LAB_10029bebd;
        if (iVar18 != 0) {
          uVar22 = FUN_1001cc310();
          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
          cVar16 = _os_log_type_enabled(uVar22,0x10);
          if (cVar16 != '\0') {
            uStack_48a = (undefined2)iVar18;
            uStack_488 = (undefined2)((uint)iVar18 >> 0x10);
            goto LAB_10029c0f2;
          }
          goto LAB_10029beb4;
        }
        lVar23 = FUN_1001b8d0c(&local_4d8);
        FUN_1001b7a50(&local_4d8);
        local_4f8 = (undefined4)lVar23;
        uStack_4f4 = (undefined4)((ulong)lVar23 >> 0x20);
        if (lVar23 == 0) goto LAB_10029bed4;
        local_458 = local_458 & 0xffffff00;
        local_454 = (char *)((ulong)local_454 & 0xffffffff00000000);
        iVar18 = FUN_100179732(1,&local_4d8);
        if (iVar18 == -0x80) {
LAB_10029c072:
          local_568 = (long *)0x0;
LAB_10029c07d:
          uVar22 = FUN_1001cc310();
          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
          cVar16 = _os_log_type_enabled(uVar22,0x10);
          if (cVar16 != '\0') {
            local_458 = 0x8220202;
            local_454 = "Assertion failure";
            local_44c = 0x822;
            local_44a = "spFormatIDHashString";
            __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          local_538 = 0;
          FUN_1001782e9(0,0);
        }
        else {
          if (iVar18 != 0) {
            uVar22 = FUN_1001cc310();
            uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
            cVar16 = _os_log_type_enabled(uVar22,0x10);
            if (cVar16 != '\0') {
              local_498 = 0x8220202;
              uStack_494 = 0x7a0a90;
              local_490 = 1;
              uStack_48c = 0x400;
              uStack_48a = (undefined2)iVar18;
              uStack_488 = (undefined2)((uint)iVar18 >> 0x10);
              __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: err == (%d)",&local_498,0x12)
              ;
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar22);
            goto LAB_10029c072;
          }
          uVar33 = (ulong)param_3;
          pcVar34 = local_550;
          do {
            FUN_10017983e(local_4d8,pcVar34,4);
            pcVar34 = pcVar34 + 0x78;
            uVar33 = uVar33 - 1;
          } while (uVar33 != 0);
          FUN_1001799f1(local_4d8,&local_458);
          plVar24 = (long *)FUN_100179bf5(&local_458,0,0x40);
          if (plVar24 == (long *)0x0) {
            uVar22 = FUN_1001cc310();
            uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
            cVar16 = _os_log_type_enabled(uVar22,0x10);
            if (cVar16 != '\0') {
              local_498 = 0x8220202;
              uStack_494 = 0x7a0a90;
              local_490 = 1;
              uStack_48c = 0x822;
              uStack_48a = 0x328a;
              uStack_488 = 0x7a;
              uStack_486 = 1;
              __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",&local_498,0x16
                                 );
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar22);
            FUN_1001782e9(0,0);
          }
          FUN_100179a7b(local_4d8);
          local_568 = plVar24;
          if (plVar24 == (long *)0x0) goto LAB_10029c07d;
          lVar23 = FUN_1001cd685(&cf_iPodPhotoCacheHistory,1,0);
          local_498 = (undefined4)lVar23;
          uStack_494 = (undefined4)((ulong)lVar23 >> 0x20);
          if (lVar23 == 0) {
            lVar23 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                   PTR__kCFTypeDictionaryValueCallBacks_10082e140);
            lVar37 = CONCAT44(uStack_494,local_498);
            local_498 = (undefined4)lVar23;
            uStack_494 = (undefined4)((ulong)lVar23 >> 0x20);
            if (lVar37 != 0) {
              _CFRelease();
              lVar23 = CONCAT44(uStack_494,local_498);
            }
            if (lVar23 != 0) goto LAB_10029bcf5;
            uVar22 = FUN_1001cc310();
            uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
            cVar16 = _os_log_type_enabled(uVar22,0x10);
            if (cVar16 != '\0') {
              local_44a = "spHistoryDictionary";
LAB_10029ea14:
              local_44c = 0x822;
              local_454 = "Assertion failure";
              local_458 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",&local_458,0x16
                                 );
            }
LAB_10029c21e:
            (*(code *)PTR__objc_release_10082c7b0)(uVar22);
            local_538 = 0;
            FUN_1001782e9(0,0);
          }
          else {
LAB_10029bcf5:
            lVar23 = FUN_100166b7f(lVar23,CONCAT44(uStack_4f4,local_4f8));
            if (lVar23 == 0) {
              lVar23 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                     PTR__kCFTypeDictionaryValueCallBacks_10082e140);
              if (lVar23 == 0) {
                uVar22 = FUN_1001cc310();
                uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                cVar16 = _os_log_type_enabled(uVar22,0x10);
                if (cVar16 != '\0') {
                  local_44a = "libraryHistoryDictionary != nullptr";
                  goto LAB_10029ea14;
                }
                goto LAB_10029c21e;
              }
              FUN_1001714de(CONCAT44(uStack_494,local_498),CONCAT44(uStack_4f4,local_4f8),lVar23);
              FUN_10017060f(lVar23);
            }
            local_538 = FUN_100166b7f(lVar23,local_568);
            if (local_538 == 0) {
              local_538 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138
                                        ,PTR__kCFTypeDictionaryValueCallBacks_10082e140);
              if (local_538 == 0) {
                uVar22 = FUN_1001cc310();
                uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                cVar16 = _os_log_type_enabled(uVar22,0x10);
                if (cVar16 != '\0') {
                  local_44a = "deviceHistoryDictionary != nullptr";
                  goto LAB_10029ea14;
                }
                goto LAB_10029c21e;
              }
              FUN_1001714de(lVar23,local_568);
              FUN_10017060f(local_538);
            }
            lVar23 = CONCAT44(uStack_494,local_498);
            if (lVar23 != 0) {
              _CFRetain(lVar23);
            }
            bVar39 = local_578 != 0;
            local_578 = lVar23;
            if (bVar39) {
              _CFRelease();
            }
          }
          FUN_1001988bc(&local_498);
        }
        FUN_10014d890(&local_568);
        FUN_10014d890(&local_4f8);
        if (local_538 != 0) {
          uVar22 = _objc_autoreleasePoolPush();
          local_608 = 0;
          local_594 = 0;
          FUN_100167896(local_538,&cf_attemptedNumProcessors);
          FUN_100167896(local_538,&cf_reducedNumProcessors,&local_594);
          FUN_1001711e2();
          FUN_10016909e(local_538,&cf_lastSyncDate);
          uVar19 = FUN_1001eba58();
          if ((int)uVar19 < 1) {
            uVar25 = FUN_1001cc310();
            uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
            cVar16 = _os_log_type_enabled(uVar25,0x10);
            if (cVar16 != '\0') {
              local_458 = 0x8220202;
              local_454 = "Assertion failure";
              local_44c = 0x822;
              local_44a = "maxProcessors >= 1";
              __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: (%{public}s)",&local_458,0x16
                                 );
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar25);
            uVar19 = 1;
            FUN_1001782e9(0,0);
          }
          uVar20 = FUN_1001cd9a6("max-photo-threads",0,0);
          if (uVar20 == 0) {
            cVar16 = FUN_1001cdcc9("max-photo-threads",0);
            if (cVar16 != '\0') {
              FUN_100171552(local_538,&cf_reducedNumProcessors);
              FUN_1001cdefe(&cf_iPodPhotoCacheHistory,local_578,0);
              iVar18 = FUN_1001cd46b("max-photo-threads",0);
              if ((iVar18 != -0x80) && (iVar18 != 0)) {
                uVar25 = FUN_1001cc310();
                uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                cVar16 = _os_log_type_enabled(uVar25,0x10);
                if (cVar16 != '\0') {
                  local_458 = 0x8220202;
                  local_454 = "Assertion failure";
                  local_44c = 0x400;
                  local_44a = (char *)CONCAT44(local_44a._4_4_,iVar18);
                  __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: err == (%d)",&local_458,
                                      0x12);
                }
                (*(code *)PTR__objc_release_10082c7b0)(uVar25);
              }
            }
          }
          else if (0 < (int)uVar20) {
            if (uVar20 < uVar19) {
              uVar19 = uVar20;
            }
            uVar33 = (ulong)uVar19;
            goto LAB_10029c3cd;
          }
          uVar33 = 4;
          if (uVar19 < 4) {
            uVar33 = (ulong)uVar19;
          }
LAB_10029c3cd:
          if (local_608 != 0) {
            local_594 = local_608 - 1;
            if (local_608 < 2) {
              local_594 = 1;
            }
            FUN_1001689a5(local_538,&cf_reducedNumProcessors,local_594,1);
            FUN_1001cdefe(&cf_iPodPhotoCacheHistory,local_578,0);
          }
          local_590 = (ulong)local_594;
          if ((int)uVar33 < (int)local_594) {
            local_590 = uVar33;
          }
          if ((int)local_594 < 1) {
            local_590 = uVar33;
          }
          local_628 = (ulong)param_3;
          local_540 = local_554 & 1;
          puVar35 = (undefined4 *)&DAT_10073feb4;
          if ((local_554 & 4) != 0) {
            puVar35 = &DAT_10073feb8;
          }
          local_620 = local_628 * 0x68;
          pcVar34 = local_550 + 0x14;
          local_508 = param_1;
          local_4fc = param_3;
          do {
            FUN_1001689a5(local_538,&cf_attemptedNumProcessors,local_590,1);
            FUN_1001cdefe(&cf_iPodPhotoCacheHistory,local_578,0);
            local_598 = 0;
            local_568 = (long *)0x0;
            local_560 = 0;
            local_55c = 0;
            local_5b4 = 0;
            local_5b0 = 0;
            local_513 = 0;
            local_512 = '\0';
            local_5c8 = 0;
            local_600 = (void *)0x0;
            local_5f8 = (void *)0x0;
            local_5f0 = (void *)0x0;
            local_5a8 = 0;
            local_5e8 = 0;
            local_5e0 = (void *)0x0;
            local_60c = 0;
            FUN_1001cc3a4(0);
            FUN_1001b7b04(&local_498,"ConvertImageLibrary");
            FUN_1001cc232(local_630,&local_498);
            FUN_1001b7a50(&local_498);
            auVar40 = FUN_10017d5ba(param_1 + 4000,&local_458);
            uVar25 = auVar40._8_8_;
            uVar19 = auVar40._0_4_;
            uVar33 = auVar40._0_8_ & 0xffffffff;
            if (uVar19 == 0xffffff80) {
              local_530 = 0;
              local_57c = (int)CONCAT62(auVar40._2_6_,1);
LAB_10029c60d:
              pvVar27 = (void *)0x0;
LAB_10029c610:
              local_528 = (uint *)0x0;
LAB_10029c61b:
              lVar37 = 0;
LAB_10029c61e:
              local_510 = (uint *)0x0;
              lVar23 = local_508;
            }
            else {
              if (uVar19 != 0) {
                uVar25 = FUN_1001cc310();
                uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                lVar23 = local_508;
                cVar16 = _os_log_type_enabled(uVar25,0x10);
                if (cVar16 != '\0') {
                  local_498 = 0x8220202;
                  uStack_494 = 0x7a0a90;
                  local_490 = 1;
                  uStack_48c = 0x400;
                  uStack_48a = auVar40._0_2_;
                  uStack_488 = auVar40._2_2_;
                  __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: err == (%d)",&local_498,
                                      0x12);
                }
                uVar25 = (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                local_57c = (int)CONCAT62((int6)((ulong)uVar25 >> 0x10),1);
                goto LAB_10029c674;
              }
              uVar19 = *(uint *)(local_508 + 0x13c0);
              uVar20 = 10;
              if ((uVar19 < 8) && (uVar25 = 0, (0xc6U >> (uVar19 & 0x1f) & 1) != 0)) {
                uVar20 = (uint)(uVar19 != 1) * 4 + 0xb;
                uVar25 = 0;
                if (uVar19 == 6) {
                  uVar20 = 0xb;
                  goto LAB_10029c5d0;
                }
                if (uVar19 == 1) goto LAB_10029c5d0;
                local_5ac = 0;
LAB_10029c6a2:
                if ((uVar19 == 7) || ((uVar19 == 6 && (0x2ffffff < *(uint *)(local_508 + 0x13c4)))))
                {
LAB_10029c6be:
                  uVar20 = uVar20 & 0xfffffffd;
                }
              }
              else {
LAB_10029c5d0:
                uVar32 = (undefined7)((ulong)uVar25 >> 8);
                local_5ac = (undefined4)CONCAT71(uVar32,1);
                if (uVar19 != 1) goto LAB_10029c6a2;
                local_5ac = (undefined4)CONCAT71(uVar32,1);
                if (0x81000ff < *(uint *)(local_508 + 0x13c4)) goto LAB_10029c6be;
              }
              bVar39 = false;
              uVar33 = local_628;
              pcVar28 = pcVar34;
              do {
                if (*(short *)(pcVar28 + 0x5c) != 0) {
                  bVar39 = (bool)(bVar39 | (*(int *)pcVar28 == 0x706e6720 ||
                                           *(int *)pcVar28 == 0x6a706567));
                }
                pcVar28 = pcVar28 + 0x78;
                uVar33 = uVar33 - 1;
              } while (uVar33 != 0);
              if (uVar19 == 7) {
                uVar20 = uVar20 & 0xfffffffe;
              }
              uVar4 = uVar20 + 0x10;
              if (!bVar39) {
                uVar4 = uVar20;
              }
              local_510 = (uint *)CONCAT44(local_510._4_4_,uVar4);
              local_520 = (void *)CONCAT71(local_520._1_7_,uVar19 == 6);
              FUN_100496791();
              local_530 = 0;
              if (local_540 == 0) {
                local_56c = 0x6f707470;
                bVar5 = 0;
                bVar2 = 0;
              }
              else {
                if (((ulong)local_510 & 8) == 0) {
                  bVar2 = 0;
                }
                else {
                  uVar33 = local_628;
                  pcVar28 = local_550;
                  if ((local_554 & 2) == 0) {
                    do {
                      if (pcVar28[0xc] != (code)0x0) goto LAB_10029cf5c;
                      pcVar28 = pcVar28 + 0x78;
                      uVar33 = uVar33 - 1;
                    } while (uVar33 != 0);
                    uVar25 = FUN_1001cc310();
                    uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                    cVar16 = _os_log_type_enabled(uVar25,0x10);
                    if (cVar16 != '\0') {
                      local_498 = 0x8220202;
                      uStack_494 = 0x7a0a90;
                      local_490 = 1;
                      uStack_48c = 0x822;
                      uStack_48a = 0x7ed1;
                      uStack_488 = 0x7b;
                      uStack_486 = 1;
                      __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: (%{public}s)",
                                          &local_498,0x16);
                    }
                    (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                    bVar2 = 0;
                    FUN_1001782e9(0,0);
                  }
                  else {
                    pcVar28 = (code *)0x0;
LAB_10029cf5c:
                    lVar23 = FUN_100496019(local_508);
                    bVar2 = 0;
                    for (; lVar23 != 0; lVar23 = FUN_1004960d0(lVar23)) {
                      if (((*(int *)(lVar23 + 0xa4) != 0) && (*(char *)(lVar23 + 0xb2) == '\0')) &&
                         (*(char *)(lVar23 + 0xd7) == '\0')) {
                        lVar37 = FUN_1004968c5(lVar23);
                        while (lVar37 != 0) {
                          if (((*(double *)(lVar37 + 0x30) == 0.0) &&
                              (!NAN(*(double *)(lVar37 + 0x30)))) ||
                             ((*(double *)(lVar37 + 0x28) == 0.0 &&
                              (!NAN(*(double *)(lVar37 + 0x28)))))) {
                            uVar33 = 0;
                            do {
                              if (*(int *)(lVar37 + 0x10) == puVar35[uVar33]) {
                                if (((local_554 & 2) == 0) &&
                                   (lVar26 = FUN_1004993ef(lVar23,*(undefined4 *)pcVar28,0,1),
                                   lVar26 != 0)) {
                                  if (*(int *)(lVar37 + 0x480) != 1) goto LAB_10029d029;
                                }
                                else {
                                  *(undefined4 *)(lVar37 + 0x480) = 1;
                                }
                                *(int *)(lVar23 + 0xa0) = *(int *)(lVar23 + 0xa0) + 1;
                                bVar2 = 1;
                              }
LAB_10029d029:
                            } while (((local_554 & 4) != 0) &&
                                    (bVar39 = uVar33 < 2, uVar33 = uVar33 + 1, bVar39));
                          }
                          lVar37 = FUN_100496985(lVar37);
                          param_3 = local_4fc;
                        }
                      }
                    }
                  }
                }
                if (((ulong)local_510 & 2) == 0) {
                  local_56c = 0x616e7074;
                }
                else {
                  local_56c = 0x616e7074;
                  lVar23 = FUN_100496019(local_508);
                  if (lVar23 != 0) {
                    bVar5 = 0;
                    do {
                      if ((((*(int *)(lVar23 + 0xa4) != 0) && (NAN(*(double *)(lVar23 + 0xb8)))) &&
                          (param_3 = local_4fc, NAN(*(double *)(lVar23 + 0xc0)))) &&
                         ((cVar16 = FUN_1002a2e87(lVar23), cVar16 == '\0' ||
                          (param_3 = local_4fc, *(short *)(local_508 + 0x13c8) == 0)))) {
                        lVar37 = FUN_1004993ef(lVar23,1,0,1);
                        bVar5 = 1;
                        param_3 = local_4fc;
                        if ((lVar37 != 0) && (*(int *)(lVar37 + 0x480) == 0)) {
                          *(undefined4 *)(lVar37 + 0x480) = 1;
                          *(int *)(lVar23 + 0xa0) = *(int *)(lVar23 + 0xa0) + 1;
                        }
                      }
                      lVar23 = FUN_1004960d0(lVar23);
                    } while (lVar23 != 0);
                    goto LAB_10029c8a9;
                  }
                }
                bVar5 = 0;
              }
LAB_10029c8a9:
              local_57c = (byte)local_520 + 1;
              uVar3 = *(ushort *)(local_508 + 0x13c8);
              if ((bool)(local_540 == 0 | bVar2 | bVar5 | uVar3 < (ushort)local_57c)) {
                uVar19 = FUN_10017d477(&local_458,0,0);
                uVar33 = (ulong)uVar19;
                if (uVar19 == 0xffffff80) {
LAB_10029cf0f:
                  local_530 = 0;
                  goto LAB_10029c60d;
                }
                if (uVar19 != 0) {
                  uVar25 = FUN_1001cc310();
                  uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                  lVar23 = local_508;
                  cVar16 = _os_log_type_enabled(uVar25,0x10);
                  if (cVar16 != '\0') {
                    local_498 = 0x8220202;
                    uStack_494 = 0x7a0a90;
                    local_490 = 1;
                    uStack_48c = 0x400;
                    uStack_48a = (undefined2)uVar19;
                    uStack_488 = (undefined2)(uVar19 >> 0x10);
                    __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: err == (%d)",&local_498
                                        ,0x12);
                  }
                  (*(code *)PTR__objc_release_10082c7b0)(uVar25);
LAB_10029c674:
                  local_510 = (uint *)0x0;
                  lVar37 = 0;
                  local_528 = (uint *)0x0;
                  local_530 = 0;
                  pvVar27 = (void *)0x0;
                  goto LAB_10029cca6;
                }
                uVar19 = FUN_10058f626(local_508,param_3,local_550);
                uVar33 = (ulong)uVar19;
                if (uVar19 == 0xffffff80) goto LAB_10029cf0f;
                if (uVar19 != 0) {
                  uVar25 = FUN_1001cc310();
                  uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                  lVar23 = local_508;
                  cVar16 = _os_log_type_enabled(uVar25,0x10);
                  if (cVar16 != '\0') {
                    local_498 = 0x8220202;
                    uStack_494 = 0x7a0a90;
                    local_490 = 1;
                    uStack_48c = 0x400;
                    uStack_48a = (undefined2)uVar19;
                    uStack_488 = (undefined2)(uVar19 >> 0x10);
                    __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: err == (%d)",&local_498
                                        ,0x12);
                  }
                  (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                  goto LAB_10029c674;
                }
                lVar23 = FUN_100496019(local_508);
                lVar37 = local_508;
                for (; lVar23 != 0; lVar23 = FUN_1004960d0(lVar23)) {
                  for (lVar26 = FUN_1004968c5(lVar23); lVar26 != 0; lVar26 = FUN_100496985(lVar26))
                  {
                    if ((*(char *)(lVar26 + 0x52) != '\0') && (*(int *)(lVar26 + 0x3c) == 0)) {
                      *(undefined1 *)(lVar23 + 0x80) = 2;
                    }
                  }
                }
                if (local_540 == 0) {
                  FUN_10029b5df(lVar37,local_550,param_3);
                  if (param_7 != (long *)0x0) {
                    (**(code **)(*param_7 + 0x30))(param_7,local_508);
                  }
                  lVar37 = local_508;
                  if (local_588 != 0) {
                    uVar19 = FUN_10029f187(local_508,local_550,param_3,local_588,local_5c0,
                                           &local_598);
                    lVar23 = local_508;
                    uVar33 = (ulong)uVar19;
                    if (uVar19 == 0xffffff80) goto LAB_10029cf0f;
                    lVar37 = local_508;
                    if (uVar19 != 0) {
                      uVar25 = FUN_1001cc310();
                      uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                      cVar16 = _os_log_type_enabled(uVar25,0x10);
                      if (cVar16 != '\0') {
                        local_498 = 0x8220202;
                        uStack_494 = 0x7a0a90;
                        local_490 = 1;
                        uStack_48c = 0x400;
                        uStack_48a = (undefined2)uVar19;
                        uStack_488 = (undefined2)(uVar19 >> 0x10);
                        __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: err == (%d)",
                                            &local_498,0x12);
                      }
                      (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                      goto LAB_10029c674;
                    }
                  }
                }
                if (uVar3 < (ushort)local_57c) {
                  lVar23 = FUN_100496019(lVar37);
                  lVar37 = local_508;
                  for (; lVar23 != 0; lVar23 = FUN_1004960d0(lVar23)) {
                    if ((*(int *)(lVar23 + 0xa0) == 0) &&
                       (cVar16 = FUN_1002a2e87(lVar23), cVar16 != '\0')) {
                      for (lVar26 = FUN_1004968c5(lVar23); lVar26 != 0;
                          lVar26 = FUN_100496985(lVar26)) {
                        if (*(int *)(lVar26 + 0x10) == 1) {
                          *(int *)(lVar23 + 0xa0) = *(int *)(lVar23 + 0xa0) + 1;
                          *(undefined4 *)(lVar26 + 0x480) = 1;
                          if ((local_554 & 4) == 0) break;
                        }
                        else if (((local_554 & 4) != 0) && (*(int *)(lVar26 + 0x10) - 5U < 2)) {
                          *(int *)(lVar23 + 0xa0) = *(int *)(lVar23 + 0xa0) + 1;
                          *(undefined4 *)(lVar26 + 0x480) = 1;
                        }
                      }
                    }
                  }
                }
                local_530 = FUN_1002a0092(lVar37,0);
                uVar20 = FUN_1002a0092(local_508,1);
                if ((uint)local_530 == 0) {
                  local_530 = 0;
                  goto LAB_10029cc9d;
                }
                uVar38 = (ulong)uVar20;
                pvVar27 = operator_new__(local_620,(nothrow_t *)PTR_nothrow_10082c970);
                if (pvVar27 == (void *)0x0) {
                  uVar25 = FUN_1001cc310();
                  uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                  cVar16 = _os_log_type_enabled(uVar25,0x10);
                  if (cVar16 != '\0') {
                    local_498 = 0x8220202;
                    uStack_494 = 0x7a0a90;
                    local_490 = 1;
                    uStack_48c = 0x822;
                    uStack_48a = 0x7dc0;
                    uStack_488 = 0x7b;
                    uStack_486 = 1;
                    __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: (%{public}s)",
                                        &local_498,0x16);
                  }
                  (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                  FUN_1001782e9(0,0);
                  uVar33 = 0xffffff94;
                  goto LAB_10029c60d;
                }
                uVar33 = 0;
                pcVar28 = local_550;
                do {
                  uVar25 = *(undefined8 *)(pcVar28 + 0x68);
                  puVar1 = (undefined8 *)((long)pvVar27 + uVar33 + 0x50);
                  *puVar1 = *(undefined8 *)(pcVar28 + 0x60);
                  puVar1[1] = uVar25;
                  *(undefined8 *)((long)pvVar27 + uVar33 + 0x60) = *(undefined8 *)(pcVar28 + 0x70);
                  uVar25 = *(undefined8 *)(pcVar28 + 0x58);
                  puVar1 = (undefined8 *)((long)pvVar27 + uVar33 + 0x40);
                  *puVar1 = *(undefined8 *)(pcVar28 + 0x50);
                  puVar1[1] = uVar25;
                  uVar7 = *(undefined8 *)(pcVar28 + 0x10);
                  uVar8 = *(undefined8 *)(pcVar28 + 0x18);
                  uVar25 = *(undefined8 *)(pcVar28 + 0x20);
                  uVar6 = *(undefined8 *)(pcVar28 + 0x28);
                  uVar9 = *(undefined8 *)(pcVar28 + 0x30);
                  uVar10 = *(undefined8 *)(pcVar28 + 0x38);
                  uVar11 = *(undefined8 *)(pcVar28 + 0x48);
                  puVar1 = (undefined8 *)((long)pvVar27 + uVar33 + 0x30);
                  *puVar1 = *(undefined8 *)(pcVar28 + 0x40);
                  puVar1[1] = uVar11;
                  puVar1 = (undefined8 *)((long)pvVar27 + uVar33 + 0x20);
                  *puVar1 = uVar9;
                  puVar1[1] = uVar10;
                  puVar1 = (undefined8 *)((long)pvVar27 + uVar33 + 0x10);
                  *puVar1 = uVar25;
                  puVar1[1] = uVar6;
                  *(undefined8 *)((long)pvVar27 + uVar33) = uVar7;
                  ((undefined8 *)((long)pvVar27 + uVar33))[1] = uVar8;
                  *(code **)((long)pvVar27 + uVar33 + 0x58) = pcVar28;
                  uVar33 = uVar33 + 0x68;
                  pcVar28 = pcVar28 + 0x78;
                } while (local_620 != uVar33);
                lVar23 = local_590 + 1;
                local_560 = (uint)lVar23;
                plVar24 = operator_new__(local_590 * 0x70 + 0x78,(nothrow_t *)PTR_nothrow_10082c970)
                ;
                if (plVar24 == (long *)0x0) {
                  local_568 = (long *)0x0;
                  uVar25 = FUN_1001cc310();
                  uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                  cVar16 = _os_log_type_enabled(uVar25,0x10);
                  if (cVar16 != '\0') {
                    local_498 = 0x8220202;
                    uStack_494 = 0x7a0a90;
                    local_490 = 1;
                    uStack_48c = 0x822;
                    uStack_48a = 0x7ddf;
                    uStack_488 = 0x7b;
                    uStack_486 = 1;
                    __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: (%{public}s)",
                                        &local_498,0x16);
                  }
                  goto LAB_10029d4e7;
                }
                *plVar24 = lVar23;
                local_568 = plVar24 + 1;
                plVar36 = local_568;
                do {
                  plVar36[2] = 0;
                  plVar36[3] = 0;
                  *plVar36 = 0;
                  plVar36[1] = 0;
                  plVar36[4] = 0;
                  *(undefined4 *)(plVar36 + 5) = 0x6f707470;
                  plVar36[6] = 0;
                  plVar36[7] = 0;
                  *(undefined8 *)((long)plVar36 + 0x3c) = 0;
                  *(undefined8 *)((long)plVar36 + 0x44) = 0;
                  plVar36[10] = 0;
                  plVar36[0xb] = 0;
                  plVar36[0xc] = 0;
                  plVar36[0xd] = 0;
                  plVar36 = plVar36 + 0xe;
                } while (plVar36 != plVar24 + lVar23 * 0xe + 1);
                uVar19 = FUN_100239ad2(pvVar27,param_3,0,plVar24 + 3);
                uVar33 = (ulong)uVar19;
                if (uVar19 != 0) {
                  if (uVar19 != 0xffffff80) {
                    uVar25 = FUN_1001cc310();
                    uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                    lVar23 = local_508;
                    cVar16 = _os_log_type_enabled(uVar25,0x10);
                    if (cVar16 != '\0') {
                      local_498 = 0x8220202;
                      uStack_494 = 0x7a0a90;
                      local_490 = 1;
                      uStack_48c = 0x400;
                      uStack_48a = (undefined2)uVar19;
                      uStack_488 = (undefined2)(uVar19 >> 0x10);
                      __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: err == (%d)",
                                          &local_498,0x12);
                    }
                    (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                    local_510 = (uint *)0x0;
                    lVar37 = 0;
                    local_528 = (uint *)0x0;
                    goto LAB_10029cca6;
                  }
                  goto LAB_10029c610;
                }
                lVar23 = FUN_1002a01a3(local_568[2]);
                local_568[3] = lVar23;
                if (lVar23 == 0) {
                  uVar25 = FUN_1001cc310();
                  uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                  cVar16 = _os_log_type_enabled(uVar25,0x10);
                  param_3 = local_4fc;
                  if (cVar16 != '\0') {
                    pcVar30 = 
                    "imageConvertContextListAndFreeIndex.contextList[0].thumbnailAppendBuffer != nullptr"
                    ;
LAB_10029da8d:
                    uStack_48c = 0x822;
                    local_490 = 1;
                    uStack_494 = 0x7a0a90;
                    local_498 = 0x8220202;
                    uStack_48a = SUB82(pcVar30,0);
                    uStack_488 = (undefined2)((ulong)pcVar30 >> 0x10);
                    uStack_486 = (undefined4)((ulong)pcVar30 >> 0x20);
                    __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: (%{public}s)",
                                        &local_498,0x16);
                    param_3 = local_4fc;
                  }
LAB_10029d4e7:
                  (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                  FUN_1001782e9(0,0);
                  uVar33 = 0xffffff94;
                  goto LAB_10029c610;
                }
                local_55c = 1;
                puVar29 = operator_new(0xb0,(nothrow_t *)PTR_nothrow_10082c970);
                if (puVar29 == (uint *)0x0) {
                  uVar25 = FUN_1001cc310();
                  uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                  cVar16 = _os_log_type_enabled(uVar25,0x10);
                  param_3 = local_4fc;
                  if (cVar16 != '\0') {
                    pcVar30 = "imageReadContext != nullptr";
                    goto LAB_10029da8d;
                  }
                  goto LAB_10029d4e7;
                }
                puVar29[2] = 0;
                puVar29[4] = 0;
                puVar29[6] = 0;
                puVar29[7] = 0;
                puVar29[8] = 0;
                puVar29[9] = 0;
                puVar29[10] = 0;
                puVar29[0xb] = 0;
                puVar29[0xc] = 0;
                puVar29[0xd] = 0;
                puVar29[0xe] = 0;
                puVar29[0xf] = 0;
                puVar29[0x10] = 0;
                puVar29[0x11] = 0;
                puVar29[0x12] = 0;
                puVar29[0x13] = 0;
                puVar29[0x14] = 0;
                puVar29[0x15] = 0;
                puVar29[0x16] = 0;
                puVar29[0x17] = 0;
                puVar29[0x18] = 0;
                puVar29[0x19] = 0;
                puVar29[0x1a] = 0;
                puVar29[0x1b] = 0;
                puVar29[0x1c] = 0;
                puVar29[0x1d] = 0;
                puVar29[0x1e] = 0;
                puVar29[0x1f] = 0;
                puVar29[0x20] = 0;
                puVar29[0x21] = 0;
                puVar29[0x22] = 0;
                puVar29[0x23] = 0;
                puVar29[0x24] = 0;
                *(undefined1 *)(puVar29 + 0x25) = 0;
                *(long *)puVar29 = local_588;
                local_528 = puVar29;
                uVar19 = FUN_1001e82fe(puVar29 + 2,local_590,0x7fffffff);
                local_5a0 = uVar38;
                local_520 = pvVar27;
                if (uVar19 != 0) {
                  if (uVar19 != 0xffffff80) {
                    uVar25 = FUN_1001cc310();
                    uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                    cVar16 = _os_log_type_enabled(uVar25,0x10);
                    if (cVar16 != '\0') {
                      local_498 = 0x8220202;
                      uStack_494 = 0x7a0a90;
                      local_490 = 1;
                      uStack_48c = 0x400;
                      uStack_48a = (undefined2)uVar19;
                      uStack_488 = (undefined2)(uVar19 >> 0x10);
                      __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: err == (%d)",
                                          &local_498,0x12);
                    }
                    (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                    goto LAB_10029d804;
                  }
                  lVar37 = 0;
                  uVar19 = 0xffffff80;
LAB_10029d3f4:
                  uVar33 = (ulong)uVar19;
                  local_510 = (uint *)0x0;
                  pvVar27 = local_520;
                  lVar23 = local_508;
                  param_3 = local_4fc;
                  goto LAB_10029ccb1;
                }
                *(char *)(local_528 + 0x28) = (char)local_540;
                *(undefined1 **)(local_528 + 0x2a) = &local_513;
                if ((ulong)local_560 != 0) {
                  lVar23 = 0;
                  do {
                    *(void **)((long)local_568 + lVar23) = pvVar27;
                    *(uint *)((long)local_568 + lVar23 + 8) = local_4fc;
                    *(undefined4 *)((long)local_568 + lVar23 + 0xc) = local_510._0_4_;
                    *(undefined8 *)((long)local_568 + lVar23 + 0x20) = local_5c0;
                    *(undefined4 *)((long)local_568 + lVar23 + 0x28) = local_56c;
                    *(long *)((long)local_568 + lVar23 + 0x30) = local_588;
                    *(uint *)((long)local_568 + lVar23 + 0x38) = uVar20;
                    *(int *)((long)local_568 + lVar23 + 0x3c) = local_598;
                    *(uint **)((long)local_568 + lVar23 + 0x40) = puVar29 + 2;
                    *(int *)((long)local_568 + lVar23 + 0x48) = (int)local_590;
                    *(int **)((long)local_568 + lVar23 + 0x50) = &local_5b4;
                    *(uint **)((long)local_568 + lVar23 + 0x58) = &local_5b0;
                    *(undefined1 **)((long)local_568 + lVar23 + 0x60) = &local_513;
                    *(char **)((long)local_568 + lVar23 + 0x68) = &local_512;
                    lVar23 = lVar23 + 0x70;
                  } while ((ulong)local_560 * 0x70 - lVar23 != 0);
                }
                uVar33 = (ulong)*(uint *)(local_568[2] + 0x84);
                if (uVar33 == 0) {
                  iVar18 = 0;
                }
                else {
                  lVar23 = 0;
                  iVar18 = 0;
                  do {
                    iVar21 = *(int *)(local_568[2] + 0xdc + lVar23);
                    iVar18 = iVar18 + (uint)(iVar21 == 0x706e6720 || iVar21 == 0x6a706567);
                    lVar23 = lVar23 + 0xe0;
                  } while (uVar33 * 0xe0 - lVar23 != 0);
                }
                ppvVar41 = &local_5f0;
                uVar19 = FUN_1002a034f(local_530,local_4fc,iVar18,&local_5c8,&local_600,&local_5f8,
                                       ppvVar41);
                if (uVar19 != 0) {
                  uVar25 = FUN_1001cc310();
                  uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                  cVar16 = _os_log_type_enabled(uVar25,0x10);
                  if (cVar16 != '\0') {
                    local_498 = 0x8220202;
                    uStack_494 = 0x7a0a90;
                    local_490 = 1;
                    uStack_48c = 0x400;
                    uStack_48a = (undefined2)uVar19;
                    uStack_488 = (undefined2)(uVar19 >> 0x10);
                    __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: err == (%d)",&local_498
                                        ,0x12);
                  }
                  (*(code *)PTR__objc_release_10082c7b0)(uVar25);
LAB_10029d804:
                  local_510 = (uint *)0x0;
                  lVar37 = 0;
                  pvVar27 = local_520;
                  lVar23 = local_508;
                  param_3 = local_4fc;
                  goto LAB_10029cca6;
                }
                uVar33 = local_530 & 0xffffffff;
                pvVar27 = operator_new__(uVar33 * 0x60 + 0x10,(nothrow_t *)PTR_nothrow_10082c970);
                if (pvVar27 == (void *)0x0) {
                  uVar25 = FUN_1001cc310();
                  uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                  cVar16 = _os_log_type_enabled(uVar25,0x10);
                  if (cVar16 != '\0') {
                    local_498 = 0x8220202;
                    uStack_494 = 0x7a0a90;
                    local_490 = 1;
                    uStack_48c = 0x822;
                    uStack_48a = 0x7e8a;
                    uStack_488 = 0x7b;
                    uStack_486 = 1;
                    __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: (%{public}s)",
                                        &local_498,0x16);
                  }
                  (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                  param_3 = local_4fc;
                  pvVar27 = local_520;
                  FUN_1001782e9(0,0);
                  uVar33 = 0xffffff94;
                  goto LAB_10029c61b;
                }
                *(ulong *)((long)pvVar27 + 8) = uVar33;
                lVar37 = (long)pvVar27 + 0x10;
                lVar23 = 0;
                do {
                  *(undefined8 *)((long)pvVar27 + lVar23 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar27 + lVar23 + 0x10) = 0;
                  puVar1 = (undefined8 *)((long)pvVar27 + lVar23 + 0x50);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  *(undefined8 *)((long)pvVar27 + lVar23 + 0x60) = 0;
                  lVar23 = lVar23 + 0x60;
                } while (uVar33 * 0x60 != lVar23);
                local_498 = 0xfffffffe;
                uStack_494 = (undefined4)local_590;
                uStack_48c = 0;
                uStack_48a = 0;
                uStack_488 = 0x1b00;
                uStack_486 = 0x1007a;
                uStack_482 = 0;
                local_480 = 0;
                local_478 = FUN_1002a0736;
                local_470 = local_528;
                local_468 = (long *)0x0;
                uStack_460 = 0;
                local_4d8 = (undefined **)CONCAT44(uStack_494,0xfffffffe);
                local_4d0 = (code *)(local_590 & 0xffffffff);
                local_4c8 = "";
                local_4c0 = 0;
                local_4b8 = FUN_1002a0741;
                local_4b0 = &local_568;
                local_4a8 = FUN_1002a0995;
                local_4a0 = 0;
                local_490 = uStack_494;
                uVar19 = FUN_1001ec886(&local_498,&local_5a8);
                if (uVar19 == 0xffffff80) {
LAB_10029dc1e:
                  local_510 = (uint *)0x0;
                  pvVar27 = local_520;
                  lVar23 = local_508;
                  param_3 = local_4fc;
                  goto LAB_10029cca6;
                }
                if (uVar19 != 0) {
                  uVar25 = FUN_1001cc310();
                  uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                  cVar16 = _os_log_type_enabled(uVar25,0x10);
                  if (cVar16 != '\0') {
                    local_4f8 = 0x8220202;
                    uStack_4f4 = 0x7a0a90;
                    uStack_4f0 = 1;
                    local_4ec = 0x400;
                    local_4ea = uVar19;
                    __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: err == (%d)",&local_4f8
                                        ,0x12);
                  }
                  (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                  goto LAB_10029dc1e;
                }
                uVar19 = FUN_1001ec886(&local_4d8,&local_5e8);
                if (uVar19 == 0xffffff80) {
LAB_10029dbca:
                  uVar20 = FUN_1001eca8b(local_5a8,0);
                  if ((uVar20 != 0xffffff80) && (uVar20 != 0)) {
                    uVar25 = FUN_1001cc310();
                    uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                    cVar16 = _os_log_type_enabled(uVar25,0x10);
                    if (cVar16 != '\0') {
                      local_4f8 = 0x8220202;
                      uStack_4f4 = 0x7a0a90;
                      uStack_4f0 = 1;
                      local_4ec = 0x400;
                      local_4ea = uVar20;
                      __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: err == (%d)",
                                          &local_4f8,0x12);
                    }
                    (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                  }
                  local_5a8 = 0;
                  goto LAB_10029dc1e;
                }
                if (uVar19 != 0) {
                  uVar25 = FUN_1001cc310();
                  uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                  cVar16 = _os_log_type_enabled(uVar25,0x10);
                  if (cVar16 != '\0') {
                    local_4f8 = 0x8220202;
                    uStack_4f4 = 0x7a0a90;
                    uStack_4f0 = 1;
                    local_4ec = 0x400;
                    local_4ea = uVar19;
                    __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: err == (%d)",&local_4f8
                                        ,0x12);
                  }
                  (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                  goto LAB_10029dbca;
                }
                *(long *)(local_528 + 0x26) = local_5e8;
                if ((local_540 == 0) && (uVar19 = FUN_1002a09bb(&local_458,&local_5e0), uVar19 != 0)
                   ) {
                  if (uVar19 != 0xffffff80) {
                    uVar25 = FUN_1001cc310();
                    uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                    cVar16 = _os_log_type_enabled(uVar25,0x10);
                    if (cVar16 != '\0') {
                      local_498 = 0x8220202;
                      uStack_494 = 0x7a0a90;
                      local_490 = 1;
                      uStack_48c = 0x400;
                      uStack_48a = (undefined2)uVar19;
                      uStack_488 = (undefined2)(uVar19 >> 0x10);
                      __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: err == (%d)",
                                          &local_498,0x12);
                    }
                    (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                    local_510 = (uint *)0x0;
                    pvVar27 = local_520;
                    lVar23 = local_508;
                    param_3 = local_4fc;
                    goto LAB_10029cca6;
                  }
                  goto LAB_10029d3f4;
                }
                if (param_7 != (long *)0x0) {
                  (**(code **)*param_7)();
                }
                if (local_588 == 0) {
                  uVar19 = FUN_1001ceb24(local_5c0,local_56c,1,local_5a0 & 0xffffffff,0);
                  if (uVar19 != 0xffffff80) {
                    if (uVar19 == 0) goto LAB_10029dc61;
                    if (uVar19 != 0x2349) {
                      uVar25 = FUN_1001cc310();
                      uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                      cVar16 = _os_log_type_enabled(uVar25,0x10);
                      if (cVar16 != '\0') {
                        local_498 = 0x8220202;
                        uStack_494 = 0x7a0a90;
                        local_490 = 1;
                        uStack_48c = 0x400;
                        uStack_48a = (undefined2)uVar19;
                        uStack_488 = (undefined2)(uVar19 >> 0x10);
                        __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: err == (%d)",
                                            &local_498,0x12);
                      }
                      (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                      if (uVar19 == 0) goto LAB_10029dc61;
                    }
                  }
                  goto LAB_10029dc1e;
                }
LAB_10029dc61:
                puVar29 = (uint *)FUN_1004981dc(local_508);
                local_510 = puVar29;
                if (puVar29 != (uint *)0x0) {
                  if (local_540 == 0) {
                    FUN_1002a0c03(puVar29);
                  }
                  pvVar14 = local_5e0;
                  pvVar13 = local_5f0;
                  pvVar12 = local_5f8;
                  pvVar27 = local_600;
                  uVar19 = *puVar29;
                  if (uVar19 == 0) {
                    local_53c = 0;
                  }
                  else {
                    puVar29 = local_510 + 2;
                    local_618 = local_5c8;
                    local_604 = local_598;
                    local_5a0 = (ulong)(uint)((int)local_5a0 + local_598);
                    local_53c = 0;
                    local_5d8 = puVar29;
                    do {
                      lVar23 = *(long *)local_5d8;
                      if ((*(int *)(lVar23 + 0xa0) != 0) && (*(char *)(lVar23 + 0xd4) == '\0')) {
                        cVar16 = FUN_10029b39e(lVar23);
                        bVar2 = *(byte *)(lVar23 + 0x80);
                        if ((cVar16 != '\0') ||
                           ((5 < bVar2 ||
                            (local_511 = (char)local_540, (0x2eU >> (bVar2 & 0x1f) & 1) == 0)))) {
                          local_511 = '\x01';
                        }
                        if (bVar2 == 2) {
                          FUN_1005931e8(lVar23);
                        }
                        local_542 = 0;
                        local_541 = 0;
                        local_4d8 = (undefined **)0x0;
                        lVar26 = FUN_1004968c5(lVar23);
                        if (lVar26 != 0) {
                          do {
                            lVar31 = FUN_100496985(lVar26);
                            if (*(int *)(lVar26 + 0x10) == 4) {
                              cVar16 = FUN_1002a0ccc(lVar26,&local_541);
LAB_10029ddf5:
                              if (cVar16 == '\0') goto LAB_10029ddfd;
                            }
                            else {
                              if (*(int *)(lVar26 + 0x10) == 1) {
                                cVar16 = FUN_1002a0ccc(lVar26,&local_542);
                                goto LAB_10029ddf5;
                              }
LAB_10029ddfd:
                              FUN_1001c62d9(&local_4f8,6);
                              uVar42 = (undefined4)((ulong)ppvVar41 >> 0x20);
                              if ((local_511 == '\0') || (*(int *)(lVar26 + 0x480) == 0)) {
                                iVar21 = *(int *)(lVar26 + 0x10);
                                if (iVar21 == 5) {
                                  if ((*(byte *)(lVar23 + 0xb3) & 2) == 0) goto LAB_10029dfa2;
                                  cVar16 = FUN_10029b49d(lVar26,local_550,local_4fc,&local_4f8);
                                  uVar42 = (undefined4)((ulong)ppvVar41 >> 0x20);
                                  iVar21 = *(int *)(lVar26 + 0x10);
                                  if (cVar16 != '\0') goto LAB_10029de84;
                                }
                                uVar42 = (undefined4)((ulong)ppvVar41 >> 0x20);
                                if (((iVar21 != 4) && (iVar21 != 1)) ||
                                   (((*(byte *)(lVar23 + 0xb3) & 1) == 0 &&
                                    (*(char *)(lVar23 + 0x80) != '\x05')))) goto LAB_10029dfa2;
                              }
                              else {
                                iVar21 = *(int *)(lVar26 + 0x10);
                              }
LAB_10029de84:
                              if (((iVar21 == 4) || (iVar21 == 1)) &&
                                 ((*(byte *)(lVar23 + 0xb3) & 1) != 0)) {
                                FUN_10029af6b(lVar23,local_550,local_4fc,&local_4f8);
                              }
                              if ((uint)local_530 <= local_53c) {
                                uVar19 = 0;
                                local_53c = (uint)local_530;
                                goto LAB_10029e300;
                              }
                              ppvVar41 = (void **)CONCAT44(uVar42,local_4fc);
                              iVar21 = FUN_1002a0d19(lVar23,lVar26,local_618,local_53c,local_511,
                                                     pvVar14,ppvVar41,iVar18,&local_4f8,pvVar27,
                                                     pvVar12,pvVar13,local_588);
                              if (iVar21 != -0x80) {
                                if (iVar21 != 0) {
                                  uVar25 = FUN_1001cc310();
                                  local_5d0 = _objc_retainAutoreleasedReturnValue(uVar25);
                                  cVar16 = _os_log_type_enabled(local_5d0,0x10);
                                  if (cVar16 != '\0') {
                                    local_498 = 0x8220202;
                                    uStack_494 = 0x7a0a90;
                                    local_490 = 1;
                                    uStack_48c = 0x400;
                                    uStack_48a = (undefined2)iVar21;
                                    uStack_488 = (undefined2)((uint)iVar21 >> 0x10);
                                    __os_log_error_impl(0x100000000,local_5d0,0x10,
                                                        "%{public}s: err == (%d)",&local_498,0x12);
                                  }
                                  (*(code *)PTR__objc_release_10082c7b0)(local_5d0);
                                  if (iVar21 != 0) goto LAB_10029dfa2;
                                }
                                FUN_1002a15f3(&local_4d8,(ulong)local_53c * 0xd38 + local_618);
                                local_53c = local_53c + 1;
                              }
                            }
LAB_10029dfa2:
                            ppuVar15 = local_4d8;
                            lVar26 = lVar31;
                          } while (lVar31 != 0);
                          if (local_4d8 != (undefined **)0x0) {
                            if (local_588 != 0) {
                              FUN_1002a177d(lVar23,local_550,local_4fc,local_4d8 + 0x19c,0);
                            }
                            FUN_1002a1b83(ppuVar15,lVar37,&local_60c,&local_512);
                          }
                        }
                        uVar19 = FUN_1001ceb24(local_5c0,local_56c,local_5b4 + local_604,local_5a0);
                        if (uVar19 != 0) {
                          if ((uVar19 == 0xffffff80) || (uVar19 == 0x2349)) goto LAB_10029e300;
                          uVar25 = FUN_1001cc310();
                          uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                          cVar16 = _os_log_type_enabled(uVar25,0x10);
                          if (cVar16 != '\0') {
                            local_498 = 0x8220202;
                            uStack_494 = 0x7a0a90;
                            local_490 = 1;
                            uStack_48c = 0x400;
                            uStack_48a = (undefined2)uVar19;
                            uStack_488 = (undefined2)(uVar19 >> 0x10);
                            __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: err == (%d)",
                                                &local_498,0x12);
                          }
                          (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                          if (uVar19 != 0) goto LAB_10029e300;
                        }
                        uVar19 = *local_510;
                      }
                      local_5d8 = local_5d8 + 2;
                    } while (local_5d8 < puVar29 + (ulong)uVar19 * 2);
                  }
                  uVar19 = 0;
LAB_10029e300:
                  uVar25 = local_5a8;
                  uVar17 = FUN_1001ee056();
                  iVar18 = FUN_1001eca8b(uVar25,uVar17);
                  if ((iVar18 != -0x80) && (iVar18 != 0)) {
                    uVar25 = FUN_1001cc310();
                    uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                    cVar16 = _os_log_type_enabled(uVar25,0x10);
                    if (cVar16 != '\0') {
                      local_498 = 0x8220202;
                      uStack_494 = 0x7a0a90;
                      local_490 = 1;
                      uStack_48c = 0x400;
                      uStack_48a = (undefined2)iVar18;
                      uStack_488 = (undefined2)((uint)iVar18 >> 0x10);
                      __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: err == (%d)",
                                          &local_498,0x12);
                    }
                    (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                  }
                  lVar23 = local_5e8;
                  uVar17 = FUN_1001ee056();
                  iVar18 = FUN_1001eca8b(lVar23,uVar17);
                  if ((iVar18 != -0x80) && (iVar18 != 0)) {
                    uVar25 = FUN_1001cc310();
                    uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                    cVar16 = _os_log_type_enabled(uVar25,0x10);
                    if (cVar16 != '\0') {
                      local_498 = 0x8220202;
                      uStack_494 = 0x7a0a90;
                      local_490 = 1;
                      uStack_48c = 0x400;
                      uStack_48a = (undefined2)iVar18;
                      uStack_488 = (undefined2)((uint)iVar18 >> 0x10);
                      __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: err == (%d)",
                                          &local_498,0x12);
                    }
                    (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                  }
                  lVar26 = local_5c8;
                  iVar18 = FUN_1002a1bf9(local_508,local_5c8,local_53c,local_568[2],local_550,
                                         &local_458);
                  if ((iVar18 != -0x80) && (iVar18 != 0)) {
                    uVar25 = FUN_1001cc310();
                    uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                    cVar16 = _os_log_type_enabled(uVar25,0x10);
                    if (cVar16 != '\0') {
                      local_498 = 0x8220202;
                      uStack_494 = 0x7a0a90;
                      local_490 = 1;
                      uStack_48c = 0x400;
                      uStack_48a = (undefined2)iVar18;
                      uStack_488 = (undefined2)((uint)iVar18 >> 0x10);
                      __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: err == (%d)",
                                          &local_498,0x12);
                    }
                    (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                  }
                  if ((char)local_5ac == '\0') {
                    FUN_1002a1dba(local_508);
                  }
                  if (uVar19 == 0) {
                    uVar19 = local_5b0;
                  }
                  FUN_1002a1ed6(local_508,local_568[2],local_550);
                  pvVar27 = local_520;
                  lVar23 = local_508;
                  param_3 = local_4fc;
                  if (uVar19 != 0) goto LAB_10029cca6;
                  uVar33 = 0;
                  if ((param_7 == (long *)0x0) || (local_512 == '\0')) goto LAB_10029ccb1;
                  FUN_10023955c(local_568[2]);
                  local_568[2] = 0;
                  local_498 = (undefined4)local_508;
                  uStack_494 = (undefined4)((ulong)local_508 >> 0x20);
                  local_490 = SUB84(local_568,0);
                  uStack_48c = (undefined2)((ulong)local_568 >> 0x20);
                  uStack_48a = (undefined2)((ulong)local_568 >> 0x30);
                  uStack_488 = (undefined2)lVar26;
                  uStack_486 = (undefined4)((ulong)lVar26 >> 0x10);
                  uStack_482 = (undefined2)((ulong)lVar26 >> 0x30);
                  local_480 = (undefined4)local_530;
                  local_478 = local_550;
                  local_470 = &local_458;
                  local_468 = param_7;
                  local_4d8 = &PTR_FUN_100845750;
                  local_4d0 = FUN_1002a20b2;
                  local_4c8 = (char *)&local_498;
                  local_4b8 = (code *)&local_4d8;
                  (**(code **)(*param_7 + 8))();
                  if (local_4b8 == (code *)&local_4d8) {
                    lVar23 = 0x20;
LAB_10029e5f9:
                    (**(code **)(*(long *)local_4b8 + lVar23))();
                  }
                  else {
                    lVar23 = 0x28;
                    if (local_4b8 != (code *)0x0) goto LAB_10029e5f9;
                  }
                  uVar19 = (**(code **)(*param_7 + 0x20))();
                  pvVar27 = local_520;
                  lVar23 = local_508;
                  param_3 = local_4fc;
                  if ((uVar19 != 0xffffff80) && (uVar19 != 0)) {
                    uVar25 = FUN_1001cc310();
                    uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                    cVar16 = _os_log_type_enabled(uVar25,0x10);
                    if (cVar16 != '\0') {
                      local_4f8 = 0x8220202;
                      uStack_4f4 = 0x7a0a90;
                      uStack_4f0 = 1;
                      local_4ec = 0x400;
                      local_4ea = uVar19;
                      __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: err == (%d)",
                                          &local_4f8,0x12);
                    }
                    (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                    pvVar27 = local_520;
                    lVar23 = local_508;
                    param_3 = local_4fc;
                  }
                  goto LAB_10029cca6;
                }
                uVar25 = FUN_1001cc310();
                uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
                cVar16 = _os_log_type_enabled(uVar25,0x10);
                if (cVar16 != '\0') {
                  local_498 = 0x8220202;
                  uStack_494 = 0x7a0a90;
                  local_490 = 1;
                  uStack_48c = 0x822;
                  uStack_48a = 0x7ea3;
                  uStack_488 = 0x7b;
                  uStack_486 = 1;
                  __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: (%{public}s)",&local_498,
                                      0x16);
                }
                (*(code *)PTR__objc_release_10082c7b0)(uVar25);
                param_3 = local_4fc;
                pvVar27 = local_520;
                FUN_1001782e9(0,0);
                uVar33 = 0xffffff94;
                goto LAB_10029c61e;
              }
LAB_10029cc9d:
              local_510 = (uint *)0x0;
              local_528 = (uint *)0x0;
              lVar37 = 0;
              uVar19 = 0;
              pvVar27 = (void *)0x0;
              lVar23 = local_508;
LAB_10029cca6:
              uVar33 = (ulong)uVar19;
              if (uVar19 == 0xffffffde) {
                uVar33 = 0x456;
              }
            }
LAB_10029ccb1:
            puVar29 = local_510;
            if (param_8 != (undefined4 *)0x0) {
              *param_8 = (int)local_530;
            }
            iVar18 = (int)uVar33;
            if (iVar18 == 0) {
              *(short *)(lVar23 + 0x13c8) = (short)local_57c;
            }
            if (local_568 != (long *)0x0) {
              FUN_10023955c(local_568[2]);
              local_568[2] = 0;
            }
            if (puVar29 != (uint *)0x0) {
              FUN_1001c64c1(puVar29);
            }
            local_520 = pvVar27;
            if (local_5e0 != (void *)0x0) {
              operator_delete__(local_5e0);
            }
            if (lVar37 != 0) {
              lVar23 = *(long *)(lVar37 + -8);
              if (lVar23 != 0) {
                plVar24 = (long *)(lVar37 + lVar23 * 0x60 + -0x50);
                lVar23 = lVar23 * -0x60;
                do {
                  plVar36 = (long *)plVar24[4];
                  if (plVar24 == plVar36) {
                    lVar26 = 0x20;
LAB_10029cd69:
                    (**(code **)(*plVar36 + lVar26))();
                  }
                  else {
                    lVar26 = 0x28;
                    if (plVar36 != (long *)0x0) goto LAB_10029cd69;
                  }
                  plVar24 = plVar24 + -0xc;
                  lVar23 = lVar23 + 0x60;
                } while (lVar23 != 0);
              }
              operator_delete__((void *)(lVar37 + -0x10));
              param_3 = local_4fc;
            }
            if (local_5f0 != (void *)0x0) {
              operator_delete__(local_5f0);
            }
            if (local_5f8 != (void *)0x0) {
              operator_delete__(local_5f8);
            }
            if (local_600 != (void *)0x0) {
              operator_delete__(local_600);
            }
            lVar23 = local_5c8;
            if (local_5c8 != 0) {
              if (*(long *)(local_5c8 + -8) != 0) {
                lVar26 = *(long *)(local_5c8 + -8) * 0xd38;
                lVar37 = local_5c8 + -0xd38;
                do {
                  FUN_10029b718(lVar37 + lVar26);
                  lVar26 = lVar26 + -0xd38;
                } while (lVar26 != 0);
              }
              FUN_1001c64c1(lVar23 + -8);
              param_3 = local_4fc;
            }
            puVar29 = local_528;
            if (local_528 != (uint *)0x0) {
              FUN_1001e8470(local_528 + 2);
              operator_delete(puVar29);
            }
            if (local_520 != (void *)0x0) {
              operator_delete__(local_520);
            }
            FUN_1001cc23c(local_630);
            FUN_1001cc4fc(0);
            FUN_10029b756(local_568);
            if (((iVar18 != -0x80) && (iVar18 != -0x6c)) && (iVar18 != 0)) {
              uVar25 = FUN_1001cc310();
              uVar25 = _objc_retainAutoreleasedReturnValue(uVar25);
              cVar16 = _os_log_type_enabled(uVar25,0x10);
              if (cVar16 != '\0') {
                local_458 = 0x8220202;
                local_454 = "Assertion failure";
                local_44c = 0x400;
                local_44a = (char *)CONCAT44(local_44a._4_4_,iVar18);
                __os_log_error_impl(0x100000000,uVar25,0x10,"%{public}s: err == (%d)",&local_458,
                                    0x12);
              }
              (*(code *)PTR__objc_release_10082c7b0)(uVar25);
            }
            FUN_100171552(local_538,&cf_attemptedNumProcessors);
            FUN_1001cdefe(&cf_iPodPhotoCacheHistory,local_578,0);
            if (((int)local_590 < 2) || (iVar18 != -0x6c)) goto LAB_10029e8a6;
            local_590 = local_590 - 1;
            FUN_1001689a5(local_538,&cf_reducedNumProcessors,local_590,1);
            FUN_1001cdefe(&cf_iPodPhotoCacheHistory,local_578,0);
          } while( true );
        }
      }
      uVar22 = FUN_1001cc310();
      uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
      cVar16 = _os_log_type_enabled(uVar22,0x10);
      if (cVar16 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x822;
        local_44a = "deviceHistoryDictionary != nullptr";
        __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar22);
      uVar33 = 0xffffff94;
      FUN_1001782e9(0,0);
      goto LAB_10029bad7;
    }
    uVar22 = FUN_1001cc310();
    uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
    cVar16 = _os_log_type_enabled(uVar22,0x10);
    if (cVar16 != '\0') {
      local_44a = "JRIsCurrentThreadMainThread() == false";
      goto LAB_10029ba9b;
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar22);
  uVar33 = 0xffffffce;
  FUN_1001782e9(0,0);
LAB_10029bad7:
  FUN_1001988bc(&local_578);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar33;
LAB_10029e8a6:
  _objc_autoreleasePoolPop(uVar22);
  goto LAB_10029bad7;
}

