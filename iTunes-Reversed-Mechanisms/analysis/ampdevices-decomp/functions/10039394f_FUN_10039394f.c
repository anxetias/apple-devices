// name: FUN_10039394f
// address: 10039394f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10039394f(undefined8 param_1,long param_2)

{
  int *piVar1;
  short *psVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 local_1590 [48];
  undefined8 local_1560;
  long local_1558;
  undefined1 local_1550 [12];
  int local_1544;
  undefined8 local_1540;
  undefined8 *local_1538;
  undefined4 local_152c;
  undefined2 local_1528;
  undefined2 uStack_1526;
  undefined4 uStack_1524;
  undefined4 local_1520;
  undefined2 uStack_151c;
  undefined2 uStack_151a;
  undefined2 uStack_1518;
  undefined4 uStack_1516;
  long *local_1508;
  undefined1 local_480 [1056];
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100393967;
  lVar11 = FUN_100108310();
  lVar11 = -lVar11;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)((long)&local_38 + lVar11) = 0x100393983;
  FUN_1001cc3a4(0);
  *(undefined8 *)((long)&local_38 + lVar11) = 0x100393996;
  FUN_1001b7b04(&local_1528,"ConvertPhotos");
  *(undefined8 *)((long)&local_38 + lVar11) = 0x1003939a9;
  FUN_1001cc232(local_1550,&local_1528);
  *(undefined8 *)((long)&local_38 + lVar11) = 0x1003939b8;
  FUN_1001b7a50(&local_1528);
  local_60 = 0;
  *(undefined8 *)((long)&local_38 + lVar11) = 0x1003939d4;
  FUN_1001c62d9(local_480,0x420);
  if (DAT_1008c75c0 != -1) {
    *(undefined8 *)((long)&local_38 + lVar11) = 0x1003948af;
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar13 = DAT_1008c75b8;
  *(undefined8 *)((long)&local_38 + lVar11) = 0x1003939f6;
  cVar9 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar9 != '\0') {
    local_1528 = 0;
    *(undefined8 *)((long)&local_38 + lVar11) = 0x100393a28;
    __os_log_impl(0x100000000,uVar13,1,"airtraffic> entered photo asset convert fiber",&local_1528,2
                 );
  }
  if (param_2 == 0) {
    *(undefined8 *)((long)&local_38 + lVar11) = 0x100393acc;
    uVar13 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar11) = 0x100393adc;
    cVar9 = _os_log_type_enabled(uVar13,0x10);
    if (cVar9 != '\0') {
      local_1528 = 0x202;
      uStack_1526 = 0x822;
      uStack_1524 = 0x7a0a90;
      local_1520 = 1;
      uStack_151c = 0x822;
      uStack_151a = 0xde6a;
      uStack_1518 = 0x7a;
      uStack_1516 = 1;
      *(undefined8 *)((long)&local_38 + lVar11) = 0x10039458f;
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_1528,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar11) = 0x100393aed;
    FUN_1001782e9(0,0);
    goto LAB_1003944fe;
  }
  *(undefined8 *)((long)&local_38 + lVar11) = 0x100393a40;
  FUN_1004dccf5(param_2,"");
  if (*(long *)(param_2 + 0x16688) == 0) {
    *(undefined8 *)((long)&local_38 + lVar11) = 0x100393af7;
    uVar13 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar11) = 0x100393b07;
    cVar9 = _os_log_type_enabled(uVar13,0x10);
    if (cVar9 != '\0') {
      local_1528 = 0x202;
      uStack_1526 = 0x822;
      uStack_1524 = 0x7a0a90;
      local_1520 = 1;
      uStack_151c = 0x822;
      uStack_151a = 0x1a8;
      uStack_1518 = 0x7c;
      uStack_1516 = 1;
      *(undefined8 *)((long)&local_38 + lVar11) = 0x100394647;
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_1528,0x16);
    }
    local_152c = 0;
    *(undefined8 *)((long)&local_38 + lVar11) = 0x100393b22;
    FUN_1001782e9(0,0);
    iVar10 = 0x484;
    goto LAB_1003941f1;
  }
  if (*(long *)(param_2 + 0x16860) == 0) {
    *(undefined8 *)((long)&local_38 + lVar11) = 0x100393b32;
    uVar13 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar11) = 0x100393b42;
    cVar9 = _os_log_type_enabled(uVar13,0x10);
    if (cVar9 != '\0') {
      pcVar16 = "handlerData->airTrafficDesktopPhotoLibrary != nullptr";
LAB_1003946eb:
      uStack_151c = 0x822;
      local_1520 = 1;
      uStack_1524 = 0x7a0a90;
      uStack_1526 = 0x822;
      local_1528 = 0x202;
      uStack_151a = SUB82(pcVar16,0);
      uStack_1518 = (undefined2)((ulong)pcVar16 >> 0x10);
      uStack_1516 = (undefined4)((ulong)pcVar16 >> 0x20);
      *(undefined8 *)((long)&local_38 + lVar11) = 0x100394710;
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_1528,0x16);
    }
LAB_100393b8f:
    local_152c = 0;
    *(undefined8 *)((long)&local_38 + lVar11) = 0x100393ba2;
    FUN_1001782e9(0,0);
    iVar10 = -0x32;
  }
  else {
    if (*(long *)(param_2 + 0x16870) == 0) {
      *(undefined8 *)((long)&local_38 + lVar11) = 0x100393b77;
      uVar13 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar11) = 0x100393b87;
      cVar9 = _os_log_type_enabled(uVar13,0x10);
      if (cVar9 != '\0') {
        pcVar16 = "handlerData->airTrafficRequestedPhotoAssetUUIDArray != nullptr";
        goto LAB_1003946eb;
      }
      goto LAB_100393b8f;
    }
    if (DAT_1008c5d64 != 0) {
      DAT_1008c5d68 = 1;
    }
    local_1528 = 0x6000;
    uStack_1526 = 0x85;
    uStack_1524 = 1;
    local_1520 = (undefined4)param_2;
    uVar5 = local_1520;
    uStack_151c = (undefined2)((ulong)param_2 >> 0x20);
    uVar7 = uStack_151c;
    uStack_151a = (undefined2)((ulong)param_2 >> 0x30);
    uVar8 = uStack_151a;
    *(undefined8 *)((long)&local_38 + lVar11) = 0x100393aa1;
    local_1508 = (long *)&local_1528;
    iVar10 = FUN_10060227b(param_2,&local_1528);
    if (local_1508 == (long *)&local_1528) {
      lVar12 = 0x20;
LAB_100393bb2:
      pcVar6 = *(code **)(*local_1508 + lVar12);
      *(undefined8 *)((long)&local_38 + lVar11) = 0x100393bb8;
      (*pcVar6)();
    }
    else {
      lVar12 = 0x28;
      if (local_1508 != (long *)0x0) goto LAB_100393bb2;
    }
    if (iVar10 == -0x80) {
LAB_1003941e7:
      local_152c = 0;
    }
    else {
      if (iVar10 != 0) {
        *(undefined8 *)((long)&local_38 + lVar11) = 0x1003941cf;
        uVar13 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar11) = 0x1003941df;
        cVar9 = _os_log_type_enabled(uVar13,0x10);
        if (cVar9 != '\0') {
          local_1528 = 0x202;
          uStack_1526 = 0x822;
          uStack_1524 = 0x7a0a90;
          local_1520 = 1;
          uStack_151c = 0x400;
          uStack_151a = (undefined2)iVar10;
          uStack_1518 = (undefined2)((uint)iVar10 >> 0x10);
          *(undefined8 *)((long)&local_38 + lVar11) = 0x1003947a4;
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_1528,0x12);
        }
        goto LAB_1003941e7;
      }
      *(undefined8 *)((long)&local_38 + lVar11) = 0x100393bda;
      uVar13 = FUN_100394b5b(param_2,&local_1544);
      iVar10 = (int)uVar13;
      local_152c = (undefined4)CONCAT71((int7)((ulong)uVar13 >> 8),1);
      if (iVar10 != -0x80) {
        if (iVar10 == 0) {
          local_1528 = 0x5eb8;
          uStack_1526 = 0x85;
          uStack_1524 = 1;
          *(undefined8 *)((long)&local_38 + lVar11) = 0x100393c12;
          local_1520 = uVar5;
          uStack_151c = uVar7;
          uStack_151a = uVar8;
          iVar10 = FUN_1003922a8();
          if (iVar10 != -0x80) {
            if (iVar10 == 0) {
              *(undefined8 *)((long)&local_38 + lVar11) = 0x100393c45;
              FUN_1001ceabd(local_1590,0,FUN_100397a15,param_2,0,0);
              local_1538 = (undefined8 *)(param_2 + 0x16860);
              if ((*(int *)(param_2 + 0x16868) == 0) || (local_1544 == *(int *)(param_2 + 0x16868)))
              {
LAB_100393caa:
                uVar13 = *local_1538;
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100393cc0;
                iVar10 = FUN_1003d3d76(local_480,uVar13);
                if (iVar10 != -0x80) {
                  if (iVar10 == 0) {
                    uVar13 = *(undefined8 *)(param_2 + 0x168c0);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100393ce1;
                    FUN_10034c0d0(uVar13);
                    uVar13 = *(undefined8 *)(param_2 + 0x16860);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100393ced;
                    FUN_100397a31(uVar13);
                    *(undefined1 *)(param_2 + 0x168cd) = 0;
                    local_1558 = param_2 + 0x4578;
                    while( true ) {
                      uVar13 = *(undefined8 *)(param_2 + 0x16870);
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100393d0e;
                      lVar12 = FUN_10017076e(uVar13);
                      if (lVar12 < 1) break;
                      uVar13 = *local_1538;
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100393d2b;
                      FUN_1003d1c21(uVar13,1);
                      local_1560 = *(undefined8 *)(param_2 + 0x16860);
                      local_1540 = *(undefined8 *)(param_2 + 0x16870);
                      while( true ) {
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x100393d53;
                        lVar12 = FUN_10017076e(local_1540);
                        if (lVar12 < 1) break;
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x100393d6a;
                        uVar13 = FUN_100164a01(local_1540,0);
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x100393d72;
                        lVar12 = FUN_1001705fc(uVar13);
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x100393d83;
                        FUN_100170bed(local_1540,0);
                        if (lVar12 == 0) {
                          *(undefined8 *)((long)&local_38 + lVar11) = 0x100393e09;
                          uVar13 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar11) = 0x100393e19;
                          cVar9 = _os_log_type_enabled(uVar13);
                          if (cVar9 != '\0') {
                            local_58 = 0x8220202;
                            local_54 = "Assertion failure";
                            local_4c = 0x822;
                            local_4a = "uuidString != nullptr";
                            *(undefined8 *)((long)&local_38 + lVar11) = 0x100393eb9;
                            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                                &local_58,0x16);
                          }
                          *(undefined8 *)((long)&local_38 + lVar11) = 0x100393e26;
                          FUN_1001782e9(0);
                        }
                        else {
                          *(undefined8 *)((long)&local_38 + lVar11) = 0x100393d90;
                          auVar20 = FUN_100169915(lVar12);
                          *(undefined8 *)((long)&local_38 + lVar11) = 0x100393da5;
                          lVar14 = FUN_100498a23(local_1560);
                          if (lVar14 == 0) {
                            *(undefined8 *)((long)&local_38 + lVar11) = 0x100393e2d;
                            uVar13 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar11) = 0x100393e3d;
                            cVar9 = _os_log_type_enabled(uVar13,0x10);
                            if (cVar9 != '\0') {
                              local_58 = 0x8220202;
                              local_54 = "Assertion failure";
                              local_4c = 0x822;
                              local_4a = "imageInfo != nullptr";
                              *(undefined8 *)((long)&local_38 + lVar11) = 0x100393f53;
                              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)"
                                                  ,&local_58,0x16);
                            }
                            *(undefined8 *)((long)&local_38 + lVar11) = 0x100393e4e;
                            FUN_1001782e9(0,0);
                            *(undefined8 *)((long)&local_38 + lVar11) = 0x100393e64;
                            FUN_100397b05(param_2,auVar20._0_8_,auVar20._8_8_,0xf,0);
                          }
                          else {
                            if (*(int *)(lVar14 + 0xa4) != 0) {
                              *(undefined8 *)((long)&local_38 + lVar11) = 0x100393dbc;
                              uVar13 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar11) = 0x100393dcc;
                              cVar9 = _os_log_type_enabled(uVar13);
                              if (cVar9 != '\0') {
                                local_58 = 0x8220202;
                                local_54 = "Assertion failure";
                                local_4c = 0x822;
                                local_4a = "imageInfo->syncPriority == 0";
                                *(undefined8 *)((long)&local_38 + lVar11) = 0x100393f06;
                                __os_log_error_impl(0x100000000,uVar13,0x10,
                                                    "%{public}s: (%{public}s)",&local_58,0x16);
                              }
                              *(undefined8 *)((long)&local_38 + lVar11) = 0x100393ddd;
                              FUN_1001782e9(0);
                            }
                            *(undefined4 *)(lVar14 + 0xa4) = 100;
                            *(ulong *)(lVar14 + 0xcc) =
                                 CONCAT44((int)((ulong)*(undefined8 *)(lVar14 + 0xcc) >> 0x20) -
                                          _UNK_1007436b4,
                                          (int)*(undefined8 *)(lVar14 + 0xcc) - _DAT_1007436b0);
                          }
                        }
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x100393e6c;
                        FUN_10017060f(lVar12);
                      }
                      uVar13 = *local_1538;
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100393f67;
                      lVar12 = FUN_100496019(uVar13);
                      if (lVar12 != 0) {
                        bVar19 = false;
                        do {
                          if (*(int *)(lVar12 + 0xa4) != 0) {
                            if (!bVar19) {
                              if (*(char *)(param_2 + 0x341) != '\0') {
                                *(undefined8 *)((long)&local_38 + lVar11) = 0x100393fab;
                                lVar14 = FUN_1004993ef(lVar12,7,0,1);
                                if (lVar14 != 0) {
                                  uVar17 = *(uint *)(param_2 + 0x6f60);
                                  uVar18 = (*(int *)(lVar14 + 0x40) + uVar17) - 1;
                                  uVar13 = *(undefined8 *)(param_2 + 0x30);
                                  uVar4 = *(uint *)(param_2 + 0x28);
                                  *(ulong *)(&stack0xffffffffffffffe0 + lVar11) = (ulong)uVar4;
                                  *(code **)(&stack0xffffffffffffffd8 + lVar11) = FUN_100397ff1;
                                  *(ulong *)(&stack0xffffffffffffffd0 + lVar11) = (ulong)uVar4;
                                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100393ffb;
                                  iVar10 = FUN_100406b81(uVar13,0x666f746f,0,0,
                                                         uVar18 - uVar18 % uVar17,FUN_100397c06);
                                  if (iVar10 == -0x22) goto LAB_1003940f1;
                                }
                              }
                              if (*(char *)(param_2 + 0x343) != '\0') {
                                *(undefined8 *)((long)&local_38 + lVar11) = 0x100394021;
                                lVar14 = FUN_1004993ef(lVar12,8,0,1);
                                if (lVar14 != 0) {
                                  uVar17 = *(uint *)(param_2 + 0x6f60);
                                  uVar18 = (*(int *)(lVar14 + 0x40) + uVar17) - 1;
                                  uVar13 = *(undefined8 *)(param_2 + 0x30);
                                  uVar4 = *(uint *)(param_2 + 0x28);
                                  *(ulong *)(&stack0xffffffffffffffe0 + lVar11) = (ulong)uVar4;
                                  *(code **)(&stack0xffffffffffffffd8 + lVar11) = FUN_100397ff1;
                                  *(ulong *)(&stack0xffffffffffffffd0 + lVar11) = (ulong)uVar4;
                                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100394071;
                                  iVar10 = FUN_100406b81(uVar13,0x666f746f,0,0,
                                                         uVar18 - uVar18 % uVar17,FUN_100397c06);
                                  if (iVar10 == -0x22) goto LAB_1003940f1;
                                }
                              }
                              *(undefined8 *)((long)&local_38 + lVar11) = 0x10039408a;
                              lVar14 = FUN_1004993ef(lVar12,4,0,1);
                              if (lVar14 == 0) {
                                iVar10 = 0x177000;
                              }
                              else {
                                uVar17 = (*(int *)(lVar14 + 0x40) + *(uint *)(param_2 + 0x6f60)) - 1
                                ;
                                iVar10 = uVar17 - uVar17 % *(uint *)(param_2 + 0x6f60);
                              }
                              uVar13 = *(undefined8 *)(param_2 + 0x30);
                              uVar17 = *(uint *)(param_2 + 0x28);
                              *(ulong *)(&stack0xffffffffffffffe0 + lVar11) = (ulong)uVar17;
                              *(code **)(&stack0xffffffffffffffd8 + lVar11) = FUN_100397ff1;
                              *(ulong *)(&stack0xffffffffffffffd0 + lVar11) = (ulong)uVar17;
                              *(undefined8 *)((long)&local_38 + lVar11) = 0x1003940df;
                              iVar10 = FUN_100406b81(uVar13,0x666f746f,0,0,iVar10,FUN_100397c06);
                              if (iVar10 != -0x22) {
                                if (iVar10 == 0) {
                                  bVar19 = false;
                                  goto LAB_1003940ff;
                                }
                                if (iVar10 == -0x80) goto LAB_1003946b3;
                                *(undefined8 *)((long)&local_38 + lVar11) = 0x100394169;
                                uVar13 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar11) = 0x100394179;
                                cVar9 = _os_log_type_enabled(uVar13,0x10);
                                if (cVar9 != '\0') {
                                  local_58 = 0x8220202;
                                  local_54 = "Assertion failure";
                                  local_4c = 0x400;
                                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar10);
                                  *(undefined8 *)((long)&local_38 + lVar11) = 0x1003941c8;
                                  __os_log_error_impl(0x100000000,uVar13,0x10,
                                                      "%{public}s: err == (%d)",&local_58,0x12);
                                }
                                if (iVar10 != 0) {
                                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100394978;
                                  uVar13 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100394988;
                                  cVar9 = _os_log_type_enabled(uVar13,0x10);
                                  if (cVar9 == '\0') goto LAB_1003946b3;
                                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar10);
                                  goto LAB_10039493b;
                                }
                                break;
                              }
                            }
LAB_1003940f1:
                            *(undefined4 *)(lVar12 + 0xa4) = 0;
                            bVar19 = true;
                          }
LAB_1003940ff:
                          *(undefined8 *)((long)&local_38 + lVar11) = 0x100394107;
                          lVar12 = FUN_1004960d0(lVar12);
                        } while (lVar12 != 0);
                      }
                      uVar13 = *(undefined8 *)(param_2 + 0x16860);
                      uVar5 = *(undefined4 *)(param_2 + 0x4570);
                      *(undefined1 (*) [16])(&stack0xffffffffffffffd0 + lVar11) =
                           (undefined1  [16])0x0;
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100394145;
                      iVar10 = FUN_10029b8f0(uVar13,local_1558,uVar5,0,local_1590,&local_1528);
                      if (iVar10 != 0) {
                        if (iVar10 == -0x80) goto LAB_1003946b3;
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x1003948c3;
                        uVar13 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar11) = 0x1003948d3;
                        cVar9 = _os_log_type_enabled(uVar13,0x10);
                        if (cVar9 == '\0') goto LAB_1003946b3;
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar10);
                        goto LAB_10039493b;
                      }
                      *(undefined8 *)((long)&local_38 + lVar11) = 0x100394155;
                      FUN_1001b1464();
                    }
                    iVar10 = 0;
                  }
                  else {
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x1003947ff;
                    uVar13 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x10039480f;
                    cVar9 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar9 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar10);
                      goto LAB_10039493b;
                    }
                  }
                }
              }
              else {
                uVar13 = *local_1538;
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100393c74;
                FUN_100495a1c(uVar13);
                *(undefined8 *)(param_2 + 0x16860) = 0;
                *(undefined8 *)((long)&local_38 + lVar11) = 0x100393c95;
                iVar10 = FUN_1003d1f2a(param_2,local_1590,local_1538);
                if (iVar10 != -0x80) {
                  if (iVar10 == 0) goto LAB_100393caa;
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100394850;
                  uVar13 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x100394860;
                  cVar9 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar9 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar10);
                    goto LAB_10039493b;
                  }
                }
              }
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar11) = 0x10039469b;
              uVar13 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar11) = 0x1003946ab;
              cVar9 = _os_log_type_enabled(uVar13,0x10);
              if (cVar9 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar10);
LAB_10039493b:
                local_4c = 0x400;
                local_54 = "Assertion failure";
                local_58 = 0x8220202;
                *(undefined8 *)((long)&local_38 + lVar11) = 0x10039494e;
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_58,0x12
                                   );
              }
            }
          }
LAB_1003946b3:
          *(undefined8 *)((long)&local_38 + lVar11) = 0x1003946bf;
          FUN_10039260a(&local_1528);
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar11) = 0x100394599;
          uVar15 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar11) = 0x1003945a9;
          cVar9 = _os_log_type_enabled(uVar15,0x10);
          if (cVar9 != '\0') {
            local_1528 = 0x202;
            uStack_1526 = 0x822;
            uStack_1524 = 0x7a0a90;
            local_1520 = 1;
            uStack_151c = 0x400;
            uStack_151a = (undefined2)uVar13;
            uStack_1518 = (undefined2)((ulong)uVar13 >> 0x10);
            *(undefined8 *)((long)&local_38 + lVar11) = 0x1003945f6;
            __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)",&local_1528,0x12);
          }
        }
      }
    }
  }
LAB_1003941f1:
  if ((*(long *)(param_2 + 0x16688) != 0) && (*(long *)(param_2 + 0x16860) != 0)) {
    *(undefined8 *)((long)&local_38 + lVar11) = 0x100394217;
    FUN_10032f78b(param_2);
    if ((iVar10 != -0x80) || (*(char *)(param_2 + 0x168cd) != '\0')) {
      if (*(long *)(param_2 + 0x16688) == 0) {
        *(undefined8 *)((long)&local_38 + lVar11) = 0x100394360;
        uVar13 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar11) = 0x100394370;
        cVar9 = _os_log_type_enabled(uVar13,0x10);
        if (cVar9 != '\0') {
          pcVar16 = "handlerData->airTrafficHostConnection != nullptr";
LAB_1003947d0:
          uStack_151c = 0x822;
          local_1520 = 1;
          uStack_1524 = 0x7a0a90;
          uStack_1526 = 0x822;
          local_1528 = 0x202;
          uStack_151a = SUB82(pcVar16,0);
          uStack_1518 = (undefined2)((ulong)pcVar16 >> 0x10);
          uStack_1516 = (undefined4)((ulong)pcVar16 >> 0x20);
          *(undefined8 *)((long)&local_38 + lVar11) = 0x1003947f5;
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_1528,0x16);
        }
      }
      else {
        if (*(long *)(param_2 + 0x16860) != 0) {
          *(undefined8 *)((long)&local_38 + lVar11) = 0x10039424d;
          lVar12 = FUN_100496019();
          if (lVar12 != 0) {
            do {
              iVar10 = *(int *)(lVar12 + 0xcc);
              while (iVar10 != 0) {
                cVar9 = '\v';
                if ((*(char *)(lVar12 + 200) != '\x02') &&
                   (cVar9 = '\x10', *(char *)(lVar12 + 0x83) == '\0')) {
                  if (*(int *)(lVar12 + 0xa4) == 0) {
                    cVar9 = '\x0e';
                  }
                  else {
                    cVar9 = (*(char *)(param_2 + 0x168cd) == '\0') * '\x02' + '\x0e';
                  }
                }
                uVar3 = *(undefined1 *)(lVar12 + 0xb1);
                uVar13 = *(undefined8 *)(lVar12 + 0x28);
                uVar15 = *(undefined8 *)(lVar12 + 0x30);
                *(undefined8 *)((long)&local_38 + lVar11) = 0x1003942c8;
                iVar10 = FUN_100397b05(param_2,uVar13,uVar15,cVar9,uVar3);
                if (iVar10 != 0) {
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x1003942d4;
                  uVar13 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar11) = 0x1003942e4;
                  cVar9 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar9 != '\0') {
                    local_1528 = 0x202;
                    uStack_1526 = 0x822;
                    uStack_1524 = 0x7a0a90;
                    local_1520 = 1;
                    uStack_151c = 0x400;
                    uStack_151a = (undefined2)iVar10;
                    uStack_1518 = (undefined2)((uint)iVar10 >> 0x10);
                    *(undefined8 *)((long)&local_38 + lVar11) = 0x100394343;
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                        &local_1528,0x12);
                  }
                }
                piVar1 = (int *)(lVar12 + 0xcc);
                *piVar1 = *piVar1 + -1;
                iVar10 = *piVar1;
              }
              *(undefined8 *)((long)&local_38 + lVar11) = 0x10039434d;
              lVar12 = FUN_1004960d0(lVar12);
            } while (lVar12 != 0);
          }
          goto LAB_1003943c6;
        }
        *(undefined8 *)((long)&local_38 + lVar11) = 0x1003943a5;
        uVar13 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar11) = 0x1003943b5;
        cVar9 = _os_log_type_enabled(uVar13,0x10);
        if (cVar9 != '\0') {
          pcVar16 = "handlerData->airTrafficDesktopPhotoLibrary != nullptr";
          goto LAB_1003947d0;
        }
      }
      *(undefined8 *)((long)&local_38 + lVar11) = 0x1003943c6;
      FUN_1001782e9(0,0);
    }
LAB_1003943c6:
    uVar13 = *(undefined8 *)(param_2 + 0x16860);
    *(undefined8 *)((long)&local_38 + lVar11) = 0x1003943d2;
    FUN_100593331(uVar13);
    uVar13 = *(undefined8 *)(param_2 + 0x16860);
    *(undefined8 *)((long)&local_38 + lVar11) = 0x1003943de;
    FUN_100496791(uVar13);
    uVar13 = *(undefined8 *)(param_2 + 0x16860);
    *(undefined8 *)((long)&local_38 + lVar11) = 0x1003943ee;
    iVar10 = FUN_10038ef22(uVar13,0,0);
    if ((iVar10 != -0x80) && (iVar10 != 0)) {
      *(undefined8 *)((long)&local_38 + lVar11) = 0x100394400;
      uVar13 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar11) = 0x100394410;
      cVar9 = _os_log_type_enabled(uVar13,0x10);
      if (cVar9 != '\0') {
        local_1528 = 0x202;
        uStack_1526 = 0x822;
        uStack_1524 = 0x7a0a90;
        local_1520 = 1;
        uStack_151c = 0x400;
        uStack_151a = (undefined2)iVar10;
        uStack_1518 = (undefined2)((uint)iVar10 >> 0x10);
        *(undefined8 *)((long)&local_38 + lVar11) = 0x10039475a;
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_1528,0x12);
      }
    }
    uVar13 = *(undefined8 *)(param_2 + 0x16860);
    *(undefined8 *)((long)&local_38 + lVar11) = 0x100394426;
    FUN_100496f8c(uVar13,0);
  }
  if ((char)local_152c != '\0') {
    *(undefined8 *)((long)&local_38 + lVar11) = 0x100394437;
    iVar10 = FUN_1006024ff(param_2);
    if ((iVar10 != -0x80) && (iVar10 != 0)) {
      *(undefined8 *)((long)&local_38 + lVar11) = 0x100394449;
      uVar13 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar11) = 0x100394459;
      cVar9 = _os_log_type_enabled(uVar13,0x10);
      if (cVar9 != '\0') {
        local_1528 = 0x202;
        uStack_1526 = 0x822;
        uStack_1524 = 0x7a0a90;
        local_1520 = 1;
        uStack_151c = 0x400;
        uStack_151a = (undefined2)iVar10;
        uStack_1518 = (undefined2)((uint)iVar10 >> 0x10);
        *(undefined8 *)((long)&local_38 + lVar11) = 0x100394691;
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_1528,0x12);
      }
    }
  }
  *(undefined8 *)((long)&local_38 + lVar11) = 0x100394470;
  FUN_1004dd69c(param_2,"");
  *(undefined8 *)((long)&local_38 + lVar11) = 0x100394478;
  cVar9 = FUN_100333382(param_2);
  if (cVar9 != '\0') {
    *(undefined8 *)((long)&local_38 + lVar11) = 0x100394489;
    FUN_100333742(param_2,2);
  }
  *(undefined1 *)(param_2 + 0x168cc) = 0;
  if (*(long *)(param_2 + 0x30) != 0) {
    psVar2 = (short *)(*(long *)(param_2 + 0x30) + 0x27b0);
    *psVar2 = *psVar2 + -1;
  }
  *(undefined4 *)(param_2 + 0x168c8) = 0;
  if (DAT_1008c75c0 != -1) {
    *(undefined8 *)((long)&local_38 + lVar11) = 0x100394966;
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar13 = DAT_1008c75b8;
  *(undefined8 *)((long)&local_38 + lVar11) = 0x1003944cc;
  cVar9 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar9 != '\0') {
    local_1528 = 0;
    *(undefined8 *)((long)&local_38 + lVar11) = 0x1003944fe;
    __os_log_impl(0x100000000,uVar13,1,"airtraffic> exited photo asset convert fiber",&local_1528,2)
    ;
  }
LAB_1003944fe:
  *(undefined8 *)((long)&local_38 + lVar11) = 0x10039450a;
  FUN_1003d3c28(local_480);
  *(undefined8 *)((long)&local_38 + lVar11) = 0x100394516;
  FUN_1001cc23c(local_1550);
  *(undefined8 *)((long)&local_38 + lVar11) = 0x10039451d;
  FUN_1001cc4fc(0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_38 + lVar11) = &UNK_1003949c9;
  ___stack_chk_fail();
}

