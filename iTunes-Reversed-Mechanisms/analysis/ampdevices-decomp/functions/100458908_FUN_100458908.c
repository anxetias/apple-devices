// name: FUN_100458908
// address: 100458908

void FUN_100458908(void *param_1,void *param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined *op;
  undefined *op_00;
  undefined *op_01;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  ID IVar20;
  ID IVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 local_528 [16];
  undefined8 local_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  char *local_500;
  undefined1 local_4f8 [16];
  int local_4e4;
  undefined4 *local_4e0;
  void *local_4d8;
  char *local_4d0;
  char *local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  char *local_4a0;
  long local_498;
  undefined4 *local_490 [2];
  char *local_480;
  int local_478;
  char *local_474;
  undefined2 local_46c;
  undefined2 local_46a;
  undefined2 uStack_468;
  undefined4 uStack_466;
  undefined2 uStack_462;
  void *pvStack_460;
  undefined8 local_458;
  undefined8 *local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  op_01 = PTR_s_initWithBase64EncodedString_opti_10088d350;
  op_00 = PTR_s_getBytes_length__10088c480;
  op = PTR_s_length_10088bdf0;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4d8 = param_2;
  local_4a0 = param_3;
  if (param_1 != param_2) {
    local_500 = param_3 + 0x898;
    local_4c8 = param_3 + 0x450;
    local_4d0 = param_3 + 0x871;
    do {
      iVar11 = FUN_100187d80(param_1,&local_478);
      if ((iVar11 == 0) &&
         (((local_478 == 0x48454943 || (local_478 == 0x4a504720)) || (local_478 == 0x48454946)))) {
        local_480 = (char *)FUN_10045aeee();
        FUN_1001c62d9(local_4f8,0x10);
        FUN_1001b7a44(local_490);
        pcVar17 = local_480;
        local_518 = local_480 + 0x428;
        FUN_100238ca8(local_528);
        if (pcVar17[0x420] == '\0') {
          local_480[0x420] = '\x01';
          local_4c0 = 0;
          if (*(long *)(local_480 + 0x488) == 0) {
            local_4b8 = (char *)FUN_100165ffd(DAT_1008c4d90,local_480,
                                              "SpatialOvercaptureGroupCacheMac",&local_478,0,
                                              &local_4c0);
            if (local_4b8 == (char *)0x0) {
              iVar11 = FUN_10016925a(local_4c0);
              if (((iVar11 != -0x80) && (iVar11 != -0x2b)) && (iVar11 != 0)) {
                uVar19 = FUN_1001cc310();
                cVar10 = _os_log_type_enabled(uVar19,0x10);
                if (cVar10 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar11);
                  __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
              }
LAB_100458d0e:
              lVar16 = 0;
            }
            else {
              lVar16 = FUN_100197bcc(DAT_1008c4d90);
              if (lVar16 == 0) {
                uVar19 = FUN_1001cc310();
                cVar10 = _os_log_type_enabled(uVar19,0x10);
                if (cVar10 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "data != nullptr";
                  __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                iVar11 = -0x6c;
                goto LAB_100458d0e;
              }
              pcVar17 = (char *)FUN_100170f3b(lVar16);
              lVar14 = FUN_100170ef7(lVar16);
              local_498 = lVar16;
              if (0 < lVar14) {
                pcVar24 = local_480 + 0x470;
                pcVar22 = pcVar17 + lVar14;
                pcVar18 = pcVar17;
                do {
                  pcVar23 = pcVar18;
                  if (*pcVar17 == '\0') {
                    if (((long)pcVar17 - (long)pcVar18 < 1) ||
                       (pcVar23 = pcVar17 + 0x11, pcVar22 < pcVar23)) {
                      FUN_100460696(pcVar24);
                      iVar13 = FUN_100182d4d(&local_478);
                      iVar11 = -0xd0;
                      lVar16 = local_498;
                      if ((iVar13 != -0x80) && (iVar13 != 0)) {
                        uVar19 = FUN_1001cc310();
                        cVar10 = _os_log_type_enabled(uVar19,0x10);
                        lVar16 = local_498;
                        if (cVar10 != '\0') {
                          local_58 = 0x8220202;
                          local_54 = "Assertion failure";
                          local_4c = 0x400;
                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar13);
                          __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",
                                              &local_58,0x12);
                          lVar16 = local_498;
                        }
                      }
                      goto LAB_100458d10;
                    }
                    FUN_1001b8110(&local_58,pcVar18,(long)pcVar17 - (long)pcVar18,0x8000100);
                    local_4e0 = &local_58;
                    lVar16 = FUN_1004600c2(pcVar24,&local_58,&local_4e0);
                    uVar1 = *(undefined4 *)(pcVar17 + 5);
                    uVar2 = *(undefined4 *)(pcVar17 + 9);
                    uVar3 = *(undefined4 *)(pcVar17 + 0xd);
                    *(undefined4 *)(lVar16 + 0x20) = *(undefined4 *)(pcVar17 + 1);
                    *(undefined4 *)(lVar16 + 0x24) = uVar1;
                    *(undefined4 *)(lVar16 + 0x28) = uVar2;
                    *(undefined4 *)(lVar16 + 0x2c) = uVar3;
                    FUN_1001b7a50(&local_58);
                    pcVar17 = pcVar17 + 0x10;
                  }
                  pcVar17 = pcVar17 + 1;
                  pcVar18 = pcVar23;
                } while (pcVar17 < pcVar22);
              }
              iVar11 = 0;
              lVar16 = local_498;
            }
LAB_100458d10:
            FUN_10017060f(lVar16);
            FUN_10017060f(local_4c0);
            FUN_10017060f(local_4b8);
          }
          else {
            uVar19 = FUN_1001cc310();
            cVar10 = _os_log_type_enabled(uVar19,0x10);
            if (cVar10 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "mMap.size() == 0";
              __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            iVar11 = -0x32;
            FUN_1001782e9(0,0);
          }
          iVar13 = iVar11;
          if (iVar11 == -0xd0) {
            iVar13 = 0;
          }
          if (iVar11 == -0x2b) {
            iVar13 = 0;
          }
          if (iVar13 == -0x80) {
            iVar13 = -0x2b;
          }
          else {
            if (iVar13 == 0) goto LAB_100458a69;
            uVar19 = FUN_1001cc310();
            cVar10 = _os_log_type_enabled(uVar19,0x10);
            if (cVar10 != '\0') {
              local_478 = 0x8220202;
              local_474 = "Assertion failure";
              local_46c = 0x400;
              local_46a = (undefined2)iVar13;
              uStack_468 = (undefined2)((uint)iVar13 >> 0x10);
              __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_478,0x12)
              ;
            }
          }
        }
        else {
LAB_100458a69:
          iVar11 = FUN_10017dca4(param_1,local_490);
          iVar13 = -0x2b;
          if (iVar11 != -0x80) {
            if (iVar11 == 0) {
              lVar16 = FUN_1004117e4(local_480 + 0x470,local_490);
              if (lVar16 != 0) {
                local_4f8 = *(undefined1 (*) [16])(lVar16 + 0x20);
                iVar13 = 0;
              }
            }
            else {
              uVar19 = FUN_1001cc310();
              cVar10 = _os_log_type_enabled(uVar19,0x10);
              iVar13 = iVar11;
              if (cVar10 != '\0') {
                local_478 = 0x8220202;
                local_474 = "Assertion failure";
                local_46c = 0x400;
                local_46a = (undefined2)iVar11;
                uStack_468 = (undefined2)((uint)iVar11 >> 0x10);
                __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_478,
                                    0x12);
              }
            }
          }
        }
        FUN_10015a142(local_528);
        FUN_1001b7a50(local_490);
        local_4b8 = (char *)((ulong)local_4b8 & 0xffffffff00000000);
        if (iVar13 == 0) goto LAB_100458ecc;
        iVar11 = FUN_100187d80(param_1,&local_4e4);
        if (iVar11 == -0x80) {
LAB_100458ec6:
          local_4b8 = (char *)CONCAT44(local_4b8._4_4_,iVar11);
        }
        else {
          if (iVar11 != 0) {
            uVar19 = FUN_1001cc310();
            cVar10 = _os_log_type_enabled(uVar19,0x10);
            if (cVar10 != '\0') {
              local_478 = 0x8220202;
              local_474 = "Assertion failure";
              local_46c = 0x400;
              local_46a = (undefined2)iVar11;
              uStack_468 = (undefined2)((uint)iVar11 >> 0x10);
              __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_478,0x12)
              ;
            }
            goto LAB_100458ec6;
          }
          if ((local_4e4 == 0x48454946) || (local_4e4 == 0x48454943)) {
            uStack_468 = 0;
            uStack_466 = 0;
            uStack_462 = 0;
            pvStack_460 = (void *)0x0;
            local_458 = 0;
            local_450 = &local_448;
            local_448 = 0;
            uStack_440 = 0;
            local_490[0] = (undefined4 *)0x0;
            iVar11 = FUN_10045d62e(&local_478,param_1,local_490);
            if (iVar11 == -0x80) {
LAB_10045950a:
              lVar16 = 0;
              lVar14 = 0;
            }
            else {
              if (iVar11 != 0) {
                uVar19 = FUN_1001cc310();
                cVar10 = _os_log_type_enabled(uVar19,0x10);
                if (cVar10 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar11);
                  __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
                goto LAB_10045950a;
              }
              lVar16 = FUN_100464646(local_490[0]);
              if (lVar16 == 0) {
                uVar19 = FUN_1001cc310();
                cVar10 = _os_log_type_enabled(uVar19,0x10);
                if (cVar10 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "imagePropertiesDictionary != nullptr";
                  __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                goto LAB_10045950a;
              }
              lVar14 = FUN_1004659d1(lVar16);
            }
            FUN_10017060f(lVar16);
            FUN_10017060f(local_490[0]);
            FUN_100230408(local_448);
            pvVar4 = (void *)CONCAT26(uStack_462,CONCAT42(uStack_466,uStack_468));
            if (pvVar4 != (void *)0x0) {
              pvStack_460 = pvVar4;
              operator_delete(pvVar4);
            }
          }
          else {
            lVar16 = FUN_10016ff43(DAT_1008c4d90,param_1);
            if (lVar16 == 0) {
              uVar19 = FUN_1001cc310();
              cVar10 = _os_log_type_enabled(uVar19,0x10);
              if (cVar10 != '\0') {
                local_478 = 0x8220202;
                local_474 = "Assertion failure";
                local_46c = 0x822;
                local_46a = 0xb0f;
                uStack_468 = 0x7d;
                uStack_466 = 1;
                __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_478,
                                    0x16);
              }
              FUN_1001782e9(0,0);
LAB_10045985c:
              lVar14 = 0;
              lVar15 = 0;
              uVar19 = 0;
            }
            else {
              lVar15 = _CGImageSourceCreateWithURL(lVar16,0);
              if (lVar15 == 0) {
                uVar19 = FUN_1001cc310();
                cVar10 = _os_log_type_enabled(uVar19,0x10);
                if (cVar10 != '\0') {
                  local_478 = 0x8220202;
                  local_474 = "Assertion failure";
                  local_46c = 0x822;
                  local_46a = 0x52d2;
                  uStack_468 = 0x7a;
                  uStack_466 = 1;
                  __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_478,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                goto LAB_10045985c;
              }
              uVar19 = _CGImageSourceCopyPropertiesAtIndex(lVar15,0,0);
              lVar14 = FUN_1004659d1(uVar19);
            }
            FUN_10017060f(uVar19);
            FUN_10017060f(lVar15);
            FUN_10017060f(lVar16);
          }
          if (lVar14 == 0) {
            local_4b8 = (char *)CONCAT44(local_4b8._4_4_,0xffffff80);
          }
          else {
            auVar26 = FUN_100169915(lVar14);
            local_4f8 = auVar26;
            FUN_10017060f(lVar14);
            uVar2 = local_4f8._4_4_;
            uVar3 = local_4f8._8_4_;
            uVar5 = local_4f8._12_4_;
            uVar1 = local_4f8._0_4_;
            FUN_1001b7a44(&local_58);
            iVar11 = FUN_10017dca4(param_1,&local_58);
            if (iVar11 != -0x80) {
              if (iVar11 != 0) {
                uVar19 = FUN_1001cc310();
                cVar10 = _os_log_type_enabled(uVar19,0x10);
                uVar7 = uStack_468;
                uVar6 = local_46a;
                local_46a = (undefined2)iVar11;
                uVar8 = local_46a;
                uStack_468 = (undefined2)((uint)iVar11 >> 0x10);
                uVar9 = uStack_468;
                if (cVar10 != '\0') {
                  local_478 = 0x8220202;
                  local_474 = "Assertion failure";
                  local_46c = 0x400;
                  __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_478,
                                      0x12);
                  uVar6 = local_46a;
                  uVar7 = uStack_468;
                }
                uStack_468 = uVar7;
                local_46a = uVar6;
                FUN_1001b7a50(&local_58);
                if (iVar11 != 0) {
                  uVar19 = FUN_1001cc310();
                  cVar10 = _os_log_type_enabled(uVar19,0x10);
                  if (cVar10 != '\0') {
                    local_478 = 0x8220202;
                    local_474 = "Assertion failure";
                    local_46c = 0x400;
                    local_46a = uVar8;
                    uStack_468 = uVar9;
                    __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_478
                                        ,0x12);
                  }
                }
                goto LAB_100458ecc;
              }
              FUN_100238ca8(&local_478,local_518);
              local_490[0] = &local_58;
              lVar16 = FUN_1004606e6(local_480 + 0x470,local_490[0],local_490);
              *(undefined4 *)(lVar16 + 0x20) = uVar1;
              *(undefined4 *)(lVar16 + 0x24) = uVar2;
              *(undefined4 *)(lVar16 + 0x28) = uVar3;
              *(undefined4 *)(lVar16 + 0x2c) = uVar5;
              FUN_10015a142(&local_478);
            }
            FUN_1001b7a50(&local_58);
          }
        }
LAB_100458ecc:
        FUN_10017d520(&local_478,param_1);
        FUN_1001b7b04(&local_58,"IMG_E");
        cVar10 = FUN_1001ba114(&local_478,&local_58,0x1b1);
        FUN_1001b7a50(&local_58);
        FUN_1001b7a50(&local_478);
        pcVar17 = local_4a0;
        if (cVar10 == '\0') {
          FUN_10017d520(&local_478,param_1);
          FUN_1001b7b04(&local_58,"IMG_S");
          cVar10 = FUN_1001ba114(&local_478,&local_58,0x1b1);
          FUN_1001b7a50(&local_58);
          FUN_1001b7a50(&local_478);
          pcVar17 = local_4a0;
          if (cVar10 == '\0') {
            FUN_10017d520(&local_478,param_1);
            FUN_1001b7b04(&local_58,"IMG_");
            cVar10 = FUN_1001ba114(&local_478,&local_58,0x1b1);
            FUN_1001b7a50(&local_58);
            if (cVar10 != '\0') {
              FUN_1001ba6e0(&local_58,&local_478,4);
              FUN_1001b80b2(&local_478,&local_58);
              FUN_1001b7a50(&local_58);
              cVar10 = FUN_1001b8428(&local_478);
              if (cVar10 == '\0') {
                FUN_1001ba6e0(&local_58,&local_478,0);
                pcVar17 = (char *)FUN_1001b83ae(&local_58);
                if ((long)*pcVar17 < 0) {
                  FUN_1001b7a50(&local_58);
                }
                else {
                  uVar12 = *(uint *)(PTR___DefaultRuneLocale_10082cae8 + (long)*pcVar17 * 4 + 0x3c);
                  FUN_1001b7a50(&local_58);
                  if ((uVar12 >> 10 & 1) != 0) {
                    FUN_1001b7a50(&local_478);
                    pcVar17 = local_4a0;
                    *local_4a0 = '\x01';
                    _memcpy(param_3 + 8,param_1,0x420);
                    pcVar17[0x439] = (int)local_4b8 == 0;
                    if ((int)local_4b8 == 0) {
                      pcVar17 = param_3 + 0x43a;
                      goto LAB_10045909e;
                    }
                    goto LAB_1004589e6;
                  }
                }
              }
            }
            FUN_1001b7a50(&local_478);
          }
          else {
            local_4a0[0x892] = '\x01';
            _memcpy(local_500,param_1,0x420);
            pcVar17[0xcb8] = (int)local_4b8 == 0;
            if ((int)local_4b8 == 0) {
              pcVar17 = param_3 + 0xcb9;
LAB_10045909e:
              *(undefined4 *)pcVar17 = local_4f8._0_4_;
              *(undefined4 *)(pcVar17 + 4) = local_4f8._4_4_;
              *(undefined4 *)(pcVar17 + 8) = local_4f8._8_4_;
              *(undefined4 *)(pcVar17 + 0xc) = local_4f8._12_4_;
            }
          }
        }
        else {
          local_4a0[0x44a] = '\x01';
          _memcpy(local_4c8,param_1,0x420);
          pcVar17[0x881] = (int)local_4b8 == 0;
          if ((int)local_4b8 == 0) {
            *(undefined4 *)(param_3 + 0x882) = local_4f8._0_4_;
            *(undefined4 *)(param_3 + 0x886) = local_4f8._4_4_;
            *(undefined4 *)(param_3 + 0x88a) = local_4f8._8_4_;
            *(undefined4 *)(param_3 + 0x88e) = local_4f8._12_4_;
          }
          local_480 = (char *)FUN_10045af60();
          FUN_1001c62d9(local_4d0,0x10);
          FUN_1001b7a44(local_490);
          pcVar17 = local_480;
          local_4b8 = local_480 + 0x428;
          FUN_100238ca8(local_528);
          if (pcVar17[0x420] == '\0') {
            local_480[0x420] = '\x01';
            local_4c0 = 0;
            if (*(long *)(local_480 + 0x488) == 0) {
              local_518 = (char *)FUN_100165ffd(DAT_1008c4d90,local_480,
                                                "RenderOriginatingSignatureCacheMac",&local_478,0,
                                                &local_4c0);
              if (local_518 == (char *)0x0) {
                iVar11 = FUN_10016925a(local_4c0);
                if (((iVar11 != -0x80) && (iVar11 != -0x2b)) && (iVar11 != 0)) {
                  uVar19 = FUN_1001cc310();
                  cVar10 = _os_log_type_enabled(uVar19,0x10);
                  if (cVar10 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar11);
                    __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                }
LAB_10045957c:
                lVar16 = 0;
              }
              else {
                lVar16 = FUN_100197bcc(DAT_1008c4d90);
                if (lVar16 == 0) {
                  uVar19 = FUN_1001cc310();
                  cVar10 = _os_log_type_enabled(uVar19,0x10);
                  if (cVar10 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "data != nullptr";
                    __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_58
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                  iVar11 = -0x6c;
                  goto LAB_10045957c;
                }
                pcVar17 = (char *)FUN_100170f3b(lVar16);
                lVar14 = FUN_100170ef7(lVar16);
                local_498 = lVar16;
                if (0 < lVar14) {
                  pcVar24 = local_480 + 0x470;
                  pcVar22 = pcVar17 + lVar14;
                  pcVar18 = pcVar17;
                  do {
                    pcVar23 = pcVar18;
                    if (*pcVar17 == '\0') {
                      if (((long)pcVar17 - (long)pcVar18 < 1) ||
                         (pcVar23 = pcVar17 + 0x11, pcVar22 < pcVar23)) {
                        FUN_100460696(pcVar24);
                        iVar13 = FUN_100182d4d(&local_478);
                        iVar11 = -0xd0;
                        lVar16 = local_498;
                        if ((iVar13 != -0x80) && (iVar13 != 0)) {
                          uVar19 = FUN_1001cc310();
                          cVar10 = _os_log_type_enabled(uVar19,0x10);
                          lVar16 = local_498;
                          if (cVar10 != '\0') {
                            local_58 = 0x8220202;
                            local_54 = "Assertion failure";
                            local_4c = 0x400;
                            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar13);
                            __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",
                                                &local_58,0x12);
                            lVar16 = local_498;
                          }
                        }
                        goto LAB_10045957e;
                      }
                      FUN_1001b8110(&local_58,pcVar18,(long)pcVar17 - (long)pcVar18,0x8000100);
                      local_4e0 = &local_58;
                      lVar16 = FUN_1004600c2(pcVar24,&local_58,&local_4e0);
                      uVar1 = *(undefined4 *)(pcVar17 + 5);
                      uVar2 = *(undefined4 *)(pcVar17 + 9);
                      uVar3 = *(undefined4 *)(pcVar17 + 0xd);
                      *(undefined4 *)(lVar16 + 0x20) = *(undefined4 *)(pcVar17 + 1);
                      *(undefined4 *)(lVar16 + 0x24) = uVar1;
                      *(undefined4 *)(lVar16 + 0x28) = uVar2;
                      *(undefined4 *)(lVar16 + 0x2c) = uVar3;
                      FUN_1001b7a50(&local_58);
                      pcVar17 = pcVar17 + 0x10;
                    }
                    pcVar17 = pcVar17 + 1;
                    pcVar18 = pcVar23;
                  } while (pcVar17 < pcVar22);
                }
                iVar11 = 0;
                lVar16 = local_498;
              }
LAB_10045957e:
              FUN_10017060f(lVar16);
              FUN_10017060f(local_4c0);
              FUN_10017060f(local_518);
            }
            else {
              uVar19 = FUN_1001cc310();
              cVar10 = _os_log_type_enabled(uVar19,0x10);
              if (cVar10 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "mMap.size() == 0";
                __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_58,
                                    0x16);
              }
              iVar11 = -0x32;
              FUN_1001782e9(0,0);
            }
            iVar13 = iVar11;
            if (iVar11 == -0xd0) {
              iVar13 = 0;
            }
            if (iVar11 == -0x2b) {
              iVar13 = 0;
            }
            if (iVar13 == -0x80) {
              iVar13 = -0x2b;
            }
            else {
              if (iVar13 == 0) goto LAB_100458fb9;
              uVar19 = FUN_1001cc310();
              cVar10 = _os_log_type_enabled(uVar19,0x10);
              if (cVar10 != '\0') {
                local_478 = 0x8220202;
                local_474 = "Assertion failure";
                local_46c = 0x400;
                local_46a = (undefined2)iVar13;
                uStack_468 = (undefined2)((uint)iVar13 >> 0x10);
                __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_478,
                                    0x12);
              }
            }
          }
          else {
LAB_100458fb9:
            iVar11 = FUN_10017dca4(param_1,local_490);
            iVar13 = -0x2b;
            if (iVar11 != -0x80) {
              if (iVar11 == 0) {
                lVar16 = FUN_1004117e4(local_480 + 0x470,local_490);
                if (lVar16 != 0) {
                  uVar1 = *(undefined4 *)(lVar16 + 0x24);
                  uVar2 = *(undefined4 *)(lVar16 + 0x28);
                  uVar3 = *(undefined4 *)(lVar16 + 0x2c);
                  *(undefined4 *)local_4d0 = *(undefined4 *)(lVar16 + 0x20);
                  *(undefined4 *)(local_4d0 + 4) = uVar1;
                  *(undefined4 *)(local_4d0 + 8) = uVar2;
                  *(undefined4 *)(local_4d0 + 0xc) = uVar3;
                  iVar13 = 0;
                }
              }
              else {
                uVar19 = FUN_1001cc310();
                cVar10 = _os_log_type_enabled(uVar19,0x10);
                iVar13 = iVar11;
                if (cVar10 != '\0') {
                  local_478 = 0x8220202;
                  local_474 = "Assertion failure";
                  local_46c = 0x400;
                  local_46a = (undefined2)iVar11;
                  uStack_468 = (undefined2)((uint)iVar11 >> 0x10);
                  __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_478,
                                      0x12);
                }
              }
            }
          }
          FUN_10015a142(local_528);
          FUN_1001b7a50(local_490);
          if (iVar13 != 0) {
            iVar11 = FUN_100187d80(param_1,&local_4e4);
            if (iVar11 == -0x80) goto LAB_1004589e6;
            if (iVar11 == 0) {
              if ((local_4e4 == 0x48454946) || (local_4e4 == 0x48454943)) {
                uStack_468 = 0;
                uStack_466 = 0;
                uStack_462 = 0;
                pvStack_460 = (void *)0x0;
                local_458 = 0;
                local_450 = &local_448;
                local_448 = 0;
                uStack_440 = 0;
                local_490[0] = (undefined4 *)0x0;
                iVar11 = FUN_10045d62e(&local_478,param_1,local_490);
                if (iVar11 == -0x80) {
LAB_100459bb5:
                  lVar16 = 0;
                  lVar14 = 0;
                }
                else {
                  if (iVar11 != 0) {
                    uVar19 = FUN_1001cc310();
                    cVar10 = _os_log_type_enabled(uVar19,0x10);
                    if (cVar10 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar11);
                      __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",
                                          &local_58,0x12);
                    }
                    goto LAB_100459bb5;
                  }
                  lVar16 = FUN_100464646(local_490[0]);
                  if (lVar16 == 0) {
                    uVar19 = FUN_1001cc310();
                    cVar10 = _os_log_type_enabled(uVar19,0x10);
                    if (cVar10 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x822;
                      local_4a = "imagePropertiesDictionary != nullptr";
                      __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                    goto LAB_100459bb5;
                  }
                  lVar14 = FUN_100465cdb(lVar16);
                }
                FUN_10017060f(lVar16);
                FUN_10017060f(local_490[0]);
                FUN_100230408(local_448);
                pvVar4 = (void *)CONCAT26(uStack_462,CONCAT42(uStack_466,uStack_468));
                if (pvVar4 != (void *)0x0) {
                  pvStack_460 = pvVar4;
                  operator_delete(pvVar4);
                }
              }
              else {
                lVar16 = FUN_10016ff43(DAT_1008c4d90,param_1);
                if (lVar16 == 0) {
                  uVar19 = FUN_1001cc310();
                  cVar10 = _os_log_type_enabled(uVar19,0x10);
                  if (cVar10 != '\0') {
                    local_478 = 0x8220202;
                    local_474 = "Assertion failure";
                    local_46c = 0x822;
                    local_46a = 0xb0f;
                    uStack_468 = 0x7d;
                    uStack_466 = 1;
                    __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",
                                        &local_478,0x16);
                  }
                  FUN_1001782e9(0,0);
LAB_100459c1a:
                  lVar14 = 0;
                  lVar15 = 0;
                  uVar19 = 0;
                }
                else {
                  lVar15 = _CGImageSourceCreateWithURL(lVar16,0);
                  if (lVar15 == 0) {
                    uVar19 = FUN_1001cc310();
                    cVar10 = _os_log_type_enabled(uVar19,0x10);
                    if (cVar10 != '\0') {
                      local_478 = 0x8220202;
                      local_474 = "Assertion failure";
                      local_46c = 0x822;
                      local_46a = 0x52d2;
                      uStack_468 = 0x7a;
                      uStack_466 = 1;
                      __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",
                                          &local_478,0x16);
                    }
                    FUN_1001782e9(0,0);
                    goto LAB_100459c1a;
                  }
                  uVar19 = _CGImageSourceCopyPropertiesAtIndex(lVar15,0,0);
                  lVar14 = FUN_100465cdb(uVar19);
                }
                FUN_10017060f(uVar19);
                FUN_10017060f(lVar15);
                FUN_10017060f(lVar16);
              }
              if (lVar14 == 0) goto LAB_1004589e6;
              IVar20 = _objc_alloc(PTR__OBJC_CLASS___NSData_10082df80);
              IVar20 = NSData::initWithBase64EncodedString_options_(IVar20,op_01,lVar14);
              if (IVar20 == 0) {
                uVar19 = FUN_1001cc310();
                cVar10 = _os_log_type_enabled(uVar19,0x10);
                if (cVar10 != '\0') {
                  local_478 = 0x8220202;
                  local_474 = "Assertion failure";
                  local_46c = 0x822;
                  local_46a = 0xe93;
                  uStack_468 = 0x7d;
                  uStack_466 = 1;
                  __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_478,
                                      0x16);
                }
                bVar25 = false;
                FUN_1001782e9(0,0);
                iVar11 = -0x80;
              }
              else {
                IVar21 = NSData::length(IVar20,op);
                iVar11 = -0x32;
                bVar25 = 0xf < IVar21;
                if (bVar25) {
                  iVar11 = 0;
                  NSData::getBytes_length_(IVar20,op_00,local_4d0);
                }
                (*(code *)PTR__objc_release_10082c7b0)(IVar20);
              }
              FUN_10017060f(lVar14);
              if (bVar25) {
                local_518 = *(char **)local_4d0;
                uStack_510 = *(undefined4 *)(local_4d0 + 8);
                uStack_50c = *(undefined4 *)(local_4d0 + 0xc);
                FUN_1001b7a44(&local_58);
                iVar13 = FUN_10017dca4(param_1,&local_58);
                if (iVar13 != -0x80) {
                  if (iVar13 != 0) {
                    uVar19 = FUN_1001cc310();
                    cVar10 = _os_log_type_enabled(uVar19,0x10);
                    uVar9 = uStack_468;
                    uVar7 = local_46a;
                    local_46a = (undefined2)iVar13;
                    uVar6 = local_46a;
                    uStack_468 = (undefined2)((uint)iVar13 >> 0x10);
                    uVar8 = uStack_468;
                    if (cVar10 != '\0') {
                      local_478 = 0x8220202;
                      local_474 = "Assertion failure";
                      local_46c = 0x400;
                      __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",
                                          &local_478,0x12);
                      uVar7 = local_46a;
                      uVar9 = uStack_468;
                    }
                    uStack_468 = uVar9;
                    local_46a = uVar7;
                    FUN_1001b7a50(&local_58);
                    if (iVar13 != 0) {
                      uVar19 = FUN_1001cc310();
                      cVar10 = _os_log_type_enabled(uVar19,0x10);
                      if (cVar10 != '\0') goto LAB_10045976a;
                    }
                    goto LAB_100459dc8;
                  }
                  FUN_100238ca8(&local_478,local_4b8);
                  local_490[0] = &local_58;
                  lVar16 = FUN_1004606e6(local_480 + 0x470,local_490[0],local_490);
                  *(undefined4 *)(lVar16 + 0x20) = (undefined4)local_518;
                  *(undefined4 *)(lVar16 + 0x24) = local_518._4_4_;
                  *(undefined4 *)(lVar16 + 0x28) = uStack_510;
                  *(undefined4 *)(lVar16 + 0x2c) = uStack_50c;
                  FUN_10015a142(&local_478);
                }
                FUN_1001b7a50(&local_58);
              }
            }
            else {
              uVar19 = FUN_1001cc310();
              cVar10 = _os_log_type_enabled(uVar19,0x10);
              if (cVar10 != '\0') {
                local_46a = (undefined2)iVar11;
                uStack_468 = (undefined2)((uint)iVar11 >> 0x10);
                uVar6 = local_46a;
                uVar8 = uStack_468;
LAB_10045976a:
                uStack_468 = uVar8;
                local_46a = uVar6;
                local_46c = 0x400;
                local_474 = "Assertion failure";
                local_478 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_478,
                                    0x12);
              }
            }
LAB_100459dc8:
            if (iVar11 != 0) goto LAB_1004589e6;
          }
          local_4a0[0x870] = '\x01';
        }
      }
LAB_1004589e6:
      param_1 = (void *)((long)param_1 + 0x420);
    } while (param_1 != local_4d8);
  }
  if (((local_4a0[0x44a] == '\0') || (local_4a0[0x870] != '\x01')) || (*local_4a0 != '\x01'))
  goto LAB_10045ab3c;
  local_4d8 = (void *)FUN_10045afd2();
  local_4b8 = local_4a0 + 0x429;
  FUN_1001c62d9(local_4b8,0x10);
  FUN_1001b7a44(local_490);
  pvVar4 = local_4d8;
  local_518 = (char *)((long)local_4d8 + 0x428);
  FUN_100238ca8(local_528);
  local_480 = local_4a0 + 8;
  if (*(char *)((long)pvVar4 + 0x420) == '\0') {
    *(undefined1 *)((long)local_4d8 + 0x420) = 1;
    local_4e0 = (undefined4 *)0x0;
    if (*(long *)((long)local_4d8 + 0x488) == 0) {
      local_4d0 = (char *)FUN_100165ffd(DAT_1008c4d90,local_4d8,"OriginalSignatureCacheMac",
                                        &local_478,0,&local_4e0);
      if (local_4d0 == (char *)0x0) {
        iVar11 = FUN_10016925a(local_4e0);
        local_4c8 = (char *)0x0;
        if (((iVar11 != -0x80) && (iVar11 != -0x2b)) && (iVar11 != 0)) {
          uVar19 = FUN_1001cc310();
          cVar10 = _os_log_type_enabled(uVar19,0x10);
          if (cVar10 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar11);
            __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          local_4c8 = (char *)0x0;
        }
      }
      else {
        pcVar17 = (char *)FUN_100197bcc(DAT_1008c4d90);
        if (pcVar17 == (char *)0x0) {
          uVar19 = FUN_1001cc310();
          cVar10 = _os_log_type_enabled(uVar19,0x10);
          if (cVar10 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "data != nullptr";
            __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          local_4c8 = (char *)0x0;
          iVar11 = -0x6c;
        }
        else {
          pcVar18 = (char *)FUN_100170f3b(pcVar17);
          lVar16 = FUN_100170ef7(pcVar17);
          iVar11 = 0;
          local_4c8 = pcVar17;
          if (0 < lVar16) {
            local_500 = (char *)((long)local_4d8 + 0x470);
            pcVar24 = pcVar18 + lVar16;
            pcVar17 = pcVar18;
            do {
              pcVar22 = pcVar17;
              if (*pcVar18 == '\0') {
                if (((long)pcVar18 - (long)pcVar17 < 1) ||
                   (pcVar22 = pcVar18 + 0x11, pcVar24 < pcVar22)) {
                  FUN_100460696(local_500);
                  iVar13 = FUN_100182d4d(&local_478);
                  iVar11 = -0xd0;
                  if ((iVar13 != -0x80) && (iVar13 != 0)) {
                    uVar19 = FUN_1001cc310();
                    cVar10 = _os_log_type_enabled(uVar19,0x10);
                    if (cVar10 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar13);
                      __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",
                                          &local_58,0x12);
                    }
                  }
                  goto LAB_10045a611;
                }
                FUN_1001b8110(&local_58,pcVar17,(long)pcVar18 - (long)pcVar17,0x8000100);
                local_4f8._0_8_ = &local_58;
                lVar16 = FUN_1004600c2(local_500,&local_58,local_4f8);
                uVar1 = *(undefined4 *)(pcVar18 + 5);
                uVar2 = *(undefined4 *)(pcVar18 + 9);
                uVar3 = *(undefined4 *)(pcVar18 + 0xd);
                *(undefined4 *)(lVar16 + 0x20) = *(undefined4 *)(pcVar18 + 1);
                *(undefined4 *)(lVar16 + 0x24) = uVar1;
                *(undefined4 *)(lVar16 + 0x28) = uVar2;
                *(undefined4 *)(lVar16 + 0x2c) = uVar3;
                FUN_1001b7a50(&local_58);
                pcVar18 = pcVar18 + 0x10;
              }
              pcVar18 = pcVar18 + 1;
              pcVar17 = pcVar22;
            } while (pcVar18 < pcVar24);
            iVar11 = 0;
          }
        }
      }
LAB_10045a611:
      FUN_10017060f(local_4c8);
      FUN_10017060f(local_4e0);
      FUN_10017060f(local_4d0);
    }
    else {
      uVar19 = FUN_1001cc310();
      cVar10 = _os_log_type_enabled(uVar19,0x10);
      if (cVar10 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mMap.size() == 0";
        __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      iVar11 = -0x32;
      FUN_1001782e9(0,0);
    }
    iVar13 = iVar11;
    if (iVar11 == -0xd0) {
      iVar13 = 0;
    }
    if (iVar11 == -0x2b) {
      iVar13 = 0;
    }
    if (iVar13 == -0x80) {
      iVar13 = -0x2b;
    }
    else {
      if (iVar13 == 0) goto LAB_10045a39f;
      uVar19 = FUN_1001cc310(local_480);
      cVar10 = _os_log_type_enabled(uVar19,0x10);
      if (cVar10 != '\0') {
        local_478 = 0x8220202;
        local_474 = "Assertion failure";
        local_46c = 0x400;
        local_46a = (undefined2)iVar13;
        uStack_468 = (undefined2)((uint)iVar13 >> 0x10);
        __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_478,0x12);
      }
    }
  }
  else {
LAB_10045a39f:
    iVar11 = FUN_10017dca4(local_480,local_490);
    iVar13 = -0x2b;
    if (iVar11 != -0x80) {
      if (iVar11 == 0) {
        lVar16 = FUN_1004117e4((long)local_4d8 + 0x470,local_490);
        if (lVar16 != 0) {
          uVar1 = *(undefined4 *)(lVar16 + 0x24);
          uVar2 = *(undefined4 *)(lVar16 + 0x28);
          uVar3 = *(undefined4 *)(lVar16 + 0x2c);
          *(undefined4 *)local_4b8 = *(undefined4 *)(lVar16 + 0x20);
          *(undefined4 *)(local_4b8 + 4) = uVar1;
          *(undefined4 *)(local_4b8 + 8) = uVar2;
          *(undefined4 *)(local_4b8 + 0xc) = uVar3;
          iVar13 = 0;
        }
      }
      else {
        uVar19 = FUN_1001cc310();
        cVar10 = _os_log_type_enabled(uVar19,0x10);
        iVar13 = iVar11;
        if (cVar10 != '\0') {
          local_478 = 0x8220202;
          local_474 = "Assertion failure";
          local_46c = 0x400;
          local_46a = (undefined2)iVar11;
          uStack_468 = (undefined2)((uint)iVar11 >> 0x10);
          __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_478,0x12);
        }
      }
    }
  }
  FUN_10015a142(local_528);
  FUN_1001b7a50(local_490);
  if (iVar13 != 0) {
    iVar11 = FUN_100187d80(local_480,&local_4c0);
    if (iVar11 == -0x80) goto LAB_10045ab3c;
    if (iVar11 == 0) {
      iVar11 = FUN_1001823de(local_480,&local_478,0x3ff);
      if (iVar11 == 0) {
        uVar12 = _open((char *)&local_478,0);
        if (uVar12 == 0xffffffff) {
          uVar19 = FUN_1001cc310();
          cVar10 = _os_log_type_enabled(uVar19,0x10);
          if (cVar10 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "fd != -1";
            __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_10045ab3c;
        }
        local_490[0] = (undefined4 *)0x0;
        IVar20 = CKSignatureGenerator::signatureWithFileDescriptor_error_
                           ((ID)PTR__OBJC_CLASS___CKSignatureGenerator_10082bad8,
                            PTR_s_signatureWithFileDescriptor_erro_10088d358,(ulong)uVar12);
        if (IVar20 == 0) {
          uVar19 = FUN_1001cc310();
          cVar10 = _os_log_type_enabled(uVar19,0x10);
          if (cVar10 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "signature != nullptr";
            __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          iVar11 = -0x32;
          FUN_1001782e9(0,0);
        }
        else {
          IVar21 = CKSignatureGenerator::length(IVar20,PTR_s_length_10088bdf0);
          if (IVar21 < 0x10) {
            uVar19 = FUN_1001cc310();
            cVar10 = _os_log_type_enabled(uVar19,0x10);
            iVar11 = -0x32;
            if (cVar10 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,0xffffffce);
              __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          else {
            iVar11 = 0;
            CKSignatureGenerator::getBytes_length_
                      (IVar20,PTR_s_getBytes_length__10088c480,local_4b8,0x10);
          }
        }
        _close(uVar12);
      }
      else {
        if (iVar11 == -0x80) goto LAB_10045ab3c;
        uVar19 = FUN_1001cc310();
        cVar10 = _os_log_type_enabled(uVar19,0x10);
        if (cVar10 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar11);
          __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      if (iVar11 == 0) {
        uStack_4b0 = *(undefined4 *)(local_4b8 + 8);
        uStack_4ac = *(undefined4 *)(local_4b8 + 0xc);
        local_4b8 = *(char **)local_4b8;
        FUN_1001b7a44(&local_58);
        iVar11 = FUN_10017dca4(local_480,&local_58);
        if (iVar11 != -0x80) {
          if (iVar11 != 0) {
            uVar19 = FUN_1001cc310();
            cVar10 = _os_log_type_enabled(uVar19,0x10);
            uVar7 = uStack_468;
            uVar6 = local_46a;
            local_46a = (undefined2)iVar11;
            uVar8 = local_46a;
            uStack_468 = (undefined2)((uint)iVar11 >> 0x10);
            uVar9 = uStack_468;
            if (cVar10 != '\0') {
              local_478 = 0x8220202;
              local_474 = "Assertion failure";
              local_46c = 0x400;
              __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_478,0x12)
              ;
              uVar6 = local_46a;
              uVar7 = uStack_468;
            }
            uStack_468 = uVar7;
            local_46a = uVar6;
            FUN_1001b7a50(&local_58);
            if (iVar11 != 0) {
              uVar19 = FUN_1001cc310();
              cVar10 = _os_log_type_enabled(uVar19,0x10);
              if (cVar10 != '\0') {
                local_478 = 0x8220202;
                local_474 = "Assertion failure";
                local_46c = 0x400;
                local_46a = uVar8;
                uStack_468 = uVar9;
                __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_478,
                                    0x12);
              }
            }
            goto LAB_10045ab35;
          }
          FUN_100238ca8(&local_478,local_518);
          local_490[0] = &local_58;
          lVar16 = FUN_1004606e6((long)local_4d8 + 0x470,&local_58);
          *(int *)(lVar16 + 0x20) = (int)local_4b8;
          *(undefined4 *)(lVar16 + 0x24) = local_4b8._4_4_;
          *(undefined4 *)(lVar16 + 0x28) = uStack_4b0;
          *(undefined4 *)(lVar16 + 0x2c) = uStack_4ac;
          FUN_10015a142(&local_478);
        }
        FUN_1001b7a50(&local_58);
        goto LAB_10045ab35;
      }
    }
    else {
      uVar19 = FUN_1001cc310();
      cVar10 = _os_log_type_enabled(uVar19,0x10);
      if (cVar10 != '\0') {
        local_478 = 0x8220202;
        local_474 = "Assertion failure";
        local_46c = 0x400;
        local_46a = (undefined2)iVar11;
        uStack_468 = (undefined2)((uint)iVar11 >> 0x10);
        __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_478,0x12);
      }
    }
    if (iVar11 != 0) goto LAB_10045ab3c;
  }
LAB_10045ab35:
  local_4a0[0x428] = '\x01';
LAB_10045ab3c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

