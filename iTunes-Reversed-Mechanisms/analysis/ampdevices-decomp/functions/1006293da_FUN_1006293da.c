// name: FUN_1006293da
// address: 1006293da

int FUN_1006293da(long param_1,long param_2,ulong param_3,void *param_4,uint param_5,long param_6)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  size_t sVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  bool bVar18;
  long local_6c0;
  uint local_6b4;
  undefined8 local_6b0;
  size_t local_6a8;
  undefined8 *local_6a0;
  long local_698;
  void *local_690;
  ulong local_688;
  void *local_680;
  long local_678;
  long local_670;
  uint local_664;
  long local_660;
  undefined4 local_658;
  char *local_654;
  undefined2 local_64c;
  char *local_64a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_678 = 0;
  local_690 = param_4;
  local_670 = param_2;
  local_664 = param_5;
  if (param_2 == 0 || param_3 == 0) {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "schemaFiles != nullptr && numFiles != 0";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(long *)(param_1 + 0x30) != 0) {
      *(long *)(param_1 + 0x38) = param_6;
      if (param_6 == 0) {
        local_6b0 = 0;
      }
      else {
        local_6b0 = *(undefined8 *)(param_6 + 0x148);
      }
      if ((param_5 & 8) != 0) {
        *(undefined1 *)(param_1 + 0x1045) = 0;
      }
      if ((param_5 & 0x10) != 0) {
        *(undefined1 *)(param_1 + 0x1046) = 0;
      }
      *(ulong *)(param_1 + 0x1468) = param_3;
      *(undefined8 *)(param_1 + 0x1470) = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_3;
      uVar6 = SUB168(auVar1 * ZEXT816(0x420),0);
      uVar12 = 0xffffffffffffffff;
      if (SUB168(auVar1 * ZEXT816(0x420),8) == 0) {
        uVar12 = uVar6;
      }
      local_688 = param_3;
      pvVar7 = operator_new__(uVar12,(nothrow_t *)PTR_nothrow_10082c970);
      *(void **)(param_1 + 0x1478) = pvVar7;
      if (pvVar7 == (void *)0x0) {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x822;
          local_44a = "mDatabaseSpecs != nullptr";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        FUN_1001782e9(0,0);
        iVar3 = -0x6c;
        goto LAB_1006294aa;
      }
      ___bzero(pvVar7,uVar6);
      local_680 = (void *)(param_1 + 0x1480);
      ___bzero(local_680,0x420);
      pvVar7 = (void *)(param_1 + 0x1048);
      _memcpy(pvVar7,local_690,0x420);
      local_660 = param_1;
      if (*(char *)(param_1 + 0x1045) == '\x01') {
        local_698 = 0;
        FUN_1001e04f5("sentinel",&local_458);
        iVar3 = FUN_10017ecc9(pvVar7,&local_458,local_680,0);
        if (iVar3 == -0x2b) {
          iVar4 = FUN_1001891ea(pvVar7,&local_458,local_680);
          if (iVar4 != -0x80) {
            if (iVar4 == 0) {
              FUN_100186d13(local_680,1);
              *(undefined4 *)(local_660 + 0x48) = 2;
LAB_10062966a:
              iVar4 = FUN_10017cc65(local_680,0x64617461,3,&local_698);
              if (iVar4 != -0x80) {
                if (iVar4 == 0) {
                  if (iVar3 != -0x2b) {
                    iVar3 = FUN_100187fa3(local_698,0,&local_58,8,0,&local_6c0);
                    if (iVar3 == -0x27) {
                      lVar15 = 0;
                    }
                    else {
                      lVar15 = CONCAT44(uStack_54,local_58);
                    }
                    *(uint *)(local_660 + 0x48) = (lVar15 == 0) + 2;
                  }
                  local_58 = 0;
                  uStack_54 = 0;
                  iVar4 = FUN_10017cf3c(local_698,0);
                  if (iVar4 != -0x80) {
                    if (iVar4 == 0) {
                      iVar4 = FUN_100188151(local_698,0,&local_58,8,0,&local_6c0);
                      if (iVar4 != -0x80) {
                        if (iVar4 == 0) {
                          iVar4 = 0;
                          if (local_6c0 != 8) {
                            uVar8 = FUN_1001cc310();
                            cVar2 = _os_log_type_enabled(uVar8,0x10);
                            if (cVar2 != '\0') {
                              local_658 = 0x8220202;
                              local_654 = "Assertion failure";
                              local_64c = 0x822;
                              local_64a = "numBytes == sizeof(sentinelData)";
                              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",
                                                  &local_658,0x16);
                            }
                            FUN_1001782e9(0,0);
                            iVar4 = -0x24;
                          }
                        }
                        else {
                          uVar8 = FUN_1001cc310();
                          cVar2 = _os_log_type_enabled(uVar8,0x10);
                          if (cVar2 != '\0') {
                            local_64a = (char *)CONCAT44(local_64a._4_4_,iVar4);
                            goto LAB_1006299e9;
                          }
                        }
                      }
                    }
                    else {
                      uVar8 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar2 != '\0') {
                        local_64a = (char *)CONCAT44(local_64a._4_4_,iVar4);
                        goto LAB_1006299e9;
                      }
                    }
                  }
                }
                else {
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar2 != '\0') {
                    local_64a = (char *)CONCAT44(local_64a._4_4_,iVar4);
                    goto LAB_1006299e9;
                  }
                }
              }
            }
            else {
              uVar8 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar8,0x10);
              if (cVar2 != '\0') {
                local_64a = (char *)CONCAT44(local_64a._4_4_,iVar4);
LAB_1006299e9:
                local_64c = 0x400;
                local_654 = "Assertion failure";
                local_658 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_658,0x12
                                   );
              }
            }
          }
        }
        else {
          iVar4 = iVar3;
          if (iVar3 != -0x80) {
            if (iVar3 == 0) goto LAB_10062966a;
            uVar8 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar8,0x10);
            if (cVar2 != '\0') {
              local_658 = 0x8220202;
              local_654 = "Assertion failure";
              local_64c = 0x400;
              local_64a = (char *)CONCAT44(local_64a._4_4_,iVar3);
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_658,0x12);
            }
          }
        }
        if (local_698 != 0) {
          FUN_10017cdfb();
        }
        if (iVar4 == 0) {
          pvVar7 = operator_new(0x420,(nothrow_t *)PTR_nothrow_10082c970);
          if (pvVar7 == (void *)0x0) {
            uVar8 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar8,0x10);
            if (cVar2 != '\0') {
              local_658 = 0x8220202;
              local_654 = "Assertion failure";
              local_64c = 0x822;
              local_64a = "spec != __null";
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_658,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          else {
            _memcpy(pvVar7,local_680,0x420);
            iVar3 = FUN_1001ee6ff(FUN_10062705a,pvVar7,0xffffffff,0,0,"");
            if (iVar3 != 0) {
              operator_delete(pvVar7);
            }
          }
        }
        else if (iVar4 != -0x80) {
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 != '\0') {
            local_458 = 0x8220202;
            local_454 = "Assertion failure";
            local_44c = 0x400;
            local_44a = (char *)CONCAT44(local_44a._4_4_,iVar4);
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_458,0x12);
          }
        }
      }
      if (-1 < (char)local_664) {
        puVar10 = (undefined8 *)(local_670 + 8);
        lVar15 = 0;
        uVar12 = local_688;
        do {
          FUN_1001e4a2e(*puVar10,&local_658);
          iVar3 = FUN_10017ecc9(local_690,&local_658,*(long *)(local_660 + 0x1478) + lVar15,0);
          if (iVar3 != -0x2b) {
            if (iVar3 != 0) {
              uVar8 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar8,0x10);
              if (cVar2 != '\0') {
                local_458 = 0x8220202;
                local_454 = "Assertion failure";
                local_44c = 0x822;
                local_44a = "status == noErr or status == fnfErr";
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_458,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              goto LAB_100629fa7;
            }
            if ((local_664 >> 10 & 1) != 0) {
              iVar3 = FUN_100193820(*(long *)(local_660 + 0x1478) + lVar15);
              if (iVar3 != 0) {
                FUN_100182d4d(*(long *)(local_660 + 0x1478) + lVar15);
              }
              ___bzero(*(long *)(local_660 + 0x1478) + lVar15,0x420);
            }
          }
          lVar15 = lVar15 + 0x420;
          puVar10 = puVar10 + 5;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      local_458 = local_458 & 0xffffff00;
      lVar15 = *(long *)(local_660 + 0x38);
      if (lVar15 == 0) {
        pcVar13 = "/";
      }
      else {
        if (*(char *)(lVar15 + 0x150) != '\0') {
          FUN_1001dfbb3(lVar15 + 0x150,&local_458,0x400);
          lVar15 = *(long *)(local_660 + 0x38);
        }
        pcVar13 = *(char **)(lVar15 + 400);
      }
      if ((char)local_664 < '\0') {
LAB_100629c6e:
        local_6a8 = _strlen((char *)&local_458);
        if (pcVar13 != (char *)0x0) {
          *(char *)((long)&local_458 + local_6a8) = *pcVar13;
          *(undefined1 *)((long)&local_458 + local_6a8 + 1) = 0;
          local_6a8 = local_6a8 + 1;
        }
        FUN_1001df1e7(*(undefined8 *)(local_670 + 8),&local_458,0x400);
        local_6a0 = (undefined8 *)(local_660 + 0x68);
        iVar3 = FUN_1001d2d5d(&local_458,local_6b0,local_664 & 7);
        if (iVar3 != -0x80) {
          if (iVar3 == 0) {
            cVar2 = FUN_10017cbd0(*(undefined8 *)(local_660 + 0x1478));
            if (cVar2 == '\0') {
              if (-1 < (char)local_664) {
                FUN_1001e4a2e(*(undefined8 *)(local_670 + 8),&local_658);
                iVar3 = FUN_10017ecc9(local_690,&local_658,*(undefined8 *)(local_660 + 0x1478),0);
                if (iVar3 == -0x80) goto LAB_100629fdf;
                if (iVar3 != 0) {
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar2 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                    goto LAB_100629f6c;
                  }
                  goto LAB_100629fa7;
                }
              }
              *(long *)(local_660 + 0x1470) = *(long *)(local_660 + 0x1470) + 1;
              lVar15 = *(long *)(local_670 + 0x18);
              if (lVar15 != 0) {
                lVar16 = *(long *)(local_670 + 0x20);
                if (lVar16 == 0) {
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar2 != '\0') {
                    local_58 = 0x8220202;
                    uStack_54 = 0x7a0a90;
                    uStack_50 = 1;
                    local_4c = 0x822;
                    local_4a = "schemaFiles[0].encryptionKeySize != 0";
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                  lVar15 = *(long *)(local_670 + 0x18);
                  lVar16 = *(long *)(local_670 + 0x20);
                }
                uVar5 = _sqlite3_key(*local_6a0,lVar15,lVar16);
                iVar3 = FUN_1001d2d10(uVar5);
                if (iVar3 == -0x80) goto LAB_100629fdf;
                if (iVar3 != 0) {
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar2 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                    goto LAB_100629f6c;
                  }
                  goto LAB_100629fa7;
                }
              }
              if (*(long *)(local_670 + 0x10) != 0) {
                FUN_1001d3230(*local_6a0,"page_size");
              }
              FUN_1001d3230(*(undefined8 *)(local_660 + 0x68),"auto_vacuum",1);
              if (*(char *)(local_660 + 0x1046) == '\x01') {
                iVar3 = FUN_100627824(local_660);
                if (iVar3 == -0x80) goto LAB_100629fdf;
                if (iVar3 != 0) {
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar2 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                    goto LAB_100629f6c;
                  }
                  goto LAB_100629fa7;
                }
              }
            }
            if (1 < local_688) {
              local_6b4 = local_664 & 2;
              lVar15 = local_688 - 1;
              plVar17 = (long *)(local_670 + 0x48);
              lVar16 = 0x420;
              do {
                cVar2 = FUN_10017cbd0(*(long *)(local_660 + 0x1478) + lVar16);
                if (cVar2 == '\0') {
                  *(undefined1 *)((long)&local_458 + local_6a8) = 0;
                  FUN_1001df1e7(plVar17[-3],&local_458,0x400);
                  iVar3 = FUN_1001d2d5d(&local_458,local_6b0,local_6b4,&local_678);
                  if (iVar3 != 0) {
                    if (iVar3 == -0x80) goto LAB_100629fdf;
                    uVar8 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar8,0x10);
                    if (cVar2 == '\0') goto LAB_100629fa7;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                    goto LAB_100629f6c;
                  }
                  *(long *)(local_660 + 0x1470) = *(long *)(local_660 + 0x1470) + 1;
                  lVar14 = plVar17[-1];
                  if (lVar14 != 0) {
                    lVar11 = *plVar17;
                    if (lVar11 == 0) {
                      uVar8 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar2 != '\0') {
                        local_58 = 0x8220202;
                        uStack_54 = 0x7a0a90;
                        uStack_50 = 1;
                        local_4c = 0x822;
                        local_4a = "schemaFiles[i].encryptionKeySize != 0";
                        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",
                                            &local_58,0x16);
                      }
                      FUN_1001782e9(0,0);
                      lVar14 = plVar17[-1];
                      lVar11 = *plVar17;
                    }
                    uVar5 = _sqlite3_key(local_678,lVar14,lVar11);
                    iVar3 = FUN_1001d2d10(uVar5);
                    if (iVar3 != 0) {
                      if (iVar3 == -0x80) goto LAB_100629fdf;
                      uVar8 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar2 == '\0') goto LAB_100629fa7;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                      goto LAB_100629f6c;
                    }
                  }
                  if (plVar17[-2] != 0) {
                    FUN_1001d3230(local_678,"page_size");
                  }
                  bVar18 = -1 < (char)local_664;
                  FUN_1001d3230(local_678,"auto_vacuum",1);
                  FUN_1001d308b(local_678);
                  local_678 = 0;
                  if (bVar18) {
                    FUN_1001e4a2e(plVar17[-3],&local_658);
                    iVar3 = FUN_10017ecc9(local_690,&local_658,
                                          *(long *)(local_660 + 0x1478) + lVar16,0);
                    if (iVar3 != 0) {
                      if (iVar3 == -0x80) goto LAB_100629fdf;
                      uVar8 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar2 == '\0') goto LAB_100629fa7;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                      goto LAB_100629f6c;
                    }
                  }
                }
                lVar16 = lVar16 + 0x420;
                plVar17 = plVar17 + 5;
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
              local_688 = local_688 - 1;
              puVar10 = (undefined8 *)(local_670 + 0x48);
              do {
                *(undefined1 *)((long)&local_458 + local_6a8) = 0;
                FUN_1001df1e7(puVar10[-3],&local_458,0x400);
                iVar3 = FUN_1001d2f0c(*local_6a0,&local_458,puVar10[-4],puVar10[-1],*puVar10);
                if (iVar3 != 0) {
                  if (iVar3 == -0x80) goto LAB_100629fdf;
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar2 == '\0') goto LAB_100629fa7;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                  goto LAB_100629f6c;
                }
                puVar10 = puVar10 + 5;
                local_688 = local_688 - 1;
              } while (local_688 != 0);
            }
            if (*(char *)(local_660 + 0x1045) == '\x01') {
              if (((local_664 & 0x20) != 0) || (*(int *)(local_660 + 0x48) == 3)) {
LAB_10062a294:
                iVar4 = FUN_100627570(local_660);
                if (iVar4 != 0) {
                  if (*(char *)(local_660 + 0x1045) == '\x01') {
                    FUN_100182d4d(local_680);
                  }
                  iVar3 = -0x80;
                  if (iVar4 != -0x80) {
                    uVar8 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar8,0x10);
                    iVar3 = iVar4;
                    if (cVar2 != '\0') {
                      local_58 = 0x8220202;
                      uStack_54 = 0x7a0a90;
                      uStack_50 = 1;
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                    }
                  }
                  goto LAB_100629fdf;
                }
              }
            }
            else if ((local_664 & 0x20) != 0) goto LAB_10062a294;
            iVar3 = FUN_1001d31d5(*(undefined8 *)(local_660 + 0x68),&local_58);
            uVar5 = 0;
            if (iVar3 == 0) {
              uVar5 = local_58;
            }
            *(undefined4 *)(local_660 + 0x58) = uVar5;
            if (iVar3 != -0x80) {
              if (iVar3 != 0) {
                uVar8 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar8,0x10);
                if (cVar2 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                  goto LAB_100629f6c;
                }
                goto LAB_100629fa7;
              }
              if (*(char *)(local_660 + 0x1046) == '\x01') {
                iVar3 = FUN_100627a6a(local_660);
                if (iVar3 == -0x80) goto LAB_100629fdf;
                if (iVar3 != 0) {
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar2 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                    goto LAB_100629f6c;
                  }
                  goto LAB_100629fa7;
                }
              }
              if ((local_664 >> 0xb & 1) != 0) {
                iVar3 = FUN_100628ba2(local_660);
                if (iVar3 != 0) {
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar2 != '\0') {
                    local_58 = 0x8220202;
                    uStack_54 = 0x7a0a90;
                    uStack_50 = 1;
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                }
                *(undefined4 *)(local_660 + 0x58) = 0;
              }
              if ((local_664 >> 8 & 1) == 0) {
                iVar3 = FUN_100627e58(local_660);
                if (iVar3 != -0x80) {
                  if (iVar3 == 0) {
                    iVar3 = FUN_1001d318e(*(undefined8 *)(local_660 + 0x68),
                                          *(undefined4 *)(local_660 + 0x10));
                    if (iVar3 == -0x80) goto LAB_100629fdf;
                    if (iVar3 == 0) goto LAB_10062a3f9;
                    uVar8 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar8,0x10);
                    if (cVar2 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                      goto LAB_100629f6c;
                    }
                  }
                  else {
                    uVar8 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar8,0x10);
                    if (cVar2 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
LAB_100629f6c:
                      uStack_50 = 1;
                      uStack_54 = 0x7a0a90;
                      local_4c = 0x400;
                      local_58 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                    }
                  }
                  goto LAB_100629fa7;
                }
              }
              else {
LAB_10062a3f9:
                lVar15 = local_660;
                puVar10 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
                if (puVar10 == (undefined8 *)0x0) {
                  *(undefined8 *)(lVar15 + 0x40) = 0;
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar2 != '\0') {
                    local_58 = 0x8220202;
                    uStack_54 = 0x7a0a90;
                    uStack_50 = 1;
                    local_4c = 0x822;
                    local_4a = "mExtensions != nullptr";
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                  iVar3 = -0x6c;
                }
                else {
                  *puVar10 = 0;
                  puVar10[1] = 0;
                  *(undefined1 *)(puVar10 + 2) = 0;
                  *(undefined8 **)(lVar15 + 0x40) = puVar10;
                  iVar3 = FUN_100597308(puVar10,*(undefined8 *)(lVar15 + 0x68));
                  if ((iVar3 == -0x80) || (iVar3 == 0)) goto LAB_100629fa7;
                  uVar8 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar2 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                    goto LAB_10062a772;
                  }
                }
              }
            }
          }
          else {
            uVar8 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar8,0x10);
            if (cVar2 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
              goto LAB_100629f6c;
            }
LAB_100629fa7:
            if (iVar3 == 0) {
              iVar3 = 0;
              goto LAB_1006294aa;
            }
          }
        }
      }
      else {
        sVar9 = _strlen((char *)&local_458);
        iVar3 = FUN_1001823de(local_690,(long)&local_458 + sVar9,0x400 - sVar9);
        if (iVar3 != -0x80) {
          if (iVar3 == 0) goto LAB_100629c6e;
          uVar8 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar8,0x10);
          if (cVar2 == '\0') goto LAB_100629fdf;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
LAB_10062a772:
          local_4c = 0x400;
          uStack_50 = 1;
          uStack_54 = 0x7a0a90;
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
LAB_100629fdf:
      if (local_678 != 0) {
        FUN_1001d308b();
      }
      if (*(long *)(local_660 + 0x68) != 0) {
        FUN_1001d308b();
        *(undefined8 *)(local_660 + 0x68) = 0;
      }
      lVar15 = local_660;
      if (*(char *)(local_660 + 0x1044) == '\x01') {
        *(undefined1 *)(local_660 + 0x1044) = 0;
      }
      if (*(void **)(local_660 + 0x1478) != (void *)0x0) {
        operator_delete__(*(void **)(local_660 + 0x1478));
      }
      *(undefined8 *)(lVar15 + 0x1478) = 0;
      goto LAB_1006294aa;
    }
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "mSchema.tables != nullptr";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar3 = -0x32;
LAB_1006294aa:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

