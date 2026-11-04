// name: FUN_10045dd57
// address: 10045dd57

int FUN_10045dd57(int param_1,int param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5,
                 void *param_6,undefined8 param_7,long param_8,long *param_9)

{
  int *piVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  byte bVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  char *pcVar20;
  undefined4 *puVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  char local_1410 [8];
  undefined4 local_1408;
  undefined8 local_13c0;
  undefined4 local_13b4;
  long local_13b0;
  int *local_13a8;
  void *local_13a0;
  undefined1 local_1398 [512];
  undefined1 local_1198 [512];
  undefined4 local_f98;
  char *local_f94;
  undefined2 local_f8c;
  int local_f8a;
  undefined4 local_b78;
  char *local_b74;
  undefined2 local_b6c;
  char *local_b6a;
  undefined1 local_758 [512];
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined2 local_54c;
  char *local_54a;
  undefined4 local_258;
  char *pcStack_254;
  undefined2 uStack_24c;
  undefined2 uStack_24a;
  undefined2 uStack_248;
  undefined4 uStack_246;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x10045dd6f;
  auVar23 = FUN_100108310();
  lVar4 = -auVar23._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_13a0 = param_6;
  if (param_9 == (long *)0x0) {
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045dfd9;
    uVar15 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045dfe9;
    cVar6 = _os_log_type_enabled(uVar15,0x10);
    if (cVar6 != '\0') {
      local_b78 = 0x8220202;
      local_b74 = "Assertion failure";
      local_b6c = 0x822;
      local_b6a = "imageLibraryPtr != nullptr";
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e155;
      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",&local_b78,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045dffa;
    FUN_1001782e9(0,0);
    iVar8 = -0x32;
    goto LAB_10045e902;
  }
  local_13a8 = (int *)CONCAT44(local_13a8._4_4_,param_5);
  local_13b0 = 0;
  pcVar20 = "iPod Photo Cache";
  if (param_2 == 2 && param_1 == 0x69545620) {
    pcVar20 = "Apple TV Photo Cache";
  }
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10045dde4;
  local_13b4 = param_4;
  FUN_1001e04f5(pcVar20,local_1398);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ddfe;
  iVar7 = FUN_10058fa81(local_1398,local_13a0,&local_b78);
  iVar10 = 0x451;
  if (iVar7 != -5000) {
    iVar10 = iVar7;
  }
  iVar8 = 0x450;
  if (iVar7 != -0x78) {
    iVar8 = iVar10;
  }
  if (iVar8 == -0x80) {
    iVar8 = -0x80;
  }
  else if (iVar8 == 0) {
    pcVar20 = "Photo Database";
    if (param_2 == 2 && param_1 == 0x69545620) {
      pcVar20 = "Apple TV Photo Database";
    }
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045de48;
    FUN_1001e04f5(pcVar20,local_1198);
    *(undefined8 *)(&stack0xffffffffffffffd0 + lVar4) = 0;
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045de77;
    iVar8 = FUN_10058e6cd(&local_b78,&local_b78,local_1198,auVar23._8_8_ & 0xffffffff,&local_f98,
                          &local_13b0);
    if (iVar8 != -0x80) {
      if (iVar8 == 0) {
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045dea2;
        iVar8 = FUN_1001ceb24(param_7,0x696d7074,0,0,0);
        lVar12 = local_13b0;
        if (iVar8 != -0x80) {
          if (iVar8 == 0) {
            local_13c0 = 0;
            if (local_13a0 == (void *)0x0) {
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e15f;
              uVar15 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e16f;
              cVar6 = _os_log_type_enabled(uVar15,0x10);
              iVar8 = -0x32;
              if (cVar6 != '\0') {
                pcVar20 = "photosFolderSpec != nullptr";
LAB_10045e238:
                uStack_24c = 0x822;
                pcStack_254 = "Assertion failure";
                local_258 = 0x8220202;
                uStack_24a = SUB82(pcVar20,0);
                uStack_248 = (undefined2)((ulong)pcVar20 >> 0x10);
                uStack_246 = (undefined4)((ulong)pcVar20 >> 0x20);
                *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e25d;
                __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",&local_258,
                                    0x16);
              }
LAB_10045e25d:
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e266;
              FUN_1001782e9(0,0);
LAB_10045e266:
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e26b;
              uVar15 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e27b;
              cVar6 = _os_log_type_enabled(uVar15,0x10);
              if (cVar6 == '\0') goto LAB_10045e2c4;
              puVar21 = &local_558;
              local_558 = 0x8220202;
              uStack_554 = 0x7a0a90;
              uStack_550 = 1;
              local_54c = 0x400;
              local_54a = (char *)CONCAT44(local_54a._4_4_,iVar8);
            }
            else {
              if (local_13b0 == 0) {
                *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e1ad;
                uVar15 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e1bd;
                cVar6 = _os_log_type_enabled(uVar15,0x10);
                iVar8 = -0x32;
                if (cVar6 != '\0') {
                  pcVar20 = "imageLibrary != nullptr";
                  goto LAB_10045e238;
                }
                goto LAB_10045e25d;
              }
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10045def2;
              piVar11 = (int *)FUN_1001c629e(0xb8,&DAT_100711c6e);
              if (piVar11 == (int *)0x0) {
                *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e1f8;
                uVar15 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e208;
                cVar6 = _os_log_type_enabled(uVar15,0x10);
                iVar8 = -0x6c;
                if (cVar6 != '\0') {
                  pcVar20 = "context != nullptr";
                  goto LAB_10045e238;
                }
                goto LAB_10045e25d;
              }
              *(undefined1 (*) [16])(piVar11 + 0x18) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(piVar11 + 0x14) = (undefined1  [16])0x0;
              piVar11[0x1c] = 0x3f800000;
              *(undefined1 (*) [16])(piVar11 + 0x1e) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(piVar11 + 0x22) = (undefined1  [16])0x0;
              piVar11[0x26] = 0x3f800000;
              *(undefined1 (*) [16])(piVar11 + 0x28) = (undefined1  [16])0x0;
              piVar11[0x2c] = 0;
              piVar11[0x2d] = 0;
              *piVar11 = param_1;
              piVar11[1] = param_2;
              *(long *)(piVar11 + 0x12) = param_8;
              *(byte *)(piVar11 + 2) = (byte)((uint)local_13a8 >> 1) & 1;
              bVar16 = (byte)local_13a8;
              *(byte *)((long)piVar11 + 9) = bVar16 >> 2 & 1;
              *(byte *)((long)piVar11 + 10) = bVar16 >> 3 & 1;
              *(byte *)((long)piVar11 + 0xb) = bVar16 >> 4 & 1;
              *(long *)(piVar11 + 4) = lVar12;
              *(undefined8 *)(piVar11 + 8) = param_7;
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10045df99;
              local_13a8 = piVar11;
              iVar8 = FUN_10017d477(local_13a0,local_1410,0);
              if (iVar8 != -0x80) {
                if (iVar8 == 0) {
                  if (local_1410[0] == '\x01') {
                    if (*(int *)(lVar12 + 8) == 0) {
                      bVar22 = *(int *)(lVar12 + 0x20) == 0;
                      *(bool *)(local_13a8 + 6) = bVar22;
                      if (bVar22) {
                        *(undefined2 *)(lVar12 + 0x13c8) = 1;
                      }
                    }
                    else {
                      *(undefined1 *)(local_13a8 + 6) = 0;
                    }
                    if (param_8 == 0) {
LAB_10045ec22:
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ec2a;
                      for (lVar13 = FUN_100496019(lVar12); lVar13 != 0;
                          lVar13 = FUN_1004960d0(lVar13)) {
                        *(undefined1 *)(lVar13 + 0x83) = 1;
                        *(undefined1 *)(lVar13 + 0xd6) = 0;
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ec48;
                        for (lVar14 = FUN_1004968c5(lVar13); lVar14 != 0;
                            lVar14 = FUN_100496985(lVar14)) {
                          if (*(int *)(lVar14 + 0x10) - 7U < 2) {
                            *(undefined1 *)(lVar14 + 0x50) = 1;
                          }
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ec64;
                        }
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ec6e;
                      }
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ec78;
                      for (lVar13 = FUN_100496392(lVar12); lVar13 != 0;
                          lVar13 = FUN_100496449(lVar13)) {
                        *(undefined1 *)(lVar13 + 0xc5) = 1;
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ec8c;
                      }
                    }
                    else {
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x10045eae3;
                      lVar13 = FUN_100496392(lVar12);
                      if (lVar13 != 0) {
                        uVar15 = *(undefined8 *)PTR__kCFAllocatorNull_10082e028;
                        do {
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045eb08;
                          iVar8 = FUN_10049ae8e(lVar13,&local_258);
                          if (iVar8 != 0) {
                            if (iVar8 == -0x80) goto LAB_10045ec22;
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ebab;
                            uVar15 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ebbb;
                            cVar6 = _os_log_type_enabled(uVar15,0x10);
                            if (cVar6 != '\0') {
                              local_58 = 0x8220202;
                              local_54 = "Assertion failure";
                              local_4c = 0x400;
                              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar8);
                              *(undefined8 *)((long)&local_38 + lVar4) = 0x10045f1ef;
                              __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)",
                                                  &local_58,0x12);
                            }
                            if (iVar8 != 0) {
LAB_10045ec00:
                              *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ec05;
                              uVar15 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ec15;
                              cVar6 = _os_log_type_enabled(uVar15,0x10);
                              if (cVar6 != '\0') {
                                local_258 = 0x8220202;
                                pcStack_254 = "Assertion failure";
                                uStack_24c = 0x400;
                                uStack_24a = (undefined2)iVar8;
                                uStack_248 = (undefined2)((uint)iVar8 >> 0x10);
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x10045f1a8;
                                __os_log_error_impl(0x100000000,uVar15,0x10,
                                                    "%{public}s: err == (%d)",&local_258,0x12);
                              }
                              goto LAB_10045ec22;
                            }
                            break;
                          }
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045eb2c;
                          lVar14 = FUN_1001656af(DAT_1008c4d90,&local_258,uVar15);
                          if (lVar14 == 0) {
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ebd6;
                            uVar15 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ebe6;
                            cVar6 = _os_log_type_enabled(uVar15,0x10);
                            if (cVar6 != '\0') {
                              local_58 = 0x8220202;
                              local_54 = "Assertion failure";
                              local_4c = 0x822;
                              local_4a = "albumNameString != nullptr";
                              *(undefined8 *)((long)&local_38 + lVar4) = 0x10045f23d;
                              __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)"
                                                  ,&local_58,0x16);
                            }
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ebf7;
                            FUN_1001782e9(0,0);
                            iVar8 = -0x6c;
                            goto LAB_10045ec00;
                          }
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045eb44;
                          cVar6 = FUN_100171439(param_8,lVar14);
                          if (cVar6 != '\0') {
                            *(undefined1 *)(lVar13 + 0xc5) = 1;
                            uVar9 = *(uint *)(lVar13 + 0x50);
                            if (uVar9 != 0) {
                              lVar17 = 0;
                              uVar18 = 0;
                              do {
                                lVar2 = *(long *)(*(long *)(lVar13 + 0x58) + lVar17);
                                if (lVar2 != 0) {
                                  *(undefined1 *)(lVar2 + 0x83) = 1;
                                  uVar9 = *(uint *)(lVar13 + 0x50);
                                }
                                uVar18 = uVar18 + 1;
                                lVar17 = lVar17 + 0x10;
                              } while (uVar18 < uVar9);
                            }
                          }
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045eb87;
                          FUN_10017060f(lVar14);
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045eb8f;
                          lVar13 = FUN_100496449(lVar13);
                        } while (lVar13 != 0);
                      }
                    }
                    *(undefined8 *)(lVar12 + 0x13c0) = 2;
                    *(undefined4 *)(lVar12 + 0x145c) = local_1408;
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ecbe;
                    iVar8 = FUN_1001823de(local_13a0,lVar12 + 0x1460,0xbfe);
                    pvVar3 = local_13a0;
                    if (iVar8 != -0x80) {
                      if (iVar8 == 0) {
                        *(undefined1 *)(lVar12 + 0x205e) = 1;
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ecf4;
                        _memcpy((void *)(lVar12 + 0x2060),local_13a0,0x420);
                        *(undefined8 *)(lVar12 + 0x142c) = 0;
                        *(undefined1 (*) [16])(lVar12 + 0x1418) = (undefined1  [16])0x0;
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ed1b;
                        iVar8 = FUN_10018e72c(pvVar3,local_758);
                        if (iVar8 != -0x80) {
                          if (iVar8 == 0) {
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ed46;
                            FUN_1001e5b77(local_758,&local_558,0x100);
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ed60;
                            iVar8 = FUN_1004609bd(local_13a8,&local_558,&local_13c0);
                            if (iVar8 != -0x80) {
                              if (iVar8 == 0) {
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ed97;
                                iVar8 = FUN_10017fdd8(local_13a0,0x7fff,0x12,FUN_100460c2e,
                                                      local_13a8);
                                if (iVar8 != -0x80) {
                                  if (iVar8 != 0) {
                                    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045eda7;
                                    uVar15 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045edb7;
                                    cVar6 = _os_log_type_enabled(uVar15,0x10);
                                    if (cVar6 != '\0') {
                                      local_258 = 0x8220202;
                                      pcStack_254 = "Assertion failure";
                                      uStack_24c = 0x400;
                                      uStack_24a = (undefined2)iVar8;
                                      uStack_248 = (undefined2)((uint)iVar8 >> 0x10);
                                      *(undefined8 *)((long)&local_38 + lVar4) = 0x10045f2c6;
                                      __os_log_error_impl(0x100000000,uVar15,0x10,
                                                          "%{public}s: err == (%d)",&local_258,0x12)
                                      ;
                                    }
                                    if (iVar8 != 0) goto LAB_10045edfa;
                                  }
                                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10045edd2;
                                  iVar8 = FUN_10058fd72(lVar12,local_13c0);
                                  if ((iVar8 != -0x80) && (iVar8 != 0)) {
                                    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ede2;
                                    uVar15 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045edf2;
                                    cVar6 = _os_log_type_enabled(uVar15,0x10);
                                    if (cVar6 != '\0') {
                                      local_258 = 0x8220202;
                                      pcStack_254 = "Assertion failure";
                                      uStack_24c = 0x400;
                                      uStack_24a = (undefined2)iVar8;
                                      uStack_248 = (undefined2)((uint)iVar8 >> 0x10);
                                      *(undefined8 *)((long)&local_38 + lVar4) = 0x10045f35a;
                                      __os_log_error_impl(0x100000000,uVar15,0x10,
                                                          "%{public}s: err == (%d)",&local_258,0x12)
                                      ;
                                    }
                                  }
                                }
LAB_10045edfa:
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ee02;
                                for (lVar13 = FUN_100496019(lVar12); lVar13 != 0;
                                    lVar13 = FUN_1004960d0(lVar13)) {
                                  if (*(char *)(lVar13 + 0x83) == '\0') {
                                    local_258 = 0;
                                    pcStack_254 = (char *)0x0;
                                    uStack_24c = 0;
                                    uStack_24a = 0;
                                    if ((*(char *)(lVar13 + 0x4f) != '\0') ||
                                       (auVar23._12_4_ = 0, auVar23._0_12_ = ZEXT412(0),
                                       *(undefined1 (*) [16])(lVar13 + 0x40) != auVar23)) {
                                      *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ee5e;
                                      lVar14 = FUN_1004993ef(lVar13,7,0);
                                      if ((lVar14 != 0) && (*(char *)(lVar14 + 0x50) == '\0')) {
                                        *(undefined1 *)(lVar13 + 0xd6) = 1;
                                      }
                                    }
                                  }
                                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ee20;
                                }
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ef9d;
                                iVar10 = FUN_1004625bd(local_13a8);
                                if ((iVar10 != -0x80) && (iVar10 != 0)) {
                                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10045efaf;
                                  uVar15 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10045efbf;
                                  cVar6 = _os_log_type_enabled(uVar15,0x10);
                                  if (cVar6 != '\0') {
                                    local_258 = 0x8220202;
                                    pcStack_254 = "Assertion failure";
                                    uStack_24c = 0x400;
                                    uStack_24a = (undefined2)iVar10;
                                    uStack_248 = (undefined2)((uint)iVar10 >> 0x10);
                                    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045f310;
                                    __os_log_error_impl(0x100000000,uVar15,0x10,
                                                        "%{public}s: err == (%d)",&local_258,0x12);
                                  }
                                }
                                *(undefined1 *)(lVar12 + 6) = 0;
                              }
                              else {
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ef74;
                                uVar15 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ef84;
                                cVar6 = _os_log_type_enabled(uVar15,0x10);
                                if (cVar6 != '\0') {
                                  uStack_24a = (undefined2)iVar8;
                                  uStack_248 = (undefined2)((uint)iVar8 >> 0x10);
                                  goto LAB_10045ea6c;
                                }
                              }
                            }
                          }
                          else {
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x10045eecc;
                            uVar15 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar4) = 0x10045eedc;
                            cVar6 = _os_log_type_enabled(uVar15,0x10);
                            if (cVar6 != '\0') {
                              uStack_24a = (undefined2)iVar8;
                              uStack_248 = (undefined2)((uint)iVar8 >> 0x10);
                              goto LAB_10045ea6c;
                            }
                          }
                        }
                      }
                      else {
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ee78;
                        uVar15 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ee88;
                        cVar6 = _os_log_type_enabled(uVar15,0x10);
                        if (cVar6 != '\0') {
                          uStack_24a = (undefined2)iVar8;
                          uStack_248 = (undefined2)((uint)iVar8 >> 0x10);
LAB_10045ea6c:
                          uStack_24c = 0x400;
                          pcStack_254 = "Assertion failure";
                          local_258 = 0x8220202;
                          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ea7f;
                          __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)",
                                              &local_258,0x12);
                        }
                      }
                    }
                  }
                  else {
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ea89;
                    uVar15 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ea99;
                    cVar6 = _os_log_type_enabled(uVar15,0x10);
                    if (cVar6 != '\0') {
                      local_258 = 0x8220202;
                      pcStack_254 = "Assertion failure";
                      uStack_24c = 0x822;
                      uStack_24a = 0xc62;
                      uStack_248 = 0x7d;
                      uStack_246 = 1;
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ef67;
                      __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",
                                          &local_258,0x16);
                    }
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045eaaa;
                    FUN_1001782e9(0,0);
                    iVar8 = -0x2b;
                  }
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ea22;
                  uVar15 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ea32;
                  cVar6 = _os_log_type_enabled(uVar15,0x10);
                  if (cVar6 != '\0') {
                    uStack_24a = (undefined2)iVar8;
                    uStack_248 = (undefined2)((uint)iVar8 >> 0x10);
                    goto LAB_10045ea6c;
                  }
                }
              }
              piVar5 = local_13a8;
              piVar11 = local_13a8 + 0x14;
              piVar1 = local_13a8 + 0x1e;
              pvVar3 = *(void **)(local_13a8 + 0x28);
              if (pvVar3 != (void *)0x0) {
                *(void **)(local_13a8 + 0x2a) = pvVar3;
                *(undefined8 *)((long)&local_38 + lVar4) = 0x10045effb;
                operator_delete(pvVar3);
              }
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10045f003;
              FUN_100464944(piVar1);
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10045f00b;
              FUN_100465008(piVar11);
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10045f013;
              operator_delete(piVar5);
              if (iVar8 == -0x80) goto LAB_10045e2c4;
              if (iVar8 != 0) goto LAB_10045e266;
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10045f03d;
              iVar8 = FUN_100593410(local_13b0,0x696d7074,param_7,1);
              if (iVar8 == -0x80) goto LAB_10045e2c4;
              if (iVar8 == 0) {
                *(undefined8 *)((long)&local_38 + lVar4) = 0x10045f05f;
                FUN_10026b107(local_13b0,1,0);
                if ((char)local_13b4 == '\0') {
LAB_10045f0a8:
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10045f0b4;
                  FUN_10018e077(&local_b78);
                  iVar8 = 0;
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10045f08b;
                  iVar8 = FUN_10038b674(local_13b0,&local_b78,local_1198,0,&local_f98);
                  if (iVar8 != -0x80) {
                    if (iVar8 == 0) {
                      *(undefined8 *)((long)&local_38 + lVar4) = 0x10045f0a8;
                      FUN_100496f8c(local_13b0,0);
                      goto LAB_10045f0a8;
                    }
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045f114;
                    uVar15 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045f124;
                    cVar6 = _os_log_type_enabled(uVar15,0x10);
                    if (cVar6 != '\0') {
                      puVar21 = &local_558;
                      local_558 = 0x8220202;
                      uStack_554 = 0x7a0a90;
                      uStack_550 = 1;
                      local_54c = 0x400;
                      local_54a = (char *)CONCAT44(local_54a._4_4_,iVar8);
                      goto LAB_10045e2b1;
                    }
                  }
                }
                goto LAB_10045e2c4;
              }
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10045f0c0;
              uVar15 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10045f0d0;
              cVar6 = _os_log_type_enabled(uVar15,0x10);
              if (cVar6 == '\0') goto LAB_10045e2c4;
              puVar21 = &local_558;
              local_558 = 0x8220202;
              uStack_554 = 0x7a0a90;
              uStack_550 = 1;
              local_54c = 0x400;
              local_54a = (char *)CONCAT44(local_54a._4_4_,iVar8);
            }
LAB_10045e2b1:
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e2c4;
            __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)",puVar21,0x12);
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e0ba;
            uVar15 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e0ca;
            cVar6 = _os_log_type_enabled(uVar15,0x10);
            if (cVar6 != '\0') {
              puVar21 = &local_558;
              local_558 = 0x8220202;
              uStack_554 = 0x7a0a90;
              uStack_550 = 1;
              local_54c = 0x400;
              local_54a = (char *)CONCAT44(local_54a._4_4_,iVar8);
              goto LAB_10045e2b1;
            }
          }
        }
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e066;
        uVar15 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e076;
        cVar6 = _os_log_type_enabled(uVar15,0x10);
        if (cVar6 != '\0') {
          puVar21 = &local_558;
          local_558 = 0x8220202;
          uStack_554 = 0x7a0a90;
          uStack_550 = 1;
          local_54c = 0x400;
          local_54a = (char *)CONCAT44(local_54a._4_4_,iVar8);
          goto LAB_10045e2b1;
        }
      }
    }
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e012;
    uVar15 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e022;
    cVar6 = _os_log_type_enabled(uVar15,0x10);
    if (cVar6 != '\0') {
      puVar21 = &local_f98;
      local_f98 = 0x8220202;
      local_f94 = "Assertion failure";
      local_f8c = 0x400;
      local_f8a = iVar8;
      goto LAB_10045e2b1;
    }
  }
LAB_10045e2c4:
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e2c9;
  lVar12 = FUN_10045f3a6();
  if (lVar12 != 0) {
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e2d3;
    uVar15 = FUN_10045f3a6();
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e2db;
    FUN_10045f418(uVar15);
  }
  lVar12 = DAT_1008be680;
  if (DAT_1008be680 != 0) {
    local_758[0] = 0;
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e305;
    FUN_100238ca8(&local_258,DAT_1008be680 + 0x428);
    if (DAT_1008beb10 != 0) {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e324;
      lVar13 = FUN_100170ea9(DAT_1008c4d90,0);
      if (lVar13 == 0) {
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e452;
        uVar15 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e462;
        cVar6 = _os_log_type_enabled(uVar15,0x10);
        if (cVar6 != '\0') {
          local_54a = "mutableData != nullptr";
LAB_10045e951:
          local_54c = 0x822;
          uStack_550 = 1;
          uStack_554 = 0x7a0a90;
          local_558 = 0x8220202;
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e976;
          __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",&local_558,0x16);
        }
LAB_10045e4af:
        lVar14 = 0;
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e4bb;
        FUN_1001782e9(0,0);
      }
      else {
        local_13a0 = (void *)CONCAT44(local_13a0._4_4_,iVar8);
        plVar19 = (long *)(lVar12 + 0x480);
        while (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0) {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e35f;
          FUN_1001b8d18(&local_558,plVar19 + 2);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e36e;
          FUN_1001663dc(lVar13,CONCAT44(uStack_554,local_558));
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e376;
          FUN_10014d890(&local_558);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e386;
          FUN_1001710c1(lVar13,local_758,1);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e397;
          FUN_1001710c1(lVar13,plVar19 + 4,0x10);
        }
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e3ab;
        lVar14 = FUN_100197893(DAT_1008c4d90,lVar13);
        iVar8 = (int)local_13a0;
        if (lVar14 == 0) {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e497;
          uVar15 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e4a7;
          cVar6 = _os_log_type_enabled(uVar15,0x10);
          if (cVar6 != '\0') {
            local_54a = "compressedData != nullptr";
            goto LAB_10045e951;
          }
          goto LAB_10045e4af;
        }
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e3d4;
        iVar10 = FUN_10016614c(lVar14,lVar12,"SpatialOvercaptureGroupCacheMac",0,0);
        if ((iVar10 != -0x80) && (iVar10 != 0)) {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e3ee;
          uVar15 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e3fe;
          cVar6 = _os_log_type_enabled(uVar15,0x10);
          if (cVar6 != '\0') {
            local_558 = 0x8220202;
            uStack_554 = 0x7a0a90;
            uStack_550 = 1;
            local_54c = 0x400;
            local_54a = (char *)CONCAT44(local_54a._4_4_,iVar10);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e44b;
            __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)",&local_558,0x12);
          }
        }
      }
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e4c3;
      FUN_10017060f(lVar14);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e4cb;
      FUN_10017060f(lVar13);
    }
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e4d7;
    FUN_10015a142(&local_258);
  }
  lVar12 = DAT_1008beb28;
  if (DAT_1008beb28 != 0) {
    local_758[0] = 0;
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e501;
    FUN_100238ca8(&local_258,DAT_1008beb28 + 0x428);
    if (DAT_1008befb8 != 0) {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e520;
      lVar13 = FUN_100170ea9(DAT_1008c4d90,0);
      if (lVar13 == 0) {
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e64e;
        uVar15 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e65e;
        cVar6 = _os_log_type_enabled(uVar15,0x10);
        if (cVar6 != '\0') {
          local_54a = "mutableData != nullptr";
LAB_10045e9a2:
          local_54c = 0x822;
          uStack_550 = 1;
          uStack_554 = 0x7a0a90;
          local_558 = 0x8220202;
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e9c7;
          __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",&local_558,0x16);
        }
LAB_10045e6ab:
        lVar14 = 0;
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e6b7;
        FUN_1001782e9(0,0);
      }
      else {
        local_13a0 = (void *)CONCAT44(local_13a0._4_4_,iVar8);
        plVar19 = (long *)(lVar12 + 0x480);
        while (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0) {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e55b;
          FUN_1001b8d18(&local_558,plVar19 + 2);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e56a;
          FUN_1001663dc(lVar13,CONCAT44(uStack_554,local_558));
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e572;
          FUN_10014d890(&local_558);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e582;
          FUN_1001710c1(lVar13,local_758,1);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e593;
          FUN_1001710c1(lVar13,plVar19 + 4,0x10);
        }
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e5a7;
        lVar14 = FUN_100197893(DAT_1008c4d90,lVar13);
        iVar8 = (int)local_13a0;
        if (lVar14 == 0) {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e693;
          uVar15 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e6a3;
          cVar6 = _os_log_type_enabled(uVar15,0x10);
          if (cVar6 != '\0') {
            local_54a = "compressedData != nullptr";
            goto LAB_10045e9a2;
          }
          goto LAB_10045e6ab;
        }
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e5d0;
        iVar10 = FUN_10016614c(lVar14,lVar12,"RenderOriginatingSignatureCacheMac",0,0);
        if ((iVar10 != -0x80) && (iVar10 != 0)) {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e5ea;
          uVar15 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e5fa;
          cVar6 = _os_log_type_enabled(uVar15,0x10);
          if (cVar6 != '\0') {
            local_558 = 0x8220202;
            uStack_554 = 0x7a0a90;
            uStack_550 = 1;
            local_54c = 0x400;
            local_54a = (char *)CONCAT44(local_54a._4_4_,iVar10);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e647;
            __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)",&local_558,0x12);
          }
        }
      }
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e6bf;
      FUN_10017060f(lVar14);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e6c7;
      FUN_10017060f(lVar13);
    }
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e6d3;
    FUN_10015a142(&local_258);
  }
  lVar12 = DAT_1008befd0;
  if (DAT_1008befd0 != 0) {
    local_758[0] = 0;
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e6fd;
    FUN_100238ca8(&local_258,DAT_1008befd0 + 0x428);
    if (DAT_1008bf460 != 0) {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e71c;
      lVar13 = FUN_100170ea9(DAT_1008c4d90,0);
      if (lVar13 == 0) {
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e84a;
        uVar15 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e85a;
        cVar6 = _os_log_type_enabled(uVar15,0x10);
        if (cVar6 != '\0') {
          local_54a = "mutableData != nullptr";
LAB_10045e9f3:
          local_54c = 0x822;
          uStack_550 = 1;
          uStack_554 = 0x7a0a90;
          local_558 = 0x8220202;
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045ea18;
          __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: (%{public}s)",&local_558,0x16);
        }
LAB_10045e8a7:
        lVar14 = 0;
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e8b3;
        FUN_1001782e9(0,0);
      }
      else {
        local_13a0 = (void *)CONCAT44(local_13a0._4_4_,iVar8);
        plVar19 = (long *)(lVar12 + 0x480);
        while (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0) {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e757;
          FUN_1001b8d18(&local_558,plVar19 + 2);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e766;
          FUN_1001663dc(lVar13,CONCAT44(uStack_554,local_558));
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e76e;
          FUN_10014d890(&local_558);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e77e;
          FUN_1001710c1(lVar13,local_758,1);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e78f;
          FUN_1001710c1(lVar13,plVar19 + 4,0x10);
        }
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e7a3;
        lVar14 = FUN_100197893(DAT_1008c4d90,lVar13);
        iVar8 = (int)local_13a0;
        if (lVar14 == 0) {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e88f;
          uVar15 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e89f;
          cVar6 = _os_log_type_enabled(uVar15,0x10);
          if (cVar6 != '\0') {
            local_54a = "compressedData != nullptr";
            goto LAB_10045e9f3;
          }
          goto LAB_10045e8a7;
        }
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e7cc;
        iVar10 = FUN_10016614c(lVar14,lVar12,"OriginalSignatureCacheMac",0,0);
        if ((iVar10 != -0x80) && (iVar10 != 0)) {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e7e6;
          uVar15 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e7f6;
          cVar6 = _os_log_type_enabled(uVar15,0x10);
          if (cVar6 != '\0') {
            local_558 = 0x8220202;
            uStack_554 = 0x7a0a90;
            uStack_550 = 1;
            local_54c = 0x400;
            local_54a = (char *)CONCAT44(local_54a._4_4_,iVar10);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e843;
            __os_log_error_impl(0x100000000,uVar15,0x10,"%{public}s: err == (%d)",&local_558,0x12);
          }
        }
      }
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e8bb;
      FUN_10017060f(lVar14);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e8c3;
      FUN_10017060f(lVar13);
    }
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e8cf;
    FUN_10015a142(&local_258);
  }
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e8db;
  FUN_10058faf7(&local_b78);
  lVar12 = local_13b0;
  if (local_13b0 != 0 && iVar8 != 0) {
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045e8f9;
    FUN_100495a1c();
    lVar12 = 0;
  }
  *param_9 = lVar12;
LAB_10045e902:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)&local_38 + lVar4) = 0x10045f281;
    ___stack_chk_fail();
  }
  return iVar8;
}

