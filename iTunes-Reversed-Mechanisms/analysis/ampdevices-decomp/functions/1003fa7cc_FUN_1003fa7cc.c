// name: FUN_1003fa7cc
// address: 1003fa7cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003fa7cc(long param_1)

{
  long lVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint local_144;
  undefined8 local_140;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  undefined8 local_c4;
  undefined2 local_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  ushort uStack_98;
  ushort uStack_96;
  uint uStack_94;
  uint uStack_90;
  char local_8c;
  undefined1 local_8a;
  undefined1 local_89;
  ulong local_88;
  uint local_80;
  int local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x100008);
  iVar4 = FUN_1003f16c4(param_1,&local_144,0x5c);
  if (iVar4 != -0x80) {
    if (iVar4 == 0) {
      if (*(char *)(param_1 + 0x100127) != '\0') {
        local_144 = local_144 >> 0x18 | (local_144 & 0xff0000) >> 8 | (local_144 & 0xff00) << 8 |
                    local_144 << 0x18;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = local_140;
        auVar12 = pshufb(auVar12,_DAT_10070e4b0);
        local_140 = auVar12._0_8_;
      }
      if (local_144 == 0x696c686d) {
        if (local_140._4_4_ != 0) {
          local_e8 = lVar1 + 0x24d0;
          local_e0 = lVar1 + 0x1cb0;
          uVar10 = 0;
          do {
            local_d8 = 0;
            iVar4 = FUN_1003f16c4(param_1,&local_a8,0x50);
            uVar11 = uStack_94;
            uVar2 = uStack_98;
            if (iVar4 != 0) {
              if (iVar4 == -0x80) goto LAB_1003fac17;
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 == '\0') goto LAB_1003fac17;
              piVar9 = &local_c8;
              local_c8 = 0x8220202;
              local_c4 = "Assertion failure";
              local_bc = 0x400;
              uStack_ba = (undefined2)iVar4;
              uStack_b8 = (undefined2)((uint)iVar4 >> 0x10);
              goto LAB_1003fabd6;
            }
            if (*(char *)(param_1 + 0x100127) != '\0') {
              auVar13._12_2_ = uStack_9c;
              auVar13._8_4_ = uStack_a0;
              auVar13._14_2_ = uStack_9a;
              auVar13._4_4_ = uStack_a4;
              auVar13._0_4_ = local_a8;
              auVar12 = pshufb(auVar13,_DAT_100718a70);
              local_a8 = auVar12._0_4_;
              uStack_a4 = auVar12._4_4_;
              uStack_a0 = auVar12._8_4_;
              uStack_9c = auVar12._12_2_;
              uStack_9a = auVar12._14_2_;
              iVar4 = CONCAT22(uStack_96,uStack_98);
              uStack_98 = uStack_96 >> 8 | uStack_96 << 8;
              uStack_96 = uVar2 >> 8 | (ushort)((uint)(iVar4 << 0x18) >> 0x10);
              lVar8 = CONCAT44(uStack_90,uStack_94);
              uStack_94 = uStack_90 >> 0x18 | uStack_90 >> 8 & 0xff00 | (uStack_90 & 0xff00) << 8 |
                          uStack_90 << 0x18;
              uStack_90 = uVar11 >> 0x18 | uVar11 >> 8 & 0xff00 |
                          (uint)((((ulong)uVar11 & 0xff00) << 0x28) >> 0x20) |
                          (uint)((ulong)(lVar8 << 0x38) >> 0x20);
              local_88 = local_88 >> 0x38 | (local_88 & 0xff000000000000) >> 0x28 |
                         (local_88 & 0xff0000000000) >> 0x18 | (local_88 & 0xff00000000) >> 8 |
                         (local_88 & 0xff000000) << 8 | (local_88 & 0xff0000) << 0x18 |
                         (local_88 & 0xff00) << 0x28 | local_88 << 0x38;
              local_80 = local_80 >> 0x18 | (local_80 & 0xff0000) >> 8 | (local_80 & 0xff00) << 8 |
                         local_80 << 0x18;
            }
            if (local_a8 != 0x6969686d) {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 == '\0') goto LAB_1003fac08;
              piVar9 = &local_c8;
              local_c8 = 0x8220202;
              local_c4 = "Assertion failure";
              local_bc = 0x822;
              pcVar6 = "dbArtistInfo.magic == kDDBArtistInfoMagic";
              goto LAB_1003fad77;
            }
            local_d0 = 0;
            local_cc = 0;
            if (CONCAT22(uStack_9a,uStack_9c) != 0) {
              uVar11 = 0;
              do {
                iVar4 = FUN_1004002e0(param_1,&local_c8);
                if (iVar4 != 0) {
                  if (iVar4 == -0x80) goto LAB_1003fac17;
                  uVar5 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar3 == '\0') goto LAB_1003fac17;
                  piVar9 = &local_58;
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                  goto LAB_1003fabd6;
                }
                if (CONCAT22(uStack_ba,local_bc) == 0x12d) {
                  if (local_8c != '\x02') {
                    uVar5 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar3 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x822;
                      local_4a = "dbArtistInfo.artistInfoKind == kArtistInfoKind_Other";
                      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                  puVar7 = &local_cc;
                  lVar8 = local_e8;
LAB_1003faa03:
                  iVar4 = FUN_100400583(param_1,1,lVar8,puVar7);
                }
                else {
                  if (CONCAT22(uStack_ba,local_bc) == 300) {
                    if (local_8c != '\x02') {
                      uVar5 = FUN_1001cc310();
                      cVar3 = _os_log_type_enabled(uVar5,0x10);
                      if (cVar3 != '\0') {
                        local_58 = 0x8220202;
                        local_54 = "Assertion failure";
                        local_4c = 0x822;
                        local_4a = "dbArtistInfo.artistInfoKind == kArtistInfoKind_Other";
                        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",
                                            &local_58,0x16);
                      }
                      FUN_1001782e9(0,0);
                    }
                    puVar7 = &local_d0;
                    lVar8 = local_e0;
                    goto LAB_1003faa03;
                  }
                  iVar4 = FUN_100160dce(*(undefined8 *)(param_1 + 0x100000),
                                        local_c4._4_4_ - (int)local_c4);
                }
                if (iVar4 != 0) {
                  if (iVar4 == -0x80) goto LAB_1003fac17;
                  uVar5 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar3 == '\0') goto LAB_1003fac17;
                  piVar9 = &local_58;
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                  goto LAB_1003fabd6;
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < CONCAT22(uStack_9a,uStack_9c));
            }
            if (local_8c == '\x02') {
              iVar4 = FUN_1005e3ab6(lVar1,local_d0,local_cc,CONCAT44(uStack_90,uStack_94),0,0,
                                    &local_d8);
              if (iVar4 != 0) {
                if (iVar4 == -0x80) goto LAB_1003fac17;
                uVar5 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar5,0x10);
                if (cVar3 == '\0') goto LAB_1003fac17;
                piVar9 = &local_c8;
                local_c8 = 0x8220202;
                local_c4 = "Assertion failure";
                local_bc = 0x400;
                uStack_ba = (undefined2)iVar4;
                uStack_b8 = (undefined2)((uint)iVar4 >> 0x10);
                goto LAB_1003fabd6;
              }
              if (CONCAT22(uStack_96,uStack_98) != 0) {
                FUN_100401106(*(undefined8 *)(param_1 + 0x100158),CONCAT22(uStack_96,uStack_98),
                              local_d8);
              }
              FUN_1005e5f8e(local_d8,local_8a,local_80);
              *(undefined1 *)(local_d8 + 0x89) = local_89;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < local_140._4_4_);
        }
        *(undefined1 *)(param_1 + 0x100145) = 1;
        iVar4 = 0;
      }
      else {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          piVar9 = &local_a8;
          local_a8 = 0x8220202;
          uStack_a4 = 0x7a0a90;
          uStack_a0 = 1;
          uStack_9c = 0x822;
          pcVar6 = "header.magic == kDDBArtistListHeaderMagic";
LAB_1003fad77:
          *(char **)((long)piVar9 + 0xe) = pcVar6;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",piVar9,0x16);
        }
LAB_1003fac08:
        FUN_1001782e9(0,0);
        iVar4 = -0xd0;
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        piVar9 = &local_a8;
        local_a8 = 0x8220202;
        uStack_a4 = 0x7a0a90;
        uStack_a0 = 1;
        uStack_9c = 0x400;
        uStack_9a = (undefined2)iVar4;
        uStack_98 = (ushort)((uint)iVar4 >> 0x10);
LAB_1003fabd6:
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",piVar9,0x12);
      }
    }
  }
LAB_1003fac17:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

