// name: FUN_1004b354e
// address: 1004b354e

int FUN_1004b354e(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  char *pcVar13;
  bool bVar14;
  bool bVar15;
  undefined8 local_968;
  char local_958 [4];
  char *local_954;
  undefined2 local_94c;
  int local_94a;
  undefined4 local_928;
  char local_908 [4];
  char *local_904;
  undefined2 local_8fc;
  char *local_8fa;
  undefined1 local_8d8 [1056];
  undefined4 local_4b8;
  undefined4 local_4a4;
  undefined1 local_4a0;
  undefined1 local_49f;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 local_470;
  undefined2 uStack_46c;
  undefined2 uStack_46a;
  undefined6 uStack_468;
  long local_458 [132];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar8 = *(char *)(param_1 + 0x778);
  cVar7 = FUN_1004aa626();
  if (cVar8 == '\0') {
    if ((cVar7 != '\0') && (*(char *)(param_1 + 0x778) == '\0')) {
      FUN_1004b15f3(param_1);
      if (((*(char *)(param_1 + 0x778) == '\0') && (*(int *)(param_1 + 0x1304) == 0x636f7079)) ||
         (*(int *)(param_1 + 0x140) != 0x66696c65)) {
LAB_1004b391a:
        lVar1 = *(long *)(param_1 + 7000);
        iVar9 = 0;
        if (lVar1 == *(long *)(param_1 + 0x1b60)) goto LAB_1004b365b;
        bVar14 = *(char *)(param_1 + 0x1b94) == '\0';
        if (*(char *)(param_1 + 0x778) == '\0') {
          bVar15 = *(int *)(param_1 + 0x1304) == 0x636f7079;
        }
        else {
          bVar15 = false;
        }
        *(bool *)(param_1 + 0x1cc0) = bVar14;
        *(bool *)(param_1 + 0x1cd1) = bVar15;
        if (*(char *)(param_1 + 0x1bc9) == '\0') {
          iVar9 = 0;
          if (((*(char *)(param_1 + 0x1cd0) == '\0') || (bVar15 != false)) ||
             (*(long *)(param_1 + 0x1cc8) == 0)) goto LAB_1004b365b;
        }
        else if (*(char *)(param_1 + 0x1c13) == '\0') {
          *(undefined1 *)(param_1 + 0x1c12) = 1;
          *(undefined4 *)(param_1 + 0x1c30) = *(undefined4 *)(param_1 + 0x1bc9);
          *(undefined4 *)(param_1 + 0x1c34) = *(undefined4 *)(param_1 + 0x1bcd);
          *(undefined4 *)(param_1 + 0x1c38) = *(undefined4 *)(param_1 + 0x1bd1);
          *(undefined4 *)(param_1 + 0x1c3c) = *(undefined4 *)(param_1 + 0x1bd5);
          *(undefined8 *)(param_1 + 0x1c40) = *(undefined8 *)(param_1 + 0x1bd9);
          *(undefined8 *)(param_1 + 0x1c48) = *(undefined8 *)(param_1 + 0x1be1);
          *(undefined8 *)(param_1 + 0x1c50) = *(undefined8 *)(param_1 + 0x1be9);
          *(undefined8 *)(param_1 + 0x1c58) = *(undefined8 *)(param_1 + 0x1bf1);
          *(undefined8 *)(param_1 + 0x1c60) = *(undefined8 *)(param_1 + 0x1bf9);
          *(undefined8 *)(param_1 + 0x1c68) = *(undefined8 *)(param_1 + 0x1c01);
          *(undefined1 *)(param_1 + 0x1c70) = *(undefined1 *)(param_1 + 0x1c09);
          *(undefined1 *)(param_1 + 0x1c10) = 1;
          *(undefined1 *)(param_1 + 0x1c13) = 1;
        }
        iVar10 = 0;
        iVar9 = iVar10;
        if ((*(char *)(param_1 + 0x1bc8) != '\0') ||
           (iVar9 = FUN_1004b4c70(param_1 + 0x1c10,lVar1,bVar14), iVar9 == -0x80))
        goto LAB_1004b365b;
        if (iVar9 == 0) {
          iVar9 = iVar10;
          if (((*(char *)(param_1 + 0x1cd0) == '\0') || (*(long *)(param_1 + 0x1cc8) == 0)) ||
             (*(char *)(param_1 + 0x1cd1) != '\0')) goto LAB_1004b365b;
          lVar2 = param_1 + 0x1cd8;
          if ((*(char *)(param_1 + 0x1cdb) == '\0') ||
             (*(long *)(param_1 + 0x1cf0) + *(long *)(param_1 + 0x1ce0) != lVar1)) {
            local_458[0] = 0;
            lVar12 = FUN_1004b4e86(*(long *)(param_1 + 0x1cc8),lVar1);
            if (lVar12 == 0) {
              uVar11 = FUN_1001cc310();
              cVar8 = _os_log_type_enabled(uVar11,0x10);
              if (cVar8 != '\0') {
                builtin_strncpy(local_908,"\x02\x02\"\b",4);
                local_904 = "Assertion failure";
                local_8fc = 0x822;
                local_8fa = "segment != __null";
                __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_908,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              iVar9 = -0x32;
            }
            else if (local_458[0] == lVar1) {
              iVar9 = FUN_1004b5643(param_1 + 0x1bc0,lVar1);
              if (iVar9 == 0) goto LAB_1004b4338;
              uVar11 = FUN_1001cc310();
              cVar8 = _os_log_type_enabled(uVar11,0x10);
              if (cVar8 != '\0') {
                local_8fa = (char *)CONCAT44(local_8fa._4_4_,iVar9);
                goto LAB_1004b417d;
              }
            }
            else {
              FUN_1004afcf8(lVar2);
              FUN_1004b4f62(lVar2,local_458[0],*(undefined4 *)(*(long *)(param_1 + 0x1cc8) + 8),
                            lVar12);
              iVar9 = FUN_1004b4fea(param_1 + 0x1bc0,lVar2,lVar1);
              if (iVar9 != -0x80) {
                if (iVar9 == 0) goto LAB_1004b4338;
                uVar11 = FUN_1001cc310();
                cVar8 = _os_log_type_enabled(uVar11,0x10);
                if (cVar8 != '\0') {
                  local_8fa = (char *)CONCAT44(local_8fa._4_4_,iVar9);
                  goto LAB_1004b417d;
                }
              }
            }
          }
          else {
LAB_1004b4338:
            iVar9 = FUN_1004b4c70(lVar2,lVar1,bVar14);
            if ((iVar9 != -0x80) && (iVar9 != 0)) {
              uVar11 = FUN_1001cc310();
              cVar8 = _os_log_type_enabled(uVar11,0x10);
              if (cVar8 != '\0') {
                local_8fa = (char *)CONCAT44(local_8fa._4_4_,iVar9);
LAB_1004b417d:
                local_8fc = 0x400;
                local_904 = "Assertion failure";
                builtin_strncpy(local_908,"\x02\x02\"\b",4);
                __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",local_908,0x12
                                   );
              }
            }
          }
        }
        else {
          uVar11 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar11,0x10);
          if (cVar8 != '\0') {
            local_8fa = (char *)CONCAT44(local_8fa._4_4_,iVar9);
            goto LAB_1004b417d;
          }
        }
        if ((iVar9 != -0x80) && (iVar9 != 0)) {
          uVar11 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar11,0x10);
          if (cVar8 != '\0') {
            local_8fa = (char *)CONCAT44(local_8fa._4_4_,iVar9);
LAB_1004b3bc1:
            local_8fc = 0x400;
            local_904 = "Assertion failure";
            builtin_strncpy(local_908,"\x02\x02\"\b",4);
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",local_908,0x12);
          }
        }
      }
      else {
        cVar8 = FUN_1004aa626(param_1);
        if ((cVar8 != '\0') && (*(char *)(param_1 + 0x778) == '\0')) {
          if (*(int *)(param_1 + 0x140) == 0x66696c65) {
            uVar4 = *(uint *)(param_1 + 0x7d8);
            lVar1 = param_1 + 0x1288;
            FUN_1001e9de0(lVar1);
            if (*(long *)(param_1 + 0x1258) == 0) {
              uVar5 = *(uint *)(param_1 + 0x7d8);
              if ((uVar5 & 1) == 0) {
                if ((*(char *)(param_1 + 0x778) == '\0') &&
                   (((*(int *)(param_1 + 0x140) != 0x66696c65 || (-1 < (int)uVar5)) ||
                    (*(int *)(param_1 + 0x1304) == 0x636f7079)))) {
                  *(undefined8 *)(param_1 + 0x12f0) = 0;
                  *(undefined8 *)(param_1 + 0x1b78) = 0;
                  *(undefined8 *)(param_1 + 7000) = 0;
                  *(undefined8 *)(param_1 + 0x200) = 0;
                  if ((uVar5 & 8) == 0) {
                    if ((uVar5 & 0x10) != 0) {
                      FUN_1001eafc1();
                      _snprintf(local_958,0x40,"%16.llx");
                      FUN_1001e04f5(local_958,param_1 + 0xc00);
                    }
                    if (*(short *)(param_1 + 0xc00) == 0) {
                      iVar9 = -0x32;
                    }
                    else {
                      FUN_1001e40a7(param_1 + 0xc00,local_908,&local_478);
                      iVar9 = FUN_10053600d(param_1 + 0x7e0,local_908,&local_478);
                      if (iVar9 != -0x80) {
                        if (iVar9 == 0) {
                          iVar9 = FUN_100181359(param_1 + 0x7e0,param_1 + 0xc00,
                                                *(undefined4 *)(param_1 + 0xe00),0,local_458);
                          if (iVar9 != -0x80) {
                            if (iVar9 == 0) goto LAB_1004b4284;
                            uVar11 = FUN_1001cc310();
                            cVar8 = _os_log_type_enabled(uVar11,0x10);
                            if (cVar8 != '\0') {
                              pcVar13 = local_958;
                              builtin_strncpy(local_958,"\x02\x02\"\b",4);
                              local_954 = "Assertion failure";
                              local_94c = 0x400;
                              local_94a = iVar9;
                              goto LAB_1004b4632;
                            }
                          }
                        }
                        else {
                          uVar11 = FUN_1001cc310();
                          cVar8 = _os_log_type_enabled(uVar11,0x10);
                          if (cVar8 != '\0') {
                            pcVar13 = local_958;
                            builtin_strncpy(local_958,"\x02\x02\"\b",4);
                            local_954 = "Assertion failure";
                            local_94c = 0x400;
                            local_94a = iVar9;
LAB_1004b4632:
                            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                                pcVar13,0x12);
                          }
                        }
                      }
                    }
                  }
                  else {
                    iVar9 = FUN_10018156b(param_1 + 0x7e0,param_1 + 0xc00,
                                          *(undefined4 *)(param_1 + 0xe00),
                                          *(undefined4 *)(param_1 + 0xe04),local_458);
                    if (iVar9 == -0x30) {
                      iVar9 = FUN_10017ecc9(param_1 + 0x7e0,param_1 + 0xc00,local_458,0);
                      iVar10 = FUN_10017cc65(local_458,0x64617461,3);
                      if (iVar10 == 0) {
                        FUN_10017cf3c(local_968,0);
                        FUN_10017cdfb(local_968);
                      }
                    }
                    if (iVar9 == -0x80) goto LAB_1004b429f;
                    if (iVar9 == 0) {
LAB_1004b4284:
                      FUN_1004a9316(param_1,local_458);
                      goto LAB_1004b3c94;
                    }
                    uVar11 = FUN_1001cc310();
                    cVar8 = _os_log_type_enabled(uVar11,0x10);
                    if (cVar8 != '\0') {
                      pcVar13 = local_908;
                      builtin_strncpy(local_908,"\x02\x02\"\b",4);
                      local_904 = "Assertion failure";
                      local_8fc = 0x400;
                      local_8fa = (char *)CONCAT44(local_8fa._4_4_,iVar9);
                      goto LAB_1004b4632;
                    }
                  }
LAB_1004b453a:
                  FUN_1001e9eb9(lVar1);
                  if (iVar9 == -0x80) goto LAB_1004b365b;
                  if (iVar9 != 0) goto LAB_1004b37c2;
                  goto LAB_1004b391a;
                }
                iVar9 = FUN_1004ad5f4(param_1);
                if (iVar9 != -0x80) {
                  if (iVar9 == 0) {
                    FUN_1004aa912(param_1,local_458);
                    goto LAB_1004b3c94;
                  }
                  uVar11 = FUN_1001cc310();
                  cVar8 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar8 == '\0') goto LAB_1004b453a;
                  local_8fa = (char *)CONCAT44(local_8fa._4_4_,iVar9);
                  goto LAB_1004b4501;
                }
              }
              else {
                FUN_1001c631b(param_1 + 0x7e0,local_458,0x420);
                FUN_1004a9316(param_1,local_458);
LAB_1004b3c94:
                if ((*(long *)(param_1 + 0x1b60) != -1) &&
                   (cVar8 = FUN_10018a135(local_458), cVar8 == '\0')) {
                  uVar11 = FUN_1001cc310();
                  cVar8 = _os_log_type_enabled(uVar11,0x10);
                  iVar9 = 0x1fa7;
                  if (cVar8 != '\0') {
                    builtin_strncpy(local_908,"\x02\x02\"\b",4);
                    local_904 = "Assertion failure";
                    local_8fc = 0x400;
                    local_8fa = (char *)CONCAT44(local_8fa._4_4_,0x1fa7);
                    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",local_908,
                                        0x12);
                  }
LAB_1004b40ea:
                  FUN_1001e9eb9(lVar1);
                  goto LAB_1004b37c2;
                }
                if (((uVar4 & 2) == 0) || (*(long *)(param_1 + 0x1b60) == -1)) {
LAB_1004b3d32:
                  FUN_1001c62d9(local_908,0x488);
                  builtin_strncpy(local_908,"ELIF",4);
                  local_4a4 = 4;
                  local_49f = 1;
                  if ((*(byte *)(param_1 + 0x7d8) & 0x80) != 0) {
                    local_4a0 = 1;
                  }
                  FUN_10017d477(local_458,local_958,0);
                  FUN_1001c62d9(&local_904,0x460);
                  _memcpy(local_8d8,local_458,0x420);
                  local_4b8 = local_928;
                  FUN_100531852(&local_478,local_908);
                  FUN_100217418((long *)(param_1 + 0x1258),&local_478);
                  plVar6 = (long *)CONCAT26(uStack_46a,CONCAT24(uStack_46c,local_470));
                  if (plVar6 != (long *)0x0) {
                    LOCK();
                    plVar3 = plVar6 + 1;
                    lVar2 = *plVar3;
                    *plVar3 = *plVar3 + -1;
                    UNLOCK();
                    if (lVar2 == 0) {
                      (**(code **)(*plVar6 + 0x10))(plVar6);
                      std::__shared_weak_count::__release_weak();
                    }
                  }
                  plVar6 = *(long **)(param_1 + 0x1258);
                  if (plVar6 == (long *)0x0) {
                    uVar11 = FUN_1001cc310();
                    cVar8 = _os_log_type_enabled(uVar11,0x10);
                    if (cVar8 != '\0') {
                      local_478 = 0x8220202;
                      uStack_474 = 0x7a0a90;
                      local_470 = 1;
                      uStack_46c = 0x822;
                      uStack_46a = 0x48c9;
                      uStack_468 = 0x1007d;
                      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",
                                          &local_478,0x16);
                    }
                    FUN_1001782e9(0,0);
                    iVar9 = -0x32;
                    goto LAB_1004b40ea;
                  }
                  (**(code **)(*plVar6 + 0x30))(plVar6,1);
                  (**(code **)**(undefined8 **)(param_1 + 0x1258))();
                  (**(code **)(**(long **)(param_1 + 0x1258) + 0x40))
                            (*(long **)(param_1 + 0x1258),*(undefined8 *)(param_1 + 7000));
                  iVar9 = (**(code **)(**(long **)(param_1 + 0x1258) + 0xf0))
                                    (*(long **)(param_1 + 0x1258),*(undefined8 *)(param_1 + 7000));
                  if (iVar9 != -0x80) {
                    if (iVar9 == 0) {
                      FUN_1001e9eb9(lVar1);
                      FUN_1004acc1d(param_1);
                      goto LAB_1004b391a;
                    }
                    uVar11 = FUN_1001cc310();
                    cVar8 = _os_log_type_enabled(uVar11,0x10);
                    if (cVar8 != '\0') {
                      local_8fa = (char *)CONCAT44(local_8fa._4_4_,iVar9);
                      goto LAB_1004b4501;
                    }
                    goto LAB_1004b453a;
                  }
                }
                else {
                  iVar9 = FUN_10017cc65(local_458,0x64617461,3);
                  if (iVar9 != -0x80) {
                    if (iVar9 == 0) {
                      iVar9 = FUN_10017d0ec(local_968,1,*(undefined8 *)(param_1 + 0x1b60));
                      FUN_10017cdfb(local_968);
                      if (iVar9 == -0x80) goto LAB_1004b429f;
                      if (iVar9 == 0) goto LAB_1004b3d32;
                      uVar11 = FUN_1001cc310();
                      cVar8 = _os_log_type_enabled(uVar11,0x10);
                      if (cVar8 != '\0') {
                        local_8fa = (char *)CONCAT44(local_8fa._4_4_,iVar9);
                        goto LAB_1004b4501;
                      }
                    }
                    else {
                      uVar11 = FUN_1001cc310();
                      cVar8 = _os_log_type_enabled(uVar11,0x10);
                      if (cVar8 != '\0') {
                        local_8fa = (char *)CONCAT44(local_8fa._4_4_,iVar9);
LAB_1004b4501:
                        local_8fc = 0x400;
                        local_904 = "Assertion failure";
                        builtin_strncpy(local_908,"\x02\x02\"\b",4);
                        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                            local_908,0x12);
                      }
                    }
                    goto LAB_1004b453a;
                  }
                }
              }
LAB_1004b429f:
              FUN_1001e9eb9(lVar1);
              iVar9 = -0x80;
              goto LAB_1004b365b;
            }
            FUN_1001e9eb9(lVar1);
          }
          else {
            uVar11 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar11,0x10);
            if (cVar8 != '\0') {
              builtin_strncpy(local_908,"\x02\x02\"\b",4);
              local_904 = "Assertion failure";
              local_8fc = 0x822;
              local_8fa = "inItem->downloadTargetType == kDownloadDataDeliveryType_File";
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_908,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          goto LAB_1004b391a;
        }
        uVar11 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar11,0x10);
        if (cVar8 != '\0') {
          builtin_strncpy(local_908,"\x02\x02\"\b",4);
          local_904 = "Assertion failure";
          local_8fc = 0x822;
          local_8fa = "( DownloadItem_IsValid(inItem) && ((inItem)->isContainer == false) )";
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_908,0x16);
        }
        FUN_1001782e9(0,0);
        iVar9 = 0x1f49;
LAB_1004b37c2:
        uVar11 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar11,0x10);
        if (cVar8 != '\0') {
          local_8fa = (char *)CONCAT44(local_8fa._4_4_,iVar9);
          goto LAB_1004b3bc1;
        }
      }
      if (iVar9 == -0x22) {
        iVar9 = -0x22;
        if ((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(param_1 + 0x144) & 0x40) == 0)) {
          *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x5ca) = 1;
        }
      }
      goto LAB_1004b365b;
    }
    uVar11 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar11,0x10);
    if (cVar8 != '\0') {
      local_8fa = "( DownloadItem_IsValid(inItem) && ((inItem)->isContainer == false) )";
      goto LAB_1004b383f;
    }
  }
  else {
    if ((cVar7 != '\0') && (*(char *)(param_1 + 0x778) != '\0')) {
      FUN_1004b15f3(param_1);
      if ((*(char *)(param_1 + 0x778) != '\0') ||
         (((iVar9 = 0, *(int *)(param_1 + 0x140) == 0x66696c65 &&
           (*(int *)(param_1 + 0x1304) != 0x636f7079)) && (*(int *)(param_1 + 0x7d8) < 0)))) {
        cVar8 = FUN_1004aa626(param_1);
        if ((cVar8 == '\0') || (*(char *)(param_1 + 0x778) == '\0')) {
          uVar11 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar11,0x10);
          if (cVar8 != '\0') {
            builtin_strncpy(local_908,"\x02\x02\"\b",4);
            local_904 = "Assertion failure";
            local_8fc = 0x822;
            local_8fa = "( DownloadItem_IsValid(inItem) && (inItem)->isContainer )";
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_908,0x16);
          }
          FUN_1001782e9(0,0);
          uVar11 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar11,0x10);
          iVar9 = 0x1f49;
          if (cVar8 != '\0') {
            builtin_strncpy(local_908,"\x02\x02\"\b",4);
            local_904 = "Assertion failure";
            local_8fc = 0x400;
            local_8fa = (char *)CONCAT44(local_8fa._4_4_,0x1f49);
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",local_908,0x12);
          }
        }
        else {
          FUN_1004ab66b(param_1,0);
          iVar9 = 0;
        }
      }
      goto LAB_1004b365b;
    }
    uVar11 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar11,0x10);
    if (cVar8 != '\0') {
      local_8fa = "( DownloadItem_IsValid(inItem) && (inItem)->isContainer )";
LAB_1004b383f:
      local_8fc = 0x822;
      local_904 = "Assertion failure";
      builtin_strncpy(local_908,"\x02\x02\"\b",4);
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_908,0x16);
    }
  }
  FUN_1001782e9(0,0);
  iVar9 = 0x1f49;
LAB_1004b365b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar9;
}

