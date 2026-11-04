// name: FUN_10029f187
// address: 10029f187

int FUN_10029f187(undefined8 param_1,undefined4 *param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5,undefined4 *param_6)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined4 *puVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined4 local_1588 [2];
  undefined4 *local_1580;
  undefined4 *local_1578;
  undefined8 *local_1570;
  undefined8 local_1568;
  undefined8 uStack_1560;
  undefined8 local_1558;
  undefined4 local_1550;
  undefined4 local_154c;
  long local_1548;
  long *local_1540;
  ulong local_1538;
  int local_1530;
  char local_1529;
  undefined1 local_1528 [1056];
  undefined1 local_1108 [1056];
  undefined1 local_ce8 [1056];
  undefined8 *local_8c8;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined2 uStack_4a0;
  undefined2 uStack_49e;
  undefined2 local_49c;
  int local_49a;
  undefined4 uStack_496;
  undefined **local_88;
  int *local_80;
  long *local_78;
  char *local_70;
  undefined ***local_68;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x10029f19f;
  auVar22 = FUN_100108310();
  lVar6 = -auVar22._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar12 = auVar22._8_8_ & 0xffffffff;
  puVar20 = param_2;
  do {
    local_1580 = param_6;
    local_1558 = param_5;
    local_1540 = param_4;
    if (*(char *)(puVar20 + 3) != '\0') {
      *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f272;
      local_1578 = param_2;
      local_154c = auVar22._8_4_;
      lVar14 = FUN_100496019();
      if (lVar14 == 0) {
        local_1538 = 0;
        goto LAB_10029fde3;
      }
      local_1538 = 0;
      goto LAB_10029f289;
    }
    puVar20 = puVar20 + 0x1e;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f1e4;
  uVar13 = FUN_1001cc310();
  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f1ec;
  uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f1fc;
  cVar8 = _os_log_type_enabled(uVar13,0x10);
  if (cVar8 != '\0') {
    local_4a8 = 0x8220202;
    uStack_4a4 = 0x7a0a90;
    uStack_4a0 = 1;
    uStack_49e = 0;
    local_49c = 0x822;
    local_49a = 0x7b7ed1;
    uStack_496 = 1;
    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fedd;
    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_4a8,0x16);
  }
  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f20d;
  (*(code *)PTR__objc_release_10082c7b0)(uVar13);
  local_1538 = 0;
  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f221;
  FUN_1001782e9(0,0);
  iVar10 = -0x32;
  goto LAB_10029f227;
LAB_10029f289:
  do {
    if (((*(int *)(lVar14 + 0xa4) != 0) && (*(char *)(lVar14 + 0xd4) == '\0')) &&
       ((*(char *)(lVar14 + 0x80) == '\0' ||
        ((*(char *)(lVar14 + 0xb2) != '\0' || (*(char *)(lVar14 + 0xd7) == '\x01')))))) {
      if (*(char *)(lVar14 + 0xb0) == '\0') {
        local_1570 = &local_1568;
        local_1568 = 0;
        uStack_1560 = 0;
        if ((*(char *)(lVar14 + 0xb2) == '\0') && (*(char *)(lVar14 + 0xd7) != '\x01')) {
          uVar16 = *puVar20;
          *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f5be;
          lVar15 = FUN_1004993ef(lVar14,uVar16,0,1);
          if (lVar15 == 0) {
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f655;
            uVar13 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f65d;
            uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f66d;
            cVar8 = _os_log_type_enabled(uVar13,0x10);
            if (cVar8 != '\0') {
              local_4a8 = 0x8220202;
              uStack_4a4 = 0x7a0a90;
              uStack_4a0 = 1;
              uStack_49e = 0;
              local_49c = 0x822;
              local_49a = 0x7b7f3b;
              uStack_496 = 1;
              *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fbbe;
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_4a8,0x16
                                 );
            }
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f67e;
            (*(code *)PTR__objc_release_10082c7b0)(uVar13);
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f687;
            FUN_1001782e9(0,0);
            goto LAB_10029fa8a;
          }
          *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f5d8;
          iVar10 = FUN_10049980b(lVar15,&local_8c8,0);
          if (iVar10 == -0x80) {
LAB_10029f998:
            if (*(char *)(lVar14 + 0x80) == '\0') {
              *(undefined1 *)(lVar14 + 0x80) = 3;
            }
            *(byte *)(lVar14 + 0xb3) = *(byte *)(lVar14 + 0xb3) | 1;
            *(int *)(lVar14 + 0xa0) = *(int *)(lVar14 + 0xa0) + 1;
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f9bd;
            lVar15 = FUN_1004968c5(lVar14);
            while (lVar7 = lVar15, lVar7 != 0) {
              *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f9d1;
              lVar15 = FUN_100496985(lVar7);
              if (899 < *(uint *)(lVar7 + 0x10)) {
                *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f9e6;
                FUN_100497f5f(lVar7);
              }
            }
          }
          else {
            if (iVar10 != 0) {
              *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f96f;
              uVar13 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f977;
              uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
              *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f987;
              cVar8 = _os_log_type_enabled(uVar13,0x10);
              if (cVar8 != '\0') {
                local_4a8 = 0x8220202;
                uStack_4a4 = 0x7a0a90;
                uStack_4a0 = 1;
                uStack_49e = 0;
                local_49c = 0x400;
                *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fc13;
                local_49a = iVar10;
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_4a8,
                                    0x12);
              }
              *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f998;
              (*(code *)PTR__objc_release_10082c7b0)(uVar13);
              goto LAB_10029f998;
            }
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f60f;
            FUN_1002a177d(lVar14,local_1578,local_154c,&local_1570,1);
LAB_10029f82b:
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f83a;
            iVar10 = FUN_1002a2ec6(lVar14,local_1108);
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f851;
            lVar15 = FUN_1004993ef(lVar14,8,0,1);
            if (lVar15 == 0) {
              iVar11 = -0x2b;
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f867;
              iVar11 = FUN_10049980b(lVar15,local_1528,0);
              if ((iVar11 != -0x80) && (iVar11 != 0)) {
                *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f879;
                uVar13 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f881;
                uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
                *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f891;
                cVar8 = _os_log_type_enabled(uVar13,0x10);
                if (cVar8 != '\0') {
                  local_4a8 = 0x8220202;
                  uStack_4a4 = 0x7a0a90;
                  uStack_4a0 = 1;
                  uStack_49e = 0;
                  local_49c = 0x400;
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fcc4;
                  local_49a = iVar11;
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_4a8,
                                      0x12);
                }
                *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f8a2;
                (*(code *)PTR__objc_release_10082c7b0)(uVar13);
              }
            }
            bVar1 = *(byte *)(lVar14 + 0xb2);
            bVar2 = *(byte *)(lVar14 + 0xd7);
            puVar19 = (undefined1 *)0x0;
            if (((bVar2 | bVar1) & 1) != 0) {
              puVar19 = local_ce8;
            }
            puVar17 = (undefined1 *)0x0;
            if (iVar10 == 0) {
              puVar17 = local_1108;
            }
            uVar16 = *(undefined4 *)(lVar14 + 0x18);
            uVar13 = *(undefined8 *)(lVar14 + 0x28);
            uVar3 = *(undefined8 *)(lVar14 + 0x30);
            puVar18 = (undefined1 *)0x0;
            if (iVar11 == 0) {
              puVar18 = local_1528;
            }
            pcVar5 = *(code **)*local_1540;
            *(undefined8 ***)(&stack0xfffffffffffffff0 + lVar6) = &local_1570;
            *(undefined1 **)(&stack0xffffffffffffffe8 + lVar6) = puVar18;
            *(undefined1 **)(&stack0xffffffffffffffe0 + lVar6) = puVar17;
            *(uint *)(&stack0xffffffffffffffd8 + lVar6) = (uint)(bVar1 == 0 & bVar2);
            *(undefined1 **)(&stack0xffffffffffffffd0 + lVar6) = puVar19;
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f943;
            iVar10 = (*pcVar5)(local_1540,uVar16,uVar13,uVar3,0,&local_8c8);
            if (iVar10 != 0) {
              if (iVar10 != -0x80) {
                *(undefined8 *)((long)&local_38 + lVar6) = 0x10029feed;
                uVar13 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fef5;
                uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
                *(undefined8 *)((long)&local_38 + lVar6) = 0x10029ff05;
                cVar8 = _os_log_type_enabled(uVar13,0x10);
                if (cVar8 != '\0') {
                  local_4a8 = 0x8220202;
                  uStack_4a4 = 0x7a0a90;
                  uStack_4a0 = 1;
                  uStack_49e = 0;
                  local_49c = 0x400;
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1002a0004;
                  local_49a = iVar10;
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_4a8,
                                      0x12);
                }
                *(undefined8 *)((long)&local_38 + lVar6) = 0x10029ff16;
                (*(code *)PTR__objc_release_10082c7b0)(uVar13);
              }
              *(undefined8 *)((long)&local_38 + lVar6) = 0x10029ff26;
              FUN_1002a8ddc(&local_1570,local_1568);
              goto LAB_10029f227;
            }
            *(undefined1 *)(lVar14 + 0xd4) = 1;
            local_1538 = (ulong)((int)local_1538 + 1);
          }
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f455;
          FUN_1001c62d9(&local_8c8,0x420);
          *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f45d;
          cVar8 = FUN_10058f971(lVar14);
          if (cVar8 != '\0') {
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f478;
            cVar8 = __os_feature_enabled_impl("AMPLibrary","PhotoKitCloudDownload");
            if (cVar8 != '\0') {
              local_1529 = '\0';
              local_1548 = 0;
              uVar13 = *(undefined8 *)(lVar14 + 0x28);
              uVar3 = *(undefined8 *)(lVar14 + 0x30);
              *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f49f;
              uVar13 = FUN_100169885(uVar13,uVar3);
              local_4a8 = (undefined4)uVar13;
              uStack_4a4 = (undefined4)((ulong)uVar13 >> 0x20);
              pcVar5 = *(code **)(*local_1540 + 0x10);
              *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f4b6;
              sVar9 = (*pcVar5)();
              uVar16 = 0;
              if ((ushort)(sVar9 - 1U) < 3) {
                uVar16 = *(undefined4 *)(&DAT_1007402f4 + (ulong)(ushort)(sVar9 - 1U) * 4);
              }
              local_88 = &PTR_FUN_1008456c0;
              local_80 = &local_1530;
              local_78 = &local_1548;
              local_70 = &local_1529;
              *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f50c;
              local_68 = &local_88;
              iVar10 = FUN_1004a5a74(uVar13,uVar16,&local_88);
              if (local_68 == &local_88) {
                lVar15 = 0x20;
LAB_10029f691:
                pcVar5 = *(code **)((long)*local_68 + lVar15);
                *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f697;
                (*pcVar5)();
              }
              else {
                lVar15 = 0x28;
                if (local_68 != (undefined ***)0x0) goto LAB_10029f691;
              }
              *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f6a3;
              FUN_10016d588(&local_4a8);
              local_1530 = iVar10;
              if (iVar10 == 0) {
LAB_10029f7e8:
                *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f7fc;
                lVar15 = FUN_1004993ef(lVar14,9,0,1);
                if (lVar15 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f9f8;
                  uVar13 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fa00;
                  uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fa10;
                  cVar8 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar8 != '\0') {
                    local_4a8 = 0x8220202;
                    uStack_4a4 = 0x7a0a90;
                    uStack_4a0 = 1;
                    uStack_49e = 0;
                    local_49c = 0x822;
                    local_49a = 0x7b7efa;
                    uStack_496 = 1;
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fc6f;
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                        &local_4a8,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fa21;
                  (*(code *)PTR__objc_release_10082c7b0)(uVar13);
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fa2a;
                  FUN_1001782e9(0,0);
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f816;
                  iVar10 = FUN_10049980b(lVar15,local_ce8,0);
                  if (iVar10 != -0x80) {
                    if (iVar10 == 0) goto LAB_10029f82b;
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fa61;
                    uVar13 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fa69;
                    uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fa79;
                    cVar8 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar8 != '\0') {
                      local_4a8 = 0x8220202;
                      uStack_4a4 = 0x7a0a90;
                      uStack_4a0 = 1;
                      uStack_49e = 0;
                      local_49c = 0x400;
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fdbb;
                      local_49a = iVar10;
                      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                          &local_4a8,0x12);
                    }
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fa8a;
                    (*(code *)PTR__objc_release_10082c7b0)(uVar13);
                  }
                }
              }
              else {
                iVar10 = 0;
                while (local_1529 == '\0') {
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f6ca;
                  fVar21 = (float)FUN_1004a5d5a(local_1530);
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f6f2;
                  iVar10 = FUN_1001ceb24(local_1558,0x646c6376,(long)(int)(fVar21 * DAT_10070bcf0),
                                         100,0);
                  if (iVar10 != 0) {
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f704;
                    FUN_1004a5e43(local_1530);
                  }
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f711;
                  FUN_1001b0d8d((int)DAT_10070e568);
                }
                if (local_1548 != 0) {
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f731;
                  cVar8 = FUN_10016ffd2(local_1548,&local_4a8,0);
                  if (cVar8 == '\0') {
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f73a;
                    uVar13 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f742;
                    uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f752;
                    cVar8 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar8 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure (expected to be true)";
                      local_4c = 0x822;
                      local_4a = "JRCFURLGetJRFileSpec(fileURL, &videoFileSpec, nullptr)";
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fd66;
                      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f763;
                    (*(code *)PTR__objc_release_10082c7b0)(uVar13);
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f76c;
                    cVar8 = FUN_1001782e9(0,0);
                    if (cVar8 != '\0') goto LAB_10029f770;
                  }
                  else {
LAB_10029f770:
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f77f;
                    lVar15 = FUN_100499159(lVar14,9,0);
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f79b;
                    iVar10 = FUN_100182803(&local_4a8,0,&local_58,local_1588);
                    if (iVar10 == 0) {
                      *(undefined4 *)(lVar15 + 0x3c) = local_58;
                      *(undefined4 *)(lVar15 + 0x40) = local_1588[0];
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f7c6;
                      iVar10 = FUN_10049a09d(lVar15,&local_4a8,0,0);
                    }
                  }
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f7d5;
                  FUN_10017060f(local_1548);
                }
                if (iVar10 != -0x80) {
                  if (iVar10 == 0) goto LAB_10029f7e8;
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fa31;
                  uVar13 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fa39;
                  uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fa49;
                  cVar8 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar8 != '\0') {
                    local_4a8 = 0x8220202;
                    uStack_4a4 = 0x7a0a90;
                    uStack_4a0 = 1;
                    uStack_49e = 0;
                    local_49c = 0x400;
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fd19;
                    local_49a = iVar10;
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_4a8
                                        ,0x12);
                  }
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fa5a;
                  (*(code *)PTR__objc_release_10082c7b0)(uVar13);
                }
              }
              goto LAB_10029fa8a;
            }
          }
          bVar1 = *(byte *)(lVar14 + 0xb2);
          *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f54a;
          lVar15 = FUN_1004993ef(lVar14,(uint)bVar1 + (uint)bVar1 * 2 + 1,0,1);
          if (lVar15 == 0) {
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f619;
            uVar13 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f621;
            uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f631;
            cVar8 = _os_log_type_enabled(uVar13,0x10);
            if (cVar8 != '\0') {
              local_4a8 = 0x8220202;
              uStack_4a4 = 0x7a0a90;
              uStack_4a0 = 1;
              uStack_49e = 0;
              local_49c = 0x822;
              local_49a = 0x7b7f21;
              uStack_496 = 1;
              *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fb0d;
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_4a8,0x16
                                 );
            }
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f642;
            (*(code *)PTR__objc_release_10082c7b0)(uVar13);
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f64b;
            FUN_1001782e9(0,0);
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f564;
            iVar10 = FUN_10049980b(lVar15,local_ce8,0);
            if (iVar10 != -0x80) {
              if (iVar10 == 0) goto LAB_10029f82b;
              *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f57e;
              uVar13 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f586;
              uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
              *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f596;
              cVar8 = _os_log_type_enabled(uVar13,0x10);
              if (cVar8 != '\0') {
                local_4a8 = 0x8220202;
                uStack_4a4 = 0x7a0a90;
                uStack_4a0 = 1;
                uStack_49e = 0;
                local_49c = 0x400;
                *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fb62;
                local_49a = iVar10;
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_4a8,
                                    0x12);
              }
              *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f5a7;
              (*(code *)PTR__objc_release_10082c7b0)(uVar13);
            }
          }
        }
LAB_10029fa8a:
        *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fa9d;
        FUN_1002a8ddc(&local_1570,local_1568);
      }
      else {
        if (DAT_1008c75c0 != -1) {
          *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fdd3;
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f2ea;
        uVar13 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c75b8);
        *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f2fa;
        cVar8 = _os_log_type_enabled(uVar13,0x10);
        if (cVar8 != '\0') {
          uVar16 = *(undefined4 *)(lVar14 + 0x18);
          uVar3 = *(undefined8 *)(lVar14 + 0x28);
          uVar4 = *(undefined8 *)(lVar14 + 0x30);
          *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f30f;
          local_8c8 = (undefined8 *)FUN_100169885(uVar3,uVar4);
          local_4a8 = 0x4000202;
          uStack_4a0 = 0x842;
          uStack_49e = SUB82(local_8c8,0);
          local_49c = (undefined2)((ulong)local_8c8 >> 0x10);
          local_49a = (int)((ulong)local_8c8 >> 0x20);
          *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f35f;
          uStack_4a4 = uVar16;
          __os_log_impl(0x100000000,uVar13,0x10,
                        "sync> corrupt flag on for imageInfo recordID %d sourceGUID %{public}@",
                        &local_4a8,0x12);
          *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f36b;
          FUN_10016d588(&local_8c8);
        }
        *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f374;
        (*(code *)PTR__objc_release_10082c7b0)(uVar13);
        local_1550 = *(undefined4 *)(lVar14 + 0x18);
        uVar13 = *(undefined8 *)(lVar14 + 0x28);
        uVar3 = *(undefined8 *)(lVar14 + 0x30);
        *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f396;
        ___bzero(&local_4a8,0x420);
        local_8c8 = &local_8c0;
        local_8c0 = 0;
        uStack_8b8 = 0;
        pcVar5 = *(code **)*local_1540;
        *(undefined8 ***)(&stack0xfffffffffffffff0 + lVar6) = &local_8c8;
        *(undefined8 *)(&stack0xffffffffffffffe0 + lVar6) = 0;
        *(undefined8 *)(&stack0xffffffffffffffe8 + lVar6) = 0;
        *(undefined4 *)(&stack0xffffffffffffffd8 + lVar6) = 0;
        *(undefined8 *)(&stack0xffffffffffffffd0 + lVar6) = 0;
        *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f3f3;
        iVar10 = (*pcVar5)(local_1540,local_1550,uVar13,uVar3,&DAT_ffffff30,&local_4a8);
        *(undefined8 *)((long)&local_38 + lVar6) = 0x10029f405;
        FUN_1002a8ddc(&local_8c8,local_8c0);
        if (iVar10 != 0) {
          if (iVar10 != -0x80) {
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fe63;
            uVar13 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fe6b;
            uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fe7b;
            cVar8 = _os_log_type_enabled(uVar13,0x10);
            if (cVar8 != '\0') {
              local_4a8 = 0x8220202;
              uStack_4a4 = 0x7a0a90;
              uStack_4a0 = 1;
              uStack_49e = 0;
              local_49c = 0x400;
              *(undefined8 *)((long)&local_38 + lVar6) = 0x10029ffba;
              local_49a = iVar10;
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_4a8,0x12)
              ;
            }
            *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fe8c;
            (*(code *)PTR__objc_release_10082c7b0)(uVar13);
          }
          goto LAB_10029f227;
        }
        *(undefined1 *)(lVar14 + 0xd4) = 1;
      }
    }
    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029faa5;
    lVar14 = FUN_1004960d0(lVar14);
  } while (lVar14 != 0);
LAB_10029fde3:
  *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fdff;
  iVar10 = FUN_1001ceb24(local_1558,0x6f707470,0,local_1538 & 0xffffffff,0);
  if (((iVar10 != -0x80) && (iVar10 != 0)) && (iVar10 != 0x2349)) {
    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fe26;
    uVar13 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fe2e;
    uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fe3e;
    cVar8 = _os_log_type_enabled(uVar13,0x10);
    if (cVar8 != '\0') {
      local_4a8 = 0x8220202;
      uStack_4a4 = 0x7a0a90;
      uStack_4a0 = 1;
      uStack_49e = 0;
      local_49c = 0x400;
      *(undefined8 *)((long)&local_38 + lVar6) = 0x10029ff70;
      local_49a = iVar10;
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_4a8,0x12);
    }
    *(undefined8 *)((long)&local_38 + lVar6) = 0x10029fe4f;
    (*(code *)PTR__objc_release_10082c7b0)(uVar13);
  }
LAB_10029f227:
  *local_1580 = (int)local_1538;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_38 + lVar6) = &UNK_1002a000e;
    ___stack_chk_fail();
  }
  return iVar10;
}

