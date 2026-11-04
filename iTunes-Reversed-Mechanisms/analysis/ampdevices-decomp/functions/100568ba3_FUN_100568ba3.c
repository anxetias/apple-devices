// name: FUN_100568ba3
// address: 100568ba3

undefined1 * FUN_100568ba3(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  char *pcVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 auVar15 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined4 local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined4 local_c0;
  long local_b8;
  int local_ac;
  ulong *local_a8;
  int local_a0;
  undefined4 local_9c;
  int local_98;
  undefined8 local_94;
  undefined2 local_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined4 uStack_86;
  int local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_128 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  local_158 = (undefined1  [16])0x0;
  local_118 = 0;
  local_f8 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_e8 = 0x3f800000;
  local_e0 = (undefined1  [16])0x0;
  local_d0 = (undefined1  [16])0x0;
  local_c0 = 0x3f800000;
  piVar6 = _calloc(1,0x1c9c570);
  if (piVar6 == (int *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_98 = 0x8220202;
      local_94 = "Assertion failure";
      local_8c = 0x822;
      uStack_8a = 0x1d5e;
      uStack_88 = 0x7a;
      uStack_86 = 1;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    puVar14 = (undefined1 *)0xffffff94;
    FUN_1001782e9(0,0);
    goto LAB_1005690bc;
  }
  uVar7 = FUN_1001ebcf1();
  *(undefined8 *)(piVar6 + 0x72712c) = uVar7;
  *(undefined8 *)(piVar6 + 0x28) = param_1;
  *(undefined8 *)(piVar6 + 0x727124) = param_3;
  piVar6[0x72711a] = -1;
  piVar6[0x72711b] = -1;
  piVar6[0x72711c] = -1;
  piVar6[0x72711d] = -1;
  uVar4 = FUN_100569944(piVar6,piVar6,0xa0);
  puVar14 = (undefined1 *)(ulong)uVar4;
  if (uVar4 != 0xffffff80) {
    if (uVar4 == 0) {
      plVar1 = (long *)(piVar6 + 0x72712c);
      if (*piVar6 == 0x616d6668) {
        if (*(ushort *)(piVar6 + 3) < 0xb) {
          if (piVar6[0xe] == 0) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              pcVar8 = "context->fileHeader.numSections != 0";
              goto LAB_100569124;
            }
            goto LAB_100568ec3;
          }
          if (1 < *(byte *)((long)piVar6 + 0x41)) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              pcVar8 = 
              "(context->fileHeader.encryption == kAMLEncryption_None) || (context->fileHeader.encryption == kAMLEncryption_PartialECB)"
              ;
              goto LAB_100569004;
            }
            goto LAB_100569029;
          }
          uVar4 = piVar6[1];
          if ((ulong)uVar4 < 0xa0) {
            FUN_1001c62d9((ulong)uVar4 + (long)piVar6,0xa0 - uVar4);
          }
          uVar4 = (**(code **)*param_2)(param_2,piVar6);
          puVar14 = (undefined1 *)(ulong)uVar4;
          if (uVar4 != 0xffffff80) {
            if (uVar4 == 0) {
              auVar15 = phaddd(*(undefined1 (*) [16])(piVar6 + 0x11),
                               *(undefined1 (*) [16])(piVar6 + 0x11));
              auVar15 = phaddd(auVar15,auVar15);
              uVar12 = -(ulong)(auVar15._0_4_ == 0) | (ulong)auVar15._0_4_;
              *(ulong *)(piVar6 + 0x727128) = uVar12;
              FUN_1001ceb24(*(undefined8 *)(piVar6 + 0x727124),0x6370726d,0,uVar12,0);
              local_a8 = (ulong *)(piVar6 + 0x72711a);
              *(int *)local_a8 = -1;
              piVar6[0x72711b] = -1;
              piVar6[0x72711c] = -1;
              piVar6[0x72711d] = -1;
              if (*(char *)((long)piVar6 + 0x42) == '\0') {
                cVar3 = *(char *)((long)piVar6 + 0x41);
                lVar10 = CONCAT71((int7)(uVar12 >> 8),cVar3);
                if (cVar3 != '\0') {
                  *(ulong *)(piVar6 + 0x72711a) = (ulong)(uint)piVar6[1];
                  if (cVar3 == '\x01') {
                    lVar10 = (ulong)(uint)piVar6[0x15] + (ulong)(uint)piVar6[1];
                    *(long *)(piVar6 + 0x72711c) = lVar10;
                  }
                  uVar4 = FUN_100383a56(piVar6 + 0x72710a,0);
                  puVar14 = (undefined1 *)(ulong)uVar4;
                  if (uVar4 != 0xffffff80) {
                    if (uVar4 == 0) {
                      piVar9 = piVar6 + 0x727122;
                      local_9c = (undefined4)CONCAT71((int7)((ulong)lVar10 >> 8),1);
LAB_10056930f:
                      piVar9[0] = 0;
                      piVar9[1] = 0;
                      goto LAB_100569316;
                    }
                    uVar7 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar3 != '\0') {
                      uStack_8a = (undefined2)uVar4;
                      uStack_88 = (undefined2)(uVar4 >> 0x10);
                      goto LAB_1005696a1;
                    }
                  }
                  goto LAB_10056916b;
                }
                local_9c = 0;
LAB_100569316:
                uVar4 = piVar6[1];
                uVar12 = (ulong)uVar4;
                if (uVar12 < 0xa0) {
                  FUN_1001c62d9((long)piVar6 + uVar12,0xa0 - uVar12);
                  uVar4 = piVar6[1];
                }
                uVar4 = FUN_100160772(*(undefined8 *)(piVar6 + 0x28),uVar4);
                puVar14 = (undefined1 *)(ulong)uVar4;
                if (uVar4 != 0xffffff80) {
                  if (uVar4 == 0) {
                    FUN_10056a276(local_108,param_4);
                    if (((short)piVar6[3] == 6) && (*(short *)((long)piVar6 + 0xe) == 1)) {
                      FUN_10056ed4c(local_108,5);
                      FUN_10056ed4c(local_108,4);
                      local_98 = 5;
                      FUN_1002ec716(local_e0,&local_98);
                      local_98 = 4;
                      FUN_1002ec716(local_e0,&local_98);
                    }
                    if (piVar6[0xe] == 0) {
                      puVar14 = (undefined1 *)0x0;
                    }
                    else {
                      uVar4 = 0;
                      while( true ) {
                        local_b8 = FUN_1001ebcf1();
                        uVar5 = FUN_10056a2be(piVar6,&local_98,0x38);
                        puVar14 = (undefined1 *)(ulong)uVar5;
                        if (uVar5 != 0) {
                          if (uVar5 != 0xffffff80) {
                            uVar7 = FUN_1001cc310();
                            cVar3 = _os_log_type_enabled(uVar7,0x10);
                            if (cVar3 != '\0') {
                              piVar9 = &local_58;
                              local_58 = 0x8220202;
                              local_54 = "Assertion failure";
                              local_4c = 0x400;
                              local_4a = (char *)CONCAT44(local_4a._4_4_,uVar5);
                              goto LAB_100569821;
                            }
                          }
                          goto LAB_100569042;
                        }
                        local_a8 = (ulong *)CONCAT44(local_a8._4_4_,uVar4);
                        if (local_98 != 0x616d7368) break;
                        iVar2 = local_94._4_4_;
                        local_ac = (int)local_94;
                        local_a0 = local_94._4_4_ - (int)local_94;
                        uVar4 = CONCAT22(uStack_8a,local_8c);
                        cVar3 = FUN_10056a472(uVar4,local_108);
                        if (cVar3 == '\0') {
                          if (iVar2 != local_ac) {
                            uVar11 = (long)local_a0 + *(long *)(piVar6 + 0x72711e);
                            *(ulong *)(piVar6 + 0x72711e) = uVar11;
                            uVar12 = *(ulong *)(piVar6 + 0x727120);
                            if (uVar12 <= uVar11) {
LAB_1005694f0:
                              if (uVar11 < uVar12 + *(long *)(piVar6 + 0x727122))
                              goto LAB_1005695b7;
                            }
LAB_100569500:
                            piVar6[0x727122] = 0;
                            piVar6[0x727123] = 0;
                          }
                        }
                        else {
                          switch(uVar4) {
                          case 0:
                          case 3:
                          case 7:
                            iVar13 = (int)local_a8;
                            if (iVar2 != local_ac) {
                              uVar12 = (long)local_a0 + *(long *)(piVar6 + 0x72711e);
                              *(ulong *)(piVar6 + 0x72711e) = uVar12;
                              if ((uVar12 < *(ulong *)(piVar6 + 0x727120)) ||
                                 (*(ulong *)(piVar6 + 0x727120) + *(long *)(piVar6 + 0x727122) <=
                                  uVar12)) goto LAB_100569500;
                            }
                            goto LAB_1005695c2;
                          case 1:
                            uVar4 = FUN_10056b9b8(piVar6,param_2);
                            break;
                          case 2:
                            uVar4 = FUN_10056c0d8(piVar6,param_2);
                            break;
                          case 4:
                            uVar4 = FUN_10056a4c4(piVar6,param_2);
                            break;
                          case 5:
                            uVar4 = FUN_10056ab78(piVar6,param_2);
                            break;
                          case 6:
                            uVar4 = FUN_10056cfb4(piVar6,param_2);
                            break;
                          case 8:
                            uVar4 = FUN_10056d4db(piVar6,param_2);
                            break;
                          case 9:
                            uVar4 = FUN_10056c822(piVar6,param_2);
                            break;
                          case 10:
                          case 0xc:
                          case 0xd:
                            uVar4 = FUN_10056dc49(piVar6,param_2,uVar4,local_a0);
                            break;
                          case 0xb:
                            uVar4 = FUN_10056d781(piVar6,param_2);
                            break;
                          case 0xe:
                            uVar4 = FUN_10056d991(piVar6,param_2);
                            break;
                          case 0xf:
                            uVar4 = FUN_10056b298(piVar6,param_2);
                            break;
                          default:
                            if (iVar2 != local_ac) {
                              uVar11 = (long)local_a0 + *(long *)(piVar6 + 0x72711e);
                              *(ulong *)(piVar6 + 0x72711e) = uVar11;
                              uVar12 = *(ulong *)(piVar6 + 0x727120);
                              if (uVar12 <= uVar11) goto LAB_1005694f0;
                              goto LAB_100569500;
                            }
                            goto LAB_1005695b7;
                          }
                          puVar14 = (undefined1 *)(ulong)uVar4;
                          if (uVar4 != 0) {
                            if ((uVar4 != 0xffffff80) && (uVar4 != 0x2349)) {
                              uVar7 = FUN_1001cc310();
                              cVar3 = _os_log_type_enabled(uVar7,0x10);
                              if (cVar3 != '\0') {
                                piVar9 = &local_58;
                                local_58 = 0x8220202;
                                local_54 = "Assertion failure";
                                local_4c = 0x400;
                                local_4a = (char *)CONCAT44(local_4a._4_4_,uVar4);
                                goto LAB_100569821;
                              }
                            }
                            goto LAB_100569042;
                          }
                          uVar4 = CONCAT22(uStack_8a,local_8c);
                        }
LAB_1005695b7:
                        iVar13 = (int)local_a8;
                        if (uVar4 < 0x18) {
LAB_1005695c2:
                          lVar10 = FUN_1001ebcf1();
                          plVar1[CONCAT22(uStack_8a,local_8c)] = lVar10 - local_b8;
                        }
                        uVar4 = iVar13 + 1;
                        puVar14 = (undefined1 *)0x0;
                        if ((uint)piVar6[0xe] <= uVar4) goto LAB_100569042;
                      }
                      uVar7 = FUN_1001cc310();
                      cVar3 = _os_log_type_enabled(uVar7,0x10);
                      if (cVar3 != '\0') {
                        local_58 = 0x8220202;
                        local_54 = "Assertion failure";
                        local_4c = 0x822;
                        local_4a = "sectionHeader.magic == kAMLSectionHeaderMagic";
                        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",
                                            &local_58,0x16);
                      }
                      puVar14 = &DAT_ffffff30;
                      FUN_1001782e9(0,0);
                    }
                  }
                  else {
                    uVar7 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar3 != '\0') {
                      piVar9 = &local_98;
                      local_98 = 0x8220202;
                      local_94 = "Assertion failure";
                      local_8c = 0x400;
                      uStack_8a = (undefined2)uVar4;
                      uStack_88 = (undefined2)(uVar4 >> 0x10);
LAB_100569821:
                      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",piVar9,
                                          0x12);
                    }
                  }
                }
              }
              else {
                uVar4 = FUN_1001601fd(local_158,10000000);
                puVar14 = (undefined1 *)(ulong)uVar4;
                if (uVar4 == 0xffffff80) goto LAB_1005690bc;
                if (uVar4 != 0) {
                  uVar7 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar3 != '\0') {
                    local_98 = 0x8220202;
                    local_94 = "Assertion failure";
                    local_8c = 0x400;
                    uStack_8a = (undefined2)uVar4;
                    uStack_88 = (undefined2)(uVar4 >> 0x10);
                    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_98,
                                        0x12);
                  }
                  goto LAB_1005690bc;
                }
                FUN_100160772(*(undefined8 *)(piVar6 + 0x28),piVar6[1]);
                uVar12 = (ulong)(uint)piVar6[1];
                *(ulong *)(piVar6 + 0x72711e) = uVar12;
                cVar3 = *(char *)((long)piVar6 + 0x41);
                if (cVar3 != '\0') {
                  *local_a8 = uVar12;
                  if (cVar3 == '\x01') {
                    *(ulong *)(piVar6 + 0x72711c) = (uint)piVar6[0x15] + uVar12;
                  }
                  uVar12 = FUN_100383a56(piVar6 + 0x72710a,0);
                  puVar14 = (undefined1 *)(uVar12 & 0xffffffff);
                  if ((int)uVar12 != -0x80) {
                    if ((int)uVar12 == 0) {
                      piVar6[0x727122] = 0;
                      piVar6[0x727123] = 0;
                      local_9c = (undefined4)CONCAT71((int7)(uVar12 >> 8),1);
                      goto LAB_1005692ab;
                    }
                    uVar7 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar3 != '\0') {
                      uStack_8a = (undefined2)uVar12;
                      uStack_88 = (undefined2)(uVar12 >> 0x10);
                      goto LAB_1005696a1;
                    }
                  }
                  goto LAB_10056916b;
                }
                local_9c = 0;
LAB_1005692ab:
                uVar4 = FUN_100569c8e(piVar6,local_158);
                puVar14 = (undefined1 *)(ulong)uVar4;
                if (uVar4 != 0xffffff80) {
                  if (uVar4 == 0) {
                    FUN_100160772(local_158,0);
                    piVar9 = piVar6 + 0x72711e;
                    *(undefined1 **)(piVar6 + 0x28) = local_158;
                    *(undefined2 *)((long)piVar6 + 0x41) = 0;
                    *(int *)local_a8 = -1;
                    *(int *)((long)local_a8 + 4) = -1;
                    *(int *)(local_a8 + 1) = -1;
                    *(int *)((long)local_a8 + 0xc) = -1;
                    piVar6[0x727122] = 0;
                    piVar6[0x727123] = 0;
                    goto LAB_10056930f;
                  }
                  uVar7 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar3 == '\0') goto LAB_100569042;
                  piVar9 = &local_98;
                  local_98 = 0x8220202;
                  local_94 = "Assertion failure";
                  local_8c = 0x400;
                  uStack_8a = (undefined2)uVar4;
                  uStack_88 = (undefined2)(uVar4 >> 0x10);
                  goto LAB_100569821;
                }
              }
              goto LAB_100569042;
            }
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              uStack_8a = (undefined2)uVar4;
              uStack_88 = (undefined2)(uVar4 >> 0x10);
LAB_1005696a1:
              local_8c = 0x400;
              local_94 = "Assertion failure";
              local_98 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_98,0x12);
            }
          }
LAB_10056916b:
          local_9c = 0;
        }
        else {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            pcVar8 = "context->fileHeader.majorVersion <= kCurrentAMLMajorVersion";
LAB_100569004:
            local_8c = 0x822;
            local_94 = "Assertion failure";
            local_98 = 0x8220202;
            uStack_8a = SUB82(pcVar8,0);
            uStack_88 = (undefined2)((ulong)pcVar8 >> 0x10);
            uStack_86 = (undefined4)((ulong)pcVar8 >> 0x20);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
          }
LAB_100569029:
          local_9c = 0;
          FUN_1001782e9(0,0);
          puVar14 = (undefined1 *)0x1b5c;
        }
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          pcVar8 = "(context->fileHeader.magic == kAMLFileHeaderMagic)";
LAB_100569124:
          local_8c = 0x822;
          local_94 = "Assertion failure";
          local_98 = 0x8220202;
          uStack_8a = SUB82(pcVar8,0);
          uStack_88 = (undefined2)((ulong)pcVar8 >> 0x10);
          uStack_86 = (undefined4)((ulong)pcVar8 >> 0x20);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
        }
LAB_100568ec3:
        local_9c = 0;
        FUN_1001782e9(0,0);
        puVar14 = &DAT_ffffff30;
      }
LAB_100569042:
      FUN_1001ceb24(*(undefined8 *)(piVar6 + 0x727124),0x6470726d,*(undefined8 *)(piVar6 + 0x727128)
                    ,*(undefined8 *)(piVar6 + 0x727128),0);
      lVar10 = FUN_1001ebcf1();
      *plVar1 = lVar10 - *plVar1;
      (**(code **)(*param_2 + 8))(param_2,puVar14,plVar1);
      if ((char)local_9c != '\0') {
        FUN_100177b23(piVar6 + 0x72710a,0,0);
      }
    }
    else {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_98 = 0x8220202;
        local_94 = "Assertion failure";
        local_8c = 0x400;
        uStack_8a = (undefined2)uVar4;
        uStack_88 = (undefined2)(uVar4 >> 0x10);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_98,0x12);
      }
    }
  }
  cVar3 = FUN_100161f0e(local_158);
  if (cVar3 != '\0') {
    FUN_10016013b(local_158);
  }
  _free(piVar6);
LAB_1005690bc:
  FUN_1002842e4(local_e0);
  FUN_1002842e4(local_108);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar14;
}

