// name: FUN_1005db029
// address: 1005db029

undefined8
FUN_1005db029(long *param_1,undefined8 *param_2,uint param_3,undefined8 param_4,undefined8 *param_5,
             int *param_6)

{
  long lVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  long lVar10;
  size_t sVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  uint uVar25;
  bool bVar26;
  bool bVar27;
  undefined1 local_690 [8];
  long local_688;
  long local_658;
  long local_648;
  long local_638;
  undefined1 local_630 [16];
  long local_620;
  undefined1 local_5e0 [16];
  long local_5d0;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  long *local_570;
  long *local_568;
  long *local_560;
  long *local_558;
  long local_550;
  undefined8 *local_548;
  long local_540;
  long local_538;
  long local_530;
  long local_528;
  long local_520;
  long local_518;
  long local_510;
  ulong local_508;
  long *local_500;
  uint local_4f4;
  uint local_4f0;
  uint local_4ec;
  uint local_4e8;
  uint local_4e4;
  undefined8 *local_4e0;
  ulong local_4d8;
  ulong local_4d0;
  ulong local_4c8;
  ulong local_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  uint local_4a4;
  long local_4a0;
  int local_494;
  long local_490;
  long local_488;
  long local_480;
  uint local_474;
  int *local_470;
  ulong local_468;
  long local_460;
  long local_458;
  char local_449;
  ulong local_448;
  char local_439;
  uint local_438;
  uint uStack_434;
  uint local_430;
  undefined4 local_42c;
  uint local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4e0 = param_5;
  if ((param_1 == (long *)0x0) || (lVar12 = *param_1, lVar12 == 0)) {
    uVar13 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar13,0x10);
    if (cVar3 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "(moovTree != nullptr) && (moovTree->head != nullptr)";
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    uVar13 = 0xffffffce;
  }
  else {
    plVar22 = *(long **)(lVar12 + 0x10);
    local_550 = lVar12;
    local_548 = param_2;
    local_474 = param_3;
    local_470 = param_6;
    if (plVar22 == (long *)0x0) {
      local_480 = 0;
    }
    else {
      local_4f0 = param_3 & 0x12;
      local_449 = local_4f0 == 2 || (param_3 & 0x20) == 0;
      local_480 = 0;
      do {
        if ((*(int *)(plVar22[4] + 4) == 0x6b617274) &&
           (iVar4 = FUN_10015d28d(plVar22,0x746b6864,&local_438), iVar4 != -0x80)) {
          if (iVar4 == 0) {
            if (CONCAT44(uStack_434,local_438) == 0) {
              uVar13 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar13,0x10);
              if (cVar3 != '\0') {
                local_238 = 0x8220202;
                local_234 = "Assertion failure";
                local_22c = 0x822;
                local_22a = "element != nullptr";
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_238);
              }
              FUN_1001782e9(0,0);
            }
            else if (((*(uint *)(*(long *)(CONCAT44(uStack_434,local_438) + 0x20) + 8) >> 0x18 & 1)
                      != 0) &&
                    (iVar4 = FUN_10015d28d(plVar22,0x74726566,&local_438), iVar4 != -0x80)) {
              if (iVar4 == 0) {
                if (CONCAT44(uStack_434,local_438) != 0) {
                  puVar17 = *(uint **)(CONCAT44(uStack_434,local_438) + 0x20);
                  uVar5 = *puVar17;
                  uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                          uVar5 << 0x18;
                  if (0x13 < uVar5) {
                    puVar8 = (uint *)((ulong)uVar5 + (long)puVar17);
                    puVar17 = puVar17 + 2;
                    do {
                      uVar5 = *puVar17;
                      uVar14 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                               uVar5 << 0x18;
                      if (uVar5 == 0) {
                        uVar14 = (int)puVar8 - (int)puVar17;
                      }
                      if ((0xb < uVar14) && (puVar17[1] == 0x70616863)) {
                        uVar5 = (uint)((ulong)uVar14 + 0x3fffffff8 >> 2);
                        if (0 < (int)uVar5) {
                          local_468 = (ulong)(uVar5 & 0x7fffffff);
                          local_4a4 = 0xffffff01;
                          local_4d8 = 0;
                          do {
                            plVar23 = *(long **)(local_550 + 0x10);
                            uVar15 = local_468;
                            if (plVar23 != (long *)0x0) {
                              uVar5 = puVar17[local_4d8 + 2];
LAB_1005db30f:
                              if (*(int *)(plVar23[4] + 4) != 0x6b617274) goto LAB_1005db355;
                              iVar4 = FUN_10015d28d(plVar23,0x746b6864,&local_438);
                              if (iVar4 == 0) {
                                if (CONCAT44(uStack_434,local_438) == 0) {
                                  uVar13 = FUN_1001cc310();
                                  cVar3 = _os_log_type_enabled(uVar13,0x10);
                                  if (cVar3 != '\0') {
                                    local_238 = 0x8220202;
                                    local_234 = "Assertion failure";
                                    local_22c = 0x822;
                                    local_22a = "trackHeaderElement != nullptr";
                                    __os_log_error_impl(0x100000000,uVar13,0x10,
                                                        "%{public}s: (%{public}s)",&local_238);
                                  }
                                  FUN_1001782e9(0,0);
                                  uVar15 = local_468;
                                }
                                else {
                                  if (*(uint *)(*(long *)(CONCAT44(uStack_434,local_438) + 0x20) +
                                               0x14) != uVar5) goto LAB_1005db355;
                                  iVar4 = FUN_1005d987a(plVar23,local_690);
                                  uVar15 = local_468;
                                  if (iVar4 != -0x80) {
                                    if (iVar4 == 0) {
                                      local_448 = CONCAT71(local_448._1_7_,1);
                                      if (((local_648 != 0) &&
                                          (*(int *)(local_648 + 0x10) == 0x73696c61)) &&
                                         (local_638 != 0)) {
                                        cVar3 = FUN_1005dca08(local_638 + 8);
                                        local_448 = CONCAT71(local_448._1_7_,cVar3 == '\0');
                                      }
                                      bVar26 = (char)local_4a4 != '\0';
                                      bVar27 = *(int *)(local_658 + 0x10) == 0x74786574;
                                      local_4a4 = local_4a4 & 0xff;
                                      if (bVar27) {
                                        local_4a4 = 0;
                                      }
                                      local_439 = bVar27 && bVar26;
                                      if (((local_470 == (int *)0x0) || ((char)local_448 == '\0'))
                                         || (!bVar27 || !bVar26)) goto LAB_1005db7fc;
                                      FUN_1001c62d9(local_470,0x10);
                                      piVar2 = local_470;
                                      lVar12 = local_620;
                                      if (local_620 == 0) {
                                        uVar13 = FUN_1001cc310();
                                        cVar3 = _os_log_type_enabled(uVar13,0x10);
                                        if (cVar3 != '\0') {
                                          local_238 = 0x8220202;
                                          local_234 = "Assertion failure";
                                          local_22c = 0x822;
                                          local_22a = "timeToSampleNum != nullptr";
                                          __os_log_error_impl(0x100000000,uVar13,0x10,
                                                              "%{public}s: (%{public}s)",&local_238)
                                          ;
                                        }
                                        FUN_1001782e9(0,0);
                                        goto LAB_1005db7d2;
                                      }
                                      *local_470 = 0;
                                      uVar5 = *(uint *)(local_620 + 0xc);
                                      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 |
                                              (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
                                      if ((int)uVar5 < 1) {
                                        uVar15 = 4;
                                      }
                                      else {
                                        uVar15 = 0;
                                        iVar4 = 0;
                                        do {
                                          uVar14 = *(uint *)(local_620 + 0x10 + uVar15 * 8);
                                          iVar4 = iVar4 + (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8
                                                           | (uVar14 & 0xff00) << 8 | uVar14 << 0x18
                                                          );
                                          uVar15 = uVar15 + 1;
                                        } while (uVar5 != uVar15);
                                        *local_470 = iVar4;
                                        uVar15 = (long)iVar4 * 4 + 4;
                                        if (iVar4 < -1) {
                                          uVar15 = 0xffffffffffffffff;
                                        }
                                      }
                                      puVar9 = operator_new__(uVar15,(nothrow_t *)
                                                                     PTR_nothrow_10082c970);
                                      *(undefined4 **)(piVar2 + 2) = puVar9;
                                      if (puVar9 == (undefined4 *)0x0) {
                                        uVar13 = FUN_1001cc310();
                                        cVar3 = _os_log_type_enabled(uVar13,0x10);
                                        if (cVar3 != '\0') {
                                          local_238 = 0x8220202;
                                          local_234 = "Assertion failure";
                                          local_22c = 0x822;
                                          local_22a = "outChapterTable->chapterTimes != nullptr";
                                          __os_log_error_impl(0x100000000,uVar13,0x10,
                                                              "%{public}s: (%{public}s)",&local_238)
                                          ;
                                        }
                                        FUN_1001782e9(0,0);
                                        *local_470 = 0;
                                        uVar7 = 0xffffff94;
LAB_1005db7d8:
                                        uVar13 = FUN_1001cc310();
                                        cVar3 = _os_log_type_enabled(uVar13,0x10);
                                        uVar15 = local_468;
                                        if (cVar3 != '\0') {
                                          local_238 = 0x8220202;
                                          local_234 = "Assertion failure";
                                          local_22c = 0x400;
                                          local_22a = (char *)CONCAT44(local_22a._4_4_,uVar7);
                                          __os_log_error_impl(0x100000000,uVar13,0x10,
                                                              "%{public}s: err == (%d)",&local_238);
                                        }
                                      }
                                      else {
                                        *puVar9 = 0;
                                        iVar4 = FUN_1005da85c(local_690);
                                        if (iVar4 == 0) {
                                          uVar13 = FUN_1001cc310();
                                          cVar3 = _os_log_type_enabled(uVar13,0x10);
                                          if (cVar3 != '\0') {
                                            local_238 = 0x8220202;
                                            local_234 = "Assertion failure";
                                            local_22c = 0x822;
                                            local_22a = "timeScale != 0";
                                            __os_log_error_impl(0x100000000,uVar13,0x10,
                                                                "%{public}s: (%{public}s)",
                                                                &local_238);
                                          }
                                          FUN_1001782e9(0,0);
                                          if (*(void **)(local_470 + 2) != (void *)0x0) {
                                            operator_delete__(*(void **)(local_470 + 2));
                                          }
                                          local_470[2] = 0;
                                          local_470[3] = 0;
                                          *local_470 = 0;
LAB_1005db7d2:
                                          uVar7 = 0xffffff30;
                                          goto LAB_1005db7d8;
                                        }
                                        uVar15 = local_468;
                                        if (0 < (int)uVar5) {
                                          local_4c8 = (ulong)uVar5;
                                          uVar5 = 1;
                                          uVar20 = 0;
                                          lVar21 = 0;
                                          local_490 = lVar12;
                                          do {
                                            uVar25 = *(uint *)(lVar12 + 0x10 + uVar20 * 8);
                                            uVar14 = uVar5;
                                            if (uVar25 != 0) {
                                              uVar14 = *(uint *)(lVar12 + 0x14 + uVar20 * 8);
                                              uVar25 = uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 |
                                                       (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
                                              lVar19 = (long)(int)(uVar14 >> 0x18 |
                                                                   (uVar14 & 0xff0000) >> 8 |
                                                                   (uVar14 & 0xff00) << 8 |
                                                                  uVar14 << 0x18);
                                              lVar1 = *(long *)(local_470 + 2);
                                              uVar14 = uVar25 + uVar5;
                                              local_4d0 = CONCAT44(local_4d0._4_4_,uVar14);
                                              lVar18 = (lVar21 + lVar19) * 1000;
                                              do {
                                                lVar21 = lVar21 + lVar19;
                                                lVar10 = lVar21;
                                                if (iVar4 != 1000) {
                                                  lVar10 = lVar18 / (long)iVar4;
                                                }
                                                uVar16 = (ulong)uVar5;
                                                uVar5 = uVar5 + 1;
                                                *(int *)(lVar1 + uVar16 * 4) = (int)lVar10;
                                                lVar18 = lVar18 + lVar19 * 1000;
                                                uVar25 = uVar25 - 1;
                                              } while (uVar25 != 0);
                                            }
                                            uVar5 = uVar14;
                                            uVar20 = uVar20 + 1;
                                          } while (uVar20 != local_4c8);
                                        }
                                      }
LAB_1005db7fc:
                                      if ((char)local_448 == '\x01' && (local_474 & 1) != 0) {
                                        if (local_4e0 == (undefined8 *)0x0) {
                                          uVar13 = FUN_1001cc310();
                                          cVar3 = _os_log_type_enabled(uVar13,0x10);
                                          if (cVar3 != '\0') {
                                            local_238 = 0x8220202;
                                            local_234 = "Assertion failure";
                                            local_22c = 0x822;
                                            local_22a = "outChapterData != nullptr";
                                            __os_log_error_impl(0x100000000,uVar13,0x10,
                                                                "%{public}s: (%{public}s)",
                                                                &local_238);
                                          }
                                          FUN_1001782e9(0,0);
                                        }
                                        plVar23 = (long *)*local_548;
                                        plVar24 = (long *)local_548[1];
                                        if (plVar24 != (long *)0x0) {
                                          LOCK();
                                          plVar24[1] = plVar24[1] + 1;
                                          UNLOCK();
                                        }
                                        local_560 = plVar23;
                                        local_558 = plVar24;
                                        FUN_1001c62d9(local_5e0,0x48);
                                        local_494 = FUN_1005da1cc(local_630,local_5e0);
                                        if (local_494 == 0) {
                                          if (plVar24 != (long *)0x0) {
                                            LOCK();
                                            plVar24[1] = plVar24[1] + 1;
                                            UNLOCK();
                                          }
                                          local_460 = 0;
                                          local_4b8 = plVar23;
                                          uStack_4b0 = plVar24;
                                          if (local_480 == 0) {
                                            iVar4 = FUN_1001752d4(&local_460);
                                            if (iVar4 == -0x80) {
LAB_1005dc489:
                                              FUN_100175848(local_460);
                                            }
                                            else {
                                              if (iVar4 == 0) goto LAB_1005db951;
                                              uVar13 = FUN_1001cc310();
                                              cVar3 = _os_log_type_enabled(uVar13,0x10);
                                              if (cVar3 != '\0') {
                                                local_238 = 0x8220202;
                                                local_234 = "Assertion failure";
                                                local_22c = 0x400;
                                                local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
                                                __os_log_error_impl(0x100000000,uVar13,0x10,
                                                                    "%{public}s: err == (%d)",
                                                                    &local_238);
                                              }
                                              if (iVar4 != 0) goto LAB_1005dc489;
                                            }
                                            local_480 = 0;
                                          }
                                          else {
                                            local_460 = local_480;
LAB_1005db951:
                                            lVar12 = local_5d0;
                                            if (local_5d0 == 0) {
                                              uVar13 = FUN_1001cc310();
                                              cVar3 = _os_log_type_enabled(uVar13,0x10);
                                              if (cVar3 != '\0') {
                                                local_238 = 0x8220202;
                                                local_234 = "Assertion failure";
                                                local_22c = 0x822;
                                                local_22a = "timeToSampleNum != nullptr";
                                                __os_log_error_impl(0x100000000,uVar13,0x10,
                                                                    "%{public}s: (%{public}s)",
                                                                    &local_238);
                                              }
                                              FUN_1001782e9(0,0);
                                            }
                                            else {
                                              iVar4 = FUN_1005da85c(local_690);
                                              if (iVar4 == 0) {
                                                uVar13 = FUN_1001cc310();
                                                cVar3 = _os_log_type_enabled(uVar13,0x10);
                                                if (cVar3 != '\0') {
                                                  local_238 = 0x8220202;
                                                  local_234 = "Assertion failure";
                                                  local_22c = 0x822;
                                                  local_22a = "timeScale != 0";
                                                  __os_log_error_impl(0x100000000,uVar13,0x10,
                                                                      "%{public}s: (%{public}s)",
                                                                      &local_238);
                                                }
                                                FUN_1001782e9(0,0);
                                                goto LAB_1005dc489;
                                              }
                                              local_520 = lVar12;
                                              local_518 = (long)*(int *)(lVar12 + 0xc);
                                              if (0 < local_518) {
                                                local_490 = CONCAT44(local_490._4_4_,iVar4);
                                                uVar5 = *(uint *)(local_658 + 0x10);
                                                local_4ec = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8
                                                            | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
                                                uVar5 = *(uint *)(local_688 + 0x14);
                                                local_4e8 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8
                                                            | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
                                                local_530 = (long)iVar4;
                                                lVar12 = 0;
                                                lVar21 = 0;
                                                local_448 = 0;
                                                do {
                                                  uVar5 = *(uint *)(local_520 + 0x10 + lVar12 * 8);
                                                  local_528 = lVar12;
                                                  if (uVar5 != 0) {
                                                    local_540 = (long)*(int *)(local_520 + 0x14 +
                                                                              lVar12 * 8);
                                                    local_4e4 = (int)local_448 + uVar5;
                                                    uVar15 = lVar21 * 1000;
                                                    local_538 = local_540 * 1000;
                                                    iVar4 = (int)local_490;
                                                    do {
                                                      local_4d0 = (ulong)uVar5;
                                                      local_488 = lVar21;
                                                      uVar20 = local_4d0;
                                                      if (iVar4 != 1000) {
                                                        local_488 = (long)uVar15 / local_530;
                                                        uVar20 = (long)uVar15 % local_530;
                                                      }
                                                      local_4c8 = uVar15;
                                                      iVar6 = FUN_1001753f5(local_460,local_488,
                                                                            uVar20);
                                                      plVar23 = uStack_4b0;
                                                      iVar4 = (int)local_490;
                                                      if (iVar6 == 0) {
                                                        if (local_4ec == 0x76696465) {
                                                          local_4a0 = 0;
                                                          iVar4 = FUN_1005e1b1f(local_5e0,local_448,
                                                                                &local_4a0);
                                                          if (iVar4 == 0) {
                                                            uVar5 = *(uint *)(local_4a0 + 4);
                                                            uVar14 = uVar5 >> 0x18 |
                                                                     (uVar5 & 0xff0000) >> 8 |
                                                                     (uVar5 & 0xff00) << 8 |
                                                                     uVar5 << 0x18;
                                                            uVar5 = uVar14;
                                                            if ((int)uVar14 < 0x68323631) {
                                                              if ((int)uVar14 < 0x61766331) {
                                                                if (uVar14 == 0x57524c45) {
                                                                  uVar5 = 0x1b;
                                                                }
                                                                else if ((uVar14 == 0x53565131) ||
                                                                        (uVar14 == 0x53565133))
                                                                goto LAB_1005dc603;
                                                              }
                                                              else if (uVar14 == 0x67696620) {
                                                                uVar5 = 0xc;
                                                              }
                                                              else if ((uVar14 == 0x61766331) ||
                                                                      (uVar14 == 0x63766964))
                                                              goto LAB_1005dc603;
                                                            }
                                                            else if ((int)uVar14 < 0x6d703476) {
                                                              uVar5 = 0xd;
                                                              if ((uVar14 != 0x6a706567) &&
                                                                 ((uVar14 == 0x68323631 ||
                                                                  (uVar5 = uVar14,
                                                                  uVar14 == 0x68323633)))) {
LAB_1005dc603:
                                                                if (local_480 == 0)
                                                                goto LAB_1005dc489;
                                                                goto LAB_1005dc4a0;
                                                              }
                                                            }
                                                            else if (uVar14 == 0x706e6720) {
                                                              uVar5 = 0xe;
                                                            }
                                                            else if (uVar14 == 0x6d703476)
                                                            goto LAB_1005dc603;
                                                            if ((1 < (short)(*(ushort *)
                                                                              (local_4a0 + 0x22) <<
                                                                             8 | *(ushort *)
                                                                                  (local_4a0 + 0x22)
                                                                                 >> 8)) &&
                                                               (1 < (short)(*(ushort *)
                                                                             (local_4a0 + 0x20) << 8
                                                                           | *(ushort *)
                                                                              (local_4a0 + 0x20) >>
                                                                             8)))
                                                            goto LAB_1005dbbcd;
                                                          }
                                                          else {
                                                            if (iVar4 != -0x80) {
                                                              uVar13 = FUN_1001cc310();
                                                              cVar3 = _os_log_type_enabled
                                                                                (uVar13,0x10);
                                                              if (cVar3 != '\0') {
                                                                local_238 = 0x8220202;
                                                                local_234 = "Assertion failure";
                                                                local_22c = 0x400;
                                                                local_22a = (char *)CONCAT44(
                                                  local_22a._4_4_,iVar4);
                                                  __os_log_error_impl(0x100000000,uVar13,0x10,
                                                                      "%{public}s: err == (%d)",
                                                                      &local_238,0x12);
                                                  }
                                                  }
                                                  uVar5 = 0;
LAB_1005dbbcd:
                                                  FUN_1001c62d9(&local_438,0x10);
                                                  local_438 = 0x7472616b;
                                                  local_430 = local_4e8;
                                                  local_42c = (undefined4)local_448;
                                                  uStack_434 = uVar5;
                                                  FUN_100175c68(local_460,local_488,0x706c6f63,0,
                                                                0x10);
                                                  plVar23 = local_4b8;
                                                  if (local_4f0 == 2) {
                                                    local_570 = local_4b8;
                                                    local_568 = uStack_4b0;
                                                    if (uStack_4b0 != (long *)0x0) {
                                                      LOCK();
                                                      uStack_4b0[1] = uStack_4b0[1] + 1;
                                                      UNLOCK();
                                                    }
                                                    local_500 = uStack_4b0;
                                                    iVar4 = FUN_1005da92d(local_5e0,local_448,
                                                                          &local_4a0,&local_4f4);
                                                    if (iVar4 == -0x80) {
LAB_1005dc243:
                                                      local_458 = 0;
                                                    }
                                                    else {
                                                      if (iVar4 != 0) {
                                                        uVar13 = FUN_1001cc310();
                                                        cVar3 = _os_log_type_enabled(uVar13,0x10);
                                                        if (cVar3 != '\0') {
                                                          local_22a = (char *)CONCAT44(local_22a.
                                                                                       _4_4_,iVar4);
LAB_1005dbef1:
                                                          local_22c = 0x400;
                                                          local_234 = "Assertion failure";
                                                          local_238 = 0x8220202;
                                                          __os_log_error_impl(0x100000000,uVar13,
                                                                              0x10,
                                                  "%{public}s: err == (%d)",&local_238);
                                                  }
                                                  goto LAB_1005dc243;
                                                  }
                                                  if ((local_648 == 0) ||
                                                     (*(int *)(local_648 + 0x10) != 0x6c646e68)) {
                                                    iVar4 = (**(code **)(*plVar23 + 0xf0))
                                                                      (plVar23,local_4a0);
                                                    if (iVar4 != -0x80) {
                                                      bVar26 = true;
                                                      lVar12 = 0;
                                                      if (iVar4 == 0) goto LAB_1005dbf38;
                                                      uVar13 = FUN_1001cc310();
                                                      cVar3 = _os_log_type_enabled(uVar13,0x10);
                                                      if (cVar3 != '\0') {
                                                        local_22a = (char *)CONCAT44(local_22a._4_4_
                                                                                     ,iVar4);
                                                        goto LAB_1005dbef1;
                                                      }
                                                    }
                                                    goto LAB_1005dc243;
                                                  }
                                                  if (local_638 == 0) {
                                                    uVar13 = FUN_1001cc310();
                                                    cVar3 = _os_log_type_enabled(uVar13,0x10);
                                                    if (cVar3 != '\0') {
                                                      local_22a = "dataInfoAtom != nullptr";
LAB_1005dc333:
                                                      local_22c = 0x822;
                                                      local_234 = "Assertion failure";
                                                      local_238 = 0x8220202;
                                                      __os_log_error_impl(0x100000000,uVar13,0x10,
                                                                          "%{public}s: (%{public}s)"
                                                                          ,&local_238);
                                                    }
LAB_1005dc234:
                                                    FUN_1001782e9(0,0);
                                                    iVar4 = -0x80;
                                                    goto LAB_1005dc243;
                                                  }
                                                  lVar12 = local_638 + 0x31;
                                                  bVar26 = false;
LAB_1005dbf38:
                                                  local_4c0 = (ulong)local_4f4;
                                                  local_510 = lVar12;
                                                  local_458 = FUN_100170ea9(DAT_1008c4d90);
                                                  if (local_458 == 0) {
                                                    uVar13 = FUN_1001cc310();
                                                    cVar3 = _os_log_type_enabled(uVar13,0x10);
                                                    if (cVar3 != '\0') {
                                                      local_22a = "pictureData != nullptr";
                                                      goto LAB_1005dc333;
                                                    }
                                                    goto LAB_1005dc234;
                                                  }
                                                  local_508 = local_4c0;
                                                  FUN_10017103d();
                                                  lVar12 = local_4a0;
                                                  if (bVar26) {
                                                    uVar13 = FUN_100170f7f(local_458);
                                                    iVar4 = (**(code **)(*plVar23 + 0xa8))
                                                                      (plVar23,&local_508,uVar13);
                                                    if ((iVar4 == 0) &&
                                                       (iVar4 = 0, local_508 != local_4c0)) {
                                                      uVar13 = FUN_1001cc310();
                                                      cVar3 = _os_log_type_enabled(uVar13,0x10);
                                                      if (cVar3 != '\0') {
                                                        local_238 = 0x8220202;
                                                        local_234 = "Assertion failure";
                                                        local_22c = 0x822;
                                                        local_22a = "currSampleSize == currReadSize"
                                                        ;
                                                        __os_log_error_impl(0x100000000,uVar13,0x10,
                                                                                                                                                        
                                                  "%{public}s: (%{public}s)",&local_238);
                                                  }
                                                  iVar4 = -0x80;
                                                  FUN_1001782e9(0,0);
                                                  }
                                                  }
                                                  else {
                                                    uVar13 = FUN_100170f7f(local_458);
                                                    FUN_1001c631b(local_510 + lVar12,uVar13,
                                                                  local_4c0);
                                                    iVar4 = 0;
                                                    local_500 = local_568;
                                                  }
                                                  }
                                                  if (local_500 != (long *)0x0) {
                                                    LOCK();
                                                    plVar23 = local_500 + 1;
                                                    lVar12 = *plVar23;
                                                    *plVar23 = *plVar23 + -1;
                                                    UNLOCK();
                                                    if (lVar12 == 0) {
                                                      (**(code **)(*local_500 + 0x10))(local_500);
                                                      std::__shared_weak_count::__release_weak();
                                                    }
                                                  }
                                                  lVar12 = local_460;
                                                  if (iVar4 == 0) {
                                                    uVar7 = FUN_100170ef7(local_458);
                                                    FUN_100170f3b(local_458);
                                                    FUN_100175c68(lVar12,local_488,0x70636368,0,
                                                                  uVar7);
                                                  }
                                                  FUN_10017060f(local_458);
                                                  goto LAB_1005dc2cc;
                                                  }
                                                  }
                                                  if (local_449 == '\0') {
                                                    FUN_1005e15ac(local_5e0,local_448,local_460,
                                                                  local_488,0x70636368);
                                                  }
                                                  }
                                                  else {
                                                    if (local_4ec != 0x74657874) goto LAB_1005dc2d2;
                                                    local_238 = local_238 & 0xffff0000;
                                                    if (local_439 == '\0') {
                                                      if ((local_474 & 0x10) != 0) {
                                                        uVar13 = 0x75726c20;
                                                        goto LAB_1005dbe2d;
                                                      }
                                                      local_438 = local_438 & 0xffffff00;
                                                      local_588 = (undefined4)local_4b8;
                                                      uStack_584 = local_4b8._4_4_;
                                                      uStack_580 = (undefined4)uStack_4b0;
                                                      uStack_57c = uStack_4b0._4_4_;
                                                      if (uStack_4b0 != (long *)0x0) {
                                                        LOCK();
                                                        uStack_4b0[1] = uStack_4b0[1] + 1;
                                                        UNLOCK();
                                                      }
                                                      iVar4 = FUN_1005e1177(local_690,local_5e0,
                                                                            &local_588,local_448,
                                                                            &local_238,0x200,
                                                                            &local_438);
                                                      if (plVar23 != (long *)0x0) {
                                                        LOCK();
                                                        plVar24 = plVar23 + 1;
                                                        lVar12 = *plVar24;
                                                        *plVar24 = *plVar24 + -1;
                                                        UNLOCK();
                                                        if (lVar12 == 0) {
                                                          (**(code **)(*plVar23 + 0x10))(plVar23);
                                                          std::__shared_weak_count::__release_weak()
                                                          ;
                                                        }
                                                      }
                                                      if (iVar4 == 0) {
                                                        FUN_100175c68(local_460,local_488,0x75726c74
                                                                      ,0,(local_238 & 0xffff) * 2 +
                                                                         2,&local_238);
                                                        lVar12 = local_460;
                                                        sVar11 = _strlen((char *)&local_438);
                                                        FUN_100175c68(lVar12,local_488,0x75726c20,0,
                                                                      (int)sVar11 + 1);
                                                      }
                                                    }
                                                    else if ((local_474 & 0x10) == 0) {
                                                      local_598 = (undefined4)local_4b8;
                                                      uStack_594 = local_4b8._4_4_;
                                                      uStack_590 = (undefined4)uStack_4b0;
                                                      uStack_58c = uStack_4b0._4_4_;
                                                      if (uStack_4b0 != (long *)0x0) {
                                                        LOCK();
                                                        uStack_4b0[1] = uStack_4b0[1] + 1;
                                                        UNLOCK();
                                                      }
                                                      iVar4 = FUN_1005e1177(local_690,local_5e0,
                                                                            &local_598,local_448,
                                                                            &local_238,0,0);
                                                      if (plVar23 != (long *)0x0) {
                                                        LOCK();
                                                        plVar24 = plVar23 + 1;
                                                        lVar12 = *plVar24;
                                                        *plVar24 = *plVar24 + -1;
                                                        UNLOCK();
                                                        if (lVar12 == 0) {
                                                          (**(code **)(*plVar23 + 0x10))(plVar23);
                                                          std::__shared_weak_count::__release_weak()
                                                          ;
                                                        }
                                                      }
                                                      if (iVar4 == 0) {
                                                        FUN_100175c68(local_460,local_488,0x6e616d65
                                                                      ,0,(local_238 & 0xffff) * 2 +
                                                                         2);
                                                      }
                                                    }
                                                    else {
                                                      uVar13 = 0x6e616d65;
LAB_1005dbe2d:
                                                      if ((local_474 & 0x20) != 0) {
                                                        FUN_1005e15ac(local_5e0,local_448,local_460,
                                                                      local_488,uVar13);
                                                      }
                                                    }
                                                  }
LAB_1005dc2cc:
                                                  iVar4 = (int)local_490;
                                                  }
LAB_1005dc2d2:
                                                  lVar21 = lVar21 + local_540;
                                                  local_448 = (ulong)((int)local_448 + 1);
                                                  uVar15 = local_4c8 + local_538;
                                                  uVar5 = (int)local_4d0 - 1;
                                                  } while (uVar5 != 0);
                                                  local_448 = (ulong)local_4e4;
                                                  }
                                                  lVar12 = local_528 + 1;
                                                } while (lVar12 != local_518);
                                              }
                                              local_480 = local_460;
                                            }
                                          }
LAB_1005dc4a0:
                                          if (uStack_4b0 != (long *)0x0) {
                                            LOCK();
                                            plVar23 = uStack_4b0 + 1;
                                            lVar12 = *plVar23;
                                            *plVar23 = *plVar23 + -1;
                                            UNLOCK();
                                            if (lVar12 == 0) {
                                              (**(code **)(*uStack_4b0 + 0x10))(uStack_4b0);
                                              std::__shared_weak_count::__release_weak();
                                            }
                                          }
                                          FUN_1005da7d9(local_5e0);
                                          plVar24 = local_558;
                                        }
                                        else {
                                          uVar13 = FUN_1001cc310();
                                          cVar3 = _os_log_type_enabled(uVar13,0x10);
                                          if (cVar3 != '\0') {
                                            local_238 = 0x8220202;
                                            local_234 = "Assertion failure";
                                            local_22c = 0x400;
                                            local_22a = (char *)CONCAT44(local_22a._4_4_,local_494);
                                            __os_log_error_impl(0x100000000,uVar13,0x10,
                                                                "%{public}s: err == (%d)",&local_238
                                                               );
                                          }
                                        }
                                        if (plVar24 != (long *)0x0) {
                                          LOCK();
                                          plVar23 = plVar24 + 1;
                                          lVar12 = *plVar23;
                                          *plVar23 = *plVar23 + -1;
                                          UNLOCK();
                                          if (lVar12 == 0) {
                                            (**(code **)(*plVar24 + 0x10))(plVar24);
                                            std::__shared_weak_count::__release_weak();
                                          }
                                        }
                                        iVar4 = local_494;
                                        uVar15 = local_468;
                                        if (local_494 != 0) {
                                          uVar13 = FUN_1001cc310();
                                          cVar3 = _os_log_type_enabled(uVar13,0x10);
                                          uVar15 = local_468;
                                          if (cVar3 != '\0') {
                                            local_238 = 0x8220202;
                                            local_234 = "Assertion failure";
                                            local_22c = 0x400;
                                            local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
                                            __os_log_error_impl(0x100000000,uVar13,0x10,
                                                                "%{public}s: err == (%d)",&local_238
                                                               );
                                          }
                                        }
                                      }
                                      goto LAB_1005dc58f;
                                    }
                                    uVar13 = FUN_1001cc310();
                                    cVar3 = _os_log_type_enabled(uVar13,0x10);
                                    uVar15 = local_468;
                                    if (cVar3 != '\0') {
                                      local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
                                      goto LAB_1005db4c1;
                                    }
                                  }
                                }
                              }
                              else {
                                uVar15 = local_468;
                                if (iVar4 != -0x80) {
                                  uVar13 = FUN_1001cc310();
                                  cVar3 = _os_log_type_enabled(uVar13,0x10);
                                  uVar15 = local_468;
                                  if (cVar3 != '\0') {
                                    local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
LAB_1005db4c1:
                                    local_22c = 0x400;
                                    local_234 = "Assertion failure";
                                    local_238 = 0x8220202;
                                    __os_log_error_impl(0x100000000,uVar13,0x10,
                                                        "%{public}s: err == (%d)",&local_238);
                                    uVar15 = local_468;
                                  }
                                }
                              }
                            }
LAB_1005dc58f:
                            local_4d8 = local_4d8 + 1;
                          } while (local_4d8 != uVar15);
                        }
                        break;
                      }
                      puVar17 = (uint *)((long)puVar17 + (ulong)uVar14);
                    } while (puVar17 < puVar8);
                  }
                }
              }
              else {
                uVar13 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar13,0x10);
                if (cVar3 != '\0') {
                  local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
                  goto LAB_1005db1f0;
                }
              }
            }
          }
          else {
            uVar13 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar13,0x10);
            if (cVar3 != '\0') {
              local_22a = (char *)CONCAT44(local_22a._4_4_,iVar4);
LAB_1005db1f0:
              local_22c = 0x400;
              local_234 = "Assertion failure";
              local_238 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_238);
            }
          }
        }
        plVar22 = (long *)*plVar22;
      } while (plVar22 != (long *)0x0);
    }
    if (local_4e0 != (undefined8 *)0x0) {
      uVar13 = FUN_1001757f8(local_480);
      *local_4e0 = uVar13;
    }
    FUN_100175848(local_480);
    uVar13 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13;
LAB_1005db355:
  plVar23 = (long *)*plVar23;
  uVar15 = local_468;
  if (plVar23 == (long *)0x0) goto LAB_1005dc58f;
  goto LAB_1005db30f;
}

