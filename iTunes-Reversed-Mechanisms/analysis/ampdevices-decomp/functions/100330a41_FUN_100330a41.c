// name: FUN_100330a41
// address: 100330a41

void FUN_100330a41(int param_1,undefined8 *param_2,undefined8 *param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  cfstringStruct *pcVar17;
  int iVar18;
  long local_78;
  int local_68;
  undefined8 local_64;
  int local_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == 0) {
LAB_100330b4b:
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100330b6d;
  }
  if (*(int *)(param_5 + 8) != 0x64756c63) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7ab58c;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 == '\0') goto LAB_100330b4b;
  }
  if ((((*(int *)(param_5 + 0x166d0) != 0) || (*(long *)(param_5 + 0x30) == 0)) ||
      ((cVar2 = FUN_10030e2f7(), cVar2 != '\0' &&
       ((*(char *)(param_5 + 0x157e2) == '\0' && (*(char *)(param_5 + 0x157e3) == '\0')))))) ||
     (puVar8 = *(undefined8 **)(param_5 + 0x30), (*(byte *)((long)puVar8 + 0x1bb3) & 0x20) != 0))
  goto LAB_100330b6d;
  iVar18 = (int)param_3;
  if (param_1 < 0x6d747269) {
    if (param_1 < 0x61706174) {
      if (param_1 < 0x41526363) {
        if (param_1 == 0x414c6363) {
LAB_100330eef:
          if (0x7ff < *(ushort *)(param_5 + 100)) goto LAB_100330b6d;
          if (param_1 == 0x414c6363) {
            param_3 = param_2;
          }
          if (param_3 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)0x0;
          }
          else {
            puVar7 = (undefined8 *)param_3[9];
          }
          if (puVar7 != puVar8) goto LAB_100330b6d;
          if (param_1 == 0x74646161) {
            pcVar17 = &cf_insert_album;
          }
          else {
            if (*(int *)((long)param_3 + 0x14) == 0) goto LAB_100330b6d;
            pcVar17 = &cf_update_album;
          }
          local_78 = FUN_10033c199(param_5,pcVar17,param_3);
          goto LAB_1003315c8;
        }
        if (param_1 != 0x414c6d66) goto LAB_100330b6d;
        if (param_2 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          puVar9 = (undefined8 *)param_2[9];
        }
        local_68 = iVar18;
        if (puVar9 != puVar8) goto LAB_1003312f8;
        puVar7 = (undefined8 *)param_2[0xc];
        if (puVar7 == (undefined8 *)0x0) {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a168c;
            uStack_50 = 1;
            uStack_4e = 0;
            uStack_4c = 0x822;
            local_4a = "trackInfo";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          cVar2 = FUN_1001782e9(0,0);
          if (cVar2 == '\0') goto LAB_1003312f8;
        }
        if ((*(byte *)((long)puVar7 + 0xc5) & 8) != 0) goto LAB_1003314a2;
        local_78 = FUN_1003382a2(param_5,&cf_update_track,puVar7,0,&local_68,0);
      }
      else {
        if (param_1 == 0x41526363) {
LAB_100330ec5:
          if (0x7ff < *(ushort *)(param_5 + 100)) goto LAB_100330b6d;
          if (param_1 == 0x41526363) {
            param_3 = param_2;
          }
          if (param_3 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)0x0;
          }
          else {
            puVar7 = (undefined8 *)param_3[1];
          }
          if (puVar7 != puVar8) goto LAB_100330b6d;
          if (param_1 == 0x74326161) {
            pcVar17 = &cf_insert_artist;
          }
          else {
            if ((param_3 == (undefined8 *)0x0) || (*(int *)((long)param_3 + 0x84) == 0))
            goto LAB_100330b6d;
            pcVar17 = &cf_update_artist;
          }
          local_78 = FUN_10033c696(param_5,pcVar17,param_3);
LAB_1003315c8:
          param_2 = (undefined8 *)0x0;
          goto LAB_100331667;
        }
        if (param_1 != 0x41526d66) {
          if (param_1 != 0x61647472) goto LAB_100330b6d;
          if (param_2 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)0x0;
          }
          else {
            puVar7 = (undefined8 *)param_2[2];
          }
          if (((puVar7 != puVar8) || (param_2[0xb] == 0)) ||
             (*(char *)(param_2[0xb] + 0x45) != '\n')) goto LAB_100330b6d;
          local_78 = FUN_10033b60c(&cf_update_track,*param_2);
          goto LAB_100331667;
        }
        if (param_2 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          puVar9 = (undefined8 *)param_2[1];
        }
        local_58 = iVar18;
        if ((puVar9 == puVar8) &&
           (puVar7 = (undefined8 *)param_2[0x19], puVar7 != (undefined8 *)0x0)) {
          uVar5 = *(uint *)((long)puVar7 + 0xc2);
          if ((uVar5 >> 0x1c & 1) != 0) {
            puVar7 = (undefined8 *)FUN_1005e3e6c();
            if (puVar7 == (undefined8 *)0x0) goto LAB_1003312f8;
            uVar5 = *(uint *)((long)puVar7 + 0xc2);
          }
          if ((uVar5 >> 0x1b & 1) == 0) {
            local_78 = FUN_1003382a2(param_5,&cf_update_track,puVar7,0,0,&local_58);
          }
          else {
LAB_1003314a2:
            local_78 = 0;
          }
        }
        else {
LAB_1003312f8:
          local_78 = 0;
          puVar7 = (undefined8 *)0x0;
        }
      }
      cVar2 = '\0';
      puVar8 = puVar9;
    }
    else if (param_1 < 0x64747269) {
      if (param_1 == 0x61706174) {
        puVar8 = (undefined8 *)FUN_1004e0c3f(0,0);
        if (puVar8 == param_2) {
          FUN_1001c75a2(param_2,param_5 + 0x16690);
        }
        goto LAB_100330b6d;
      }
      if (param_1 == 0x61746d70) {
        FUN_10017060f(*(undefined8 *)(param_5 + 0x16858));
        *(undefined8 *)(param_5 + 0x16858) = 0;
        cVar2 = FUN_10033b675(param_2,param_5);
        if (cVar2 != '\0') {
          uVar6 = FUN_10033b6c1(param_5,&cf_update_playlist,param_2);
          *(undefined8 *)(param_5 + 0x16858) = uVar6;
        }
        goto LAB_100330b6d;
      }
      if (param_1 != 0x61747269) goto LAB_100330b6d;
LAB_100330eb6:
      if (param_2 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        puVar9 = (undefined8 *)param_2[2];
      }
      puVar7 = param_2;
      if ((puVar9 == puVar8) && ((*(byte *)((long)param_2 + 0xc5) & 8) == 0)) {
        puVar9 = (undefined8 *)0x0;
        if (param_1 == 0x6d747269) {
          puVar9 = param_3;
        }
        if (puVar9 != (undefined8 *)0x0) {
          cVar2 = FUN_10053960e(puVar9,&DAT_100744e30);
          if (cVar2 == '\0') goto LAB_100330b6d;
          cVar2 = FUN_100539525(puVar9,0x1c);
          if (cVar2 == '\0') {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4e = 0;
              uStack_4c = 0x822;
              local_4a = 
              "TrackBitFieldsIsAnyOtherFieldSet( modifiedTrackFields, kITDBTrackField_PersistentID )"
              ;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
        }
        if (param_1 == 0x61747269) {
          if (*(char *)(param_5 + 0x353) != '\0') {
            if (param_2[0x31] == 0) {
              puVar7 = (undefined8 *)0x0;
            }
            else {
              uVar6 = FUN_100309333(param_2[0x30]);
              puVar7 = (undefined8 *)FUN_100300729(uVar6,param_2[0x31]);
            }
            if (puVar7 == (undefined8 *)0x0) {
              puVar7 = param_2;
            }
            cVar2 = FUN_1003537ab(param_5,puVar7);
            if (cVar2 != '\0') {
              FUN_100354b6d(param_5,param_2,puVar7);
            }
          }
          local_78 = FUN_1003382a2(param_5,&cf_insert_track,param_2,0,0,0);
          goto LAB_100331667;
        }
        pcVar17 = &cf_insert_track;
        if (param_1 == 0x6d747269) {
          pcVar17 = &cf_update_track;
        }
        local_78 = FUN_1003382a2(param_5,pcVar17,param_2,puVar9,0,0);
        if ((param_1 == 0x6d747269) && (lVar16 = FUN_100171426(local_78), lVar16 < 3)) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar6 = DAT_1008c75b8;
          cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
          if (cVar2 != '\0') {
            FUN_100476ac1(&local_58,param_2);
            local_64 = FUN_1001b83ae(&local_58);
            local_68 = 0x8220102;
            __os_log_impl(0x100000000,uVar6,2,
                          "airtraffic> skipping update_track operation for track \"%{public}s\"",
                          &local_68,0xc);
            FUN_1001b7a50(&local_58);
          }
          FUN_10017060f(local_78);
          goto LAB_100330b6d;
        }
        cVar2 = '\0';
      }
      else {
        if ((puVar9 == (undefined8 *)0x0 || param_1 != 0x61747269) ||
           (((param_4 == 0 || ((puVar9[0x376] & 1) == 0)) ||
            (*(undefined8 **)(param_4 + 0x10) != puVar8)))) goto LAB_100330b6d;
        local_78 = FUN_1003382a2(param_5,&cf_upload_track,param_4,0,0,0);
        uVar1 = *(undefined4 *)(param_2[0xb] + 0x30);
        local_58 = (int)param_4;
        uStack_54 = (undefined4)((ulong)param_4 >> 0x20);
        lVar16 = FUN_10033d31a(*(undefined8 *)(param_5 + 0x16808),param_4,&DAT_100712240,&local_58,
                               &local_68);
        *(undefined4 *)(lVar16 + 0x28) = uVar1;
        cVar2 = '\0';
        puVar8 = puVar9;
      }
    }
    else {
      if ((param_1 != 0x64747269) && (param_1 != 0x68747269)) {
        if ((param_1 == 0x69707378) && (*(int *)(param_5 + 0x28) == (int)param_2)) {
          FUN_10033ca2e(param_5);
        }
        goto LAB_100330b6d;
      }
      if (param_2 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        puVar7 = (undefined8 *)param_2[2];
      }
      if ((puVar7 != puVar8) || ((*(byte *)((long)param_2 + 0xc5) & 8) != 0)) goto LAB_100330b6d;
      local_78 = FUN_1003382a2(param_5,&cf_delete_track,param_2,0,0,0);
LAB_100331667:
      cVar2 = '\0';
      puVar7 = param_2;
    }
LAB_10033166a:
    if (local_78 != 0) {
      uVar6 = FUN_100171475(local_78,&cf_operation);
      cVar3 = FUN_100170633(uVar6,&cf_upload_track);
      if (puVar7 == (undefined8 *)0x0) {
LAB_1003316e3:
        lVar16 = 0x16710;
        if (*(int *)(param_5 + 0x16708) == 2) goto LAB_100331701;
LAB_10033170a:
        lVar16 = *(long *)(param_5 + lVar16);
        if (lVar16 != 0) {
          if ((puVar8 == *(undefined8 **)(param_5 + 0x30)) &&
             (lVar10 = FUN_10017076e(lVar16), 0 < lVar10)) {
            lVar10 = lVar10 + -1;
            uVar11 = FUN_10016499b(lVar16);
            uVar11 = FUN_1001705fc(uVar11);
            cVar3 = FUN_100170633(uVar11,local_78);
            if (cVar3 != '\0') goto LAB_100331783;
            uVar12 = FUN_100171475(local_78,&cf_pid);
            uVar13 = FUN_100171475(uVar11,&cf_operation);
            uVar14 = FUN_100171475(uVar11,&cf_pid);
            cVar3 = FUN_100170633(uVar12,uVar14);
            cVar4 = FUN_100170633(uVar6,&cf_insert_track);
            if (cVar4 == '\0') {
              cVar4 = FUN_100170633(uVar6,&cf_update_track);
              if (cVar4 == '\0') {
                cVar4 = FUN_100170633(uVar6,&cf_update_album);
                if (cVar4 == '\0') {
                  cVar4 = FUN_100170633(uVar6,&cf_update_artist);
                  if (cVar4 == '\0') {
                    cVar4 = FUN_100170633(uVar6,&cf_delete_album);
                    if (cVar4 == '\0') {
                      cVar4 = FUN_100170633(uVar6,&cf_delete_artist);
                      if (cVar4 == '\0') {
                        cVar4 = FUN_100170633(uVar6,&cf_insert_playlist);
                        if (cVar4 == '\0') {
                          cVar4 = FUN_100170633(uVar6,&cf_update_playlist);
                          if (cVar4 == '\0') {
                            cVar3 = FUN_100170633(uVar6,&cf_delete_playlist);
                            if (cVar3 != '\0') {
                              cVar3 = FUN_10033cd53(lVar16,uVar12);
                              FUN_10017060f(uVar11);
                              if (cVar3 == '\0') goto LAB_100331797;
                              goto LAB_10033171d;
                            }
                          }
                          else if ((cVar3 != '\0') &&
                                  ((cVar3 = FUN_100170633(uVar13,&cf_insert_playlist), cVar3 != '\0'
                                   || (cVar3 = FUN_100170633(uVar13,&cf_update_playlist),
                                      cVar3 != '\0')))) {
                            lVar15 = FUN_10033cbcd(uVar11,local_78);
                            if (lVar15 == 0) {
                              uVar6 = FUN_1001cc310();
                              cVar3 = _os_log_type_enabled(uVar6,0x10);
                              if (cVar3 != '\0') {
                                local_58 = 0x8220202;
                                uStack_54 = 0x7a168c;
                                uStack_50 = 1;
                                uStack_4e = 0;
                                uStack_4c = 0x822;
                                local_4a = "mergedOperation";
                                __os_log_error_impl(0x100000000,uVar6,0x10,
                                                    "%{public}s: (%{public}s)",&local_58,0x16);
                              }
                              cVar3 = FUN_1001782e9(0,0);
                              if (cVar3 == '\0') goto LAB_100331d54;
                            }
                            FUN_100170bed(lVar16,lVar10);
                            FUN_10017060f(local_78);
                            local_78 = lVar15;
                          }
                        }
                        else if ((cVar3 != '\0') &&
                                (cVar3 = FUN_100170633(uVar13,&cf_update_playlist), cVar3 != '\0'))
                        {
                          FUN_100170bed(lVar16,lVar10);
                        }
                      }
                      else if (cVar3 != '\0') {
                        cVar3 = FUN_100170633(uVar13,&cf_insert_artist);
                        if (cVar3 != '\0') goto LAB_100331b8e;
                        cVar3 = FUN_100170633(uVar13,&cf_update_artist);
                        if (cVar3 != '\0') {
                          FUN_100170bed(lVar16,lVar10);
                        }
                      }
                    }
                    else if (cVar3 != '\0') {
                      cVar3 = FUN_100170633(uVar13,&cf_insert_album);
                      if (cVar3 != '\0') {
LAB_100331b8e:
                        FUN_100170bed(lVar16,lVar10);
                        goto LAB_100331783;
                      }
                      cVar3 = FUN_100170633(uVar13,&cf_update_album);
                      if (cVar3 != '\0') {
                        FUN_100170bed(lVar16,lVar10);
                      }
                    }
                  }
                  else {
                    if ((cVar3 == '\0') ||
                       (cVar3 = FUN_100170633(uVar13,&cf_insert_artist), cVar3 == '\0')) {
                      cVar3 = FUN_100170633(uVar13,&cf_insert_track);
                      if (cVar3 == '\0') {
                        cVar3 = FUN_100170633(uVar13,&cf_delete_track);
                        goto LAB_100331af6;
                      }
                      goto LAB_100331783;
                    }
                    FUN_100170bed(lVar16,lVar10);
                    FUN_100171502(local_78,&cf_operation,&cf_insert_artist);
                  }
                }
                else {
                  if ((cVar3 == '\0') ||
                     (cVar3 = FUN_100170633(uVar13,&cf_insert_album), cVar3 == '\0')) {
                    cVar3 = FUN_100170633(uVar13,&cf_insert_track);
                    if (cVar3 == '\0') {
                      cVar3 = FUN_100170633(uVar13,&cf_delete_track);
LAB_100331af6:
                      if (cVar3 == '\0') goto LAB_100331d54;
                    }
LAB_100331783:
                    FUN_10017060f(uVar11);
                    goto LAB_100331797;
                  }
                  FUN_100170bed(lVar16,lVar10);
                  FUN_100171502(local_78,&cf_operation,&cf_insert_album);
                }
              }
              else if ((cVar3 != '\0') &&
                      ((cVar3 = FUN_100170633(uVar13,&cf_insert_track), cVar3 != '\0' ||
                       (cVar3 = FUN_100170633(uVar13,&cf_update_track), cVar3 != '\0')))) {
                lVar15 = FUN_10033cbcd(uVar11,local_78);
                if (lVar15 == 0) {
                  uVar6 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar3 != '\0') {
                    local_58 = 0x8220202;
                    uStack_54 = 0x7a168c;
                    uStack_50 = 1;
                    uStack_4e = 0;
                    uStack_4c = 0x822;
                    local_4a = "mergedOperation";
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  cVar3 = FUN_1001782e9(0,0);
                  if (cVar3 == '\0') goto LAB_100331d54;
                }
                FUN_100170bed(lVar16,lVar10);
                FUN_10017060f(local_78);
                local_78 = lVar15;
              }
            }
            else if ((cVar3 != '\0') &&
                    (cVar3 = FUN_100170633(uVar13,&cf_update_track), cVar3 != '\0')) {
              FUN_100170bed(lVar16,lVar10);
            }
LAB_100331d54:
            FUN_10017060f(uVar11);
          }
LAB_10033171d:
          FUN_1001709a5(lVar16,local_78);
          if ((*(char *)(param_5 + 0x151d0) != '\0') &&
             ((*(char *)(param_5 + 0x157e3) != '\0' || (lVar16 == *(long *)(param_5 + 0x16748))))) {
            *(undefined1 *)(param_5 + 0x1684c) = 1;
          }
        }
      }
      else {
        uVar5 = FUN_1004744bf(puVar7,0);
        if ((uVar5 & 0x1004000) == 0) {
          if ((uVar5 >> 0x14 & 1) == 0) {
            lVar16 = 0x167b8;
            if ((uVar5 & 0xc00000) == 0) goto LAB_1003316e3;
            goto LAB_10033170a;
          }
          iVar18 = *(int *)(param_5 + 0x16778);
          lVar16 = 0x16780;
        }
        else {
          iVar18 = *(int *)(param_5 + 0x16740);
          lVar16 = 0x16748;
        }
        if (iVar18 != 2) goto LAB_10033170a;
LAB_100331701:
        if (cVar3 != '\0') goto LAB_10033170a;
      }
LAB_100331797:
      FUN_10017060f(local_78);
    }
    if (cVar2 == '\0') goto LAB_100330b6d;
  }
  else {
    if (0x74646160 < param_1) {
      if (param_1 < 0x74647064) {
        if (param_1 == 0x74646161) goto LAB_100330eef;
        if (param_1 != 0x74646170) {
          if ((((param_1 == 0x74646563) && (puVar8 == param_2)) &&
              (*(long *)(param_5 + 0x16688) != 0)) && (*(int *)(param_2 + 0x58b) != 0)) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar6 = DAT_1008c75b8;
            cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar2 != '\0') {
              uStack_54 = *(undefined4 *)(param_2 + 0x58b);
              local_58 = 0x4000200;
              uStack_50 = 0x400;
              uStack_4e = (undefined2)uStack_54;
              uStack_4c = (undefined2)((uint)uStack_54 >> 0x10);
              __os_log_impl(0x100000000,uVar6,1,"airtraffic> asset copy error %d / 0x%08X",&local_58
                            ,0xe);
            }
            if (*(int *)(param_5 + 0x166d4) == 6) {
              FUN_1003360f2(param_5,*(undefined4 *)(param_2 + 0x58b));
            }
          }
          goto LAB_100330b6d;
        }
        if (puVar8 != param_2) goto LAB_100330b6d;
        cVar2 = FUN_10033b675(param_3,param_5);
        if (cVar2 == '\0') {
          local_78 = 0;
        }
        else {
          local_78 = FUN_10033b6c1(param_5,&cf_insert_playlist,param_3);
        }
        FUN_10017060f(*(undefined8 *)(param_5 + 0x16858));
      }
      else {
        if (param_1 == 0x74647064) {
          if (param_2 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)0x0;
          }
          else {
            puVar7 = (undefined8 *)param_2[1];
          }
          if (((puVar7 != puVar8) || (iVar18 == 0)) || ((*(uint *)(param_2 + 0x48) & 4) != 0))
          goto LAB_100330b6d;
          cVar2 = FUN_10033b675(param_2,param_5);
          if (cVar2 == '\0') {
LAB_100331475:
            local_78 = 0;
            cVar2 = '\0';
          }
          else {
            local_78 = FUN_10033b6c1(param_5,&cf_update_playlist,param_2);
            cVar2 = FUN_100170633(local_78,*(undefined8 *)(param_5 + 0x16858));
            if (cVar2 != '\0') {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar6 = DAT_1008c75b8;
              cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
              if (cVar2 != '\0') {
                FUN_100486d8f(&local_58,param_2);
                local_64 = FUN_1001b83ae(&local_58);
                local_68 = 0x8220102;
                __os_log_impl(0x100000000,uVar6,2,
                              "airtraffic> skipping update_playlist operation for playlist \"%{public}s\""
                              ,&local_68,0xc);
                FUN_1001b7a50(&local_58);
              }
              FUN_10017060f(local_78);
              goto LAB_100331475;
            }
            cVar2 = '\x01';
          }
          FUN_10017060f(*(undefined8 *)(param_5 + 0x16858));
          *(undefined8 *)(param_5 + 0x16858) = 0;
          puVar7 = (undefined8 *)0x0;
          goto LAB_10033166a;
        }
        if (param_1 == 0x74647261) {
          if ((puVar8 != param_2) || (0x7ff < *(ushort *)(param_5 + 100))) goto LAB_100330b6d;
          local_78 = FUN_10033c199(param_5,&cf_delete_album,param_3);
          puVar8 = param_2;
          goto LAB_1003315c8;
        }
        if ((param_1 != 0x74647270) || (puVar8 != param_2)) goto LAB_100330b6d;
        cVar2 = FUN_10033b675(param_3,param_5);
        if (cVar2 == '\0') {
          local_78 = 0;
        }
        else {
          local_78 = FUN_10033b6c1(param_5,&cf_delete_playlist,param_3);
        }
        FUN_10017060f(*(undefined8 *)(param_5 + 0x16858));
      }
      *(undefined8 *)(param_5 + 0x16858) = 0;
      puVar7 = (undefined8 *)0x0;
      puVar8 = param_2;
      goto LAB_10033166a;
    }
    if (param_1 < 0x74326161) {
      if ((param_1 != 0x6d747269) && (param_1 != 0x73747269)) goto LAB_100330b6d;
      goto LAB_100330eb6;
    }
    if (param_1 == 0x74326161) goto LAB_100330ec5;
    if (param_1 == 0x74327261) {
      if ((puVar8 != param_2) || (0x7ff < *(ushort *)(param_5 + 100))) goto LAB_100330b6d;
      local_78 = FUN_10033c696(param_5,&cf_delete_artist,param_3);
      puVar8 = param_2;
      goto LAB_1003315c8;
    }
    if (((param_1 != 0x74644443) || (puVar8 != param_2)) ||
       ((iVar18 == 0 && (lVar16 = FUN_10017076e(*(undefined8 *)(param_5 + 0x167c8)), lVar16 < 1))))
    goto LAB_100330b6d;
  }
  if ((*(char *)(param_5 + 0x6ad9) != '\0') &&
     ((((*(char *)(param_5 + 0x151d0) == '\0' && (*(char *)(param_5 + 0x6acf) == '\0')) &&
       (*(char *)(param_5 + 0x16843) != '\0')) || (*(char *)(param_5 + 0x1684c) != '\0')))) {
    *(undefined1 *)(param_5 + 0x1684c) = 0;
    FUN_10017848a(&local_58,FUN_10033d02a,param_5);
    FUN_100233265(param_5,&local_58,FUN_10033d02a);
  }
LAB_100330b6d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

