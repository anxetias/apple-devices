// name: FUN_1002a5300
// address: 1002a5300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1002a5300(long param_1,long param_2,long *param_3,long param_4)

{
  long *plVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  char cVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  char *pcVar25;
  ulong uVar26;
  long *plVar27;
  int *piVar28;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 local_590 [24];
  undefined8 local_578;
  long *plStack_570;
  undefined8 local_568;
  long *local_560;
  long *local_558;
  undefined8 local_550;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined8 local_538;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  long *local_520;
  undefined8 local_518;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  long local_500;
  long local_4f8;
  long local_4f0;
  uint local_4e4;
  long local_4e0;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined2 uStack_4cc;
  undefined2 uStack_4ca;
  undefined2 uStack_4c8;
  undefined2 uStack_4c6;
  undefined2 uStack_4c4;
  undefined2 uStack_4c2;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined1 local_4ac [1076];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_578 = 0;
  plStack_570 = (long *)0x0;
  local_520 = param_3;
  local_4f8 = param_4;
  local_4f0 = param_1;
  local_550 = _objc_autoreleasePoolPush();
  if (*(char *)(param_2 + 0x886) == '\0') {
    uVar26 = 0;
    do {
      uVar24 = uVar26;
      if (uVar24 == 5) break;
      uVar26 = uVar24 + 1;
    } while (*(char *)(param_2 + 0x887 + uVar24) == '\0');
    local_4e4 = (uint)CONCAT71((int7)(uVar24 >> 8),4 < uVar24);
  }
  else {
    local_4e4 = 0;
  }
  local_4e0 = param_2;
  local_538 = (double)CONCAT44(local_538._4_4_,(uint)local_538);
  if ((*(uint *)(param_2 + 0x870) < 7) &&
     (local_538 = (double)CONCAT44(local_538._4_4_,(uint)local_538),
     (0x72U >> (*(uint *)(param_2 + 0x870) & 0x1f) & 1) != 0)) {
    lVar21 = *(long *)(param_2 + 0x858);
    uVar20 = *(uint *)(local_4f0 + 0xc);
    FUN_100196476(&local_58);
    if (uVar20 == 0) {
      FUN_1001966e2(&local_58);
    }
    else {
      local_518 = (void *)(local_4e0 + 0x10);
      if ((*(uint *)(local_4e0 + 0x870) < 7) &&
         ((0x62U >> (*(uint *)(local_4e0 + 0x870) & 0x1f) & 1) != 0)) {
        if (lVar21 == 0) {
          iVar17 = FUN_1005939e2(local_518,&local_58);
          lVar21 = 0;
          if ((iVar17 != -0x80) && (iVar17 != 0)) {
            uVar22 = FUN_1001cc310();
            uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
            cVar15 = _os_log_type_enabled(uVar22,0x10);
            if (cVar15 != '\0') {
              local_4d8 = 0x8220202;
              uStack_4d4 = 0x7a0a90;
              uStack_4d0 = 1;
              uStack_4cc = 0x400;
              uStack_4ca = (undefined2)iVar17;
              uStack_4c8 = (undefined2)((uint)iVar17 >> 0x10);
              __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: err == (%d)",&local_4d8,0x12)
              ;
            }
            lVar21 = 0;
LAB_1002a551b:
            (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          }
        }
        else {
          lVar21 = _CGImageSourceCreateWithData(lVar21,0);
          if (lVar21 == 0) {
            uVar22 = FUN_1001cc310();
            uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
            cVar15 = _os_log_type_enabled(uVar22,0x10);
            if (cVar15 != '\0') {
              local_4d8 = 0x8220202;
              uStack_4d4 = 0x7a0a90;
              uStack_4d0 = 1;
              uStack_4cc = 0x822;
              uStack_4ca = 0x52d2;
              uStack_4c8 = 0x7a;
              uStack_4c6 = 1;
              uStack_4c4 = 0;
              __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",&local_4d8,0x16
                                 );
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar22);
            lVar21 = 0;
            FUN_1001782e9(0,0);
            iVar17 = 0x2344;
          }
          else {
            iVar17 = FUN_100196700(lVar21,&local_58);
            if ((iVar17 != -0x80) && (iVar17 != 0)) {
              uVar22 = FUN_1001cc310();
              uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
              cVar15 = _os_log_type_enabled(uVar22,0x10);
              if (cVar15 != '\0') {
                local_4d8 = 0x8220202;
                uStack_4d4 = 0x7a0a90;
                uStack_4d0 = 1;
                uStack_4cc = 0x400;
                uStack_4ca = (undefined2)iVar17;
                uStack_4c8 = (undefined2)((uint)iVar17 >> 0x10);
                __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: err == (%d)",&local_4d8,
                                    0x12);
              }
              goto LAB_1002a551b;
            }
          }
        }
        FUN_10017060f(lVar21);
        local_538 = (double)CONCAT44(local_538._4_4_,(uint)local_538);
        if (iVar17 != -0x80) {
          if (iVar17 == 0) {
LAB_1002a55c8:
            if ((uVar20 & 0x10) != 0) {
              FUN_1001964d2(local_4e0 + 0xd20,&local_58);
            }
            goto LAB_1002a55e5;
          }
          local_538 = (double)CONCAT44(local_538._4_4_,(uint)local_538);
          if (iVar17 != 0x3a9b) {
            uVar22 = FUN_1001cc310();
            uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
            cVar15 = _os_log_type_enabled(uVar22,0x10);
            if (cVar15 != '\0') {
              local_4d8 = 0x8220202;
              uStack_4d4 = 0x7a0a90;
              uStack_4d0 = 1;
              uStack_4cc = 0x400;
              uStack_4ca = (undefined2)iVar17;
              uStack_4c8 = (undefined2)((uint)iVar17 >> 0x10);
              __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: err == (%d)",&local_4d8,0x12)
              ;
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar22);
            if (iVar17 == 0) goto LAB_1002a55c8;
          }
        }
      }
      else {
LAB_1002a55e5:
        if ((uVar20 & 2) != 0) {
          if (*(int *)(local_4e0 + 0x870) == 4) {
            FUN_1001c62d9(&local_4d8,0x460);
            _memcpy(local_4ac,local_518,0x420);
            uVar22 = FUN_1003d0eda(0x46494c45,&local_4d8,0xa978797a,1);
            lVar21 = FUN_1001705e9(uVar22);
            lVar23 = FUN_100173434();
            if ((lVar21 == lVar23) && (lVar21 = FUN_1001705fc(uVar22), lVar21 != 0)) {
              uVar22 = FUN_1001705fc(lVar21);
              local_4d8 = (undefined4)uVar22;
              uStack_4d4 = (undefined4)((ulong)uVar22 >> 0x20);
              uVar22 = FUN_1001737f8(lVar21);
              uStack_4d0 = (undefined4)uVar22;
              uStack_4cc = (undefined2)((ulong)uVar22 >> 0x20);
              uStack_4ca = (undefined2)((ulong)uVar22 >> 0x30);
              uStack_4c8 = 0;
              uStack_4c6 = 0;
              uStack_4c4 = 0;
              uStack_4c2 = 0;
              cVar15 = FUN_1002a75ab(&local_4d8,&local_500,1);
              if (cVar15 == '\0') {
                uVar22 = FUN_1001cc310();
                uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                cVar15 = _os_log_type_enabled(uVar22,0x10);
                if (cVar15 != '\0') {
                  pcVar25 = "ParseLatitudeOrLongitude(scanner, &latitude, true)";
LAB_1002a70a8:
                  uStack_6c = 0x822;
                  uStack_70 = 1;
                  uStack_74 = 0x7a0a90;
                  local_78 = 0x8220202;
                  uStack_6a = SUB82(pcVar25,0);
                  uStack_68 = (undefined6)((ulong)pcVar25 >> 0x10);
                  __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",&local_78,
                                      0x16);
                }
LAB_1002a5a1e:
                (*(code *)PTR__objc_release_10082c7b0)(uVar22);
                bVar10 = false;
                FUN_1001782e9(0,0);
              }
              else {
                cVar15 = FUN_1002a75ab(&local_4d8,&local_568,0);
                if (cVar15 == '\0') {
                  uVar22 = FUN_1001cc310();
                  uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                  cVar15 = _os_log_type_enabled(uVar22,0x10);
                  if (cVar15 != '\0') {
                    pcVar25 = "ParseLatitudeOrLongitude(scanner, &longitude, false)";
                    goto LAB_1002a70a8;
                  }
                  goto LAB_1002a5a1e;
                }
                *(long *)(local_4e0 + 0xd00) = local_500;
                *(undefined8 *)(local_4e0 + 0xd08) = local_568;
                bVar10 = true;
              }
              FUN_10017060f(CONCAT44(uStack_4d4,local_4d8));
              if (!bVar10) {
                uVar22 = FUN_1001cc310();
                uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                cVar15 = _os_log_type_enabled(uVar22,0x10);
                if (cVar15 != '\0') {
                  local_4d8 = 0x8220202;
                  uStack_4d4 = 0x7a0a90;
                  uStack_4d0 = 1;
                  uStack_4cc = 0x822;
                  uStack_4ca = 0x8387;
                  uStack_4c8 = 0x7b;
                  uStack_4c6 = 1;
                  uStack_4c4 = 0;
                  __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",&local_4d8,
                                      0x16);
                }
                (*(code *)PTR__objc_release_10082c7b0)(uVar22);
                FUN_1001782e9(0,0);
              }
            }
            else {
              lVar21 = 0;
            }
            FUN_10017060f(lVar21);
          }
          else {
            uVar22 = FUN_1001966ec(&local_58);
            lVar21 = FUN_100166b7f(uVar22,*(undefined8 *)
                                           PTR__kCGImagePropertyGPSDictionary_10082e860);
            if (lVar21 != 0) {
              local_518 = (void *)FUN_100167f51((int)DAT_10070e4d0,lVar21,
                                                *(undefined8 *)
                                                 PTR__kCGImagePropertyGPSLatitude_10082e868);
              uStack_510 = extraout_XMM0_Dc;
              uStack_50c = extraout_XMM0_Dd;
              if (!NAN((double)local_518)) {
                if (0.0 <= (double)local_518) {
                  local_538 = (double)FUN_100167f51((int)DAT_10070e4d0,lVar21,
                                                    *(undefined8 *)
                                                     PTR__kCGImagePropertyGPSLongitude_10082e878);
                  uStack_530 = extraout_XMM0_Dc_00;
                  uStack_52c = extraout_XMM0_Dd_00;
                  if (NAN(local_538)) goto LAB_1002a5d06;
                  if (0.0 <= local_538) {
                    lVar23 = FUN_100166c1b(lVar21,*(undefined8 *)
                                                   PTR__kCGImagePropertyGPSLatitudeRef_10082e870);
                    if (lVar23 == 0) {
                      uVar22 = FUN_1001cc310();
                      uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                      cVar15 = _os_log_type_enabled(uVar22,0x10);
                      if (cVar15 != '\0') {
                        pcVar25 = "latitudeReference != nullptr";
                        goto LAB_1002a5ccf;
                      }
                    }
                    else {
                      cVar15 = FUN_100169fa1(lVar23,&cf_N);
                      if (cVar15 == '\0') {
                        cVar16 = FUN_100169fa1(lVar23,&cf_S);
                        if (cVar16 == '\0') {
                          uVar22 = FUN_1001cc310();
                          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                          cVar15 = _os_log_type_enabled(uVar22,0x10);
                          if (cVar15 != '\0') {
                            pcVar25 = 
                            "JRCFStringHasCaseInsensitivePrefix(latitudeReference, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"N\" \"\"))) || (isSouth = JRCFStringHasCaseInsensitivePrefix(latitudeReference, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"S\" \"\"))))"
                            ;
                            goto LAB_1002a5ccf;
                          }
                          goto LAB_1002a5cf4;
                        }
                      }
                      lVar21 = FUN_100166c1b(lVar21,*(undefined8 *)
                                                     PTR__kCGImagePropertyGPSLongitudeRef_10082e880)
                      ;
                      if (lVar21 != 0) {
                        cVar16 = FUN_100169fa1(lVar21,&cf_E);
                        if (cVar16 == '\0') {
                          cVar16 = FUN_100169fa1(lVar21,&cf_W);
                          if (cVar16 == '\0') {
                            uVar22 = FUN_1001cc310();
                            uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                            cVar15 = _os_log_type_enabled(uVar22,0x10);
                            if (cVar15 != '\0') {
                              pcVar25 = 
                              "JRCFStringHasCaseInsensitivePrefix(longitudeReference, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"E\" \"\"))) || (isWest = JRCFStringHasCaseInsensitivePrefix(longitudeReference, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"W\" \"\"))))"
                              ;
                              goto LAB_1002a5ccf;
                            }
                            goto LAB_1002a5cf4;
                          }
                          if (cVar15 == '\0') {
                            uVar26 = CONCAT44(uStack_50c,uStack_510) ^ _UNK_100700b38;
                            uStack_510 = (undefined4)uVar26;
                            uStack_50c = (undefined4)(uVar26 >> 0x20);
                            local_518 = (void *)CONCAT44(local_518._4_4_ ^ _UNK_100700b34,
                                                         (uint)local_518 ^ _DAT_100700b30);
                          }
                          local_538 = (double)CONCAT44(local_538._4_4_ ^ _UNK_100700b34,
                                                       (uint)local_538 ^ _DAT_100700b30);
                          uVar26 = CONCAT44(uStack_52c,uStack_530) ^ _UNK_100700b38;
                          uStack_530 = (undefined4)uVar26;
                          uStack_52c = (undefined4)(uVar26 >> 0x20);
                        }
                        else if (cVar15 == '\0') {
                          uVar26 = CONCAT44(uStack_50c,uStack_510) ^ _UNK_100700b38;
                          uStack_510 = (undefined4)uVar26;
                          uStack_50c = (undefined4)(uVar26 >> 0x20);
                          local_518 = (void *)CONCAT44(local_518._4_4_ ^ _UNK_100700b34,
                                                       (uint)local_518 ^ _DAT_100700b30);
                        }
                        *(void **)(local_4e0 + 0xd00) = local_518;
                        *(double *)(local_4e0 + 0xd08) = local_538;
                        goto LAB_1002a5d06;
                      }
                      uVar22 = FUN_1001cc310();
                      uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                      cVar15 = _os_log_type_enabled(uVar22,0x10);
                      if (cVar15 != '\0') {
                        pcVar25 = "longitudeReference";
                        goto LAB_1002a5ccf;
                      }
                    }
                  }
                  else {
                    uVar22 = FUN_1001cc310();
                    uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                    cVar15 = _os_log_type_enabled(uVar22,0x10);
                    if (cVar15 != '\0') {
                      pcVar25 = "longitude >= 0.";
LAB_1002a5ccf:
                      uStack_4cc = 0x822;
                      uStack_4d0 = 1;
                      uStack_4d4 = 0x7a0a90;
                      local_4d8 = 0x8220202;
                      uStack_4ca = SUB82(pcVar25,0);
                      uStack_4c8 = (undefined2)((ulong)pcVar25 >> 0x10);
                      uStack_4c6 = (undefined2)((ulong)pcVar25 >> 0x20);
                      uStack_4c4 = 0;
                      __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",
                                          &local_4d8,0x16);
                    }
                  }
                }
                else {
                  uVar22 = FUN_1001cc310();
                  uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                  cVar15 = _os_log_type_enabled(uVar22,0x10);
                  if (cVar15 != '\0') {
                    pcVar25 = "latitude >= 0.";
                    goto LAB_1002a5ccf;
                  }
                }
LAB_1002a5cf4:
                (*(code *)PTR__objc_release_10082c7b0)(uVar22);
                FUN_1001782e9(0,0);
              }
            }
          }
        }
LAB_1002a5d06:
        iVar17 = 0;
        if ((uVar20 & 1) != 0) {
          uVar22 = FUN_1001966ec(&local_58);
          local_78 = 0;
          iVar18 = FUN_100593c7d(uVar22);
          iVar17 = iVar18;
          if (iVar18 != -0x80) {
            if (iVar18 == 0) {
              *(undefined4 *)(local_4e0 + 0xd10) = local_78;
            }
            else {
              uVar22 = FUN_1001cc310();
              uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
              cVar15 = _os_log_type_enabled(uVar22,0x10);
              uVar14 = uStack_4c8;
              uVar13 = uStack_4ca;
              uStack_4ca = (undefined2)iVar18;
              uVar11 = uStack_4ca;
              uStack_4c8 = (undefined2)((uint)iVar18 >> 0x10);
              uVar12 = uStack_4c8;
              if (cVar15 != '\0') {
                local_4d8 = 0x8220202;
                uStack_4d4 = 0x7a0a90;
                uStack_4d0 = 1;
                uStack_4cc = 0x400;
                __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: err == (%d)",&local_4d8,
                                    0x12);
                uVar13 = uStack_4ca;
                uVar14 = uStack_4c8;
              }
              uStack_4c8 = uVar14;
              uStack_4ca = uVar13;
              (*(code *)PTR__objc_release_10082c7b0)(uVar22);
              iVar17 = 0;
              if (iVar18 != 0) {
                uVar22 = FUN_1001cc310();
                uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                cVar15 = _os_log_type_enabled(uVar22,0x10);
                if (cVar15 != '\0') {
                  local_4d8 = 0x8220202;
                  uStack_4d4 = 0x7a0a90;
                  uStack_4d0 = 1;
                  uStack_4cc = 0x400;
                  uStack_4ca = uVar11;
                  uStack_4c8 = uVar12;
                  __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: err == (%d)",&local_4d8,
                                      0x12);
                }
                (*(code *)PTR__objc_release_10082c7b0)(uVar22);
                iVar17 = iVar18;
              }
            }
          }
        }
        if ((*(uint *)(local_4e0 + 0x870) < 7) &&
           ((0x62U >> (*(uint *)(local_4e0 + 0x870) & 0x1f) & 1) != 0)) {
          if ((uVar20 & 4) != 0) {
            uVar22 = FUN_1001966ec(&local_58);
            FUN_100167740(uVar22,*(undefined8 *)PTR__kCGImagePropertyOrientation_10082e890,
                          &local_4d8);
            *(undefined1 *)(local_4e0 + 0xd14) = (undefined1)local_4d8;
          }
          if ((uVar20 & 8) != 0) {
            uVar22 = FUN_1001966ec(&local_58);
            FUN_100167740(uVar22,*(undefined8 *)PTR__kCGImagePropertyPixelWidth_10082e8a0,
                          local_4e0 + 0xd18);
            uVar22 = FUN_1001966ec(&local_58);
            FUN_100167740(uVar22,*(undefined8 *)PTR__kCGImagePropertyPixelHeight_10082e898,
                          local_4e0 + 0xd1c);
          }
        }
      }
      FUN_1001966e2(&local_58);
      if (((iVar17 != -0x80) && (iVar17 != 0)) && (iVar17 != 0x3a9b)) {
        uVar22 = FUN_1001cc310();
        uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
        cVar15 = _os_log_type_enabled(uVar22,0x10);
        if (cVar15 != '\0') {
          local_4d8 = 0x8220202;
          uStack_4d4 = 0x7a0a90;
          uStack_4d0 = 1;
          uStack_4cc = 0x400;
          uStack_4ca = (undefined2)iVar17;
          uStack_4c8 = (undefined2)((uint)iVar17 >> 0x10);
          __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: err == (%d)",&local_4d8,0x12);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar22);
      }
    }
  }
  if ((char)local_4e4 == '\0') {
    lVar21 = local_4e0 + 0x10;
    cVar15 = FUN_10059004d(lVar21);
    if (cVar15 == '\0') {
LAB_1002a61e5:
      lVar23 = local_4e0;
      lVar21 = *(long *)(local_4f0 + 0x10);
      if (*(int *)(local_4e0 + 0x870) == 4) {
        local_560 = (long *)*local_520;
        plVar27 = (long *)local_520[1];
        if (plVar27 != (long *)0x0) {
          LOCK();
          plVar27[1] = plVar27[1] + 1;
          UNLOCK();
        }
        local_500 = 0;
        local_558 = plVar27;
        if (local_560 == (long *)0x0) {
          uVar22 = FUN_1001cc310();
          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
          cVar15 = _os_log_type_enabled(uVar22,0x10);
          if (cVar15 != '\0') {
            local_4d8 = 0x8220202;
            uStack_4d4 = 0x7a0a90;
            uStack_4d0 = 1;
            uStack_4cc = 0x822;
            uStack_4ca = 0x88dd;
            uStack_4c8 = 0x7b;
            uStack_4c6 = 1;
            uStack_4c4 = 0;
            __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",&local_4d8,0x16);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          uVar26 = 0xffffffce;
          FUN_1001782e9(0,0);
        }
        else {
          uVar24 = (**(code **)(*local_560 + 0x28))(local_560,0x104,&local_500,0,0);
          uVar26 = uVar24 & 0xffffffff;
          if ((int)uVar24 != -0x80) {
            if ((int)uVar24 == 0) {
              lVar23 = FUN_1005d3da4(local_500,0);
              if (lVar23 == 0) {
                uVar22 = FUN_1001cc310();
                uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                cVar15 = _os_log_type_enabled(uVar22,0x10);
                if (cVar15 != '\0') {
                  local_4d8 = 0x8220202;
                  uStack_4d4 = 0x7a0a90;
                  uStack_4d0 = 1;
                  uStack_4cc = 0x822;
                  uStack_4ca = 0x88fb;
                  uStack_4c8 = 0x7b;
                  uStack_4c6 = 1;
                  uStack_4c4 = 0;
                  __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",&local_4d8,
                                      0x16);
                }
                (*(code *)PTR__objc_release_10082c7b0)(uVar22);
                uVar26 = 0xffffffce;
                FUN_1001782e9(0,0);
              }
              else {
                FUN_1005d300f(&local_4d8,lVar23);
                FUN_100194d94(&local_58,&local_4d8,lVar21 + 0x18,0x200,0);
                *(ulong *)(lVar21 + 0x48) =
                     CONCAT26(uStack_42,CONCAT24(uStack_44,CONCAT22(uStack_46,uStack_48)));
                *(ulong *)(lVar21 + 0x50) = CONCAT44(uStack_3c,uStack_40);
                *(ulong *)(lVar21 + 0x38) = CONCAT44(uStack_54,local_58);
                *(ulong *)(lVar21 + 0x40) = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
                uVar30 = CONCAT22(uStack_46,uStack_48);
                iVar17 = local_58;
                uVar29 = uStack_50;
                _CGRectOffset((uint)*(undefined8 *)(lVar21 + 0x38) ^ _DAT_100700b30,
                              (uint)*(undefined8 *)(lVar21 + 0x40) ^ _DAT_100700b30,&local_4d8);
                puVar2 = (undefined4 *)(lVar21 + 0x38);
                *(uint *)(lVar21 + 0x48) = CONCAT22(uStack_4c6,uStack_4c8);
                *(uint *)(lVar21 + 0x4c) = CONCAT22(uStack_4c2,uStack_4c4);
                *(undefined4 *)(lVar21 + 0x50) = uStack_4c0;
                *(undefined4 *)(lVar21 + 0x54) = uStack_4bc;
                *puVar2 = local_4d8;
                *(undefined4 *)(lVar21 + 0x3c) = uStack_4d4;
                *(undefined4 *)(lVar21 + 0x40) = uStack_4d0;
                *(uint *)(lVar21 + 0x44) = CONCAT22(uStack_4ca,uStack_4cc);
                plVar27 = (long *)(lVar21 + 8);
                if (*(long *)(lVar21 + 8) != 0) {
                  FUN_1002188e4(plVar27);
                }
                FUN_1001a75cc((int)DAT_100700458,&local_4d8,lVar21 + 0x48,0,1,1,0,iVar17,uVar29,
                              uVar30,uStack_40);
                FUN_100217418(plVar27,&local_4d8);
                plVar3 = (long *)CONCAT26(uStack_4ca,CONCAT24(uStack_4cc,uStack_4d0));
                if (plVar3 != (long *)0x0) {
                  LOCK();
                  plVar1 = plVar3 + 1;
                  lVar6 = *plVar1;
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (lVar6 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                    std::__shared_weak_count::__release_weak();
                  }
                }
                if (*plVar27 == 0) {
                  uVar22 = FUN_1001cc310();
                  uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                  cVar15 = _os_log_type_enabled(uVar22,0x10);
                  if (cVar15 != '\0') {
                    local_4d8 = 0x8220202;
                    uStack_4d4 = 0x7a0a90;
                    uStack_4d0 = 1;
                    uStack_4cc = 0x822;
                    uStack_4ca = 0x27ba;
                    uStack_4c8 = 0x7b;
                    uStack_4c6 = 1;
                    uStack_4c4 = 0;
                    __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",
                                        &local_4d8,0x16);
                  }
                  (*(code *)PTR__objc_release_10082c7b0)(uVar22);
                  uVar26 = 0x237c;
                  FUN_1001782e9(0,0);
                }
                else {
                  FUN_1001a772a();
                  local_78 = *(undefined4 *)plVar27;
                  uStack_74 = *(undefined4 *)(lVar21 + 0xc);
                  uStack_70 = *(undefined4 *)(lVar21 + 0x10);
                  uStack_6c = (undefined2)*(undefined4 *)(lVar21 + 0x14);
                  uStack_6a = (undefined2)((uint)*(undefined4 *)(lVar21 + 0x14) >> 0x10);
                  if (*(long *)(lVar21 + 0x10) != 0) {
                    LOCK();
                    plVar3 = (long *)(*(long *)(lVar21 + 0x10) + 8);
                    *plVar3 = *plVar3 + 1;
                    UNLOCK();
                  }
                  FUN_1005d2b02(&local_4d8,lVar23,puVar2,&local_78,0x200);
                  *(uint *)(lVar21 + 0x48) = CONCAT22(uStack_4c6,uStack_4c8);
                  *(uint *)(lVar21 + 0x4c) = CONCAT22(uStack_4c2,uStack_4c4);
                  *(undefined4 *)(lVar21 + 0x50) = uStack_4c0;
                  *(undefined4 *)(lVar21 + 0x54) = uStack_4bc;
                  *puVar2 = local_4d8;
                  *(undefined4 *)(lVar21 + 0x3c) = uStack_4d4;
                  *(undefined4 *)(lVar21 + 0x40) = uStack_4d0;
                  *(uint *)(lVar21 + 0x44) = CONCAT22(uStack_4ca,uStack_4cc);
                  plVar3 = (long *)CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70));
                  if (plVar3 != (long *)0x0) {
                    LOCK();
                    plVar1 = plVar3 + 1;
                    lVar23 = *plVar1;
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (lVar23 == 0) {
                      (**(code **)(*plVar3 + 0x10))(plVar3);
                      std::__shared_weak_count::__release_weak();
                    }
                  }
                  FUN_1001a76fc(*plVar27,0xff);
                  uVar24 = FUN_10023ac28(lVar21,local_4f8);
                  uVar26 = uVar24 & 0xffffffff;
                  if (((int)uVar24 != -0x80) && ((int)uVar24 != 0)) {
                    uVar22 = FUN_1001cc310();
                    uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                    cVar15 = _os_log_type_enabled(uVar22,0x10);
                    if (cVar15 != '\0') {
                      uStack_4ca = (undefined2)uVar24;
                      uStack_4c8 = (undefined2)(uVar24 >> 0x10);
                      goto LAB_1002a6ee4;
                    }
                    goto LAB_1002a65d6;
                  }
                }
              }
            }
            else {
              uVar22 = FUN_1001cc310();
              uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
              cVar15 = _os_log_type_enabled(uVar22,0x10);
              if (cVar15 != '\0') {
                uStack_4ca = (undefined2)uVar24;
                uStack_4c8 = (undefined2)(uVar24 >> 0x10);
LAB_1002a6ee4:
                uStack_4cc = 0x400;
                uStack_4d0 = 1;
                uStack_4d4 = 0x7a0a90;
                local_4d8 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: err == (%d)",&local_4d8,
                                    0x12);
              }
LAB_1002a65d6:
              (*(code *)PTR__objc_release_10082c7b0)(uVar22);
            }
          }
          plVar27 = local_558;
          if (local_500 != 0) {
            piVar28 = (int *)(local_500 + 4);
            *piVar28 = *piVar28 + -1;
            if (*piVar28 == 0) {
              FUN_1005d3cba();
              plVar27 = local_558;
            }
          }
        }
      }
      else {
        local_548 = *(undefined4 *)(local_4e0 + 0x860);
        uStack_544 = *(undefined4 *)(local_4e0 + 0x864);
        uStack_540 = *(undefined4 *)(local_4e0 + 0x868);
        uStack_53c = *(undefined4 *)(local_4e0 + 0x86c);
        if (*(long *)(local_4e0 + 0x868) != 0) {
          LOCK();
          plVar27 = (long *)(*(long *)(local_4e0 + 0x868) + 8);
          *plVar27 = *plVar27 + 1;
          UNLOCK();
        }
        uVar7 = *(undefined1 *)(local_4e0 + 0xd14);
        FUN_1001964c8(local_590,local_4e0 + 0xd20);
        uVar20 = FUN_10023d282(lVar21,&local_548,uVar7,local_590,local_4f8,
                               *(int *)(lVar23 + 0x870) == 5);
        uVar26 = (ulong)uVar20;
        FUN_1001966e2(local_590);
        plVar27 = (long *)CONCAT44(uStack_53c,uStack_540);
      }
      uVar20 = (uint)uVar26;
      if (plVar27 != (long *)0x0) {
        LOCK();
        plVar3 = plVar27 + 1;
        lVar21 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar21 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (uVar20 == 0xfffff7ce) {
        *(undefined1 *)(local_4e0 + 0xcf8) = 1;
        **(undefined1 **)(local_4f0 + 0x68) = 1;
        uVar20 = 0xfffff7ce;
      }
      else {
        if (uVar20 == 0xffffff80) goto LAB_1002a5ee3;
        if (uVar20 != 0) {
          uVar22 = FUN_1001cc310();
          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
          cVar15 = _os_log_type_enabled(uVar22,0x10);
          if (cVar15 != '\0') {
            local_4d8 = 0x8220202;
            uStack_4d4 = 0x7a0a90;
            uStack_4d0 = 1;
            uStack_4cc = 0x822;
            uStack_4ca = 0x8333;
            uStack_4c8 = 0x7b;
            uStack_4c6 = 1;
            uStack_4c4 = 0;
            __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",&local_4d8,0x16);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          FUN_1001782e9(0,0);
          if (uVar20 == 0xffffff80) goto LAB_1002a5ee3;
          if (uVar20 != 0) goto LAB_1002a6b3d;
        }
        local_4f8 = local_4e0 + 0x886;
        if (*(int *)(*(long *)(local_4f0 + 0x10) + 0x84) == 0) {
          local_4e4 = 0;
        }
        else {
          uVar26 = 0;
          lVar21 = 0x90;
          local_4e4 = 0;
          local_520 = (long *)((ulong)local_520 & 0xffffffff00000000);
          do {
            cVar15 = FUN_10015fa28(local_4f8,uVar26 & 0xffffffff);
            if (cVar15 != '\0') {
              lVar23 = *(long *)(local_4f0 + 0x10);
              iVar17 = *(int *)(lVar23 + 0x4c + lVar21);
              if ((iVar17 == 0x706e6720) || (iVar17 == 0x6a706567)) {
                iVar17 = *(int *)(lVar23 + 0xc + lVar21);
                if (iVar17 == 0) {
                  uVar22 = FUN_1001cc310();
                  uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                  cVar15 = _os_log_type_enabled(uVar22,0x10);
                  if (cVar15 != '\0') {
                    local_4d8 = 0x8220202;
                    uStack_4d4 = 0x7a0a90;
                    uStack_4d0 = 1;
                    uStack_4cc = 0x822;
                    uStack_4ca = 0x890e;
                    uStack_4c8 = 0x7b;
                    uStack_4c6 = 1;
                    uStack_4c4 = 0;
                    __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",
                                        &local_4d8,0x16);
                  }
                  (*(code *)PTR__objc_release_10082c7b0)(uVar22);
                  FUN_1001782e9(0,0);
                  iVar17 = *(int *)(lVar23 + 0xc + lVar21);
                }
                piVar28 = (int *)(uVar26 * 0xe0 + lVar23 + 0x9c);
                *(int *)(*(long *)(local_4e0 + 0xcc8) + ((ulong)local_520 & 0xffffffff) * 4) =
                     iVar17;
                local_520 = (long *)CONCAT44(local_520._4_4_,(int)local_520 + 1);
              }
              else {
                piVar28 = (int *)(lVar21 + lVar23 + 0x18);
                iVar17 = *piVar28;
                if (iVar17 == 0) {
                  uVar22 = FUN_1001cc310();
                  uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                  cVar15 = _os_log_type_enabled(uVar22,0x10);
                  if (cVar15 != '\0') {
                    local_4d8 = 0x8220202;
                    uStack_4d4 = 0x7a0a90;
                    uStack_4d0 = 1;
                    uStack_4cc = 0x822;
                    uStack_4ca = 0x892f;
                    uStack_4c8 = 0x7b;
                    uStack_4c6 = 1;
                    uStack_4c4 = 0;
                    __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",
                                        &local_4d8,0x16);
                  }
                  (*(code *)PTR__objc_release_10082c7b0)(uVar22);
                  FUN_1001782e9(0,0);
                  iVar17 = *piVar28;
                }
                if (iVar17 != ((int)*(short *)(lVar23 + 4 + lVar21) -
                              (int)*(short *)(lVar23 + lVar21)) * *(int *)(lVar23 + 8 + lVar21)) {
                  uVar22 = FUN_1001cc310();
                  uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                  cVar15 = _os_log_type_enabled(uVar22,0x10);
                  if (cVar15 != '\0') {
                    local_4d8 = 0x8220202;
                    uStack_4d4 = 0x7a0a90;
                    uStack_4d0 = 1;
                    uStack_4cc = 0x822;
                    uStack_4ca = 0x8955;
                    uStack_4c8 = 0x7b;
                    uStack_4c6 = 1;
                    uStack_4c4 = 0;
                    __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",
                                        &local_4d8,0x16);
                  }
                  (*(code *)PTR__objc_release_10082c7b0)(uVar22);
                  FUN_1001782e9(0,0);
                }
              }
              iVar17 = *piVar28;
              lVar23 = *(long *)(lVar23 + 0x10 + lVar21);
              if (lVar23 == 0) {
                uVar22 = FUN_1001cc310();
                uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                cVar15 = _os_log_type_enabled(uVar22,0x10);
                if (cVar15 != '\0') {
                  local_4d8 = 0x8220202;
                  uStack_4d4 = 0x7a0a90;
                  uStack_4d0 = 1;
                  uStack_4cc = 0x822;
                  uStack_4ca = 0x89f9;
                  uStack_4c8 = 0x7b;
                  uStack_4c6 = 1;
                  uStack_4c4 = 0;
                  __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",&local_4d8,
                                      0x16);
                }
                (*(code *)PTR__objc_release_10082c7b0)(uVar22);
                FUN_1001782e9(0,0);
              }
              FUN_1001c631b(lVar23,(ulong)local_4e4 + *(long *)(local_4f0 + 0x18),iVar17);
              *(uint *)(*(long *)(local_4e0 + 0xcd0) + uVar26 * 4) = local_4e4;
              local_4e4 = (iVar17 + 3U & 0xfffffffc) + local_4e4;
            }
            uVar26 = uVar26 + 1;
            lVar21 = lVar21 + 0xe0;
          } while (uVar26 < *(uint *)(*(long *)(local_4f0 + 0x10) + 0x84));
        }
        uVar20 = FUN_10017ffd2(local_4e0 + 0x890,*(undefined8 *)(local_4f0 + 0x18),local_4e4,4,0,
                               &local_58);
        if (uVar20 != 0xffffff80) {
          if (uVar20 != 0) {
            uVar22 = FUN_1001cc310();
            uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
            cVar15 = _os_log_type_enabled(uVar22,0x10);
            if (cVar15 != '\0') {
              local_4d8 = 0x8220202;
              uStack_4d4 = 0x7a0a90;
              uStack_4d0 = 1;
              uStack_4cc = 0x400;
              uStack_4ca = (undefined2)uVar20;
              uStack_4c8 = (undefined2)(uVar20 >> 0x10);
              __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: err == (%d)",&local_4d8,0x12)
              ;
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar22);
            if (uVar20 != 0) goto LAB_1002a5ed1;
          }
          if (*(int *)(*(long *)(local_4f0 + 0x10) + 0x84) != 0) {
            lVar21 = 0x16;
            lVar23 = 0;
            uVar26 = 0;
            do {
              cVar15 = FUN_10015fa28(local_4f8,uVar26 & 0xffffffff);
              if (cVar15 != '\0') {
                lVar6 = *(long *)(local_4e0 + 0xcd8);
                puVar2 = (undefined4 *)(*(long *)(local_4f0 + 0x10) + lVar21 * 8);
                uVar30 = *puVar2;
                uVar29 = puVar2[1];
                uVar8 = puVar2[2];
                uVar9 = puVar2[3];
                puVar4 = (undefined8 *)(*(long *)(local_4f0 + 0x10) + 0x10 + lVar21 * 8);
                uVar22 = puVar4[1];
                puVar5 = (undefined8 *)(lVar6 + 0x10 + lVar23);
                *puVar5 = *puVar4;
                puVar5[1] = uVar22;
                puVar2 = (undefined4 *)(lVar6 + lVar23);
                *puVar2 = uVar30;
                puVar2[1] = uVar29;
                puVar2[2] = uVar8;
                puVar2[3] = uVar9;
                piVar28 = (int *)(*(long *)(local_4e0 + 0xcd0) + uVar26 * 4);
                *piVar28 = *piVar28 + local_58;
              }
              uVar26 = uVar26 + 1;
              lVar23 = lVar23 + 0x20;
              lVar21 = lVar21 + 0x1c;
            } while (uVar26 < *(uint *)(*(long *)(local_4f0 + 0x10) + 0x84));
          }
          goto LAB_1002a5ec0;
        }
      }
    }
    else {
      local_78 = 0;
      uStack_74 = 0;
      uVar20 = FUN_100187cb2(lVar21,&local_4d8);
      if (uVar20 == 0xffffff80) {
        lVar21 = 0;
      }
      else if (uVar20 == 0) {
        lVar21 = FUN_1001656af(DAT_1008c4d90,&local_4d8,
                               *(undefined8 *)PTR__kCFAllocatorNull_10082e028);
        if (lVar21 == 0) {
          uVar22 = FUN_1001cc310();
          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
          cVar15 = _os_log_type_enabled(uVar22,0x10);
          if (cVar15 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0x8882;
            uStack_48 = 0x7b;
            uStack_46 = 1;
            uStack_44 = 0;
            __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          lVar21 = 0;
          FUN_1001782e9(0,0);
          uVar20 = 0xffffff94;
        }
        else {
          lVar23 = _CGImageSourceGetTypeWithExtension(lVar21);
          if (lVar23 == 0) {
            uVar22 = FUN_1001cc310();
            uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
            cVar15 = _os_log_type_enabled(uVar22,0x10);
            if (cVar15 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4c = 0x822;
              uStack_4a = 0x889f;
              uStack_48 = 0x7b;
              uStack_46 = 1;
              uStack_44 = 0;
              __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar22);
            uVar20 = 0x2345;
            FUN_1001782e9(0,0);
          }
          else {
            uVar20 = FUN_100196db7(*(undefined8 *)(local_4e0 + 0x858),lVar23,0x1000,
                                   *(undefined8 *)PTR__kUTTypeTIFF_10082e570,&local_78);
            if (uVar20 != 0xffffff80) {
              if (uVar20 != 0) {
                uVar22 = FUN_1001cc310();
                uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                cVar15 = _os_log_type_enabled(uVar22,0x10);
                if (cVar15 != '\0') {
                  local_58 = 0x8220202;
                  uStack_54 = 0x7a0a90;
                  uStack_50 = 1;
                  uStack_4c = 0x400;
                  uStack_4a = (undefined2)uVar20;
                  uStack_48 = (undefined2)(uVar20 >> 0x10);
                  __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
                goto LAB_1002a6132;
              }
              FUN_10017060f(*(undefined8 *)(local_4e0 + 0x858));
              *(ulong *)(local_4e0 + 0x858) = CONCAT44(uStack_74,local_78);
              FUN_1001b52da(&local_58,CONCAT44(uStack_74,local_78),0);
              plVar27 = (long *)(local_4e0 + 0x860);
              FUN_100217418(plVar27,&local_58);
              plVar3 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
              if (plVar3 != (long *)0x0) {
                LOCK();
                plVar1 = plVar3 + 1;
                lVar23 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar23 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                  std::__shared_weak_count::__release_weak();
                }
              }
              uVar20 = 0;
              if (*plVar27 == 0) {
                uVar22 = FUN_1001cc310();
                uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
                cVar15 = _os_log_type_enabled(uVar22,0x10);
                if (cVar15 != '\0') {
                  local_58 = 0x8220202;
                  uStack_54 = 0x7a0a90;
                  uStack_50 = 1;
                  uStack_4c = 0x822;
                  uStack_4a = 34999;
                  uStack_48 = 0x7b;
                  uStack_46 = 1;
                  uStack_44 = 0;
                  __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                (*(code *)PTR__objc_release_10082c7b0)(uVar22);
                uVar20 = 0xffffff94;
                FUN_1001782e9(0,0);
              }
            }
          }
        }
      }
      else {
        uVar22 = FUN_1001cc310();
        uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
        cVar15 = _os_log_type_enabled(uVar22,0x10);
        if (cVar15 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x400;
          uStack_4a = (undefined2)uVar20;
          uStack_48 = (undefined2)(uVar20 >> 0x10);
          __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        lVar21 = 0;
LAB_1002a6132:
        (*(code *)PTR__objc_release_10082c7b0)(uVar22);
      }
      FUN_10017060f(lVar21);
      if (uVar20 != 0xffffff80) {
        if (uVar20 == 0) {
          *(undefined1 *)(local_4e0 + 0xd14) = 0;
          goto LAB_1002a61e5;
        }
        uVar22 = FUN_1001cc310();
        uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
        cVar15 = _os_log_type_enabled(uVar22,0x10);
        if (cVar15 != '\0') {
          local_4d8 = 0x8220202;
          uStack_4d4 = 0x7a0a90;
          uStack_4d0 = 1;
          uStack_4cc = 0x400;
          uStack_4ca = (undefined2)uVar20;
          uStack_4c8 = (undefined2)(uVar20 >> 0x10);
          __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: err == (%d)",&local_4d8,0x12);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar22);
LAB_1002a6b3d:
        if ((uVar20 == 0xffffff94) || (uVar20 == 0xffffffde)) goto LAB_1002a5ed1;
      }
      *(undefined1 *)(local_4e0 + 0xcfa) = 4;
    }
  }
  else {
LAB_1002a5ec0:
    *(undefined1 *)(local_4e0 + 0xcfa) = 0;
    uVar20 = 0;
  }
LAB_1002a5ed1:
  uVar19 = 0;
  if (uVar20 == 0xffffff94) {
    uVar19 = 0xffffff94;
  }
  uVar26 = (ulong)uVar20;
  if (uVar20 != 0xffffffde) {
    uVar26 = (ulong)uVar19;
  }
LAB_1002a5ee3:
  _objc_autoreleasePoolPop(local_550);
  lVar21 = local_4e0;
  FUN_1002188e4(local_4e0 + 0x860);
  FUN_10017060f(*(undefined8 *)(lVar21 + 0x858));
  *(undefined8 *)(local_4e0 + 0x858) = 0;
  if (plStack_570 != (long *)0x0) {
    LOCK();
    plVar27 = plStack_570 + 1;
    lVar21 = *plVar27;
    *plVar27 = *plVar27 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      (**(code **)(*plStack_570 + 0x10))(plStack_570);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar26;
}

