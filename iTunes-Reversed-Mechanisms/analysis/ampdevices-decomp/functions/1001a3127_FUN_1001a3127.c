// name: FUN_1001a3127
// address: 1001a3127

int FUN_1001a3127(long param_1,ulong param_2,undefined8 param_3,long param_4,long param_5,
                 ulong param_6,long param_7,long param_8,undefined8 param_9,char *param_10,
                 uint param_11,long *param_12,undefined8 *param_13,char *param_14,
                 undefined1 *param_15,long param_16,undefined4 *param_17,uint *param_18,
                 undefined4 *param_19,undefined4 *param_20)

{
  long lVar1;
  long lVar2;
  size_t sVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  size_t sVar7;
  long lVar8;
  uint uVar9;
  byte bVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  bool bVar14;
  undefined1 auVar15 [12];
  undefined1 local_2448 [20];
  int local_2434;
  undefined8 local_2430;
  undefined4 local_2428;
  undefined8 local_2420;
  undefined8 uStack_2418;
  undefined8 local_2410;
  undefined8 uStack_2408;
  uint local_232c;
  size_t local_2328;
  long local_2320;
  uint local_2318;
  uint local_2314;
  ulong local_2310;
  long local_2308;
  int local_22fc [65];
  char local_21f8 [64];
  char local_21b8 [2048];
  char local_19b8 [4104];
  char *local_9b0;
  int local_9a8;
  undefined8 local_9a0;
  undefined4 local_998;
  ushort local_994;
  long local_990;
  undefined4 local_988;
  long local_980;
  undefined4 local_978;
  long local_970;
  undefined4 local_968;
  undefined8 local_960;
  uint local_958;
  undefined1 local_838 [1024];
  undefined1 local_438 [1016];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1001a313f;
  auVar15 = FUN_100108310();
  lVar1 = -auVar15._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_2308 = 0;
  local_2430 = 0;
  local_2428 = 0;
  local_2420 = 0;
  uStack_2418 = 0;
  local_2410 = 0;
  uStack_2408 = 0;
  if (param_14 != (char *)0x0) {
    *param_14 = '\0';
  }
  if (param_15 != (undefined1 *)0x0) {
    *param_15 = 0;
  }
  if (param_17 != (undefined4 *)0x0) {
    *param_17 = 0;
  }
  if (param_18 != (uint *)0x0) {
    *param_18 = 0;
  }
  if (param_19 != (undefined4 *)0x0) {
    *param_19 = 0;
  }
  if (param_20 != (undefined4 *)0x0) {
    *param_20 = 0;
    *(undefined1 *)(param_20 + 1) = 0;
  }
  if (param_1 == 0) {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3300;
    uVar6 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3310;
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3320;
      FUN_10069d160(uVar6);
    }
  }
  else if ((uint)param_2 == 0) {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a332a;
    uVar6 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a333a;
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a334a;
      FUN_10069d0ea(uVar6);
    }
  }
  else if (param_12 == (long *)0x0) {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3354;
    uVar6 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3364;
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3370;
      FUN_10069d074(uVar6);
    }
  }
  else if (param_13 == (undefined8 *)0x0) {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3377;
    uVar6 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3387;
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3393;
      FUN_10069cffe(uVar6);
    }
  }
  else {
    *param_12 = 0;
    *param_13 = 0;
    if (param_7 == 0 || (param_6 & 1) != 0) {
      if ((uint)param_2 < 0x400) {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3256;
        local_232c = auVar15._8_4_;
        local_2320 = param_5;
        local_2310 = param_2;
        FUN_1001c631b();
        local_438[param_2 & 0xffffffff] = 0;
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3272;
        FUN_1001a3e13(local_438);
        if (param_14 != (char *)0x0) {
          uVar9 = 0xff;
          if (local_958 < 0xff) {
            uVar9 = local_958;
          }
          *param_14 = (char)uVar9;
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a329a;
          FUN_1001c631b(local_960);
          if (*param_14 != '\0') goto LAB_1001a32a4;
          iVar5 = -0x32;
          if (param_15 == (undefined1 *)0x0) goto LAB_1001a3be5;
LAB_1001a3583:
          *param_15 = 1;
          iVar5 = -0x32;
          goto LAB_1001a3be5;
        }
LAB_1001a32a4:
        pcVar13 = local_9b0;
        if (local_9a8 == 4) {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a32cc;
          iVar5 = _strncasecmp(local_9b0,"daap",4);
          local_2318 = CONCAT31((int3)((uint)iVar5 >> 8),iVar5 == 0);
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a32eb;
          iVar5 = _strncasecmp(pcVar13,"daa6",4);
          uVar11 = (ulong)local_2318;
          bVar14 = iVar5 == 0;
        }
        else {
          uVar11 = 0;
          bVar14 = false;
        }
        bVar10 = (byte)uVar11 | bVar14;
        uVar9 = (uint)param_6;
        local_2318 = (uint)CONCAT71((int7)(uVar11 >> 8),bVar10);
        bVar10 = ((byte)((uVar9 & 0x10) >> 4) | bVar10) & (uVar9 >> 0xb & 1) == 0;
        local_2314 = (uint)bVar10;
        if (bVar10 == 1) {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a345c;
          iVar5 = FUN_1001d5c41();
          if (iVar5 != -0x80) {
            if (iVar5 == 0) {
              iVar5 = *(int *)(local_2308 + 0x53c);
              lVar2 = local_2320;
              lVar12 = local_2308;
              while (iVar5 == 1) {
                lVar8 = 0;
                if (lVar2 != 0) {
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a34a7;
                  iVar5 = FUN_1001ceb57(lVar2,0xffffffffffffffff,0xffffffffffffffff,0);
                  lVar8 = local_2320;
                  lVar12 = local_2308;
                  if (iVar5 != 0) goto LAB_1001a3be5;
                }
                lVar2 = lVar8;
                iVar5 = *(int *)(lVar12 + 0x53c);
              }
              iVar5 = *(int *)(lVar12 + 0x53c);
              if (*(int *)(lVar12 + 0x53c) != 0) goto LAB_1001a3be5;
LAB_1001a34fd:
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3507;
              iVar5 = FUN_1001d6483(lVar12,0x1000);
              if (iVar5 != -0x80) {
                if (iVar5 == 0) {
                  local_838[0] = 0;
                  if ((uVar9 >> 9 & 1) == 0) {
                    if (local_9b0 == (char *)0x0) {
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3637;
                      FUN_1001dfbb3("http://",local_838,0x400);
                    }
                    else {
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3557;
                      FUN_1001dfaed(local_9b0,local_9a8,local_838,0x400);
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a356b;
                      FUN_1001df1e7("://",local_838,0x400);
                    }
                    if (local_990 != 0) {
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a365a;
                      FUN_1001df266(local_990,local_988,local_838,0x400);
                      if (local_980 != 0) {
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a367f;
                        FUN_1001df1e7(":",local_838,0x400);
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3699;
                        FUN_1001df266(local_980,local_978,local_838,0x400);
                      }
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a36b1;
                      FUN_1001df1e7("@",local_838,0x400);
                    }
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a36cf;
                    FUN_1001df266(local_9a0,local_998,local_838,0x400);
                    if (local_994 == 0) {
                      local_994 = 0x50;
                      if ((local_2318 & 1) != 0) {
                        local_994 = 0xe69;
                      }
                    }
                    if (local_994 != 0x50) {
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a371c;
                      _snprintf(local_19b8,0x20,":%u",(ulong)local_994);
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3730;
                      FUN_1001df1e7(local_19b8,local_838,0x400);
                    }
                  }
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3748;
                  FUN_1001df1e7("/",local_838,0x400);
                  if (local_970 != 0) {
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a376b;
                    FUN_1001df266(local_970,local_968,local_838,0x400);
                  }
                  pcVar13 = "HTTP/1.1";
                  if ((param_6 & 1) == 0) {
                    pcVar13 = "HTTP/1.0";
                  }
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a37a1;
                  _snprintf(local_19b8,0x1000,"GET %s %s\r\nAccept: */*\r\n",local_838,pcVar13);
                  if ((param_6 & 4) != 0) {
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a37be;
                    FUN_1001df1e7("Cache-Control: no-cache\r\n",local_19b8,0x1000);
                  }
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a37d9;
                  FUN_1001df1e7("User-Agent: ",local_19b8,0x1000);
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a37e2;
                  uVar6 = FUN_1001b83ae(param_9);
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a37f2;
                  FUN_1001df1e7(uVar6,local_19b8,0x1000);
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3806;
                  FUN_1001df1e7("\r\n",local_19b8,0x1000);
                  if (param_4 != 0) {
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a381f;
                    FUN_1001df1e7(param_4,local_19b8,0x1000);
                  }
                  if (param_8 != 0 || param_7 != 0) {
                    if (param_8 == 0) {
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a386a;
                      _snprintf(local_21f8,0x40,"Range: bytes=%llu-\r\n");
                    }
                    else {
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a384e;
                      _snprintf(local_21f8,0x40,"Range: bytes=%llu-%llu\r\n");
                    }
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3882;
                    FUN_1001df1e7(local_21f8,local_19b8,0x1000);
                  }
                  if ((param_6 & 2) == 0) {
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a389f;
                    FUN_1001df1e7("Connection: close\r\n",local_19b8,0x1000);
                  }
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a38ba;
                  FUN_1001df1e7("\r\n",local_19b8,0x1000);
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a38c2;
                  local_2328 = _strlen(local_19b8);
                  if ((local_2320 != 0 & ((byte)local_2314 ^ 1)) == 0) {
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a38fd;
                    iVar5 = FUN_1001d717d(local_2308,&local_2328,local_19b8,0);
LAB_1001a39c0:
                    sVar3 = local_2328;
                    if (iVar5 != -0x80) {
                      if (iVar5 == 0) {
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a39e6;
                        sVar7 = _strlen(local_19b8);
                        if (sVar3 == sVar7) {
                          if (local_232c == 0) {
LAB_1001a3a39:
                            local_21b8[0] = '\0';
                            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3a54;
                            iVar5 = FUN_1001a25ea(local_2308,local_2320,local_21b8,0x800);
                            if (iVar5 != -0x80) {
                              if (iVar5 == 0) {
                                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3a84;
                                FUN_1001a2ef9(local_21b8,local_22fc);
                                if (param_20 != (undefined4 *)0x0) {
                                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3a9d;
                                  _memcpy(param_20,local_22fc,0x104);
                                }
                                if (param_11 != 0 && param_10 != (char *)0x0) {
                                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3abf;
                                  _strlcpy(param_10,local_21b8,(ulong)param_11);
                                }
                                if ((char)local_2314 == '\0') {
                                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3cd2;
                                  iVar5 = FUN_1001d79d7(local_2308,local_438,0x400);
                                  if (iVar5 != -0x80) {
                                    if (iVar5 == 0) {
                                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3cef;
                                      local_2310 = FUN_1001df897(local_438);
                                      if (param_14 != (char *)0x0) {
                                        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3d15;
                                        FUN_1001a3e13(local_438,&local_9b0);
                                        if (local_958 < 0x100) {
                                          if (local_958 == 0) {
                                            *param_14 = '\0';
                                            iVar5 = -0x32;
                                            if (param_15 != (undefined1 *)0x0) goto LAB_1001a3583;
                                            goto LAB_1001a3be5;
                                          }
                                        }
                                        else {
                                          local_958 = 0xff;
                                        }
                                        *param_14 = (char)local_958;
                                        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3dc0;
                                        FUN_1001c631b(local_960,param_14 + 1,local_958);
                                      }
                                      goto LAB_1001a3acc;
                                    }
                                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3d46;
                                    uVar6 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3d56;
                                    cVar4 = _os_log_type_enabled(uVar6,0x10);
                                    if (cVar4 != '\0') {
                                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3d69;
                                      FUN_10069cde2(iVar5,uVar6);
                                    }
                                  }
                                }
                                else {
LAB_1001a3acc:
                                  iVar5 = -0x1389;
                                  if (local_22fc[0] != 0x191) {
                                    if (local_22fc[0] == 0x194) {
                                      iVar5 = -0x2b;
                                    }
                                    else if (local_22fc[0] != 0x197) {
                                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3b10;
                                      FUN_1001a2b2e(local_21b8,"Content-Length",param_13);
                                      if ((char)local_2314 != '\0') {
                                        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3b25;
                                        cVar4 = FUN_1001a2e59(local_21b8);
                                        if (cVar4 != '\0') {
                                          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3b35;
                                          FUN_1001d8e70(local_2308);
                                          *param_13 = 0xffffffffffffffff;
                                        }
                                      }
                                      if (param_19 != (undefined4 *)0x0) {
                                        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3b57;
                                        FUN_1001a2c03(local_21b8,param_19);
                                      }
                                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3b63;
                                      cVar4 = FUN_1001a2cbb(local_21b8);
                                      if (param_18 == (uint *)0x0) {
                                        if (param_8 != 0 || param_7 != 0) {
                                          if (cVar4 == '\0') {
                                            iVar5 = -0x32;
                                          }
                                          else {
LAB_1001a3d86:
                                            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3d92;
                                            cVar4 = FUN_1001a2dbb(local_21b8);
                                            iVar5 = -0x32;
                                            if (cVar4 != '\0') {
                                              iVar5 = 0;
                                            }
                                          }
                                          goto LAB_1001a3be5;
                                        }
                                      }
                                      else if (cVar4 == '\0') {
                                        *param_18 = *param_18 & 0xfffffffe;
                                        iVar5 = -0x32;
                                        if (param_8 != 0 || param_7 != 0) goto LAB_1001a3be5;
                                      }
                                      else {
                                        *param_18 = *param_18 | 1;
                                        if (param_8 != 0 || param_7 != 0) goto LAB_1001a3d86;
                                      }
                                      iVar5 = 0;
                                      goto LAB_1001a3c18;
                                    }
                                  }
                                }
                              }
                              else {
                                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3c92;
                                uVar6 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3ca2;
                                cVar4 = _os_log_type_enabled(uVar6,0x10);
                                if (cVar4 != '\0') {
                                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3cb5;
                                  FUN_10069ce4e(iVar5,uVar6);
                                }
                              }
                            }
                          }
                          else {
                            uVar9 = 1;
                            if (0x7ff < local_232c) {
                              uVar9 = local_232c >> 0xb;
                            }
                            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3a1d;
                            iVar5 = FUN_1001d7de6(local_2308,uVar9,0x800);
                            if (iVar5 != -0x80) {
                              if (iVar5 == 0) goto LAB_1001a3a39;
                              *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3c65;
                              uVar6 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3c75;
                              cVar4 = _os_log_type_enabled(uVar6,0x10);
                              if (cVar4 != '\0') {
                                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3c88;
                                FUN_10069cd76(iVar5,uVar6);
                              }
                            }
                          }
                        }
                        else {
                          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3bbe;
                          uVar6 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3bce;
                          cVar4 = _os_log_type_enabled(uVar6,0x10);
                          if (cVar4 != '\0') {
                            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3d3c;
                            FUN_10069cd00(uVar6);
                          }
                          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3bdf;
                          FUN_1001782e9(0,0);
                          iVar5 = -0x27;
                        }
                      }
                      else {
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3b98;
                        uVar6 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3ba8;
                        cVar4 = _os_log_type_enabled(uVar6,0x10);
                        if (cVar4 != '\0') {
                          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3bb7;
                          FUN_10069ceba(iVar5,uVar6);
                        }
                      }
                    }
                  }
                  else {
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3919;
                    FUN_1001c62d9(local_2448,0x118);
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3938;
                    iVar5 = FUN_1001d70bb(local_2308,&local_2328,local_19b8,0,local_2448);
                    if (iVar5 != -0x80) {
                      if (iVar5 == 0) {
                        do {
                          do {
                            iVar5 = local_2434;
                            if (local_2434 != 1) goto LAB_1001a39c0;
                          } while (*(char *)(local_2308 + 0x939) != '\0');
                          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3980;
                          iVar5 = FUN_1001ceb57(local_2320,0xffffffffffffffff,0xffffffffffffffff,0);
                        } while (iVar5 == 0);
                      }
                      else {
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3991;
                        uVar6 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a39a1;
                        cVar4 = _os_log_type_enabled(uVar6,0x10);
                        if (cVar4 != '\0') {
                          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a39b4;
                          FUN_10069cc94(iVar5,uVar6);
                        }
                      }
                    }
                  }
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a35f7;
                  uVar6 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3607;
                  cVar4 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar4 != '\0') {
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a361a;
                    FUN_10069cf26(iVar5,uVar6);
                  }
                }
              }
LAB_1001a3be5:
              if (iVar5 != 0 && local_2308 != 0) {
                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3c01;
                FUN_1001d6fac();
                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3c0d;
                FUN_1001d5da8(local_2308);
                local_2308 = 0;
              }
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3590;
              uVar6 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a35a0;
              cVar4 = _os_log_type_enabled(uVar6,0x10);
              if (cVar4 != '\0') {
                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a35b3;
                FUN_10069cf92(iVar5,uVar6);
              }
            }
          }
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a34e1;
          iVar5 = FUN_1001d5d02(&local_2308,local_438,local_2310,param_6 & 0xffffffff);
          if (iVar5 != -0x80) {
            lVar12 = local_2308;
            if (iVar5 == 0) goto LAB_1001a34fd;
            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a35bd;
            uVar6 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a35cd;
            cVar4 = _os_log_type_enabled(uVar6,0x10);
            if (cVar4 != '\0') {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a35e0;
              FUN_10069cc28(iVar5,uVar6);
            }
          }
        }
LAB_1001a3c18:
        if (param_17 != (undefined4 *)0x0) {
          if (param_15 != (undefined1 *)0x0) {
            *param_15 = 1;
          }
          *param_17 = (int)local_2310;
        }
        if (param_16 != 0) {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3c4d;
          FUN_1001c631b(local_438,param_16,local_2310 & 0xffffffff);
        }
        *param_12 = local_2308;
        goto LAB_1001a33e4;
      }
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a33bd;
      uVar6 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a33cd;
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a35ed;
        FUN_10069cbb2(uVar6);
      }
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a339a;
      uVar6 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a33aa;
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a33b6;
        FUN_10069cb3c(uVar6);
      }
    }
  }
  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a33de;
  FUN_1001782e9(0,0);
  iVar5 = -0x32;
LAB_1001a33e4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001a3dea;
  ___stack_chk_fail();
}

