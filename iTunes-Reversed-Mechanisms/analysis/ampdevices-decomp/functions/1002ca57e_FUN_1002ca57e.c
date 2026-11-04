// name: FUN_1002ca57e
// address: 1002ca57e

void FUN_1002ca57e(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  char *pcVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  ulong uVar17;
  bool bVar18;
  ulong local_f90;
  long local_f88;
  long *local_f80;
  long *local_f78;
  undefined8 local_f70;
  long local_f68;
  ulong local_f60;
  long *local_f58;
  long *local_f50;
  long local_f48;
  long *local_f40;
  uint local_f34;
  long *local_f30;
  long local_f28;
  undefined4 local_f20;
  uint local_f1c;
  long local_f18;
  long local_f10;
  long *local_f08;
  long *local_f00;
  char *local_ef8 [132];
  undefined1 local_ad8 [512];
  undefined1 local_8d8 [512];
  undefined4 local_6d8 [128];
  undefined1 local_4d8 [128];
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined2 uStack_44c;
  undefined2 uStack_44a;
  undefined2 uStack_448;
  undefined4 uStack_446;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_f1c = param_4;
  plVar8 = operator_new(0x1c8,(nothrow_t *)PTR_nothrow_10082c970);
  local_f30 = plVar8;
  local_f00 = param_1;
  if (plVar8 == (long *)0x0) {
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_458 = 0x8220202;
      uStack_454 = 0x7a0a90;
      uStack_450 = 1;
      uStack_44c = 0x822;
      uStack_44a = 0xbe6d;
      uStack_448 = 0x7b;
      uStack_446 = 1;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    param_1 = local_f00;
    iVar5 = -0x6c;
    goto LAB_1002ca8e2;
  }
  FUN_10020718a(plVar8);
  iVar5 = _sqlite3_vfs_register((sqlite3_vfs *)(plVar8 + 1),0);
  if (iVar5 == -0x80) goto LAB_1002ca8e2;
  if (iVar5 == 0) {
    FUN_10062797c(param_1[1],2,0x75,0,0,1);
    iVar5 = FUN_1006293da(param_1[1],&PTR_s_library_10085a4b0,4,param_1 + 10,0x8a,local_f30);
    if (iVar5 == -0x80) goto LAB_1002ca8e2;
    if (iVar5 == 0) {
      if (param_1[0x127] != 0) {
        FUN_10039f656(param_1[0x127],*(undefined8 *)(param_1[1] + 0x68));
      }
      iVar5 = FUN_1001d3230(*(undefined8 *)(param_1[1] + 0x68),"cache_size",0x2000);
      if ((iVar5 != -0x80) && (iVar5 != 0)) {
        uVar9 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar9,0x10);
        if (cVar4 != '\0') {
          local_458 = 0x8220202;
          uStack_454 = 0x7a0a90;
          uStack_450 = 1;
          uStack_44c = 0x400;
          uStack_44a = (undefined2)iVar5;
          uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_458,0x12);
        }
      }
      plVar8 = param_1 + 0x122;
      iVar5 = FUN_100469634(*param_1,plVar8);
      param_1 = local_f00;
      if (iVar5 == -0x80) goto LAB_1002ca8e2;
      if (iVar5 == 0) {
        FUN_100160772(param_2,0);
        plVar10 = operator_new(0xe30,(nothrow_t *)PTR_nothrow_10082c970);
        if (plVar10 != (long *)0x0) {
          *plVar10 = (long)&PTR_FUN_100846430;
          lVar13 = local_f00[1];
          plVar10[1] = *local_f00;
          plVar10[2] = lVar13;
          plVar10[3] = (long)plVar8;
          plVar10[4] = local_f00[0x112];
          plVar10[5] = 0;
          *(undefined1 *)(plVar10 + 6) = 0;
          *(undefined2 *)(plVar10 + 0x86) = 0;
          *(undefined2 *)(plVar10 + 0xc6) = 0;
          *(undefined2 *)(plVar10 + 0x106) = 0;
          *(undefined2 *)(plVar10 + 0x146) = 0;
          *(undefined2 *)(plVar10 + 0x186) = 0;
          plVar10[7] = 0;
          plVar10[8] = 0;
          *(undefined8 *)((long)plVar10 + 0x42) = 0;
          *(undefined8 *)((long)plVar10 + 0x4a) = 0;
          ___bzero(plVar10 + 0xc,0x1d2);
          local_f08 = plVar10 + 0x17;
          iVar5 = FUN_1001dcbb8(local_f08,1);
          if (iVar5 != -0x80) {
            if (iVar5 == 0) {
              iVar5 = FUN_1001dcbb8(plVar10 + 0x21,1);
              if (iVar5 != -0x80) {
                if (iVar5 != 0) {
                  uVar9 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar4 != '\0') {
                    uStack_44a = (undefined2)iVar5;
                    uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
                    goto LAB_1002cb8a6;
                  }
                  goto LAB_1002cb8b9;
                }
                iVar5 = FUN_1001dcbb8(plVar10 + 0x2b,1);
                if (iVar5 == -0x80) goto LAB_1002cbce5;
                if (iVar5 != 0) {
                  uVar9 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar4 != '\0') {
                    uStack_44a = (undefined2)iVar5;
                    uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
                    goto LAB_1002cb8a6;
                  }
                  goto LAB_1002cb8b9;
                }
                iVar5 = FUN_1001dcbb8(plVar10 + 0x35,1);
                if (iVar5 == -0x80) goto LAB_1002cbce5;
                if (iVar5 != 0) {
                  uVar9 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar4 != '\0') {
                    uStack_44a = (undefined2)iVar5;
                    uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
                    goto LAB_1002cb8a6;
                  }
                  goto LAB_1002cb8b9;
                }
                *(undefined1 *)(plVar10 + 10) = 0;
                plVar10[0x42] = 0;
                plVar10[0x43] = 0;
                plVar10[0x44] = 0;
                plVar10[0x45] = 0;
                goto LAB_1002cbb79;
              }
            }
            else {
              uVar9 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              if (cVar4 != '\0') {
                uStack_44a = (undefined2)iVar5;
                uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
LAB_1002cb8a6:
                uStack_44c = 0x400;
                uStack_450 = 1;
                uStack_454 = 0x7a0a90;
                local_458 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_458,0x12
                                   );
              }
LAB_1002cb8b9:
              if (iVar5 != 0) {
                uVar9 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar9,0x10);
                if (cVar4 != '\0') {
                  uStack_44a = (undefined2)iVar5;
                  uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
LAB_1002cbe28:
                  uStack_450 = 1;
                  uStack_454 = 0x7a0a90;
                  uStack_44c = 0x400;
                  local_458 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_458,
                                      0x12);
                }
LAB_1002cb8df:
                (**(code **)(*plVar10 + 8))(plVar10);
                param_1 = local_f00;
                if (iVar5 == -0x80) goto LAB_1002ca8e2;
                if (iVar5 != 0) goto LAB_1002cb332;
LAB_1002cb8fc:
                uVar7 = FUN_100628b36(local_f00[1],1);
                local_f08 = (long *)CONCAT44(local_f08._4_4_,uVar7);
                if ((local_f00[0x116] == 0) || (local_f00[0x117] == 0)) {
LAB_1002cb95a:
                  if ((local_f00[0x118] == 0) || (local_f00[0x119] == 0)) {
LAB_1002cb9ab:
                    if ((local_f00[0x11a] == 0) || (local_f00[0x11b] == 0)) {
LAB_1002cb9fc:
                      if (local_f00[0x11c] == 0) {
LAB_1002cba48:
                        if (((int)local_f00[0x11e] != 0) && (local_f00[0x11f] != 0)) {
                          lVar13 = 8;
                          uVar17 = 0;
                          do {
                            local_ef8[0] = _sqlite3_mprintf(
                                                  "UPDATE container SET %s=%u WHERE %s=%lld",
                                                  "media_kinds",
                                                  (ulong)*(uint *)(local_f00[0x11f] + lVar13),"pid",
                                                  *(undefined8 *)(local_f00[0x11f] + -8 + lVar13));
                            if (local_ef8[0] == (char *)0x0) {
                              uVar9 = FUN_1001cc310();
                              cVar4 = _os_log_type_enabled(uVar9,0x10);
                              if (cVar4 != '\0') {
                                local_458 = 0x8220202;
                                uStack_454 = 0x7a0a90;
                                uStack_450 = 1;
                                uStack_44c = 0x822;
                                uStack_44a = 0xa01f;
                                uStack_448 = 0x7a;
                                uStack_446 = 1;
                                __os_log_error_impl(0x100000000,uVar9,0x10,
                                                    "%{public}s: (%{public}s)",&local_458,0x16);
                              }
                              FUN_1001782e9(0,0);
                              iVar5 = -0x6c;
                              goto LAB_1002cc0c4;
                            }
                            iVar5 = FUN_100626ef4(local_f00[1],local_ef8);
                            if (iVar5 != 0) {
                              if (iVar5 == -0x80) goto LAB_1002cc0c4;
                              uVar9 = FUN_1001cc310();
                              cVar4 = _os_log_type_enabled(uVar9,0x10);
                              if (cVar4 == '\0') goto LAB_1002cc0c4;
                              uStack_44a = (undefined2)iVar5;
                              uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
                              goto LAB_1002cc0b1;
                            }
                            uVar17 = uVar17 + 1;
                            lVar13 = lVar13 + 0x10;
                          } while (uVar17 < *(uint *)(local_f00 + 0x11e));
                        }
                        if ((local_f00[0x120] == 0) || (local_f00[0x121] == 0)) {
LAB_1002cbb26:
                          if ((int)local_f08 == 0) {
                            lVar13 = local_f00[1];
                            iVar5 = *(int *)(lVar13 + 0x1040);
                            *(int *)(lVar13 + 0x1040) = iVar5 + -1;
                            if (iVar5 < 2) {
                              iVar5 = FUN_1001d3605(*(undefined8 *)(lVar13 + 0x68));
                              param_1 = local_f00;
                              if (iVar5 == -0x80) goto LAB_1002ca8e2;
                              if (iVar5 != 0) {
                                uVar9 = FUN_1001cc310(local_f00);
                                cVar4 = _os_log_type_enabled(uVar9,0x10);
                                param_1 = local_f00;
                                if (cVar4 == '\0') goto LAB_1002ca8e2;
                                uStack_44a = (undefined2)iVar5;
                                uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
                                goto LAB_1002cb381;
                              }
                            }
                          }
                          FUN_1002ca316();
                          param_1 = local_f00;
                          iVar5 = 0;
                          goto LAB_1002ca8e2;
                        }
                        iVar5 = FUN_1004681ec(*local_f00);
                        if (iVar5 != -0x80) {
                          if (iVar5 == 0) goto LAB_1002cbb26;
                          uVar9 = FUN_1001cc310();
                          cVar4 = _os_log_type_enabled(uVar9,0x10);
                          if (cVar4 != '\0') {
                            uStack_44a = (undefined2)iVar5;
                            uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
                            goto LAB_1002cc0b1;
                          }
                        }
                      }
                      else {
                        iVar5 = FUN_100468d6a(*local_f00,local_f00[0x11d],local_f00[0x11c],
                                              "container","pid","name_order");
                        if (iVar5 != -0x80) {
                          if (iVar5 == 0) goto LAB_1002cba48;
                          uVar9 = FUN_1001cc310();
                          cVar4 = _os_log_type_enabled(uVar9,0x10);
                          if (cVar4 != '\0') {
                            uStack_44a = (undefined2)iVar5;
                            uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
                            goto LAB_1002cc0b1;
                          }
                        }
                      }
                    }
                    else {
                      iVar5 = FUN_100468d6a(*local_f00,local_f00[0x11b],local_f00[0x11a],"artist",
                                            "pid","name_order");
                      if (iVar5 != -0x80) {
                        if (iVar5 == 0) goto LAB_1002cb9fc;
                        uVar9 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar9,0x10);
                        if (cVar4 != '\0') {
                          uStack_44a = (undefined2)iVar5;
                          uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
                          goto LAB_1002cc0b1;
                        }
                      }
                    }
                  }
                  else {
                    iVar5 = FUN_100468d6a(*local_f00,local_f00[0x119],local_f00[0x118],"album","pid"
                                          ,"name_order");
                    if (iVar5 != -0x80) {
                      if (iVar5 == 0) goto LAB_1002cb9ab;
                      uVar9 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar9,0x10);
                      if (cVar4 != '\0') {
                        uStack_44a = (undefined2)iVar5;
                        uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
                        goto LAB_1002cc0b1;
                      }
                    }
                  }
                }
                else {
                  iVar5 = FUN_10046798c(*local_f00);
                  if (iVar5 == -0x80) goto LAB_1002cc0c4;
                  if (iVar5 == 0) goto LAB_1002cb95a;
                  uVar9 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar4 == '\0') goto LAB_1002cc0c4;
                  uStack_44a = (undefined2)iVar5;
                  uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
LAB_1002cc0b1:
                  uStack_44c = 0x400;
                  uStack_450 = 1;
                  uStack_454 = 0x7a0a90;
                  local_458 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_458,
                                      0x12);
                }
LAB_1002cc0c4:
                param_1 = local_f00;
                if ((int)local_f08 == 0) {
                  iVar6 = FUN_100628b72(local_f00[1],iVar5);
                  if ((iVar6 != -0x80) && (iVar6 != 0)) {
                    uVar9 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar9,0x10);
                    if (cVar4 != '\0') {
                      local_458 = 0x8220202;
                      uStack_454 = 0x7a0a90;
                      uStack_450 = 1;
                      uStack_44c = 0x400;
                      uStack_44a = (undefined2)iVar6;
                      uStack_448 = (undefined2)((uint)iVar6 >> 0x10);
                      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",
                                          &local_458,0x12);
                    }
                  }
                  param_1 = local_f00;
                  if (iVar5 == 0) {
                    iVar5 = iVar6;
                  }
                }
                goto LAB_1002ca8e2;
              }
LAB_1002cbb79:
              iVar5 = FUN_1003f0592(param_2,plVar10,param_3,(*(byte *)(local_f00 + 0x112) & 2) == 0)
              ;
              if (iVar5 != -0x80) {
                if (iVar5 != 0) {
                  uVar9 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar4 != '\0') {
                    uStack_44a = (undefined2)iVar5;
                    uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
                    goto LAB_1002cbe28;
                  }
                  goto LAB_1002cb8df;
                }
                iVar5 = FUN_10062b22e(plVar10[2],"location_kind_map","kind",local_f08);
                if (iVar5 != -0x80) {
                  if (iVar5 == 0) {
                    iVar5 = FUN_10062b22e(plVar10[2],"genre_map","genre",plVar10 + 0x21);
                    if (iVar5 == -0x80) goto LAB_1002cbce5;
                    if (iVar5 != 0) {
                      uVar9 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar9,0x10);
                      if (cVar4 != '\0') {
                        uStack_44a = (undefined2)iVar5;
                        uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
                        goto LAB_1002cc2a6;
                      }
                      goto LAB_1002cc2b9;
                    }
                    iVar5 = FUN_10062b650(plVar10[2],"genre_map","genre_order","id",plVar10 + 0x21);
                    if (iVar5 == -0x80) goto LAB_1002cbce5;
                    if (iVar5 != 0) {
                      uVar9 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar9,0x10);
                      if (cVar4 != '\0') {
                        uStack_44a = (undefined2)iVar5;
                        uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
                        goto LAB_1002cc2a6;
                      }
                      goto LAB_1002cc2b9;
                    }
                    iVar5 = FUN_10062b22e(plVar10[2],"category_map","category",plVar10 + 0x2b);
                    if (iVar5 == -0x80) goto LAB_1002cbce5;
                    if (iVar5 != 0) {
                      uVar9 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar9,0x10);
                      if (cVar4 != '\0') {
                        uStack_44a = (undefined2)iVar5;
                        uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
                        goto LAB_1002cc2a6;
                      }
                      goto LAB_1002cc2b9;
                    }
                    iVar5 = FUN_10062b22e(plVar10[2],"store_link","url",plVar10 + 0x35);
                    if (iVar5 == -0x80) goto LAB_1002cbce5;
                    if (iVar5 != 0) {
                      uVar9 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar9,0x10);
                      if (cVar4 != '\0') {
                        uStack_44a = (undefined2)iVar5;
                        uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
                        goto LAB_1002cc2a6;
                      }
                      goto LAB_1002cc2b9;
                    }
                    if (*(char *)((long)plVar10 + 0x51) == '\x01') {
                      uVar9 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar9,0x10);
                      if (cVar4 != '\0') {
                        local_458 = 0x8220202;
                        uStack_454 = 0x7a0a90;
                        uStack_450 = 1;
                        uStack_44c = 0x822;
                        uStack_44a = 0xbc2d;
                        uStack_448 = 0x7b;
                        uStack_446 = 1;
                        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",
                                            &local_458,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                  }
                  else {
                    uVar9 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar9,0x10);
                    if (cVar4 != '\0') {
                      uStack_44a = (undefined2)iVar5;
                      uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
LAB_1002cc2a6:
                      uStack_44c = 0x400;
                      uStack_450 = 1;
                      uStack_454 = 0x7a0a90;
                      local_458 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",
                                          &local_458,0x12);
                    }
LAB_1002cc2b9:
                    if (iVar5 != 0) {
                      uVar9 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar9,0x10);
                      if (cVar4 != '\0') {
                        uStack_44a = (undefined2)iVar5;
                        uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
                        goto LAB_1002cbe28;
                      }
                      goto LAB_1002cb8df;
                    }
                  }
                  (**(code **)(*plVar10 + 8))(plVar10);
                  goto LAB_1002cb8fc;
                }
              }
            }
          }
LAB_1002cbce5:
          (**(code **)(*plVar10 + 8))(plVar10);
          param_1 = local_f00;
          iVar5 = -0x80;
          goto LAB_1002ca8e2;
        }
        uVar9 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar9,0x10);
        if (cVar4 != '\0') {
          local_458 = 0x8220202;
          uStack_454 = 0x7a0a90;
          uStack_450 = 1;
          uStack_44c = 0x822;
          uStack_44a = 0xbd88;
          uStack_448 = 0x7b;
          uStack_446 = 1;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        FUN_1001782e9(0,0);
        iVar5 = -0x6c;
LAB_1002cb332:
        uVar9 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar9,0x10);
        param_1 = local_f00;
        if (cVar4 == '\0') goto LAB_1002ca8e2;
        uStack_44a = (undefined2)iVar5;
        uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
      }
      else {
        uVar9 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar9,0x10);
        param_1 = local_f00;
        if (cVar4 == '\0') goto LAB_1002ca8e2;
        uStack_44a = (undefined2)iVar5;
        uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
      }
LAB_1002cb381:
      uStack_450 = 1;
      uStack_454 = 0x7a0a90;
      uStack_44c = 0x400;
      local_458 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_458,0x12);
      param_1 = local_f00;
      goto LAB_1002ca8e2;
    }
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 == '\0') goto LAB_1002ca8e2;
    uStack_44a = (undefined2)iVar5;
    uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
  }
  else {
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 == '\0') goto LAB_1002ca8e2;
    uStack_44a = (undefined2)iVar5;
    uStack_448 = (undefined2)((uint)iVar5 >> 0x10);
  }
  uStack_44c = 0x400;
  uStack_450 = 1;
  uStack_454 = 0x7a0a90;
  local_458 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_458,0x12);
LAB_1002ca8e2:
  iVar6 = FUN_100626be2(param_1[1],0);
  if ((iVar6 != -0x80) && (iVar6 != 0)) {
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_458 = 0x8220202;
      uStack_454 = 0x7a0a90;
      uStack_450 = 1;
      uStack_44c = 0x400;
      uStack_44a = (undefined2)iVar6;
      uStack_448 = (undefined2)((uint)iVar6 >> 0x10);
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_458,0x12);
    }
  }
  if (iVar5 != 0) {
    iVar6 = iVar5;
  }
  if (iVar6 == 0) {
    plVar8 = (long *)local_f30[0x36];
    local_f80 = local_f30 + 0x37;
    if (plVar8 == local_f80) {
      iVar6 = 0;
    }
    else {
      local_f08 = local_f00 + 10;
      local_f58 = local_f00 + 0x8e;
      local_f34 = local_f1c & 0xfffffffe;
      local_f50 = local_f00 + 0x113;
      local_f78 = (long *)((long)local_f00 + 0x89c);
      do {
        if ((*(byte *)(plVar8 + 4) & 1) == 0) {
          pcVar11 = (char *)((long)plVar8 + 0x21);
        }
        else {
          pcVar11 = (char *)plVar8[6];
        }
        lVar13 = plVar8[7];
        FUN_1001e04f5(pcVar11,local_8d8);
        FUN_1001e222d(local_8d8,local_4d8);
        cVar4 = FUN_1001e4e7c("itdb",local_4d8,1);
        if (cVar4 != '\0') {
          FUN_1001e1c39(local_8d8,local_6d8);
          FUN_1001e26e1(".lock",local_6d8);
          iVar5 = FUN_10017ecc9(local_f08,local_6d8,&local_458,0);
          if (iVar5 == 0) {
            FUN_100182d4d(&local_458);
          }
          FUN_1001e1c39(local_8d8,local_6d8);
          FUN_1001e26e1("-journal",local_6d8);
          iVar5 = FUN_10017ecc9(local_f08,local_6d8,&local_458,0);
          if (iVar5 == 0) {
            FUN_100182d4d(&local_458);
          }
        }
        iVar5 = FUN_10017ecc9(local_f08,local_8d8,&local_458,0);
        if (iVar5 == 0) {
          FUN_100182d4d(&local_458);
        }
        uVar17 = FUN_1001c4cf4(lVar13);
        local_f10 = FUN_1001c63e1(uVar17);
        if (local_f10 == 0) {
          uVar9 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar9,0x10);
          if (cVar4 != '\0') {
            local_458 = 0x8220202;
            uStack_454 = 0x7a0a90;
            uStack_450 = 1;
            uStack_44c = 0x822;
            uStack_44a = 0xd0bf;
            uStack_448 = 0x7a;
            uStack_446 = 1;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          FUN_1001782e9(0,0);
          iVar6 = -0x6c;
          break;
        }
        iVar6 = FUN_1001c5333(lVar13,0,local_f10,uVar17,&local_f90);
        if (iVar6 != 0) {
          if (iVar6 != -0x80) {
            uVar9 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            if (cVar4 != '\0') {
              uStack_44a = (undefined2)iVar6;
              uStack_448 = (undefined2)((uint)iVar6 >> 0x10);
LAB_1002cb12b:
              uStack_44c = 0x400;
              uStack_450 = 1;
              uStack_454 = 0x7a0a90;
              local_458 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_458,0x12);
            }
          }
LAB_1002cb2f5:
          FUN_1001c64c1(local_f10);
          break;
        }
        if (local_f90 != uVar17) {
          uVar9 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar9,0x10);
          if (cVar4 != '\0') {
            local_458 = 0x8220202;
            uStack_454 = 0x7a0a90;
            uStack_450 = 1;
            uStack_44c = 0x822;
            uStack_44a = 0xbec6;
            uStack_448 = 0x7b;
            uStack_446 = 1;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          FUN_1001782e9(0,0);
          iVar6 = -0x24;
          goto LAB_1002cb2f5;
        }
        iVar6 = FUN_100180478(local_f10,uVar17,local_f08,local_8d8,0,0);
        if (iVar6 != 0) {
          if (iVar6 != -0x80) {
            uVar9 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            if (cVar4 != '\0') {
              uStack_44a = (undefined2)iVar6;
              uStack_448 = (undefined2)((uint)iVar6 >> 0x10);
              goto LAB_1002cb12b;
            }
          }
          goto LAB_1002cb2f5;
        }
        if (*(char *)((long)local_f00 + 0x1c) == '\x01') {
          FUN_100180478(local_f10,uVar17,local_f58,local_8d8,0,0);
        }
        FUN_1001e1c39(local_8d8,local_ad8);
        FUN_1001e26e1(".p7b",local_ad8);
        iVar5 = FUN_10017ecc9(local_f08,local_ad8,local_ef8,0);
        if (iVar5 == 0) {
          FUN_100182d4d(local_ef8);
        }
        iVar5 = _strcmp(pcVar11,"Locations.itdb");
        if (iVar5 == 0) {
          FUN_1001e1c39(local_8d8,local_ad8);
          FUN_1001e26e1(".cbk",local_ad8);
          iVar5 = FUN_10017ecc9(local_f08,local_ad8,local_ef8,0);
          if (iVar5 == 0) {
            FUN_100182d4d(local_ef8);
          }
          lVar13 = 0x10;
          while (iVar5 = _strcmp(pcVar11,*(char **)((long)&PTR_PTR_10085a4a8 + lVar13)), iVar5 != 0)
          {
            lVar13 = lVar13 + 0x28;
            if (lVar13 == 0xb0) goto LAB_1002cb046;
          }
          uVar1 = *(ulong *)((long)&PTR_s_library_10085a4b0 + lVar13);
          if (uVar1 == 0) {
LAB_1002cb046:
            uVar9 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            iVar6 = -0x32;
            if (cVar4 != '\0') {
              pcVar11 = "inPageSize != 0 and outCandyData != __null and outCandySize != __null";
              iVar6 = -0x32;
LAB_1002cb40a:
              uStack_450 = 1;
              uStack_454 = 0x7a0a90;
              uStack_44c = 0x822;
              local_458 = 0x8220202;
              uStack_44a = SUB82(pcVar11,0);
              uStack_448 = (undefined2)((ulong)pcVar11 >> 0x10);
              uStack_446 = (undefined4)((ulong)pcVar11 >> 0x20);
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,0x16)
              ;
            }
LAB_1002cb069:
            FUN_1001782e9(0,0);
LAB_1002cb17b:
            uVar9 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            if (cVar4 != '\0') {
              local_458 = 0x8220202;
              uStack_454 = 0x7a0a90;
              uStack_450 = 1;
              uStack_44c = 0x400;
              uStack_44a = (undefined2)iVar6;
              uStack_448 = (undefined2)((uint)iVar6 >> 0x10);
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_458,0x12);
            }
          }
          else {
            if (local_f34 != 2) {
              uVar9 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              iVar6 = -0x32;
              if (cVar4 != '\0') {
                pcVar11 = 
                "inCandyVersion == kFairPlayCandyBarV2 or inCandyVersion == kFairPlayCandyBarV3";
                iVar6 = -0x32;
                goto LAB_1002cb40a;
              }
              goto LAB_1002cb069;
            }
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar17;
            uVar12 = (ulong)SUB164(auVar3 / auVar2,0);
            if (uVar12 * uVar1 - uVar17 != 0) {
              uVar9 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              iVar6 = 0x463;
              if (cVar4 != '\0') {
                pcVar11 = "pageCount * inPageSize == inFileSize";
                iVar6 = 0x463;
                goto LAB_1002cb40a;
              }
              goto LAB_1002cb069;
            }
            if (local_f1c == 2) {
              local_f68 = uVar12 * 0x14 + 0x42;
              local_f20 = 0x18;
              local_f28 = 0x42;
              local_f48 = 0x2e;
              local_6d8[0] = 0x2e;
              local_f40 = local_f50;
            }
            else {
              local_f68 = uVar12 * 0x14 + 0x4d;
              local_f20 = (undefined4)*local_f50;
              local_f28 = 0x4d;
              local_f48 = 0x39;
              local_6d8[0] = 0x39;
              local_f40 = local_f78;
            }
            local_f70 = SUB168(auVar3 / auVar2,0);
            local_f60 = uVar12;
            local_f18 = FUN_1001c6429();
            if (local_f18 == 0) {
              uVar9 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              iVar6 = -0x6c;
              if (cVar4 != '\0') {
                pcVar11 = "candyFileBuffer != __null";
                iVar6 = -0x6c;
                goto LAB_1002cb40a;
              }
              goto LAB_1002cb069;
            }
            if (local_f60 != 0) {
              local_f88 = local_f18 + local_f28;
              uVar16 = 0;
              uVar17 = 0;
              lVar13 = local_f10;
              do {
                iVar5 = FUN_1002cc3e9(lVar13,uVar1,(ulong)uVar16 + local_f88);
                if (iVar5 != 1) {
                  uVar9 = FUN_1001cc310();
                  goto LAB_1002cb148;
                }
                lVar13 = lVar13 + uVar1;
                uVar17 = uVar17 + 1;
                uVar16 = uVar16 + 0x14;
              } while (uVar17 < local_f60);
            }
            lVar13 = local_f48 + local_f18;
            iVar5 = FUN_1002cc3e9(local_f28 + local_f18,(int)local_f70 * 0x14);
            if (iVar5 != 1) {
              uVar9 = FUN_1001cc310();
LAB_1002cb148:
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              if (cVar4 != '\0') {
                local_458 = 0x8220202;
                uStack_454 = 0x7a0a90;
                uStack_450 = 1;
                uStack_44c = 0x822;
                uStack_44a = 0xbfc9;
                uStack_448 = 0x7b;
                uStack_446 = 1;
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_458,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              FUN_1001c64c1(local_f18);
              iVar6 = 0x463;
              goto LAB_1002cb17b;
            }
            iVar6 = FUN_10008be20(local_f1c,0,local_f40,local_f20,lVar13,0x14,local_f18,local_6d8);
            lVar13 = local_f68;
            lVar14 = local_f18;
            if (iVar6 == 0) {
LAB_1002caf86:
              iVar6 = FUN_100180478(lVar14,lVar13,local_f08,local_ad8,0,0);
              if (iVar6 == 0) {
                if (*(char *)((long)local_f00 + 0x1c) == '\x01') {
                  FUN_100180478(lVar14,lVar13,local_f58,local_ad8,0,0);
                }
                FUN_1001c64c1(lVar14);
                goto LAB_1002cac9d;
              }
              if (iVar6 != -0x80) {
                uVar9 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar9,0x10);
                if (cVar4 != '\0') {
                  local_458 = 0x8220202;
                  uStack_454 = 0x7a0a90;
                  uStack_450 = 1;
                  uStack_44c = 0x400;
                  uStack_44a = (undefined2)iVar6;
                  uStack_448 = (undefined2)((uint)iVar6 >> 0x10);
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_458,
                                      0x12);
                }
              }
              FUN_1001c64c1(local_f10);
              if (lVar14 != 0) {
                FUN_1001c64c1(lVar14);
              }
              break;
            }
            if (iVar6 != -0x80) {
              uVar9 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              if (cVar4 != '\0') {
                local_458 = 0x8220202;
                uStack_454 = 0x7a0a90;
                uStack_450 = 1;
                uStack_44c = 0x400;
                uStack_44a = (undefined2)iVar6;
                uStack_448 = (undefined2)((uint)iVar6 >> 0x10);
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_458);
              }
              FUN_1001c64c1(local_f18);
              lVar13 = 0;
              lVar14 = 0;
              if (iVar6 != 0) goto LAB_1002cb17b;
              goto LAB_1002caf86;
            }
            FUN_1001c64c1(local_f18);
            iVar6 = -0x80;
          }
          FUN_1001c64c1(local_f10);
          break;
        }
LAB_1002cac9d:
        FUN_1001c64c1(local_f10);
        plVar10 = (long *)plVar8[1];
        plVar15 = plVar8;
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar8 = (long *)plVar15[2];
            bVar18 = (long *)*plVar8 != plVar15;
            plVar15 = plVar8;
          } while (bVar18);
        }
        else {
          do {
            plVar8 = plVar10;
            plVar10 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
        iVar6 = 0;
      } while (plVar8 != local_f80);
    }
  }
  if (*(char *)((long)local_f00 + 0x1c) == '\0') {
    plVar8 = local_f00 + 0x8e;
    cVar4 = FUN_10017cbd0(plVar8);
    if (cVar4 != '\0') {
      FUN_100182d59(plVar8,1);
    }
  }
  FUN_1002c93ec(local_f00);
  plVar10 = local_f00;
  local_458 = 0;
  uStack_454 = 0;
  uStack_450 = 0;
  uStack_44c = 0;
  uStack_44a = 0;
  FUN_100217418(local_f00 + 1,&local_458);
  plVar8 = (long *)CONCAT26(uStack_44a,CONCAT24(uStack_44c,uStack_450));
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar15 = plVar8 + 1;
    lVar13 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_f30 != (long *)0x0) {
    (**(code **)(*local_f30 + 8))();
  }
  *(int *)(plVar10 + 3) = iVar6;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

