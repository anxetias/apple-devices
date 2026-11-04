// name: FUN_10048cc55
// address: 10048cc55

undefined4 FUN_10048cc55(int *param_1,int param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined1 uVar9;
  byte bVar10;
  char cVar11;
  ushort uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined4 *puVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined8 uVar23;
  long *plVar24;
  undefined **ppuVar25;
  undefined4 uVar26;
  int iVar27;
  bool bVar28;
  bool bVar29;
  long *local_290;
  long local_288;
  long lStack_280;
  undefined *local_278;
  long *local_270;
  int iStack_264;
  undefined8 local_260;
  undefined **local_258;
  undefined *local_250;
  long lStack_248;
  undefined ***local_238;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar15 = 0;
  uVar26 = 0;
  if (0x706c6464 < param_2) {
    if (param_2 < 0x706c7072) {
      if (param_2 < 0x706c6563) {
        if (param_2 == 0x706c6465) {
          local_258 = &local_250;
          local_250 = (undefined *)0x0;
          lStack_248 = 0;
          local_290 = &local_288;
          local_288 = 0;
          lStack_280 = 0;
          for (lVar17 = FUN_100485529(param_1); lVar17 != 0; lVar17 = *(long *)(lVar17 + 0x18)) {
            lVar1 = *(long *)(lVar17 + 8);
            if ((*(byte *)(lVar1 + 0xc6) & 0x80) != 0) {
              if (param_1 == (int *)0x0) {
LAB_10048d073:
                uVar23 = FUN_1001cc310();
                cVar11 = _os_log_type_enabled(uVar23);
                if (cVar11 != '\0') {
                  local_4a = "PlaylistIsValid(inPlaylist)";
LAB_10048d127:
                  local_4c = 0x822;
                  local_54 = "Assertion failure";
                  local_58 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
              }
              else {
                if (*param_1 != 0x706c7374) {
                  uVar23 = FUN_1001cc310();
                  cVar11 = _os_log_type_enabled(uVar23,0x10);
                  if (cVar11 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure (expected to be true)";
                    local_4c = 0x822;
                    local_4a = "playlist->magic == \'plst\'";
                    __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",&local_58
                                        ,0x16);
                  }
                  cVar11 = FUN_1001782e9(0);
                  if (cVar11 == '\0') goto LAB_10048d073;
                }
                if (*(long *)(lVar1 + 0x10) == 0) {
                  uVar23 = FUN_1001cc310();
                  cVar11 = _os_log_type_enabled(uVar23);
                  if (cVar11 != '\0') {
                    local_4a = "TrackInfoIsValid(inTrackInfo)";
                    goto LAB_10048d127;
                  }
                }
                else {
                  puVar18 = *(undefined8 **)(lVar1 + 0x68);
                  if (puVar18 != (undefined8 *)0x0) {
                    do {
                      piVar2 = (int *)*puVar18;
                      if (piVar2 != param_1) {
                        if ((*(byte *)(piVar2 + 0xa6) & 1) == 0) {
                          if ((short)piVar2[4] != 0x3f) goto LAB_10048d159;
                        }
                        else if ((short)piVar2[4] == 0x3d) goto LAB_10048d159;
                      }
                      puVar18 = (undefined8 *)puVar18[10];
                    } while (puVar18 != (undefined8 *)0x0);
                    if (lVar1 == 0) {
                      uVar23 = FUN_1001cc310();
                      cVar11 = _os_log_type_enabled(uVar23,0x10);
                      if (cVar11 != '\0') {
                        local_58 = 0x8220202;
                        local_54 = "Assertion failure";
                        local_4c = 0x822;
                        local_4a = "TrackInfoIsValid(trackInfo)";
                        __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",
                                            &local_58,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                    else {
                      plVar19 = (long *)(lVar1 + 0x58);
                      do {
                        plVar19 = (long *)*plVar19;
                        if (plVar19 == (long *)0x0) goto LAB_10048d184;
                      } while (*(int *)((long)plVar19 + 0x3c) != 0x46494c45);
                      FUN_100493a16(&local_290,lVar1,lVar1);
                    }
LAB_10048d184:
                    FUN_100493a16(&local_258,lVar1,lVar1);
                    goto LAB_10048d159;
                  }
                  uVar23 = FUN_1001cc310();
                  cVar11 = _os_log_type_enabled(uVar23);
                  if (cVar11 != '\0') {
                    local_4a = "playlistItem != nullptr";
                    goto LAB_10048d127;
                  }
                }
              }
              FUN_1001782e9(0);
            }
LAB_10048d159:
          }
          if (lStack_280 != 0) {
            iVar13 = FUN_100594adc(&local_260,0);
            if (iVar13 == 0) {
              plVar19 = local_290;
              if (local_290 == &local_288) {
                iVar13 = 0;
              }
              else {
                do {
                  iVar13 = FUN_10059563f(local_260,plVar19[4],0);
                  if ((iVar13 != -0x80) && (iVar13 != 0)) {
                    uVar23 = FUN_1001cc310();
                    cVar11 = _os_log_type_enabled(uVar23,0x10);
                    if (cVar11 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar13);
                      __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: err == (%d)",
                                          &local_58,0x12);
                    }
                  }
                  plVar8 = (long *)plVar19[1];
                  plVar24 = plVar19;
                  if ((long *)plVar19[1] == (long *)0x0) {
                    do {
                      plVar19 = (long *)plVar24[2];
                      bVar29 = (long *)*plVar19 != plVar24;
                      plVar24 = plVar19;
                    } while (bVar29);
                  }
                  else {
                    do {
                      plVar19 = plVar8;
                      plVar8 = (long *)*plVar19;
                    } while ((long *)*plVar19 != (long *)0x0);
                  }
                } while (plVar19 != &local_288);
              }
              FUN_100595344(local_260);
            }
            if ((iVar13 != -0x80) && (iVar13 != 0)) {
              uVar23 = FUN_1001cc310();
              cVar11 = _os_log_type_enabled(uVar23,0x10);
              if (cVar11 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar13);
                __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: err == (%d)",&local_58,0x12
                                   );
              }
            }
          }
          if (lStack_248 != 0) {
            iVar13 = FUN_100594adc(&local_260,0);
            if (iVar13 == 0) {
              ppuVar21 = local_258;
              if (local_258 == &local_250) {
                iVar13 = 0;
              }
              else {
                do {
                  iVar13 = FUN_10059563f(local_260,ppuVar21[4],0);
                  if ((iVar13 != -0x80) && (iVar13 != 0)) {
                    uVar23 = FUN_1001cc310();
                    cVar11 = _os_log_type_enabled(uVar23,0x10);
                    if (cVar11 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar13);
                      __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: err == (%d)",
                                          &local_58,0x12);
                    }
                  }
                  ppuVar7 = (undefined **)ppuVar21[1];
                  ppuVar25 = ppuVar21;
                  if ((undefined **)ppuVar21[1] == (undefined **)0x0) {
                    do {
                      ppuVar21 = (undefined **)ppuVar25[2];
                      bVar29 = (undefined **)*ppuVar21 != ppuVar25;
                      ppuVar25 = ppuVar21;
                    } while (bVar29);
                  }
                  else {
                    do {
                      ppuVar21 = ppuVar7;
                      ppuVar7 = (undefined **)*ppuVar21;
                    } while ((undefined **)*ppuVar21 != (undefined **)0x0);
                  }
                } while (ppuVar21 != &local_250);
              }
              FUN_10031c065(*(undefined8 *)(param_1 + 2),local_260,1);
              *(byte *)((long)param_1 + 0x241) = *(byte *)((long)param_1 + 0x241) | 0x10;
              FUN_10031c5b6(*(undefined8 *)(param_1 + 2));
              *(byte *)((long)param_1 + 0x241) = *(byte *)((long)param_1 + 0x241) & 0xef;
              FUN_100595344(local_260);
            }
            if ((iVar13 != -0x80) && (iVar13 != 0)) {
              uVar23 = FUN_1001cc310();
              cVar11 = _os_log_type_enabled(uVar23,0x10);
              if (cVar11 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar13);
                __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: err == (%d)",&local_58,0x12
                                   );
              }
            }
          }
          FUN_100230408(local_288);
          FUN_100230408(local_250);
          FUN_10048dab4(param_1,1);
          uVar15 = uVar26;
          goto switchD_10048ccbd_caseD_706c6166;
        }
        if (param_2 == 0x706c646d) {
          if ((*(byte *)(param_1 + 0x90) & 4) != 0) {
            FUN_10048ae3c(param_1);
          }
          local_258 = &PTR_FUN_10085c580;
          local_238 = &local_258;
          FUN_100485677(param_1,&local_258);
          if (local_238 == &local_258) {
            lVar17 = 0x20;
          }
          else {
            lVar17 = 0x28;
            uVar15 = uVar26;
            if (local_238 == (undefined ***)0x0) goto switchD_10048ccbd_caseD_706c6166;
          }
          (**(code **)((long)*local_238 + lVar17))();
          uVar15 = uVar26;
          goto switchD_10048ccbd_caseD_706c6166;
        }
      }
      else {
        if (param_2 == 0x706c6563) goto switchD_10048ccbd_caseD_706c6169;
        if (param_2 == 0x706c6564) {
          FUN_100637d1a(*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10));
          uVar15 = uVar26;
          goto switchD_10048ccbd_caseD_706c6166;
        }
        if (param_2 == 0x706c6964) {
          FUN_100638966(*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0,1);
          uVar15 = 0;
          goto switchD_10048ccbd_caseD_706c6166;
        }
      }
    }
    else if (param_2 < 0x706c7274) {
      uVar15 = uVar26;
      if (param_2 == 0x706c7072) goto switchD_10048ccbd_caseD_706c6166;
      if (param_2 == 0x706c7269) {
        lVar17 = *(long *)(param_3 + 0x10);
        FUN_10048687f(lVar17,&local_258);
        uVar15 = 0;
        if ((**(short **)(param_3 + 0x18) != 0) &&
           (cVar11 = FUN_1001e3edc(&local_258,*(short **)(param_3 + 0x18),0x20), cVar11 == '\0')) {
          FUN_100314020(param_1);
          puVar20 = (undefined4 *)FUN_1001c6429(0x1660);
          if (puVar20 == (undefined4 *)0x0) {
            uVar15 = 0;
          }
          else {
            puVar20[1] = 0x1660;
            FUN_1001e1c39(*(undefined8 *)(param_3 + 0x18),puVar20 + 2);
            *puVar20 = 1;
            bVar10 = FUN_1001edfc7();
            uVar15 = FUN_100312870(*(undefined8 *)(lVar17 + 8),puVar20,0,0,(uint)bVar10 * 2 + 1,0,0,
                                   0);
            FUN_1001c64c1(puVar20);
          }
          FUN_1003142ca(param_1);
        }
        goto switchD_10048ccbd_caseD_706c6166;
      }
      if (param_2 == 0x706c726e) {
        FUN_1004872d8(param_1,*(undefined8 *)(param_3 + 0x10));
        FUN_100484c95(param_1);
        goto switchD_10048ccbd_caseD_706c6166;
      }
    }
    else {
      if (param_2 == 0x706c7375) {
        uVar9 = FUN_1005826bd(param_1);
        *(undefined1 *)(param_3 + 0x10) = uVar9;
        uVar15 = uVar26;
        goto switchD_10048ccbd_caseD_706c6166;
      }
      uVar15 = uVar26;
      if (param_2 == 0x706c7276) goto switchD_10048ccbd_caseD_706c6166;
      if (param_2 == 0x706c7274) {
        plVar19 = *(long **)(param_3 + 0x10);
        iVar13 = FUN_1004926ee(param_1,0);
        if ((iVar13 == 1) && (*plVar19 != 0)) {
          local_278 = (undefined *)plVar19[1];
          if (local_278 == (undefined *)0xffffffffffffffff) {
            local_278 = *(undefined **)(*plVar19 + 0x10);
          }
          local_270 = plVar19;
          if (param_1 == (int *)0x0) {
            FUN_1004926ee(0,0);
          }
          else {
            iVar13 = *(int *)(*(long *)(param_1 + 0x1e) + 0x18);
            iVar27 = 0;
            uVar15 = FUN_1004926ee(param_1,0);
            if (iVar13 != 0) {
              bVar29 = false;
              iStack_264 = 0;
              do {
                lVar17 = FUN_10037ddf6(*(undefined8 *)(param_1 + 0xf0),uVar15,0,iVar27);
                if (lVar17 != 0) {
                  iVar14 = FUN_10048feae(lVar17);
                  plVar19 = local_270;
                  if (iVar14 == 0) {
                    bVar29 = false;
                  }
                  else {
                    bVar28 = !bVar29;
                    bVar29 = true;
                    if ((bVar28) && (bVar28 = iStack_264 != 0, iStack_264 = 1, bVar28)) {
                      if (local_278 == (undefined *)0x0) goto LAB_10048d824;
                      iVar13 = *(int *)(local_278 + 0x5c);
                      puVar22 = local_278;
                      goto joined_r0x00010048d802;
                    }
                  }
                }
                iVar27 = iVar27 + 1;
              } while (iVar13 != iVar27);
            }
          }
          plVar19 = local_270;
          puVar22 = local_278;
          if (local_278 == (undefined *)0x0) {
LAB_10048d824:
            puVar22 = (undefined *)0x0;
            plVar19 = local_270;
          }
          else if ((*(int *)(local_278 + 0x5c) != 0) ||
                  ((lVar17 = FUN_10048384e(param_1,*(undefined4 *)(local_278 + 0x40)), lVar17 != 0
                   && (*(int *)(lVar17 + 0x5c) != 0)))) goto switchD_10048ccbd_caseD_706c6167;
LAB_10048d82e:
          local_258 = (undefined **)*plVar19;
          local_250 = puVar22;
          iVar13 = FUN_10048a83d(param_1);
          if (iVar13 == 0) {
            uVar15 = 0;
            goto switchD_10048ccbd_caseD_706c6166;
          }
        }
      }
    }
switchD_10048ccbd_caseD_706c6167:
    uVar15 = 0xffffffce;
    goto switchD_10048ccbd_caseD_706c6166;
  }
  if (0x706c6173 < param_2) {
    if (param_2 < 0x706c6461) {
      if (param_2 == 0x706c6174) {
switchD_10048ccbd_caseD_706c6169:
        uVar15 = 0xfffffffc;
        goto switchD_10048ccbd_caseD_706c6166;
      }
      uVar15 = uVar26;
      if (param_2 == 0x706c636c) goto switchD_10048ccbd_caseD_706c6166;
    }
    else {
      if (param_2 == 0x706c6461) {
        uVar9 = FUN_10063a6e5(*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
                              *(undefined4 *)(param_3 + 0x20),*(undefined1 *)(param_3 + 0x24),
                              *(undefined1 *)(param_3 + 0x25));
        *(undefined1 *)(param_3 + 0x26) = uVar9;
        uVar15 = uVar26;
        goto switchD_10048ccbd_caseD_706c6166;
      }
      if (param_2 == 0x706c6463) goto switchD_10048ccbd_caseD_706c6169;
    }
    goto switchD_10048ccbd_caseD_706c6167;
  }
  if (0x706c6165 < param_2) {
    switch(param_2) {
    case 0x706c6166:
    case 0x706c616d:
      goto switchD_10048ccbd_caseD_706c6166;
    case 0x706c6169:
    case 0x706c616c:
      goto switchD_10048ccbd_caseD_706c6169;
    }
    goto switchD_10048ccbd_caseD_706c6167;
  }
  if (param_2 != 0x6770706d) {
    if (param_2 == 0x7069646c) goto switchD_10048ccbd_caseD_706c6166;
    if (param_2 == 0x706c4944) goto switchD_10048ccbd_caseD_706c6169;
    goto switchD_10048ccbd_caseD_706c6167;
  }
  piVar2 = *(int **)(param_3 + 0x10);
  *(short *)(piVar2 + 8) = (short)param_1[0x10b];
  iVar13 = param_1[0x103];
  iVar27 = param_1[0x104];
  iVar14 = param_1[0x105];
  iVar3 = param_1[0x106];
  iVar4 = param_1[0x108];
  iVar5 = param_1[0x109];
  iVar6 = param_1[0x10a];
  piVar2[4] = param_1[0x107];
  piVar2[5] = iVar4;
  piVar2[6] = iVar5;
  piVar2[7] = iVar6;
  *piVar2 = iVar13;
  piVar2[1] = iVar27;
  piVar2[2] = iVar14;
  piVar2[3] = iVar3;
  switch(*(ushort *)(param_1 + 4)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 0x1a:
  case 0x2f:
  case 0x30:
  case 0x3c:
  case 0x3d:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x45:
  case 0x46:
    goto switchD_10048d33e_caseD_1;
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xd:
  case 0xe:
  case 0x10:
  case 0x12:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x27:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2e:
  case 0x32:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x44:
    break;
  case 0xc:
    FUN_1001c62d9(piVar2,0x22);
    *(byte *)((long)piVar2 + 0x21) = *(byte *)((long)piVar2 + 0x21) | 8;
    break;
  case 0xf:
    uVar12 = *(ushort *)(piVar2 + 8) & 0xfbe6 | 0x400;
    goto LAB_10048d36f;
  case 0x11:
    *(byte *)(piVar2 + 8) = *(byte *)(piVar2 + 8) & 0xfe;
    break;
  case 0x13:
    uVar12 = *(ushort *)(piVar2 + 8) & 0xffe6 | 0x18;
    goto LAB_10048d36f;
  case 0x14:
    *(byte *)(piVar2 + 8) = *(byte *)(piVar2 + 8) & 0xe7;
    break;
  case 0x25:
    FUN_1001c62d9(piVar2,0x22);
    goto LAB_10048d78e;
  case 0x26:
    FUN_1001c62d9(piVar2,0x22);
    *(byte *)(piVar2 + 8) = *(byte *)(piVar2 + 8) | 0x9b;
    FUN_1005389ba(piVar2,0x7d);
LAB_10048d78e:
    FUN_1005389ba(piVar2,0x19);
    uVar23 = 0x9a;
LAB_10048d7a3:
    FUN_1005389ba(piVar2,uVar23);
    break;
  case 0x28:
    FUN_1001c62d9(piVar2,0x22);
    *(ushort *)(piVar2 + 8) = *(ushort *)(piVar2 + 8) | 0x404;
    goto LAB_10048d4f8;
  case 0x2d:
  case 0x33:
    FUN_1001c62d9(piVar2,0x22);
    *(byte *)(piVar2 + 8) = *(byte *)(piVar2 + 8) | 0x8a;
    break;
  case 0x31:
  case 0x3e:
switchD_10048d33e_caseD_31:
    FUN_1001c62d9(piVar2,0x22);
    *(byte *)(piVar2 + 8) = *(byte *)(piVar2 + 8) | 0x8a;
LAB_10048d4f8:
    FUN_1005389ba(piVar2,0x9a);
    uVar23 = 0x9c;
    goto LAB_10048d7a3;
  case 0x3f:
    *(ushort *)(piVar2 + 8) = *(ushort *)(piVar2 + 8) & 0xf564;
    FUN_1001c62d9(piVar2,0x20);
    break;
  case 0x40:
    FUN_100538c95(piVar2,0x9a);
    goto switchD_10048d33e_caseD_1;
  default:
    uVar16 = *(ushort *)(param_1 + 4) - 0x430;
    if ((uVar16 < 7) && ((0x51U >> (uVar16 & 0x1f) & 1) != 0)) goto switchD_10048d33e_caseD_31;
  }
switchD_10048d33e_caseD_8:
  cVar11 = FUN_100490002(param_1);
  if (cVar11 != '\0') {
    FUN_1001c62d9(piVar2,0x20);
    *(ushort *)(piVar2 + 8) = *(ushort *)(piVar2 + 8) & 0xf400;
    uVar15 = uVar26;
  }
switchD_10048ccbd_caseD_706c6166:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar15;
joined_r0x00010048d802:
  if (iVar13 == 0) goto LAB_10048d82e;
  puVar22 = (undefined *)FUN_100483b4e(param_1,*(undefined4 *)(puVar22 + 0x40));
  if (puVar22 == (undefined *)0x0) {
    puVar22 = (undefined *)0x0;
    goto LAB_10048d82e;
  }
  iVar13 = *(int *)(puVar22 + 0x5c);
  goto joined_r0x00010048d802;
switchD_10048d33e_caseD_1:
  uVar12 = *(ushort *)(piVar2 + 8);
  *(ushort *)(piVar2 + 8) = uVar12 & 0xf7dc | 0x20;
  uVar12 = uVar12 & 0xf79c | 0x20 |
           (ushort)(*(int *)(*(long *)(param_1 + 2) + 0x84) == 0x646f5069) << 6;
LAB_10048d36f:
  *(ushort *)(piVar2 + 8) = uVar12;
  goto switchD_10048d33e_caseD_8;
}

