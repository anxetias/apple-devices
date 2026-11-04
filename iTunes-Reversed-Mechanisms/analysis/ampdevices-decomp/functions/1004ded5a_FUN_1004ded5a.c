// name: FUN_1004ded5a
// address: 1004ded5a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1004ded5a(long param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  uint *puVar14;
  bool bVar15;
  ulong local_5e8 [2];
  ulong local_5d8 [2];
  uint local_5c4;
  uint local_5c0;
  uint local_5bc;
  undefined8 local_5b8;
  ulong local_5b0;
  ulong local_5a8;
  ulong local_5a0;
  ulong local_598;
  uint local_58c;
  undefined8 local_588;
  uint local_580;
  uint local_57c;
  ulong local_578;
  uint local_56c;
  undefined4 *local_568;
  undefined1 *local_560;
  byte local_558;
  ushort uStack_557;
  undefined1 uStack_555;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined2 local_54c;
  undefined4 local_54a;
  undefined2 local_538;
  undefined1 uStack_536;
  undefined1 uStack_535;
  int iStack_534;
  uint local_530;
  undefined2 local_52c;
  undefined1 uStack_52a;
  undefined1 uStack_529;
  undefined2 uStack_528;
  undefined2 uStack_526;
  undefined1 uStack_524;
  undefined1 uStack_523;
  undefined1 local_51b;
  undefined1 local_51a;
  undefined8 local_518;
  undefined4 local_508;
  char *local_504;
  undefined2 local_4fc;
  char *local_4fa;
  byte local_e8;
  undefined1 uStack_e7;
  undefined2 uStack_e6;
  uint uStack_e4;
  uint uStack_e0;
  ushort local_dc;
  ushort uStack_da;
  undefined2 uStack_d8;
  undefined4 uStack_d6;
  uint local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined2 local_74;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  undefined4 local_6a;
  undefined2 local_66;
  undefined8 local_64;
  undefined2 local_5c;
  undefined4 local_5a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != (char *)0x0) {
    *param_2 = '\0';
  }
  if (param_1 == 0) {
LAB_1004dee98:
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_508 = 0x8220202;
      local_504 = "Assertion failure";
      local_4fc = 0x822;
      local_4fa = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_508,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_508 = 0x8220202;
        local_504 = "Assertion failure (expected to be true)";
        local_4fc = 0x822;
        local_4fa = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_508,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1004dee98;
    }
    if (*(long *)(param_1 + 0x30) == 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_508 = 0x8220202;
        local_504 = "Assertion failure";
        local_4fc = 0x822;
        local_4fa = "handlerData->trackData != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_508,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (*(char *)(param_1 + 0x14cd8) != '\0') {
      *(undefined1 *)(param_1 + 0x6ac5) = 1;
      if (*(char *)(param_1 + 0x35b) == '\0') {
        local_e8 = 0;
        uStack_e7 = 0;
        uStack_e6 = 0;
        uStack_e4 = 0;
        lVar1 = param_1 + 0x75e0;
        iVar5 = FUN_1001888ba(lVar1,"PlayCounts.plist",&local_508,0);
        if (iVar5 == 0) {
          local_560 = *(undefined1 **)(param_1 + 0x30);
          local_568 = (undefined4 *)FUN_1004e0c3f(param_1,1);
          iVar5 = 0;
          if (((*(char *)(param_1 + 0x3a2) != '\0') &&
              (iVar5 = 0, *(char *)(param_1 + 0x151d0) == '\0')) &&
             (*(char *)(param_1 + 0x36d) == '\0')) {
            iVar5 = 2 - (uint)(*(char *)(param_1 + 0x14d2a) == '\0');
          }
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar7 = DAT_1008c75b8;
          cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar2 != '\0') {
            local_88 = local_88 & 0xffff0000;
            __os_log_impl(0x100000000,uVar7,1,"sync> updating play counts from PlayCounts.plist",
                          &local_88,2);
          }
          uVar6 = FUN_100505a29(*(undefined8 *)(param_1 + 0x7168));
          iVar5 = FUN_100364282(local_560,local_568,&local_508,uVar6,iVar5,&local_e8);
          lVar8 = CONCAT44(uStack_e4,CONCAT22(uStack_e6,CONCAT11(uStack_e7,local_e8)));
          if (lVar8 != 0 && *(char *)(param_1 + 0x37c) != '\0') {
            FUN_10016a60e(lVar8,lVar1,"PlayCounts.plist",0,0,100,0);
            lVar8 = CONCAT44(uStack_e4,CONCAT22(uStack_e6,CONCAT11(uStack_e7,local_e8)));
          }
          FUN_10017060f(lVar8);
          FUN_1001893a7(lVar1,"Play Counts");
          cVar2 = FUN_1003166a1(*(undefined8 *)(param_1 + 0x30),0xf);
          if (iVar5 != 0) goto LAB_1004df273;
        }
        else {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar7 = DAT_1008c75b8;
          cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar2 != '\0') {
            local_88 = 0x4000100;
            local_84 = (char *)CONCAT44(local_84._4_4_,iVar5);
            __os_log_impl(0x100000000,uVar7,1,"sync> failed to find PlayCounts.plist (%d)",&local_88
                          ,8);
          }
LAB_1004df273:
          local_560 = (undefined1 *)0x0;
          iVar5 = FUN_1001888ba(lVar1,"Play Counts",&local_508,0);
          cVar2 = '\0';
          if (iVar5 != 0) goto LAB_1004dff8e;
          if ((*(int *)(param_1 + 0x69d0) == 1) && (*(int *)(param_1 + 0x69d4) == 1)) {
            FUN_100182d4d(&local_508);
          }
          else {
            lVar1 = *(long *)(param_1 + 0x30);
            if ((lVar1 != 0) && (*(int *)(lVar1 + 0x9c) != 0)) {
              local_560 = (undefined1 *)FUN_10015ff27(&local_508,&local_88,0);
              if ((int)local_560 != -0x80) {
                if ((int)local_560 == 0) {
                  local_560 = (undefined1 *)FUN_100160c3f(&local_88,local_5e8);
                  if ((int)local_560 == -0x80) {
LAB_1004e0940:
                    FUN_10016013b(&local_88);
                    cVar2 = '\0';
                  }
                  else {
                    if ((int)local_560 != 0) {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 != '\0') {
                        pbVar13 = &local_e8;
                        local_e8 = 2;
                        uStack_e7 = 2;
                        uStack_e6 = 0x822;
                        uStack_e4 = 0x7a0a90;
                        uStack_e0 = 1;
                        local_dc = 0x400;
                        uStack_da = (ushort)local_560;
                        uStack_d8 = (undefined2)((ulong)local_560 >> 0x10);
LAB_1004e0211:
                        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",pbVar13
                                            ,0x12);
                      }
                      goto LAB_1004e0940;
                    }
                    local_5d8[0] = 0x60;
                    local_560 = (undefined1 *)FUN_100160380(&local_88,local_5d8,&local_e8);
                    if ((int)local_560 == -0x80) goto LAB_1004e0940;
                    if ((int)local_560 != 0) {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 != '\0') {
                        pbVar13 = (byte *)&local_538;
                        local_538 = 0x202;
                        uStack_536 = 0x22;
                        uStack_535 = 8;
                        iStack_534 = 0x7a0a90;
                        local_530 = 1;
                        local_52c = 0x400;
                        uStack_52a = SUB81(local_560,0);
                        uStack_529 = (undefined1)((ulong)local_560 >> 8);
                        uStack_528 = (undefined2)((ulong)local_560 >> 0x10);
                        goto LAB_1004e0211;
                      }
                      goto LAB_1004e0940;
                    }
                    local_57c = CONCAT22(uStack_e6,CONCAT11(uStack_e7,local_e8));
                    if (local_57c == 0x7064686d) {
                      uVar12 = CONCAT22(uStack_da,local_dc);
                    }
                    else {
                      if (local_57c != 0x6d686470) {
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar7 = DAT_1008c75b8;
                        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                        local_560 = &DAT_ffffff30;
                        if (cVar2 != '\0') {
                          local_538 = 0;
                          __os_log_impl(0x100000000,uVar7,1,
                                        "sync> invalid play count DB header magic",&local_538,2);
                        }
                        goto LAB_1004e0940;
                      }
                      local_e8 = 0x6d;
                      uStack_e7 = 0x68;
                      uStack_e6 = 0x7064;
                      uStack_e4 = uStack_e4 >> 0x18 | (uStack_e4 & 0xff0000) >> 8 |
                                  (uStack_e4 & 0xff00) << 8 | uStack_e4 << 0x18;
                      uStack_e0 = uStack_e0 >> 0x18 | (uStack_e0 & 0xff0000) >> 8 |
                                  (uStack_e0 & 0xff00) << 8 | uStack_e0 << 0x18;
                      uVar11 = (uint)(uStack_da >> 8) | (uStack_da & 0xff) << 8;
                      uVar12 = uVar11 | (local_dc & 0xff00) << 8 |
                               CONCAT22(uStack_da,local_dc) << 0x18;
                      local_dc = (ushort)uVar11;
                      uStack_da = (ushort)(uVar12 >> 0x10);
                    }
                    if (local_5e8[0] != uStack_e0 * uVar12 + uStack_e4) {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 != '\0') {
                        local_538 = 0x202;
                        uStack_536 = 0x22;
                        uStack_535 = 8;
                        iStack_534 = 0x7a0a90;
                        local_530 = 1;
                        local_52c = 0x822;
                        uStack_52a = 10;
                        uStack_529 = 0x5b;
                        uStack_528 = 0x7d;
                        uStack_526 = 1;
                        uStack_524 = 0;
                        uStack_523 = 0;
                        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",
                                            &local_538,0x16);
                      }
                      FUN_1001782e9(0,0);
LAB_1004e0934:
                      local_560 = (undefined1 *)0xffffffce;
                      goto LAB_1004e0940;
                    }
                    if (uVar12 != *(uint *)(lVar1 + 0x9c)) {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 != '\0') {
                        local_538 = 0x202;
                        uStack_536 = 0x22;
                        uStack_535 = 8;
                        iStack_534 = 0x7a0a90;
                        local_530 = 1;
                        local_52c = 0x822;
                        uStack_52a = 0xb;
                        uStack_529 = 0x6e;
                        uStack_528 = 0x7d;
                        uStack_526 = 1;
                        uStack_524 = 0;
                        uStack_523 = 0;
                        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",
                                            &local_538,0x16);
                      }
                      FUN_1001782e9(0,0);
                      goto LAB_1004e0934;
                    }
                    FUN_100160772(&local_88,uStack_e4);
                    local_5b0 = 0x28;
                    if (0x28 < uStack_e0) {
                      local_5b0 = (ulong)uStack_e0;
                    }
                    local_568 = (undefined4 *)FUN_1001c63e1();
                    if (local_568 == (undefined4 *)0x0) {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 != '\0') {
                        local_538 = 0x202;
                        uStack_536 = 0x22;
                        uStack_535 = 8;
                        iStack_534 = 0x7a0a90;
                        local_530 = 1;
                        local_52c = 0x822;
                        uStack_52a = 0x53;
                        uStack_529 = 0x5b;
                        uStack_528 = 0x7d;
                        uStack_526 = 1;
                        uStack_524 = 0;
                        uStack_523 = 0;
                        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",
                                            &local_538,0x16);
                      }
                      FUN_1001782e9(0,0);
                      local_560 = (undefined1 *)0xffffff94;
                      goto LAB_1004e0940;
                    }
                    uVar10 = FUN_1002f930c(lVar1);
                    local_598 = CONCAT44(local_598._4_4_,uStack_e0);
                    FUN_100177cff(&local_578);
                    local_578 = CONCAT44(local_578._4_4_,(int)local_578 + 0x15180);
                    local_56c = FUN_100505a29(*(undefined8 *)(param_1 + 0x7168));
                    FUN_100313e0b(lVar1);
                    if (CONCAT22(uStack_da,local_dc) == 0) {
                      cVar2 = '\0';
                    }
                    else {
                      local_588 = 0;
                      cVar2 = '\0';
                      do {
                        local_5a8 = uVar10;
                        local_5a0 = FUN_1002f9451();
                        FUN_1001c62d9(local_568,local_5b0);
                        local_5d8[0] = (ulong)uStack_e0;
                        local_560 = (undefined1 *)FUN_100160380(&local_88,local_5d8,local_568);
                        if ((int)local_560 != 0) {
                          if ((int)local_560 != -0x80) {
                            uVar7 = FUN_1001cc310();
                            cVar3 = _os_log_type_enabled(uVar7,0x10);
                            if (cVar3 != '\0') {
                              local_558 = 2;
                              uStack_557 = 0x2202;
                              uStack_555 = 8;
                              uStack_554 = 0x7a0a90;
                              uStack_550 = 1;
                              local_54c = 0x400;
                              local_54a = SUB84(local_560,0);
                              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",
                                                  &local_558,0x12);
                            }
                          }
                          goto LAB_1004e0ab5;
                        }
                        if (local_57c != 0x7064686d) {
                          FUN_100505a56(local_568);
                        }
                        bVar15 = 0xc < (uint)local_598;
                        FUN_1001c62d9(&local_538,0x28);
                        uVar6 = *local_568;
                        local_538 = (undefined2)uVar6;
                        uStack_536 = (undefined1)((uint)uVar6 >> 0x10);
                        uStack_535 = (undefined1)((uint)uVar6 >> 0x18);
                        iStack_534 = local_568[1] + local_56c;
                        local_530 = local_568[5];
                        iVar5 = local_568[6] + local_56c;
                        local_52c = (undefined2)iVar5;
                        uStack_52a = (undefined1)((uint)iVar5 >> 0x10);
                        uStack_529 = (undefined1)((uint)iVar5 >> 0x18);
                        uStack_528 = (undefined2)local_568[2];
                        uStack_526 = (undefined2)((uint)local_568[2] >> 0x10);
                        uStack_524 = 0xff;
                        if (bVar15) {
                          uStack_524 = *(undefined1 *)(local_568 + 3);
                        }
                        local_51a = *(undefined1 *)((long)local_568 + 0x11);
                        if ((*(char *)(local_568 + 4) != '\0') &&
                           ((*(char *)(param_1 + 0x379) != '\0' ||
                            (cVar3 = FUN_1002669ba(*(undefined8 *)(param_1 + 0x66d8)), cVar3 != '\0'
                            )))) {
                          uVar7 = FUN_1004e0c3f(param_1,1);
                          if (*(long *)(local_5a8 + 0x188) == 0) {
                            if (DAT_1008c7808 == '\0') {
                              FUN_100538abf(&DAT_1008c77e8,&DAT_100753530);
                              DAT_1008c7808 = '\x01';
                            }
                            _DAT_1008c77d8 = _DAT_1008c77f8;
                            uRam00000001008c77e0 = uRam00000001008c7800;
                            _DAT_1008c77c8 = _DAT_1008c77e8;
                            uRam00000001008c77d0 = uRam00000001008c77f0;
                            if (*(char *)(param_1 + 0x390) == '\0') {
                              bVar15 = false;
                            }
                            else {
                              bVar15 = *(char *)(param_1 + 0x14d18) != '\0';
                            }
                            local_518 = FUN_100306b8c(uVar7,local_5a8,&DAT_1008c77c8,0,1,bVar15);
                          }
                          else {
                            local_518 = FUN_100300729(uVar7);
                          }
                          local_51b = 1;
                        }
                        cVar3 = FUN_100363c1b(local_5a8,&local_538,local_578 & 0xffffffff,0,0);
                        if (cVar3 != '\0') {
                          cVar2 = '\x01';
                        }
                        uVar11 = (int)local_588 + 1;
                        local_588 = (ulong)uVar11;
                        uVar10 = local_5a0;
                      } while (uVar11 < CONCAT22(uStack_da,local_dc));
                    }
                    local_560 = (undefined1 *)0x0;
LAB_1004e0ab5:
                    FUN_1001c64c1(local_568);
                    FUN_10016013b(&local_88);
                    FUN_1002fbbfc(lVar1);
                  }
                  FUN_100182d4d(&local_508);
                  goto LAB_1004dff8e;
                }
                uVar7 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar7,0x10);
                if (cVar2 != '\0') {
                  local_e8 = 2;
                  uStack_e7 = 2;
                  uStack_e6 = 0x822;
                  uStack_e4 = 0x7a0a90;
                  uStack_e0 = 1;
                  local_dc = 0x400;
                  uStack_da = (ushort)local_560;
                  uStack_d8 = (undefined2)((ulong)local_560 >> 0x10);
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_e8,
                                      0x12);
                }
              }
              cVar2 = '\0';
              goto LAB_1004dff8e;
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar7 = DAT_1008c75b8;
            cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
            cVar2 = '\0';
            local_560 = (undefined1 *)0x0;
            if (cVar3 == '\0') goto LAB_1004dff8e;
            local_e8 = 0;
            uStack_e7 = 0;
            __os_log_impl(0x100000000,uVar7,1,"sync> no tracks in Play Counts",&local_e8,2);
          }
          cVar2 = '\0';
        }
        local_560 = (undefined1 *)0x0;
      }
      else {
        iVar5 = FUN_1001888ba(param_1 + 0x75e0,"iTunesStats",&local_508,0);
        if (iVar5 == 0) {
          lVar1 = *(long *)(param_1 + 0x30);
          local_568 = (undefined4 *)FUN_10048604a();
          if ((local_568 == (undefined4 *)0x0) || (*(int *)(lVar1 + 0x9c) == 0)) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar7 = DAT_1008c75b8;
            cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
            cVar2 = '\0';
            local_560 = (undefined1 *)0x0;
            if (cVar3 != '\0') {
              local_88 = local_88 & 0xffff0000;
              __os_log_impl(0x100000000,uVar7,1,"sync> no tracks in iTunesStats",&local_88,2);
              cVar2 = '\0';
              local_560 = (undefined1 *)0x0;
            }
LAB_1004dfe95:
            FUN_100182d4d(&local_508);
          }
          else {
            local_560 = (undefined1 *)FUN_10015ff27(&local_508,&local_e8,0);
            if ((int)local_560 != -0x80) {
              if ((int)local_560 == 0) {
                if (*(short *)(param_1 + 0x3b4) == 2) {
                  local_578 = 8;
                  local_560 = (undefined1 *)FUN_100160380(&local_e8,&local_578,&local_538);
                  if ((int)local_560 != -0x80) {
                    if ((int)local_560 == 0) {
                      uVar11 = CONCAT13(uStack_535,CONCAT12(uStack_536,local_538));
LAB_1004df549:
                      if (uVar11 == 0) {
                        local_560 = (undefined1 *)0x0;
                      }
                      else {
                        if (uVar11 == *(uint *)(lVar1 + 0x9c)) {
                          local_5a8 = local_578;
                          local_5c0 = uVar11;
                          FUN_100177cff(&local_5c4);
                          FUN_100313e0b(lVar1);
                          local_57c = 0;
                          cVar2 = '\0';
                          do {
                            if (*(short *)(param_1 + 0x3b4) != 2) {
                              local_578 = 3;
                              local_560 = (undefined1 *)
                                          FUN_100160380(&local_e8,&local_578,&local_558);
                              if ((int)local_560 == 0) {
                                local_580 = ((uint)uStack_557 * 0x100 + (uint)local_558) - 3;
                                local_578 = (ulong)local_580;
                                if (0xf < local_580) {
                                  local_578 = 0x10;
                                }
                                FUN_1001c62d9(&local_538,0x10);
                                local_560 = (undefined1 *)
                                            FUN_100160380(&local_e8,&local_578,&local_538);
                                if ((int)local_560 == 0) {
                                  local_588 = CONCAT44(local_588._4_4_,local_530 >> 8);
                                  local_58c = local_5c4;
                                  if (local_530 >> 8 == 0) {
                                    local_58c = 0;
                                  }
                                  local_5a0 = CONCAT44(local_5a0._4_4_,
                                                       (uint)CONCAT12(uStack_52a,local_52c));
                                  local_56c = local_5c4;
                                  if (CONCAT12(uStack_52a,local_52c) == 0) {
                                    local_56c = 0;
                                  }
                                  uVar11 = (uint)CONCAT12(uStack_536,local_538) << 8;
                                  if (CONCAT12(uStack_536,local_538) == 0xffffff) {
                                    uVar11 = 0xffffffff;
                                  }
                                  local_5b0 = 3;
                                  goto LAB_1004df7e5;
                                }
                                if ((int)local_560 == -0x80) goto LAB_1004e0842;
                                local_568 = (undefined4 *)FUN_1001cc310();
                                cVar3 = _os_log_type_enabled(local_568,0x10);
                                if (cVar3 == '\0') goto LAB_1004e0842;
                                puVar14 = &local_88;
                                local_88 = 0x8220202;
                                local_84 = "Assertion failure";
                                local_7c = 0x400;
                                uStack_7a = SUB82(local_560,0);
                                uStack_78 = (undefined2)((ulong)local_560 >> 0x10);
                              }
                              else {
                                if ((int)local_560 == -0x80) goto LAB_1004e0842;
                                local_568 = (undefined4 *)FUN_1001cc310();
                                cVar3 = _os_log_type_enabled(local_568,0x10);
                                if (cVar3 == '\0') goto LAB_1004e0842;
                                puVar14 = &local_88;
                                local_88 = 0x8220202;
                                local_84 = "Assertion failure";
                                local_7c = 0x400;
                                uStack_7a = SUB82(local_560,0);
                                uStack_78 = (undefined2)((ulong)local_560 >> 0x10);
                              }
LAB_1004e081e:
                              __os_log_error_impl(0x100000000,local_568,0x10,
                                                  "%{public}s: err == (%d)",puVar14,0x12);
                              goto LAB_1004e0842;
                            }
                            local_578 = 4;
                            local_560 = (undefined1 *)FUN_100160380(&local_e8,&local_578,&local_580)
                            ;
                            if ((int)local_560 != 0) {
                              if ((int)local_560 != -0x80) {
                                local_568 = (undefined4 *)FUN_1001cc310();
                                cVar3 = _os_log_type_enabled(local_568,0x10);
                                if (cVar3 != '\0') {
                                  puVar14 = (uint *)&local_538;
                                  local_538 = 0x202;
                                  uStack_536 = 0x22;
                                  uStack_535 = 8;
                                  iStack_534 = 0x7a0a90;
                                  local_530 = 1;
                                  local_52c = 0x400;
                                  uStack_52a = SUB81(local_560,0);
                                  uStack_529 = (undefined1)((ulong)local_560 >> 8);
                                  uStack_528 = (undefined2)((ulong)local_560 >> 0x10);
                                  goto LAB_1004e081e;
                                }
                              }
                              goto LAB_1004e0842;
                            }
                            local_5b0 = local_578;
                            if (local_580 == 0) {
                              local_560 = (undefined1 *)FUN_1001cc310();
                              cVar3 = _os_log_type_enabled(local_560,0x10);
                              if (cVar3 != '\0') {
                                local_538 = 0x202;
                                uStack_536 = 0x22;
                                uStack_535 = 8;
                                iStack_534 = 0x7a0a90;
                                local_530 = 1;
                                local_52c = 0x822;
                                uStack_52a = 0x77;
                                uStack_529 = 0x6d;
                                uStack_528 = 0x7d;
                                uStack_526 = 1;
                                uStack_524 = 0;
                                uStack_523 = 0;
                                __os_log_error_impl(0x100000000,local_560,0x10,
                                                    "%{public}s: (%{public}s)",&local_538,0x16);
                              }
                              FUN_1001782e9(0,0);
                            }
                            local_580 = local_580 - 4;
                            local_578 = (ulong)local_580;
                            if (0x1b < local_580) {
                              local_578 = 0x1c;
                            }
                            FUN_1001c62d9(&local_88,0x1c);
                            local_560 = (undefined1 *)FUN_100160380(&local_e8,&local_578,&local_88);
                            if ((int)local_560 != 0) {
                              if ((int)local_560 != -0x80) {
                                local_568 = (undefined4 *)FUN_1001cc310();
                                cVar3 = _os_log_type_enabled(local_568,0x10);
                                if (cVar3 != '\0') {
                                  puVar14 = (uint *)&local_538;
                                  local_538 = 0x202;
                                  uStack_536 = 0x22;
                                  uStack_535 = 8;
                                  iStack_534 = 0x7a0a90;
                                  local_530 = 1;
                                  local_52c = 0x400;
                                  uStack_52a = SUB81(local_560,0);
                                  uStack_529 = (undefined1)((ulong)local_560 >> 8);
                                  uStack_528 = (undefined2)((ulong)local_560 >> 0x10);
                                  goto LAB_1004e081e;
                                }
                              }
                              goto LAB_1004e0842;
                            }
                            local_588 = CONCAT44(local_588._4_4_,(undefined4)local_84);
                            local_58c = local_84._4_4_;
                            local_5a0 = CONCAT44(local_5a0._4_4_,CONCAT22(uStack_7a,local_7c));
                            local_56c = CONCAT22(uStack_76,uStack_78);
                            uVar11 = local_88;
LAB_1004df7e5:
                            local_598 = (ulong)uVar11;
                            lVar8 = FUN_10037ddf6(*(undefined8 *)(local_568 + 0xf0),1,0,local_57c);
                            if (lVar8 != 0) {
                              local_560 = *(undefined1 **)(lVar8 + 8);
                              FUN_1001c62d9(&local_538,0x20);
                              uVar11 = (int)local_598 - 1;
                              if ((((int)local_588 != 0) || ((int)local_5a0 != 0)) ||
                                 (uVar11 < 0xfffffffe)) {
                                local_5bc = uVar11;
                                if (local_58c == 0 && local_56c == 0) {
                                  if (DAT_1008c75c0 != -1) {
                                    _dispatch_once(&DAT_1008c75c0,
                                                   &PTR___NSConcreteGlobalBlock_100857068);
                                  }
                                  local_5b8 = DAT_1008c75b8;
                                  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
                                  if (cVar3 != '\0') {
                                    FUN_100476ac1(&local_558,local_560);
                                    local_84 = (char *)FUN_1001b83ae(&local_558);
                                    local_88 = 0x8220402;
                                    local_7c = 0x400;
                                    uStack_7a = (undefined2)local_588;
                                    uStack_78 = (undefined2)(local_588 >> 0x10);
                                    uStack_76 = 0x400;
                                    local_74 = (undefined2)local_5a0;
                                    uStack_72 = (undefined2)(local_5a0 >> 0x10);
                                    uStack_70 = 0x400;
                                    uStack_6e = (undefined2)local_598;
                                    uStack_6c = (undefined2)(local_598 >> 0x10);
                                    __os_log_impl(0x100000000,local_5b8,1,
                                                  "sync> updating \"%{public}s\" (playCount = %u, skipCount = %u, bookmarkTime = %u)"
                                                  ,&local_88,0x1e);
                                    goto LAB_1004dfa51;
                                  }
                                }
                                else {
                                  FUN_1001e2489(&local_558,local_58c,0x13);
                                  FUN_1001e2489(local_5e8,local_56c,0x13);
                                  if (DAT_1008c75c0 != -1) {
                                    _dispatch_once(&DAT_1008c75c0,
                                                   &PTR___NSConcreteGlobalBlock_100857068);
                                  }
                                  local_5b8 = DAT_1008c75b8;
                                  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
                                  if (cVar3 != '\0') {
                                    FUN_100476ac1(local_5d8,local_560);
                                    pcVar9 = (char *)FUN_1001b83ae(local_5d8);
                                    uVar7 = FUN_1001b83ae(&local_558);
                                    local_64 = FUN_1001b83ae(local_5e8);
                                    local_88 = 0x8220602;
                                    local_7c = 0x400;
                                    uStack_7a = (undefined2)local_588;
                                    uStack_78 = (undefined2)(local_588 >> 0x10);
                                    uStack_76 = 0x822;
                                    local_74 = (undefined2)uVar7;
                                    uStack_72 = (undefined2)((ulong)uVar7 >> 0x10);
                                    uStack_70 = (undefined2)((ulong)uVar7 >> 0x20);
                                    uStack_6e = (undefined2)((ulong)uVar7 >> 0x30);
                                    uStack_6c = 0x400;
                                    local_6a = (int)local_5a0;
                                    local_66 = 0x822;
                                    local_5c = 0x400;
                                    local_5a = (undefined4)local_598;
                                    local_84 = pcVar9;
                                    __os_log_impl(0x100000000,local_5b8,1,
                                                  "sync> updating \"%{public}s\" (playCount = %u, playDate = %{public}s, skipCount = %u, skipDate = %{public}s, bookmarkTime = %u)"
                                                  ,&local_88,0x32);
                                    FUN_1001b7a50(local_5d8);
                                  }
                                  FUN_1001b7a50(local_5e8);
LAB_1004dfa51:
                                  FUN_1001b7a50(&local_558);
                                }
                                if ((int)local_588 != 0) {
                                  *(ulong *)(local_560 + 0x144) =
                                       CONCAT44((int)local_588 +
                                                (int)((ulong)*(undefined8 *)(local_560 + 0x144) >>
                                                     0x20),
                                                (int)local_588 +
                                                (int)*(undefined8 *)(local_560 + 0x144));
                                  FUN_1005389ba(&local_538,0x16);
                                  if ((*(uint *)(local_560 + 0xc2) >> 0x1d & 1) == 0) {
                                    *(uint *)(local_560 + 0xc2) =
                                         *(uint *)(local_560 + 0xc2) | 0x20000000;
                                    FUN_1005389ba(&local_538,0x5f);
                                  }
                                  if (*(uint *)(local_560 + 0x14c) < local_58c) {
                                    *(uint *)(local_560 + 0x14c) = local_58c;
                                    FUN_1005389ba(&local_538,0x17);
                                  }
                                }
                                if ((int)local_5a0 != 0) {
                                  *(ulong *)(local_560 + 0x150) =
                                       CONCAT44((int)local_5a0 +
                                                (int)((ulong)*(undefined8 *)(local_560 + 0x150) >>
                                                     0x20),
                                                (int)local_5a0 +
                                                (int)*(undefined8 *)(local_560 + 0x150));
                                  FUN_1005389ba(&local_538,0x44);
                                  if (*(uint *)(local_560 + 0x158) < local_56c) {
                                    *(uint *)(local_560 + 0x158) = local_56c;
                                    FUN_1005389ba(&local_538,0x45);
                                  }
                                }
                                if (local_5bc < 0xfffffffe) {
                                  cVar3 = FUN_10047f6a5(local_560,local_598,0,1,0);
                                  local_588 = CONCAT71(local_588._1_7_,cVar3 == '\0');
                                  cVar3 = FUN_10047fa76(local_560,1,1,1);
                                  if ((local_588 & 1) == 0) {
                                    cVar2 = '\x01';
                                  }
                                  if (cVar3 != '\0') {
                                    cVar2 = '\x01';
                                  }
                                }
                              }
                              cVar3 = FUN_100539270(&local_538);
                              if (cVar3 != '\0') {
                                FUN_1004755ef(local_560,0,&local_538);
                                cVar2 = '\x01';
                              }
                            }
                            local_5a8 = (ulong)local_580 + local_5a8 + local_5b0;
                            local_560 = (undefined1 *)FUN_100160772(&local_e8);
                            if ((int)local_560 != 0) {
                              if ((int)local_560 != -0x80) {
                                local_568 = (undefined4 *)FUN_1001cc310();
                                cVar3 = _os_log_type_enabled(local_568,0x10);
                                if (cVar3 != '\0') {
                                  puVar14 = &local_88;
                                  local_88 = 0x8220202;
                                  local_84 = "Assertion failure";
                                  local_7c = 0x400;
                                  uStack_7a = SUB82(local_560,0);
                                  uStack_78 = (undefined2)((ulong)local_560 >> 0x10);
                                  goto LAB_1004e081e;
                                }
                              }
                              goto LAB_1004e0842;
                            }
                            local_57c = local_57c + 1;
                          } while (local_5c0 != local_57c);
                          local_560 = (undefined1 *)0x0;
LAB_1004e0842:
                          FUN_10016013b(&local_e8);
                          FUN_1002fbbfc(lVar1);
                          goto LAB_1004dfe95;
                        }
                        uVar7 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar2 != '\0') {
                          local_88 = 0x8220202;
                          local_84 = "Assertion failure";
                          local_7c = 0x822;
                          uStack_7a = 0x6d54;
                          uStack_78 = 0x7d;
                          uStack_76 = 1;
                          local_74 = 0;
                          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",
                                              &local_88,0x16);
                        }
                        FUN_1001782e9(0,0);
                        local_560 = (undefined1 *)0xffffffce;
                      }
                    }
                    else {
                      uVar7 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar2 != '\0') {
                        uStack_7a = SUB82(local_560,0);
                        uStack_78 = (undefined2)((ulong)local_560 >> 0x10);
LAB_1004dfdd4:
                        local_7c = 0x400;
                        local_84 = "Assertion failure";
                        local_88 = 0x8220202;
                        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",
                                            &local_88,0x12);
                      }
                    }
                  }
                }
                else {
                  local_578 = 6;
                  local_560 = (undefined1 *)FUN_100160380(&local_e8,&local_578,&local_538);
                  if ((int)local_560 != -0x80) {
                    if ((int)local_560 == 0) {
                      uVar11 = (uint)CONCAT12(uStack_536,local_538);
                      goto LAB_1004df549;
                    }
                    uVar7 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar2 != '\0') {
                      uStack_7a = SUB82(local_560,0);
                      uStack_78 = (undefined2)((ulong)local_560 >> 0x10);
                      goto LAB_1004dfdd4;
                    }
                  }
                }
                FUN_10016013b(&local_e8);
                cVar2 = '\0';
                goto LAB_1004dfe95;
              }
              uVar7 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar7,0x10);
              if (cVar2 != '\0') {
                local_88 = 0x8220202;
                local_84 = "Assertion failure";
                local_7c = 0x400;
                uStack_7a = SUB82(local_560,0);
                uStack_78 = (undefined2)((ulong)local_560 >> 0x10);
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_88,0x12)
                ;
              }
            }
            cVar2 = '\0';
          }
        }
        else {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar7 = DAT_1008c75b8;
          cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
          cVar2 = '\0';
          local_560 = (undefined1 *)0x0;
          if (cVar3 != '\0') {
            local_88 = local_88 & 0xffff0000;
            __os_log_impl(0x100000000,uVar7,1,"sync> no iTunesStats file",&local_88,2);
            cVar2 = '\0';
            local_560 = (undefined1 *)0x0;
          }
        }
        *(byte *)(param_1 + 0x15958) = *(byte *)(param_1 + 0x42e) >> 1;
        local_538 = 0;
        uStack_536 = 0;
        uStack_535 = 0;
        iStack_534 = 0;
        iVar5 = FUN_1001888ba(param_1 + 0x75e0,"iTunesPState",&local_508,0);
        if (iVar5 == 0) {
          iVar5 = FUN_10017cc65(&local_508,0x64617461,1,&local_538);
          if (iVar5 != -0x80) {
            if (iVar5 == 0) {
              if (*(short *)(param_1 + 0x3b4) == 2) {
                FUN_1001c62d9(&local_e8,0x24);
                iVar5 = FUN_10017d186(CONCAT44(iStack_534,
                                               CONCAT13(uStack_535,CONCAT12(uStack_536,local_538))),
                                      &local_e8,0x24,0,&local_558);
                if (iVar5 != -0x80) {
                  bVar4 = local_e8;
                  if (iVar5 == 0) {
LAB_1004e0044:
                    *(byte *)(param_1 + 0x15958) = bVar4;
                    if (*(byte *)(param_1 + 0x42e) < bVar4) {
                      uVar7 = FUN_1001cc310();
                      cVar3 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar3 != '\0') {
                        local_e8 = 2;
                        uStack_e7 = 2;
                        uStack_e6 = 0x822;
                        uStack_e4 = 0x7a0a90;
                        uStack_e0 = 1;
                        local_dc = 0x822;
                        uStack_da = 0x6da4;
                        uStack_d8 = 0x7d;
                        uStack_d6 = 1;
                        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",
                                            &local_e8,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                  }
                  else {
                    uVar7 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar3 != '\0') {
                      puVar14 = &local_88;
                      local_88 = 0x8220202;
                      local_84 = "Assertion failure";
                      local_7c = 0x400;
                      uStack_7a = (undefined2)iVar5;
                      uStack_78 = (undefined2)((uint)iVar5 >> 0x10);
                      goto LAB_1004e0155;
                    }
                  }
                }
              }
              else {
                FUN_1001c62d9(&local_88,0x15);
                iVar5 = FUN_10017d186(CONCAT44(iStack_534,
                                               CONCAT13(uStack_535,CONCAT12(uStack_536,local_538))),
                                      &local_88,0x15,0,&local_558);
                if (iVar5 != -0x80) {
                  if (iVar5 == 0) {
                    if (CONCAT44(uStack_554,CONCAT13(uStack_555,CONCAT21(uStack_557,local_558))) !=
                        0x15) {
                      uVar7 = FUN_1001cc310();
                      cVar3 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar3 != '\0') {
                        local_e8 = 2;
                        uStack_e7 = 2;
                        uStack_e6 = 0x822;
                        uStack_e4 = 0x7a0a90;
                        uStack_e0 = 1;
                        local_dc = 0x822;
                        uStack_da = 0x6d94;
                        uStack_d8 = 0x7d;
                        uStack_d6 = 1;
                        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",
                                            &local_e8,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                    bVar4 = (byte)local_88;
                    goto LAB_1004e0044;
                  }
                  uVar7 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar3 != '\0') {
                    puVar14 = (uint *)&local_e8;
                    local_e8 = 2;
                    uStack_e7 = 2;
                    uStack_e6 = 0x822;
                    uStack_e4 = 0x7a0a90;
                    uStack_e0 = 1;
                    local_dc = 0x400;
                    uStack_da = (ushort)iVar5;
                    uStack_d8 = (undefined2)((uint)iVar5 >> 0x10);
                    goto LAB_1004e0155;
                  }
                }
              }
            }
            else {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                puVar14 = (uint *)&local_e8;
                local_e8 = 2;
                uStack_e7 = 2;
                uStack_e6 = 0x822;
                uStack_e4 = 0x7a0a90;
                uStack_e0 = 1;
                local_dc = 0x400;
                uStack_da = (ushort)iVar5;
                uStack_d8 = (undefined2)((uint)iVar5 >> 0x10);
LAB_1004e0155:
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",puVar14,0x12);
              }
            }
          }
          if (CONCAT44(iStack_534,CONCAT13(uStack_535,CONCAT12(uStack_536,local_538))) != 0) {
            FUN_10017cdfb();
          }
        }
      }
LAB_1004dff8e:
      *(undefined1 *)(param_1 + 0x6ac5) = 0;
      if (param_2 == (char *)0x0) {
        if (((int)local_560 == 0) && (cVar2 != '\0')) {
          FUN_100316867(*(undefined8 *)(param_1 + 0x30),0xf,1);
        }
      }
      else {
        *param_2 = cVar2;
      }
      goto LAB_1004deee9;
    }
  }
  cVar2 = '\0';
LAB_1004deee9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar2;
}

