// name: FUN_10034c361
// address: 10034c361

void FUN_10034c361(undefined8 param_1,long param_2)

{
  short *psVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  bool bVar18;
  undefined2 local_1408;
  undefined2 uStack_1406;
  undefined4 uStack_1404;
  undefined4 uStack_1400;
  undefined2 local_13fc;
  char *local_13fa;
  undefined1 local_fb8 [1312];
  undefined4 local_a98;
  long local_a94;
  long *local_678;
  long local_670;
  long lStack_668;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x10034c379;
  lVar7 = FUN_100108310();
  lVar7 = -lVar7;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
LAB_10034c625:
    *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c62a;
    uVar8 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c63a;
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_1408 = 0x202;
      uStack_1406 = 0x822;
      uStack_1404 = 0x7a0a90;
      uStack_1400 = 1;
      local_13fc = 0x822;
      local_13fa = "DulcimerHandlerDataIsValid(handlerData)";
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10034ca50;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_1408,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c64b;
    FUN_1001782e9(0,0);
    goto LAB_10034f8cf;
  }
  if (*(int *)(param_2 + 8) != 0x64756c63) {
    *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c3a9;
    uVar8 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c3b9;
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_1408 = 0x202;
      uStack_1406 = 0x822;
      uStack_1404 = 0x7ab58c;
      uStack_1400 = 1;
      local_13fc = 0x822;
      local_13fa = "handlerData->magic == kDulcimerHandlerDataMagic";
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10034cab5;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_1408,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c3cd;
    cVar5 = FUN_1001782e9(0,1);
    if (cVar5 == '\0') goto LAB_10034c625;
  }
  *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c3e4;
  iVar6 = FUN_10034c280(param_2);
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    if (*(int *)(param_2 + 0x166d8) != 0) {
LAB_10034c413:
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c426;
      FUN_10034fc20();
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c440;
      FUN_10034fc20();
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c45a;
      FUN_10034fc20();
      uVar8 = *(undefined8 *)(param_2 + 0x16710);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c46d;
      lVar9 = FUN_10017076e(uVar8);
      if (lVar9 < 1) goto LAB_10034cb77;
      lVar9 = *(long *)(param_2 + 0x30);
      if (lVar9 == 0) {
LAB_10034c7af:
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c7b4;
        uVar8 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c7c4;
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 != '\0') {
          local_1408 = 0x202;
          uStack_1406 = 0x822;
          uStack_1404 = 0x7a0a90;
          uStack_1400 = 1;
          local_13fc = 0x822;
          local_13fa = "TrackDataIsValid(trackData)";
          *(undefined8 *)((long)&local_38 + lVar7) = 0x10034fa27;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_1408,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c7d5;
        FUN_1001782e9(0,0);
        uVar8 = 0;
      }
      else {
        if (*(int *)(lVar9 + 0x80) != 0x74646174) {
          *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c49c;
          uVar8 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c4ac;
          cVar5 = _os_log_type_enabled(uVar8,0x10);
          if (cVar5 != '\0') {
            local_1408 = 0x202;
            uStack_1406 = 0x822;
            uStack_1404 = 0x7ab58c;
            uStack_1400 = 1;
            local_13fc = 0x822;
            local_13fa = "trackData->magic == \'tdat\'";
            *(undefined8 *)((long)&local_38 + lVar7) = 0x10034fa78;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_1408,0x16);
          }
          *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c4c0;
          cVar5 = FUN_1001782e9(0,1);
          if (cVar5 == '\0') goto LAB_10034c7af;
        }
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c4d0;
        uVar8 = FUN_100309008(lVar9);
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c4df;
        uVar8 = FUN_10033b60c(&cf_update_db_info,uVar8);
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c501;
        uVar10 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                               PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c510;
        lVar11 = FUN_10048604a(lVar9);
        if (lVar11 != 0) {
          uVar12 = *(undefined8 *)(lVar11 + 0x60);
          *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c52e;
          FUN_100168746(uVar10,&cf_primary_container_pid,uVar12,0);
        }
        if (*(char *)(param_2 + 0x14df8) == '\0') {
          *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c55a;
          FUN_10016865a(uVar10,&cf_genius_cuid,lVar9 + 0x2740,0);
          *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c56b;
          uVar12 = FUN_1004e0c3f(param_2,1);
          *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c573;
          uVar12 = FUN_10034b114(uVar12);
          *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c58c;
          FUN_100171502(uVar10,&cf_genius_config,uVar12);
          *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c594;
          FUN_10017060f(uVar12);
        }
        local_678 = &local_670;
        local_670 = 0;
        lStack_668 = 0;
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c5b4;
        lVar11 = FUN_1002f9fc5(lVar9);
        while (lVar11 != 0) {
          *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c5d8;
          uVar13 = FUN_1002b1255(lVar11,0);
          if ((uVar13 & 0xff2fffff) != 0) {
            *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c5e7;
            uVar13 = FUN_1002b5390(lVar11);
            local_1408 = (undefined2)uVar13;
            uStack_1406 = (undefined2)(uVar13 >> 0x10);
            uStack_1404 = (undefined4)(uVar13 >> 0x20);
            if (1 < uVar13) {
              *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c5fc;
              iVar6 = FUN_1002b1325(lVar11);
              if ((iVar6 != 0x41412020) && (iVar6 != 0x41415820)) {
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c618;
                FUN_1002b7e7c(&local_678,&local_1408,&local_1408);
              }
            }
          }
          *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c620;
          lVar11 = FUN_1002fa118();
        }
        if (lStack_668 == 0) {
          uVar12 = 0;
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c7fe;
          lVar11 = FUN_1004e0c3f(0,1);
          if (lVar11 == 0) {
            *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c814;
            uVar12 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c824;
            cVar5 = _os_log_type_enabled(uVar12,0x10);
            if (cVar5 != '\0') {
              local_1408 = 0x202;
              uStack_1406 = 0x822;
              uStack_1404 = 0x7a0a90;
              uStack_1400 = 1;
              local_13fc = 0x822;
              local_13fa = "libraryTrackData != nullptr";
              *(undefined8 *)((long)&local_38 + lVar7) = 0x10034fb13;
              __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_1408,
                                  0x16);
            }
            *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c835;
            FUN_1001782e9(0,0);
          }
          *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c854;
          uVar12 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                 PTR__kCFTypeDictionaryValueCallBacks_10082e140);
          if (local_678 != &local_670) {
            plVar16 = local_678;
            do {
              lVar3 = plVar16[4];
              local_1408 = 0;
              *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c89f;
              FUN_10015095e(&local_a98);
              if (lVar3 == 0) {
LAB_10034c8d9:
                local_1408 = 0;
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c8ea;
                FUN_100150de8(&local_a98);
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c8fc;
                cVar5 = FUN_10031ec31(lVar11,lVar3,&local_1408);
                if (cVar5 != '\0') goto LAB_10034c916;
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c912;
                cVar5 = FUN_10031ec31(lVar9,lVar3,&local_1408);
                if (cVar5 != '\0') goto LAB_10034c916;
                if (DAT_1008c75c0 != -1) {
                  *(undefined8 *)((long)&local_38 + lVar7) = 0x10034ca02;
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar15 = DAT_1008c75b8;
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c9b1;
                cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar5 != '\0') {
                  local_a98 = 0x8000100;
                  *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c9ea;
                  local_a94 = lVar3;
                  __os_log_impl(0x100000000,uVar15,1,
                                "airtraffic> failed to find Apple ID for account %llu",&local_a98,
                                0xc);
                }
              }
              else {
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c8ac;
                lVar14 = FUN_100150dd2(&local_a98);
                if (lVar14 != lVar3) goto LAB_10034c8d9;
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c8bc;
                FUN_10015153c(local_fb8,&local_a98);
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c8c7;
                FUN_1001bb41a(local_fb8,&local_1408);
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c8cf;
                FUN_1001b7a50(local_fb8);
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c8d7;
                FUN_100150de8(&local_a98);
LAB_10034c916:
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c933;
                uVar15 = FUN_1001736b8(DAT_1008c4d90,0,&cf__llu,lVar3);
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c94a;
                FUN_100168550(uVar12,uVar15,&local_1408,0);
                *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c952;
                FUN_10017060f(uVar15);
              }
              plVar4 = (long *)plVar16[1];
              plVar17 = plVar16;
              if ((long *)plVar16[1] == (long *)0x0) {
                do {
                  plVar16 = (long *)plVar17[2];
                  bVar18 = (long *)*plVar16 != plVar17;
                  plVar17 = plVar16;
                } while (bVar18);
              }
              else {
                do {
                  plVar16 = plVar4;
                  plVar4 = (long *)*plVar16;
                } while ((long *)*plVar16 != (long *)0x0);
              }
            } while (plVar16 != &local_670);
          }
        }
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10034cad1;
        FUN_1002a41f4(&local_678,local_670);
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10034cae7;
        FUN_100171502(uVar10,&cf_apple_ids,uVar12);
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10034caef;
        FUN_10017060f(uVar12);
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10034cb05;
        FUN_100171502(uVar8,&cf_db_info,uVar10);
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10034cb11;
        FUN_10017060f(uVar10);
      }
      uVar10 = *(undefined8 *)(param_2 + 0x16710);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10034cb26;
      uVar10 = FUN_10016499b(uVar10,0);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10034cb35;
      uVar10 = FUN_100166c1b(uVar10,&cf_operation);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10034cb44;
      cVar5 = FUN_100170633(uVar10,&cf_update_db_info);
      uVar10 = *(undefined8 *)(param_2 + 0x16710);
      if (cVar5 == '\0') {
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10034cb6f;
        FUN_100170a16(uVar10,0,uVar8);
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10034cb63;
        FUN_100170b05(uVar10,0,uVar8);
      }
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10034cb77;
      FUN_10017060f(uVar8);
LAB_10034cb77:
                    /* WARNING: Could not recover jumptable at 0x00010034cbcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)&DAT_10034fc08 + (long)DAT_10034fc08))();
      return;
    }
    if ((*(byte *)(*(long *)(param_2 + 0x30) + 0x2be0) & 0x20) != 0) {
      if (DAT_1008c75c0 != -1) {
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10034fb2b;
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar8 = DAT_1008c75b8;
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c68b;
      cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar5 != '\0') {
        local_1408 = 0x102;
        uStack_1406 = 0x842;
        uStack_1404 = (undefined4)*(undefined8 *)(param_2 + 0x152c8);
        uStack_1400 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x152c8) >> 0x20);
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c6c9;
        __os_log_impl(0x100000000,uVar8,1,
                      "airtraffic> aborting asset transfer for device %{public}@",&local_1408,0xc);
      }
      uVar8 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c6d2;
      FUN_100407827(uVar8);
      bVar2 = *(byte *)(*(long *)(param_2 + 0x30) + 0x2be0);
      while ((bVar2 & 0x20) != 0) {
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c6fd;
        FUN_1001b0d8d((int)DAT_10070f2b8);
        bVar2 = *(byte *)(*(long *)(param_2 + 0x30) + 0x2be0);
      }
    }
    *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c72a;
    iVar6 = FUN_1003338b9((int)DAT_100744e18,param_2,iVar6,0,0,1);
    if (iVar6 != -0x80) {
      if (iVar6 == 0) goto LAB_10034c413;
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c74d;
      uVar8 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c75d;
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 != '\0') {
        local_1408 = 0x202;
        uStack_1406 = 0x822;
        uStack_1404 = 0x7a0a90;
        uStack_1400 = 1;
        local_13fc = 0x400;
        local_13fa = (char *)CONCAT44(local_13fa._4_4_,iVar6);
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10034c7aa;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_1408,0x12);
      }
    }
  }
  *(undefined8 *)((long)&local_38 + lVar7) = 0x10034f892;
  FUN_1004dd69c(param_2,"");
  if (*(long *)(param_2 + 0x30) != 0) {
    psVar1 = (short *)(*(long *)(param_2 + 0x30) + 0x27b0);
    *psVar1 = *psVar1 + -1;
  }
  *(int *)(param_2 + 0x167dc) = iVar6;
  *(undefined4 *)(param_2 + 0x167d8) = 0;
  if (*(int *)(param_2 + 0x16810) == 0) {
    *(undefined1 *)(param_2 + 0x16849) = 0;
  }
  *(undefined8 *)((long)&local_38 + lVar7) = 0x10034f8cf;
  FUN_10033035e();
LAB_10034f8cf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_38 + lVar7) = &UNK_10034fb65;
  ___stack_chk_fail();
}

