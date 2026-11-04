// name: FUN_1003d767c
// address: 1003d767c

void FUN_1003d767c(long param_1,char param_2,ulong param_3,undefined4 param_4,byte *param_5)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  bool bVar13;
  int local_470;
  uint local_46c;
  long local_468;
  uint local_460;
  char local_459;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x10);
  local_470 = 0;
  if (param_5 == (byte *)0x0) {
    local_460 = 0;
  }
  else {
    local_460 = (uint)CONCAT71((int7)((ulong)local_38 >> 8),*param_5);
  }
  cVar3 = FUN_100495380(*(undefined8 *)(param_1 + 0x3e0));
  if (cVar3 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_44a = "ITImageLibraryIsValid(context->desktopPhotoLibrary)";
LAB_1003d7ed0:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
  }
  else {
    cVar3 = FUN_100495380(*(undefined8 *)(lVar1 + 0x66b8));
    if (cVar3 != '\0') {
      FUN_100495f4a(*(undefined8 *)(param_1 + 0x3e0),2);
      FUN_10049618f(*(undefined8 *)(lVar1 + 0x66b8));
      uVar11 = 0;
      FUN_10029afed(*(undefined8 *)(param_1 + 0x3e0),1,&local_470,0,0);
      if ((ulong)*(uint *)(lVar1 + 0x4570) != 0) {
        lVar9 = 0;
        uVar11 = 0;
        do {
          uVar11 = (uVar11 + 1) - (uint)(*(char *)(lVar1 + 0x45ab + lVar9) == '\0');
          lVar9 = lVar9 + 0x78;
        } while ((ulong)*(uint *)(lVar1 + 0x4570) * 0x78 - lVar9 != 0);
      }
      if (*(int *)(*(long *)(lVar1 + 0x66b8) + 8) == 0) {
LAB_1003d7dbd:
        uVar8 = (ulong)local_460;
      }
      else {
        local_459 = *(char *)(*(long *)(param_1 + 0x20) + 0x2b7);
        lVar9 = FUN_100496019();
        uVar8 = param_3;
        if (lVar9 == 0) goto LAB_1003d7dbd;
        do {
          uVar12 = *(ulong *)(lVar9 + 0x20);
          if (uVar12 >> 0x20 != 0) {
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_458 = 0x8220202;
              local_454 = "Assertion failure";
              local_44c = 0x822;
              local_44a = "(UInt32) ipodImageInfo->sourceID == ipodImageInfo->sourceID";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_458,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            uVar12 = *(ulong *)(lVar9 + 0x20);
          }
          lVar6 = FUN_1004983e2(*(undefined8 *)(param_1 + 0x3e0),uVar12);
          uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
          if ((lVar6 != 0) && (*(int *)(lVar6 + 0x8c) == *(int *)(lVar9 + 0x8c))) {
            local_468 = lVar6;
            if (param_2 == '\0') {
              if ((*(char *)(lVar6 + 0xb0) == '\0') &&
                 ((*(char *)(lVar6 + 0x80) == '\x06' || (*(char *)(lVar6 + 0x80) == '\0')))) {
                uVar2 = *(uint *)(lVar6 + 0xa4);
joined_r0x0001003d78c6:
                if (uVar2 != 0) goto LAB_1003d78c8;
              }
            }
            else {
              if ((*(char *)(lVar6 + 0xb0) == '\0') &&
                 (((*(char *)(lVar6 + 0x80) == '\x06' || (*(char *)(lVar6 + 0x80) == '\0')) &&
                  (*(int *)(lVar6 + 0xa4) != 0)))) {
LAB_1003d78c8:
                iVar4 = FUN_100498e55(local_468,lVar9);
                if ((iVar4 != -0x80) && (iVar4 != 0)) {
                  uVar5 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar3 != '\0') {
                    local_458 = 0x8220202;
                    local_454 = "Assertion failure";
                    local_44c = 0x400;
                    local_44a = (char *)CONCAT44(local_44a._4_4_,iVar4);
                    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_458,
                                        0x12);
                  }
                }
                *(undefined4 *)(local_468 + 0xa0) = 0;
                *(undefined1 *)(lVar9 + 0x83) = 0;
                for (lVar6 = FUN_1004968c5(lVar9); lVar6 != 0; lVar6 = FUN_100496985(lVar6)) {
                  if (0xffffff9b < *(int *)(lVar6 + 0x10) - 1000U) {
                    *(undefined1 *)(lVar6 + 0x50) = 1;
                  }
                }
                for (lVar6 = FUN_1004968c5(local_468); lVar6 != 0; lVar6 = FUN_100496985(lVar6)) {
                  if ((*(int *)(lVar6 + 0x10) == 5) && (*(int *)(lVar6 + 0x480) != 0)) {
                    for (lVar7 = FUN_1004968c5(lVar9); lVar7 != 0; lVar7 = FUN_100496985(lVar7)) {
                      if ((0xffffff9b < *(int *)(lVar7 + 0x10) - 1000U) &&
                         (*(short *)(lVar7 + 0x47c) == *(short *)(lVar6 + 0x47c))) {
                        *(undefined1 *)(lVar7 + 0x50) = 0;
                      }
                    }
                  }
                }
                lVar6 = FUN_1004968c5(local_468);
                if (lVar6 == 0) {
                  local_46c = 0;
                }
                else {
                  local_46c = 0;
                  do {
                    iVar4 = *(int *)(lVar6 + 0x10);
                    if (iVar4 == 5 || iVar4 - 900U < 100) {
                      if (*(int *)(lVar6 + 0x480) != 0) {
                        lVar7 = FUN_1004993b9(lVar9,iVar4,*(undefined2 *)(lVar6 + 0x47c));
                        goto LAB_1003d7a1b;
                      }
                    }
                    else {
                      lVar7 = FUN_1004993ef(lVar9,iVar4,0,1);
LAB_1003d7a1b:
                      if (lVar7 == 0) {
                        uVar2 = *(uint *)(lVar6 + 0x10);
                        if ((uVar2 == 4) || (uVar2 == 1)) {
                          if ((uVar2 == 4) || (uVar2 == 1 && local_459 != '\0')) {
                            *(byte *)(local_468 + 0xa0) = *(byte *)(local_468 + 0xa0) | 1;
                          }
                        }
                        else if ((899 < uVar2) && ((ulong)*(uint *)(lVar1 + 0x4570) != 0)) {
                          lVar7 = 0;
                          do {
                            if (*(uint *)(lVar1 + 0x4578 + lVar7) == uVar2) {
                              *(uint *)(local_468 + 0xa0) =
                                   *(uint *)(local_468 + 0xa0) | (uint)(uVar2 - 900 < 100) * 2 + 2;
                              break;
                            }
                            lVar7 = lVar7 + 0x78;
                          } while ((ulong)*(uint *)(lVar1 + 0x4570) * 0x78 - lVar7 != 0);
                        }
                      }
                      else {
                        uVar2 = *(uint *)(lVar7 + 0x10);
                        if ((uVar2 == 4) || (uVar2 == 1)) {
                          uVar8 = (ulong)CONCAT31((int3)(uVar2 >> 8),uVar2 == 1);
                          if (uVar2 != 1 || local_459 != '\0') {
                            iVar4 = FUN_10049980b(lVar7,&local_458,0);
                            bVar13 = iVar4 != 0;
                            if (bVar13) {
                              *(byte *)(local_468 + 0xa0) = *(byte *)(local_468 + 0xa0) | 1;
                            }
                            uVar2 = *(uint *)(lVar7 + 0x10);
                            goto LAB_1003d7b09;
                          }
                        }
                        else {
                          bVar13 = false;
LAB_1003d7b09:
                          uVar8 = (ulong)uVar2;
                          if (899 < uVar2) {
                            if ((ulong)*(uint *)(lVar1 + 0x4570) != 0) {
                              lVar10 = 0;
                              do {
                                if (*(uint *)(lVar1 + 0x4578 + lVar10) == uVar2) goto LAB_1003d7b6a;
                                lVar10 = lVar10 + 0x78;
                              } while ((ulong)*(uint *)(lVar1 + 0x4570) * 0x78 - lVar10 != 0);
                            }
                            uVar5 = FUN_1001cc310();
                            cVar3 = _os_log_type_enabled(uVar5,0x10);
                            if (cVar3 != '\0') {
                              local_458 = 0x8220202;
                              local_454 = "Assertion failure";
                              local_44c = 0x822;
                              local_44a = 
                              "(ipodImageInstance->formatID < kITImageFormat_FirstThumbFormat) || IsSupportedImageFormatID(&handlerData->deviceInfo.imageFormatList, ipodImageInstance->formatID)"
                              ;
                              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                                  &local_458,0x16);
                            }
                            uVar8 = FUN_1001782e9(0,0);
                          }
LAB_1003d7b6a:
                          if (!bVar13) {
                            *(undefined1 *)(lVar7 + 0x50) = 0;
                            local_46c = local_46c +
                                        (*(int *)(lVar6 + 0x10) - 900U < 100 ||
                                        *(int *)(lVar6 + 0x10) == 5);
                            goto LAB_1003d7ba3;
                          }
                        }
                        *(undefined1 *)(lVar7 + 0x50) = 1;
                        local_460 = (uint)CONCAT71((int7)(uVar8 >> 8),1);
                      }
                    }
LAB_1003d7ba3:
                    lVar6 = FUN_100496985(lVar6);
                  } while (lVar6 != 0);
                }
                if ((param_2 != '\0') &&
                   (cVar3 = FUN_10029af6b(lVar9,param_3,param_4,0), cVar3 != '\0')) {
                  *(byte *)(local_468 + 0xa0) = *(byte *)(local_468 + 0xa0) | 2;
                }
                if (uVar11 != 0) {
                  local_470 = local_470 - local_46c / uVar11;
                }
                uVar8 = (ulong)local_460;
                goto LAB_1003d7c91;
              }
              cVar3 = FUN_10029b39e(lVar6);
              if ((cVar3 == '\0') && (*(byte *)(local_468 + 0x80) < 6)) {
                uVar2 = 0x2eU >> (*(byte *)(local_468 + 0x80) & 0x1f) & 1;
                goto joined_r0x0001003d78c6;
              }
            }
            *(undefined4 *)(local_468 + 0xa0) = 0;
          }
LAB_1003d7c91:
          iVar4 = FUN_100601f45(param_1);
          if (iVar4 != 0) {
            if (iVar4 != -0x80) {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                local_458 = 0x8220202;
                local_454 = "Assertion failure";
                local_44c = 0x400;
                local_44a = (char *)CONCAT44(local_44a._4_4_,iVar4);
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_458,0x12
                                   );
              }
            }
            goto LAB_1003d7e18;
          }
          lVar9 = FUN_1004960d0(lVar9);
          local_460 = (uint)uVar8;
        } while (lVar9 != 0);
      }
      if (param_5 != (byte *)0x0) {
        *param_5 = (byte)uVar8 & 1;
      }
      if (0 < local_470) {
        *(int *)(param_1 + 0x40c) = local_470;
      }
      goto LAB_1003d7e18;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_44a = "ITImageLibraryIsValid(handlerData->iPodPhotoLibrary)";
      goto LAB_1003d7ed0;
    }
  }
  FUN_1001782e9(0,0);
LAB_1003d7e18:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

