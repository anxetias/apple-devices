// name: FUN_1003590ea
// address: 1003590ea

int FUN_1003590ea(undefined1 *param_1,char *param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  ushort uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  char local_15f0 [80];
  ulong local_15a0;
  undefined1 *local_1598;
  long local_1590;
  undefined1 *local_1588;
  undefined1 *local_1580;
  uint local_1578 [128];
  int local_1378;
  char *local_1374;
  undefined2 local_136c;
  char *local_136a;
  undefined4 local_1328;
  undefined8 local_1324;
  undefined2 local_131c;
  char *local_131a;
  byte local_1308;
  ushort local_1220;
  long *local_1218;
  undefined1 local_f08 [44];
  undefined1 local_edc [1056];
  undefined4 local_abc;
  undefined1 local_aa8 [1056];
  undefined1 local_688 [520];
  undefined1 local_480 [1088];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100359102;
  auVar18 = FUN_100108310();
  uVar13 = auVar18._8_8_;
  lVar7 = -auVar18._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1588 = param_1;
  if ((*param_2 == '\0') && (*(short *)(param_2 + 0x38) < 0)) {
    local_1588 = local_aa8;
    param_2 = local_15f0;
    *(undefined8 *)((long)&local_38 + lVar7) = 0x10035922e;
    iVar9 = FUN_100188aa6();
    if (iVar9 != 0) goto LAB_10035936e;
    if (local_15f0[0] == '\0') goto LAB_100359132;
    goto LAB_10035936b;
  }
LAB_100359132:
  uVar3 = *(undefined4 *)(param_4 + 0x98);
  *(undefined8 *)((long)&local_38 + lVar7) = 0x10035915a;
  local_1580 = param_4;
  iVar9 = FUN_1001ceb24(param_4 + 0x38,0x7570726d,uVar3,0xffffffffffffffff,uVar13);
  if (iVar9 != 0) goto LAB_10035936e;
  pcVar4 = *(code **)(local_1580 + 0x30);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)((long)&local_38 + lVar7) = 0x100359184;
    cVar8 = (*pcVar4)(local_1588,param_2,uVar13);
    if (cVar8 == '\0') goto LAB_10035936b;
  }
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)((long)&local_38 + lVar7) = 0x1003591a4;
  iVar10 = FUN_100536871(local_1588,uVar13,uVar3,1);
  local_1598 = local_1580 + 4;
  local_1590 = **(long **)(local_1580 + 4);
  iVar9 = -0x32;
  if (0x7fff < iVar10) {
    if (iVar10 < 0x100000) {
      if (iVar10 == 0x8000) {
        lVar12 = *(long *)(local_1580 + 0xa0);
        if ((lVar12 != 0) && (*(int *)(lVar12 + 0x84) == 0x646f5069)) {
          *(undefined8 *)((long)&local_38 + lVar7) = 0x100359661;
          iVar9 = FUN_1005f85bf(lVar12,local_1588);
        }
        goto LAB_10035936e;
      }
      if (iVar10 == 0x10000) goto LAB_10035936e;
      if (iVar10 == 0x80000) goto LAB_1003592c5;
    }
    else if (iVar10 < 0x400000) {
      if (iVar10 == 0x100000) {
        lVar12 = *(long *)(local_1580 + 0xa0);
        if ((lVar12 != 0) && (*(int *)(lVar12 + 0x84) == 0x646f5069)) {
          *(undefined8 *)((long)&local_38 + lVar7) = 0x1003595a7;
          iVar9 = FUN_10020ce9d(lVar12,local_1588);
        }
        goto LAB_10035936e;
      }
      if (iVar10 == 0x200000) goto LAB_10035936e;
    }
    else {
      if (iVar10 == 0x400000) goto LAB_10035936e;
      if (iVar10 == 0x800000) {
        *(undefined8 *)((long)&local_38 + lVar7) = 0x1003593c3;
        iVar10 = FUN_10020c7cf(local_1588,param_4 + 0x38,local_1580);
        iVar9 = 0;
        if ((iVar10 != -0x80) && (iVar10 != 0)) {
          *(undefined8 *)((long)&local_38 + lVar7) = 0x1003593e4;
          FUN_10017d489(local_1588,local_f08);
          *(undefined8 *)((long)&local_38 + lVar7) = 0x1003593f7;
          FUN_1001b7b04(&local_1328,"");
          *(undefined8 *)((long)&local_38 + lVar7) = 0x100359411;
          FUN_100243ece(0x10d9,local_f08,iVar10,&local_1328);
          *(undefined8 *)((long)&local_38 + lVar7) = 0x10035941d;
          FUN_1001b7a50(&local_1328);
          iVar9 = iVar10;
        }
        goto LAB_10035936e;
      }
    }
LAB_100359669:
    if ((iVar10 != 0x1000) || (local_1580[0x27] != '\0')) {
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100359694;
      FUN_1001c62d9(local_f08,0x460);
      if (local_1588 != (undefined1 *)0x0) {
        *(undefined8 *)((long)&local_38 + lVar7) = 0x1003596b1;
        _memcpy(local_edc,local_1588,0x420);
      }
      local_abc = *(undefined4 *)(param_2 + 0x30);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x1003596ce;
      cVar8 = FUN_100242008(0x46494c45,local_f08,0);
      if (cVar8 == '\0') {
        iVar9 = 1000;
      }
      else if ((cVar8 == '\x10') && (*param_2 == '\0')) {
        *(undefined8 *)((long)&local_38 + lVar7) = 0x10035983c;
        iVar9 = FUN_10017d5ba(local_1588,&local_1328);
        if (iVar9 == 0) {
          *(undefined8 *)((long)&local_38 + lVar7) = 0x100359861;
          iVar10 = FUN_10017d477(&local_1328,&local_1378,local_1578);
          iVar9 = -0x32;
          if (iVar10 != 0) {
            iVar9 = iVar10;
          }
        }
      }
      else {
        local_1578[0] = 0;
        *(undefined8 *)((long)&local_38 + lVar7) = 0x100359708;
        FUN_10053672c(local_1588,param_2,local_480);
        iVar9 = 0;
        if (local_1590 != 0) {
          *(undefined8 *)((long)&local_38 + lVar7) = 0x100359738;
          cVar8 = FUN_100483d00(local_1598,0x46494c45,local_480,local_1578);
          if (cVar8 != '\0') {
            local_1378 = 0;
            uVar17 = local_1578[0] | *(uint *)(local_1580 + 0x20) | 0x20000;
            *(uint *)(local_1580 + 0x20) = uVar17;
            if (iVar10 == 0x10) {
              *(undefined8 *)((long)&local_38 + lVar7) = 0x100359786;
              cVar8 = FUN_1002b8a30(local_1588,param_2,uVar13);
              if (cVar8 == '\0') {
                uVar17 = *(uint *)(local_1580 + 0x20);
              }
              else {
                uVar17 = *(uint *)(local_1580 + 0x20) | 0x40000;
                *(uint *)(local_1580 + 0x20) = uVar17;
              }
            }
            uVar13 = *(undefined8 *)(local_1590 + 8);
            uVar2 = *local_1580;
            uVar3 = *(undefined4 *)(local_1580 + 0x68);
            *(int **)(&stack0xffffffffffffffd8 + lVar7) = &local_1378;
            *(undefined4 *)(&stack0xffffffffffffffd0 + lVar7) = uVar3;
            *(undefined8 *)((long)&local_38 + lVar7) = 0x100359ae3;
            lVar12 = FUN_100309805(uVar13,uVar2,local_1588,param_2,uVar17,0);
            if ((lVar12 != 0) && (*(long *)(lVar12 + 8) == 0)) {
              *(undefined8 *)((long)&local_38 + lVar7) = 0x100359af7;
              uVar13 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar7) = 0x100359b07;
              cVar8 = _os_log_type_enabled(uVar13,0x10);
              if (cVar8 != '\0') {
                local_1328 = 0x8220202;
                local_1324 = "Assertion failure";
                local_131c = 0x822;
                local_131a = "trackInstance == nullptr || trackInstance->trackInfo != nullptr";
                *(undefined8 *)((long)&local_38 + lVar7) = 0x100359d9c;
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_1328,
                                    0x16);
              }
              *(undefined8 *)((long)&local_38 + lVar7) = 0x100359b18;
              FUN_1001782e9(0,0);
            }
            if (local_1378 == 0x2343) {
              *(int *)(local_1580 + 0xb0) = *(int *)(local_1580 + 0xb0) + 1;
            }
            iVar9 = -0x32;
            if ((lVar12 != 0) && (*(long *)(lVar12 + 8) != 0)) {
              *(undefined8 *)((long)&local_38 + lVar7) = 0x100359b5e;
              FUN_100489136(local_1590,&local_1328);
              lVar14 = local_1590;
              if ((local_1308 & 0x20) != 0) {
                uVar13 = *(undefined8 *)(local_1590 + 8);
                *(undefined8 *)((long)&local_38 + lVar7) = 0x100359b7e;
                lVar14 = FUN_10048604a(uVar13);
              }
              lVar6 = *(long *)(lVar12 + 8);
              if (*(long *)(lVar6 + 0x58) == lVar12) {
                if (((local_1308 & 0x20) == 0) && (lVar14 == local_1590)) {
                  *(undefined8 *)((long)&local_38 + lVar7) = 0x100359bbb;
                  plVar15 = (long *)FUN_100489951(lVar14,lVar12,local_1598);
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar7) = 0x100359bca;
                  plVar15 = (long *)FUN_100489951(lVar14,lVar12,0);
                }
                uVar13 = *(undefined8 *)(lVar12 + 8);
                *(undefined8 *)((long)&local_38 + lVar7) = 0x100359bd8;
                FUN_100474ebf(uVar13,0);
              }
              else {
                *(undefined8 *)((long)&local_38 + lVar7) = 0x100359b92;
                plVar15 = (long *)FUN_10048584d(lVar6,lVar14,0);
              }
              if (plVar15 != (long *)0x0) {
                if ((*plVar15 == local_1590) && (*(long *)(local_1580 + 0xc) != -1)) {
                  *(long **)(local_1580 + 0xc) = plVar15;
                }
                lVar14 = *(long *)(local_1580 + 0x18);
                if (lVar14 != 0) {
                  *(undefined8 *)((long)&local_38 + lVar7) = 0x100359c10;
                  FUN_100595808(lVar14,plVar15,0,0);
                }
                if (*(int *)(local_1580 + 0x6c) == 0) {
                  *(undefined8 *)((long)&local_38 + lVar7) = 0x100359c29;
                  FUN_100490f45(plVar15,local_1580 + 0x6c);
                }
                *(int *)(local_1580 + 0x98) = *(int *)(local_1580 + 0x98) + 1;
                iVar9 = 0;
              }
              if (*(long *)(*(long *)(lVar12 + 8) + 0x68) == 0) {
                *(undefined8 *)((long)&local_38 + lVar7) = 0x100359c4d;
                FUN_1004737f5();
              }
            }
          }
        }
      }
    }
    goto LAB_10035936e;
  }
  if (iVar10 < 0x40) {
    if (iVar10 == 2) {
      if ((local_1590 != 0 && local_1580[0x26] != '\x03') && (*(long *)(param_2 + 0x20) != 0)) {
        *(undefined8 *)((long)&local_38 + lVar7) = 0x1003595f0;
        iVar9 = FUN_1004cc7e8(local_1588,FUN_10035be06,0);
        if ((iVar9 == 0) &&
           ((iVar9 = 0, *(int *)(param_2 + 0x34) == 0x686f6f6b && (local_1580[0x28] != '\0')))) {
          *(undefined8 *)((long)&local_38 + lVar7) = 0x100359629;
          FUN_100182d4d(local_1588);
        }
      }
      goto LAB_10035936e;
    }
    if ((iVar10 != 4) && (iVar10 != 8)) goto LAB_100359669;
LAB_1003592c5:
    if ((local_1580[0x26] == '\x03') || (uVar5 = *(ulong *)(param_2 + 0x20), uVar5 == 0))
    goto LAB_10035936e;
    if (uVar5 < 0x7fffffffffffffff) {
      *(undefined8 *)((long)&local_38 + lVar7) = 0x1003592fe;
      local_1598 = (undefined1 *)FUN_1001c6429(uVar5 + 1);
      if (local_1598 != (undefined1 *)0x0) {
        *(undefined8 *)((long)&local_38 + lVar7) = 0x100359328;
        iVar9 = FUN_10015ff27(local_1588,local_1578,0);
        if (iVar9 == 0) {
          local_15a0 = (ulong)*(uint *)(param_2 + 0x20);
          *(undefined8 *)((long)&local_38 + lVar7) = 0x100359893;
          iVar9 = FUN_100160380(local_1578,&local_15a0,local_1598);
          if ((iVar9 == 0) && (local_15a0 == *(ulong *)(param_2 + 0x20))) {
            *(undefined8 *)((long)&local_38 + lVar7) = 0x1003598c2;
            iVar9 = FUN_100359f5a(iVar10,local_1598,local_15a0,&local_1328);
            if (iVar9 != -0x80) {
              if (iVar9 == 0) {
                *(undefined8 *)((long)&local_38 + lVar7) = 0x1003598ea;
                iVar9 = FUN_10017d5ba(local_1588,local_f08);
                if (iVar9 != -0x80) {
                  if (iVar9 == 0) {
                    if (((uint)local_1324 < 6) && ((0x23U >> ((uint)local_1324 & 0x1f) & 1) != 0)) {
                      pcVar1 = (char *)((long)&local_1324 + 4);
                      *(undefined8 *)((long)&local_38 + lVar7) = 0x10035992b;
                      FUN_1001e5b77(uVar13,pcVar1,0x100);
                      *(undefined8 *)((long)&local_38 + lVar7) = 0x100359933;
                      sVar11 = _strlen(pcVar1);
                      *(undefined8 *)((long)&local_38 + lVar7) = 0x10035993d;
                      iVar9 = FUN_1001e2019(pcVar1,sVar11 & 0xffffffff);
                      if (0 < iVar9) {
                        *(undefined1 *)((long)&local_1324 + (ulong)(iVar9 - 1) + 4) = 0;
                      }
                    }
                    uVar2 = *local_1580;
                    *(undefined8 *)((long)&local_38 + lVar7) = 0x10035996f;
                    iVar9 = FUN_10035adb6(local_1590,uVar2,&local_1328,local_f08);
                    if (iVar9 != -0x80) {
                      if (iVar9 == 0) {
                        iVar9 = 0;
                        if (local_1218 != (long *)0x0) {
                          uVar16 = 0xffff;
                          plVar15 = local_1218;
                          do {
                            uVar16 = uVar16 + 1;
                            if (local_1220 <= uVar16) break;
                            plVar15 = (long *)*plVar15;
                            *(undefined8 *)((long)&local_38 + lVar7) = 0x1003599b9;
                            local_1218 = plVar15;
                            FUN_1001c64c1();
                          } while (plVar15 != (long *)0x0);
                        }
                        goto LAB_100359a52;
                      }
                      *(undefined8 *)((long)&local_38 + lVar7) = 0x100359e02;
                      uVar13 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar7) = 0x100359e12;
                      cVar8 = _os_log_type_enabled(uVar13,0x10);
                      if (cVar8 != '\0') {
                        local_1378 = 0x8220202;
                        local_1374 = "Assertion failure";
                        local_136c = 0x400;
                        local_136a = (char *)CONCAT44(local_136a._4_4_,iVar9);
                        *(undefined8 *)((long)&local_38 + lVar7) = 0x100359f37;
                        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                            &local_1378,0x12);
                      }
                    }
                    if (local_1218 != (long *)0x0) {
                      uVar16 = 0xffff;
                      plVar15 = local_1218;
                      do {
                        uVar16 = uVar16 + 1;
                        if (local_1220 <= uVar16) break;
                        plVar15 = (long *)*plVar15;
                        *(undefined8 *)((long)&local_38 + lVar7) = 0x100359e4c;
                        local_1218 = plVar15;
                        FUN_1001c64c1();
                      } while (plVar15 != (long *)0x0);
                    }
                    goto LAB_100359a52;
                  }
                  *(undefined8 *)((long)&local_38 + lVar7) = 0x100359da6;
                  uVar13 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar7) = 0x100359db6;
                  cVar8 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar8 != '\0') {
                    local_1378 = 0x8220202;
                    local_1374 = "Assertion failure";
                    local_136c = 0x400;
                    local_136a = (char *)CONCAT44(local_136a._4_4_,iVar9);
                    *(undefined8 *)((long)&local_38 + lVar7) = 0x100359ee8;
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                        &local_1378,0x12);
                  }
                }
                if (local_1218 != (long *)0x0) {
                  uVar16 = 0xffff;
                  plVar15 = local_1218;
                  do {
                    uVar16 = uVar16 + 1;
                    if (local_1220 <= uVar16) break;
                    plVar15 = (long *)*plVar15;
                    *(undefined8 *)((long)&local_38 + lVar7) = 0x100359df0;
                    local_1218 = plVar15;
                    FUN_1001c64c1();
                  } while (plVar15 != (long *)0x0);
                }
                goto LAB_100359a52;
              }
              *(undefined8 *)((long)&local_38 + lVar7) = 0x100359ca8;
              uVar13 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar7) = 0x100359cb8;
              cVar8 = _os_log_type_enabled(uVar13,0x10);
              if (cVar8 != '\0') {
                local_1378 = 0x8220202;
                local_1374 = "Assertion failure";
                local_136c = 0x400;
                local_136a = (char *)CONCAT44(local_136a._4_4_,iVar9);
                *(undefined8 *)((long)&local_38 + lVar7) = 0x100359e9e;
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_1378,
                                    0x12);
              }
            }
            if (local_1218 != (long *)0x0) {
              uVar16 = 0xffff;
              plVar15 = local_1218;
              do {
                uVar16 = uVar16 + 1;
                if (local_1220 <= uVar16) break;
                plVar15 = (long *)*plVar15;
                *(undefined8 *)((long)&local_38 + lVar7) = 0x100359cf2;
                local_1218 = plVar15;
                FUN_1001c64c1();
              } while (plVar15 != (long *)0x0);
            }
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar7) = 0x100359a2b;
            uVar13 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar7) = 0x100359a3b;
            cVar8 = _os_log_type_enabled(uVar13,0x10);
            if (cVar8 != '\0') {
              local_1378 = 0x8220202;
              local_1374 = "Assertion failure";
              local_136c = 0x822;
              local_136a = "((status == noErr) && (count == fileInfo->u.file.dataForkLength))";
              *(undefined8 *)((long)&local_38 + lVar7) = 0x100359d4b;
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_1378,
                                  0x16);
            }
            *(undefined8 *)((long)&local_38 + lVar7) = 0x100359a4c;
            FUN_1001782e9(0,0);
            iVar9 = -0x27;
          }
LAB_100359a52:
          *(undefined8 *)((long)&local_38 + lVar7) = 0x100359a5e;
          FUN_10016013b(local_1578);
        }
        else {
          if (iVar9 == -0x80) {
            *(undefined8 *)((long)&local_38 + lVar7) = 0x100359349;
            FUN_1001c64c1(local_1598);
            iVar9 = -0x80;
            goto LAB_10035936e;
          }
          *(undefined8 *)((long)&local_38 + lVar7) = 0x1003599cb;
          uVar13 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar7) = 0x1003599db;
          cVar8 = _os_log_type_enabled(uVar13,0x10);
          if (cVar8 != '\0') {
            local_1378 = 0x8220202;
            local_1374 = "Assertion failure";
            local_136c = 0x400;
            local_136a = (char *)CONCAT44(local_136a._4_4_,iVar9);
            *(undefined8 *)((long)&local_38 + lVar7) = 0x100359a24;
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_1378,0x12);
          }
        }
        *(undefined8 *)((long)&local_38 + lVar7) = 0x100359a6a;
        FUN_1001c64c1(local_1598);
        if (((iVar9 == 0) && (iVar9 = 0, *(int *)(param_2 + 0x34) == 0x686f6f6b)) &&
           (local_1580[0x28] != '\0')) {
          *(undefined8 *)((long)&local_38 + lVar7) = 0x100359aa1;
          FUN_100182d4d(local_1588);
        }
        goto LAB_10035936e;
      }
      *(undefined8 *)((long)&local_38 + lVar7) = 0x1003597fd;
      uVar13 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10035980d;
      cVar8 = _os_log_type_enabled(uVar13,0x10);
      iVar9 = -0x6c;
      if (cVar8 != '\0') {
        local_136a = "tempBuffer != nullptr";
        goto LAB_100359c79;
      }
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar7) = 0x1003597ad;
      uVar13 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar7) = 0x1003597bd;
      cVar8 = _os_log_type_enabled(uVar13,0x10);
      if (cVar8 != '\0') {
        local_136a = "fileInfo->u.file.dataForkLength < 9223372036854775807L";
LAB_100359c79:
        local_136c = 0x822;
        local_1374 = "Assertion failure";
        local_1378 = 0x8220202;
        *(undefined8 *)((long)&local_38 + lVar7) = 0x100359c9e;
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_1378,0x16);
      }
    }
    *(undefined8 *)((long)&local_38 + lVar7) = 0x100359824;
    FUN_1001782e9(0,0);
    goto LAB_10035936e;
  }
  if (iVar10 < 0x200) {
    if (iVar10 != 0x40) {
      if (iVar10 != 0x100) goto LAB_100359669;
LAB_100359425:
      if ((local_1590 == 0 || local_1580[0x26] == '\x03') || (local_1580[0x27] == '\0'))
      goto LAB_10035936e;
      local_1578[0] = 0;
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10035947c;
      iVar9 = FUN_1005378f0(local_1588,param_2,0x400,local_f08);
      uVar17 = local_1578[0];
      if (local_1578[0] == 0) goto LAB_10035936e;
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10035949f;
      FUN_1001c62d9(local_480,0x448);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x1003594b5;
      FUN_1001b7b34(&local_1328,local_f08,uVar17);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x1003594c1;
      cVar8 = FUN_1001a5b5e(&local_1328);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x1003594d0;
      FUN_1001b7a50(&local_1328);
      if (cVar8 != '\0') goto LAB_10035936e;
      *(undefined8 *)((long)&local_38 + lVar7) = 0x1003594f3;
      cVar8 = FUN_100483d00(local_1598,0x48545450,local_480,0);
      if (cVar8 == '\0') goto LAB_10035936e;
      uVar2 = *local_1580;
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100359525;
      lVar12 = FUN_100489f3f(local_1590,uVar2,uVar17,local_f08,local_1598,0);
      if (lVar12 == 0) goto LAB_10035936e;
      if (*(long *)(local_1580 + 0xc) != -1) {
        *(long *)(local_1580 + 0xc) = lVar12;
      }
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100359552;
      FUN_1001e1c39(uVar13,local_688);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x100359560;
      FUN_1001e3e43(local_688,0);
      *(undefined8 *)((long)&local_38 + lVar7) = 0x10035956f;
      FUN_100486c33(lVar12,local_688);
    }
  }
  else {
    if (iVar10 == 0x200) goto LAB_100359425;
    if (iVar10 != 0x400) goto LAB_100359669;
  }
LAB_10035936b:
  iVar9 = 0;
LAB_10035936e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)&local_38 + lVar7) = 0x100359ef2;
    ___stack_chk_fail();
  }
  return iVar9;
}

