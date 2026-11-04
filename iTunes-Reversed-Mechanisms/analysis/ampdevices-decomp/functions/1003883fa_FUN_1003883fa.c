// name: FUN_1003883fa
// address: 1003883fa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003883fa(undefined8 *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint local_23c;
  undefined8 local_238;
  ulong local_1e0;
  long local_1d8;
  int local_1d0;
  uint local_1cc;
  undefined4 local_1c8;
  int local_1c4;
  uint local_1c0;
  undefined8 local_1bc;
  ushort local_1b4;
  byte local_1b1;
  undefined8 local_1a8;
  char local_199;
  int local_198;
  char *local_194;
  undefined2 local_18c;
  undefined2 uStack_18a;
  undefined2 local_188;
  undefined2 uStack_186;
  undefined8 local_184;
  undefined1 local_178;
  undefined1 local_177;
  char local_176;
  undefined8 local_174;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  int local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  int local_f8;
  undefined8 local_f4;
  undefined2 local_ec;
  int iStack_ea;
  undefined2 uStack_e6;
  undefined2 uStack_e4;
  undefined6 uStack_e2;
  int local_b8;
  int iStack_b4;
  uint uStack_b0;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined2 uStack_a8;
  undefined4 uStack_a6;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar6 = param_1[4];
  iVar2 = FUN_10038815d(param_1,&local_23c,0x5c);
  if (iVar2 == -0x80) goto LAB_10038925d;
  if (iVar2 == 0) {
    if (*(char *)((long)param_1 + 0x15) != '\0') {
      local_23c = local_23c >> 0x18 | (local_23c & 0xff0000) >> 8 | (local_23c & 0xff00) << 8 |
                  local_23c << 0x18;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = local_238;
      auVar12 = pshufb(auVar12,_DAT_10070e4b0);
      local_238 = auVar12._0_8_;
    }
    if (local_23c != 0x696c686d) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        piVar9 = &local_198;
        local_198 = 0x8220202;
        local_194 = "Assertion failure";
        local_18c = 0x822;
        pcVar7 = "header.magic == kITImageDBImageListHeaderMagic";
LAB_100388ff0:
        *(char **)((long)piVar9 + 0xe) = pcVar7;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",piVar9,0x16);
      }
LAB_100388f4e:
      FUN_1001782e9(0,0);
      iVar2 = -0xd0;
      goto LAB_10038925d;
    }
    iVar2 = FUN_100388225(param_1,(int)local_238 + -0x5c);
    if (iVar2 == -0x80) goto LAB_10038925d;
    if (iVar2 == 0) {
      if (local_238._4_4_ == 0) {
        iVar2 = 0;
      }
      else {
        uVar11 = 0;
        local_1cc = param_2;
        while( true ) {
          iVar2 = FUN_100160255(*param_1,&local_1c8);
          uVar10 = local_1cc;
          if (iVar2 != 0) {
            if (iVar2 != -0x80) {
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              if (cVar1 != '\0') {
                piVar9 = &local_b8;
                local_b8 = 0x8220202;
                iStack_b4 = 0x7a0a90;
                uStack_b0 = 1;
                uStack_ac = 0x400;
                uStack_aa = (undefined2)iVar2;
                uStack_a8 = (undefined2)((uint)iVar2 >> 0x10);
                goto LAB_100388f1d;
              }
            }
            goto LAB_10038925d;
          }
          if (local_1c4 != 0) break;
          iVar2 = FUN_10038815d(param_1,&local_198,0x98);
          if (iVar2 != 0) {
            if (iVar2 != -0x80) {
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              if (cVar1 != '\0') {
                piVar9 = &local_b8;
                local_b8 = 0x8220202;
                iStack_b4 = 0x7a0a90;
                uStack_b0 = 1;
                uStack_ac = 0x400;
                uStack_aa = (undefined2)iVar2;
                uStack_a8 = (undefined2)((uint)iVar2 >> 0x10);
                goto LAB_100388f1d;
              }
            }
            goto LAB_10038925d;
          }
          if (*(char *)((long)param_1 + 0x15) != '\0') {
            FUN_10038b5e8(&local_198);
          }
          if (local_198 != 0x6969686d) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 == '\0') goto LAB_100388f4e;
            piVar9 = &local_b8;
            local_b8 = 0x8220202;
            iStack_b4 = 0x7a0a90;
            uStack_b0 = 1;
            uStack_ac = 0x822;
            pcVar7 = "dbImageInfo.magic == kITImageDBImageInfoMagic";
            goto LAB_100388ff0;
          }
          local_1e0 = uVar11;
          lVar3 = FUN_100497d69(uVar6,CONCAT22(uStack_186,local_188));
          if (lVar3 == 0) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_b8 = 0x8220202;
              iStack_b4 = 0x7a0a90;
              uStack_b0 = 1;
              uStack_ac = 0x822;
              uStack_aa = 0x7b90;
              uStack_a8 = 0x7b;
              uStack_a6 = 1;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_b8,0x16);
            }
            FUN_1001782e9(0,0);
            iVar2 = -0x6c;
            goto LAB_10038925d;
          }
          FUN_1004987ec(lVar3,local_184);
          *(undefined4 *)(lVar3 + 0x50) = local_1c8;
          *(undefined8 *)(lVar3 + 0x54) = local_174;
          *(undefined4 *)(lVar3 + 0x1c) = local_160;
          *(undefined4 *)(lVar3 + 0xac) = local_15c;
          *(undefined4 *)(lVar3 + 0x8c) = local_16c;
          *(undefined4 *)(lVar3 + 0x90) = local_13c;
          *(undefined1 *)(lVar3 + 0x81) = local_178;
          *(bool *)(lVar3 + 0xd5) = local_176 != '\0';
          *(undefined4 *)(lVar3 + 0x94) = local_168;
          *(undefined1 *)(lVar3 + 0xb0) = local_177;
          *(undefined4 *)(lVar3 + 0xa4) = local_164;
          *(undefined4 *)(lVar3 + 0x98) = local_158;
          *(undefined4 *)(lVar3 + 0xb4) = local_154;
          *(undefined8 *)(lVar3 + 0x40) = local_138;
          *(undefined8 *)(lVar3 + 0x48) = uStack_130;
          if (2 < uVar10) {
            *(undefined8 *)(lVar3 + 0xb8) = local_150;
            *(undefined8 *)(lVar3 + 0xc0) = uStack_148;
          }
          iVar2 = (int)((ulong)local_174 >> 0x20);
          if (local_140 != 0) {
            iVar2 = local_140;
          }
          *(int *)(lVar3 + 0x5c) = iVar2;
          if (*(char *)((long)param_1 + 0x16) == '\0') {
            *(short *)(lVar3 + 0x60) = *(short *)(lVar3 + 0x60) + 1;
          }
          iVar2 = FUN_100388225(param_1,(int)local_194 + -0x98);
          if (iVar2 != 0) {
            if (iVar2 != -0x80) {
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              if (cVar1 != '\0') {
                piVar9 = &local_b8;
                local_b8 = 0x8220202;
                iStack_b4 = 0x7a0a90;
                uStack_b0 = 1;
                uStack_ac = 0x400;
                uStack_aa = (undefined2)iVar2;
                uStack_a8 = (undefined2)((uint)iVar2 >> 0x10);
                goto LAB_100388f1d;
              }
            }
            goto LAB_10038925d;
          }
          local_1d0 = CONCAT22(uStack_18a,local_18c);
          if (local_1d0 != 0) {
            local_199 = *(char *)((long)param_1 + 0x16);
            local_1d8 = lVar3 + 0x88;
            iVar8 = 0;
            do {
              iVar2 = FUN_10038815d(param_1,&local_1c0,0x18);
              if (iVar2 != 0) {
                if (iVar2 != -0x80) {
                  uVar5 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar1 == '\0') goto LAB_100388e9f;
                  uStack_aa = (undefined2)iVar2;
                  uStack_a8 = (undefined2)((uint)iVar2 >> 0x10);
LAB_100388e8d:
                  uStack_ac = 0x400;
                  uStack_b0 = 1;
                  iStack_b4 = 0x7a0a90;
                  local_b8 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_b8,
                                      0x12);
                  goto LAB_100388e9f;
                }
LAB_100388fbe:
                iVar2 = -0x80;
                goto LAB_10038925d;
              }
              if (*(char *)((long)param_1 + 0x15) != '\0') {
                local_1c0 = local_1c0 >> 0x18 | (local_1c0 & 0xff0000) >> 8 |
                            (local_1c0 & 0xff00) << 8 | local_1c0 << 0x18;
                auVar13._8_8_ = 0;
                auVar13._0_8_ = local_1bc;
                auVar12 = pshufb(auVar13,_DAT_10070e4b0);
                local_1bc = auVar12._0_8_;
                local_1b4 = local_1b4 << 8 | local_1b4 >> 8;
              }
              if (local_1c0 != 0x646f686d) {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  local_b8 = 0x8220202;
                  iStack_b4 = 0x7a0a90;
                  uStack_b0 = 1;
                  uStack_ac = 0x822;
                  uStack_aa = 0x7092;
                  uStack_a8 = 0x7c;
                  uStack_a6 = 1;
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_b8,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                iVar2 = -0xd0;
LAB_100389106:
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 == '\0') goto LAB_10038925d;
                piVar9 = &local_b8;
                local_b8 = 0x8220202;
                iStack_b4 = 0x7a0a90;
                uStack_b0 = 1;
                uStack_ac = 0x400;
                uStack_aa = (undefined2)iVar2;
                uStack_a8 = (undefined2)((uint)iVar2 >> 0x10);
                goto LAB_100388f1d;
              }
              iVar2 = FUN_100388225(param_1,(int)local_1bc + -0x18);
              if (iVar2 != 0) {
                if (iVar2 == -0x80) goto LAB_100388fbe;
                uVar5 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 != '\0') {
                  uStack_aa = (undefined2)iVar2;
                  uStack_a8 = (undefined2)((uint)iVar2 >> 0x10);
                  goto LAB_100388e8d;
                }
LAB_100388e9f:
                if (iVar2 != 0) goto LAB_100389106;
                break;
              }
              if (local_199 == '\0') {
                switch(local_1b4) {
                case 1:
                  iVar2 = FUN_10038faf2(param_1,1,1,*(long *)(lVar3 + 0x10) + 0x70);
                  break;
                case 2:
                case 5:
                  iVar2 = FUN_10039010f(param_1,lVar3);
                  break;
                default:
                  iVar2 = FUN_100388225(param_1,local_1bc._4_4_ - ((uint)local_1b1 + (int)local_1bc)
                                       );
                  break;
                case 6:
                  iVar2 = FUN_10038815d(param_1,&local_b8,0x60);
                  if (iVar2 != -0x80) {
                    if (iVar2 == 0) {
                      if (*(char *)((long)param_1 + 0x15) != '\0') {
                        auVar14._12_2_ = uStack_ac;
                        auVar14._8_4_ = uStack_b0;
                        auVar14._14_2_ = uStack_aa;
                        auVar14._4_4_ = iStack_b4;
                        auVar14._0_4_ = local_b8;
                        auVar12 = pshufb(auVar14,_DAT_100718a70);
                        local_b8 = auVar12._0_4_;
                        iStack_b4 = auVar12._4_4_;
                        uStack_b0 = auVar12._8_4_;
                        uStack_ac = auVar12._12_2_;
                        uStack_aa = auVar12._14_2_;
                      }
                      if (local_b8 == 0x6661686d) {
                        iVar2 = FUN_100388225(param_1,iStack_b4 + -0x60);
                        if (iVar2 != -0x80) {
                          if (iVar2 != 0) {
                            local_1a8 = FUN_1001cc310();
                            cVar1 = _os_log_type_enabled(local_1a8,0x10);
                            goto joined_r0x00010038897d;
                          }
                          if (CONCAT22(uStack_aa,uStack_ac) == 0) {
                            iVar2 = 0;
                          }
                          else {
                            uVar10 = 0;
                            do {
                              local_1a8 = CONCAT44(local_1a8._4_4_,uVar10);
                              FUN_1001c62d9(&local_f8,0x3c);
                              uVar10 = uStack_b0;
                              if (0x3b < uStack_b0) {
                                uVar10 = 0x3c;
                              }
                              iVar2 = FUN_10038815d(param_1,&local_f8,uVar10);
                              if (iVar2 != 0) {
                                if (iVar2 != -0x80) {
                                  local_1a8 = FUN_1001cc310();
                                  cVar1 = _os_log_type_enabled(local_1a8,0x10);
                                  if (cVar1 != '\0') {
                                    uStack_4a = (undefined2)iVar2;
                                    uStack_48 = (undefined2)((uint)iVar2 >> 0x10);
LAB_100388ba0:
                                    uStack_4c = 0x400;
                                    uStack_50 = 1;
                                    uStack_54 = 0x7a0a90;
                                    local_58 = 0x8220202;
                                    piVar9 = &local_58;
                                    goto LAB_1003889c8;
                                  }
                                }
                                break;
                              }
                              if (*(char *)((long)param_1 + 0x15) != '\0') {
                                FUN_100390880(&local_f8);
                              }
                              if (local_f8 != 0x6661696d) {
                                uVar5 = FUN_1001cc310();
                                cVar1 = _os_log_type_enabled(uVar5,0x10);
                                if (cVar1 == '\0') goto LAB_1003889f5;
                                local_58 = 0x8220202;
                                uStack_54 = 0x7a0a90;
                                uStack_50 = 1;
                                uStack_4c = 0x822;
                                uStack_4a = 0x7291;
                                uStack_48 = 0x7c;
                                uStack_46 = 1;
                                piVar9 = &local_58;
                                goto LAB_100388b2d;
                              }
                              iVar2 = FUN_100388225(param_1,uStack_b0 - 0x3c);
                              if (iVar2 != 0) {
                                if (iVar2 != -0x80) {
                                  local_1a8 = FUN_1001cc310();
                                  cVar1 = _os_log_type_enabled(local_1a8,0x10);
                                  if (cVar1 != '\0') {
                                    uStack_4a = (undefined2)iVar2;
                                    uStack_48 = (undefined2)((uint)iVar2 >> 0x10);
                                    goto LAB_100388ba0;
                                  }
                                }
                                break;
                              }
                              local_58 = (int)CONCAT42(iStack_ea,local_ec);
                              uStack_54 = (undefined4)
                                          (CONCAT26(uStack_e6,CONCAT42(iStack_ea,local_ec)) >> 0x20)
                              ;
                              uStack_50 = (undefined4)CONCAT62(uStack_e2,uStack_e4);
                              uStack_4c = (undefined2)((uint6)uStack_e2 >> 0x10);
                              uStack_4a = (undefined2)((uint6)uStack_e2 >> 0x20);
                              lVar4 = FUN_100497564(lVar3,(ulong)local_f4 & 0xffffffff,
                                                    local_f4._4_2_,&local_58,0);
                              if (lVar4 == 0) {
                                uVar5 = FUN_1001cc310();
                                cVar1 = _os_log_type_enabled(uVar5,0x10);
                                if (cVar1 != '\0') {
                                  local_58 = 0x8220202;
                                  uStack_54 = 0x7a0a90;
                                  uStack_50 = 1;
                                  uStack_4c = 0x822;
                                  uStack_4a = 0x8228;
                                  uStack_48 = 0x7b;
                                  uStack_46 = 1;
                                  __os_log_error_impl(0x100000000,uVar5,0x10,
                                                      "%{public}s: (%{public}s)",&local_58,0x16);
                                }
                                FUN_1001782e9(0,0);
                                iVar2 = -0x6c;
                                break;
                              }
                              uVar10 = (int)local_1a8 + 1;
                              iVar2 = 0;
                            } while (uVar10 < CONCAT22(uStack_aa,uStack_ac));
                          }
                        }
                      }
                      else {
                        uVar5 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar5,0x10);
                        if (cVar1 != '\0') {
                          local_f8 = 0x8220202;
                          local_f4 = "Assertion failure";
                          local_ec = 0x822;
                          iStack_ea = 0x7c725b;
                          uStack_e6 = 1;
                          uStack_e4 = 0;
                          piVar9 = &local_f8;
LAB_100388b2d:
                          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                              piVar9,0x16);
                        }
LAB_1003889f5:
                        FUN_1001782e9(0,0);
                        iVar2 = -0xd0;
                      }
                    }
                    else {
                      local_1a8 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(local_1a8,0x10);
joined_r0x00010038897d:
                      if (cVar1 != '\0') {
                        local_ec = 0x400;
                        local_f4 = "Assertion failure";
                        local_f8 = 0x8220202;
                        piVar9 = &local_f8;
                        iStack_ea = iVar2;
LAB_1003889c8:
                        __os_log_error_impl(0x100000000,local_1a8,0x10,"%{public}s: err == (%d)",
                                            piVar9,0x12);
                      }
                    }
                  }
                }
                if (iVar2 == 0) goto LAB_100388938;
                if (iVar2 == -0x80) goto LAB_100388fbe;
                uVar5 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 != '\0') {
                  uStack_aa = (undefined2)iVar2;
                  uStack_a8 = (undefined2)((uint)iVar2 >> 0x10);
                  goto LAB_100388e8d;
                }
                goto LAB_100388e9f;
              }
              iVar2 = FUN_100388225(param_1,local_1bc._4_4_ - ((uint)local_1b1 + (int)local_1bc));
              if (iVar2 != 0) {
                if (iVar2 == -0x80) goto LAB_100388fbe;
                uVar5 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 != '\0') {
                  uStack_aa = (undefined2)iVar2;
                  uStack_a8 = (undefined2)((uint)iVar2 >> 0x10);
                  goto LAB_100388e8d;
                }
                goto LAB_100388e9f;
              }
LAB_100388938:
              iVar2 = FUN_100388225(param_1,local_1b1);
              if (iVar2 != 0) {
                if (iVar2 == -0x80) goto LAB_100388fbe;
                uVar5 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar5,0x10);
                if (cVar1 != '\0') {
                  uStack_aa = (undefined2)iVar2;
                  uStack_a8 = (undefined2)((uint)iVar2 >> 0x10);
                  goto LAB_100388e8d;
                }
                goto LAB_100388e9f;
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 != local_1d0);
          }
          uVar10 = (int)local_1e0 + 1;
          uVar11 = (ulong)uVar10;
          iVar2 = 0;
          if (local_238._4_4_ <= uVar10) goto LAB_10038925d;
        }
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_b8 = 0x8220202;
          iStack_b4 = 0x7a0a90;
          uStack_b0 = 1;
          uStack_ac = 0x822;
          uStack_aa = 0x7008;
          uStack_a8 = 0x7c;
          uStack_a6 = 1;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_b8,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x28;
      }
      goto LAB_10038925d;
    }
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 == '\0') goto LAB_10038925d;
    piVar9 = &local_198;
    local_198 = 0x8220202;
    local_194 = "Assertion failure";
    local_18c = 0x400;
    uStack_18a = (undefined2)iVar2;
    local_188 = (undefined2)((uint)iVar2 >> 0x10);
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 == '\0') goto LAB_10038925d;
    piVar9 = &local_198;
    local_198 = 0x8220202;
    local_194 = "Assertion failure";
    local_18c = 0x400;
    uStack_18a = (undefined2)iVar2;
    local_188 = (undefined2)((uint)iVar2 >> 0x10);
  }
LAB_100388f1d:
  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",piVar9,0x12);
LAB_10038925d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

