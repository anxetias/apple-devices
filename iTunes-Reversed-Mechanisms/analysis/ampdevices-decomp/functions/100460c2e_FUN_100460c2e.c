// name: FUN_100460c2e
// address: 100460c2e

int FUN_100460c2e(void *param_1,char *param_2,undefined8 param_3,ushort param_4,undefined4 *param_5)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  char *pcVar15;
  ulong uVar16;
  size_t sVar17;
  undefined4 *puVar18;
  ulong uVar19;
  byte bVar20;
  void *pvVar21;
  void *pvVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  long local_4d8;
  dispatch_object_t local_4d0;
  long local_4c8;
  long local_4c0;
  long local_4b8;
  undefined4 *local_4b0;
  undefined8 local_4a8;
  char *local_4a0;
  void *local_498;
  ulong local_490;
  uint7 uStack_488;
  char cStack_481;
  byte local_479;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined2 uStack_46c;
  undefined2 uStack_46a;
  undefined2 uStack_468;
  undefined4 uStack_466;
  undefined2 uStack_462;
  void *pvStack_460;
  undefined8 local_458;
  undefined1 (*local_450) [16];
  undefined1 local_448 [63] [16];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (void *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_478 = 0x8220202;
      uStack_474 = 0x7a0a90;
      uStack_470 = 1;
      uStack_46c = 0x822;
      uStack_46a = 0x2339;
      uStack_468 = 0x7a;
      uStack_466 = 1;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
    goto LAB_100462113;
  }
  local_4a0 = param_2;
  if (*param_2 == '\0') {
    if (param_4 == 1) {
      *(undefined1 *)(param_5 + 10) = 0;
    }
    else if (*(char *)(param_5 + 10) != '\0') goto LAB_100460d24;
    local_479 = 0;
    local_4b0 = param_5;
    FUN_1001b7a44(&local_490);
    iVar4 = FUN_10017d5ba(param_1,&local_478);
    puVar18 = local_4b0;
    if (iVar4 != -0x80) {
      if (iVar4 == 0) {
        iVar4 = FUN_10017dca4(&local_478,&local_490);
        if (iVar4 != -0x80) {
          if (iVar4 == 0) {
            pvVar6 = (void *)FUN_1004117e4(puVar18 + 0x14,&local_490);
            if (pvVar6 == (void *)0x0) {
              pvVar22 = operator_new(0x420);
              _memcpy(pvVar22,param_1,0x420);
              local_58 = &local_490;
              lVar5 = FUN_1004649f0(puVar18 + 0x14);
              pvVar6 = *(void **)(lVar5 + 0x20);
              pvVar21 = pvVar22;
              if (pvVar6 != (void *)0x0) {
                *(void **)(lVar5 + 0x28) = pvVar6;
                local_498 = pvVar22;
                operator_delete(pvVar6);
                *(undefined1 (*) [16])(lVar5 + 0x20) = (undefined1  [16])0x0;
                *(undefined8 *)(lVar5 + 0x30) = 0;
                pvVar21 = local_498;
              }
              *(void **)(lVar5 + 0x20) = pvVar21;
              *(long *)(lVar5 + 0x28) = (long)pvVar22 + 0x420;
              *(long *)(lVar5 + 0x30) = (long)pvVar22 + 0x420;
              puVar18 = local_4b0;
            }
            else {
              pvVar21 = *(void **)((long)pvVar6 + 0x28);
              if (pvVar21 < *(void **)((long)pvVar6 + 0x30)) {
                _memcpy(pvVar21,param_1,0x420);
                lVar5 = (long)pvVar21 + 0x420;
              }
              else {
                lVar5 = (long)pvVar21 - *(long *)((long)pvVar6 + 0x20) >> 5;
                uVar16 = lVar5 * 0xf83e0f83e0f83e1 + 1;
                if (0x3e0f83e0f83e0f < uVar16) {
                    /* WARNING: Subroutine does not return */
                  FUN_10022a8ca();
                }
                lVar7 = (long)*(void **)((long)pvVar6 + 0x30) - *(long *)((long)pvVar6 + 0x20) >> 5;
                uVar19 = lVar7 * 0x1f07c1f07c1f07c2;
                if (uVar16 < uVar19) {
                  uVar16 = uVar19;
                }
                uVar19 = 0x3e0f83e0f83e0f;
                if ((ulong)(lVar7 * 0xf83e0f83e0f83e1) < 0x1f07c1f07c1f07) {
                  uVar19 = uVar16;
                }
                local_498 = pvVar6;
                if (uVar19 == 0) {
                  auVar24 = ZEXT816(0);
                }
                else {
                  auVar24 = FUN_10022a8da((long)pvVar6 + 0x30);
                }
                pvVar22 = (void *)(lVar5 * 0x20 + auVar24._0_8_);
                local_4b8 = auVar24._8_8_ * 0x420 + auVar24._0_8_;
                _memcpy(pvVar22,param_1,0x420);
                pvVar6 = local_498;
                lVar5 = (long)pvVar22 + 0x420;
                sVar17 = *(long *)((long)local_498 + 0x28) -
                         (long)*(void **)((long)local_498 + 0x20);
                pvVar22 = (void *)((long)pvVar22 - sVar17);
                _memcpy(pvVar22,*(void **)((long)local_498 + 0x20),sVar17);
                pvVar21 = *(void **)((long)pvVar6 + 0x20);
                *(void **)((long)pvVar6 + 0x20) = pvVar22;
                *(long *)((long)pvVar6 + 0x28) = lVar5;
                *(long *)((long)pvVar6 + 0x30) = local_4b8;
                puVar18 = local_4b0;
                if (pvVar21 != (void *)0x0) {
                  operator_delete(pvVar21);
                  puVar18 = local_4b0;
                }
              }
              *(long *)((long)pvVar6 + 0x28) = lVar5;
            }
          }
          else {
            uVar8 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar8,0x10);
            if (cVar2 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
              goto LAB_10046102c;
            }
          }
        }
      }
      else {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
LAB_10046102c:
          local_4c = 0x400;
          uStack_50 = 1;
          local_58._4_4_ = 0x7a0a90;
          local_58._0_4_ = 0x8220202;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    FUN_1001b7a50(&local_490);
    cVar2 = FUN_1005905a7(*puVar18,puVar18[1],*(undefined1 *)((long)puVar18 + 9),0,param_1,local_4a0
                          ,param_3,&local_479,0);
    local_498 = (void *)CONCAT71(local_498._1_7_,cVar2);
    if (cVar2 == '\0') {
      cVar2 = FUN_10059067d(param_3,local_4a0);
      iVar4 = 0;
      if (cVar2 != '\0') goto LAB_1004612ef;
    }
    else {
LAB_1004612ef:
      local_4b8 = *(long *)(local_4b0 + 4);
      local_4c8 = 0;
      if (*(char *)(local_4b0 + 6) == '\0') {
        lVar5 = FUN_10058ebb8(local_4b8,param_1,(char)local_498 == '\0',0,&local_4c8);
        if (lVar5 == 0) goto LAB_100461316;
        if ((char)local_498 == '\0') {
          local_478 = 0;
          uStack_474 = 0;
          uStack_470 = 0;
          uStack_46c = 0;
          uStack_46a = 0;
          if ((*(char *)(lVar5 + 0x4f) == '\0') &&
             (*(undefined1 (*) [16])(lVar5 + 0x40) == ZEXT816(0))) goto LAB_10046145c;
          if (*(int *)(local_4c8 + 0x10) != 7) {
            uVar8 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar8,0x10);
            if (cVar2 != '\0') {
              local_478 = 0x8220202;
              uStack_474 = 0x7a0a90;
              uStack_470 = 1;
              uStack_46c = 0x822;
              uStack_46a = 0xc99;
              uStack_468 = 0x7d;
              uStack_466 = 1;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_478,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          *(undefined1 *)(local_4c8 + 0x50) = 0;
        }
        else {
LAB_10046145c:
          *(undefined1 *)(lVar5 + 0x83) = 0;
          *(char *)(lVar5 + 0x80) = (*(int *)(lVar5 + 0x8c) != *(int *)(local_4a0 + 8)) * '\x02';
LAB_100461fff:
          FUN_100169968(*(undefined4 *)(lVar5 + 0x18),lVar5 + 0x28);
          *(undefined4 *)(lVar5 + 0x8c) = *(undefined4 *)(local_4a0 + 8);
          *(byte *)(lVar5 + 0xd7) = local_479;
          if ((*(char *)(lVar5 + 0xb2) == '\0') &&
             ((local_479 & *(byte *)((long)local_4b0 + 10)) != 0)) {
            *(undefined1 *)(lVar5 + 0xd7) = 0;
          }
          iVar4 = local_4b0[0xf];
          local_4b0[0xf] = iVar4 + 1;
          *(int *)(lVar5 + 0x54) = iVar4;
          if (*(char *)((long)local_4b0 + 0xb) == '\x01') {
            FUN_100464296(lVar5,param_1);
          }
          *(undefined4 *)(lVar5 + 0xa8) = *(undefined4 *)(local_4a0 + 0x20);
          *(long *)(local_4b8 + 0x1418) =
               *(long *)(local_4b8 + 0x1418) + *(long *)(local_4a0 + 0x20);
          if (1 < param_4) {
            FUN_10045db00(lVar5,*(undefined8 *)(local_4b0 + 0xc),local_4b0 + 0xe);
          }
        }
LAB_1004620aa:
        iVar4 = FUN_1001ceb24(*(undefined8 *)(local_4b0 + 8),0x696d7074,0,0,0);
        if (iVar4 != -0x80) {
          if (iVar4 == 0) {
            iVar4 = 0;
          }
          else {
            uVar8 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar8,0x10);
            if (cVar2 != '\0') {
              uStack_46a = (undefined2)iVar4;
              uStack_468 = (undefined2)((uint)iVar4 >> 0x10);
LAB_1004621d8:
              uStack_46c = 0x400;
              uStack_470 = 1;
              uStack_474 = 0x7a0a90;
              local_478 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_478,0x12);
            }
          }
        }
      }
      else {
LAB_100461316:
        lVar5 = FUN_10045f3a6();
        if (lVar5 == 0) {
          iVar4 = -0x2b;
LAB_100461dd5:
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 != '\0') {
            local_478 = 0x8220202;
            uStack_474 = 0x7a0a90;
            uStack_470 = 1;
            uStack_46c = 0x400;
            uStack_46a = (undefined2)iVar4;
            uStack_468 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_478,0x12);
          }
        }
        else {
          bVar23 = (char)local_498 == '\0';
          uVar8 = FUN_10045f3a6();
          if (bVar23) {
            FUN_1001c62d9(&local_490,0x10);
            iVar4 = FUN_10045f92c(uVar8,param_1,&local_490);
            if (iVar4 != 0) {
              lVar5 = FUN_10016ff43(DAT_1008c4d90);
              if (lVar5 == 0) {
                uVar8 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar8,0x10);
                if (cVar2 != '\0') {
                  pcVar15 = "assetURL != nullptr";
LAB_100461cf5:
                  uStack_46c = 0x822;
                  uStack_470 = 1;
                  uStack_474 = 0x7a0a90;
                  local_478 = 0x8220202;
                  uStack_46a = SUB82(pcVar15,0);
                  uStack_468 = (undefined2)((ulong)pcVar15 >> 0x10);
                  uStack_466 = (undefined4)((ulong)pcVar15 >> 0x20);
                  __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_478,
                                      0x16);
                }
LAB_100461921:
                local_4d0._os_obj = (_os_object_s *)0x0;
LAB_10046192c:
                FUN_1001782e9(0,0);
                FUN_10017060f(0);
                iVar4 = -0x6c;
              }
              else {
                local_4d0._os_obj =
                     (_os_object_s *)
                     _dispatch_queue_create
                               ("com.apple.iTunes.PhotosFolderImport",(dispatch_queue_attr_t)0x0);
                if (local_4d0._os_obj == (_os_object_s *)0x0) {
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar2 != '\0') {
                    pcVar15 = "dispatchQueue != nullptr";
                    goto LAB_100461cf5;
                  }
                  goto LAB_100461921;
                }
                lVar7 = _AVCFURLAssetCreateWithURLAndOptions
                                  (DAT_1008c4d90,lVar5,0,local_4d0._os_obj);
                if (lVar7 == 0) {
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar2 != '\0') {
                    local_478 = 0x8220202;
                    uStack_474 = 0x7a0a90;
                    uStack_470 = 1;
                    uStack_46c = 0x822;
                    uStack_46a = 0xb60;
                    uStack_468 = 0x7d;
                    uStack_466 = 1;
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_478
                                        ,0x16);
                  }
                  goto LAB_10046192c;
                }
                local_4c0 = _AVCFAssetCopyMetadataForFormat
                                      (lVar7,*(undefined8 *)
                                              PTR__AVCFMetadataFormatQuickTimeMetadata_10082b258);
                if (local_4c0 == 0) {
                  FUN_10017060f(0);
                  iVar4 = -0x80;
                }
                else {
                  lVar13 = FUN_10017076e();
                  iVar4 = -0x80;
                  if (0 < lVar13) {
                    uVar14 = *(undefined8 *)PTR__AVCFMetadataKeySpaceQuickTimeMetadata_10082b2e0;
                    lVar13 = 0;
                    do {
                      uVar9 = FUN_100170853(local_4c0,lVar13);
                      lVar10 = FUN_1001705e9(uVar9);
                      lVar11 = _AVCFMetadataItemGetTypeID();
                      if (lVar10 == lVar11) {
                        uVar12 = _AVCFMetadataItemCopyKeySpace(uVar9);
                        local_58._0_4_ = (undefined4)uVar12;
                        local_58._4_4_ = (undefined4)((ulong)uVar12 >> 0x20);
                        cVar2 = FUN_100169da8(uVar12,uVar14);
                        if (cVar2 != '\0') {
                          local_4a8 = _AVCFMetadataItemCopyKey(uVar9);
                          lVar10 = FUN_1001705e9(local_4a8);
                          lVar11 = _CFStringGetTypeID();
                          if (lVar10 == lVar11) {
                            cVar2 = FUN_100169da8(local_4a8,
                                                  &cf_com_apple_quicktime_content_identifier);
                            if (cVar2 != '\0') {
                              local_4d8 = _AVCFMetadataItemCopyStringValue(uVar9);
                              if (local_4d8 != 0) {
                                auVar24 = FUN_100169915(local_4d8);
                                local_490 = auVar24._0_8_;
                                uStack_488 = auVar24._8_7_;
                                cStack_481 = auVar24[0xf];
                                iVar4 = FUN_10045ff80(uVar8,param_1,local_490,auVar24._8_8_);
                                if ((iVar4 != -0x80) && (iVar4 != 0)) {
                                  uVar8 = FUN_1001cc310();
                                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                                  if (cVar2 != '\0') {
                                    local_478 = 0x8220202;
                                    uStack_474 = 0x7a0a90;
                                    uStack_470 = 1;
                                    uStack_46c = 0x400;
                                    uStack_46a = (undefined2)iVar4;
                                    uStack_468 = (undefined2)((uint)iVar4 >> 0x10);
                                    __os_log_error_impl(0x100000000,uVar8,0x10,
                                                        "%{public}s: err == (%d)",&local_478,0x12);
                                  }
                                }
                                FUN_10014d890(&local_4d8);
                                FUN_10014d890(&local_4a8);
                                FUN_10014d890(&local_58);
                                iVar4 = 0;
                                break;
                              }
                              uVar9 = FUN_1001cc310();
                              cVar2 = _os_log_type_enabled(uVar9,0x10);
                              if (cVar2 != '\0') {
                                local_478 = 0x8220202;
                                uStack_474 = 0x7a0a90;
                                uStack_470 = 1;
                                uStack_46c = 0x822;
                                uStack_46a = 0xc0a;
                                uStack_468 = 0x7d;
                                uStack_466 = 1;
                                __os_log_error_impl(0x100000000,uVar9,0x10,
                                                    "%{public}s: (%{public}s)",&local_478,0x16);
                              }
                              FUN_1001782e9(0,0);
                              FUN_10014d890(&local_4d8);
                            }
                          }
                          else {
                            uVar9 = FUN_1001cc310();
                            cVar2 = _os_log_type_enabled(uVar9,0x10);
                            if (cVar2 != '\0') {
                              local_478 = 0x8220202;
                              uStack_474 = 0x7a0a90;
                              uStack_470 = 1;
                              uStack_46c = 0x822;
                              uStack_46a = 0xba9;
                              uStack_468 = 0x7d;
                              uStack_466 = 1;
                              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",
                                                  &local_478,0x16);
                            }
                            FUN_1001782e9(0,0);
                          }
                          FUN_10014d890(&local_4a8);
                        }
                        FUN_10014d890(&local_58);
                      }
                      else {
                        uVar9 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar9,0x10);
                        if (cVar2 != '\0') {
                          local_478 = 0x8220202;
                          uStack_474 = 0x7a0a90;
                          uStack_470 = 1;
                          uStack_46c = 0x822;
                          uStack_46a = 0xb74;
                          uStack_468 = 0x7d;
                          uStack_466 = 1;
                          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",
                                              &local_478,0x16);
                        }
                        FUN_1001782e9(0,0);
                      }
                      lVar10 = FUN_10017076e(local_4c0);
                      lVar13 = lVar13 + 1;
                    } while (lVar13 < lVar10);
                  }
                  FUN_10017060f(local_4c0);
                }
                _CFRelease(lVar7);
              }
              if (local_4d0._os_obj != (_os_object_s *)0x0) {
                _dispatch_release(local_4d0);
              }
              FUN_10017060f(lVar5);
              goto LAB_100461dcc;
            }
          }
          else {
            FUN_1001c62d9(&local_490,0x10);
            iVar4 = FUN_10045f92c(uVar8,param_1,&local_490);
            if (iVar4 == 0) {
LAB_100461c6c:
              iVar4 = 0;
            }
            else {
              iVar4 = FUN_100187d80(param_1,&local_4d8);
              if (iVar4 != -0x80) {
                if (iVar4 == 0) {
                  if (((int)local_4d8 == 0x48454946) || ((int)local_4d8 == 0x48454943)) {
                    local_450 = local_448;
                    uStack_468 = 0;
                    uStack_466 = 0;
                    uStack_462 = 0;
                    pvStack_460 = (void *)0x0;
                    local_458 = 0;
                    local_448[0] = (undefined1  [16])0x0;
                    local_4a8 = 0;
                    iVar4 = FUN_10045d62e(&local_478,param_1);
                    if (iVar4 == -0x80) {
LAB_100461a27:
                      lVar5 = 0;
                      lVar7 = 0;
                    }
                    else {
                      if (iVar4 != 0) {
                        uVar14 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar14,0x10);
                        if (cVar2 != '\0') {
                          local_58._0_4_ = 0x8220202;
                          local_58._4_4_ = 0x7a0a90;
                          uStack_50 = 1;
                          local_4c = 0x400;
                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                          __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",
                                              &local_58,0x12);
                        }
                        goto LAB_100461a27;
                      }
                      lVar5 = FUN_100464646(local_4a8);
                      if (lVar5 == 0) {
                        uVar14 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar14,0x10);
                        if (cVar2 != '\0') {
                          local_58._0_4_ = 0x8220202;
                          local_58._4_4_ = 0x7a0a90;
                          uStack_50 = 1;
                          local_4c = 0x822;
                          local_4a = "imagePropertiesDictionary != nullptr";
                          __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",
                                              &local_58,0x16);
                        }
                        FUN_1001782e9(0,0);
                        goto LAB_100461a27;
                      }
                      lVar7 = FUN_100464887(lVar5);
                    }
                    FUN_10017060f(lVar5);
                    FUN_10017060f(local_4a8);
                    FUN_100230408(local_448[0]._0_8_);
                    pvVar6 = (void *)CONCAT26(uStack_462,CONCAT42(uStack_466,uStack_468));
                    if (pvVar6 != (void *)0x0) {
                      pvStack_460 = pvVar6;
                      operator_delete(pvVar6);
                    }
                  }
                  else {
                    lVar5 = FUN_10016ff43(DAT_1008c4d90,param_1);
                    if (lVar5 == 0) {
                      uVar14 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar14,0x10);
                      if (cVar2 != '\0') {
                        local_478 = 0x8220202;
                        uStack_474 = 0x7a0a90;
                        uStack_470 = 1;
                        uStack_46c = 0x822;
                        uStack_46a = 0xb0f;
                        uStack_468 = 0x7d;
                        uStack_466 = 1;
                        __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",
                                            &local_478,0x16);
                      }
                      FUN_1001782e9(0,0);
LAB_100461be1:
                      lVar7 = 0;
                      lVar13 = 0;
                      uVar14 = 0;
                    }
                    else {
                      lVar13 = _CGImageSourceCreateWithURL(lVar5,0);
                      if (lVar13 == 0) {
                        uVar14 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar14,0x10);
                        if (cVar2 != '\0') {
                          local_478 = 0x8220202;
                          uStack_474 = 0x7a0a90;
                          uStack_470 = 1;
                          uStack_46c = 0x822;
                          uStack_46a = 0x52d2;
                          uStack_468 = 0x7a;
                          uStack_466 = 1;
                          __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",
                                              &local_478,0x16);
                        }
                        FUN_1001782e9(0,0);
                        goto LAB_100461be1;
                      }
                      uVar14 = _CGImageSourceCopyPropertiesAtIndex(lVar13,0,0);
                      lVar7 = FUN_100464887(uVar14);
                    }
                    FUN_10017060f(uVar14);
                    FUN_10017060f(lVar13);
                    FUN_10017060f(lVar5);
                  }
                  if (lVar7 != 0) {
                    auVar24 = FUN_100169915(lVar7);
                    local_490 = auVar24._0_8_;
                    uStack_488 = auVar24._8_7_;
                    cStack_481 = auVar24[0xf];
                    FUN_10017060f(lVar7);
                    iVar4 = FUN_10045ff80(uVar8,param_1,local_490,CONCAT17(cStack_481,uStack_488));
                    if ((iVar4 != -0x80) && (iVar4 != 0)) {
                      uVar8 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar2 != '\0') {
                        local_478 = 0x8220202;
                        uStack_474 = 0x7a0a90;
                        uStack_470 = 1;
                        uStack_46c = 0x400;
                        uStack_46a = (undefined2)iVar4;
                        uStack_468 = (undefined2)((uint)iVar4 >> 0x10);
                        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",
                                            &local_478,0x12);
                      }
                    }
                    goto LAB_100461c6c;
                  }
                  iVar4 = -0x80;
                }
                else {
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar2 != '\0') {
                    local_478 = 0x8220202;
                    uStack_474 = 0x7a0a90;
                    uStack_470 = 1;
                    uStack_46c = 0x400;
                    uStack_46a = (undefined2)iVar4;
                    uStack_468 = (undefined2)((uint)iVar4 >> 0x10);
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_478,
                                        0x12);
                  }
                }
              }
            }
LAB_100461dcc:
            if ((iVar4 != -0x80) && (iVar4 != 0)) goto LAB_100461dd5;
          }
        }
        local_478 = 0;
        uStack_474 = 0;
        uStack_470 = 0;
        uStack_46c = 0;
        uStack_46a = 0;
        if ((cStack_481 == '\0') &&
           (auVar24._8_7_ = uStack_488, auVar24._0_8_ = local_490, auVar24[0xf] = 0,
           auVar24 == ZEXT816(0))) {
          bVar20 = 0;
LAB_100461e52:
          lVar5 = FUN_100497d69(local_4b8,0);
          if (lVar5 == 0) {
            uVar8 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar8,0x10);
            if (cVar2 != '\0') {
              local_478 = 0x8220202;
              uStack_474 = 0x7a0a90;
              uStack_470 = 1;
              uStack_46c = 0x822;
              uStack_46a = 0x7b90;
              uStack_468 = 0x7b;
              uStack_466 = 1;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_478,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            goto LAB_100462102;
          }
          *(undefined1 *)(lVar5 + 0x80) = 1;
          if ((char)local_498 == '\0') {
            local_478 = 0;
            uStack_474 = 0;
            uStack_470 = 0;
            uStack_46c = 0;
            uStack_46a = 0;
            if (cStack_481 != '\0') goto LAB_100461e96;
            auVar1._8_7_ = uStack_488;
            auVar1._0_8_ = local_490;
            auVar1[0xf] = 0;
            bVar23 = auVar1 == ZEXT816(0);
          }
          else {
LAB_100461e96:
            bVar23 = false;
          }
          *(bool *)(lVar5 + 0xb2) = bVar23;
          *(ulong *)(lVar5 + 0x40) = local_490;
          *(ulong *)(lVar5 + 0x48) = CONCAT17(cStack_481,uStack_488);
          *(undefined1 *)(local_4b8 + 6) = 1;
          uVar3 = *(undefined4 *)(local_4a0 + 4);
          *(undefined4 *)(lVar5 + 0x5c) = uVar3;
          *(undefined4 *)(lVar5 + 0x58) = uVar3;
        }
        else {
          lVar5 = FUN_100498b29(local_4b8,local_490,CONCAT17(cStack_481,uStack_488));
          bVar20 = (byte)local_498 ^ 1;
          if (lVar5 == 0) goto LAB_100461e52;
        }
        if (local_4c8 != 0) {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 != '\0') {
            local_478 = 0x8220202;
            uStack_474 = 0x7a0a90;
            uStack_470 = 1;
            uStack_46c = 0x822;
            uStack_46a = 0xcd9;
            uStack_468 = 0x7d;
            uStack_466 = 1;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
          }
          FUN_1001782e9(0,0);
        }
        cVar2 = '\x01';
        if ((char)local_498 == '\0') {
          local_478 = 0;
          uStack_474 = 0;
          uStack_470 = 0;
          uStack_46c = 0;
          uStack_46a = 0;
          if (cStack_481 == '\0') {
            if ((((((((local_490 >> 0x38 != 0 || (local_490 & 0xff000000000000) != 0) ||
                     (local_490 & 0xff0000000000) != 0) || (local_490 & 0xff00000000) != 0) ||
                   (local_490 & 0xff000000) != 0) || (local_490 & 0xff0000) != 0) ||
                 (local_490 & 0xff00) != 0) || (local_490 & 0xff) != 0) ||
               (cVar2 = '\0',
               ((((((uStack_488 & 0xff000000000000) != 0 || (uStack_488 & 0xff0000000000) != 0) ||
                  (uStack_488 & 0xff00000000) != 0) || (uStack_488 & 0xff000000) != 0) ||
                (uStack_488 & 0xff0000) != 0) || (uStack_488 & 0xff00) != 0) ||
               (uStack_488 & 0xff) != 0)) {
              cVar2 = '\x01';
            }
            cVar2 = cVar2 * '\x03' + '\x04';
          }
          else {
            cVar2 = '\a';
          }
        }
        local_4c8 = FUN_100499159(lVar5,cVar2,0);
        if (local_4c8 == 0) {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 != '\0') {
            local_478 = 0x8220202;
            uStack_474 = 0x7a0a90;
            uStack_470 = 1;
            uStack_46c = 0x822;
            uStack_46a = 0x8a29;
            uStack_468 = 0x7b;
            uStack_466 = 1;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_100462102;
        }
        iVar4 = FUN_10049a09d(local_4c8,param_1,0,0);
        if (iVar4 != -0x80) {
          if (iVar4 == 0) {
            *(undefined4 *)(local_4c8 + 0x3c) = *(undefined4 *)(local_4a0 + 0x20);
            *(undefined4 *)(local_4c8 + 0x40) = *(undefined4 *)(local_4a0 + 0x20);
            if (bVar20 == 0) goto LAB_100461fff;
            goto LAB_1004620aa;
          }
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 != '\0') {
            uStack_46a = (undefined2)iVar4;
            uStack_468 = (undefined2)((uint)iVar4 >> 0x10);
            goto LAB_1004621d8;
          }
        }
      }
    }
LAB_100462108:
    lVar5 = 0;
  }
  else {
    if (param_4 == 1) {
      cVar2 = FUN_10058fa3c(param_3);
      *(char *)(param_5 + 10) = cVar2;
      if (cVar2 != '\0') goto LAB_100460d24;
      if (*(long *)(param_5 + 0x12) != 0) {
        lVar5 = FUN_1001656af(DAT_1008c4d90,param_3,*(undefined8 *)PTR__kCFAllocatorNull_10082e028);
        if (lVar5 != 0) {
          cVar2 = FUN_100171439(*(undefined8 *)(param_5 + 0x12),lVar5);
          if (cVar2 != '\0') goto LAB_100460e3e;
          iVar4 = -0x57f;
          local_58 = (ulong *)CONCAT44(local_58._4_4_,(undefined4)local_58);
          goto LAB_10046210b;
        }
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          local_478 = 0x8220202;
          uStack_474 = 0x7a0a90;
          uStack_470 = 1;
          uStack_46c = 0x822;
          uStack_46a = 0x1082;
          uStack_468 = 0x7b;
          uStack_466 = 1;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
        }
        FUN_1001782e9(0,0);
LAB_100462102:
        iVar4 = -0x6c;
        goto LAB_100462108;
      }
      lVar5 = 0;
LAB_100460e3e:
      local_4a0 = (char *)CONCAT44(local_4a0._4_4_,*(undefined4 *)(local_4a0 + 4));
      uVar8 = *(undefined8 *)(param_5 + 4);
      FUN_1001e5b77(param_3,&local_478,0x100);
      if ((*(char *)(param_5 + 6) != '\0') || (lVar7 = FUN_10049b9b4(uVar8,&local_478), lVar7 == 0))
      {
        lVar7 = FUN_10049a4a2(uVar8,0,0);
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x20) = 0;
          *(undefined1 *)(lVar7 + 0x10) = 1;
          *(undefined4 *)(lVar7 + 0x90) = 0;
          uVar3 = FUN_1001ea5dc();
          *(undefined4 *)(lVar7 + 0xc0) = uVar3;
          goto LAB_100460f35;
        }
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          local_58._0_4_ = 0x8220202;
          local_58._4_4_ = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "album != nullptr";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar4 = -0x6c;
LAB_100461098:
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          local_478 = 0x8220202;
          uStack_474 = 0x7a0a90;
          uStack_470 = 1;
          uStack_46c = 0x400;
          uStack_46a = (undefined2)iVar4;
          uStack_468 = (undefined2)((uint)iVar4 >> 0x10);
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_478,0x12);
        }
        goto LAB_10046210b;
      }
      *(undefined1 *)(lVar7 + 0x10) = 0;
      *(undefined1 *)(lVar7 + 0xc5) = 0;
      *(undefined4 *)(lVar7 + 0x90) = local_4a0._0_4_;
      *(undefined4 *)(lVar7 + 0x50) = 0;
      if (*(long *)(lVar7 + 0x58) != 0) {
        FUN_1001c64c1();
        *(undefined8 *)(lVar7 + 0x58) = 0;
      }
LAB_100460f35:
      FUN_100169968(*(undefined4 *)(lVar7 + 0x18),lVar7 + 0x38);
      *(undefined1 *)(lVar7 + 0x11) = 6;
      uVar3 = param_5[0x10];
      *(short *)(param_5 + 0x10) = (short)uVar3 + 1;
      *(short *)(lVar7 + 0x12) = (short)uVar3;
      iVar4 = FUN_10058f474(lVar7,&local_478);
      local_58 = (ulong *)CONCAT44(local_58._4_4_,(undefined4)local_58);
      if (iVar4 == -0x80) goto LAB_10046210b;
      if (iVar4 == 0) {
        *(long *)(param_5 + 0xc) = lVar7;
        param_5[0xe] = 0;
        local_58 = (ulong *)CONCAT44(local_58._4_4_,(undefined4)local_58);
        goto LAB_10046210b;
      }
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        local_58._0_4_ = 0x8220202;
        local_58._4_4_ = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      if (iVar4 != 0) goto LAB_100461098;
    }
    else {
LAB_100460d24:
      lVar5 = 0;
    }
    iVar4 = 0;
  }
LAB_10046210b:
  FUN_10017060f(lVar5);
LAB_100462113:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

