// name: FUN_1005906cb
// address: 1005906cb

int FUN_1005906cb(long param_1,int *param_2,uint param_3,uint param_4,long param_5,long param_6,
                 uint param_7,uint param_8,uint param_9,undefined4 *param_10,uint param_11,
                 long param_12)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  char *pcVar18;
  ulong uVar19;
  char *pcVar20;
  int *piVar21;
  undefined8 *local_a18;
  undefined1 *local_a10;
  undefined4 local_a00;
  undefined4 *local_9e8;
  ulong local_9e0;
  undefined8 local_9d8;
  uint local_9d0;
  uint local_9cc;
  long local_9c8;
  undefined8 *local_9c0;
  int local_9b8;
  uint local_9b4;
  undefined8 *local_9b0;
  undefined8 *local_9a8;
  int *local_9a0;
  undefined4 local_998;
  char *local_994;
  undefined2 local_98c;
  char *local_98a;
  undefined1 local_798 [64];
  undefined8 local_758 [32];
  undefined8 local_658;
  short local_650;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  ulong local_438;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_9d0 = param_4;
  if ((param_1 == 0) || (cVar10 = FUN_100495380(*(undefined8 *)(param_1 + 0x10)), cVar10 == '\0')) {
    uVar16 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar16,0x10);
    if (cVar10 != '\0') {
      local_44a = "ITImageInfoIsValid(imageInfo)";
LAB_1005908f4:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
  }
  else if (param_2 == (int *)0x0) {
    uVar16 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar16,0x10);
    if (cVar10 != '\0') {
      local_44a = "formatDesc != nullptr";
      goto LAB_1005908f4;
    }
  }
  else if (param_5 == 0) {
    uVar16 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar16,0x10);
    if (cVar10 != '\0') {
      local_44a = "thumbFolderSpec != nullptr";
      goto LAB_1005908f4;
    }
  }
  else if (param_6 == 0) {
    uVar16 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar16,0x10);
    if (cVar10 != '\0') {
      local_44a = "thumbData != nullptr";
      goto LAB_1005908f4;
    }
  }
  else if (param_7 == 0) {
    uVar16 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar16,0x10);
    if (cVar10 != '\0') {
      local_44a = "thumbDataLogicalSize != 0";
      goto LAB_1005908f4;
    }
  }
  else {
    local_9cc = param_3;
    if (param_8 == 0) {
      uVar16 = FUN_1001cc310();
      cVar10 = _os_log_type_enabled(uVar16,0x10);
      if (cVar10 != '\0') {
        local_44a = "thumbDataPhysicalSize != 0";
        goto LAB_1005908f4;
      }
    }
    else if (param_10 == (undefined4 *)0x0) {
      uVar16 = FUN_1001cc310();
      cVar10 = _os_log_type_enabled(uVar16,0x10);
      if (cVar10 != '\0') {
        local_44a = "thumbRect != nullptr";
        goto LAB_1005908f4;
      }
    }
    else {
      if (param_12 == 0 || param_11 == 0) {
        local_9c8 = *(long *)(param_1 + 0x10);
        iVar11 = *param_2;
        local_9a0 = param_2;
        puVar14 = (undefined8 *)FUN_100495ce0();
        piVar21 = local_9a0;
        for (; puVar14 != (undefined8 *)0x0; puVar14 = (undefined8 *)*puVar14) {
          if (*(int *)(puVar14 + 2) == iVar11) goto LAB_100590a91;
        }
        puVar14 = (undefined8 *)FUN_100499673(local_9c8,*local_9a0);
        if (puVar14 == (undefined8 *)0x0) {
          uVar16 = FUN_1001cc310();
          cVar10 = _os_log_type_enabled(uVar16,0x10);
          if (cVar10 != '\0') {
            local_458 = 0x8220202;
            local_454 = "Assertion failure";
            local_44c = 0x822;
            local_44a = "formatInfo != nullptr";
            __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          FUN_1001782e9(0,0);
          iVar11 = -0x6c;
          goto LAB_1005907d4;
        }
LAB_100590a91:
        local_9b4 = param_8;
        if (param_9 == 0) {
          param_9 = param_7;
        }
        local_9a8 = puVar14;
        if (*(uint *)((long)puVar14 + 0x14) != param_9 && *(uint *)((long)puVar14 + 0x14) != 0) {
          local_9c0 = (undefined8 *)FUN_1001cc310();
          cVar10 = _os_log_type_enabled(local_9c0,0x10);
          if (cVar10 != '\0') {
            local_458 = 0x8220202;
            local_454 = "Assertion failure";
            local_44c = 0x822;
            local_44a = 
            "formatInfo->imageDataSize == 0 || formatInfo->imageDataSize == imageDataSize";
            __os_log_error_impl(0x100000000,local_9c0,0x10,"%{public}s: (%{public}s)",&local_458,
                                0x16);
          }
          FUN_1001782e9(0,0);
        }
        puVar14 = local_9a8;
        *(uint *)((long)local_9a8 + 0x14) = param_9;
        if ((char)piVar21[3] != '\0') {
          local_9b4 = param_7;
        }
        iVar11 = *piVar21;
        if (iVar11 == 5 || iVar11 - 900U < 100) {
          puVar15 = (undefined8 *)FUN_1004993b9(param_1,iVar11,(undefined2)local_9d0);
        }
        else {
          puVar15 = (undefined8 *)FUN_1004993ef(param_1,iVar11,local_9cc,1);
        }
        if (puVar15 == (undefined8 *)0x0) {
LAB_100590daf:
          local_9b0 = puVar14 + 0x92;
          cVar10 = FUN_100161f0e();
          puVar15 = local_9b0;
          if (((cVar10 == '\0') || (*(ulong *)(local_9c8 + 0x1440) <= (ulong)puVar14[0x91])) ||
             ((char)piVar21[3] != '\0')) {
            cVar10 = FUN_100161f0e(local_9b0);
            if (cVar10 != '\0') {
              FUN_100160cb6(puVar15,puVar14[0x91]);
              FUN_10016013b(puVar15);
            }
            piVar21 = local_9a0;
            puVar14[0x91] = 0;
            *(undefined2 *)(puVar14 + 0x9b) = 0;
            *(undefined4 *)(puVar14 + 0x19b) = 0;
            if ((char)local_9a0[3] == '\0') {
              local_9c0 = puVar14 + 0xd;
              iVar11 = 1;
              while( true ) {
                FUN_1001e04f5("F%1_%1.ithmb",&local_658);
                FUN_1001e5722(&local_658,&local_658,*(undefined4 *)(local_9a8 + 2));
                FUN_1001e5722(&local_658,&local_658,iVar11);
                iVar13 = FUN_10017ecc9(param_5,&local_658,local_9c0,&local_458);
                puVar15 = local_9c0;
                if (iVar13 != 0) break;
                if (local_438 < *(ulong *)(local_9c8 + 0x1440)) {
                  local_9a8[0x91] = local_438;
                  puVar14 = local_9a8;
                  goto LAB_1005910db;
                }
                iVar11 = iVar11 + 1;
              }
              iVar11 = FUN_1001891ea(param_5,&local_658,local_9c0);
              puVar14 = local_9a8;
              piVar21 = local_9a0;
              if (iVar11 == 0) {
                FUN_100189139(puVar15,0x70707);
LAB_1005910db:
                iVar11 = 0;
                piVar21 = local_9a0;
              }
            }
            else {
              uVar12 = FUN_1001ebdc3();
              _sprintf((char *)local_758,"F%02u",(ulong)(uVar12 % 0x32));
              iVar11 = FUN_1001888ba(param_5,local_758,&local_458,0);
              if ((iVar11 == 0) ||
                 (iVar11 = FUN_100188cfe(param_5,local_758,&local_458), puVar14 = local_9a8,
                 iVar11 == 0)) {
                local_658._0_2_ = 4;
                uVar12 = FUN_1001ebdc3();
                local_658._2_2_ =
                     ((short)uVar12 - ((short)(uVar12 / 0x1a) * 0x19 + (short)(uVar12 / 0x1a))) +
                     0x41;
                uVar12 = FUN_1001ebdc3();
                local_658._4_2_ =
                     ((short)uVar12 - ((short)(uVar12 / 0x1a) * 0x19 + (short)(uVar12 / 0x1a))) +
                     0x41;
                uVar12 = FUN_1001ebdc3();
                local_658._6_2_ =
                     ((short)uVar12 - ((short)(uVar12 / 0x1a) * 0x19 + (short)(uVar12 / 0x1a))) +
                     0x41;
                uVar12 = FUN_1001ebdc3();
                local_650 = ((short)uVar12 -
                            ((short)(uVar12 / 0x1a) * 0x19 + (short)(uVar12 / 0x1a))) + 0x41;
                pcVar18 = "ithmb";
                if (piVar21[5] == 0x706e6720) {
                  pcVar18 = "png";
                }
                pcVar20 = "jpg";
                if (piVar21[5] != 0x6a706567) {
                  pcVar20 = pcVar18;
                }
                FUN_1001e04f5(pcVar20,local_798);
                FUN_1001c62d9(&local_a18,0x38);
                local_a18 = &local_658;
                local_a00 = 0x1f;
                local_9e8 = &local_998;
                local_a10 = local_798;
                iVar11 = FUN_10018166a(&local_458,&local_a18);
                puVar14 = local_9a8;
                if (iVar11 == 0) {
                  puVar15 = local_9a8 + 0xd;
                  iVar11 = FUN_1001891ea(&local_458,&local_998,puVar15);
                  puVar14 = local_9a8;
                  if (iVar11 == 0) {
                    FUN_100189139(puVar15,0x70707);
                    iVar11 = 0;
                    puVar14 = local_9a8;
                  }
                }
              }
            }
            if (iVar11 != -0x80) {
              if (iVar11 == 0) {
                puVar15 = puVar14 + 0xd;
                iVar11 = FUN_10017dbe8(puVar15,local_9c8 + 0xb78,puVar14 + 0x9b,0x3ff,
                                       puVar14 + 0x19b);
                puVar14 = local_9a8;
                if (iVar11 != -0x80) {
                  if (iVar11 == 0) {
                    iVar11 = FUN_10015fff1(puVar15,local_9b0,1000000);
                    puVar14 = local_9a8;
                    if (iVar11 != -0x80) {
                      if (iVar11 == 0) {
                        if ((char)piVar21[3] == '\0') {
                          if (param_11 == 0) {
                            lVar17 = 0xa00000;
                            if (param_12 != 0) {
                              lVar17 = param_12;
                            }
                          }
                          else {
                            lVar17 = (ulong)*(uint *)((long)local_9a8 + 0x14) * (ulong)param_11;
                          }
                        }
                        else {
                          lVar17 = 0;
                        }
                        uVar19 = lVar17 + local_9a8[0x91];
                        if (*(ulong *)(local_9c8 + 0x1440) <= (ulong)(lVar17 + local_9a8[0x91])) {
                          uVar19 = *(ulong *)(local_9c8 + 0x1440);
                        }
                        iVar11 = FUN_100160d3e(local_9b0,1,uVar19,0);
                        if ((iVar11 != -0x80) && (iVar11 != 0)) {
                          uVar16 = FUN_1001cc310();
                          cVar10 = _os_log_type_enabled(uVar16,0x10);
                          if (cVar10 != '\0') {
                            local_458 = 0x8220202;
                            local_454 = "Assertion failure";
                            local_44c = 0x400;
                            local_44a = (char *)CONCAT44(local_44a._4_4_,iVar11);
                            __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",
                                                &local_458,0x12);
                          }
                        }
                        puVar14 = local_9a8;
                        iVar11 = FUN_100160772(local_9b0,local_9a8[0x91]);
                        if (iVar11 != -0x80) {
                          if (iVar11 == 0) goto LAB_100591485;
                          uVar16 = FUN_1001cc310();
                          cVar10 = _os_log_type_enabled(uVar16,0x10);
                          piVar21 = local_9a0;
                          if (cVar10 != '\0') {
                            local_44a = (char *)CONCAT44(local_44a._4_4_,iVar11);
                            goto LAB_1005916f8;
                          }
                        }
                      }
                      else {
                        uVar16 = FUN_1001cc310();
                        cVar10 = _os_log_type_enabled(uVar16,0x10);
                        piVar21 = local_9a0;
                        if (cVar10 != '\0') {
                          local_44a = (char *)CONCAT44(local_44a._4_4_,iVar11);
                          goto LAB_1005916f8;
                        }
                      }
                    }
                  }
                  else {
                    uVar16 = FUN_1001cc310();
                    cVar10 = _os_log_type_enabled(uVar16,0x10);
                    puVar14 = local_9a8;
                    piVar21 = local_9a0;
                    if (cVar10 != '\0') {
                      local_44a = (char *)CONCAT44(local_44a._4_4_,iVar11);
                      goto LAB_1005916f8;
                    }
                  }
                }
              }
              else {
                uVar16 = FUN_1001cc310();
                cVar10 = _os_log_type_enabled(uVar16,0x10);
                piVar21 = local_9a0;
                if (cVar10 != '\0') {
                  local_44a = (char *)CONCAT44(local_44a._4_4_,iVar11);
LAB_1005916f8:
                  local_44c = 0x400;
                  local_454 = "Assertion failure";
                  local_458 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",&local_458,
                                      0x12);
                  piVar21 = local_9a0;
                }
              }
            }
          }
          else {
LAB_100591485:
            iVar11 = *piVar21;
            uVar12 = local_9cc;
            if (iVar11 - 900U < 100) {
              uVar12 = local_9d0 & 0xffff;
            }
            if (iVar11 == 5) {
              uVar12 = local_9d0 & 0xffff;
            }
            lVar17 = FUN_100499159(param_1,iVar11,uVar12);
            puVar15 = local_9b0;
            if (lVar17 == 0) {
              uVar16 = FUN_1001cc310();
              cVar10 = _os_log_type_enabled(uVar16,0x10);
              if (cVar10 != '\0') {
                local_458 = 0x8220202;
                local_454 = "Assertion failure";
                local_44c = 0x822;
                local_44a = "imageInstance != nullptr";
                __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_458,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              iVar11 = -0x6c;
              piVar21 = local_9a0;
            }
            else {
              local_9e0 = (ulong)param_7;
              iVar11 = FUN_100160894(local_9b0,&local_9e0,param_6);
              piVar21 = local_9a0;
              if (iVar11 != -0x80) {
                if (iVar11 == 0) {
                  if (param_7 < local_9b4) {
                    iVar11 = FUN_100160bb2(puVar15);
                    piVar21 = local_9a0;
                    if (iVar11 != -0x80) {
                      if (iVar11 == 0) goto LAB_10059151a;
                      uVar16 = FUN_1001cc310();
                      cVar10 = _os_log_type_enabled(uVar16,0x10);
                      puVar14 = local_9a8;
                      piVar21 = local_9a0;
                      if (cVar10 == '\0') goto LAB_1005917e4;
                      local_44a = (char *)CONCAT44(local_44a._4_4_,iVar11);
LAB_100591946:
                      local_44c = 0x400;
                      local_454 = "Assertion failure";
                      local_458 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",
                                          &local_458,0x12);
                      puVar14 = local_9a8;
                      piVar21 = local_9a0;
                    }
                  }
                  else {
LAB_10059151a:
                    *(undefined4 *)(lVar17 + 0x38) = *(undefined4 *)(puVar14 + 0x91);
                    *(uint *)(lVar17 + 0x3c) = param_7;
                    *(uint *)(lVar17 + 0x40) = local_9b4;
                    uVar1 = param_10[1];
                    uVar2 = param_10[2];
                    uVar3 = param_10[3];
                    uVar4 = param_10[4];
                    uVar5 = param_10[5];
                    uVar6 = param_10[6];
                    uVar7 = param_10[7];
                    *(undefined4 *)(lVar17 + 0x18) = *param_10;
                    *(undefined4 *)(lVar17 + 0x1c) = uVar1;
                    *(undefined4 *)(lVar17 + 0x20) = uVar2;
                    *(undefined4 *)(lVar17 + 0x24) = uVar3;
                    *(undefined4 *)(lVar17 + 0x28) = uVar4;
                    *(undefined4 *)(lVar17 + 0x2c) = uVar5;
                    *(undefined4 *)(lVar17 + 0x30) = uVar6;
                    *(undefined4 *)(lVar17 + 0x34) = uVar7;
                    iVar11 = local_9a0[3];
                    *(char *)(lVar17 + 0x52) = (char)iVar11;
                    puVar14[0x91] = puVar14[0x91] + (ulong)local_9b4;
                    if ((char)iVar11 == '\0' && (local_9b4 & 3) != 0) {
                      uVar19 = (ulong)(4 - (local_9b4 & 3));
                      iVar11 = FUN_100160bb2(puVar15,uVar19);
                      puVar14 = local_9a8;
                      piVar21 = local_9a0;
                      if (iVar11 != -0x80) {
                        if (iVar11 == 0) {
                          local_9a8[0x91] = local_9a8[0x91] + uVar19;
                          goto LAB_1005915a8;
                        }
                        uVar16 = FUN_1001cc310();
                        cVar10 = _os_log_type_enabled(uVar16,0x10);
                        puVar14 = local_9a8;
                        piVar21 = local_9a0;
                        if (cVar10 != '\0') {
                          local_44a = (char *)CONCAT44(local_44a._4_4_,iVar11);
                          goto LAB_100591946;
                        }
                      }
                    }
                    else {
LAB_1005915a8:
                      iVar11 = FUN_10049a09d(lVar17,puVar14 + 0xd,puVar14 + 0x9b,
                                             *(undefined4 *)(puVar14 + 0x19b));
                      piVar21 = local_9a0;
                      if ((iVar11 != -0x80) && (puVar14 = local_9a8, iVar11 != 0)) {
                        uVar16 = FUN_1001cc310();
                        cVar10 = _os_log_type_enabled(uVar16,0x10);
                        puVar14 = local_9a8;
                        piVar21 = local_9a0;
                        if (cVar10 != '\0') {
                          local_44a = (char *)CONCAT44(local_44a._4_4_,iVar11);
                          goto LAB_100591946;
                        }
                      }
                    }
                  }
                }
                else {
                  uVar16 = FUN_1001cc310();
                  cVar10 = _os_log_type_enabled(uVar16,0x10);
                  piVar21 = local_9a0;
                  if (cVar10 != '\0') {
                    local_44a = (char *)CONCAT44(local_44a._4_4_,iVar11);
                    goto LAB_1005916f8;
                  }
                }
              }
            }
          }
        }
        else {
          local_9c0 = puVar15;
          if (*(uint *)((long)puVar15 + 0x3c) != param_7) {
            uVar16 = FUN_1001cc310();
            cVar10 = _os_log_type_enabled(uVar16,0x10);
            if (cVar10 != '\0') {
              local_458 = 0x8220202;
              local_454 = "Assertion failure";
              local_44c = 0x822;
              local_44a = "imageInstance->imageDataLogicalSize == thumbDataLogicalSize";
              __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_458,0x16
                                 );
            }
            FUN_1001782e9(0,0);
            puVar14 = local_9a8;
          }
          if ((*(uint *)(local_9c0 + 8) < local_9b4) && ((char)piVar21[3] == '\0')) {
LAB_100590daa:
            FUN_100497f5f(local_9c0);
            goto LAB_100590daf;
          }
          local_758[0] = 0;
          iVar11 = FUN_10049980b(local_9c0,&local_458,0);
          puVar14 = local_9a8;
          if (iVar11 == -0x80) goto LAB_100590daa;
          if (iVar11 != 0) {
            local_9b0 = (undefined8 *)FUN_1001cc310();
            cVar10 = _os_log_type_enabled(local_9b0,0x10);
            puVar14 = local_9a8;
            if (cVar10 != '\0') {
              local_98a = (char *)CONCAT44(local_98a._4_4_,iVar11);
LAB_10059179d:
              local_98c = 0x400;
              local_994 = "Assertion failure";
              local_998 = 0x8220202;
              __os_log_error_impl(0x100000000,local_9b0,0x10,"%{public}s: err == (%d)",&local_998,
                                  0x12);
              puVar14 = local_9a8;
            }
            goto LAB_100590daa;
          }
          local_9b0 = local_9a8 + 0x92;
          cVar10 = FUN_100161f0e();
          if ((cVar10 == '\0') || (cVar10 = FUN_10017f77e(puVar14 + 0xd,&local_458), cVar10 == '\0')
             ) {
            local_9b0 = &local_658;
            iVar11 = FUN_10015fff1(&local_458,local_9b0,1000000);
            bVar9 = true;
          }
          else {
            iVar11 = FUN_100160255(local_9b0,local_758);
            bVar9 = false;
          }
          if (iVar11 == 0) {
            local_9b8 = FUN_100160772(local_9b0,*(undefined4 *)(local_9c0 + 7));
            if (local_9b8 == 0) {
              local_9e0 = (ulong)param_7;
              local_9b8 = FUN_100160894(local_9b0,&local_9e0,param_6);
              if ((local_9b8 == 0) &&
                 ((local_9b4 <= param_7 || (local_9b8 = FUN_100160bb2(local_9b0), local_9b8 == 0))))
              {
                *(uint *)((long)local_9c0 + 0x3c) = param_7;
                uVar1 = param_10[1];
                uVar2 = param_10[2];
                uVar3 = param_10[3];
                uVar16 = *(undefined8 *)(param_10 + 4);
                uVar8 = *(undefined8 *)(param_10 + 6);
                *(undefined4 *)(local_9c0 + 3) = *param_10;
                *(undefined4 *)((long)local_9c0 + 0x1c) = uVar1;
                *(undefined4 *)(local_9c0 + 4) = uVar2;
                *(undefined4 *)((long)local_9c0 + 0x24) = uVar3;
                local_9c0[5] = uVar16;
                local_9c0[6] = uVar8;
                local_9b8 = 0;
              }
            }
            if (((char)piVar21[3] != '\0') &&
               (FUN_100160cb6(local_9b0,param_7), (char)piVar21[3] != '\0' && !bVar9)) {
              local_9d8 = FUN_1001cc310();
              cVar10 = _os_log_type_enabled(local_9d8,0x10);
              if (cVar10 != '\0') {
                local_998 = 0x8220202;
                local_994 = "Assertion failure";
                local_98c = 0x822;
                local_98a = "formatDesc->separateFileOnDevice == false || fileAlreadyOpen == false";
                __os_log_error_impl(0x100000000,local_9d8,0x10,"%{public}s: (%{public}s)",&local_998
                                    ,0x16);
              }
              FUN_1001782e9(0,0);
            }
            if (bVar9) {
              FUN_10016013b(local_9b0);
              iVar11 = local_9b8;
            }
            else {
              FUN_100160772(local_9b0,local_758[0]);
              iVar11 = local_9b8;
            }
          }
          puVar14 = local_9a8;
          if (iVar11 == -0x80) goto LAB_100590daa;
          if (iVar11 != 0) {
            local_9b0 = (undefined8 *)FUN_1001cc310();
            cVar10 = _os_log_type_enabled(local_9b0,0x10);
            puVar14 = local_9a8;
            if (cVar10 != '\0') {
              local_98a = (char *)CONCAT44(local_98a._4_4_,iVar11);
              goto LAB_10059179d;
            }
            goto LAB_100590daa;
          }
          iVar11 = 0;
        }
LAB_1005917e4:
        if ((char)piVar21[3] != '\0') {
          puVar15 = puVar14 + 0x92;
          cVar10 = FUN_100161f0e(puVar15);
          if (cVar10 != '\0') {
            FUN_100160cb6(puVar15,puVar14[0x91]);
            FUN_10016013b(puVar15);
          }
        }
        goto LAB_1005907d4;
      }
      uVar16 = FUN_1001cc310();
      cVar10 = _os_log_type_enabled(uVar16,0x10);
      if (cVar10 != '\0') {
        local_44a = "(remainingThumbs == 0) || (preAllocateBytes == 0)";
        goto LAB_1005908f4;
      }
    }
  }
  FUN_1001782e9(0,0);
  iVar11 = -0x32;
LAB_1005907d4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar11;
}

