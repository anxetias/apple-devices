// name: FUN_10028c177
// address: 10028c177

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10028c177(int param_1,long *param_2,int *param_3)

{
  long *plVar1;
  long *plVar2;
  double *pdVar3;
  long *plVar4;
  undefined8 *puVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 uVar17;
  char cVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  long *plVar23;
  long lVar24;
  undefined4 *puVar25;
  undefined8 uVar26;
  char *pcVar27;
  long lVar28;
  int *piVar29;
  ulong uVar30;
  ulong uVar31;
  byte bVar32;
  uint *puVar33;
  undefined4 uVar34;
  undefined8 in_stack_fffffffffffffa18;
  ulong in_stack_fffffffffffffa20;
  ulong in_stack_fffffffffffffa28;
  undefined4 uVar35;
  undefined8 in_stack_fffffffffffffa30;
  undefined4 uVar36;
  undefined8 in_stack_fffffffffffffa38;
  undefined4 uVar37;
  undefined8 in_stack_fffffffffffffa48;
  undefined4 uVar38;
  uint local_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  uint local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  uint local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  uint local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  uint local_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  uint local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  uint local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  long local_4f8;
  long local_4f0;
  long local_4e8;
  long local_4e0;
  long local_4d8;
  long local_4d0;
  long local_4c8;
  long local_4c0;
  long local_4b8;
  long local_4b0;
  long local_4a8;
  long local_4a0;
  long local_498;
  long local_490;
  ulong local_488;
  int *local_480;
  undefined4 local_474;
  long *local_470;
  undefined4 local_468;
  undefined8 local_464;
  undefined2 local_45c;
  uint uStack_45a;
  undefined2 uStack_456;
  undefined2 uStack_454;
  long local_450 [127];
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ushort uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined4 uStack_44;
  long lStack_40;
  long local_38;
  
  uVar37 = (undefined4)((ulong)in_stack_fffffffffffffa38 >> 0x20);
  uVar38 = (undefined4)((ulong)in_stack_fffffffffffffa48 >> 0x20);
  uVar34 = (undefined4)((ulong)in_stack_fffffffffffffa18 >> 0x20);
  uVar35 = (undefined4)(in_stack_fffffffffffffa28 >> 0x20);
  uVar36 = (undefined4)((ulong)in_stack_fffffffffffffa30 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar24 = *param_2;
  uVar31 = 0xffffffce;
  uVar20 = uStack_45a;
  if (param_1 < 0x67726269) {
    if (param_1 < 0x65736d70) {
      if (param_1 < 0x63646670) {
        if (param_1 < 0x63616e20) {
          if (param_1 == 0x61737470) {
            if ((lVar24 == 0) || (**(int **)(lVar24 + 8) != 0x6d706567)) {
              uVar26 = FUN_1001cc310();
              cVar18 = _os_log_type_enabled(uVar26,0x10);
              if (cVar18 != '\0') {
                local_468 = 0x8220202;
                local_464 = "Assertion failure";
                local_45c = 0x822;
                uStack_45a = 0x7b7370;
                uStack_456 = 1;
                uStack_454 = 0;
                __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              goto LAB_10028dc3d;
            }
            if (*(char *)(lVar24 + 0xd21) != '\0') {
              *(undefined1 *)(lVar24 + 0x606b) = 1;
              goto LAB_10028e1ac;
            }
            uVar26 = FUN_1001cc310();
            cVar18 = _os_log_type_enabled(uVar26,0x10);
            if (cVar18 != '\0') {
              local_468 = 0x8220202;
              local_464 = "Assertion failure";
              local_45c = 0x822;
              uStack_45a = 0x7b73be;
              uStack_456 = 1;
              uStack_454 = 0;
              __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16
                                 );
            }
            FUN_1001782e9(0,0);
            uVar20 = uStack_45a;
          }
          else if (param_1 == 0x626f6666) {
            if ((lVar24 != 0) && (**(int **)(lVar24 + 8) == 0x6d706567)) {
              if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
                uVar31 = FUN_100295fe6(lVar24,(int)param_2[5],(long)param_2 + 0x2c,param_2 + 7);
                return uVar31;
              }
              goto LAB_100290599;
            }
            uVar26 = FUN_1001cc310();
            cVar18 = _os_log_type_enabled(uVar26,0x10);
            if (cVar18 != '\0') {
              local_468 = 0x8220202;
              local_464 = "Assertion failure";
              local_45c = 0x822;
              uStack_45a = 0x7b7370;
              uStack_456 = 1;
              uStack_454 = 0;
              __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16
                                 );
            }
            FUN_1001782e9(0,0);
            goto LAB_10028dc3d;
          }
          goto LAB_10028dc42;
        }
        if (param_1 == 0x63616e20) {
LAB_10028c80a:
          if ((param_3 != (int *)0x0) && (*param_3 == 0x6d706567)) {
            iVar22 = (int)param_2[3];
            if (iVar22 < 0x48545450) {
              if (iVar22 == 0x44574e4c) {
                uVar36 = (undefined4)param_2[5];
                uVar34 = (undefined4)param_2[6];
                uVar35 = *(undefined4 *)((long)param_2 + 0x34);
LAB_10028de1d:
                if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
                  uVar31 = FUN_100291bc1(uVar34,uVar35,0,uVar36);
                  return uVar31;
                }
                goto LAB_100290599;
              }
              if (iVar22 == 0x46494c45) goto LAB_10028dc7c;
            }
            else if ((iVar22 == 0x48545450) || (iVar22 == 0x53485244)) {
              uVar31 = 0xffffffce;
              if ((*(byte *)(param_2 + 5) & 10) != 0) {
                uVar31 = 0;
              }
            }
            else if (iVar22 == 0x4d46494c) {
LAB_10028dc7c:
              uVar34 = *(undefined4 *)param_2[4];
              uVar35 = ((undefined4 *)param_2[4])[9];
              uVar36 = (undefined4)param_2[5];
              goto LAB_10028de1d;
            }
            goto LAB_10028dc42;
          }
          uVar26 = FUN_1001cc310();
          cVar18 = _os_log_type_enabled(uVar26,0x10);
          if (cVar18 != '\0') {
            local_468 = 0x8220202;
            local_464 = "Assertion failure";
            local_45c = 0x822;
            uStack_45a = 0x7b723a;
            uStack_456 = 1;
            uStack_454 = 0;
            __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          if (param_1 != 0x63636163) goto LAB_10028dc42;
          local_58 = 0x10000;
          if ((param_3 != (int *)0x0) && (*param_3 == 0x6d706567)) {
            plVar23 = (long *)FUN_1001c6429(0x18);
            if (plVar23 == (long *)0x0) {
              uVar26 = FUN_1001cc310();
              cVar18 = _os_log_type_enabled(uVar26,0x10);
              if (cVar18 != '\0') {
                local_468 = 0x8220202;
                local_464 = "Assertion failure";
                local_45c = 0x822;
                uStack_45a = 0x7b72a6;
                uStack_456 = 1;
                uStack_454 = 0;
                __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              goto LAB_10028dd0d;
            }
            FUN_10057db47(*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4),0x66627566,
                          &local_58);
            uVar19 = FUN_1001d7af8(plVar23,2,local_58 >> 1);
            uVar31 = (ulong)uVar19;
            uVar20 = uStack_45a;
            if (uVar19 != 0xffffff80) {
              if (uVar19 == 0) {
                lVar24 = FUN_1001c6429(0x8390);
                plVar23[1] = lVar24;
                if (lVar24 == 0) {
                  uVar26 = FUN_1001cc310();
                  cVar18 = _os_log_type_enabled(uVar26,0x10);
                  if (cVar18 != '\0') {
                    local_468 = 0x8220202;
                    local_464 = "Assertion failure";
                    local_45c = 0x822;
                    uStack_45a = 0x7b72bb;
                    uStack_456 = 1;
                    uStack_454 = 0;
                    __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",
                                        &local_468,0x16);
                  }
                  FUN_1001782e9(0,0);
                  uVar31 = 0xffffff94;
                  uVar20 = uStack_45a;
                }
                else {
                  uVar19 = FUN_100270a6b(lVar24,0);
                  uVar31 = 0xffffff94;
                  uVar20 = uStack_45a;
                  if (uVar19 != 0xffffff80) {
                    if (uVar19 == 0) {
                      param_2[3] = (long)plVar23;
                      goto LAB_10028e1ac;
                    }
                    uVar26 = FUN_1001cc310();
                    cVar18 = _os_log_type_enabled(uVar26,0x10);
                    uVar20 = uStack_45a;
                    goto joined_r0x00010028dfe8;
                  }
                }
              }
              else {
                uVar26 = FUN_1001cc310();
                cVar18 = _os_log_type_enabled(uVar26,0x10);
                uVar20 = uStack_45a;
joined_r0x00010028dfe8:
                uStack_45a = uVar19;
                if (cVar18 != '\0') {
                  local_45c = 0x400;
                  local_464 = "Assertion failure";
                  local_468 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",&local_468,
                                      0x12);
                  uVar20 = uStack_45a;
                }
              }
            }
            uStack_45a = uVar20;
            if (plVar23[1] != 0) {
              FUN_1002711a0();
              FUN_1001c64c1(plVar23[1]);
            }
            if (*plVar23 != 0) {
              FUN_1001d7cd8();
            }
            FUN_1001c64c1(plVar23);
            uVar20 = uStack_45a;
            goto LAB_10028dc42;
          }
          uVar26 = FUN_1001cc310();
          cVar18 = _os_log_type_enabled(uVar26,0x10);
          if (cVar18 != '\0') {
            local_468 = 0x8220202;
            local_464 = "Assertion failure";
            local_45c = 0x822;
            uStack_45a = 0x7b723a;
            uStack_456 = 1;
            uStack_454 = 0;
            __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      else {
        if (0x64636162 < param_1) {
          if (param_1 == 0x64636163) {
            if ((param_3 == (int *)0x0) || (*param_3 != 0x6d706567)) {
              uVar26 = FUN_1001cc310();
              cVar18 = _os_log_type_enabled(uVar26,0x10);
              if (cVar18 != '\0') {
                local_468 = 0x8220202;
                local_464 = "Assertion failure";
                local_45c = 0x822;
                uStack_45a = 0x7b723a;
                uStack_456 = 1;
                uStack_454 = 0;
                __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              goto LAB_10028dc3d;
            }
            param_3 = (int *)param_2[3];
            if (param_3 != (int *)0x0) {
              FUN_1002711a0(*(undefined8 *)(param_3 + 2));
              FUN_1001c64c1(*(undefined8 *)(param_3 + 2));
              FUN_1001d7cd8(*(undefined8 *)param_3);
              goto LAB_10028d25b;
            }
            uVar26 = FUN_1001cc310();
            cVar18 = _os_log_type_enabled(uVar26,0x10);
            if (cVar18 != '\0') {
              local_468 = 0x8220202;
              local_464 = "Assertion failure";
              local_45c = 0x822;
              uStack_45a = 0x7b72a6;
              uStack_456 = 1;
              uStack_454 = 0;
              __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16
                                 );
            }
            FUN_1001782e9(0,0);
            uVar20 = uStack_45a;
          }
          else {
            if (param_1 == 0x64636f64) {
              if (lVar24 != 0) {
                uVar31 = FUN_1002906aa(lVar24,param_2[3],(long)param_2 + 0x24,param_2 + 5,
                                       param_2 + 6);
                return uVar31;
              }
              uVar26 = FUN_1001cc310();
              cVar18 = _os_log_type_enabled(uVar26,0x10);
              if (cVar18 != '\0') {
                local_468 = 0x8220202;
                local_464 = "Assertion failure";
                local_45c = 0x822;
                uStack_45a = 0x7b7275;
                uStack_456 = 1;
                uStack_454 = 0;
                __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              goto LAB_10028dc3d;
            }
            if (param_1 == 0x64657874) {
              uVar31 = 0xfffffffc;
            }
          }
          goto LAB_10028dc42;
        }
        if (param_1 == 0x63646670) {
          if (lVar24 != 0) {
            uVar31 = FUN_100290e0c(lVar24,param_2 + 3);
            return uVar31;
          }
          uVar26 = FUN_1001cc310();
          cVar18 = _os_log_type_enabled(uVar26,0x10);
          if (cVar18 != '\0') {
            local_468 = 0x8220202;
            local_464 = "Assertion failure";
            local_45c = 0x822;
            uStack_45a = 0x7b7275;
            uStack_456 = 1;
            uStack_454 = 0;
            __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          if (param_1 != 0x636c7220) goto LAB_10028dc42;
          if ((param_3 != (int *)0x0) && (*param_3 == 0x6d706567)) {
LAB_10028d25b:
            FUN_1001c64c1(param_3);
            goto LAB_10028e1ac;
          }
          uVar26 = FUN_1001cc310();
          cVar18 = _os_log_type_enabled(uVar26,0x10);
          if (cVar18 != '\0') {
            local_468 = 0x8220202;
            local_464 = "Assertion failure";
            local_45c = 0x822;
            uStack_45a = 0x7b723a;
            uStack_456 = 1;
            uStack_454 = 0;
            __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
    }
    else if (param_1 < 0x6765696c) {
      if (param_1 < 0x67636f6d) {
        if (param_1 == 0x65736d70) {
          if (lVar24 != 0) {
            uVar31 = FUN_100291fe3(lVar24,param_2 + 3);
            return uVar31;
          }
          uVar26 = FUN_1001cc310();
          cVar18 = _os_log_type_enabled(uVar26,0x10);
          if (cVar18 != '\0') {
            local_468 = 0x8220202;
            local_464 = "Assertion failure";
            local_45c = 0x822;
            uStack_45a = 0x7b7275;
            uStack_456 = 1;
            uStack_454 = 0;
            __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          if (param_1 != 0x67617274) goto LAB_10028dc42;
          if ((param_3 != (int *)0x0) && (*param_3 == 0x6d706567)) {
            uVar31 = FUN_10029325e(param_3,param_2 + 3);
            return uVar31;
          }
          uVar26 = FUN_1001cc310();
          cVar18 = _os_log_type_enabled(uVar26,0x10);
          if (cVar18 != '\0') {
            local_468 = 0x8220202;
            local_464 = "Assertion failure";
            local_45c = 0x822;
            uStack_45a = 0x7b723a;
            uStack_456 = 1;
            uStack_454 = 0;
            __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      else if (param_1 == 0x67636f6d) {
        if ((param_3 != (int *)0x0) && (*param_3 == 0x6d706567)) {
          if ((int)param_2[3] == 0x46494c45) {
            local_58 = 0x434f4d4d;
            uStack_54 = 0x434f4d20;
            uStack_50 = 0;
            uVar19 = FUN_1002934ca(0x46494c45,param_2[4],0);
            if (uVar19 == 0) {
              uVar19 = FUN_10042ab36(param_2[4] + 0x2c,FUN_1002a8ec0,param_2,0,0,0,&local_58);
              uVar31 = (ulong)uVar19;
              uVar20 = uStack_45a;
              if ((uVar19 == 0xffffff80) || (uVar19 == 0)) goto LAB_10028dc42;
              uVar26 = FUN_1001cc310();
              cVar18 = _os_log_type_enabled(uVar26,0x10);
              uVar20 = uStack_45a;
            }
            else {
              uVar31 = (ulong)uVar19;
              uVar26 = FUN_1001cc310();
              cVar18 = _os_log_type_enabled(uVar26,0x10);
              uVar20 = uStack_45a;
            }
            goto joined_r0x00010028e162;
          }
          goto LAB_10028dc42;
        }
        uVar26 = FUN_1001cc310();
        cVar18 = _os_log_type_enabled(uVar26,0x10);
        if (cVar18 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x822;
          uStack_45a = 0x7b723a;
          uStack_456 = 1;
          uStack_454 = 0;
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        if (param_1 != 0x67646574) {
          if (param_1 == 0x67646872) {
            if (lVar24 == 0) {
              uVar26 = FUN_1001cc310();
              cVar18 = _os_log_type_enabled(uVar26,0x10);
              if (cVar18 != '\0') {
                local_468 = 0x8220202;
                local_464 = "Assertion failure";
                local_45c = 0x822;
                uStack_45a = 0x7b7275;
                uStack_456 = 1;
                uStack_454 = 0;
                __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              goto LAB_10028dc3d;
            }
            lVar28 = *(long *)(lVar24 + 0xca8);
            uVar31 = 0;
            if (lVar28 != 0) {
              plVar23 = operator_new(0x10,(nothrow_t *)PTR_nothrow_10082c970);
              if (plVar23 != (long *)0x0) {
                *plVar23 = lVar28;
                lVar24 = *(long *)(lVar24 + 0xcb0);
                plVar23[1] = lVar24;
                if (lVar24 != 0) {
                  LOCK();
                  *(long *)(lVar24 + 8) = *(long *)(lVar24 + 8) + 1;
                  UNLOCK();
                }
              }
              param_2[6] = (long)plVar23;
              uVar20 = uStack_45a;
            }
          }
          goto LAB_10028dc42;
        }
        if ((param_3 != (int *)0x0) && (*param_3 == 0x6d706567)) {
          uVar31 = FUN_100293549((int)param_2[3],param_2[4],(int)param_2[5],(long)param_2 + 0x2c,
                                 param_2[6]);
          return uVar31;
        }
        uVar26 = FUN_1001cc310();
        cVar18 = _os_log_type_enabled(uVar26,0x10);
        if (cVar18 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x822;
          uStack_45a = 0x7b723a;
          uStack_456 = 1;
          uStack_454 = 0;
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    else {
      if (param_1 < 0x67696e66) {
        if (param_1 == 0x6765696c) {
          param_2[4] = (long)&DAT_100845328;
LAB_10028e1ac:
          uVar31 = 0;
          uVar20 = uStack_45a;
        }
        else if (param_1 == 0x67667874) {
          uVar31 = FUN_100466cd7(" 2PM2GPM2GPM 3PM3GPM3GPM 3PMGEPM3GPMAGPMGEPMGEPM 3PM!3PM3GPM 3PM!3pm3GPM 3PM 3PM3GPM 3PM 3pM3GPM 3PM3gpm3GPM 3PMYALP3GPM"
                                 ,param_2[3],param_2 + 4,(long)param_2 + 0x24,0xf);
          return uVar31;
        }
        goto LAB_10028dc42;
      }
      if (param_1 == 0x67696e66) {
        if ((lVar24 != 0) && (**(int **)(lVar24 + 8) == 0x6d706567)) {
          if (*(char *)(lVar24 + 0xd21) != '\0') {
            FUN_100295c9b(lVar24,(long)param_2 + 0x34,param_2 + 7);
            if ((void *)param_2[4] != (void *)0x0) {
              _memcpy((void *)param_2[4],(void *)(lVar24 + 0xd98),0x1660);
            }
            puVar5 = (undefined8 *)param_2[5];
            if (puVar5 != (undefined8 *)0x0) {
              uVar26 = *(undefined8 *)(lVar24 + 0x2400);
              *puVar5 = *(undefined8 *)(lVar24 + 0x23f8);
              puVar5[1] = uVar26;
              _memcpy(puVar5 + 2,(void *)(lVar24 + 0x2408),0x3638);
            }
            *(undefined4 *)(param_2 + 6) = *(undefined4 *)(lVar24 + 0xd2c);
            *(undefined4 *)(param_2 + 8) = *(undefined4 *)(lVar24 + 0xd24);
            *(float *)((long)param_2 + 0x44) = (float)*(uint *)(lVar24 + 0xce0);
            goto LAB_10028e1ac;
          }
          uVar26 = FUN_1001cc310();
          cVar18 = _os_log_type_enabled(uVar26,0x10);
          if (cVar18 != '\0') {
            local_468 = 0x8220202;
            local_464 = "Assertion failure";
            local_45c = 0x822;
            uStack_45a = 0x7b73be;
            uStack_456 = 1;
            uStack_454 = 0;
            __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
          }
          FUN_1001782e9(0,0);
          uVar20 = uStack_45a;
          goto LAB_10028dc42;
        }
        uVar26 = FUN_1001cc310();
        cVar18 = _os_log_type_enabled(uVar26,0x10);
        if (cVar18 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x822;
          uStack_45a = 0x7b7370;
          uStack_456 = 1;
          uStack_454 = 0;
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else if (param_1 == 0x676c7972) {
        if ((param_3 != (int *)0x0) && (*param_3 == 0x6d706567)) {
          uVar31 = FUN_1002933ed((int)param_2[3],param_2[4],param_2[6]);
          return uVar31;
        }
        uVar26 = FUN_1001cc310();
        cVar18 = _os_log_type_enabled(uVar26,0x10);
        if (cVar18 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x822;
          uStack_45a = 0x7b723a;
          uStack_456 = 1;
          uStack_454 = 0;
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        if (param_1 != 0x67706174) goto LAB_10028dc42;
        if ((param_3 != (int *)0x0) && (*param_3 == 0x6d706567)) {
          iVar22 = (int)param_2[3];
          uVar20 = 0;
          if (iVar22 < 0x48545450) {
            if (iVar22 == 0x44574e4c) {
              uVar20 = 0x13d;
            }
            else if (iVar22 == 0x46494c45) goto LAB_10028dcb2;
          }
          else if ((iVar22 == 0x48545450) || (iVar22 == 0x53485244)) {
            uVar20 = 0x110c;
          }
          else if (iVar22 == 0x4d46494c) {
LAB_10028dcb2:
            uVar20 = 0x113d;
          }
          *(uint *)((long)param_2 + 0x34) = uVar20 & *(uint *)(param_2 + 6);
          goto LAB_10028e1ac;
        }
        uVar26 = FUN_1001cc310();
        cVar18 = _os_log_type_enabled(uVar26,0x10);
        if (cVar18 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x822;
          uStack_45a = 0x7b723a;
          uStack_456 = 1;
          uStack_454 = 0;
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
LAB_10028dc3d:
    uVar31 = 0xffffffe4;
    uVar20 = uStack_45a;
    goto LAB_10028dc42;
  }
  if (param_1 < 0x72756669) {
    if (param_1 < 0x6c64746d) {
      if (param_1 < 0x67756669) {
        if (param_1 == 0x67726269) {
          if ((lVar24 != 0) && (**(int **)(lVar24 + 8) == 0x6d706567)) {
            uVar17 = *(undefined1 *)(lVar24 + 0x606a);
            goto LAB_10028cca9;
          }
          uVar26 = FUN_1001cc310();
          cVar18 = _os_log_type_enabled(uVar26,0x10);
          if (cVar18 != '\0') {
            local_468 = 0x8220202;
            local_464 = "Assertion failure";
            local_45c = 0x822;
            uStack_45a = 0x7b7370;
            uStack_456 = 1;
            uStack_454 = 0;
            __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          if (param_1 != 0x6774696e) goto LAB_10028dc42;
          if ((param_3 != (int *)0x0) && (*param_3 == 0x6d706567)) {
            uVar31 = FUN_100291c54((int)param_2[3],param_2[4],param_2[7],param_2[8],param_2[10],
                                   param_2 + 9,(*(uint *)(param_2 + 5) >> 9 & 1) == 0);
            if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
              return uVar31;
            }
            goto LAB_100290599;
          }
          uVar26 = FUN_1001cc310();
          cVar18 = _os_log_type_enabled(uVar26,0x10);
          if (cVar18 != '\0') {
            local_468 = 0x8220202;
            local_464 = "Assertion failure";
            local_45c = 0x822;
            uStack_45a = 0x7b723a;
            uStack_456 = 1;
            uStack_454 = 0;
            __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      else {
        if (param_1 != 0x67756669) {
          if (param_1 != 0x696e6974) goto LAB_10028dc42;
          puVar25 = (undefined4 *)FUN_1001c6429(0x20);
          if (puVar25 != (undefined4 *)0x0) {
            *puVar25 = 0x6d706567;
            *(long *)(puVar25 + 2) = param_2[4];
            *(long *)(puVar25 + 4) = param_2[5];
            param_2[7] = (long)puVar25;
            goto LAB_10028e1ac;
          }
          uVar26 = FUN_1001cc310();
          cVar18 = _os_log_type_enabled(uVar26,0x10);
          if (cVar18 != '\0') {
            local_468 = 0x8220202;
            local_464 = "Assertion failure";
            local_45c = 0x822;
            uStack_45a = 0x7ade6a;
            uStack_456 = 1;
            uStack_454 = 0;
            __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_10028dd0d;
        }
        if ((param_3 != (int *)0x0) && (*param_3 == 0x6d706567)) {
          if ((int)param_2[3] == 0x46494c45) {
            local_58 = 0x55464944;
            uStack_54 = 0x55464920;
            uStack_50 = 0;
            uVar19 = FUN_1002934ca(0x46494c45,param_2[4],0);
            if (uVar19 == 0) {
              uVar19 = FUN_10042ab36(param_2[4] + 0x2c,FUN_1002a90a4,param_2,0,0,0,&local_58);
              uVar31 = (ulong)uVar19;
              uVar20 = uStack_45a;
              if ((uVar19 == 0xffffff80) || (uVar19 == 0)) goto LAB_10028dc42;
              uVar26 = FUN_1001cc310();
              cVar18 = _os_log_type_enabled(uVar26,0x10);
              uVar20 = uStack_45a;
            }
            else {
              uVar31 = (ulong)uVar19;
              uVar26 = FUN_1001cc310();
              cVar18 = _os_log_type_enabled(uVar26,0x10);
              uVar20 = uStack_45a;
            }
joined_r0x00010028e162:
            uStack_45a = uVar19;
            if (cVar18 != '\0') {
              local_45c = 0x400;
              local_464 = "Assertion failure";
              local_468 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",&local_468,0x12)
              ;
              uVar20 = uStack_45a;
            }
          }
          goto LAB_10028dc42;
        }
        uVar26 = FUN_1001cc310();
        cVar18 = _os_log_type_enabled(uVar26,0x10);
        if (cVar18 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x822;
          uStack_45a = 0x7b723a;
          uStack_456 = 1;
          uStack_454 = 0;
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
        }
        FUN_1001782e9(0,0);
      }
      goto LAB_10028dc3d;
    }
    if (param_1 < 0x706c6179) {
      if (param_1 == 0x6c64746d) {
        uVar31 = 0xffffffe4;
        if ((lVar24 != 0) && (**(int **)(lVar24 + 8) == 0x6d706567)) {
          uVar17 = FUN_100295dcd(lVar24,(long)param_2 + 0x1c);
LAB_10028cca9:
          *(undefined1 *)(param_2 + 3) = uVar17;
          goto LAB_10028e1ac;
        }
      }
      else if (param_1 == 0x7063616e) goto LAB_10028c80a;
    }
    else if (param_1 == 0x706c6179) {
      local_474 = 0x10000;
      if ((param_3 == (int *)0x0) || (*param_3 != 0x6d706567)) {
        uVar26 = FUN_1001cc310();
        cVar18 = _os_log_type_enabled(uVar26,0x10);
        uVar31 = 0xffffffe4;
        if (cVar18 != '\0') {
          pcVar27 = "(handlerData != nullptr) && (handlerData->magic == \'mpeg\')";
LAB_10028e97f:
          local_45c = 0x822;
          local_464 = "Assertion failure";
          local_468 = 0x8220202;
          uStack_45a = (uint)pcVar27;
          uStack_456 = (undefined2)((ulong)pcVar27 >> 0x20);
          uStack_454 = 0;
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
        }
      }
      else {
        plVar23 = (long *)FUN_1001c6429(0x6070);
        if (plVar23 != (long *)0x0) {
          *param_2 = (long)plVar23;
          plVar23[1] = (long)param_3;
          plVar23[0x19a] = param_2[0xb];
          lVar24 = param_2[10];
          plVar23[0x191] = lVar24;
          local_470 = plVar23;
          if (lVar24 == 0) {
            uVar20 = *(uint *)(param_2 + 5);
            lVar24 = FUN_1001c63e1(0x8390);
            plVar23[0x19b] = lVar24;
            if (lVar24 == 0) {
              uVar26 = FUN_1001cc310();
              cVar18 = _os_log_type_enabled(uVar26,0x10);
              if (cVar18 != '\0') {
                local_468 = 0x8220202;
                local_464 = "Assertion failure";
                local_45c = 0x822;
                uStack_45a = 0x7b72f1;
                uStack_456 = 1;
                uStack_454 = 0;
                __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              FUN_100293805(local_470);
              goto LAB_10028dd0d;
            }
            uVar20 = FUN_100270a6b(lVar24,(uVar20 & 0x3f0040) != 0);
            uVar31 = (ulong)uVar20;
            if (uVar20 != 0xffffff80) {
              if (uVar20 == 0) goto LAB_10028df1f;
              uVar26 = FUN_1001cc310();
              cVar18 = _os_log_type_enabled(uVar26,0x10);
              if (cVar18 != '\0') {
                local_468 = 0x8220202;
                local_464 = "Assertion failure";
                local_45c = 0x400;
                uStack_45a = uVar20;
                __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",&local_468,
                                    0x12);
              }
            }
            FUN_100293805(plVar23);
            uVar20 = uStack_45a;
            goto LAB_10028dc42;
          }
          lVar28 = *(long *)(lVar24 + 8);
          plVar23[0x19b] = lVar28;
          if (lVar28 == 0) {
            uVar26 = FUN_1001cc310();
            cVar18 = _os_log_type_enabled(uVar26,0x10);
            if (cVar18 != '\0') {
              local_468 = 0x8220202;
              local_464 = "Assertion failure";
              local_45c = 0x822;
              uStack_45a = 0x7b72f1;
              uStack_456 = 1;
              uStack_454 = 0;
              __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16
                                 );
            }
            FUN_1001782e9(0,0);
            FUN_100293805(local_470);
            uVar31 = 0xffffffce;
            uVar20 = uStack_45a;
            goto LAB_10028dc42;
          }
          if (*(long *)(lVar24 + 0x10) == 0) {
LAB_10028d320:
            *(long **)(lVar24 + 0x10) = plVar23;
LAB_10028df1f:
            *(undefined1 *)((long)plVar23 + 0x606b) = 0;
            *(undefined4 *)(plVar23 + 0xc0c) = 10;
            uVar20 = *(uint *)(param_2 + 5);
            *(byte *)(plVar23 + 0xb4a) = (byte)uVar20 >> 3 & 1;
            *(byte *)((long)plVar23 + 0x6066) = (byte)(uVar20 >> 0xe) & 1;
            cVar18 = (char)((uVar20 & 0x8000) >> 0xf);
            *(char *)((long)plVar23 + 0x6067) = cVar18;
            if ((uVar20 & 0x8000) != 0) {
              *(undefined2 *)((long)plVar23 + 0x6066) = 0x101;
              cVar18 = '\x01';
            }
            *(int *)(plVar23 + 2) = (int)param_2[3];
            _memcpy((void *)((long)plVar23 + 0x14),(void *)param_2[4],0x460);
            plVar23 = local_470;
            iVar22 = (int)param_2[3];
            uVar31 = 0xffffffce;
            if (iVar22 < 0x48545450) {
              if ((iVar22 == 0x44574e4c) || (iVar22 == 0x46494c45)) {
LAB_10028eccb:
                if ((*(byte *)(param_2 + 5) & 4) == 0) {
                  if (cVar18 == '\0') {
                    FUN_10057db47(*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4),
                                  0x66627566,&local_474);
                  }
                }
                else {
                  local_474 = 0x80000;
                }
                puVar25 = &local_468;
                FUN_1001c62d9(puVar25,0x20);
                local_468 = 0x61727477;
                uVar20 = 0;
                if ((*(byte *)(param_2 + 5) & 100) == 0) {
                  uVar20 = FUN_1005d38c7(0,0,local_450);
                }
                local_470[0x1a9] = 0;
                piVar29 = (int *)((long)local_470 + 0xd2c);
                if (*(int *)((long)param_2 + 0x94) != 0) {
                  *piVar29 = *(int *)((long)param_2 + 0x94);
                  piVar29 = (int *)0x0;
                }
                if (uVar20 == 0) {
                  if (((int)param_2[3] != 0x46494c45) ||
                     (bVar32 = 1, (*(byte *)((long)param_2 + 0x2a) & 0x40) == 0)) {
                    bVar32 = 0;
                  }
                  local_480 = (int *)(local_470[0x19b] + 0x10);
                  if (local_450[0] == 0) {
                    puVar25 = (undefined4 *)0x0;
                  }
                  uVar20 = FUN_10029388d(local_470,local_470 + 0x195,local_470[0x19b],local_480,
                                         (int)param_2[3],param_2[4],local_470 + 0x1b3,
                                         local_470 + 0x47f,puVar25,param_2[0x11],
                                         CONCAT44(uVar37,local_474),piVar29,
                                         CONCAT44(uVar38,(uint)bVar32));
                  if (uVar20 == 0) {
                    local_470[0x192] = local_450[0];
                    *(undefined1 *)(local_470 + 0x193) = local_464._4_1_;
                    uVar26 = CONCAT26(uStack_456,CONCAT42(uStack_45a,local_45c));
LAB_10028f81e:
                    *(undefined8 *)((long)local_470 + 0xc9c) = uVar26;
                    uVar31 = 0;
                    goto LAB_10028f827;
                  }
                }
                if (local_450[0] != 0) {
                  piVar29 = (int *)(local_450[0] + 4);
                  *piVar29 = *piVar29 + -1;
                  if (*piVar29 == 0) {
                    FUN_1005d3cba();
                  }
                }
                uVar31 = 0xffffff80;
                if (uVar20 != 0xffffff80) {
                  uVar26 = FUN_1001cc310();
                  cVar18 = _os_log_type_enabled(uVar26,0x10);
                  if (cVar18 != '\0') {
                    local_58 = 0x8220202;
                    uStack_54 = 0x7a0a90;
                    uStack_50 = 1;
                    uStack_4c = 0x400;
                    uStack_4a = (undefined2)uVar20;
                    uStack_48 = (undefined2)(uVar20 >> 0x10);
                    __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                  uVar31 = (ulong)uVar20;
                }
              }
            }
            else if ((iVar22 == 0x48545450) || (iVar22 == 0x53485244)) {
              if ((iVar22 == 0x48545450) || (iVar22 == 0x53485244)) {
                local_480 = (int *)((long)local_470 + 0x5a54);
                _memcpy(local_480,(void *)(param_2[4] + 0x2c),0x408);
                uVar31 = 0xffffff80;
                if (*(int *)((long)plVar23 + 0x5a54) != 0) {
                  uStack_54 = 0;
                  uStack_50 = 0;
                  uStack_4c = 0;
                  uStack_4a = 0;
                  uStack_48 = 0;
                  uStack_46 = 0;
                  uStack_44 = 0;
                  lStack_40 = 0;
                  local_58 = 0x61727477;
                  if (((*(byte *)(param_2 + 5) & 100) == 0) &&
                     (uVar20 = FUN_1005d38c7(0,0,&lStack_40), uVar20 != 0)) {
                    uVar26 = FUN_1001cc310();
                    cVar18 = _os_log_type_enabled(uVar26,0x10);
                    if (cVar18 != '\0') {
                      local_468 = 0x8220202;
                      local_464 = "Assertion failure";
                      local_45c = 0x400;
                      uStack_45a = uVar20;
                      __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",
                                          &local_468,0x12);
                    }
                  }
                  FUN_10057db47(*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4),0x73627566
                                ,&local_474);
                  lVar24 = (long)local_470 + 0x474;
                  plVar23 = local_470 + 0x195;
                  plVar4 = local_470 + 0xbcc;
                  plVar1 = local_470 + 0x1b3;
                  plVar2 = local_470 + 0x47f;
                  lVar28 = (long)local_470 + 0xd2c;
                  local_488 = 10;
                  do {
                    uVar34 = (undefined4)((ulong)in_stack_fffffffffffffa30 >> 0x20);
                    FUN_1001c62d9(&local_468,0x408);
                    in_stack_fffffffffffffa30 = CONCAT44(uVar34,local_474);
                    in_stack_fffffffffffffa28 = in_stack_fffffffffffffa28 & 0xffffffff00000000;
                    uVar20 = FUN_100293fc2(local_470,param_2[6],lVar24,plVar23,local_470[0x19b],
                                           local_470[0x19b] + 0x10,local_480,plVar4,
                                           in_stack_fffffffffffffa28,in_stack_fffffffffffffa30,
                                           plVar1,plVar2,&local_58,lVar28,&local_468);
                    piVar29 = local_480;
                    if (((uVar20 == 0xffffff80) || (uVar20 == 0)) ||
                       (_memcpy(local_480,&local_468,0x408), *piVar29 == 0)) break;
                    if ((lStack_40 != 0) && (uStack_4c != 0)) {
                      uVar19 = 0;
                      do {
                        FUN_1005d3ecb(lStack_40,0);
                        uVar19 = uVar19 + 1;
                      } while (uVar19 < uStack_4c);
                    }
                    uStack_4c = 0;
                    uStack_48 = 0;
                    uStack_46 = 0;
                    uVar19 = (uint)local_488;
                    local_488 = (ulong)(uVar19 - 1);
                  } while (1 < uVar19);
                  if (uVar20 == 0) {
                    local_470[0x192] = lStack_40;
                    *(undefined1 *)(local_470 + 0x193) = (undefined1)uStack_50;
                    uVar26 = CONCAT26(uStack_46,CONCAT24(uStack_48,CONCAT22(uStack_4a,uStack_4c)));
                    goto LAB_10028f81e;
                  }
                  if (lStack_40 != 0) {
                    piVar29 = (int *)(lStack_40 + 4);
                    *piVar29 = *piVar29 + -1;
                    if (*piVar29 == 0) {
                      FUN_1005d3cba();
                    }
                  }
                  if (uVar20 != 0xffffff80) {
                    uVar26 = FUN_1001cc310();
                    cVar18 = _os_log_type_enabled(uVar26,0x10);
                    uVar31 = (ulong)uVar20;
                    if (cVar18 != '\0') {
                      local_468 = 0x8220202;
                      local_464 = "Assertion failure";
                      local_45c = 0x400;
                      uStack_45a = uVar20;
                      __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",
                                          &local_468,0x12);
                    }
                  }
                }
              }
              else {
                uVar26 = FUN_1001cc310();
                cVar18 = _os_log_type_enabled(uVar26,0x10);
                if (cVar18 != '\0') {
                  local_468 = 0x8220202;
                  local_464 = "Assertion failure";
                  local_45c = 0x822;
                  uStack_45a = 0x7b257b;
                  uStack_456 = 1;
                  uStack_454 = 0;
                  __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                uVar31 = 0xffffffce;
              }
            }
            else if (iVar22 == 0x4d46494c) goto LAB_10028eccb;
LAB_10028f827:
            if ((*(byte *)(param_2 + 0xd) & 1) == 0) {
              lVar24 = 0;
              local_470[0x1aa] = 0;
              *(undefined1 *)((long)local_470 + 0xd22) = 0;
              local_470[0x1b0] = 0;
              local_470[0x1b1] = 0;
              local_470[0x1b2] = 0;
            }
            else {
              uVar30 = (ulong)*(uint *)((long)param_2 + 0x6c);
              local_470[0x1b0] = uVar30;
              if (uVar30 == 0) {
                lVar24 = 0;
              }
              else {
                lVar24 = uVar30 + 0xf1;
                if (*(char *)(local_470[0x19b] + 0x12) == '\x02') {
                  lVar24 = uVar30 + 0x211;
                }
                local_470[0x1b0] = lVar24;
              }
              lVar28 = param_2[0xf];
              local_470[0x1b1] = lVar28;
              local_470[0x1b2] = (ulong)*(uint *)(param_2 + 0xe) + uVar30 + lVar28;
              *(undefined1 *)((long)local_470 + 0xd22) = 1;
              if (*(int *)((long)param_2 + 0x94) != 0) {
                *(int *)((long)local_470 + 0xd2c) = *(int *)((long)param_2 + 0x94);
              }
              if (param_2[0x10] == 0) {
                local_470[0x1aa] = 0;
              }
              else {
                local_470[0x1aa] = param_2[0x10] + local_470[0x1a9];
              }
            }
            local_470[0x1ae] = lVar24;
            if ((int)uVar31 == 0) {
              lVar24 = local_470[0x19b];
              *(undefined4 *)((long)local_470 + 0xd24) = *(undefined4 *)(lVar24 + 0x20);
              uVar20 = *(uint *)(lVar24 + 0x1c);
              *(uint *)(local_470 + 0x1a5) = uVar20;
              FUN_10015d841((float)uVar20,*(undefined1 *)(lVar24 + 0x15),1,param_2 + 0x17);
              lVar24 = local_470[0x19b];
              *(undefined4 *)((long)param_2 + 0xb4) = *(undefined4 *)(lVar24 + 0x30);
              *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(lVar24 + 0x20);
              *(undefined4 *)(param_2 + 0x14) = 0;
              param_2[0x15] = 0;
              iVar22 = (int)param_2[3];
              uVar34 = 0;
              if (iVar22 < 0x48545450) {
                if (iVar22 == 0x44574e4c) {
                  uVar34 = 0x13d;
                }
                else if (iVar22 == 0x46494c45) goto LAB_10028f9af;
              }
              else if ((iVar22 == 0x48545450) || (iVar22 == 0x53485244)) {
                uVar34 = 0x110c;
              }
              else if (iVar22 == 0x4d46494c) {
LAB_10028f9af:
                uVar34 = 0x113d;
              }
              *(undefined4 *)(param_2 + 0x12) = uVar34;
              if ((((*(byte *)(param_2 + 5) & 0x80) == 0) && (*(char *)(lVar24 + 0x18) == '\0')) ||
                 (local_470[0xb48] != 0)) {
LAB_10028f9e4:
                if (((iVar22 == 0x53485244) || (iVar22 == 0x48545450)) &&
                   (*(char *)((long)local_470 + 0x5a51) == '\0')) {
                  *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) & 0xf6;
                }
                lVar24 = local_470[0x19b];
                *(undefined4 *)(local_470 + 0x19c) =
                     *(undefined4 *)
                      (&DAT_10071c760 +
                      (ulong)*(byte *)(lVar24 + 6) * 4 + (ulong)*(byte *)(lVar24 + 0x11) * 0x10);
                uVar34 = *(undefined4 *)(lVar24 + 0x14);
                uVar35 = *(undefined4 *)(lVar24 + 0x18);
                uVar36 = *(undefined4 *)(lVar24 + 0x1c);
                uVar37 = *(undefined4 *)(lVar24 + 0x20);
                uVar38 = *(undefined4 *)(lVar24 + 0x24);
                uVar7 = *(undefined4 *)(lVar24 + 0x28);
                uVar8 = *(undefined4 *)(lVar24 + 0x2c);
                uVar9 = *(undefined4 *)(lVar24 + 0x30);
                uVar10 = *(undefined4 *)(lVar24 + 0x34);
                uVar11 = *(undefined4 *)(lVar24 + 0x38);
                uVar12 = *(undefined4 *)(lVar24 + 0x3c);
                uVar13 = *(undefined4 *)(lVar24 + 0x3c);
                uVar14 = *(undefined4 *)(lVar24 + 0x40);
                uVar15 = *(undefined4 *)(lVar24 + 0x44);
                uVar16 = *(undefined4 *)(lVar24 + 0x48);
                *(undefined4 *)((long)local_470 + 0xce4) = *(undefined4 *)(lVar24 + 0x10);
                *(undefined4 *)(local_470 + 0x19d) = uVar34;
                *(undefined4 *)((long)local_470 + 0xcec) = uVar35;
                *(undefined4 *)(local_470 + 0x19e) = uVar36;
                *(undefined4 *)((long)local_470 + 0xcf4) = uVar37;
                *(undefined4 *)(local_470 + 0x19f) = uVar38;
                *(undefined4 *)((long)local_470 + 0xcfc) = uVar7;
                *(undefined4 *)(local_470 + 0x1a0) = uVar8;
                *(undefined4 *)((long)local_470 + 0xd04) = uVar9;
                *(undefined4 *)(local_470 + 0x1a1) = uVar10;
                *(undefined4 *)((long)local_470 + 0xd0c) = uVar11;
                *(undefined4 *)(local_470 + 0x1a2) = uVar12;
                *(undefined4 *)(local_470 + 0x1a2) = uVar13;
                *(undefined4 *)((long)local_470 + 0xd14) = uVar14;
                *(undefined4 *)(local_470 + 0x1a3) = uVar15;
                *(undefined4 *)((long)local_470 + 0xd1c) = uVar16;
                *(undefined2 *)(local_470 + 0x1a4) = 0x101;
                if (*(uint *)((long)param_2 + 0x4c) == 0) {
                  uVar31 = 0x7fffffffffffffff;
                }
                else {
                  dVar6 = ((double)(int)local_470[0x1a5] / _DAT_100708b48) *
                          (double)*(uint *)((long)param_2 + 0x4c);
                  uVar31 = (ulong)dVar6;
                  uVar31 = (long)(dVar6 - DAT_10070e4c0) & (long)uVar31 >> 0x3f | uVar31;
                  *(undefined1 *)((long)local_470 + 0xd22) = 0;
                }
                puVar33 = (uint *)(param_2 + 0x14);
                pdVar3 = (double *)(param_2 + 0x15);
                local_470[0x1ad] = uVar31;
                uVar20 = *(uint *)(param_2 + 9);
                if (uVar20 == 0) {
                  *puVar33 = 0;
                  *pdVar3 = 0.0;
                  local_470[0x1ac] = 0;
                  lVar24 = local_470[0x1b0];
LAB_10028fc1f:
                  local_470[0x1ae] = lVar24;
                }
                else {
                  if (((uVar20 < 0x927c1) && (*(char *)((long)local_470 + 0x6064) == '\0')) &&
                     (((int)param_2[3] != 0x48545450 && ((int)param_2[3] != 0x53485244)))) {
                    *puVar33 = uVar20;
                    dVar6 = ((double)(int)local_470[0x1a5] / _DAT_100708b48) * (double)(int)uVar20;
                    *pdVar3 = dVar6;
                    lVar24 = ((long)(dVar6 - DAT_10070e4c0) & (long)dVar6 >> 0x3f | (long)dVar6) +
                             local_470[0x1ae];
                    goto LAB_10028fc1f;
                  }
                  iVar22 = FUN_10029558c((int)param_2[0xc],local_470,uVar20,puVar33,pdVar3,
                                         param_2[6]);
                  if (iVar22 == 0) {
                    uVar31 = (ulong)*pdVar3;
                    uVar31 = (long)(*pdVar3 - DAT_10070e4c0) & (long)uVar31 >> 0x3f | uVar31;
                  }
                  else {
                    uVar31 = 0;
                    local_470[0x1ac] = 0;
                    *puVar33 = 0;
                    *pdVar3 = 0.0;
                  }
                  local_470[0x1ae] = local_470[0x1ae] + uVar31;
                  lVar24 = local_470[0x1b0];
                }
                local_470[0x1af] = lVar24;
                *(undefined4 *)((long)param_2 + 0x94) = *(undefined4 *)((long)local_470 + 0xd2c);
                param_2[0x13] = local_470[0x1b1];
                uVar31 = 0;
                uVar20 = uStack_45a;
                if (*(char *)((long)local_470 + 0x6066) == '\0') {
                  FUN_1001c2470(param_3 + 6,local_470);
                  uVar20 = uStack_45a;
                }
              }
              else {
                lVar24 = FUN_1001c6429(0x44);
                local_470[0xb48] = lVar24;
                if (lVar24 == 0) {
                  uVar26 = FUN_1001cc310();
                  cVar18 = _os_log_type_enabled(uVar26,0x10);
                  if (cVar18 != '\0') {
                    local_468 = 0x8220202;
                    local_464 = "Assertion failure";
                    local_45c = 0x822;
                    uStack_45a = 0x7b7312;
                    uStack_456 = 1;
                    uStack_454 = 0;
                    __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",
                                        &local_468,0x16);
                  }
                  FUN_1001782e9(0,0);
                  FUN_100293805(local_470);
                }
                else {
                  lVar24 = FUN_1001c6429(0x2400);
                  local_470[0xb49] = lVar24;
                  if (lVar24 != 0) {
                    uVar20 = FUN_100285aa4((int)DAT_10073fd88,(int)DAT_10073fd90,(int)DAT_10073fd98,
                                           local_470[0xb48],0,1);
                    uVar31 = (ulong)uVar20;
                    if (uVar20 != 0xffffff80) {
                      if (uVar20 == 0) {
                        iVar22 = (int)param_2[3];
                        goto LAB_10028f9e4;
                      }
                      uVar26 = FUN_1001cc310();
                      cVar18 = _os_log_type_enabled(uVar26,0x10);
                      if (cVar18 != '\0') {
                        local_468 = 0x8220202;
                        local_464 = "Assertion failure";
                        local_45c = 0x400;
                        uStack_45a = uVar20;
                        __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",
                                            &local_468,0x12);
                      }
                    }
                    FUN_100293805(local_470);
                    uVar20 = uStack_45a;
                    goto LAB_10028dc42;
                  }
                  uVar26 = FUN_1001cc310();
                  cVar18 = _os_log_type_enabled(uVar26,0x10);
                  if (cVar18 != '\0') {
                    local_468 = 0x8220202;
                    local_464 = "Assertion failure";
                    local_45c = 0x822;
                    uStack_45a = 0x7b733e;
                    uStack_456 = 1;
                    uStack_454 = 0;
                    __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",
                                        &local_468,0x16);
                  }
                  FUN_1001782e9(0,0);
                  FUN_100293805(local_470);
                }
LAB_10028dd0d:
                uVar31 = 0xffffff94;
                uVar20 = uStack_45a;
              }
            }
            else {
              FUN_100293805();
              uVar20 = uStack_45a;
            }
          }
          else {
            uVar20 = (**(code **)(**(long **)(*(long *)(lVar24 + 0x10) + 0xca8) + 0x128))();
            uVar31 = (ulong)uVar20;
            if (uVar20 != 0xffffff80) {
              if (uVar20 == 0) {
                FUN_100270a1c(plVar23[0x19b]);
                lVar24 = plVar23[0x191];
                goto LAB_10028d320;
              }
              uVar26 = FUN_1001cc310();
              cVar18 = _os_log_type_enabled(uVar26,0x10);
              if (cVar18 != '\0') {
                local_468 = 0x8220202;
                local_464 = "Assertion failure";
                local_45c = 0x400;
                uStack_45a = uVar20;
                __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",&local_468,
                                    0x12);
              }
            }
            FUN_100293805(plVar23);
            uVar20 = uStack_45a;
          }
          goto LAB_10028dc42;
        }
        uVar26 = FUN_1001cc310();
        cVar18 = _os_log_type_enabled(uVar26,0x10);
        uVar31 = 0xffffff94;
        if (cVar18 != '\0') {
          pcVar27 = "connectionData != nullptr";
          goto LAB_10028e97f;
        }
      }
      FUN_1001782e9(0,0);
      uVar20 = uStack_45a;
    }
    else if (param_1 == 0x72636f6d) {
      if ((param_3 == (int *)0x0) || (*param_3 != 0x6d706567)) {
        uVar26 = FUN_1001cc310();
        cVar18 = _os_log_type_enabled(uVar26,0x10);
        if (cVar18 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x822;
          uStack_45a = 0x7b723a;
          uStack_456 = 1;
          uStack_454 = 0;
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_10028dc3d;
      }
      if ((int)param_2[3] == 0x46494c45) {
        local_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_4a = 0;
        uVar19 = FUN_100291dba(param_2[4]);
        uVar31 = (ulong)uVar19;
        uVar20 = uStack_45a;
        if (uVar19 != 0xffffff80) {
          if (uVar19 != 0) {
            uVar26 = FUN_1001cc310();
            cVar18 = _os_log_type_enabled(uVar26,0x10);
            uVar20 = uStack_45a;
            goto joined_r0x00010028e1ca;
          }
          if (CONCAT44(uStack_54,local_58) != 0) {
            uVar20 = *(uint *)(param_2 + 5);
            local_4b0 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
            if (local_4b0 != 0) {
              LOCK();
              *(long *)(local_4b0 + 8) = *(long *)(local_4b0 + 8) + 1;
              UNLOCK();
            }
            local_4b8 = CONCAT44(uStack_54,local_58);
            uVar20 = FUN_1003ad819(&local_4b8,0,0,0,0,0,CONCAT44(uVar34,1),
                                   in_stack_fffffffffffffa20 & 0xffffffff00000000,
                                   in_stack_fffffffffffffa28 & 0xffffffff00000000,
                                   CONCAT44(uVar36,(uVar20 & 4) * 8 + 4),0,FUN_1002a9075,param_2);
            uVar31 = (ulong)uVar20;
            FUN_10021e316(&local_4b8);
            if ((uVar20 != 0xffffff80) && (uVar20 != 0)) {
              uVar26 = FUN_1001cc310();
              cVar18 = _os_log_type_enabled(uVar26,0x10);
              if (cVar18 != '\0') {
                local_468 = 0x8220202;
                local_464 = "Assertion failure";
                local_45c = 0x400;
                uStack_45a = uVar20;
                __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",&local_468,
                                    0x12);
              }
            }
            lVar24 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
            uStack_51c = CONCAT22(uStack_4a,uStack_4c);
            local_528 = local_58;
            uStack_524 = uStack_54;
            uStack_520 = uStack_50;
            if (lVar24 != 0) {
              LOCK();
              plVar23 = (long *)(lVar24 + 8);
              *plVar23 = *plVar23 + 1;
              UNLOCK();
            }
            FUN_100291f0a(&local_528);
            puVar33 = &local_528;
            goto LAB_10028f562;
          }
          uVar26 = FUN_1001cc310();
          cVar18 = _os_log_type_enabled(uVar26,0x10);
          if (cVar18 != '\0') {
            local_468 = 0x8220202;
            local_464 = "Assertion failure";
            local_45c = 0x822;
            uStack_45a = 0x7b7290;
            uStack_456 = 1;
            uStack_454 = 0;
            __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
          }
          uVar31 = 0xffffffce;
          FUN_1001782e9(0,0);
          uVar20 = uStack_45a;
        }
        goto LAB_10028f567;
      }
    }
    else if (param_1 == 0x72656266) {
      if ((lVar24 == 0) || (**(int **)(lVar24 + 8) != 0x6d706567)) {
        uVar26 = FUN_1001cc310();
        cVar18 = _os_log_type_enabled(uVar26,0x10);
        if (cVar18 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x822;
          uStack_45a = 0x7b7370;
          uStack_456 = 1;
          uStack_454 = 0;
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_10028dc3d;
      }
      if (*(char *)(lVar24 + 0xd21) == '\0') {
        uVar26 = FUN_1001cc310();
        cVar18 = _os_log_type_enabled(uVar26,0x10);
        if (cVar18 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x822;
          uStack_45a = 0x7b73be;
          uStack_456 = 1;
          uStack_454 = 0;
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
        }
        FUN_1001782e9(0,0);
        uVar20 = uStack_45a;
      }
      else {
        lVar24 = (**(code **)(**(long **)(lVar24 + 0xca8) + 0x160))();
        if (lVar24 != 0) {
          if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
            uVar31 = FUN_100467173(lVar24,param_2[3]);
            return uVar31;
          }
          goto LAB_100290599;
        }
        uVar26 = FUN_1001cc310();
        cVar18 = _os_log_type_enabled(uVar26,0x10);
        if (cVar18 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x822;
          uStack_45a = 0x7b73d9;
          uStack_456 = 1;
          uStack_454 = 0;
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
        }
        FUN_1001782e9(0,0);
        uVar20 = uStack_45a;
      }
    }
  }
  else if (param_1 < 0x736c7972) {
    if (param_1 < 0x73636f6d) {
      if (param_1 == 0x72756669) {
        if ((param_3 == (int *)0x0) || (*param_3 != 0x6d706567)) {
          uVar26 = FUN_1001cc310();
          cVar18 = _os_log_type_enabled(uVar26,0x10);
          if (cVar18 != '\0') {
            local_468 = 0x8220202;
            local_464 = "Assertion failure";
            local_45c = 0x822;
            uStack_45a = 0x7b723a;
            uStack_456 = 1;
            uStack_454 = 0;
            __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_10028dc3d;
        }
        if ((int)param_2[3] == 0x46494c45) {
          local_58 = 0;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_4a = 0;
          uVar19 = FUN_100291dba(param_2[4]);
          uVar31 = (ulong)uVar19;
          uVar20 = uStack_45a;
          if (uVar19 != 0xffffff80) {
            if (uVar19 == 0) {
              if (CONCAT44(uStack_54,local_58) == 0) {
                uVar26 = FUN_1001cc310();
                cVar18 = _os_log_type_enabled(uVar26,0x10);
                if (cVar18 != '\0') {
                  local_468 = 0x8220202;
                  local_464 = "Assertion failure";
                  local_45c = 0x822;
                  uStack_45a = 0x7b7290;
                  uStack_456 = 1;
                  uStack_454 = 0;
                  __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,
                                      0x16);
                }
                uVar31 = 0xffffffce;
                FUN_1001782e9(0,0);
                uVar20 = uStack_45a;
              }
              else {
                uVar20 = *(uint *)(param_2 + 5);
                local_490 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
                if (local_490 != 0) {
                  LOCK();
                  *(long *)(local_490 + 8) = *(long *)(local_490 + 8) + 1;
                  UNLOCK();
                }
                local_498 = CONCAT44(uStack_54,local_58);
                uVar20 = FUN_1003ad819(&local_498,0,0,0,0,0,CONCAT44(uVar34,1),
                                       in_stack_fffffffffffffa20 & 0xffffffff00000000,
                                       in_stack_fffffffffffffa28 & 0xffffffff00000000,
                                       CONCAT44(uVar36,(uVar20 & 4) * 8 + 4),0,FUN_1002a927e,param_2
                                      );
                uVar31 = (ulong)uVar20;
                FUN_10021e316(&local_498);
                if ((uVar20 != 0xffffff80) && (uVar20 != 0)) {
                  uVar26 = FUN_1001cc310();
                  cVar18 = _os_log_type_enabled(uVar26,0x10);
                  if (cVar18 != '\0') {
                    local_468 = 0x8220202;
                    local_464 = "Assertion failure";
                    local_45c = 0x400;
                    uStack_45a = uVar20;
                    __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",&local_468
                                        ,0x12);
                  }
                }
                lVar24 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
                uStack_4fc = CONCAT22(uStack_4a,uStack_4c);
                local_508 = local_58;
                uStack_504 = uStack_54;
                uStack_500 = uStack_50;
                if (lVar24 != 0) {
                  LOCK();
                  plVar23 = (long *)(lVar24 + 8);
                  *plVar23 = *plVar23 + 1;
                  UNLOCK();
                }
                FUN_100291f0a(&local_508);
                puVar33 = &local_508;
LAB_10028f562:
                FUN_10021e316(puVar33);
                uVar20 = uStack_45a;
              }
            }
            else {
              uVar26 = FUN_1001cc310();
              cVar18 = _os_log_type_enabled(uVar26,0x10);
              uVar20 = uStack_45a;
joined_r0x00010028e1ca:
              uStack_45a = uVar19;
              if (cVar18 != '\0') {
                local_45c = 0x400;
                local_464 = "Assertion failure";
                local_468 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",&local_468,
                                    0x12);
                uVar20 = uStack_45a;
              }
            }
          }
LAB_10028f567:
          uStack_45a = uVar20;
          FUN_10021e316(&local_58);
          uVar20 = uStack_45a;
        }
      }
      else if (param_1 == 0x73617274) {
        if ((param_3 == (int *)0x0) || (*param_3 != 0x6d706567)) {
          uVar26 = FUN_1001cc310();
          cVar18 = _os_log_type_enabled(uVar26,0x10);
          if (cVar18 != '\0') {
            local_468 = 0x8220202;
            local_464 = "Assertion failure";
            local_45c = 0x822;
            uStack_45a = 0x7b723a;
            uStack_456 = 1;
            uStack_454 = 0;
            __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_10028dc3d;
        }
        lVar28 = param_2[3];
        lVar24 = param_2[4];
        param_3 = param_3 + 6;
        do {
          uVar34 = (undefined4)((ulong)in_stack_fffffffffffffa18 >> 0x20);
          uVar35 = (undefined4)(in_stack_fffffffffffffa28 >> 0x20);
          uVar36 = (undefined4)((ulong)in_stack_fffffffffffffa30 >> 0x20);
          param_3 = *(int **)param_3;
          if (param_3 == (int *)0x0) goto LAB_10028c937;
          cVar18 = FUN_1003b6f88(param_3[4],param_3 + 5,(int)lVar28,lVar24);
          uVar34 = (undefined4)((ulong)in_stack_fffffffffffffa18 >> 0x20);
          uVar35 = (undefined4)(in_stack_fffffffffffffa28 >> 0x20);
          uVar36 = (undefined4)((ulong)in_stack_fffffffffffffa30 >> 0x20);
        } while (cVar18 == '\0');
        if (*(long *)(param_3 + 0x324) != 0) {
          piVar29 = (int *)(*(long *)(param_3 + 0x324) + 4);
          *piVar29 = *piVar29 + -1;
          if (*piVar29 == 0) {
            FUN_1005d3cba();
          }
          lVar24 = param_2[7];
          if (lVar24 != 0) {
            *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 1;
          }
          *(long *)(param_3 + 0x324) = lVar24;
          *(undefined1 *)(param_3 + 0x326) = 0;
        }
LAB_10028c937:
        uVar20 = uStack_45a;
        if ((int)param_2[3] == 0x46494c45) {
          local_58 = 0;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_4a = 0;
          uVar19 = FUN_100291dba(param_2[4]);
          uVar31 = (ulong)uVar19;
          uVar20 = uStack_45a;
          if (uVar19 != 0xffffff80) {
            if (uVar19 != 0) {
              uVar26 = FUN_1001cc310();
              cVar18 = _os_log_type_enabled(uVar26,0x10);
              uVar20 = uStack_45a;
              goto joined_r0x00010028e1ca;
            }
            if (CONCAT44(uStack_54,local_58) != 0) {
              uVar20 = *(uint *)(param_2 + 5);
              local_4e0 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
              if (local_4e0 != 0) {
                LOCK();
                *(long *)(local_4e0 + 8) = *(long *)(local_4e0 + 8) + 1;
                UNLOCK();
              }
              local_4e8 = CONCAT44(uStack_54,local_58);
              uVar20 = FUN_1003ad819(&local_4e8,0,0,0,0,1,CONCAT44(uVar34,1),
                                     in_stack_fffffffffffffa20 & 0xffffffff00000000,
                                     CONCAT44(uVar35,3),CONCAT44(uVar36,(uVar20 & 4) * 8 + 0x14),0,
                                     FUN_1002a93f0,param_2);
              uVar31 = (ulong)uVar20;
              FUN_10021e316(&local_4e8);
              if ((uVar20 == 0xffffff80) || (uVar20 == 0)) {
                if ((param_3 != (int *)0x0) &&
                   (((uVar20 == 0 && (*(long *)(param_3 + 0x324) != 0)) &&
                    (lVar24 = param_2[8], *(char *)(param_3 + 0x326) = (char)lVar24,
                    (char)lVar24 != '\0')))) {
                  *(undefined8 *)(param_3 + 0x327) = *(undefined8 *)((long)param_2 + 0x44);
                }
              }
              else {
                uVar26 = FUN_1001cc310();
                cVar18 = _os_log_type_enabled(uVar26,0x10);
                if (cVar18 != '\0') {
                  local_468 = 0x8220202;
                  local_464 = "Assertion failure";
                  local_45c = 0x400;
                  uStack_45a = uVar20;
                  __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",&local_468,
                                      0x12);
                }
              }
              lVar24 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
              uStack_54c = CONCAT22(uStack_4a,uStack_4c);
              local_558 = local_58;
              uStack_554 = uStack_54;
              uStack_550 = uStack_50;
              if (lVar24 != 0) {
                LOCK();
                plVar23 = (long *)(lVar24 + 8);
                *plVar23 = *plVar23 + 1;
                UNLOCK();
              }
              FUN_100291f0a(&local_558);
              puVar33 = &local_558;
              goto LAB_10028f562;
            }
            uVar26 = FUN_1001cc310();
            cVar18 = _os_log_type_enabled(uVar26,0x10);
            if (cVar18 != '\0') {
              local_468 = 0x8220202;
              local_464 = "Assertion failure";
              local_45c = 0x822;
              uStack_45a = 0x7b7290;
              uStack_456 = 1;
              uStack_454 = 0;
              __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16
                                 );
            }
            uVar31 = 0xffffffce;
            FUN_1001782e9(0,0);
            uVar20 = uStack_45a;
          }
          goto LAB_10028f567;
        }
      }
    }
    else if (param_1 == 0x73636f6d) {
      if ((param_3 == (int *)0x0) || (*param_3 != 0x6d706567)) {
        uVar26 = FUN_1001cc310();
        cVar18 = _os_log_type_enabled(uVar26,0x10);
        if (cVar18 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x822;
          uStack_45a = 0x7b723a;
          uStack_456 = 1;
          uStack_454 = 0;
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_10028dc3d;
      }
      if ((int)param_2[3] == 0x46494c45) {
        local_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_4a = 0;
        uVar19 = FUN_100291dba(param_2[4]);
        uVar31 = (ulong)uVar19;
        uVar20 = uStack_45a;
        if (uVar19 != 0xffffff80) {
          if (uVar19 != 0) {
            uVar26 = FUN_1001cc310();
            cVar18 = _os_log_type_enabled(uVar26,0x10);
            uVar20 = uStack_45a;
            goto joined_r0x00010028e1ca;
          }
          if (CONCAT44(uStack_54,local_58) != 0) {
            uVar20 = *(uint *)(param_2 + 5);
            uVar19 = uVar20 & 4;
            local_4c0 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
            if (local_4c0 != 0) {
              LOCK();
              *(long *)(local_4c0 + 8) = *(long *)(local_4c0 + 8) + 1;
              UNLOCK();
              uVar20 = *(uint *)(param_2 + 5);
            }
            local_4c8 = CONCAT44(uStack_54,local_58);
            uVar20 = FUN_1003ad819(&local_4c8,0,0,0,0,uVar20 & 1,CONCAT44(uVar34,1),
                                   in_stack_fffffffffffffa20 & 0xffffffff00000000,CONCAT44(uVar35,3)
                                   ,CONCAT44(uVar36,uVar19 * 8 + 4),0,FUN_1002a8ff1,param_2);
            uVar31 = (ulong)uVar20;
            FUN_10021e316(&local_4c8);
            if ((uVar20 != 0xffffff80) && (uVar20 != 0)) {
              uVar26 = FUN_1001cc310();
              cVar18 = _os_log_type_enabled(uVar26,0x10);
              if (cVar18 != '\0') {
                local_468 = 0x8220202;
                local_464 = "Assertion failure";
                local_45c = 0x400;
                uStack_45a = uVar20;
                __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",&local_468,
                                    0x12);
              }
            }
            lVar24 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
            uStack_52c = CONCAT22(uStack_4a,uStack_4c);
            local_538 = local_58;
            uStack_534 = uStack_54;
            uStack_530 = uStack_50;
            if (lVar24 != 0) {
              LOCK();
              plVar23 = (long *)(lVar24 + 8);
              *plVar23 = *plVar23 + 1;
              UNLOCK();
            }
            FUN_100291f0a(&local_538);
            puVar33 = &local_538;
            goto LAB_10028f562;
          }
          uVar26 = FUN_1001cc310();
          cVar18 = _os_log_type_enabled(uVar26,0x10);
          if (cVar18 != '\0') {
            local_468 = 0x8220202;
            local_464 = "Assertion failure";
            local_45c = 0x822;
            uStack_45a = 0x7b7290;
            uStack_456 = 1;
            uStack_454 = 0;
            __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
          }
          uVar31 = 0xffffffce;
          FUN_1001782e9(0,0);
          uVar20 = uStack_45a;
        }
        goto LAB_10028f567;
      }
    }
    else {
      if (param_1 == 0x73657874) {
        uVar31 = FUN_100466d97(" 2PM2GPM2GPM 3PM3GPM3GPM 3PMGEPM3GPMAGPMGEPMGEPM 3PM!3PM3GPM 3PM!3pm3GPM 3PM 3PM3GPM 3PM 3pM3GPM 3PM3gpm3GPM 3PMYALP3GPM"
                               ,param_2[3],param_2[4]);
        return uVar31;
      }
      if (param_1 == 0x73676374) {
        if (lVar24 != 0) {
          uVar31 = FUN_10029123f(lVar24,param_2 + 3);
          return uVar31;
        }
        uVar26 = FUN_1001cc310();
        cVar18 = _os_log_type_enabled(uVar26,0x10);
        if (cVar18 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x822;
          uStack_45a = 0x7b7275;
          uStack_456 = 1;
          uStack_454 = 0;
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_10028dc3d;
      }
    }
  }
  else if (param_1 < 0x7374696e) {
    if (param_1 == 0x736c7972) {
      if ((param_3 == (int *)0x0) || (*param_3 != 0x6d706567)) {
        uVar26 = FUN_1001cc310();
        cVar18 = _os_log_type_enabled(uVar26,0x10);
        if (cVar18 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x822;
          uStack_45a = 0x7b723a;
          uStack_456 = 1;
          uStack_454 = 0;
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_10028dc3d;
      }
      if ((int)param_2[3] == 0x46494c45) {
        local_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_4a = 0;
        uVar19 = FUN_100291dba(param_2[4]);
        uVar31 = (ulong)uVar19;
        uVar20 = uStack_45a;
        if (uVar19 != 0xffffff80) {
          if (uVar19 != 0) {
            uVar26 = FUN_1001cc310();
            cVar18 = _os_log_type_enabled(uVar26,0x10);
            uVar20 = uStack_45a;
            goto joined_r0x00010028e1ca;
          }
          if (CONCAT44(uStack_54,local_58) != 0) {
            uVar20 = *(uint *)(param_2 + 5);
            local_4d0 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
            if (local_4d0 != 0) {
              LOCK();
              *(long *)(local_4d0 + 8) = *(long *)(local_4d0 + 8) + 1;
              UNLOCK();
            }
            local_4d8 = CONCAT44(uStack_54,local_58);
            uVar20 = FUN_1003ad819(&local_4d8,0,0,0,0,1,CONCAT44(uVar34,1),
                                   in_stack_fffffffffffffa20 & 0xffffffff00000000,CONCAT44(uVar35,3)
                                   ,CONCAT44(uVar36,(uVar20 & 4) * 8 + 0x14),0,FUN_1002a9409,param_2
                                  );
            uVar31 = (ulong)uVar20;
            FUN_10021e316(&local_4d8);
            if ((uVar20 != 0xffffff80) && (uVar20 != 0)) {
              uVar26 = FUN_1001cc310();
              cVar18 = _os_log_type_enabled(uVar26,0x10);
              if (cVar18 != '\0') {
                local_468 = 0x8220202;
                local_464 = "Assertion failure";
                local_45c = 0x400;
                uStack_45a = uVar20;
                __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",&local_468,
                                    0x12);
              }
            }
            lVar24 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
            uStack_53c = CONCAT22(uStack_4a,uStack_4c);
            local_548 = local_58;
            uStack_544 = uStack_54;
            uStack_540 = uStack_50;
            if (lVar24 != 0) {
              LOCK();
              plVar23 = (long *)(lVar24 + 8);
              *plVar23 = *plVar23 + 1;
              UNLOCK();
            }
            FUN_100291f0a(&local_548);
            puVar33 = &local_548;
            goto LAB_10028f562;
          }
          uVar26 = FUN_1001cc310();
          cVar18 = _os_log_type_enabled(uVar26,0x10);
          if (cVar18 != '\0') {
            local_468 = 0x8220202;
            local_464 = "Assertion failure";
            local_45c = 0x822;
            uStack_45a = 0x7b7290;
            uStack_456 = 1;
            uStack_454 = 0;
            __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
          }
          uVar31 = 0xffffffce;
          FUN_1001782e9(0,0);
          uVar20 = uStack_45a;
        }
        goto LAB_10028f567;
      }
    }
    else if (param_1 == 0x73706f73) {
      if ((lVar24 != 0) && (**(int **)(lVar24 + 8) == 0x6d706567)) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
          uVar31 = FUN_10029558c((int)param_2[5],lVar24,(int)param_2[4],param_2 + 6,param_2 + 7,
                                 param_2[3]);
          return uVar31;
        }
        goto LAB_100290599;
      }
      uVar26 = FUN_1001cc310();
      cVar18 = _os_log_type_enabled(uVar26,0x10);
      if (cVar18 != '\0') {
        local_468 = 0x8220202;
        local_464 = "Assertion failure";
        local_45c = 0x822;
        uStack_45a = 0x7b7370;
        uStack_456 = 1;
        uStack_454 = 0;
        __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_10028dc3d;
    }
  }
  else if (param_1 == 0x7374696e) {
    if ((param_3 == (int *)0x0) || (*param_3 != 0x6d706567)) {
      uVar26 = FUN_1001cc310();
      cVar18 = _os_log_type_enabled(uVar26,0x10);
      if (cVar18 != '\0') {
        local_468 = 0x8220202;
        local_464 = "Assertion failure";
        local_45c = 0x822;
        uStack_45a = 0x7b723a;
        uStack_456 = 1;
        uStack_454 = 0;
        __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_10028dc3d;
    }
    if ((int)param_2[3] == 0x46494c45) {
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_4a = 0;
      lVar24 = param_2[7];
      uVar19 = FUN_100291dba(param_2[4]);
      uVar31 = (ulong)uVar19;
      uVar20 = uStack_45a;
      if (uVar19 != 0xffffff80) {
        if (uVar19 != 0) {
          uVar26 = FUN_1001cc310();
          cVar18 = _os_log_type_enabled(uVar26,0x10);
          uVar20 = uStack_45a;
          goto joined_r0x00010028e1ca;
        }
        if (CONCAT44(uStack_54,local_58) != 0) {
          uVar19 = *(uint *)(param_2 + 5);
          uVar21 = uVar19 & 2;
          uVar20 = uVar19 * 8;
          local_4f0 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
          if (local_4f0 != 0) {
            LOCK();
            *(long *)(local_4f0 + 8) = *(long *)(local_4f0 + 8) + 1;
            UNLOCK();
            uVar19 = *(uint *)(param_2 + 5);
          }
          local_4f8 = CONCAT44(uStack_54,local_58);
          uVar20 = FUN_1003ad819(&local_4f8,0,lVar24,param_2[8],param_2[9],uVar19 & 1,
                                 CONCAT44(uVar34,1),in_stack_fffffffffffffa20 & 0xffffffff00000000,
                                 CONCAT44(uVar35,3),CONCAT44(uVar36,(uVar20 & 0x20) + uVar21 * 2),0,
                                 0,0);
          uVar31 = (ulong)uVar20;
          FUN_10021e316(&local_4f8);
          if ((uVar20 != 0xffffff80) && (uVar20 != 0)) {
            uVar26 = FUN_1001cc310();
            cVar18 = _os_log_type_enabled(uVar26,0x10);
            if (cVar18 != '\0') {
              local_468 = 0x8220202;
              local_464 = "Assertion failure";
              local_45c = 0x400;
              uStack_45a = uVar20;
              __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",&local_468,0x12)
              ;
            }
          }
          lVar24 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
          uStack_55c = CONCAT22(uStack_4a,uStack_4c);
          local_568 = local_58;
          uStack_564 = uStack_54;
          uStack_560 = uStack_50;
          if (lVar24 != 0) {
            LOCK();
            plVar23 = (long *)(lVar24 + 8);
            *plVar23 = *plVar23 + 1;
            UNLOCK();
          }
          FUN_100291f0a(&local_568);
          puVar33 = &local_568;
          goto LAB_10028f562;
        }
        uVar26 = FUN_1001cc310();
        cVar18 = _os_log_type_enabled(uVar26,0x10);
        if (cVar18 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x822;
          uStack_45a = 0x7b7290;
          uStack_456 = 1;
          uStack_454 = 0;
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
        }
        uVar31 = 0xffffffce;
        FUN_1001782e9(0,0);
        uVar20 = uStack_45a;
      }
      goto LAB_10028f567;
    }
  }
  else if (param_1 == 0x73746f70) {
    if ((lVar24 == 0) || (**(int **)(lVar24 + 8) != 0x6d706567)) {
      uVar26 = FUN_1001cc310();
      cVar18 = _os_log_type_enabled(uVar26,0x10);
      if (cVar18 != '\0') {
        local_468 = 0x8220202;
        local_464 = "Assertion failure";
        local_45c = 0x822;
        uStack_45a = 0x7b7370;
        uStack_456 = 1;
        uStack_454 = 0;
        __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_10028dc3d;
    }
    if (*(char *)(lVar24 + 0xd21) == '\0') {
      uVar26 = FUN_1001cc310();
      cVar18 = _os_log_type_enabled(uVar26,0x10);
      if (cVar18 != '\0') {
        local_468 = 0x8220202;
        local_464 = "Assertion failure";
        local_45c = 0x822;
        uStack_45a = 0x7b73be;
        uStack_456 = 1;
        uStack_454 = 0;
        __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
      }
      FUN_1001782e9(0,0);
      uVar20 = uStack_45a;
      goto LAB_10028dc42;
    }
    plVar23 = param_2 + 3;
    FUN_1001c62d9(plVar23,0xa8);
    *(undefined1 *)(lVar24 + 0xd21) = 0;
    *(undefined1 *)(lVar24 + 0x606b) = 1;
    if (*(long **)(lVar24 + 0xca8) == (long *)0x0) {
      uVar34 = 0;
      uVar31 = 0;
LAB_10028e416:
      if (*(long *)(lVar24 + 0xcd0) != 0) {
        FUN_1001ed4ad(*(long *)(lVar24 + 0xcd0),0x7fffffffffffffff);
      }
    }
    else {
      plVar4 = (long *)(lVar24 + 0xca8);
      local_470 = plVar23;
      cVar18 = (**(code **)(**(long **)(lVar24 + 0xca8) + 0x140))();
      if (cVar18 == '\0') {
        uVar31 = 0;
LAB_10028e03a:
        uVar34 = 0;
      }
      else {
        uVar20 = (**(code **)(*(long *)*plVar4 + 0x150))();
        if (uVar20 != 0) {
          uVar31 = (ulong)uVar20;
          goto LAB_10028e03a;
        }
        *(undefined4 *)(param_2 + 4) = 1;
        lVar28 = (**(code **)(*(long *)*plVar4 + 0x158))();
        param_2[5] = lVar28;
        uVar34 = 1;
        uVar31 = 0;
      }
      plVar23 = local_470;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10028e416;
      (**(code **)(*(long *)*plVar4 + 0x1d0))();
      if (*(long *)(lVar24 + 0xcd0) != 0) {
        FUN_1001ed4ad(*(long *)(lVar24 + 0xcd0),0x7fffffffffffffff);
      }
      FUN_100295c56(plVar4);
      plVar23 = local_470;
    }
    if (*(char *)(lVar24 + 0x6066) == '\0') {
      FUN_1001c2502(param_3 + 6,lVar24);
    }
    *(undefined4 *)plVar23 = uVar34;
    FUN_100293805(lVar24);
    uVar20 = uStack_45a;
  }
  else if (param_1 == 0x73756669) {
    if ((param_3 == (int *)0x0) || (*param_3 != 0x6d706567)) {
      uVar26 = FUN_1001cc310();
      cVar18 = _os_log_type_enabled(uVar26,0x10);
      if (cVar18 != '\0') {
        local_468 = 0x8220202;
        local_464 = "Assertion failure";
        local_45c = 0x822;
        uStack_45a = 0x7b723a;
        uStack_456 = 1;
        uStack_454 = 0;
        __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_10028dc3d;
    }
    if ((int)param_2[3] == 0x46494c45) {
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_4a = 0;
      uVar19 = FUN_100291dba(param_2[4]);
      uVar31 = (ulong)uVar19;
      uVar20 = uStack_45a;
      if (uVar19 != 0xffffff80) {
        if (uVar19 != 0) {
          uVar26 = FUN_1001cc310();
          cVar18 = _os_log_type_enabled(uVar26,0x10);
          uVar20 = uStack_45a;
          goto joined_r0x00010028e1ca;
        }
        if (CONCAT44(uStack_54,local_58) != 0) {
          uVar20 = *(uint *)(param_2 + 5);
          uVar19 = uVar20 & 4;
          local_4a0 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
          if (local_4a0 != 0) {
            LOCK();
            *(long *)(local_4a0 + 8) = *(long *)(local_4a0 + 8) + 1;
            UNLOCK();
            uVar20 = *(uint *)(param_2 + 5);
          }
          local_4a8 = CONCAT44(uStack_54,local_58);
          uVar20 = FUN_1003ad819(&local_4a8,0,0,0,0,uVar20 & 1,CONCAT44(uVar34,1),
                                 in_stack_fffffffffffffa20 & 0xffffffff00000000,CONCAT44(uVar35,3),
                                 CONCAT44(uVar36,uVar19 * 8 + 4),0,FUN_1002a91fa,param_2);
          uVar31 = (ulong)uVar20;
          FUN_10021e316(&local_4a8);
          if ((uVar20 != 0xffffff80) && (uVar20 != 0)) {
            uVar26 = FUN_1001cc310();
            cVar18 = _os_log_type_enabled(uVar26,0x10);
            if (cVar18 != '\0') {
              local_468 = 0x8220202;
              local_464 = "Assertion failure";
              local_45c = 0x400;
              uStack_45a = uVar20;
              __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",&local_468,0x12)
              ;
            }
          }
          lVar24 = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
          uStack_50c = CONCAT22(uStack_4a,uStack_4c);
          local_518 = local_58;
          uStack_514 = uStack_54;
          uStack_510 = uStack_50;
          if (lVar24 != 0) {
            LOCK();
            plVar23 = (long *)(lVar24 + 8);
            *plVar23 = *plVar23 + 1;
            UNLOCK();
          }
          FUN_100291f0a(&local_518);
          puVar33 = &local_518;
          goto LAB_10028f562;
        }
        uVar26 = FUN_1001cc310();
        cVar18 = _os_log_type_enabled(uVar26,0x10);
        if (cVar18 != '\0') {
          local_468 = 0x8220202;
          local_464 = "Assertion failure";
          local_45c = 0x822;
          uStack_45a = 0x7b7290;
          uStack_456 = 1;
          uStack_454 = 0;
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
        }
        uVar31 = 0xffffffce;
        FUN_1001782e9(0,0);
        uVar20 = uStack_45a;
      }
      goto LAB_10028f567;
    }
  }
LAB_10028dc42:
  uStack_45a = uVar20;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar31;
  }
LAB_100290599:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

