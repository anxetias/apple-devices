// name: FUN_1002da17a
// address: 1002da17a

undefined8 FUN_1002da17a(long param_1,RSA *param_2,RSA *param_3,long param_4,char param_5)

{
  long lVar1;
  char cVar2;
  int iVar3;
  uint tlen;
  int iVar4;
  undefined8 uVar5;
  RSA *pRVar6;
  char *pcVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long *plVar10;
  bool bVar11;
  long local_4a8;
  undefined4 local_49c;
  long local_498;
  RSA *local_490;
  undefined4 local_484;
  long local_480;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined2 local_46c;
  char *local_46a;
  uchar local_378 [800];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1002da4ac:
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_46a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_1002da5c4:
      local_46c = 0x822;
      uStack_470 = 1;
      uStack_474 = 0x7a0a90;
      local_478 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      local_490 = param_3;
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_478 = 0x8220202;
        uStack_474 = 0x7ab58c;
        uStack_470 = 1;
        local_46c = 0x822;
        local_46a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)");
      }
      cVar2 = FUN_1001782e9(0,1);
      param_3 = local_490;
      if (cVar2 == '\0') goto LAB_1002da4ac;
    }
    if (param_2 == (RSA *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_46a = "embeddedKeybagFileData != nullptr";
        goto LAB_1002da5c4;
      }
    }
    else if (param_3 == (RSA *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_46a = "universalKeybagFileData != nullptr";
        goto LAB_1002da5c4;
      }
    }
    else {
      if (param_4 != 0) {
        cVar2 = FUN_1002d827e(param_1);
        if (cVar2 == '\0') {
          local_490 = param_2;
          if (*(char *)(param_1 + 0x336) == '\0') {
            bVar11 = false;
          }
          else {
            iVar3 = FUN_1001888ba(param_1 + 0x75e0,"IC-Info.sidb",&local_478,0);
            bVar11 = iVar3 != 0;
          }
          if (((*(char *)(param_1 + 0x335) != '\0') &&
              (iVar3 = FUN_1001888ba(param_1 + 0x75e0,"iEKInfo",&local_478,0), param_2 = local_490,
              iVar3 != 0)) || (param_2 = local_490, bVar11)) goto LAB_1002da23f;
          if (*(char *)(param_1 + 0x6ae7) != '\0') goto LAB_1002da246;
        }
        else {
LAB_1002da23f:
          *(undefined1 *)(param_1 + 0x6ae7) = 1;
LAB_1002da246:
          *(undefined2 *)(param_1 + 0x15429) = 0x100;
        }
        uVar5 = 0;
        if ((*(char *)(param_1 + 0x6abd) == '\0') || (*(char *)(param_1 + 0x1542a) == '\0'))
        goto LAB_1002da5f7;
        if (*(char *)(param_1 + 0x15429) == '\0') {
          FUN_1002d7d5c(param_1,param_1 + 0x15448);
          *(undefined1 *)(param_1 + 0x15429) = 1;
          if (*(char *)(param_1 + 0x6abd) != '\0') goto LAB_1002da297;
        }
        else {
LAB_1002da297:
          if ((*(char *)(param_1 + 0x6ad7) != '\0') &&
             (cVar2 = FUN_10017cbd0(param_1 + 0x6b40), cVar2 != '\0')) {
            if (*(char *)(param_1 + 0x15429) == '\0') {
              FUN_1002d7d5c(param_1,param_1 + 0x15448);
              *(undefined1 *)(param_1 + 0x15429) = 1;
            }
            if ((*(char *)(param_1 + 0x336) != '\0') || (*(int *)(param_1 + 0x284) == 6)) {
              local_58 = 0;
              uStack_54 = 0;
              local_480 = 0;
              local_498 = 0;
              local_4a8 = 0;
              local_490 = param_2;
              if (*(int *)(param_1 + 8) == 0x64756c63) {
LAB_1002da356:
                FUN_1001e04f5("IC-Info.sidb",&param_3[6]._method_mod_p);
                _memcpy(&param_3->dmq1,(void *)(param_1 + 0x75e0),0x420);
                FUN_1001e04f5("IC-Info.sidd",param_4 + 0x470);
                _memcpy((void *)(param_4 + 0x50),(void *)(param_1 + 0x75e0),0x420);
                iVar3 = FUN_1002dbb62(param_3,&local_58);
                if ((iVar3 != 0) || (iVar3 = FUN_1002dbb62(param_4,&local_480), iVar3 != 0)) {
                  FUN_10017060f(CONCAT44(uStack_54,local_58));
                  local_58 = 0;
                  uStack_54 = 0;
                  FUN_10017060f(local_480);
                  local_480 = 0;
                }
                iVar3 = FUN_1002d9254(param_1,param_5,CONCAT44(uStack_54,local_58),local_480);
                if (iVar3 != -0x80) {
                  if (iVar3 == 0) {
                    if (local_498 == 0) {
                      if (param_5 == '\0') {
                        FUN_1002dbc9d(param_3);
                        if (local_4a8 != 0) goto LAB_1002dae2c;
LAB_1002dafd2:
                        FUN_1002dbc9d(param_4);
                      }
                      else {
LAB_1002dab8f:
                        if (local_4a8 == 0) {
                          if (param_5 == '\0') goto LAB_1002dafd2;
                        }
                        else {
LAB_1002dae2c:
                          iVar3 = FUN_1002dbc62(param_4);
                          if ((iVar3 != -0x80) && (iVar3 != 0)) {
                            uVar5 = FUN_1001cc310();
                            cVar2 = _os_log_type_enabled(uVar5,0x10);
                            if (cVar2 != '\0') {
                              local_46a = (char *)CONCAT44(local_46a._4_4_,iVar3);
                              goto LAB_1002db062;
                            }
                          }
                        }
                      }
                    }
                    else {
                      iVar3 = FUN_1002dbc62(param_3);
                      if (iVar3 != -0x80) {
                        if (iVar3 == 0) goto LAB_1002dab8f;
                        uVar5 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar5,0x10);
                        if (cVar2 != '\0') {
                          local_46a = (char *)CONCAT44(local_46a._4_4_,iVar3);
                          goto LAB_1002db062;
                        }
                      }
                    }
                  }
                  else {
                    uVar5 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar2 != '\0') {
                      local_46a = (char *)CONCAT44(local_46a._4_4_,iVar3);
LAB_1002db062:
                      local_46c = 0x400;
                      uStack_470 = 1;
                      uStack_474 = 0x7a0a90;
                      local_478 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)");
                    }
                  }
                }
                FUN_10017060f(CONCAT44(uStack_54,local_58));
                FUN_10017060f(local_480);
                FUN_10017060f(local_498);
                FUN_10017060f(local_4a8);
                param_2 = local_490;
              }
              else {
                uVar5 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar5,0x10);
                if (cVar2 != '\0') {
                  local_478 = 0x8220202;
                  uStack_474 = 0x7ab58c;
                  uStack_470 = 1;
                  local_46c = 0x822;
                  local_46a = "handlerData->magic == kDulcimerHandlerDataMagic";
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)");
                }
                cVar2 = FUN_1001782e9(0,1);
                if (cVar2 == '\0') {
                  uVar5 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar2 != '\0') {
                    local_46a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_1002db0eb:
                    local_46c = 0x822;
                    uStack_470 = 1;
                    uStack_474 = 0x7a0a90;
                    local_478 = 0x8220202;
                    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)");
                  }
                }
                else {
                  if (*(char *)(param_1 + 0x15429) != '\0') goto LAB_1002da356;
                  uVar5 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar2 != '\0') {
                    local_46a = "handlerData->appleUserIDListValid";
                    goto LAB_1002db0eb;
                  }
                }
                FUN_1001782e9(0,0);
                param_2 = local_490;
              }
            }
            if (((*(char *)(param_1 + 0x335) != '\0') || (*(char *)(param_1 + 0x334) != '\0')) ||
               (*(char *)(param_1 + 0x333) != '\0')) {
              if (*(int *)(param_1 + 8) == 0x64756c63) {
LAB_1002da819:
                if (*(char *)(param_1 + 0x15429) != '\0') {
                  if (*(char *)(param_1 + 0x335) == '\0') {
                    pcVar7 = "iSCInfo2";
                    if (*(char *)(param_1 + 0x334) == '\0') {
                      pcVar7 = "iSCInfo";
                    }
                  }
                  else {
                    pcVar7 = "iEKInfo";
                  }
                  FUN_1001e04f5(pcVar7,&param_2[6]._method_mod_p);
                  _memcpy(&param_2->dmq1,(void *)(param_1 + 0x75e0),0x420);
                  if (*(int *)(param_1 + 0x15448) == 0) {
                    FUN_1002dbc9d(param_2);
                    goto LAB_1002dafa3;
                  }
                  local_484 = 0;
                  local_480 = 0;
                  if (*(long *)(param_1 + 0x15798) != 0) {
                    FUN_1000bfd00();
                    *(undefined8 *)(param_1 + 0x15798) = 0;
                    *(undefined4 *)(param_1 + 0x157a0) = 0;
                  }
                  if (param_5 == '\0') {
                    iVar3 = 0;
                  }
                  else {
                    iVar3 = FUN_1002d8b65(param_2,&local_480,&local_484);
                  }
                  if (*(char *)(param_1 + 0x335) == '\0') {
LAB_1002da9c6:
                    if (iVar3 == 0) goto LAB_1002da9ce;
                  }
                  else {
                    if (local_480 == 0) {
LAB_1002da9ba:
                      iVar3 = FUN_1002dbeca(param_1,0,0);
                      goto LAB_1002da9c6;
                    }
                    iVar3 = FUN_1002dbeca(param_1,local_480,local_484);
                    FUN_1000bfd00(local_480);
                    local_480 = 0;
                    local_484 = 0;
                    if (iVar3 != 0) {
                      FUN_100064860(*(undefined8 *)(param_1 + 0x15810));
                      *(undefined8 *)(param_1 + 0x15810) = 0;
                      goto LAB_1002da9ba;
                    }
LAB_1002da9ce:
                    local_478 = 0;
                    uStack_474 = 0;
                    iVar3 = FUN_10041503c(0,&local_478,0);
                    if (iVar3 == 0) {
                      if (*(int *)(param_1 + 0x15448) != 0) {
                        plVar10 = (long *)(param_1 + 0x15450);
                        uVar9 = 0;
                        do {
                          lVar1 = *plVar10;
                          if (((lVar1 != 0) && (*(char *)(param_1 + 0x335) != '\0')) &&
                             (iVar3 = FUN_1002dc0fe(param_1,CONCAT44(uStack_474,local_478),lVar1),
                             iVar3 != 0)) {
                            FUN_100064860(*(undefined8 *)(param_1 + 0x15810));
                            *(undefined8 *)(param_1 + 0x15810) = 0;
                            FUN_1002dbeca(param_1,0,0);
                            FUN_1002dc0fe(param_1,CONCAT44(uStack_474,local_478),lVar1);
                          }
                          uVar9 = uVar9 + 1;
                          plVar10 = plVar10 + 2;
                        } while (uVar9 < *(uint *)(param_1 + 0x15448));
                      }
                      FUN_1004152d5(&local_478,0);
                    }
                  }
                  if (*(char *)(param_1 + 0x335) != '\0') {
                    if (*(char *)(param_1 + 0x15808) == '\0') {
                      if (*(char *)(param_1 + 0x6ae6) != '\0') {
                        FUN_1001c62d9(param_1 + 0x15818,0x11c);
                      }
                    }
                    else {
                      local_498 = 0;
                      local_49c = 0;
                      pRVar6 = (RSA *)FUN_1002dc164(param_1);
                      if (pRVar6 == (RSA *)0x0) {
                        uVar5 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar5,0x10);
                        iVar3 = 0x2382;
                        if (cVar2 != '\0') {
                          puVar8 = &local_58;
                          local_58 = 0x8220202;
                          uStack_54 = 0x7a0a90;
                          uStack_50 = 1;
                          local_4c = 0x400;
                          local_4a = (char *)CONCAT44(local_4a._4_4_,0x2382);
LAB_1002db18e:
                          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",
                                              puVar8,0x12);
                        }
                      }
                      else {
                        FUN_1000f5aa0(*(undefined8 *)(param_1 + 0x15810),&local_4a8);
                        local_4a8 = CONCAT44(local_4a8._4_4_,
                                             (uint)local_4a8 >> 0x18 |
                                             ((uint)local_4a8 & 0xff0000) >> 8 |
                                             ((uint)local_4a8 & 0xff00) << 8 |
                                             (uint)local_4a8 << 0x18);
                        FUN_1001c62d9(&local_478,0x100);
                        FUN_1001c631b(param_1 + 0x71a0,&local_478,*(undefined4 *)(param_1 + 0x71b4))
                        ;
                        FUN_1001c631b(&local_4a8,
                                      (long)&local_478 + (ulong)*(uint *)(param_1 + 0x71b4),4);
                        FUN_1001c62d9(local_378,0x100);
                        iVar3 = *(int *)(param_1 + 0x66b0);
                        local_490 = pRVar6;
                        tlen = _RSA_size(pRVar6);
                        if (iVar3 == 0x69506f64) {
                          FUN_1001c631b(&local_478,local_378,tlen);
                        }
                        else {
                          if (0x100 < tlen) {
                            uVar5 = FUN_1001cc310();
                            cVar2 = _os_log_type_enabled(uVar5,0x10);
                            if (cVar2 != '\0') {
                              local_58 = 0x8220202;
                              uStack_54 = 0x7a0a90;
                              uStack_50 = 1;
                              local_4c = 0x822;
                              local_4a = "paddedLength <= sizeof(guidBlock.guidBlockPadded)";
                              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)")
                              ;
                            }
                            FUN_1001782e9(0,0);
                          }
                          iVar3 = _RSA_padding_add_PKCS1_OAEP
                                            (local_378,tlen,(uchar *)&local_478,0xc,(uchar *)0x0,0);
                          if (iVar3 != 1) {
                            uVar5 = FUN_1001cc310();
                            cVar2 = _os_log_type_enabled(uVar5,0x10);
                            if (cVar2 != '\0') {
                              local_58 = 0x8220202;
                              uStack_54 = 0x7a0a90;
                              uStack_50 = 1;
                              local_4c = 0x822;
                              local_4a = "paddingResult == 1";
                              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                                  &local_58,0x16);
                            }
                            FUN_1001782e9(0,0);
                          }
                        }
                        _RSA_free(local_490);
                        iVar3 = FUN_10008d690(*(undefined8 *)(param_1 + 0x15810),&local_478,
                                              param_1 + 0x15818,&local_498,&local_49c);
                        if ((iVar3 == -0x80) || (iVar3 == 0)) {
                          if (iVar3 == 0) {
                            iVar3 = FUN_1002dbd00(param_2,local_498,local_49c);
                            if ((iVar3 != -0x80) && (iVar3 != 0)) {
                              uVar5 = FUN_1001cc310();
                              cVar2 = _os_log_type_enabled(uVar5,0x10);
                              if (cVar2 != '\0') {
                                local_478 = 0x8220202;
                                uStack_474 = 0x7a0a90;
                                uStack_470 = 1;
                                local_46c = 0x400;
                                local_46a = (char *)CONCAT44(local_46a._4_4_,iVar3);
                                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)"
                                                    ,&local_478,0x12);
                              }
                            }
                            iVar4 = FUN_1002db96b(param_1,0,local_498,local_49c,param_1 + 0x15798,
                                                  param_1 + 0x157a0);
                            if ((iVar4 != -0x80) && (iVar4 != 0)) {
                              uVar5 = FUN_1001cc310();
                              cVar2 = _os_log_type_enabled(uVar5,0x10);
                              if (cVar2 != '\0') {
                                puVar8 = &local_478;
                                local_478 = 0x8220202;
                                uStack_474 = 0x7a0a90;
                                uStack_470 = 1;
                                local_46c = 0x400;
                                local_46a = (char *)CONCAT44(local_46a._4_4_,iVar4);
                                goto LAB_1002db18e;
                              }
                            }
                          }
                        }
                        else {
                          uVar5 = FUN_1001cc310();
                          cVar2 = _os_log_type_enabled(uVar5,0x10);
                          if (cVar2 != '\0') {
                            puVar8 = &local_58;
                            local_58 = 0x8220202;
                            uStack_54 = 0x7a0a90;
                            uStack_50 = 1;
                            local_4c = 0x400;
                            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                            goto LAB_1002db18e;
                          }
                        }
                      }
                      if ((iVar3 != -0x80) && (iVar3 != 0)) {
                        uVar5 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar5,0x10);
                        if (cVar2 != '\0') {
                          local_478 = 0x8220202;
                          uStack_474 = 0x7a0a90;
                          uStack_470 = 1;
                          local_46c = 0x400;
                          local_46a = (char *)CONCAT44(local_46a._4_4_,iVar3);
                          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",
                                              &local_478,0x12);
                        }
                      }
                      FUN_1000bfd00(local_498);
                    }
                    FUN_100064860(*(undefined8 *)(param_1 + 0x15810));
                    *(undefined8 *)(param_1 + 0x15810) = 0;
                    *(undefined1 *)(param_1 + 0x6ae6) = 0;
                  }
                  if (local_480 != 0) {
                    iVar3 = -0x32;
                    if ((*(char *)(param_1 + 0x334) != '\0') ||
                       ((iVar3 = FUN_1002dbd00(param_2,local_480,local_484), iVar3 != -0x80 &&
                        (iVar3 != 0)))) {
                      uVar5 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar5,0x10);
                      if (cVar2 != '\0') {
                        local_478 = 0x8220202;
                        uStack_474 = 0x7a0a90;
                        uStack_470 = 1;
                        local_46c = 0x400;
                        local_46a = (char *)CONCAT44(local_46a._4_4_,iVar3);
                        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",
                                            &local_478,0x12);
                      }
                    }
                    FUN_1000bfd00(local_480);
                  }
                  goto LAB_1002dafa3;
                }
                uVar5 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar5,0x10);
                if (cVar2 != '\0') {
                  local_46a = "handlerData->appleUserIDListValid";
                  goto LAB_1002db006;
                }
              }
              else {
                uVar5 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar5,0x10);
                if (cVar2 != '\0') {
                  local_478 = 0x8220202;
                  uStack_474 = 0x7ab58c;
                  uStack_470 = 1;
                  local_46c = 0x822;
                  local_46a = "handlerData->magic == kDulcimerHandlerDataMagic";
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)");
                }
                cVar2 = FUN_1001782e9(0,1);
                if (cVar2 != '\0') goto LAB_1002da819;
                uVar5 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar5,0x10);
                if (cVar2 != '\0') {
                  local_46a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_1002db006:
                  local_46c = 0x822;
                  uStack_470 = 1;
                  uStack_474 = 0x7a0a90;
                  local_478 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_478,
                                      0x16);
                }
              }
              FUN_1001782e9(0,0);
            }
          }
        }
LAB_1002dafa3:
        uVar5 = 0;
        *(undefined1 *)(param_1 + 0x1542a) = 0;
        *(undefined1 *)(param_1 + 0x6ae7) = 0;
        goto LAB_1002da5f7;
      }
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_46a = "diversityBagFileData != nullptr";
        goto LAB_1002da5c4;
      }
    }
  }
  FUN_1001782e9(0,0);
  uVar5 = 0xffffffce;
LAB_1002da5f7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

