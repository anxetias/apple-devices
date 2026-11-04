// name: FUN_10051ed3d
// address: 10051ed3d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10051ed3d(undefined8 param_1,double param_2)

{
  sqlite3_stmt **ppStmt;
  short *psVar1;
  long *plVar2;
  undefined1 uVar3;
  ushort uVar4;
  short sVar5;
  sqlite3_stmt *pStmt;
  code *pcVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  double *pdVar10;
  char cVar11;
  char cVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  double *pdVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  void *pvVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  char *pcVar28;
  size_t sVar29;
  void *pvVar30;
  ulong uVar31;
  double *pdVar32;
  ulong uVar33;
  double *pdVar34;
  long lVar35;
  long *plVar36;
  bool bVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  long local_568;
  long *local_560;
  long local_558;
  double local_550;
  undefined8 local_548;
  long *plStack_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_518;
  long *local_510;
  double *local_508;
  undefined8 *local_500;
  undefined8 local_4f8;
  long *plStack_4f0;
  byte local_4e0;
  undefined4 local_4df;
  undefined3 uStack_4db;
  undefined8 local_4d8;
  char *pcStack_4d0;
  undefined8 *local_4c8;
  double *local_4c0;
  double local_4b8;
  undefined8 *local_4b0;
  double *local_4a8;
  double local_4a0;
  double *local_498;
  double local_490;
  double local_488;
  double *local_480;
  undefined2 local_478;
  ushort uStack_476;
  uint uStack_474;
  undefined2 uStack_470;
  ushort uStack_46e;
  ushort uStack_46c;
  ushort uStack_46a;
  ushort uStack_468;
  undefined2 uStack_466;
  undefined2 uStack_464;
  ushort uStack_462;
  undefined2 uStack_460;
  undefined2 local_45e;
  uint local_45c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_550 = (double)FUN_1001ebd46();
  if (param_2 == 0.0) {
LAB_10051ee91:
    uVar17 = FUN_1001cc310();
    cVar11 = _os_log_type_enabled(uVar17,0x10);
    if (cVar11 != '\0') {
      local_478 = 0x202;
      uStack_476 = 0x822;
      uStack_474 = 0x7a0a90;
      uStack_470 = 1;
      uStack_46e = 0;
      uStack_46c = 0x822;
      uStack_46a = 0xd2b2;
      uStack_468 = 0x7a;
      uStack_466 = 1;
      uStack_464 = 0;
      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100522e6c;
  }
  local_488 = param_2;
  if (*(int *)((long)param_2 + 8) != 0x64756c63) {
    uVar17 = FUN_1001cc310();
    cVar11 = _os_log_type_enabled(uVar17,0x10);
    if (cVar11 != '\0') {
      local_478 = 0x202;
      uStack_476 = 0x822;
      uStack_474 = 0x7ab58c;
      uStack_470 = 1;
      uStack_46e = 0;
      uStack_46c = 0x822;
      uStack_46a = 0xd710;
      uStack_468 = 0x7a;
      uStack_466 = 1;
      uStack_464 = 0;
      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    cVar11 = FUN_1001782e9(0,1);
    if (cVar11 == '\0') goto LAB_10051ee91;
  }
  if ((*(char *)((long)local_488 + 0x6ad7) == '\0') ||
     (cVar11 = FUN_10017cbd0((long)local_488 + 0x6b40), dVar38 = local_488, cVar11 == '\0')) {
    uVar17 = FUN_1001cc310();
    cVar11 = _os_log_type_enabled(uVar17,0x10);
    if (cVar11 != '\0') {
      local_478 = 0x202;
      uStack_476 = 0x822;
      uStack_474 = 0x7a0a90;
      uStack_470 = 1;
      uStack_46e = 0;
      uStack_46c = 0x822;
      uStack_46a = 0x67b3;
      uStack_468 = 0x7d;
      uStack_466 = 1;
      uStack_464 = 0;
      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    dVar38 = local_488;
    uVar17 = DAT_1008c75b8;
    cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar11 != '\0') {
      local_478 = 0;
      __os_log_impl(0x100000000,uVar17,1,"SaveIPodFilesFiber() - device is not mounted",&local_478,2
                   );
    }
  }
  lVar25 = *(long *)((long)dVar38 + 0x30);
  while ((lVar25 != 0 && (cVar11 = FUN_10030e2f7(), cVar11 != '\0'))) {
    FUN_1001b0d8d(DAT_100717d30);
    lVar25 = *(long *)((long)local_488 + 0x30);
  }
  if (*(char *)((long)local_488 + 0x15948) == '\0') {
    local_4a0 = 0.0;
  }
  else {
    local_558 = (long)local_488 + 0x3ba;
    local_4a0 = 0.0;
    do {
      uVar33 = *(ulong *)((long)local_488 + 0x15940);
      *(undefined8 *)((long)local_488 + 0x15940) = 0;
      uVar3 = *(undefined1 *)((long)local_488 + 0x15949);
      *(undefined2 *)((long)local_488 + 0x15948) = 0;
      if (uVar33 == 0) {
        uVar17 = FUN_1001cc310();
        cVar11 = _os_log_type_enabled(uVar17,0x10);
        if (cVar11 != '\0') {
          local_478 = 0x202;
          uStack_476 = 0x822;
          uStack_474 = 0x7a0a90;
          uStack_470 = 1;
          uStack_46e = 0;
          uStack_46c = 0x822;
          uStack_46a = 0x52b9;
          uStack_468 = 0x7e;
          uStack_466 = 1;
          uStack_464 = 0;
          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        uVar31 = uVar33 | 8;
        if ((uVar33 & 0x3bf1fc00) == 0) {
          uVar31 = uVar33;
        }
        FUN_1001b7b04(&local_478,local_558);
        FUN_1001b7b04(&local_538,"9.0");
        iVar14 = FUN_1001e6c16(&local_478,&local_538);
        FUN_1001b7a50(&local_538);
        FUN_1001b7a50(&local_478);
        uVar33 = uVar31 & 0xffffffffc40e03ff;
        if (iVar14 < 0) {
          uVar33 = uVar31;
        }
        pdVar18 = (double *)FUN_1001c629e(0x113a8,&DAT_100711c6e);
        if (pdVar18 == (double *)0x0) {
          uVar17 = FUN_1001cc310();
          cVar11 = _os_log_type_enabled(uVar17,0x10);
          if (cVar11 != '\0') {
            local_478 = 0x202;
            uStack_476 = 0x822;
            uStack_474 = 0x7a0a90;
            uStack_470 = 1;
            uStack_46e = 0;
            uStack_46c = 0x822;
            uStack_46a = 0x52e2;
            uStack_468 = 0x7e;
            uStack_466 = 1;
            uStack_464 = 0;
            __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
          }
          FUN_1001782e9(0,0);
          break;
        }
        local_508 = pdVar18 + 1;
        pdVar18[1] = 0.0;
        pdVar18[2] = 0.0;
        *pdVar18 = local_488;
        local_498 = pdVar18;
        local_480 = pdVar18;
        iVar14 = FUN_1001e96d3(local_508,0,0);
        if (iVar14 != -0x80) {
          if (iVar14 == 0) {
            *(undefined1 *)((long)local_480 + 0x19) = 1;
            *(undefined1 *)((long)local_480 + 0xab1) = 1;
            *(undefined1 *)((long)local_480 + 0xf3c1) = 1;
            pcVar28 = (char *)local_480;
            cVar11 = FUN_1002669ba(*(undefined8 *)((long)local_488 + 0x66d8));
            if (cVar11 != '\0') {
              *(undefined1 *)((long)local_480 + 0x1549) = 1;
              *(undefined1 *)((long)local_480 + 0x1fe1) = 1;
              *(undefined1 *)((long)local_480 + 0x2a79) = 1;
              *(undefined1 *)((long)local_480 + 0x3511) = 1;
              *(undefined1 *)((long)local_480 + 0x3fa9) = 1;
              *(undefined1 *)((long)local_480 + 0x4a41) = 1;
              *(undefined1 *)((long)local_480 + 0x54d9) = 1;
              *(undefined1 *)((long)local_480 + 0x5f71) = 1;
              *(undefined1 *)((long)local_480 + 0xa999) = 1;
              *(undefined1 *)((long)local_480 + 0xb431) = 1;
              *(undefined1 *)((long)local_480 + 0xbec9) = 1;
              *(undefined1 *)((long)local_480 + 0xc961) = 1;
              *(undefined1 *)((long)local_480 + 0x108f1) = 1;
              pcVar28 = (char *)local_480;
            }
            if ((uVar33 & 1) == 0) {
              if ((uVar33 & 2) != 0) {
                FUN_100523299(local_480);
              }
              if ((uVar33 & 4) != 0) {
                FUN_1002da17a(local_488,local_498 + 0x1a7f,local_498 + 0x1bd2,local_498 + 0x1d25,
                              uVar3);
              }
              cVar11 = '\0';
            }
            else {
              if ((((*(char *)((long)local_488 + 0x35f) == '\0') &&
                   (*(char *)((long)local_488 + 0x6abf) == '\0')) &&
                  (*(char *)((long)local_488 + 0x14cda) != '\0')) ||
                 (*(char *)((long)local_488 + 0x6ad1) != '\0')) {
                local_4c0 = (double *)((ulong)local_4c0 & 0xffffffff00000000);
LAB_10051f445:
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
              }
              else {
                dVar38 = *local_480;
                if (*(char *)((long)dVar38 + 0x389) == '\0') {
LAB_10051f2fd:
                  *(undefined4 *)(local_480 + 0x2272) = 0;
                  pdVar18 = local_480;
LAB_10051f43d:
                  local_4c0 = (double *)
                              CONCAT44(local_4c0._4_4_,(int)CONCAT71((int7)((ulong)pdVar18 >> 8),1))
                  ;
                  goto LAB_10051f445;
                }
                iVar14 = FUN_1004e424e(dVar38,0);
                if (iVar14 == 0) {
                  *(undefined1 *)((long)dVar38 + 0x1666c) = 0;
                  if ((*(char *)((long)dVar38 + 0x388) == '\0') ||
                     (*(long *)((long)dVar38 + 0x16658) == 0)) goto LAB_10051f2fd;
                  puVar19 = operator_new(0xb8,(nothrow_t *)PTR_nothrow_10082c970);
                  if (puVar19 == (undefined8 *)0x0) {
                    iVar14 = -0x6c;
                  }
                  else {
                    puVar19[0x10] = 0;
                    puVar19[0x11] = 0;
                    *puVar19 = 0;
                    puVar19[1] = 0;
                    puVar19[2] = 0;
                    puVar19[3] = 0;
                    puVar19[4] = 0;
                    puVar19[5] = 0;
                    iVar14 = 0;
                    puVar19[6] = 0;
                    puVar19[0xf] = puVar19 + 0x10;
                    puVar19[0x13] = 0;
                    puVar19[0x14] = 0;
                    puVar19[0x12] = puVar19 + 0x13;
                    puVar19[0x15] = 0;
                    *(undefined2 *)(puVar19 + 0x16) = 0;
                  }
                  local_480[0x2271] = (double)puVar19;
                  pcVar28 = (char *)local_480;
LAB_10051f392:
                  *(int *)(local_480 + 0x2272) = iVar14;
                  pdVar18 = local_480;
                  if (iVar14 == 0) goto LAB_10051f43d;
                  uVar17 = FUN_1001cc310();
                  pdVar18 = local_498 + 0x2272;
                  cVar11 = _os_log_type_enabled(uVar17,0x10);
                  if (cVar11 != '\0') {
                    local_478 = 0x202;
                    uStack_476 = 0x822;
                    uStack_474 = 0x7a0a90;
                    uStack_470 = 1;
                    uStack_46e = 0;
                    uStack_46c = 0x400;
                    uStack_46a = (ushort)iVar14;
                    uStack_468 = (ushort)((uint)iVar14 >> 0x10);
                    pcVar28 = "%{public}s: err == (%d)";
                    __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",&local_478
                                        ,0x12);
                  }
                }
                else {
                  if (iVar14 != -0x80) {
                    uVar17 = FUN_1001cc310();
                    cVar11 = _os_log_type_enabled(uVar17,0x10);
                    if (cVar11 != '\0') {
                      local_478 = 0x202;
                      uStack_476 = 0x822;
                      uStack_474 = 0x7a0a90;
                      uStack_470 = 1;
                      uStack_46e = 0;
                      uStack_46c = 0x400;
                      uStack_46a = (ushort)iVar14;
                      uStack_468 = (ushort)((uint)iVar14 >> 0x10);
                      pcVar28 = "%{public}s: err == (%d)";
                      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                          &local_478,0x12);
                    }
                    goto LAB_10051f392;
                  }
                  pdVar18 = local_498 + 0x2272;
                  *(undefined4 *)(local_480 + 0x2272) = 0xffffff80;
                }
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar17 = DAT_1008c75b8;
                cVar11 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                local_4c0 = (double *)
                            CONCAT44(local_4c0._4_4_,(int)CONCAT71((int7)((ulong)pcVar28 >> 8),1));
                if (cVar11 != '\0') {
                  uStack_474 = *(uint *)pdVar18;
                  local_478 = 0x100;
                  uStack_476 = 0x400;
                  pdVar18 = (double *)
                            __os_log_impl(0x100000000,uVar17,0x10,
                                          "AllocateGeniusSaveContext failed (%d)",&local_478,8);
                  goto LAB_10051f43d;
                }
              }
              uVar17 = DAT_1008c75b8;
              cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar11 != '\0') {
                uStack_474 = 0x4e;
                if ((char)local_4c0 != '\0') {
                  uStack_474 = 0x59;
                }
                uStack_46e = (ushort)(*(char *)((long)local_488 + 0x6acf) == '\0') << 5 | 0x53;
                uStack_468 = (ushort)(*(char *)((long)local_488 + 0x6ad1) == '\0') << 5 | 0x43;
                uStack_462 = (ushort)(*(char *)((long)local_488 + 0x6abf) == '\0') << 5 | 0x48;
                local_45c = (uint)(*(char *)((long)local_488 + 0x14cda) == '\0') << 5 | 0x41;
                local_478 = 0x500;
                uStack_476 = 0x400;
                uStack_470 = 0x400;
                uStack_46c = 0;
                uStack_46a = 0x400;
                uStack_466 = 0;
                uStack_464 = 0x400;
                uStack_460 = 0;
                local_45e = 0x400;
                __os_log_impl(0x100000000,uVar17,1,"sync> SQL sync prep status (%c %c %c %c %c)",
                              &local_478,0x20);
              }
              dVar38 = *local_480;
              if (dVar38 == 0.0) {
LAB_10051f893:
                uVar17 = FUN_1001cc310();
                cVar11 = _os_log_type_enabled(uVar17,0x10);
                if (cVar11 != '\0') {
                  local_478 = 0x202;
                  uStack_476 = 0x822;
                  uStack_474 = 0x7a0a90;
                  uStack_470 = 1;
                  uStack_46e = 0;
                  uStack_46c = 0x822;
                  uStack_46a = 0xd2b2;
                  uStack_468 = 0x7a;
                  uStack_466 = 1;
                  uStack_464 = 0;
                  __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_478,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else {
                local_490 = dVar38;
                if (*(int *)((long)dVar38 + 8) != 0x64756c63) {
                  uVar17 = FUN_1001cc310();
                  cVar11 = _os_log_type_enabled(uVar17,0x10);
                  if (cVar11 != '\0') {
                    local_478 = 0x202;
                    uStack_476 = 0x822;
                    uStack_474 = 0x7ab58c;
                    uStack_470 = 1;
                    uStack_46e = 0;
                    uStack_46c = 0x822;
                    uStack_46a = 0xd710;
                    uStack_468 = 0x7a;
                    uStack_466 = 1;
                    uStack_464 = 0;
                    __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                        &local_478,0x16);
                  }
                  cVar11 = FUN_1001782e9(0,1);
                  if (cVar11 == '\0') goto LAB_10051f893;
                }
                if ((*(char *)((long)local_490 + 0x6abd) != '\0') &&
                   (lVar25 = *(long *)((long)local_490 + 0x30), lVar25 != 0)) {
                  if ((*(char *)((long)local_490 + 0x6ac4) != '\0') &&
                     (*(char *)((long)local_490 + 0x3a2) == '\0')) {
                    FUN_1004ded5a(local_490,0);
                    lVar25 = *(long *)((long)local_490 + 0x30);
                  }
                  cVar11 = FUN_100316309(lVar25,0xf);
                  if ((cVar11 != '\0') ||
                     ((long)uVar33 < 0 || *(char *)((long)local_490 + 0x1542a) != '\0')) {
                    iVar14 = FUN_100356c00();
                    if ((iVar14 != -0x80) && (iVar14 != 0)) {
                      uVar17 = FUN_1001cc310();
                      cVar11 = _os_log_type_enabled(uVar17,0x10);
                      if (cVar11 != '\0') {
                        local_478 = 0x202;
                        uStack_476 = 0x822;
                        uStack_474 = 0x7a0a90;
                        uStack_470 = 1;
                        uStack_46e = 0;
                        uStack_46c = 0x400;
                        uStack_46a = (ushort)iVar14;
                        uStack_468 = (ushort)((uint)iVar14 >> 0x10);
                        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                            &local_478,0x12);
                      }
                    }
                    iVar14 = FUN_1002da17a(local_490,local_498 + 0x1a7f,local_498 + 0x1bd2,
                                           local_498 + 0x1d25,uVar3);
                    if ((iVar14 != -0x80) && (iVar14 != 0)) {
                      uVar17 = FUN_1001cc310();
                      cVar11 = _os_log_type_enabled(uVar17,0x10);
                      if (cVar11 != '\0') {
                        local_478 = 0x202;
                        uStack_476 = 0x822;
                        uStack_474 = 0x7a0a90;
                        uStack_470 = 1;
                        uStack_46e = 0;
                        uStack_46c = 0x400;
                        uStack_46a = (ushort)iVar14;
                        uStack_468 = (ushort)((uint)iVar14 >> 0x10);
                        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                            &local_478,0x12);
                      }
                    }
                    iVar14 = FUN_1005239c5(local_480);
                    if ((iVar14 != -0x80) && (iVar14 != 0)) {
                      uVar17 = FUN_1001cc310();
                      cVar11 = _os_log_type_enabled(uVar17,0x10);
                      if (cVar11 != '\0') {
                        local_478 = 0x202;
                        uStack_476 = 0x822;
                        uStack_474 = 0x7a0a90;
                        uStack_470 = 1;
                        uStack_46e = 0;
                        uStack_46c = 0x400;
                        uStack_46a = (ushort)iVar14;
                        uStack_468 = (ushort)((uint)iVar14 >> 0x10);
                        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                            &local_478,0x12);
                      }
                    }
                    if (local_480[0x2271] != 0.0) {
                      local_4b8 = *local_480;
                      lVar25 = FUN_1004e0c3f(local_4b8,1);
                      if (lVar25 == 0) {
                        uVar17 = FUN_1001cc310();
                        cVar11 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar11 != '\0') {
                          local_478 = 0x202;
                          uStack_476 = 0x822;
                          uStack_474 = 0x7a0a90;
                          uStack_470 = 1;
                          uStack_46e = 0;
                          uStack_46c = 0x822;
                          uStack_46a = 0x55c3;
                          uStack_468 = 0x7e;
                          uStack_466 = 1;
                          uStack_464 = 0;
                          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                              &local_478,0x16);
                        }
                        FUN_1001782e9(0,0);
                        pdVar18 = local_498 + 0x2272;
                        *(undefined4 *)(local_480 + 0x2272) = 0xffffffce;
                        iVar14 = -0x32;
LAB_1005209b6:
                        uVar17 = FUN_1001cc310();
                        cVar11 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar11 != '\0') {
                          local_478 = 0x202;
                          uStack_476 = 0x822;
                          uStack_474 = 0x7a0a90;
                          uStack_470 = 1;
                          uStack_46e = 0;
                          uStack_46c = 0x400;
                          uStack_46a = (ushort)iVar14;
                          uStack_468 = (ushort)((uint)iVar14 >> 0x10);
                          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                              &local_478,0x12);
                        }
                      }
                      else {
                        local_4b0 = (undefined8 *)local_480[0x2271];
                        lVar20 = *(long *)((long)local_4b8 + 0x30);
                        if (*(long *)(lVar20 + 0x2cb0) != 0) {
                          uVar17 = FUN_10062af70();
                          local_4b0[0x15] = uVar17;
                        }
                        if ((*(long *)(lVar25 + 0x2cb0) == 0) ||
                           (lVar35 = *(long *)(lVar20 + 0x2cb0), lVar35 == 0)) {
                          *(undefined4 *)(local_480 + 0x2272) = 0;
                          goto LAB_100521758;
                        }
                        local_4b0[2] = *(undefined8 *)(*(long *)(lVar25 + 0x2cb0) + 0x68);
                        local_4b0[4] = *(undefined8 *)(lVar35 + 0x68);
                        FUN_100626f3e(lVar35,0xc9,local_4b0 + 7);
                        FUN_100626f3e(*(undefined8 *)(lVar20 + 0x2cb0),0xca,local_4b0 + 0xb);
                        cVar11 = FUN_1001cd44e("no-genius-sync",0,0);
                        if (cVar11 == '\0') {
                          uVar17 = FUN_1003697e2(lVar25,local_4b0 + 1,0);
                          *local_4b0 = uVar17;
                          lVar20 = FUN_1002f930c(*(undefined8 *)((long)local_4b8 + 0x30));
                          if (lVar20 == 0) {
                            local_4a8 = (double *)CONCAT44(local_4a8._4_4_,1);
                          }
                          else {
                            puVar19 = local_4b0 + 0xf;
                            local_4c8 = local_4b0 + 0x12;
                            local_4a8 = (double *)
                                        CONCAT44(local_4a8._4_4_,
                                                 (int)CONCAT71((int7)((ulong)local_4c8 >> 8),1));
                            do {
                              lVar35 = *(long *)(lVar20 + 0x180);
                              lVar21 = FUN_100309008(lVar25);
                              if ((lVar35 == lVar21) && (*(long *)(lVar20 + 0x188) != 0)) {
                                lVar35 = FUN_100300729(lVar25);
                                if (lVar35 != 0) {
                                  if ((*(long *)(lVar35 + 400) == 0) ||
                                     (*(char *)((long)local_4b8 + 0x14df8) != '\0')) {
                                    if (*(long *)(lVar20 + 400) != 0) {
                                      FUN_1002b7e7c(local_4c8,lVar20 + 400);
                                    }
                                  }
                                  else if (*(int *)(lVar35 + 0x198) != *(int *)(lVar20 + 0x198)) {
                                    *(long *)(lVar20 + 400) = *(long *)(lVar35 + 400);
                                    FUN_1002b7e7c(puVar19,lVar20 + 400);
                                    *(undefined4 *)(lVar20 + 0x198) =
                                         *(undefined4 *)(lVar35 + 0x198);
                                  }
                                }
                              }
                              else {
                                uVar16 = (uint)local_4a8 & 0xff;
                                if (*(long *)(lVar20 + 400) != 0) {
                                  uVar16 = 0;
                                }
                                local_4a8 = (double *)CONCAT44(local_4a8._4_4_,uVar16);
                              }
                              lVar20 = FUN_1002f9451(lVar20);
                            } while (lVar20 != 0);
                          }
                          if (local_4b0[0x11] == 0) {
                            iVar14 = 0;
                            dVar38 = local_4b8;
                          }
                          else {
                            lVar20 = *(long *)(lVar25 + 0x2cb0);
                            local_560 = *(long **)(lVar25 + 0x2cb8);
                            if (local_560 != (long *)0x0) {
                              LOCK();
                              local_560[1] = local_560[1] + 1;
                              UNLOCK();
                            }
                            uVar17 = *(undefined8 *)((long)local_4b8 + 0x16658);
                            plVar36 = *(long **)((long)local_4b8 + 0x16660);
                            if (plVar36 != (long *)0x0) {
                              LOCK();
                              plVar36[1] = plVar36[1] + 1;
                              UNLOCK();
                            }
                            pcStack_4d0 = (char *)0x0;
                            local_4b0[3] = 0;
                            local_4b0[5] = 0;
                            local_4b0[6] = 0;
                            local_4e0 = 0xe;
                            uStack_4db = 0x205443;
                            local_4df = 0x454c4553;
                            local_4d8 = 0;
                            local_568 = lVar20;
                            local_4f8 = uVar17;
                            plStack_4f0 = plVar36;
                            FUN_100626f3e(lVar20,0xc9,&local_538);
                            _snprintf((char *)&local_478,0x100,"%s.%s,%s.%s,",local_538,"version",
                                      local_538,local_528);
                            _strlen((char *)&local_478);
                            std::string::append((char *)&local_4e0,(ulong)&local_478);
                            FUN_100626f3e(lVar20,0xca,&local_588);
                            _snprintf((char *)&local_478,0x100,"%s.%s,%s.%s",local_588,"version",
                                      local_588,local_578);
                            _strlen((char *)&local_478);
                            std::string::append((char *)&local_4e0,(ulong)&local_478);
                            _snprintf((char *)&local_478,0x100," FROM %s,%s",local_538,local_588);
                            _strlen((char *)&local_478);
                            std::string::append((char *)&local_4e0,(ulong)&local_478);
                            _snprintf((char *)&local_478,0x100," WHERE %s.%s=%s.%s",local_538,
                                      local_530,local_588,local_580);
                            _strlen((char *)&local_478);
                            std::string::append((char *)&local_4e0,(ulong)&local_478);
                            _snprintf((char *)&local_478,0x100," AND %s.%s=?",local_538);
                            _strlen((char *)&local_478);
                            std::string::append((char *)&local_4e0,(ulong)&local_478);
                            if ((local_4e0 & 1) == 0) {
                              uVar16 = (uint)(local_4e0 >> 1);
                              pcVar28 = (char *)&local_4df;
                            }
                            else {
                              pcVar28 = pcStack_4d0;
                              uVar16 = (uint)local_4d8;
                            }
                            ppStmt = (sqlite3_stmt **)(local_4b0 + 3);
                            iVar14 = _sqlite3_prepare_v2(*(sqlite3 **)(lVar20 + 0x68),pcVar28,uVar16
                                                         ,ppStmt,(char **)0x0);
                            local_500 = local_4b0 + 5;
                            local_4c8 = local_4b0 + 6;
                            if (iVar14 == -0x80) {
LAB_100521592:
                              puVar19 = local_500;
                              if (*ppStmt != (sqlite3_stmt *)0x0) {
                                _sqlite3_finalize(*ppStmt);
                                *ppStmt = (sqlite3_stmt *)0x0;
                              }
                              pStmt = (sqlite3_stmt *)*puVar19;
                              if (pStmt != (sqlite3_stmt *)0x0) {
                                _sqlite3_finalize(pStmt);
                                *puVar19 = 0;
                              }
                              if ((sqlite3_stmt *)*local_4c8 != (sqlite3_stmt *)0x0) {
                                _sqlite3_finalize((sqlite3_stmt *)*local_4c8);
                                *local_4c8 = 0;
                              }
                            }
                            else {
                              if (iVar14 != 0) {
                                uVar17 = FUN_1001cc310();
                                cVar11 = _os_log_type_enabled(uVar17,0x10);
                                goto joined_r0x0001005214f1;
                              }
                              if (plVar36 != (long *)0x0) {
                                LOCK();
                                plVar36[1] = plVar36[1] + 1;
                                UNLOCK();
                              }
                              local_518 = uVar17;
                              local_510 = plVar36;
                              iVar14 = FUN_10036a061(&local_518,0xc9,local_500,0);
                              if (local_510 != (long *)0x0) {
                                LOCK();
                                plVar36 = local_510 + 1;
                                lVar25 = *plVar36;
                                *plVar36 = *plVar36 + -1;
                                UNLOCK();
                                if (lVar25 == 0) {
                                  (**(code **)(*local_510 + 0x10))(local_510);
                                  std::__shared_weak_count::__release_weak();
                                }
                              }
                              if (iVar14 == -0x80) goto LAB_100521592;
                              if (iVar14 == 0) {
                                local_548 = local_4f8;
                                plStack_540 = plStack_4f0;
                                if (plStack_4f0 != (long *)0x0) {
                                  LOCK();
                                  plStack_4f0[1] = plStack_4f0[1] + 1;
                                  UNLOCK();
                                }
                                iVar14 = FUN_10036a061(&local_548,0xca,local_4c8,0);
                                if (plStack_540 != (long *)0x0) {
                                  LOCK();
                                  plVar36 = plStack_540 + 1;
                                  lVar25 = *plVar36;
                                  *plVar36 = *plVar36 + -1;
                                  UNLOCK();
                                  if (lVar25 == 0) {
                                    (**(code **)(*plStack_540 + 0x10))(plStack_540);
                                    std::__shared_weak_count::__release_weak();
                                  }
                                }
                                if ((iVar14 != -0x80) && (iVar14 != 0)) {
                                  uVar17 = FUN_1001cc310();
                                  cVar11 = _os_log_type_enabled(uVar17,0x10);
                                  goto joined_r0x0001005214f1;
                                }
                              }
                              else {
                                uVar17 = FUN_1001cc310();
                                cVar11 = _os_log_type_enabled(uVar17,0x10);
joined_r0x0001005214f1:
                                if (cVar11 != '\0') {
                                  local_4c = 0x400;
                                  local_54 = "Assertion failure";
                                  local_58 = 0x8220202;
                                  local_4a = iVar14;
                                  __os_log_error_impl(0x100000000,uVar17,0x10,
                                                      "%{public}s: err == (%d)",&local_58,0x12);
                                }
                              }
                              if (iVar14 != 0) goto LAB_100521592;
                              iVar14 = 0;
                            }
                            if ((local_4e0 & 1) != 0) {
                              operator_delete(pcStack_4d0);
                            }
                            if (plStack_4f0 != (long *)0x0) {
                              LOCK();
                              plVar36 = plStack_4f0 + 1;
                              lVar25 = *plVar36;
                              *plVar36 = *plVar36 + -1;
                              UNLOCK();
                              if (lVar25 == 0) {
                                (**(code **)(*plStack_4f0 + 0x10))(plStack_4f0);
                                std::__shared_weak_count::__release_weak();
                              }
                            }
                            dVar38 = local_4b8;
                            if (local_560 != (long *)0x0) {
                              LOCK();
                              plVar36 = local_560 + 1;
                              lVar25 = *plVar36;
                              *plVar36 = *plVar36 + -1;
                              UNLOCK();
                              if (lVar25 == 0) {
                                (**(code **)(*local_560 + 0x10))(local_560);
                                std::__shared_weak_count::__release_weak();
                              }
                            }
                            if ((iVar14 != -0x80) && (iVar14 != 0)) {
                              uVar17 = FUN_1001cc310();
                              cVar11 = _os_log_type_enabled(uVar17,0x10);
                              if (cVar11 != '\0') {
                                local_478 = 0x202;
                                uStack_476 = 0x822;
                                uStack_474 = 0x7a0a90;
                                uStack_470 = 1;
                                uStack_46e = 0;
                                uStack_46c = 0x400;
                                uStack_46a = (ushort)iVar14;
                                uStack_468 = (ushort)((uint)iVar14 >> 0x10);
                                __os_log_error_impl(0x100000000,uVar17,0x10,
                                                    "%{public}s: err == (%d)",&local_478,0x12);
                              }
                            }
                          }
                          if (DAT_1008c75c0 != -1) {
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          uVar17 = DAT_1008c75b8;
                          cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
                          if (cVar11 != '\0') {
                            uVar23 = local_4b0[0x11];
                            local_478 = 0x100;
                            uStack_476 = 0x800;
                            uStack_474 = (uint)uVar23;
                            uStack_470 = (undefined2)((ulong)uVar23 >> 0x20);
                            uStack_46e = (ushort)((ulong)uVar23 >> 0x30);
                            __os_log_impl(0x100000000,uVar17,1,"genius sync>  %lu tracks",&local_478
                                          ,0xc);
                          }
                        }
                        else {
                          if (DAT_1008c75c0 != -1) {
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          uVar17 = DAT_1008c75b8;
                          cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
                          if (cVar11 != '\0') {
                            local_478 = 0;
                            __os_log_impl(0x100000000,uVar17,1,
                                          "genius sync>  genius syncing disabled",&local_478,2);
                          }
                          lVar20 = FUN_1002f930c(*(undefined8 *)((long)local_4b8 + 0x30));
                          if (lVar20 == 0) {
                            local_4a8 = (double *)CONCAT44(local_4a8._4_4_,1);
                          }
                          else {
                            puVar19 = local_4b0 + 0x12;
                            local_4a8 = (double *)
                                        CONCAT44(local_4a8._4_4_,
                                                 (int)CONCAT71((int7)((ulong)local_4b0 >> 8),1));
                            do {
                              if (*(long *)(lVar20 + 400) != 0) {
                                lVar35 = *(long *)(lVar20 + 0x180);
                                lVar21 = FUN_100309008(lVar25);
                                if (lVar35 == lVar21) {
                                  FUN_1002b7e7c(puVar19,lVar20 + 400);
                                }
                                else {
                                  local_4a8 = (double *)((ulong)local_4a8 & 0xffffffff00000000);
                                }
                              }
                              lVar20 = FUN_1002f9451(lVar20);
                            } while (lVar20 != 0);
                          }
                          iVar14 = 0;
                          dVar38 = local_4b8;
                        }
                        if ((*(char *)((long)dVar38 + 0x151d0) == '\0') ||
                           (bVar13 = 1, *(char *)((long)dVar38 + 0x6abf) == '\0')) {
                          bVar13 = (byte)local_4a8 & 1;
                        }
                        *(byte *)((long)local_4b0 + 0xb1) = bVar13;
                        pdVar18 = local_498 + 0x2272;
                        *(int *)(local_480 + 0x2272) = iVar14;
                        if (iVar14 != -0x80) {
                          if (iVar14 == 0) goto LAB_100521758;
                          goto LAB_1005209b6;
                        }
                      }
                      if (DAT_1008c75c0 != -1) {
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar17 = DAT_1008c75b8;
                      cVar11 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                      if (cVar11 != '\0') {
                        uStack_474 = *(uint *)pdVar18;
                        local_478 = 0x100;
                        uStack_476 = 0x400;
                        __os_log_impl(0x100000000,uVar17,0x10,"BuildGeniusSaveContext failed (%d)",
                                      &local_478,8);
                      }
                    }
LAB_100521758:
                    if (*(long *)((long)local_490 + 0x30) == 0) {
                      uVar17 = FUN_1001cc310();
                      cVar11 = _os_log_type_enabled(uVar17,0x10);
                      if (cVar11 != '\0') {
                        local_478 = 0x202;
                        uStack_476 = 0x822;
                        uStack_474 = 0x7a0a90;
                        uStack_470 = 1;
                        uStack_46e = 0;
                        uStack_46c = 0x822;
                        uStack_46a = 0x4df;
                        uStack_468 = 0x7c;
                        uStack_466 = 1;
                        uStack_464 = 0;
                        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                            &local_478,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                    else {
                      dVar38 = local_490;
                      if (*(char *)((long)local_490 + 0x6abf) != '\0') {
                        lVar25 = FUN_1002796f8(1,0);
                        if (lVar25 == 0) {
                          FUN_1001b7a44(&local_478);
                        }
                        else {
                          FUN_1001b7a5c(&local_478,lVar25 + 0x30);
                        }
                        dVar38 = local_490;
                        FUN_1001b8172(*(long *)((long)local_490 + 0x30) + 0x2740,&local_478);
                        FUN_1001b7a50(&local_478);
                        if ((*(long *)((long)dVar38 + 0x7168) != 0) &&
                           (*(ushort *)((long)dVar38 + 100) < 0xf00)) {
                          cVar11 = FUN_1001b8428(*(long *)((long)dVar38 + 0x30) + 0x2740);
                          uVar17 = *(undefined8 *)((long)local_490 + 0x7168);
                          if (cVar11 == '\0') {
                            FUN_1001aaf14(&local_478,*(long *)((long)local_490 + 0x30) + 0x2740);
                            FUN_1005bbe02(uVar17,&cf_com_apple_mobile_iTunes_store,&cf_LibraryCUID,
                                          &local_478,0,0);
                            FUN_1001ab006(&local_478);
                            dVar38 = local_490;
                          }
                          else {
                            FUN_1005bc1a3(uVar17,&cf_com_apple_mobile_iTunes_store,&cf_LibraryCUID,0
                                          ,0);
                            dVar38 = local_490;
                          }
                        }
                      }
                      bVar37 = *(char *)((long)dVar38 + 0x35d) != '\0';
                      uVar16 = bVar37 + 2;
                      if (*(char *)((long)dVar38 + 0x35e) == '\0') {
                        uVar16 = (uint)bVar37;
                      }
                      uVar4 = *(ushort *)((long)dVar38 + 0x40c);
                      if (uVar4 - 2 < 2) {
                        uVar15 = uVar16 + 0x6000;
                      }
                      else if (uVar4 == 4) {
                        uVar15 = uVar16 + 0x4000;
                      }
                      else {
                        uVar15 = uVar16;
                        if (uVar4 == 5) {
                          uVar15 = uVar16 + 0x8000;
                        }
                      }
                      if (*(char *)((long)local_490 + 0x36e) != '\0') {
                        uVar15 = (uint)(*(char *)((long)local_490 + 0x346) != '\0') << 3 | uVar15 |
                                 4;
                      }
                      uVar27 = uVar15 | 0x10;
                      if (*(char *)((long)local_490 + 0x360) == '\0') {
                        uVar27 = uVar15;
                      }
                      uVar15 = uVar27 | 0x20;
                      if (*(char *)((long)local_490 + 0x361) == '\0') {
                        uVar15 = uVar27;
                      }
                      uVar27 = uVar15 + 0x200000;
                      if (*(char *)((long)local_490 + 0x395) == '\0') {
                        uVar27 = uVar15;
                      }
                      uVar15 = uVar27 | 0x80;
                      if (*(char *)((long)local_490 + 0x36f) == '\0') {
                        uVar15 = uVar27;
                      }
                      uVar27 = uVar15 | 0x100;
                      if (*(char *)((long)local_490 + 0x372) == '\0') {
                        uVar27 = uVar15;
                      }
                      uVar15 = uVar27 | 0x200;
                      if (*(char *)((long)local_490 + 0x360) == '\0') {
                        uVar15 = uVar27;
                      }
                      if (*(char *)((long)local_490 + 0x35c) != '\0') {
                        uVar15 = uVar27;
                      }
                      uVar27 = uVar15 | 0x800;
                      if (*(char *)((long)local_490 + 0x37c) == '\0') {
                        uVar27 = uVar15;
                      }
                      if (*(char *)((long)local_490 + 0x388) != '\0') {
                        uVar27 = (uint)(*(char *)((long)local_490 + 0x38a) != '\0') << 0x11 | uVar27
                                 | 0x10000;
                      }
                      if (*(char *)((long)local_490 + 0x35f) == '\0') {
                        if (*(char *)((long)local_490 + 0x3a2) != '\0') goto LAB_1005219d9;
                      }
                      else if (*(char *)((long)local_490 + 0x3a2) == '\0') {
                        uVar27 = uVar27 | 0x400000;
                      }
                      else {
LAB_1005219d9:
                        uVar27 = uVar27 | 0xcc00000;
                      }
                      uVar15 = uVar27 | 0x100000;
                      if (*(char *)((long)local_490 + 0x347) == '\0') {
                        uVar15 = uVar27;
                      }
                      uVar27 = uVar15 | 0x2000000;
                      if (*(char *)((long)local_490 + 0x351) == '\0') {
                        uVar27 = uVar15;
                      }
                      if ((*(long *)((long)local_490 + 0x66c0) != 0) &&
                         (cVar11 = FUN_100496ed6(), cVar11 != '\0')) {
                        if (*(char *)(local_480 + 0x1e78) != '\0') {
                          uVar17 = FUN_1001cc310();
                          cVar11 = _os_log_type_enabled(uVar17,0x10);
                          if (cVar11 != '\0') {
                            local_478 = 0x202;
                            uStack_476 = 0x822;
                            uStack_474 = 0x7a0a90;
                            uStack_470 = 1;
                            uStack_46e = 0;
                            uStack_46c = 0x822;
                            uStack_46a = 0x5497;
                            uStack_468 = 0x7e;
                            uStack_466 = 1;
                            uStack_464 = 0;
                            __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                                &local_478,0x16);
                          }
                          FUN_1001782e9(0,0);
                        }
                        local_4a8 = local_498 + 0x1e79;
                        iVar14 = FUN_1001601fd(local_4a8,0x20000);
                        if (iVar14 != -0x80) {
                          if (iVar14 != 0) {
                            uVar17 = FUN_1001cc310();
                            cVar11 = _os_log_type_enabled(uVar17,0x10);
                            if (cVar11 != '\0') {
                              local_478 = 0x202;
                              uStack_476 = 0x822;
                              uStack_474 = 0x7a0a90;
                              uStack_470 = 1;
                              uStack_46e = 0;
                              uStack_46c = 0x400;
                              uStack_46a = (ushort)iVar14;
                              uStack_468 = (ushort)((uint)iVar14 >> 0x10);
                              __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                                  &local_478,0x12);
                            }
                            if (iVar14 != 0) goto LAB_100521c77;
                          }
                          if (*(char *)(*(long *)((long)local_490 + 0x66c0) + 5) == '\0') {
                            uVar17 = FUN_1001cc310();
                            cVar11 = _os_log_type_enabled(uVar17,0x10);
                            if (cVar11 != '\0') {
                              local_478 = 0x202;
                              uStack_476 = 0x822;
                              uStack_474 = 0x7a0a90;
                              uStack_470 = 1;
                              uStack_46e = 0;
                              uStack_46c = 0x822;
                              uStack_46a = 0x54be;
                              uStack_468 = 0x7e;
                              uStack_466 = 1;
                              uStack_464 = 0;
                              __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)"
                                                  ,&local_478,0x16);
                            }
                            FUN_1001782e9(0,0);
                          }
                          else {
                            uVar16 = FUN_10038f215(*(long *)((long)local_490 + 0x66c0),uVar16,
                                                   local_4a8);
                            if (uVar16 != 0xffffff80) {
                              if (uVar16 == 0) {
                                iVar14 = FUN_10017d477(*(long *)((long)local_490 + 0x66c0) + 4000,0,
                                                       local_498 + 0x1f06);
                                if (iVar14 == -0x80) goto LAB_100521c5b;
                                if (iVar14 == 0) {
LAB_100521b4c:
                                  iVar14 = FUN_10017d5ba(*(long *)((long)local_490 + 0x66c0) + 4000,
                                                         local_498 + 0x1e82);
                                  if ((iVar14 != -0x80) && (iVar14 != 0)) {
                                    uVar17 = FUN_1001cc310();
                                    cVar11 = _os_log_type_enabled(uVar17,0x10);
                                    if (cVar11 != '\0') {
                                      local_478 = 0x202;
                                      uStack_476 = 0x822;
                                      uStack_474 = 0x7a0a90;
                                      uStack_470 = 1;
                                      uStack_46e = 0;
                                      uStack_46c = 0x400;
                                      uStack_46a = (ushort)iVar14;
                                      uStack_468 = (ushort)((uint)iVar14 >> 0x10);
                                      __os_log_error_impl(0x100000000,uVar17,0x10,
                                                          "%{public}s: err == (%d)",&local_478,0x12)
                                      ;
                                    }
                                    goto LAB_100521c5b;
                                  }
                                }
                                else {
                                  uVar17 = FUN_1001cc310();
                                  cVar11 = _os_log_type_enabled(uVar17,0x10);
                                  if (cVar11 != '\0') {
                                    local_478 = 0x202;
                                    uStack_476 = 0x822;
                                    uStack_474 = 0x7a0a90;
                                    uStack_470 = 1;
                                    uStack_46e = 0;
                                    uStack_46c = 0x400;
                                    uStack_46a = (ushort)iVar14;
                                    uStack_468 = (ushort)((uint)iVar14 >> 0x10);
                                    __os_log_error_impl(0x100000000,uVar17,0x10,
                                                        "%{public}s: err == (%d)",&local_478,0x12);
                                  }
                                  if (iVar14 == 0) goto LAB_100521b4c;
                                }
                                if (iVar14 == 0) {
                                  FUN_100496f8c(*(undefined8 *)((long)local_490 + 0x66c0),0);
                                  *(undefined1 *)(local_480 + 0x1e78) = 1;
                                  goto LAB_100521c77;
                                }
                                goto LAB_100521c5b;
                              }
                              uVar17 = FUN_1001cc310();
                              cVar11 = _os_log_type_enabled(uVar17,0x10);
                              if (cVar11 != '\0') {
                                local_478 = 0x202;
                                uStack_476 = 0x822;
                                uStack_474 = 0x7a0a90;
                                uStack_470 = 1;
                                uStack_46e = 0;
                                uStack_46c = 0x400;
                                uStack_46a = (ushort)uVar16;
                                uStack_468 = (ushort)(uVar16 >> 0x10);
                                __os_log_error_impl(0x100000000,uVar17,0x10,
                                                    "%{public}s: err == (%d)",&local_478,0x12);
                              }
                            }
                            if (DAT_1008c75c0 != -1) {
                              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                            }
                            uVar17 = DAT_1008c75b8;
                            cVar11 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                            if (cVar11 != '\0') {
                              local_478 = 0x100;
                              uStack_476 = 0x400;
                              uStack_474 = uVar16;
                              __os_log_impl(0x100000000,uVar17,0x10,
                                            "sync> SaveITImageDBToBuffer failed (%d)",&local_478,8);
                            }
                          }
LAB_100521c5b:
                          if (*(char *)(local_480 + 0x1e78) == '\0') {
                            FUN_10016013b(local_4a8);
                          }
                        }
                      }
LAB_100521c77:
                      pcVar28 = "iTunesCDB";
                      if ((uVar27 >> 0x16 & 1) == 0) {
                        pcVar28 = "iTunesDB";
                      }
                      FUN_1001e04f5(pcVar28,local_498 + 0x91);
                      local_4a8 = (double *)((long)local_490 + 0x75e0);
                      cVar11 = FUN_10017cbd0();
                      if (cVar11 == '\0') {
                        uVar17 = FUN_1001cc310();
                        cVar11 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar11 != '\0') {
                          local_478 = 0x202;
                          uStack_476 = 0x822;
                          uStack_474 = 0x7a0a90;
                          uStack_470 = 1;
                          uStack_46e = 0;
                          uStack_46c = 0x822;
                          uStack_46a = 0x54f0;
                          uStack_468 = 0x7e;
                          uStack_466 = 1;
                          uStack_464 = 0;
                          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                              &local_478,0x16);
                        }
                        FUN_1001782e9(0,0);
                      }
                      _memcpy(local_498 + 0xd,local_4a8,0x420);
                      if (*(char *)(local_480 + 3) != '\0') {
                        uVar17 = FUN_1001cc310();
                        cVar11 = _os_log_type_enabled(uVar17,0x10);
                        if (cVar11 != '\0') {
                          local_478 = 0x202;
                          uStack_476 = 0x822;
                          uStack_474 = 0x7a0a90;
                          uStack_470 = 1;
                          uStack_46e = 0;
                          uStack_46c = 0x822;
                          uStack_46a = 0x5522;
                          uStack_468 = 0x7e;
                          uStack_466 = 1;
                          uStack_464 = 0;
                          __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                              &local_478,0x16);
                        }
                        FUN_1001782e9(0,0);
                      }
                      pdVar18 = local_498 + 4;
                      uVar16 = FUN_1001601fd(pdVar18,0x20000);
                      if (uVar16 != 0xffffff80) {
                        if (uVar16 == 0) {
LAB_100521d83:
                          local_4b8 = (double)FUN_1001ebd46();
                          uVar16 = FUN_1003e554a(*(undefined8 *)((long)local_490 + 0x30),uVar27,
                                                 FUN_10051a92b,local_490,pdVar18);
                          if (uVar16 == 0xffffff80) {
LAB_100521dd7:
                            if (DAT_1008c75c0 != -1) {
                              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                            }
                            uVar17 = DAT_1008c75b8;
                            cVar11 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                            if (cVar11 != '\0') {
                              local_478 = 0x100;
                              uStack_476 = 0x400;
                              uStack_474 = uVar16;
                              __os_log_impl(0x100000000,uVar17,0x10,
                                            "sync> WriteIPodDBToBuffer failed (%d)",&local_478,8);
                              goto LAB_100521e36;
                            }
                          }
                          else {
                            if (uVar16 != 0) {
                              uVar17 = FUN_1001cc310();
                              cVar11 = _os_log_type_enabled(uVar17,0x10);
                              if (cVar11 != '\0') {
                                local_478 = 0x202;
                                uStack_476 = 0x822;
                                uStack_474 = 0x7a0a90;
                                uStack_470 = 1;
                                uStack_46e = 0;
                                uStack_46c = 0x400;
                                uStack_46a = (ushort)uVar16;
                                uStack_468 = (ushort)(uVar16 >> 0x10);
                                __os_log_error_impl(0x100000000,uVar17,0x10,
                                                    "%{public}s: err == (%d)",&local_478,0x12);
                              }
                              goto LAB_100521dd7;
                            }
LAB_100521e36:
                            if (DAT_1008c75c0 != -1) {
                              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                            }
                          }
                          uVar17 = DAT_1008c75b8;
                          cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
                          if (cVar11 != '\0') {
                            dVar38 = (double)FUN_1001ebd46();
                            dVar38 = (dVar38 - local_4b8) * _DAT_100708b48;
                            local_478 = 0x100;
                            uStack_476 = 0x800;
                            uStack_474 = SUB84(dVar38,0);
                            uStack_470 = (undefined2)((ulong)dVar38 >> 0x20);
                            uStack_46e = (ushort)((ulong)dVar38 >> 0x30);
                            __os_log_impl(0x100000000,uVar17,1,
                                          "perf> WriteIPodDBToBuffer() took %.2f ms",&local_478,0xc)
                            ;
                          }
                          if (uVar16 == 0) {
                            FUN_1003164cf(*(undefined8 *)((long)local_490 + 0x30),0xf);
                          }
                          else {
                            FUN_10016013b(pdVar18);
                          }
                          *(bool *)(local_480 + 3) = uVar16 == 0;
                        }
                        else {
                          uVar17 = FUN_1001cc310();
                          cVar11 = _os_log_type_enabled(uVar17,0x10);
                          if (cVar11 != '\0') {
                            local_478 = 0x202;
                            uStack_476 = 0x822;
                            uStack_474 = 0x7a0a90;
                            uStack_470 = 1;
                            uStack_46e = 0;
                            uStack_46c = 0x400;
                            uStack_46a = (ushort)uVar16;
                            uStack_468 = (ushort)(uVar16 >> 0x10);
                            __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",
                                                &local_478,0x12);
                          }
                          if (uVar16 == 0) goto LAB_100521d83;
                        }
                        if (uVar16 == 0) {
                          if ((((uVar27 >> 0x16 & 1) != 0) &&
                              (*(int *)((long)local_490 + 0x66b0) != 0x69506f64)) &&
                             (*(char *)((long)local_490 + 0x3a2) == '\0')) {
                            FUN_1001893a7(local_4a8,"iTunesDB");
                            FUN_100189206(local_4a8,"iTunesDB",&local_478);
                          }
                          if (*(char *)((long)local_490 + 0x35b) != '\0') {
                            uVar16 = FUN_100523299(local_480);
                            if (uVar16 != 0xffffff80) {
                              if (uVar16 == 0) goto LAB_100521ffa;
                              uVar17 = FUN_1001cc310();
                              cVar11 = _os_log_type_enabled(uVar17,0x10);
                              if (cVar11 != '\0') {
                                local_478 = 0x202;
                                uStack_476 = 0x822;
                                uStack_474 = 0x7a0a90;
                                uStack_470 = 1;
                                uStack_46e = 0;
                                uStack_46c = 0x400;
                                uStack_46a = (ushort)uVar16;
                                uStack_468 = (ushort)(uVar16 >> 0x10);
                                __os_log_error_impl(0x100000000,uVar17,0x10,
                                                    "%{public}s: err == (%d)",&local_478,0x12);
                              }
                            }
                            if (DAT_1008c75c0 != -1) {
                              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                            }
                            uVar17 = DAT_1008c75b8;
                            cVar11 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                            if (cVar11 != '\0') {
                              local_478 = 0x100;
                              uStack_476 = 0x400;
                              uStack_474 = uVar16;
                              __os_log_impl(0x100000000,uVar17,0x10,
                                            "sync> SaveIPodShadowDatabase failed (%d)",&local_478,8)
                              ;
                            }
                            if (uVar16 != 0) goto LAB_10051f8b9;
                          }
LAB_100521ffa:
                          if (((*(char *)((long)local_490 + 0x376) != '\0') ||
                              (*(char *)((long)local_490 + 0x377) != '\0')) &&
                             (*(char *)((long)local_490 + 0x3a2) == '\0')) {
                            if (*(char *)(local_480 + 0x1533) != '\0') {
                              uVar17 = FUN_1001cc310();
                              cVar11 = _os_log_type_enabled(uVar17,0x10);
                              if (cVar11 != '\0') {
                                local_478 = 0x202;
                                uStack_476 = 0x822;
                                uStack_474 = 0x7a0a90;
                                uStack_470 = 1;
                                uStack_46e = 0;
                                uStack_46c = 0x822;
                                uStack_46a = 0x5543;
                                uStack_468 = 0x7e;
                                uStack_466 = 1;
                                uStack_464 = 0;
                                __os_log_error_impl(0x100000000,uVar17,0x10,
                                                    "%{public}s: (%{public}s)",&local_478,0x16);
                              }
                              FUN_1001782e9(0,0);
                            }
                            iVar14 = FUN_100589900(*(undefined8 *)((long)local_490 + 0x30),
                                                   *(undefined1 *)((long)local_490 + 0x378),
                                                   *(undefined1 *)((long)local_490 + 0x377),0,
                                                   local_498 + 0x1534);
                            if (iVar14 == -0x80) goto LAB_10051f8b9;
                            if (iVar14 != 0) {
                              uVar17 = FUN_1001cc310();
                              cVar11 = _os_log_type_enabled(uVar17,0x10);
                              if (cVar11 != '\0') {
                                local_478 = 0x202;
                                uStack_476 = 0x822;
                                uStack_474 = 0x7a0a90;
                                uStack_470 = 1;
                                uStack_46e = 0;
                                uStack_46c = 0x400;
                                uStack_46a = (ushort)iVar14;
                                uStack_468 = (ushort)((uint)iVar14 >> 0x10);
                                __os_log_error_impl(0x100000000,uVar17,0x10,
                                                    "%{public}s: err == (%d)",&local_478,0x12);
                              }
                              if (iVar14 != 0) goto LAB_10051f8b9;
                            }
                            FUN_1001e04f5("Ringtones.plist",local_498 + 0x15c1);
                            _memcpy(local_498 + 0x153d,local_4a8,0x420);
                            *(undefined1 *)(local_480 + 0x1533) = 1;
                          }
                          if ((*(char *)((long)local_490 + 0x379) != '\0') &&
                             (*(char *)((long)local_490 + 0x3a2) == '\0')) {
                            if (*(char *)(local_480 + 0x1686) != '\0') {
                              uVar17 = FUN_1001cc310();
                              cVar11 = _os_log_type_enabled(uVar17,0x10);
                              if (cVar11 != '\0') {
                                local_478 = 0x202;
                                uStack_476 = 0x822;
                                uStack_474 = 0x7a0a90;
                                uStack_470 = 1;
                                uStack_46e = 0;
                                uStack_46c = 0x822;
                                uStack_46a = 0x556b;
                                uStack_468 = 0x7e;
                                uStack_466 = 1;
                                uStack_464 = 0;
                                __os_log_error_impl(0x100000000,uVar17,0x10,
                                                    "%{public}s: (%{public}s)",&local_478,0x16);
                              }
                              FUN_1001782e9(0,0);
                            }
                            iVar14 = FUN_10058a90a(*(undefined8 *)((long)local_490 + 0x30),
                                                   local_498 + 0x1687);
                            if (iVar14 == -0x80) goto LAB_10051f8b9;
                            if (iVar14 != 0) {
                              uVar17 = FUN_1001cc310();
                              cVar11 = _os_log_type_enabled(uVar17,0x10);
                              if (cVar11 != '\0') {
                                local_478 = 0x202;
                                uStack_476 = 0x822;
                                uStack_474 = 0x7a0a90;
                                uStack_470 = 1;
                                uStack_46e = 0;
                                uStack_46c = 0x400;
                                uStack_46a = (ushort)iVar14;
                                uStack_468 = (ushort)((uint)iVar14 >> 0x10);
                                __os_log_error_impl(0x100000000,uVar17,0x10,
                                                    "%{public}s: err == (%d)",&local_478,0x12);
                              }
                              if (iVar14 != 0) goto LAB_10051f8b9;
                            }
                            FUN_1001e04f5("Rentals.plist",local_498 + 0x1714);
                            _memcpy(local_498 + 0x1690,local_4a8,0x420);
                            *(undefined1 *)(local_480 + 0x1686) = 1;
                          }
                          if ((*(char *)((long)local_490 + 0x39c) != '\0') &&
                             (*(char *)((long)local_490 + 0x3a2) == '\0')) {
                            if (*(char *)(local_480 + 0x192c) != '\0') {
                              uVar17 = FUN_1001cc310();
                              cVar11 = _os_log_type_enabled(uVar17,0x10);
                              if (cVar11 != '\0') {
                                local_478 = 0x202;
                                uStack_476 = 0x822;
                                uStack_474 = 0x7a0a90;
                                uStack_470 = 1;
                                uStack_46e = 0;
                                uStack_46c = 0x822;
                                uStack_46a = 0x559f;
                                uStack_468 = 0x7e;
                                uStack_466 = 1;
                                uStack_464 = 0;
                                __os_log_error_impl(0x100000000,uVar17,0x10,
                                                    "%{public}s: (%{public}s)",&local_478,0x16);
                              }
                              FUN_1001782e9(0,0);
                            }
                            pdVar18 = local_498 + 0x1936;
                            iVar14 = FUN_1002441f8(*(undefined4 *)((long)local_490 + 0x66b0),
                                                   (long)local_490 + 0x6b40,0x626f6f6b,1,pdVar18);
                            if (iVar14 != -0x80) {
                              if (iVar14 != 0) {
                                uVar17 = FUN_1001cc310();
                                cVar11 = _os_log_type_enabled(uVar17,0x10);
                                if (cVar11 != '\0') {
                                  local_478 = 0x202;
                                  uStack_476 = 0x822;
                                  uStack_474 = 0x7a0a90;
                                  uStack_470 = 1;
                                  uStack_46e = 0;
                                  uStack_46c = 0x400;
                                  uStack_46a = (ushort)iVar14;
                                  uStack_468 = (ushort)((uint)iVar14 >> 0x10);
                                  __os_log_error_impl(0x100000000,uVar17,0x10,
                                                      "%{public}s: err == (%d)",&local_478,0x12);
                                }
                                if (iVar14 != 0) goto LAB_10051f8b9;
                              }
                              iVar14 = FUN_10058b320(*(undefined8 *)((long)local_490 + 0x30),0,0,
                                                     pdVar18,local_498 + 0x192d);
                              if (iVar14 != -0x80) {
                                if (iVar14 != 0) {
                                  uVar17 = FUN_1001cc310();
                                  cVar11 = _os_log_type_enabled(uVar17,0x10);
                                  if (cVar11 != '\0') {
                                    local_478 = 0x202;
                                    uStack_476 = 0x822;
                                    uStack_474 = 0x7a0a90;
                                    uStack_470 = 1;
                                    uStack_46e = 0;
                                    uStack_46c = 0x400;
                                    uStack_46a = (ushort)iVar14;
                                    uStack_468 = (ushort)((uint)iVar14 >> 0x10);
                                    __os_log_error_impl(0x100000000,uVar17,0x10,
                                                        "%{public}s: err == (%d)",&local_478,0x12);
                                  }
                                  if (iVar14 != 0) goto LAB_10051f8b9;
                                }
                                FUN_1001e04f5("Books.plist",local_498 + 0x19ba);
                                *(undefined1 *)(local_480 + 0x192c) = 1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_10051f8b9:
              cVar11 = *(char *)(local_480 + 0x1e78);
              if ((((char)local_4c0 != '\0') && (*(char *)((long)local_488 + 0x35f) != '\0')) &&
                 (*(char *)(local_480 + 3) != '\0')) {
                pvVar22 = operator_new(0x940,(nothrow_t *)PTR_nothrow_10082c970);
                if (pvVar22 == (void *)0x0) {
                  local_480[0x2273] = 0.0;
                  uVar17 = FUN_1001cc310();
                  cVar12 = _os_log_type_enabled(uVar17,0x10);
                  if (cVar12 != '\0') {
                    local_478 = 0x202;
                    uStack_476 = 0x822;
                    uStack_474 = 0x7a0a90;
                    uStack_470 = 1;
                    uStack_46e = 0;
                    uStack_46c = 0x822;
                    uStack_46a = 0x52fe;
                    uStack_468 = 0x7e;
                    uStack_466 = 1;
                    uStack_464 = 0;
                    __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                        &local_478,0x16);
                  }
                  FUN_1001782e9(0,0);
                  *(undefined4 *)(local_480 + 0x2274) = 0xffffff94;
                  pvVar22 = (void *)local_480[0x2273];
                  if (pvVar22 == (void *)0x0) goto LAB_10051fa5b;
                }
                else {
                  *(undefined8 *)((long)pvVar22 + 0x890) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x918) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x920) = 0;
                  *(undefined8 *)((long)pvVar22 + 8) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x10) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x15) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x8b0) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x8b8) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x8c0) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x8c8) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x8d0) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x8d8) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x8e0) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x8e8) = 0;
                  *(undefined4 *)((long)pvVar22 + 0x8f0) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x8f8) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x900) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x908) = 0;
                  *(long *)((long)pvVar22 + 0x910) = (long)pvVar22 + 0x918;
                  *(undefined1 *)((long)pvVar22 + 0x1d) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x898) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x8a0) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x8a8) = 0;
                  ___bzero((long)pvVar22 + 0x50,0x840);
                  *(undefined8 *)((long)pvVar22 + 0x938) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x928) = 0;
                  *(undefined8 *)((long)pvVar22 + 0x930) = 0;
                  local_480[0x2273] = (double)pvVar22;
                }
                iVar14 = FUN_1002c94d6(pvVar22,local_488);
                *(int *)(local_480 + 0x2274) = iVar14;
                if ((iVar14 != -0x80) && (iVar14 != 0)) {
                  uVar17 = FUN_1001cc310();
                  cVar12 = _os_log_type_enabled(uVar17,0x10);
                  if (cVar12 != '\0') {
                    local_478 = 0x202;
                    uStack_476 = 0x822;
                    uStack_474 = 0x7a0a90;
                    uStack_470 = 1;
                    uStack_46e = 0;
                    uStack_46c = 0x400;
                    uStack_46a = (ushort)iVar14;
                    uStack_468 = (ushort)((uint)iVar14 >> 0x10);
                    __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",&local_478
                                        ,0x12);
                  }
                }
              }
            }
LAB_10051fa5b:
            if (((uVar33 & 8) != 0) && (*(char *)(local_480 + 0x2a9) == '\0')) {
              FUN_1005239c5(local_480);
            }
            if ((uVar33 & 0x40) != 0) {
              FUN_100524067(local_480,1);
            }
            if ((char)uVar33 < '\0') {
              FUN_100524067(local_480,2);
            }
            uVar16 = (uint)uVar33;
            if ((uVar16 >> 8 & 1) != 0) {
              FUN_100524067(local_480,3);
            }
            if ((uVar16 >> 9 & 1) != 0) {
              FUN_100524067(local_480,4);
            }
            if ((uVar16 >> 10 & 1) != 0) {
              FUN_1005248b4(*local_480,*(undefined8 *)((long)local_488 + 0x152f8),"iTunesPlaylists",
                            local_498 + 0xd41);
            }
            if ((uVar16 >> 0x14 & 1) != 0) {
              FUN_1005248b4(*local_480,*(undefined8 *)((long)local_488 + 0x15330),"iTunesMovies",
                            local_498 + 0xfe7);
            }
            if ((uVar16 >> 0x15 & 1) != 0) {
              FUN_1005248b4(*local_480,*(undefined8 *)((long)local_488 + 0x15338),
                            "iTunesMoviePlaylists",local_498 + 0x113a);
            }
            pdVar18 = local_498;
            if ((uVar16 >> 0x16 & 1) != 0) {
              uVar17 = *(undefined8 *)((long)local_488 + 0x15340);
              _memcpy(local_498 + 0x1297,(void *)((long)*local_480 + 0x75e0),0x420);
              FUN_1001e04f5("iTunesTVShows",pdVar18 + 0x131b);
              uVar17 = FUN_1003baeee(uVar17);
              uVar23 = FUN_100170f3b(uVar17);
              uVar24 = FUN_100170ef7(uVar17);
              FUN_10024589c(local_498 + 0x128d,uVar23,uVar24);
              FUN_10017060f(uVar17);
            }
            if ((uVar16 >> 0x19 & 1) != 0) {
              FUN_1005248b4(*local_480,*(undefined8 *)((long)local_488 + 0x15358),
                            "iTunesTVShowPlaylists",local_498 + 0x13e0);
            }
            if ((uVar16 >> 0xe & 1) != 0) {
              FUN_1005248b4(*local_480,*(undefined8 *)((long)local_488 + 0x15318),"iTunesPodcasts",
                            local_498 + 0xe94);
            }
            if ((uVar33 >> 0x20 & 1) != 0) {
              FUN_100524929(local_480,*(undefined8 *)((long)local_488 + 0x16210),"VoiceMemos.plist",
                            local_498 + 0x17d9);
            }
            if ((uVar33 >> 0x21 & 1) != 0) {
              dVar38 = *local_480;
              if (*(char *)((long)dVar38 + 0x399) == '\0') {
                uVar17 = FUN_1001cc310();
                cVar12 = _os_log_type_enabled(uVar17,0x10);
                if (cVar12 != '\0') {
                  local_478 = 0x202;
                  uStack_476 = 0x822;
                  uStack_474 = 0x7a0a90;
                  uStack_470 = 1;
                  uStack_46e = 0;
                  uStack_46c = 0x822;
                  uStack_46a = 0x5747;
                  uStack_468 = 0x7e;
                  uStack_466 = 1;
                  uStack_464 = 0;
                  __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_478,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else if (*(int *)((long)dVar38 + 0x66b0) == 0x69506f64) {
                *(undefined1 *)((long)dVar38 + 0x1664b) = 0;
                FUN_1005afc12();
              }
              else {
                uVar17 = FUN_1001cc310();
                cVar12 = _os_log_type_enabled(uVar17,0x10);
                if (cVar12 != '\0') {
                  local_478 = 0x202;
                  uStack_476 = 0x822;
                  uStack_474 = 0x7a0a90;
                  uStack_470 = 1;
                  uStack_46e = 0;
                  uStack_46c = 0x822;
                  uStack_46a = 0x5775;
                  uStack_468 = 0x7e;
                  uStack_466 = 1;
                  uStack_464 = 0;
                  __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_478,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
            }
            if ((uVar33 >> 0x25 & 1) != 0) {
              *(undefined1 *)((long)local_480 + 0x113a4) = 1;
            }
            iVar14 = FUN_1001ee6ff(FUN_100524a2d,local_480,0xfffffffe,0,0);
            if (iVar14 != -0x80) {
              if (iVar14 != 0) {
                uVar17 = FUN_1001cc310();
                cVar12 = _os_log_type_enabled(uVar17,0x10);
                if (cVar12 != '\0') {
                  local_478 = 0x202;
                  uStack_476 = 0x822;
                  uStack_474 = 0x7a0a90;
                  uStack_470 = 1;
                  uStack_46e = 0;
                  uStack_46c = 0x400;
                  uStack_46a = (ushort)iVar14;
                  uStack_468 = (ushort)((uint)iVar14 >> 0x10);
                  __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)");
                }
                if (iVar14 != 0) goto LAB_10051fdd6;
              }
              iVar14 = FUN_1001e9afc(local_508);
              if ((iVar14 != -0x80) && (iVar14 != 0)) {
                uVar17 = FUN_1001cc310();
                cVar12 = _os_log_type_enabled(uVar17,0x10);
                if (cVar12 != '\0') {
                  local_478 = 0x202;
                  uStack_476 = 0x822;
                  uStack_474 = 0x7a0a90;
                  uStack_470 = 1;
                  uStack_46e = 0;
                  uStack_46c = 0x400;
                  uStack_46a = (ushort)iVar14;
                  uStack_468 = (ushort)((uint)iVar14 >> 0x10);
                  __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)");
                }
              }
            }
LAB_10051fdd6:
            uVar16 = SUB84(local_4a0,0);
            pdVar18 = local_480;
            if ((cVar11 != '\0') && (*(long *)((long)local_488 + 0x66c0) != 0)) {
              iVar14 = *(int *)(local_480 + 0x1f46);
              if ((iVar14 != -0x80) && (iVar14 != 0)) {
                uVar17 = FUN_1001cc310();
                cVar11 = _os_log_type_enabled(uVar17,0x10);
                if (cVar11 != '\0') {
                  local_478 = 0x202;
                  uStack_476 = 0x822;
                  uStack_474 = 0x7a0a90;
                  uStack_470 = 1;
                  uStack_46e = 0;
                  uStack_46c = 0x400;
                  uStack_46a = (ushort)iVar14;
                  uStack_468 = (ushort)((uint)iVar14 >> 0x10);
                  __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)");
                }
                iVar14 = *(int *)(local_480 + 0x1f46);
                uVar16 = SUB84(local_4a0,0);
              }
              pdVar18 = local_480;
              dVar38 = local_488;
              if (iVar14 == 0) {
                _memcpy((void *)(*(long *)((long)local_488 + 0x66c0) + 4000),local_498 + 0x1f47,
                        0x420);
              }
              else {
                FUN_1001c62d9(*(long *)((long)local_488 + 0x66c0) + 4000,0x420);
                uVar16 = SUB84(local_4a0,0);
                dVar38 = local_488;
                pdVar18 = local_480;
              }
              *(bool *)(*(long *)((long)dVar38 + 0x66c0) + 5) = iVar14 == 0;
            }
            lVar25 = 0x688;
            do {
              uVar15 = *(uint *)((long)pdVar18 + lVar25);
              if (*(uint *)((long)pdVar18 + lVar25) != 0) break;
              lVar25 = lVar25 + 0xa98;
              uVar15 = uVar16;
            } while (lVar25 != 0x119f8);
            pdVar32 = (double *)pdVar18[0x2271];
            if (pdVar32 == (double *)0x0) {
LAB_100520557:
              uVar16 = *(uint *)(pdVar18 + 0x2272);
            }
            else {
              local_4a0 = *pdVar18;
              dVar38 = pdVar32[0x15];
              if (dVar38 != 0.0) {
                lVar25 = *(long *)((long)local_4a0 + 0x16658);
                if (lVar25 == 0) {
                  uVar17 = FUN_1001cc310();
                  cVar11 = _os_log_type_enabled(uVar17,0x10);
                  if (cVar11 != '\0') {
                    local_478 = 0x202;
                    uStack_476 = 0x822;
                    uStack_474 = 0x7a0a90;
                    uStack_470 = 1;
                    uStack_46e = 0;
                    uStack_46c = 0x822;
                    uStack_46a = 0x6199;
                    uStack_468 = 0x7d;
                    uStack_466 = 1;
                    uStack_464 = 0;
                    __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)");
                  }
                  FUN_1001782e9(0,0);
                  lVar25 = *(long *)((long)local_4a0 + 0x16658);
                  pdVar18 = local_480;
                  if (lVar25 == 0) goto LAB_10051ff80;
                  dVar38 = pdVar32[0x15];
                }
                FUN_100626cf6(lVar25,dVar38);
                pdVar18 = local_480;
              }
LAB_10051ff80:
              if (*(int *)((long)pdVar32 + 0xc) == 0) {
                if (pdVar32[0x14] != 0.0) {
                  FUN_100313e0b(*(undefined8 *)((long)local_4a0 + 0x30));
                  local_490 = (double)CONCAT44(local_490._4_4_,uVar15);
                  local_478 = 0;
                  uStack_476 = 0;
                  uStack_474 = 0;
                  uStack_470 = 0;
                  uStack_46e = 0;
                  uStack_46c = 0;
                  uStack_46a = 0;
                  uStack_468 = 0;
                  uStack_466 = 0;
                  uStack_464 = 0;
                  uStack_462 = 0;
                  pdVar18 = (double *)pdVar32[0x12];
                  local_4c0 = pdVar32 + 0x13;
                  if (pdVar18 != local_4c0) {
                    do {
                      local_4a8 = pdVar32;
                      for (lVar25 = FUN_1003075bc(*(undefined8 *)((long)local_4a0 + 0x30),pdVar18[4]
                                                 ); pdVar32 = local_4a8, lVar25 != 0;
                          lVar25 = FUN_100307a3e(lVar25)) {
                        plVar36 = (long *)CONCAT26(uStack_46a,
                                                   CONCAT24(uStack_46c,
                                                            CONCAT22(uStack_46e,uStack_470)));
                        plVar2 = (long *)CONCAT26(uStack_462,
                                                  CONCAT24(uStack_464,
                                                           CONCAT22(uStack_466,uStack_468)));
                        if (plVar36 < plVar2) {
                          *plVar36 = lVar25;
                          plVar36 = plVar36 + 1;
                        }
                        else {
                          lVar20 = CONCAT44(uStack_474,CONCAT22(uStack_476,local_478));
                          lVar35 = (long)plVar36 - lVar20 >> 3;
                          uVar33 = lVar35 + 1;
                          if (0x1fffffffffffffff < uVar33) {
                            FUN_1002c2cdc(&local_478);
                            goto LAB_1005231be;
                          }
                          uVar26 = (long)plVar2 - lVar20;
                          uVar31 = (long)uVar26 >> 2;
                          if (uVar31 <= uVar33) {
                            uVar31 = uVar33;
                          }
                          if (0x7ffffffffffffff7 < uVar26) {
                            uVar31 = 0x1fffffffffffffff;
                          }
                          if (uVar31 == 0) {
                            auVar39 = ZEXT816(0);
                          }
                          else {
                            auVar39 = FUN_100249b6c(&uStack_468);
                          }
                          lVar21 = auVar39._0_8_;
                          plVar2 = (long *)(lVar21 + lVar35 * 8);
                          lVar20 = lVar21 + auVar39._8_8_ * 8;
                          *plVar2 = lVar25;
                          plVar36 = (long *)(lVar21 + lVar35 * 8 + 8);
                          pvVar22 = (void *)CONCAT44(uStack_474,CONCAT22(uStack_476,local_478));
                          sVar29 = CONCAT26(uStack_46a,
                                            CONCAT24(uStack_46c,CONCAT22(uStack_46e,uStack_470))) -
                                   (long)pvVar22;
                          pvVar30 = (void *)((long)plVar2 - sVar29);
                          _memcpy(pvVar30,pvVar22,sVar29);
                          pvVar22 = (void *)CONCAT44(uStack_474,CONCAT22(uStack_476,local_478));
                          local_478 = SUB82(pvVar30,0);
                          uStack_476 = (ushort)((ulong)pvVar30 >> 0x10);
                          uStack_474 = (uint)((ulong)pvVar30 >> 0x20);
                          uStack_470 = SUB82(plVar36,0);
                          uStack_46e = (ushort)((ulong)plVar36 >> 0x10);
                          uStack_46c = (ushort)((ulong)plVar36 >> 0x20);
                          uStack_46a = (ushort)((ulong)plVar36 >> 0x30);
                          uStack_468 = (ushort)lVar20;
                          uStack_466 = (undefined2)((ulong)lVar20 >> 0x10);
                          uStack_464 = (undefined2)((ulong)lVar20 >> 0x20);
                          uStack_462 = (ushort)((ulong)lVar20 >> 0x30);
                          if (pvVar22 != (void *)0x0) {
                            operator_delete(pvVar22);
                          }
                        }
                        uStack_470 = SUB82(plVar36,0);
                        uStack_46e = (ushort)((ulong)plVar36 >> 0x10);
                        uStack_46c = (ushort)((ulong)plVar36 >> 0x20);
                        uStack_46a = (ushort)((ulong)plVar36 >> 0x30);
                      }
                      pdVar10 = (double *)pdVar18[1];
                      pdVar34 = pdVar18;
                      if ((double *)pdVar18[1] == (double *)0x0) {
                        do {
                          pdVar18 = (double *)pdVar34[2];
                          bVar37 = (double *)*pdVar18 != pdVar34;
                          pdVar34 = pdVar18;
                        } while (bVar37);
                      }
                      else {
                        do {
                          pdVar18 = pdVar10;
                          pdVar10 = (double *)*pdVar18;
                        } while ((double *)*pdVar18 != (double *)0x0);
                      }
                    } while (pdVar18 != local_4c0);
                    plVar36 = (long *)CONCAT44(uStack_474,CONCAT22(uStack_476,local_478));
                    if (plVar36 !=
                        (long *)CONCAT26(uStack_46a,
                                         CONCAT24(uStack_46c,CONCAT22(uStack_46e,uStack_470)))) {
                      do {
                        lVar25 = *plVar36;
                        *(undefined8 *)(lVar25 + 400) = 0;
                        *(undefined4 *)(lVar25 + 0x198) = 0;
                        FUN_100475a22(lVar25,&DAT_100754cb4);
                        plVar36 = plVar36 + 1;
                      } while (plVar36 !=
                               (long *)CONCAT26(uStack_46a,
                                                CONCAT24(uStack_46c,CONCAT22(uStack_46e,uStack_470))
                                               ));
                    }
                  }
                  FUN_1002fbbfc(*(undefined8 *)((long)local_4a0 + 0x30));
                  pdVar18 = local_480;
                  pvVar22 = (void *)CONCAT44(uStack_474,CONCAT22(uStack_476,local_478));
                  uVar15 = local_490._0_4_;
                  if (pvVar22 != (void *)0x0) {
                    uStack_470 = local_478;
                    uStack_46e = uStack_476;
                    uStack_46c = (ushort)uStack_474;
                    uStack_46a = (ushort)(uStack_474 >> 0x10);
                    operator_delete(pvVar22);
                  }
                }
              }
              else {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar17 = DAT_1008c75b8;
                cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar11 != '\0') {
                  uStack_474 = *(uint *)((long)pdVar32 + 0xc);
                  local_478 = 0x100;
                  uStack_476 = 0x400;
                  __os_log_impl(0x100000000,uVar17,1,"genius sync>  error %d");
                }
                if (*(int *)((long)pdVar32 + 0xc) == 0x32d3) {
                  *(undefined1 *)((long)local_4a0 + 0x1666c) = 1;
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar17 = DAT_1008c75b8;
                  cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar11 != '\0') {
                    local_478 = 0;
                    __os_log_impl(0x100000000,uVar17,1,
                                  "genius sync>  sql corruption detected during sync");
                  }
                }
                if (*(long *)((long)local_4a0 + 0x30) != 0) {
                  FUN_100313e0b();
                  if (*(char *)((long)local_4a0 + 0x1666c) == '\x01') {
                    FUN_100369f3c(*(undefined8 *)((long)local_4a0 + 0x30));
                  }
                  else {
                    local_490 = (double)CONCAT44(local_490._4_4_,uVar15);
                    local_478 = 0;
                    uStack_476 = 0;
                    uStack_474 = 0;
                    uStack_470 = 0;
                    uStack_46e = 0;
                    uStack_46c = 0;
                    uStack_46a = 0;
                    uStack_468 = 0;
                    uStack_466 = 0;
                    uStack_464 = 0;
                    uStack_462 = 0;
                    pdVar18 = (double *)pdVar32[0xf];
                    local_4c0 = pdVar32 + 0x10;
                    if (pdVar18 != local_4c0) {
                      do {
                        local_4a8 = pdVar32;
                        for (lVar25 = FUN_1003075bc(*(undefined8 *)((long)local_4a0 + 0x30),
                                                    pdVar18[4]); pdVar32 = local_4a8, lVar25 != 0;
                            lVar25 = FUN_100307a3e(lVar25)) {
                          plVar36 = (long *)CONCAT26(uStack_46a,
                                                     CONCAT24(uStack_46c,
                                                              CONCAT22(uStack_46e,uStack_470)));
                          plVar2 = (long *)CONCAT26(uStack_462,
                                                    CONCAT24(uStack_464,
                                                             CONCAT22(uStack_466,uStack_468)));
                          if (plVar36 < plVar2) {
                            *plVar36 = lVar25;
                            plVar36 = plVar36 + 1;
                          }
                          else {
                            lVar20 = CONCAT44(uStack_474,CONCAT22(uStack_476,local_478));
                            lVar35 = (long)plVar36 - lVar20 >> 3;
                            uVar33 = lVar35 + 1;
                            if (0x1fffffffffffffff < uVar33) {
                              FUN_1002c2cdc(&local_478);
LAB_1005231be:
                    /* WARNING: Does not return */
                              pcVar6 = (code *)invalidInstructionException();
                              (*pcVar6)();
                            }
                            uVar26 = (long)plVar2 - lVar20;
                            uVar31 = (long)uVar26 >> 2;
                            if (uVar31 <= uVar33) {
                              uVar31 = uVar33;
                            }
                            if (0x7ffffffffffffff7 < uVar26) {
                              uVar31 = 0x1fffffffffffffff;
                            }
                            if (uVar31 == 0) {
                              auVar39 = ZEXT816(0);
                            }
                            else {
                              auVar39 = FUN_100249b6c(&uStack_468);
                            }
                            lVar21 = auVar39._0_8_;
                            plVar2 = (long *)(lVar21 + lVar35 * 8);
                            lVar20 = lVar21 + auVar39._8_8_ * 8;
                            *plVar2 = lVar25;
                            plVar36 = (long *)(lVar21 + lVar35 * 8 + 8);
                            pvVar22 = (void *)CONCAT44(uStack_474,CONCAT22(uStack_476,local_478));
                            sVar29 = CONCAT26(uStack_46a,
                                              CONCAT24(uStack_46c,CONCAT22(uStack_46e,uStack_470)))
                                     - (long)pvVar22;
                            pvVar30 = (void *)((long)plVar2 - sVar29);
                            _memcpy(pvVar30,pvVar22,sVar29);
                            pvVar22 = (void *)CONCAT44(uStack_474,CONCAT22(uStack_476,local_478));
                            local_478 = SUB82(pvVar30,0);
                            uStack_476 = (ushort)((ulong)pvVar30 >> 0x10);
                            uStack_474 = (uint)((ulong)pvVar30 >> 0x20);
                            uStack_470 = SUB82(plVar36,0);
                            uStack_46e = (ushort)((ulong)plVar36 >> 0x10);
                            uStack_46c = (ushort)((ulong)plVar36 >> 0x20);
                            uStack_46a = (ushort)((ulong)plVar36 >> 0x30);
                            uStack_468 = (ushort)lVar20;
                            uStack_466 = (undefined2)((ulong)lVar20 >> 0x10);
                            uStack_464 = (undefined2)((ulong)lVar20 >> 0x20);
                            uStack_462 = (ushort)((ulong)lVar20 >> 0x30);
                            if (pvVar22 != (void *)0x0) {
                              operator_delete(pvVar22);
                            }
                          }
                          uStack_470 = SUB82(plVar36,0);
                          uStack_46e = (ushort)((ulong)plVar36 >> 0x10);
                          uStack_46c = (ushort)((ulong)plVar36 >> 0x20);
                          uStack_46a = (ushort)((ulong)plVar36 >> 0x30);
                        }
                        pdVar10 = (double *)pdVar18[1];
                        pdVar34 = pdVar18;
                        if ((double *)pdVar18[1] == (double *)0x0) {
                          do {
                            pdVar18 = (double *)pdVar34[2];
                            bVar37 = (double *)*pdVar18 != pdVar34;
                            pdVar34 = pdVar18;
                          } while (bVar37);
                        }
                        else {
                          do {
                            pdVar18 = pdVar10;
                            pdVar10 = (double *)*pdVar18;
                          } while ((double *)*pdVar18 != (double *)0x0);
                        }
                      } while (pdVar18 != local_4c0);
                      plVar36 = (long *)CONCAT44(uStack_474,CONCAT22(uStack_476,local_478));
                      if (plVar36 !=
                          (long *)CONCAT26(uStack_46a,
                                           CONCAT24(uStack_46c,CONCAT22(uStack_46e,uStack_470)))) {
                        do {
                          lVar25 = *plVar36;
                          *(undefined4 *)(lVar25 + 0x198) = 0;
                          FUN_100475a22(lVar25,&DAT_100754cb4);
                          plVar36 = plVar36 + 1;
                        } while (plVar36 !=
                                 (long *)CONCAT26(uStack_46a,
                                                  CONCAT24(uStack_46c,
                                                           CONCAT22(uStack_46e,uStack_470))));
                        plVar36 = (long *)CONCAT44(uStack_474,CONCAT22(uStack_476,local_478));
                      }
                      if (plVar36 != (long *)0x0) {
                        uStack_470 = SUB82(plVar36,0);
                        uStack_46e = (ushort)((ulong)plVar36 >> 0x10);
                        uStack_46c = (ushort)((ulong)plVar36 >> 0x20);
                        uStack_46a = (ushort)((ulong)plVar36 >> 0x30);
                        operator_delete(plVar36);
                      }
                    }
                    uVar15 = local_490._0_4_;
                  }
                  FUN_1002fbbfc(*(undefined8 *)((long)local_4a0 + 0x30));
                  pdVar18 = local_480;
                }
              }
              uVar16 = *(uint *)((long)pdVar32 + 0xc);
              if (uVar16 == 0) {
                *(byte *)((long)local_4a0 + 0x6afd) = *(byte *)(pdVar32 + 0x16) ^ 1;
                goto LAB_100520557;
              }
              *(undefined1 *)((long)local_4a0 + 0x6afd) = 0;
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar17 = DAT_1008c75b8;
              cVar11 = _os_log_type_enabled(DAT_1008c75b8,0x10);
              if (cVar11 != '\0') {
                local_478 = 0x100;
                uStack_476 = 0x400;
                uStack_474 = uVar16;
                __os_log_impl(0x100000000,uVar17,0x10,"FinishGeniusSync failed (%d)");
              }
            }
            if (uVar15 != 0) {
              uVar16 = uVar15;
            }
            *(undefined4 *)(pdVar18 + 0x2272) = 0;
            if ((pdVar18[0x2273] == 0.0) ||
               (uVar15 = *(uint *)((long)pdVar18[0x2273] + 0x18), uVar15 == 0)) {
              uVar15 = *(uint *)(pdVar18 + 0x2274);
              if (uVar15 == 0) {
                uVar15 = 0;
              }
              else {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar17 = DAT_1008c75b8;
                cVar11 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                if (cVar11 != '\0') {
                  pcVar28 = "iPodSQLDatabaseSync::PrepareSync failed (%d)";
                  goto LAB_100520634;
                }
              }
            }
            else {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar17 = DAT_1008c75b8;
              cVar11 = _os_log_type_enabled(DAT_1008c75b8,0x10);
              if (cVar11 != '\0') {
                pcVar28 = "iPodSQLDatabaseSync::FinishSync failed (%d)";
LAB_100520634:
                uStack_476 = 0x400;
                local_478 = 0x100;
                uStack_474 = uVar15;
                __os_log_impl(0x100000000,uVar17,0x10,pcVar28);
              }
            }
            if (uVar16 != 0) {
              uVar15 = uVar16;
            }
            local_4a0 = (double)(ulong)uVar15;
            *(undefined4 *)(pdVar18 + 0x2274) = 0;
            if ((*(char *)(pdVar18 + 3) != '\0') &&
               (lVar25 = _CFNotificationCenterGetDistributedCenter(), lVar25 != 0)) {
              uVar17 = FUN_100501f71(*local_480);
              uVar23 = FUN_100166547(0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                     PTR__kCFTypeDictionaryValueCallBacks_10082e140,
                                     &cf_deviceIdentifier,uVar17);
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar24 = DAT_1008c75b8;
              cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar11 != '\0') {
                local_478 = 0x102;
                uStack_476 = 0x842;
                uStack_474 = (uint)uVar17;
                uStack_470 = (undefined2)((ulong)uVar17 >> 0x20);
                uStack_46e = (ushort)((ulong)uVar17 >> 0x30);
                __os_log_impl(0x100000000,uVar24,1,
                              "posting com.apple.AMPDevicesAgent.libraryChanged notification for device %{public}@"
                              ,&local_478);
              }
              _CFNotificationCenterPostNotification
                        (lVar25,&cf_com_apple_AMPDevicesAgent_libraryChanged,
                         &cf_com_apple_AMPDevicesAgent,uVar23);
              FUN_10017060f(uVar23);
              FUN_10017060f(uVar17);
            }
            iVar14 = FUN_1001e9bb5(local_508);
            if ((iVar14 != 0) && (iVar14 != -0x80)) {
              uVar17 = FUN_1001cc310();
              cVar11 = _os_log_type_enabled(uVar17,0x10);
              if (cVar11 != '\0') {
                local_478 = 0x202;
                uStack_476 = 0x822;
                uStack_474 = 0x7a0a90;
                uStack_470 = 1;
                uStack_46e = 0;
                uStack_46c = 0x400;
                uStack_46a = (ushort)iVar14;
                uStack_468 = (ushort)((uint)iVar14 >> 0x10);
                __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)");
              }
            }
            pdVar18 = local_498;
            lVar25 = 0;
            pdVar32 = local_480;
            do {
              if (*(char *)((long)pdVar32 + lVar25 + 0x18) != '\0') {
                FUN_10016013b((long)pdVar18 + lVar25 + 0x20);
                pdVar32 = local_480;
              }
              lVar25 = lVar25 + 0xa98;
            } while (lVar25 != 0x11370);
            puVar19 = (undefined8 *)pdVar32[0x2271];
            if (puVar19 != (undefined8 *)0x0) {
              FUN_10017060f(*puVar19);
              pdVar18 = local_480;
              *puVar19 = 0;
              puVar19 = (undefined8 *)local_480[0x2271];
              if (puVar19 != (undefined8 *)0x0) {
                FUN_10017060f(*puVar19);
                *puVar19 = 0;
                if ((sqlite3_stmt *)puVar19[3] != (sqlite3_stmt *)0x0) {
                  _sqlite3_finalize((sqlite3_stmt *)puVar19[3]);
                }
                if ((sqlite3_stmt *)puVar19[5] != (sqlite3_stmt *)0x0) {
                  _sqlite3_finalize((sqlite3_stmt *)puVar19[5]);
                }
                if ((sqlite3_stmt *)puVar19[6] != (sqlite3_stmt *)0x0) {
                  _sqlite3_finalize((sqlite3_stmt *)puVar19[6]);
                }
                FUN_1002a41f4(puVar19 + 0x12,puVar19[0x13]);
                FUN_1002a41f4(puVar19 + 0xf,puVar19[0x10]);
                operator_delete(puVar19);
              }
              pdVar18[0x2271] = 0.0;
              FUN_1004e4608(*pdVar18);
              pdVar32 = local_480;
            }
            pvVar22 = (void *)pdVar32[0x2273];
            if (pvVar22 != (void *)0x0) {
              FUN_1002c9340(pvVar22);
              operator_delete(pvVar22);
            }
            operator_delete(pdVar32);
            goto LAB_10052088d;
          }
          uVar17 = FUN_1001cc310();
          cVar11 = _os_log_type_enabled(uVar17,0x10);
          if (cVar11 != '\0') {
            local_478 = 0x202;
            uStack_476 = 0x822;
            uStack_474 = 0x7a0a90;
            uStack_470 = 1;
            uStack_46e = 0;
            uStack_46c = 0x400;
            uStack_46a = (ushort)iVar14;
            uStack_468 = (ushort)((uint)iVar14 >> 0x10);
            __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: err == (%d)",&local_478,0x12);
          }
        }
        FUN_1001c64c1(local_480);
      }
LAB_10052088d:
    } while (*(char *)((long)local_488 + 0x15948) != '\0');
  }
  *(undefined4 *)((long)local_488 + 0x15934) = 0;
  if (*(char *)((long)local_488 + 0x1594a) != '\0') {
    *(undefined1 *)((long)local_488 + 0x1594a) = 0;
    FUN_1004ee22c();
  }
  FUN_1004dd69c(local_488,"");
  FUN_10023318f(local_488,"");
  if (*(long *)((long)local_488 + 0x30) != 0) {
    FUN_100321e5c();
  }
  iVar14 = SUB84(local_4a0,0);
  if (iVar14 < -0x579) {
    if ((iVar14 != -0x17ffbff5) && (iVar14 != -0x57f)) goto LAB_100522e92;
LAB_100522c64:
    uVar17 = FUN_1001cc310();
    cVar11 = _os_log_type_enabled(uVar17,0x10);
    if (cVar11 != '\0') {
      local_478 = 0x202;
      uStack_476 = 0x822;
      uStack_474 = 0x7a0a90;
      uStack_470 = 1;
      uStack_46e = 0;
      uStack_46c = 0x822;
      uStack_46a = 0x533a;
      uStack_468 = 0x7e;
      uStack_466 = 1;
      uStack_464 = 0;
      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if ((iVar14 == -0x32) || (iVar14 == -0x579)) goto LAB_100522c64;
LAB_100522e92:
    if ((iVar14 + 0x80U & 0xffffff7f) != 0) {
      if ((iVar14 == -0x22) && (*(char *)((long)local_488 + 0x14cda) == '\0')) {
        if (*(char *)((long)local_488 + 0x6afe) != '\0') goto LAB_100522c91;
        *(undefined1 *)((long)local_488 + 0x6afe) = 1;
      }
      FUN_1005c9f7c(local_488);
    }
  }
LAB_100522c91:
  if (*(char *)((long)local_488 + 0x151e4) != '\0') {
    if (*(char *)((long)local_488 + 0x3a1) == '\0') {
      uVar17 = FUN_1001cc310();
      cVar11 = _os_log_type_enabled(uVar17,0x10);
      if (cVar11 != '\0') {
        local_478 = 0x202;
        uStack_476 = 0x822;
        uStack_474 = 0x7a0a90;
        uStack_470 = 1;
        uStack_46e = 0;
        uStack_46c = 0x822;
        uStack_46a = 0x541b;
        uStack_468 = 0x7e;
        uStack_466 = 1;
        uStack_464 = 0;
        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
      }
      FUN_1001782e9(0,0);
    }
    *(undefined2 *)((long)local_488 + 0x151e3) = 0;
    uVar17 = FUN_1004e1208();
    uVar16 = FUN_1005c4f10(*(undefined8 *)((long)local_488 + 0x7168),0,uVar17);
    uVar8 = uStack_46c;
    uVar4 = uStack_46e;
    uStack_46e = (ushort)uVar16;
    uVar7 = uStack_46e;
    uStack_46c = (ushort)(uVar16 >> 0x10);
    uVar9 = uStack_46c;
    uStack_46e = uVar4;
    uStack_46c = uVar8;
    if (uVar16 == 0xffffff80) {
LAB_100522d2b:
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar23 = DAT_1008c75b8;
      cVar11 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar11 != '\0') {
        local_478 = 0x200;
        uStack_476 = 0x400;
        uStack_470 = 0x400;
        uStack_474 = uVar16;
        uStack_46e = uVar7;
        uStack_46c = uVar9;
        __os_log_impl(0x100000000,uVar23,0x10,
                      "MobileDeviceSetWiFiSyncingEnabled failed (%d / 0x%08X)",&local_478,0xe);
      }
    }
    else if (uVar16 != 0) {
      uVar23 = FUN_1001cc310();
      cVar11 = _os_log_type_enabled(uVar23,0x10);
      if (cVar11 != '\0') {
        local_478 = 0x202;
        uStack_476 = 0x822;
        uStack_474 = 0x7a0a90;
        uStack_470 = 1;
        uStack_46e = 0;
        uStack_46c = 0x400;
        uStack_46a = uVar7;
        uStack_468 = uVar9;
        __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: err == (%d)",&local_478,0x12);
      }
      goto LAB_100522d2b;
    }
    FUN_10036c63c();
    FUN_10017060f(uVar17);
  }
  if (*(long *)((long)local_488 + 0x30) != 0) {
    psVar1 = (short *)(*(long *)((long)local_488 + 0x30) + 0x27b0);
    *psVar1 = *psVar1 + -1;
  }
  sVar5 = *(short *)((long)local_488 + 0x15938);
  if (sVar5 == 0) {
    uVar17 = FUN_1001cc310();
    cVar11 = _os_log_type_enabled(uVar17,0x10);
    if (cVar11 != '\0') {
      local_478 = 0x202;
      uStack_476 = 0x822;
      uStack_474 = 0x7a0a90;
      uStack_470 = 1;
      uStack_46e = 0;
      uStack_46c = 0x822;
      uStack_46a = 0x5447;
      uStack_468 = 0x7e;
      uStack_466 = 1;
      uStack_464 = 0;
      __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
    sVar5 = *(short *)((long)local_488 + 0x15938);
  }
  *(short *)((long)local_488 + 0x15938) = sVar5 + -1;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar17 = DAT_1008c75b8;
  cVar11 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar11 != '\0') {
    dVar38 = (double)FUN_1001ebd46();
    dVar38 = (dVar38 - local_550) * _DAT_100708b48;
    local_478 = 0x100;
    uStack_476 = 0x800;
    uStack_474 = SUB84(dVar38,0);
    uStack_470 = (undefined2)((ulong)dVar38 >> 0x20);
    uStack_46e = (ushort)((ulong)dVar38 >> 0x30);
    __os_log_impl(0x100000000,uVar17,1,"perf> SaveIPodFilesFiber() took %.2f ms",&local_478,0xc);
  }
LAB_100522e6c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

