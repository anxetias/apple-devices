// name: FUN_1003f0592
// address: 1003f0592

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1003f0592(long param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  int *piVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 auVar13 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  ulong local_c8;
  undefined4 local_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined2 uStack_a8;
  undefined4 uStack_a6;
  int local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_e8 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_d8 = 0;
  if (param_1 == 0) {
    uVar9 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar9,0x10);
    if (cVar3 != '\0') {
      pcVar8 = "buffer != nullptr";
LAB_1003f0857:
      uStack_ac = 0x822;
      iStack_b0 = 1;
      iStack_b4 = 0x7a0a90;
      local_b8 = 0x8220202;
      uStack_aa = SUB82(pcVar8,0);
      uStack_a8 = (undefined2)((ulong)pcVar8 >> 0x10);
      uStack_a6 = (undefined4)((ulong)pcVar8 >> 0x20);
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_b8,0x16);
    }
  }
  else {
    if (param_2 != (long *)0x0) {
      lVar6 = FUN_1001c6429(0x100170);
      if (lVar6 == 0) {
        uVar9 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar9,0x10);
        if (cVar3 != '\0') {
          local_b8 = 0x8220202;
          iStack_b4 = 0x7a0a90;
          iStack_b0 = 1;
          uStack_ac = 0x822;
          uStack_aa = 0x1d5e;
          uStack_a8 = 0x7a;
          uStack_a6 = 1;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_b8,0x16);
        }
        FUN_1001782e9(0,0);
        puVar12 = (undefined1 *)0xffffff94;
        goto LAB_1003f0d92;
      }
      *(long *)(lVar6 + 0x100000) = param_1;
      *(undefined8 *)(lVar6 + 0x100168) = param_3;
      *(undefined4 *)(lVar6 + 0x100018) = param_4;
      uVar4 = FUN_100160c3f(param_1,&local_c8);
      puVar12 = (undefined1 *)(ulong)uVar4;
      if (uVar4 != 0xffffff80) {
        if (uVar4 == 0) {
          lVar1 = lVar6 + 0x100030;
          local_b8 = 0xf4;
          iStack_b4 = 0;
          uVar4 = FUN_100160380(*(undefined8 *)(lVar6 + 0x100000),&local_b8,lVar1);
          puVar12 = (undefined1 *)(ulong)uVar4;
          if (uVar4 != 0xffffff80) {
            if (uVar4 == 0) {
              uVar2 = FUN_1003f0431(lVar1);
              *(undefined1 *)(lVar6 + 0x100126) = uVar2;
              puVar12 = &DAT_ffffff30;
              if (*(int *)(lVar6 + 0x100030) == 0x6d686264) {
                *(undefined1 *)(lVar6 + 0x100127) = 1;
                FUN_1003e9ee7(lVar1);
                cVar3 = *(char *)(lVar6 + 0x100127);
              }
              else {
                if (*(int *)(lVar6 + 0x100030) != 0x6462686d) goto LAB_1003f0d3c;
                *(undefined1 *)(lVar6 + 0x100127) = 0;
                cVar3 = '\0';
              }
              (**(code **)(*param_2 + 0x10))(param_2,cVar3 != '\0');
              if (local_c8 == *(uint *)(lVar6 + 0x100038)) {
                if (*(int *)(lVar6 + 0x100044) == 0) {
                  uVar9 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar3 != '\0') {
                    pcVar8 = "context->fileHeader.numSections != 0";
LAB_1003f0d0e:
                    uStack_ac = 0x822;
                    iStack_b0 = 1;
                    iStack_b4 = 0x7a0a90;
                    local_b8 = 0x8220202;
                    uStack_aa = SUB82(pcVar8,0);
                    uStack_a8 = (undefined2)((ulong)pcVar8 >> 0x10);
                    uStack_a6 = (undefined4)((ulong)pcVar8 >> 0x20);
                    __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_b8,
                                        0x16);
                  }
LAB_1003f0d33:
                  FUN_1001782e9(0,0);
                }
                else {
                  uVar4 = *(uint *)(lVar6 + 0x10003c);
                  if (*(char *)(lVar6 + 0x1000d8) == '\0') {
                    if (1 < uVar4) {
                      uVar9 = FUN_1001cc310();
                      cVar3 = _os_log_type_enabled(uVar9,0x10);
                      if (cVar3 != '\0') {
                        pcVar8 = "context->fileHeader.majorVersion <= kCurrentDDBMajorVersion";
                        goto LAB_1003f0d0e;
                      }
                      goto LAB_1003f0d33;
                    }
                  }
                  else {
                    if (2 < uVar4) {
                      uVar9 = FUN_1001cc310();
                      cVar3 = _os_log_type_enabled(uVar9,0x10);
                      if (cVar3 != '\0') {
                        pcVar8 = 
                        "context->fileHeader.majorVersion <= kCurrentCompressedDDBMajorVersion";
                        goto LAB_1003f0d0e;
                      }
                      goto LAB_1003f0d33;
                    }
                    if (uVar4 == 2) {
                      *(undefined4 *)(lVar6 + 0x10003c) = 1;
                      uVar4 = 1;
                    }
                  }
                  *(ushort *)(lVar6 + 0x100124) =
                       (ushort)*(byte *)(lVar6 + 0x100040) | (ushort)(uVar4 << 8);
                  uVar4 = (**(code **)(*param_2 + 0x18))
                                    (param_2,*(undefined4 *)(lVar6 + 0x100030),lVar1,0xf4,0);
                  puVar12 = (undefined1 *)(ulong)uVar4;
                  if (uVar4 != 0xffffff80) {
                    if (uVar4 == 0) {
                      FUN_1001ceb24(*(undefined8 *)(lVar6 + 0x100168),0x6370726d,0,
                                    0xffffffffffffffff,0);
                      uVar4 = *(uint *)(lVar6 + 0x100034);
                      uVar7 = (ulong)uVar4;
                      if (uVar7 < 0xf4) {
                        FUN_1001c62d9(lVar1 + uVar7,0xf4 - uVar7);
                        uVar4 = *(uint *)(lVar6 + 0x100034);
                      }
                      uVar4 = FUN_100160dce(*(undefined8 *)(lVar6 + 0x100000),uVar4 - 0xf4);
                      puVar12 = (undefined1 *)(ulong)uVar4;
                      if (uVar4 != 0xffffff80) {
                        if (uVar4 == 0) {
                          if (*(char *)(lVar6 + 0x1000d8) == '\0') {
LAB_1003f0af2:
                            if (*(int *)(lVar6 + 0x100044) == 0) {
                              puVar12 = (undefined1 *)0x0;
                            }
                            else {
                              uVar4 = 0;
                              local_bc = 0;
                              while( true ) {
                                uVar5 = FUN_1003f16c4(lVar6,&local_b8,0x60);
                                if (uVar5 != 0) {
                                  puVar12 = (undefined1 *)(ulong)uVar5;
                                  if (uVar5 != 0xffffff80) {
                                    uVar9 = FUN_1001cc310();
                                    cVar3 = _os_log_type_enabled(uVar9,0x10);
                                    if (cVar3 != '\0') {
                                      piVar10 = &local_58;
                                      local_58 = 0x8220202;
                                      local_54 = "Assertion failure";
                                      local_4c = 0x400;
                                      local_4a = (char *)CONCAT44(local_4a._4_4_,uVar5);
                                      goto LAB_1003f0818;
                                    }
                                  }
                                  goto LAB_1003f0d3c;
                                }
                                if (*(char *)(lVar6 + 0x100127) != '\0') {
                                  auVar13._12_2_ = uStack_ac;
                                  auVar13._8_4_ = iStack_b0;
                                  auVar13._14_2_ = uStack_aa;
                                  auVar13._4_4_ = iStack_b4;
                                  auVar13._0_4_ = local_b8;
                                  auVar13 = pshufb(auVar13,_DAT_100718a70);
                                  local_b8 = auVar13._0_4_;
                                  iStack_b4 = auVar13._4_4_;
                                  iStack_b0 = auVar13._8_4_;
                                  uStack_ac = auVar13._12_2_;
                                  uStack_aa = auVar13._14_2_;
                                }
                                if (local_b8 != 0x6473686d) break;
                                switch(CONCAT22(uStack_aa,uStack_ac)) {
                                case 1:
                                  uVar9 = 1;
                                  goto LAB_1003f0c2d;
                                case 2:
                                case 3:
                                  if ((char)local_bc == '\0') {
                                    uVar7 = FUN_1003f2851(lVar6,param_2);
                                  }
                                  else {
                                    uVar7 = FUN_100160dce(*(undefined8 *)(lVar6 + 0x100000),
                                                          iStack_b0 - iStack_b4);
                                  }
                                  puVar12 = (undefined1 *)(uVar7 & 0xffffffff);
                                  local_bc = (undefined4)CONCAT71((int7)(uVar7 >> 8),1);
                                  goto LAB_1003f0c4f;
                                case 4:
                                  uVar5 = FUN_1003f18d1(lVar6,param_2);
                                  break;
                                case 5:
                                  if ((*(byte *)(lVar6 + 0x100018) & 1) != 0)
                                  goto switchD_1003f0b8b_caseD_7;
                                  uVar5 = FUN_1003f2851(lVar6,param_2,5);
                                  break;
                                case 6:
                                  if ((*(byte *)(lVar6 + 0x100018) & 2) != 0)
                                  goto switchD_1003f0b8b_caseD_7;
                                  uVar9 = 6;
LAB_1003f0c2d:
                                  uVar5 = FUN_1003f2244(lVar6,param_2,uVar9);
                                  break;
                                default:
switchD_1003f0b8b_caseD_7:
                                  uVar5 = FUN_100160dce(*(undefined8 *)(lVar6 + 0x100000),
                                                        iStack_b0 - iStack_b4);
                                  break;
                                case 8:
                                  uVar5 = FUN_1003f1d9f(lVar6,param_2);
                                  break;
                                case 9:
                                  uVar5 = FUN_1003f3006(lVar6,param_2,iStack_b0 - iStack_b4);
                                }
                                puVar12 = (undefined1 *)(ulong)uVar5;
LAB_1003f0c4f:
                                iVar11 = (int)puVar12;
                                if (iVar11 != 0) {
                                  if (iVar11 != -0x80) {
                                    uVar9 = FUN_1001cc310();
                                    cVar3 = _os_log_type_enabled(uVar9,0x10);
                                    if (cVar3 != '\0') {
                                      piVar10 = &local_58;
                                      local_58 = 0x8220202;
                                      local_54 = "Assertion failure";
                                      local_4c = 0x400;
                                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar11);
                                      goto LAB_1003f0818;
                                    }
                                  }
                                  goto LAB_1003f0d3c;
                                }
                                uVar4 = uVar4 + 1;
                                puVar12 = (undefined1 *)0x0;
                                if (*(uint *)(lVar6 + 0x100044) <= uVar4) goto LAB_1003f0d3c;
                              }
                              uVar9 = FUN_1001cc310();
                              cVar3 = _os_log_type_enabled(uVar9,0x10);
                              if (cVar3 != '\0') {
                                local_58 = 0x8220202;
                                local_54 = "Assertion failure";
                                local_4c = 0x822;
                                local_4a = "sectionHeader.magic == kDDBSectionHeaderMagic";
                                __os_log_error_impl(0x100000000,uVar9,0x10,
                                                    "%{public}s: (%{public}s)",&local_58,0x16);
                              }
                              FUN_1001782e9(0,0);
                              puVar12 = &DAT_ffffff30;
                            }
                          }
                          else {
                            uVar4 = FUN_1001601fd(local_118,10000000);
                            puVar12 = (undefined1 *)(ulong)uVar4;
                            if (uVar4 == 0xffffff80) goto LAB_1003f0d92;
                            if (uVar4 != 0) {
                              uVar9 = FUN_1001cc310();
                              cVar3 = _os_log_type_enabled(uVar9,0x10);
                              if (cVar3 != '\0') {
                                local_b8 = 0x8220202;
                                iStack_b4 = 0x7a0a90;
                                iStack_b0 = 1;
                                uStack_ac = 0x400;
                                uStack_aa = (undefined2)uVar4;
                                uStack_a8 = (undefined2)(uVar4 >> 0x10);
                                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)"
                                                    ,&local_b8,0x12);
                              }
                              goto LAB_1003f0d92;
                            }
                            uVar4 = FUN_1003f10dc(lVar6,local_118);
                            puVar12 = (undefined1 *)(ulong)uVar4;
                            if (uVar4 != 0xffffff80) {
                              if (uVar4 == 0) {
                                FUN_100160772(local_118,0);
                                *(undefined1 **)(lVar6 + 0x100000) = local_118;
                                goto LAB_1003f0af2;
                              }
                              uVar9 = FUN_1001cc310();
                              cVar3 = _os_log_type_enabled(uVar9,0x10);
                              if (cVar3 != '\0') {
                                piVar10 = &local_b8;
                                local_b8 = 0x8220202;
                                iStack_b4 = 0x7a0a90;
                                iStack_b0 = 1;
                                uStack_ac = 0x400;
                                uStack_aa = (undefined2)uVar4;
                                uStack_a8 = (undefined2)(uVar4 >> 0x10);
                                goto LAB_1003f0818;
                              }
                            }
                          }
                        }
                        else {
                          uVar9 = FUN_1001cc310();
                          cVar3 = _os_log_type_enabled(uVar9,0x10);
                          if (cVar3 != '\0') {
                            piVar10 = &local_b8;
                            local_b8 = 0x8220202;
                            iStack_b4 = 0x7a0a90;
                            iStack_b0 = 1;
                            uStack_ac = 0x400;
                            uStack_aa = (undefined2)uVar4;
                            uStack_a8 = (undefined2)(uVar4 >> 0x10);
                            goto LAB_1003f0818;
                          }
                        }
                      }
                    }
                    else {
                      uVar9 = FUN_1001cc310();
                      cVar3 = _os_log_type_enabled(uVar9,0x10);
                      if (cVar3 != '\0') {
                        piVar10 = &local_b8;
                        local_b8 = 0x8220202;
                        iStack_b4 = 0x7a0a90;
                        iStack_b0 = 1;
                        uStack_ac = 0x400;
                        uStack_aa = (undefined2)uVar4;
                        uStack_a8 = (undefined2)(uVar4 >> 0x10);
LAB_1003f0818:
                        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",piVar10
                                            ,0x12);
                      }
                    }
                  }
                }
              }
              else {
                uVar9 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar9,0x10);
                if (cVar3 != '\0') {
                  local_b8 = 0x8220202;
                  iStack_b4 = 0x7a0a90;
                  iStack_b0 = 1;
                  uStack_ac = 0x822;
                  uStack_aa = 0xb3ad;
                  uStack_a8 = 0x7c;
                  uStack_a6 = 1;
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_b8,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                puVar12 = (undefined1 *)0xffffffd9;
              }
            }
            else {
              uVar9 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar9,0x10);
              if (cVar3 != '\0') {
                piVar10 = &local_b8;
                local_b8 = 0x8220202;
                iStack_b4 = 0x7a0a90;
                iStack_b0 = 1;
                uStack_ac = 0x400;
                uStack_aa = (undefined2)uVar4;
                uStack_a8 = (undefined2)(uVar4 >> 0x10);
                goto LAB_1003f0818;
              }
            }
          }
        }
        else {
          uVar9 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar9,0x10);
          if (cVar3 != '\0') {
            piVar10 = &local_b8;
            local_b8 = 0x8220202;
            iStack_b4 = 0x7a0a90;
            iStack_b0 = 1;
            uStack_ac = 0x400;
            uStack_aa = (undefined2)uVar4;
            uStack_a8 = (undefined2)(uVar4 >> 0x10);
            goto LAB_1003f0818;
          }
        }
      }
LAB_1003f0d3c:
      FUN_1001ceb24(*(undefined8 *)(lVar6 + 0x100168),0x6470726d,0,0xffffffffffffffff,0);
      *(undefined8 *)(lVar6 + 0x100000) = 0;
      if (*(long *)(lVar6 + 0x100130) != 0) {
        FUN_1001c64c1();
      }
      if (*(char *)(lVar6 + 0x1000d8) != '\0') {
        FUN_10016013b(local_118);
      }
      FUN_1001c64c1(lVar6);
      goto LAB_1003f0d92;
    }
    uVar9 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar9,0x10);
    if (cVar3 != '\0') {
      pcVar8 = "parser != nullptr";
      goto LAB_1003f0857;
    }
  }
  FUN_1001782e9(0,0);
  puVar12 = (undefined1 *)0xffffffce;
LAB_1003f0d92:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return puVar12;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

