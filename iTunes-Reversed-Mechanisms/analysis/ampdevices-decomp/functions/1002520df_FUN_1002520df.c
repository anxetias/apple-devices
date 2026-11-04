// name: FUN_1002520df
// address: 1002520df

int FUN_1002520df(long param_1,long param_2,byte *param_3,undefined2 *param_4,uint *param_5,
                 undefined8 *param_6)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  undefined4 local_710 [2];
  undefined1 local_708 [8];
  long local_700;
  ulong local_6f8;
  int local_6ec;
  undefined4 local_6e8 [2];
  undefined1 local_6e0 [8];
  undefined8 local_6d8;
  long *local_6d0;
  undefined8 *local_6c8;
  undefined8 local_6c0;
  long local_6b8;
  int local_6b0 [2];
  undefined4 local_6a8;
  undefined4 uStack_6a4;
  uint local_6a0;
  undefined4 local_69c;
  byte local_696;
  undefined1 local_695;
  int local_694;
  byte *local_690;
  ulong local_688;
  uint local_680;
  byte local_679;
  undefined1 local_678 [512];
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 local_470;
  undefined2 uStack_46c;
  undefined2 uStack_46a;
  undefined2 uStack_468;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_700 = param_2;
  local_690 = param_3;
  cVar4 = FUN_1001ee056();
  if (cVar4 == '\0') {
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "JRIsCurrentThreadCooperative()";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_1 != 0) {
      if (*(int *)(param_1 + 8) != 0x64756c63) {
        uVar9 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar9,0x10);
        if (cVar4 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure (expected to be true)";
          local_44c = 0x822;
          local_44a = "handlerData->magic == kDulcimerHandlerDataMagic";
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        cVar4 = FUN_1001782e9(0,1);
        if (cVar4 == '\0') goto LAB_1002531e5;
      }
      local_69c = *(undefined4 *)(param_1 + 0x28);
      FUN_1004f0e83(param_1,local_678);
      if (*(char *)(param_1 + 0x386) == '\0') {
        local_680 = 0;
        uVar14 = 0;
        iVar6 = 0;
      }
      else {
        uVar9 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
        local_680 = 0;
        local_6c8 = param_6;
        do {
          local_6ec = *(int *)(param_1 + 0x16670);
          iVar6 = *(int *)(param_1 + 0x28);
          uVar10 = *param_6;
          plVar11 = (long *)param_6[1];
          if (plVar11 != (long *)0x0) {
            LOCK();
            plVar11[1] = plVar11[1] + 1;
            UNLOCK();
          }
          local_6b8 = 0;
          local_6d0 = plVar11;
          if (iVar6 == 0) {
            uVar10 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar10,0x10);
            if (cVar4 != '\0') {
              local_458 = 0x8220202;
              local_454 = "Assertion failure";
              local_44c = 0x822;
              local_44a = "iPodObjectID != 0";
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_458,0x16
                                 );
            }
            iVar7 = -0x32;
            FUN_1001782e9(0,0);
          }
          else {
            local_696 = *local_690;
            local_695 = *(char *)(DAT_1008c76a0 + 0x1a91) != '\0';
            local_694 = iVar6;
            uVar5 = FUN_100502736();
            if (uVar5 < 0xf00) {
              bVar18 = 0;
              local_6f8 = 0;
              local_6a0 = 0;
              bVar17 = false;
              iVar7 = 0;
              lVar13 = 0;
              bVar2 = 0;
LAB_10025236e:
              do {
                local_679 = bVar2;
                lVar15 = lVar13;
                if (((local_690[1] != 0) || (bVar17)) || ((iVar7 == 0x681 & local_679) != 0)) {
                  plVar11 = operator_new(0x90,(nothrow_t *)PTR_nothrow_10082c970);
                  if (plVar11 == (long *)0x0) goto LAB_1002524c9;
                  *(int *)(plVar11 + 1) = local_694;
                  *(undefined8 *)((long)plVar11 + 0x14) = 0x10e610dd00000000;
                  *(undefined8 *)((long)plVar11 + 0xc) = 0;
                  plVar11[4] = 0;
                  plVar11[5] = 0;
                  plVar11[6] = local_700;
                  plVar11[7] = (long)&local_6b8;
                  plVar11[8] = 0;
                  plVar11[9] = 0;
                  plVar11[10] = 0;
                  plVar11[0xb] = 0;
                  plVar11[0xc] = 0;
                  plVar11[0xd] = 0;
                  plVar11[0xe] = 0;
                  plVar11[0xf] = 0;
                  *(undefined8 *)((long)plVar11 + 0x7b) = 0;
                  *(undefined8 *)((long)plVar11 + 0x83) = 0;
                  *(byte *)((long)plVar11 + 0x8b) = local_679;
                  *(undefined1 *)((long)plVar11 + 0x8c) = 0;
                  *(undefined2 *)((long)plVar11 + 0x1c) = 0x10df;
                  *plVar11 = (long)&PTR_FUN_10083ec20;
                }
                else {
                  plVar11 = operator_new(0x90,(nothrow_t *)PTR_nothrow_10082c970);
                  if (plVar11 == (long *)0x0) {
LAB_1002524c9:
                    plVar11 = (long *)0x0;
                  }
                  else {
                    *(int *)(plVar11 + 1) = local_694;
                    *(undefined8 *)((long)plVar11 + 0x14) = 0x10e610dd00000000;
                    *(undefined8 *)((long)plVar11 + 0xc) = 0;
                    *plVar11 = (long)&PTR_FUN_10083ebb0;
                    plVar11[4] = 0;
                    plVar11[5] = 0;
                    plVar11[6] = local_700;
                    plVar11[7] = (long)&local_6b8;
                    plVar11[8] = 0;
                    plVar11[9] = 0;
                    plVar11[10] = 0;
                    plVar11[0xb] = 0;
                    plVar11[0xc] = 0;
                    plVar11[0xd] = 0;
                    plVar11[0xe] = 0;
                    plVar11[0xf] = 0;
                    *(undefined8 *)((long)plVar11 + 0x7b) = 0;
                    *(undefined8 *)((long)plVar11 + 0x83) = 0;
                    *(byte *)((long)plVar11 + 0x8b) = local_679;
                    *(undefined1 *)((long)plVar11 + 0x8c) = 0;
                    *(undefined2 *)((long)plVar11 + 0x1c) = 0x10df;
                  }
                }
                bVar2 = *local_690;
                local_6b0[0] = 0;
                FUN_1001c62d9(&local_6a8,8);
                local_6e8[0] = 0;
                FUN_1001c62d9(local_6e0,8);
                local_6c0 = 0;
                local_6d8 = 0;
                iVar7 = (**(code **)(*plVar11 + 0x58))(plVar11,bVar2,local_6ec == 0x1e);
                local_680 = (uint)*(ushort *)(plVar11 + 3);
                if (iVar7 == -0x80) {
LAB_10025275b:
                  bVar16 = false;
                }
                else {
                  if (iVar7 != 0) {
                    uVar10 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar10,0x10);
                    if (cVar4 != '\0') {
                      local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
LAB_100252724:
                      local_44c = 0x400;
                      local_454 = "Assertion failure";
                      local_458 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",
                                          &local_458,0x12);
                    }
                    goto LAB_10025275b;
                  }
                  iVar7 = (**(code **)*plVar11)(plVar11,local_6b0);
                  if (iVar7 == -0x80) goto LAB_10025275b;
                  if (iVar7 != 0) {
                    uVar10 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar10,0x10);
                    if (cVar4 != '\0') {
                      local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
                      goto LAB_100252724;
                    }
                    goto LAB_10025275b;
                  }
                  if ((local_6b0[0] == 0x73766d64) &&
                     (uVar10 = FUN_100168311(CONCAT44(uStack_6a4,local_6a8)), (char)uVar10 == '\0'))
                  {
                    local_688 = CONCAT44(local_688._4_4_,(int)CONCAT71((int7)((ulong)uVar10 >> 8),1)
                                        );
LAB_100252740:
                    iVar7 = (**(code **)(*plVar11 + 8))(plVar11,local_6e8);
                    if (iVar7 != 0) goto LAB_10025275b;
                    cVar4 = FUN_10024aa49(local_6b0,local_6e8);
                    bVar16 = false;
                    if (cVar4 == '\0') {
                      iVar7 = 0;
                      goto LAB_10025275e;
                    }
                    local_710[0] = 0;
                    FUN_1001c62d9(local_708,8);
                    iVar7 = (**(code **)(*plVar11 + 0x30))(plVar11,&local_6c0,&local_6d8);
                    if (iVar7 == -0x80) {
LAB_100252aca:
                      bVar16 = false;
                    }
                    else {
                      if (iVar7 != 0) {
                        uVar10 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar10,0x10);
                        if (cVar4 != '\0') {
                          local_478 = 0x8220202;
                          uStack_474 = 0x7a0a90;
                          local_470 = 1;
                          uStack_46c = 0x400;
                          uStack_46a = (undefined2)iVar7;
                          uStack_468 = (undefined2)((uint)iVar7 >> 0x10);
                          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)");
                        }
                        goto LAB_100252aca;
                      }
                      iVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,local_6c0,&local_458,local_710)
                      ;
                      if ((iVar6 == 0) &&
                         (cVar4 = FUN_10024abfd(local_710,local_6e8), cVar4 != '\0')) {
                        cVar4 = (**(code **)(*plVar11 + 0x18))(plVar11);
                        if (cVar4 == '\0') {
LAB_100252ac4:
                          iVar7 = -0x80;
                          goto LAB_100252aca;
                        }
                        local_680 = (uint)*(ushort *)((long)plVar11 + 0x1c);
                        iVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,&local_458);
                        bVar16 = true;
                        if (iVar7 != -0x80) {
                          if (iVar7 == 0) {
                            (**(code **)(*plVar11 + 0x40))(plVar11);
LAB_100252abf:
                            bVar16 = true;
                            iVar7 = 0;
                          }
                          else {
                            local_688 = FUN_1001cc310();
                            cVar4 = _os_log_type_enabled(local_688,0x10);
                            if (cVar4 != '\0') {
                              uStack_46a = (undefined2)iVar7;
                              uStack_468 = (undefined2)((uint)iVar7 >> 0x10);
                              uVar12 = local_688;
                              goto LAB_100252cd8;
                            }
                          }
                        }
                      }
                      else {
                        cVar4 = (**(code **)(*plVar11 + 0x28))(plVar11);
                        if (cVar4 == '\0') goto LAB_100252ac4;
                        if ((char)local_688 == '\0') {
LAB_100252a59:
                          local_680 = (uint)*(ushort *)((long)plVar11 + 0x1c);
                          iVar7 = (**(code **)(*plVar11 + 0x38))
                                            (plVar11,local_6c0,local_6d8,&local_458);
                          bVar16 = true;
                          if (iVar7 != -0x80) {
                            if (iVar7 == 0) {
                              iVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,&local_458);
                              if (iVar7 != -0x80) {
                                if (iVar7 == 0) {
                                  (**(code **)(*plVar11 + 0x40))(plVar11);
                                  goto LAB_100252abf;
                                }
                                local_688 = FUN_1001cc310();
                                cVar4 = _os_log_type_enabled(local_688,0x10);
                                if (cVar4 != '\0') {
                                  uStack_46a = (undefined2)iVar7;
                                  uStack_468 = (undefined2)((uint)iVar7 >> 0x10);
                                  uVar12 = local_688;
                                  goto LAB_100252cd8;
                                }
                              }
                            }
                            else {
                              local_688 = FUN_1001cc310();
                              cVar4 = _os_log_type_enabled(local_688,0x10);
                              if (cVar4 != '\0') {
                                uStack_46a = (undefined2)iVar7;
                                uStack_468 = (undefined2)((uint)iVar7 >> 0x10);
                                uVar12 = local_688;
LAB_100252cd8:
                                uStack_46c = 0x400;
                                local_470 = 1;
                                uStack_474 = 0x7a0a90;
                                local_478 = 0x8220202;
                                bVar16 = true;
                                __os_log_error_impl(0x100000000,uVar12,0x10,
                                                    "%{public}s: err == (%d)");
                              }
                            }
                          }
                        }
                        else {
                          local_680 = (uint)*(ushort *)((long)plVar11 + 0x1a);
                          FUN_1004fda52(&local_478,(int)plVar11[1]);
                          iVar7 = FUN_10024f5ea(&local_478,*(undefined4 *)((long)plVar11 + 0xc),0,1,
                                                0,0,0,0);
                          FUN_1001b7a50(&local_478);
                          iVar6 = -0x80;
                          if (iVar7 != 0x5ca) {
                            iVar6 = iVar7;
                          }
                          bVar16 = true;
                          if (iVar6 == -0x80) {
                            iVar7 = -0x80;
                          }
                          else {
                            local_688 = CONCAT44(local_688._4_4_,iVar6);
                            if (iVar6 == 0) goto LAB_100252a59;
                            uVar12 = FUN_1001cc310();
                            cVar4 = _os_log_type_enabled(uVar12,0x10);
                            if (cVar4 != '\0') {
                              uStack_46a = (undefined2)local_688;
                              uStack_468 = (undefined2)(local_688 >> 0x10);
                              goto LAB_100252cd8;
                            }
                          }
                        }
                      }
                    }
                    FUN_100249fca(local_710);
                  }
                  else {
                    local_688 = CONCAT44(local_688._4_4_,(int)CONCAT71((int7)((ulong)lVar15 >> 8),1)
                                        );
                    if (((local_6b0[0] == 0x73766970) && (local_6a8._3_1_ != '\0')) ||
                       (iVar6 = (**(code **)(*plVar11 + 8))(plVar11,local_6e8), iVar6 == 0))
                    goto LAB_100252740;
                    lVar15 = plVar11[2];
                    local_680 = (uint)*(ushort *)((long)plVar11 + 0x1a);
                    FUN_1004fda52(&local_458,(int)plVar11[1]);
                    iVar6 = FUN_10024f5ea(&local_458,*(undefined4 *)((long)plVar11 + 0xc),0,
                                          lVar15 == 0 | bVar2,0,0,plVar11[2],0);
                    FUN_1001b7a50(&local_458);
                    iVar7 = -0x80;
                    if (iVar6 != 0x5ca) {
                      iVar7 = iVar6;
                    }
                    if (iVar7 == -0x80) goto LAB_10025275b;
                    if (iVar7 == 0) {
                      local_680 = (uint)*(ushort *)(plVar11 + 3);
                      local_688 = local_688 & 0xffffffff00000000;
                      goto LAB_100252740;
                    }
                    uVar10 = FUN_1001cc310();
                    local_688 = CONCAT44(local_688._4_4_,iVar6);
                    cVar4 = _os_log_type_enabled(uVar10,0x10);
                    if (cVar4 != '\0') {
                      local_458 = 0x8220202;
                      local_454 = "Assertion failure";
                      local_44c = 0x400;
                      local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
                      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)");
                    }
                    bVar16 = false;
                    iVar7 = (int)local_688;
                  }
                }
LAB_10025275e:
                FUN_10017060f(local_6c0);
                FUN_10017060f(local_6d8);
                FUN_100249fca(local_6e8);
                FUN_100249fca(local_6b0);
                if (local_690[1] == 1) {
                  local_6a0 = local_6a0 & 0xff;
                  if ((char)plVar11[0x11] == '\x01') {
                    local_6a0 = 1;
                  }
                  if (iVar7 == 0) {
                    iVar7 = 0;
                  }
                  else if (*(char *)((long)plVar11 + 0x89) != '\0') {
                    iVar7 = 0x67a;
                  }
                }
                else {
                  local_6f8 = CONCAT71((int7)((ulong)local_690 >> 8),
                                       *(undefined1 *)((long)plVar11 + 0x89));
                }
                bVar18 = bVar18 | *(byte *)((long)plVar11 + 0x8a);
                if (bVar17 == false) {
                  bVar17 = bVar16;
                }
                (**(code **)(*plVar11 + 0x50))(plVar11);
                param_6 = local_6c8;
              } while ((lVar13 != local_6b8) &&
                      (lVar13 = local_6b8, bVar2 = local_679, iVar7 != -0x80));
              if ((local_679 != 0) && ((iVar7 - 0x67dU & 0xfffffffb) == 0)) {
                uVar10 = FUN_1001cc310();
                param_6 = local_6c8;
                cVar4 = _os_log_type_enabled(uVar10,0x10);
                if (cVar4 != '\0') {
                  local_458 = 0x8220202;
                  local_454 = "Assertion failure";
                  local_44c = 0x822;
                  local_44a = 
                  "IsOSStatusGetCarrierBundleInfoArrayFailed(status) == false || carrierBundleInfoArrayGetFailed == false"
                  ;
                  __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)");
                }
                FUN_1001782e9(0,0);
                goto LAB_100252dea;
              }
              if ((iVar7 == 0x681) || (iVar7 == 0x67d)) {
                lVar13 = local_6b8;
                bVar2 = 1;
                if (local_679 != 0) {
                  uVar10 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar10,0x10);
                  if (cVar4 != '\0') {
                    local_458 = 0x8220202;
                    local_454 = "Assertion failure";
                    local_44c = 0x822;
                    local_44a = "carrierBundleInfoArrayGetFailed == false";
                    __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)");
                  }
                  FUN_1001782e9(0,0);
                  lVar13 = local_6b8;
                }
                goto LAB_10025236e;
              }
              if ((bVar17 == false) &&
                 ((bVar2 = local_690[1], bVar2 == 0 || ((local_6a0 & 1) == 0)))) {
                uVar14 = iVar7 - 0x65e;
                if (uVar14 < 0x1e) {
                  if ((0x20200002U >> (uVar14 & 0x1f) & 1) == 0) {
                    if ((0x21U >> (uVar14 & 0x1f) & 1) == 0) {
                      if (uVar14 != 0x1c) goto LAB_10025302b;
                      iVar7 = 0x67a;
                      if (bVar2 != 0) goto LAB_10025303a;
                    }
                  }
                  else if (((local_6f8 & 1) == 0) && (iVar7 != 0x67a || bVar2 != 0))
                  goto LAB_10025303a;
                }
                else {
LAB_10025302b:
                  if (iVar7 != 0x5c6) goto LAB_10025303a;
                }
                iVar7 = -0x1b;
              }
LAB_10025303a:
              if (((bVar18 & 1) != 0) && ((local_679 == 0 || (local_690[1] == 1)))) {
                iVar6 = FUN_100502578(local_694,local_6b0);
                if ((iVar6 != -0x80) && (iVar6 != 0)) {
                  uVar10 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar10,0x10);
                  if (cVar4 != '\0') {
                    local_458 = 0x8220202;
                    local_454 = "Assertion failure";
                    local_44c = 0x400;
                    local_44a = (char *)CONCAT44(local_44a._4_4_,iVar6);
                    __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)");
                  }
                }
                if (local_6b0[0] == 0) {
                  local_6b0[0] = 0x6950686e;
                }
                uVar10 = FUN_100416f20(local_6b0[0],0x10cc024f);
                FUN_1001b7eb0(&local_458,uVar10);
                FUN_1004fda52(&local_478,local_694);
                FUN_100450d15(&local_458,&local_478);
                FUN_1001b7a50(&local_478);
                FUN_1001b7a50(&local_458);
              }
            }
            else {
              if (local_690[3] == 0) {
                local_478 = (undefined4)uVar10;
                uStack_474 = (undefined4)((ulong)uVar10 >> 0x20);
                local_470 = SUB84(local_6d0,0);
                uStack_46c = (undefined2)((ulong)local_6d0 >> 0x20);
                uStack_46a = (undefined2)((ulong)local_6d0 >> 0x30);
                if (local_6d0 != (long *)0x0) {
                  LOCK();
                  local_6d0[1] = local_6d0[1] + 1;
                  UNLOCK();
                }
                iVar6 = FUN_1005798c7(local_694,&local_696,&local_478);
                plVar3 = (long *)CONCAT26(uStack_46a,CONCAT24(uStack_46c,local_470));
                if (plVar3 != (long *)0x0) {
                  LOCK();
                  plVar1 = plVar3 + 1;
                  lVar13 = *plVar1;
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (lVar13 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                    std::__shared_weak_count::__release_weak();
                  }
                }
                if (((iVar6 != -0x80) && (iVar6 != -0x1b)) && (iVar6 != 0)) {
                  uVar10 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar10,0x10);
                  if (cVar4 != '\0') {
                    local_458 = 0x8220202;
                    local_454 = "Assertion failure";
                    local_44c = 0x400;
                    local_44a = (char *)CONCAT44(local_44a._4_4_,iVar6);
                    __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)");
                  }
                }
                local_690[5] = 1;
                local_6d0 = plVar11;
              }
              bVar17 = false;
              iVar7 = 0;
            }
LAB_100252dea:
            local_690[4] = bVar17;
          }
          if (local_6d0 != (long *)0x0) {
            LOCK();
            plVar11 = local_6d0 + 1;
            lVar13 = *plVar11;
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (lVar13 == 0) {
              (**(code **)(*local_6d0 + 0x10))(local_6d0);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (*local_690 != 0) {
            uVar14 = 0;
            if (iVar7 != -0x80) goto LAB_100253391;
            iVar6 = -0x80;
            uVar14 = 2;
            goto LAB_1002533a1;
          }
          if ((0x1d < iVar7 - 0x65fU) || ((0x30100001U >> (iVar7 - 0x65fU & 0x1f) & 1) == 0)) {
            if (iVar7 != -0x80) {
LAB_10025338e:
              uVar14 = 0;
              goto LAB_100253391;
            }
            uVar14 = 2;
            iVar6 = iVar7;
            goto LAB_1002533a1;
          }
          lVar13 = FUN_1004de449(local_69c);
          if (lVar13 == 0) {
            uVar9 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            if (cVar4 != '\0') {
              local_458 = 0x8220202;
              local_454 = "Assertion failure";
              local_44c = 0x822;
              local_44a = "handlerData != nullptr";
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            goto LAB_100253324;
          }
          uVar14 = *(int *)(lVar13 + 0x16670) + 1;
          *(uint *)(lVar13 + 0x16670) = uVar14;
          if (0x1e < uVar14) {
            *(undefined4 *)(lVar13 + 0x16670) = 0;
            goto LAB_10025338e;
          }
          if (*(char *)(DAT_1008c76a0 + 0x1a91) == '\0') {
            uVar14 = 3;
            iVar6 = 0;
            goto LAB_1002533a1;
          }
          iVar6 = FUN_1001b1a0f();
          iVar8 = FUN_1001b19b0();
          if (iVar6 == iVar8) {
            FUN_1001727b4((int)DAT_100701ae0,uVar9,0);
          }
          else {
            FUN_1001b0d8d((int)DAT_100701ae0);
          }
          param_1 = FUN_1004de449(local_69c);
        } while (param_1 != 0);
        uVar9 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar9,0x10);
        if (cVar4 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x822;
          local_44a = "handlerData != nullptr";
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        FUN_1001782e9(0,0);
LAB_100253324:
        uVar14 = 1;
LAB_100253391:
        iVar6 = -0x1b;
        if (iVar7 != 0x67c) {
          iVar6 = iVar7;
        }
      }
LAB_1002533a1:
      lVar13 = FUN_1004de449(local_69c);
      if (((lVar13 != 0) && ((uVar14 & 1) == 0)) && (*(char *)(DAT_1008c76a0 + 0x1a91) != '\0')) {
        *(undefined4 *)(lVar13 + 0x16670) = 0;
        uVar9 = FUN_1001c156e();
        FUN_1001c6987(uVar9,0x6d646369,0,0,0);
      }
      if (((local_690[2] == 0) && (iVar6 != -0x1b)) && (iVar6 != 0)) {
        FUN_1004fda52(&local_458,local_69c);
        FUN_100243ece((int)(short)local_680,local_678,iVar6,&local_458);
        FUN_1001b7a50(&local_458);
      }
      if (param_4 != (undefined2 *)0x0) {
        *param_4 = (short)local_680;
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar14;
      }
      goto LAB_100253210;
    }
LAB_1002531e5:
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar6 = -0x32;
LAB_100253210:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

