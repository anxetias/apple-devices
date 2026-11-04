// name: FUN_1001fb156
// address: 1001fb156

int FUN_1001fb156(undefined8 param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  size_t sVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 local_20c8 [16];
  long local_20b8;
  long local_20b0;
  undefined8 local_20a8;
  char *local_20a0;
  long local_2098;
  undefined4 local_2090;
  undefined2 local_208c;
  ulong local_2088;
  long local_2080;
  size_t local_2078;
  long local_2070;
  undefined4 local_2068;
  char *local_2064;
  undefined2 local_205c;
  char *local_205a;
  char local_2038 [4096];
  char local_1038 [2048];
  char local_838 [2040];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1001fb16e;
  lVar6 = FUN_100108310();
  lVar6 = -lVar6;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_2070 = 0;
  local_2080 = 0;
  *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb19b;
  cVar3 = FUN_10017cbd0();
  if (cVar3 == '\0') {
    *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb45a;
    uVar11 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb46a;
    cVar3 = _os_log_type_enabled(uVar11,0x10);
    if (cVar3 != '\0') {
      *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb476;
      FUN_1006cc8ad(uVar11);
    }
  }
  else {
    if (param_2 != (char *)0x0) {
      *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb1c0;
      iVar4 = FUN_1001f7388(param_1,1,&local_2070);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb1e4;
          iVar4 = FUN_1001f7ceb(local_2070,param_2);
          if (iVar4 == 0) {
            uVar11 = *(undefined8 *)(local_2070 + 0x428);
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb202;
            lVar7 = FUN_1001f14fc(uVar11);
            uVar11 = *(undefined8 *)(local_2070 + 0x428);
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb218;
            iVar5 = FUN_1001f10d8(uVar11);
            iVar4 = 0;
            if (iVar5 == 0) {
              uVar11 = *(undefined8 *)(local_2070 + 0x428);
              *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb236;
              lVar8 = FUN_1001f10fb(uVar11);
              uVar11 = *(undefined8 *)(local_2070 + 0x428);
              *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb24c;
              FUN_1001f023e(uVar11);
              iVar4 = 0;
              if (lVar7 != 0 && lVar8 != 0) {
                local_208c = 0x6c;
                local_2090 = 0x73626f2e;
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb285;
                local_20b8 = lVar8;
                sVar9 = _strlen(param_2);
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb29f;
                FUN_1001dfbb3(param_2,local_838,0x800);
                if (-1 < (long)sVar9) {
                  pcVar10 = local_838 + sVar9;
                  do {
                    if (*pcVar10 == '/') break;
                    *pcVar10 = '\0';
                    pcVar10 = pcVar10 + -1;
                  } while (local_838 <= pcVar10);
                }
                *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb2d7;
                local_2078 = sVar9;
                sVar9 = _strlen(local_838);
                uVar12 = local_2078 - sVar9;
                if (uVar12 < 6) {
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb522;
                  uVar11 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb532;
                  cVar3 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar3 != '\0') {
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb6aa;
                    FUN_1006cc525(uVar11);
                  }
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb543;
                  FUN_1001782e9(0,0);
                  iVar4 = -0x32;
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb30c;
                  local_20b0 = lVar7;
                  local_20a8 = param_1;
                  local_20a0 = param_2;
                  sVar9 = _strlen((char *)&local_2090);
                  local_2088 = uVar12 - sVar9;
                  do {
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb33f;
                    FUN_1001dfbb3(local_838,local_1038,0x800);
                    for (uVar12 = local_2088; uVar12 != 0; uVar12 = uVar12 - sVar9) {
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb358;
                      FUN_1001ea62b(local_20c8);
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb370;
                      FUN_1001e0a72(local_20c8,0x10,&local_2068,0x21,0);
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb378;
                      sVar9 = _strlen((char *)&local_2068);
                      if (uVar12 < sVar9) {
                        sVar9 = uVar12;
                      }
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb395;
                      FUN_1001df266(&local_2068,sVar9,local_1038,0x800);
                    }
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb3ae;
                    FUN_1001df1e7(&local_2090,local_1038,0x800);
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb3b6;
                    sVar9 = _strlen(local_1038);
                    if (sVar9 != local_2078) {
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb3c7;
                      uVar11 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb3d7;
                      cVar3 = _os_log_type_enabled(uVar11,0x10);
                      if (cVar3 != '\0') {
                        local_2068 = 0x8220202;
                        local_2064 = "Assertion failure";
                        local_205c = 0x822;
                        local_205a = "newPathLength == pathLength";
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb453;
                        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",
                                            &local_2068,0x16);
                      }
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb3e4;
                      FUN_1001782e9(0,0);
                    }
                    *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb3f3;
                    iVar4 = FUN_1001f7ceb(local_2070,local_1038);
                  } while (iVar4 == 0);
                  lVar7 = local_20b8 + -0x800;
                  if (local_20b8 + -0x800 < 1) {
                    lVar7 = 0;
                  }
                  lVar8 = local_20b0 + -0x800;
                  if (local_20b0 + -0x800 < 1) {
                    lVar8 = 0;
                  }
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb585;
                  FUN_1001f7652(local_2070);
                  local_2070 = 0;
                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb5ad;
                  iVar4 = FUN_10017cc65(local_20a8,0x64617461,3,&local_2080);
                  if (iVar4 != -0x80) {
                    if (iVar4 == 0) {
                      local_2098 = 0;
                      pcVar10 = local_2038;
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb5fe;
                      local_2088 = sVar9;
                      FUN_100187fa3(local_2080,lVar7,pcVar10,0x1000,0,&local_2098);
                      pcVar2 = local_20a0;
                      if (local_2098 == 0) {
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb67d;
                        uVar11 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb68d;
                        cVar3 = _os_log_type_enabled(uVar11,0x10);
                        if (cVar3 != '\0') {
                          *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb69d;
                          FUN_1006cc6e9(uVar11);
                        }
                      }
                      else {
                        lVar1 = local_2098 - local_2078;
                        for (; pcVar10 <= local_2038 + lVar1; pcVar10 = pcVar10 + 1) {
                          *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb63a;
                          iVar4 = _strncasecmp(pcVar10,pcVar2,local_2078);
                          if (iVar4 == 0) {
                            *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb6c5;
                            FUN_1001c631b(local_1038,pcVar10,local_2088);
                            *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb6e8;
                            iVar4 = FUN_100188151(local_2080,lVar7,local_2038,local_2098,0,0);
                            if (iVar4 == -0x80) goto LAB_1001fb4bb;
                            if (iVar4 != 0) {
                              *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb7f9;
                              uVar11 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb809;
                              cVar3 = _os_log_type_enabled(uVar11,0x10);
                              if (cVar3 != '\0') {
                                *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb81c;
                                FUN_1006cc59b(iVar4,uVar11);
                              }
                              goto LAB_1001fb4bb;
                            }
                            break;
                          }
                        }
                        local_2098 = 0;
                        pcVar10 = local_2038;
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb72f;
                        FUN_100187fa3(local_2080,lVar8,pcVar10,0x1000,0,&local_2098);
                        if (local_2098 != 0) {
                          lVar7 = local_2098 - local_2078;
                          for (; pcVar10 <= local_2038 + lVar7; pcVar10 = pcVar10 + 1) {
                            *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb768;
                            iVar4 = _strncasecmp(pcVar10,pcVar2,local_2078);
                            if (iVar4 == 0) {
                              *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb7b8;
                              FUN_1001c631b(local_1038,pcVar10,local_2088);
                              *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb7db;
                              iVar4 = FUN_100188151(local_2080,lVar8,local_2038,local_2098,0,0);
                              if (iVar4 == -0x80) goto LAB_1001fb4bb;
                              if (iVar4 != 0) {
                                *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb826;
                                uVar11 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb836;
                                cVar3 = _os_log_type_enabled(uVar11,0x10);
                                if (cVar3 != '\0') {
                                  *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb849;
                                  FUN_1006cc607(iVar4,uVar11);
                                }
                                goto LAB_1001fb4bb;
                              }
                              break;
                            }
                          }
                          iVar4 = 0;
                          goto LAB_1001fb4bb;
                        }
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb776;
                        uVar11 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb786;
                        cVar3 = _os_log_type_enabled(uVar11,0x10);
                        if (cVar3 != '\0') {
                          *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb856;
                          FUN_1006cc673(uVar11);
                        }
                      }
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb797;
                      FUN_1001782e9(0,0);
                      iVar4 = -0x27;
                    }
                    else {
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb650;
                      uVar11 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb660;
                      cVar3 = _os_log_type_enabled(uVar11,0x10);
                      if (cVar3 != '\0') {
                        *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb673;
                        FUN_1006cc75f(iVar4,uVar11);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb4a7;
          uVar11 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb4b7;
          cVar3 = _os_log_type_enabled(uVar11,0x10);
          if (cVar3 != '\0') {
            *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb51b;
            FUN_1006cc7cb(iVar4,uVar11);
          }
        }
      }
LAB_1001fb4bb:
      if (local_2070 != 0) {
        *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb4cc;
        FUN_1001f7652();
      }
      if (local_2080 != 0) {
        *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb4dd;
        FUN_10017cdfb();
      }
      goto LAB_1001fb4dd;
    }
    *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb47d;
    uVar11 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb48d;
    cVar3 = _os_log_type_enabled(uVar11,0x10);
    if (cVar3 != '\0') {
      *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb50e;
      FUN_1006cc837(uVar11);
    }
  }
  *(undefined8 *)((long)&local_38 + lVar6) = 0x1001fb49a;
  FUN_1001782e9(0,0);
  iVar4 = -0x32;
LAB_1001fb4dd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_38 + lVar6) = &UNK_1001fb860;
  ___stack_chk_fail();
}

