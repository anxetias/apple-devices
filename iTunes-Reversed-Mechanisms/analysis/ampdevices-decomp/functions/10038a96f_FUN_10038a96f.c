// name: FUN_10038a96f
// address: 10038a96f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10038a96f(long param_1,int *param_2,uint param_3,undefined2 *param_4,undefined2 *param_5)

{
  int iVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  char local_210 [80];
  undefined1 local_1c0 [72];
  ulong local_178;
  long *local_170;
  undefined8 local_168;
  undefined8 local_160;
  long *local_158;
  long local_150;
  uint local_148;
  undefined8 local_144;
  ushort local_13c;
  char *local_13a;
  int local_e8;
  int local_e4;
  uint uStack_e0;
  undefined2 uStack_dc;
  undefined2 uStack_da;
  undefined2 uStack_d8;
  undefined2 uStack_d6;
  ushort uStack_d4;
  ushort uStack_d2;
  uint local_cc;
  ulong local_b4;
  undefined1 local_ac [16];
  ushort local_9c;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_160 = 0;
  local_168 = 0;
  local_150 = param_1;
  iVar4 = FUN_10017d477(param_2,local_210,0);
  if (iVar4 == -0x80) goto LAB_10038aa25;
  if (iVar4 != 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 == '\0') goto LAB_10038aa25;
    uStack_da = (undefined2)iVar4;
    uStack_d8 = (undefined2)((uint)iVar4 >> 0x10);
LAB_10038acaf:
    uStack_dc = 0x400;
    uStack_e0 = 1;
    local_e4 = 0x7a0a90;
    local_e8 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_e8,0x12);
    goto LAB_10038aa25;
  }
  if (local_210[0] != '\0') {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_e8 = 0x8220202;
      local_e4 = 0x7a0a90;
      uStack_e0 = 1;
      uStack_dc = 0x822;
      uStack_da = 0xd53;
      uStack_d8 = 0x7a;
      uStack_d6 = 1;
      uStack_d4 = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_e8,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x516;
    goto LAB_10038aa25;
  }
  if (*param_2 == 0x41464350) {
    iVar4 = FUN_100180bd2(param_2,&local_160,&local_168,0);
    lVar10 = local_150;
    if (iVar4 != -0x80) {
      if (iVar4 == 0) {
        iVar4 = FUN_1001601a5(local_1c0,local_160,local_168);
        lVar10 = local_150;
        if (iVar4 != -0x80) {
          if (iVar4 == 0) goto LAB_10038ab3b;
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          lVar10 = local_150;
          if (cVar3 != '\0') {
            uStack_da = (undefined2)iVar4;
            uStack_d8 = (undefined2)((uint)iVar4 >> 0x10);
            goto LAB_10038ac14;
          }
        }
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        lVar10 = local_150;
        if (cVar3 != '\0') {
          uStack_da = (undefined2)iVar4;
          uStack_d8 = (undefined2)((uint)iVar4 >> 0x10);
LAB_10038ac14:
          lVar10 = local_150;
          uStack_dc = 0x400;
          uStack_e0 = 1;
          local_e4 = 0x7a0a90;
          local_e8 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_e8,0x12);
        }
      }
    }
  }
  else {
    iVar4 = FUN_10015ff27(param_2,local_1c0,0x20000);
    if (iVar4 == -0x80) goto LAB_10038aa25;
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 == '\0') goto LAB_10038aa25;
      uStack_da = (undefined2)iVar4;
      uStack_d8 = (undefined2)((uint)iVar4 >> 0x10);
      goto LAB_10038acaf;
    }
LAB_10038ab3b:
    lVar10 = local_150;
    if (param_4 != (undefined2 *)0x0) {
      *param_4 = 0;
    }
    if (param_5 != (undefined2 *)0x0) {
      *param_5 = 0;
    }
    cVar3 = FUN_100495380(local_150);
    if (cVar3 == '\0') {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        pcVar6 = "ITImageLibraryIsValid(imageLibrary)";
LAB_10038af59:
        uStack_dc = 0x822;
        uStack_e0 = 1;
        local_e4 = 0x7a0a90;
        local_e8 = 0x8220202;
        uStack_da = SUB82(pcVar6,0);
        uStack_d8 = (undefined2)((ulong)pcVar6 >> 0x10);
        uStack_d6 = (undefined2)((ulong)pcVar6 >> 0x20);
        uStack_d4 = 0;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_e8,0x16);
      }
    }
    else {
      if (*(int *)(lVar10 + 8) == 0) {
        iVar4 = FUN_100388024(lVar10,&local_170);
        if (iVar4 != 0) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          lVar10 = local_150;
          if (cVar3 != '\0') {
            local_e8 = 0x8220202;
            local_e4 = 0x7a0a90;
            uStack_e0 = 1;
            uStack_dc = 0x400;
            uStack_da = (undefined2)iVar4;
            uStack_d8 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_e8,0x12);
            lVar10 = local_150;
          }
          goto LAB_10038ad4b;
        }
        if ((param_3 & 1) != 0) {
          *(undefined1 *)((long)local_170 + 0x16) = 1;
        }
        if ((param_3 & 2) != 0) {
          *(undefined1 *)((long)local_170 + 0x1a) = 1;
        }
        local_158 = local_170;
        *local_170 = (long)local_1c0;
        FUN_1001c62d9(&local_e8,0x84);
        iVar4 = FUN_100160c3f(local_1c0,&local_178);
        lVar10 = local_150;
        if (iVar4 != -0x80) {
          if (iVar4 == 0) {
            iVar4 = FUN_10038815d(local_158,&local_e8,0x84);
            uVar2 = uStack_d4;
            lVar10 = local_150;
            if (iVar4 != -0x80) {
              if (iVar4 == 0) {
                iVar4 = -0xd0;
                if (local_e8 == 0x6d686664) {
                  *(undefined1 *)((long)local_158 + 0x15) = 1;
                  local_e8 = 0x6466686d;
                  auVar13._4_4_ = uStack_e0;
                  auVar13._0_4_ = local_e4;
                  auVar13._8_2_ = uStack_dc;
                  auVar13._10_2_ = uStack_da;
                  auVar13._12_2_ = uStack_d8;
                  auVar13._14_2_ = uStack_d6;
                  auVar13 = pshufb(auVar13,_DAT_100718a70);
                  local_e4 = auVar13._0_4_;
                  uStack_e0 = auVar13._4_4_;
                  uStack_dc = auVar13._8_2_;
                  uStack_da = auVar13._10_2_;
                  uStack_d8 = auVar13._12_2_;
                  uStack_d6 = auVar13._14_2_;
                  iVar1 = CONCAT22(uStack_d2,uStack_d4);
                  uStack_d4 = uStack_d2 >> 8 | uStack_d2 << 8;
                  uStack_d2 = uVar2 >> 8 | (ushort)((uint)(iVar1 << 0x18) >> 0x10);
                  local_cc = local_cc >> 0x18 | (local_cc & 0xff0000) >> 8 |
                             (local_cc & 0xff00) << 8 | local_cc << 0x18;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = local_b4;
                  auVar13 = pshufb(auVar11,_DAT_100718a70);
                  local_b4 = auVar13._0_8_;
                  local_ac = pshufb(local_ac,_DAT_100711fe0);
                  local_9c = local_9c << 8 | local_9c >> 8;
                }
                else {
                  if (local_e8 != 0x6466686d) goto LAB_10038b10e;
                  *(undefined1 *)((long)local_158 + 0x15) = 0;
                }
                if (param_4 != (undefined2 *)0x0) {
                  *param_4 = uStack_dc;
                }
                if (param_5 != (undefined2 *)0x0) {
                  *param_5 = uStack_d8;
                }
                if (local_178 == uStack_e0) {
                  if (CONCAT22(uStack_da,uStack_dc) == 0) {
                    if (CONCAT22(uStack_d2,uStack_d4) != 0) {
                      *(uint *)(local_150 + 0x44) = local_cc;
                      *(ulong *)(local_150 + 0x13c0) = local_b4;
                      *(undefined8 *)(local_150 + 0x1448) = local_ac._0_8_;
                      *(undefined8 *)(local_150 + 0x1450) = local_ac._8_8_;
                      *(ushort *)(local_150 + 0x13c8) = local_9c;
                      if (local_ac._0_8_ == 0) {
                        uVar5 = FUN_1001ea62b(0);
                        *(undefined8 *)(local_150 + 0x1448) = uVar5;
                      }
                      iVar4 = FUN_100388225(local_158,local_e4 + -0x84);
                      lVar10 = local_150;
                      if (iVar4 != -0x80) {
                        if (iVar4 == 0) {
                          if (CONCAT22(uStack_d2,uStack_d4) != 0) {
                            uVar9 = 0;
                            do {
                              iVar4 = FUN_10038815d(local_158,&local_148,0x60);
                              if (iVar4 != 0) {
                                lVar10 = local_150;
                                if (iVar4 == -0x80) goto LAB_10038b10e;
                                uVar5 = FUN_1001cc310();
                                cVar3 = _os_log_type_enabled(uVar5,0x10);
                                lVar10 = local_150;
                                if (cVar3 == '\0') goto LAB_10038b10e;
                                puVar8 = &local_58;
                                local_58 = 0x8220202;
                                local_54 = "Assertion failure";
                                local_4c = 0x400;
                                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                                goto LAB_10038b39c;
                              }
                              if (*(char *)((long)local_158 + 0x15) != '\0') {
                                local_148 = local_148 >> 0x18 | (local_148 & 0xff0000) >> 8 |
                                            (local_148 & 0xff00) << 8 | local_148 << 0x18;
                                auVar12._8_8_ = 0;
                                auVar12._0_8_ = local_144;
                                auVar13 = pshufb(auVar12,_DAT_10070e4b0);
                                local_144 = auVar13._0_8_;
                                local_13c = local_13c << 8 | local_13c >> 8;
                              }
                              if (local_148 != 0x6473686d) {
                                uVar5 = FUN_1001cc310();
                                cVar3 = _os_log_type_enabled(uVar5,0x10);
                                if (cVar3 != '\0') {
                                  local_58 = 0x8220202;
                                  local_54 = "Assertion failure";
                                  local_4c = 0x822;
                                  local_4a = "sectionHeader.magic == kITImageDBSectionHeaderMagic";
                                  __os_log_error_impl(0x100000000,uVar5,0x10,
                                                      "%{public}s: (%{public}s)",&local_58,0x16);
                                }
                                FUN_1001782e9(0,0);
                                iVar4 = -0xd0;
                                lVar10 = local_150;
                                goto LAB_10038b10e;
                              }
                              iVar4 = FUN_100388225(local_158,(int)local_144 + -0x60);
                              if (iVar4 != 0) {
                                lVar10 = local_150;
                                if (iVar4 == -0x80) goto LAB_10038b10e;
                                uVar5 = FUN_1001cc310();
                                cVar3 = _os_log_type_enabled(uVar5,0x10);
                                lVar10 = local_150;
                                if (cVar3 == '\0') goto LAB_10038b10e;
                                puVar8 = &local_58;
                                local_58 = 0x8220202;
                                local_54 = "Assertion failure";
                                local_4c = 0x400;
                                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                                goto LAB_10038b39c;
                              }
                              if (local_13c == 3) {
                                iVar4 = FUN_10038a176(local_158);
                              }
                              else if (local_13c == 2) {
                                iVar4 = FUN_100389398(local_158);
                              }
                              else if (local_13c == 1) {
                                iVar4 = FUN_1003883fa(local_158,CONCAT22(uStack_d6,uStack_d8));
                              }
                              else {
                                iVar4 = FUN_100388225(local_158,local_144._4_4_ - (int)local_144);
                              }
                              if (iVar4 != 0) {
                                lVar10 = local_150;
                                if (iVar4 == -0x80) goto LAB_10038b10e;
                                uVar5 = FUN_1001cc310();
                                cVar3 = _os_log_type_enabled(uVar5,0x10);
                                lVar10 = local_150;
                                if (cVar3 == '\0') goto LAB_10038b10e;
                                puVar8 = &local_58;
                                local_58 = 0x8220202;
                                local_54 = "Assertion failure";
                                local_4c = 0x400;
                                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                                goto LAB_10038b39c;
                              }
                              uVar9 = uVar9 + 1;
                            } while (uVar9 < CONCAT22(uStack_d2,uStack_d4));
                          }
                          lVar7 = FUN_100496019(local_150);
                          iVar4 = 0;
                          for (; lVar10 = local_150, lVar7 != 0; lVar7 = FUN_1004960d0(lVar7)) {
                          }
                        }
                        else {
                          uVar5 = FUN_1001cc310();
                          cVar3 = _os_log_type_enabled(uVar5,0x10);
                          lVar10 = local_150;
                          if (cVar3 != '\0') {
                            puVar8 = &local_148;
                            local_148 = 0x8220202;
                            local_144 = "Assertion failure";
                            local_13c = 0x400;
                            local_13a = (char *)CONCAT44(local_13a._4_4_,iVar4);
LAB_10038b39c:
                            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",
                                                puVar8,0x12);
                            lVar10 = local_150;
                          }
                        }
                      }
                      goto LAB_10038b10e;
                    }
                    uVar5 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar3 != '\0') {
                      local_13a = "fileHeader.numSections != 0";
                      goto LAB_10038b42c;
                    }
                  }
                  else {
                    uVar5 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar3 != '\0') {
                      local_13a = "fileHeader.majorVersion <= kCurrentITImageDBMajorVersion";
LAB_10038b42c:
                      local_13c = 0x822;
                      local_144 = "Assertion failure";
                      local_148 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                          &local_148,0x16);
                    }
                  }
                  FUN_1001782e9(0,0);
                  lVar10 = local_150;
                }
                else {
                  uVar5 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar3 != '\0') {
                    local_148 = 0x8220202;
                    local_144 = "Assertion failure";
                    local_13c = 0x822;
                    local_13a = "fileHeader.fileSize == fileSize";
                    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_148
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                  iVar4 = -0x27;
                  lVar10 = local_150;
                }
              }
              else {
                uVar5 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar5,0x10);
                lVar10 = local_150;
                if (cVar3 != '\0') {
                  local_13a = (char *)CONCAT44(local_13a._4_4_,iVar4);
                  goto LAB_10038afd9;
                }
              }
            }
          }
          else {
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            lVar10 = local_150;
            if (cVar3 != '\0') {
              local_13a = (char *)CONCAT44(local_13a._4_4_,iVar4);
LAB_10038afd9:
              lVar10 = local_150;
              local_13c = 0x400;
              local_144 = "Assertion failure";
              local_148 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_148,0x12);
            }
          }
        }
LAB_10038b10e:
        FUN_1001c62d9(lVar10 + 4000,0x420);
        *(undefined1 *)(lVar10 + 5) = 0;
        *local_158 = 0;
        FUN_10038a886();
        goto LAB_10038ad4b;
      }
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        pcVar6 = "imageLibrary->numImages == 0";
        goto LAB_10038af59;
      }
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
    lVar10 = local_150;
  }
LAB_10038ad4b:
  FUN_10016013b(local_1c0);
  FUN_1001c64c1(local_160);
  if (iVar4 == 0) {
    _memcpy((void *)(lVar10 + 4000),param_2,0x420);
    *(undefined1 *)(lVar10 + 5) = 1;
    iVar4 = 0;
  }
  else {
    FUN_1001c62d9((void *)(lVar10 + 4000),0x420);
    *(undefined1 *)(lVar10 + 5) = 0;
  }
LAB_10038aa25:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

