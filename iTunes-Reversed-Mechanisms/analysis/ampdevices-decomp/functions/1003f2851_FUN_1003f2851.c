// name: FUN_1003f2851
// address: 1003f2851

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003f2851(long param_1,long *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint local_1f4;
  undefined8 local_1f0;
  ulong local_198;
  uint local_190;
  undefined4 local_18c;
  int local_188;
  char *local_184;
  undefined2 local_17c;
  int local_17a;
  int local_168;
  undefined8 local_164;
  undefined2 local_15c;
  undefined2 uStack_15a;
  undefined2 uStack_158;
  int local_148;
  int iStack_144;
  int iStack_140;
  undefined2 uStack_13c;
  undefined2 uStack_13a;
  undefined2 uStack_138;
  undefined1 auStack_134 [16];
  undefined1 local_124 [16];
  uint local_110;
  ulong local_10c;
  int local_f8;
  char *local_f4;
  undefined2 local_ec;
  undefined2 uStack_ea;
  undefined2 local_e8;
  undefined2 uStack_e6;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1003f16c4(param_1,&local_1f4,0x5c);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0x100127) != '\0') {
        local_1f4 = local_1f4 >> 0x18 | (local_1f4 & 0xff0000) >> 8 | (local_1f4 & 0xff00) << 8 |
                    local_1f4 << 0x18;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = local_1f0;
        auVar9 = pshufb(auVar9,_DAT_10070e4b0);
        local_1f0 = auVar9._0_8_;
      }
      if (local_1f4 == 0x706c686d) {
        iVar2 = (**(code **)(*param_2 + 0x38))(param_2,0x706c686d,&local_1f4,0x5c,0,param_3);
        if (iVar2 == 0) {
          if (local_1f0._4_4_ != 0) {
            uVar8 = 0;
            local_18c = param_3;
            do {
              iVar2 = FUN_1003f16c4(param_1,&local_f8,0xb8);
              if (iVar2 != 0) {
                if (iVar2 == -0x80) goto LAB_1003f2cc0;
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 == '\0') goto LAB_1003f2cc0;
                piVar5 = &local_148;
                local_148 = 0x8220202;
                iStack_144 = 0x7a0a90;
                iStack_140 = 1;
                uStack_13c = 0x400;
                uStack_13a = (undefined2)iVar2;
                uStack_138 = (undefined2)((uint)iVar2 >> 0x10);
                goto LAB_1003f2c84;
              }
              if (*(char *)(param_1 + 0x100127) != '\0') {
                FUN_1003f8d18(&local_f8);
              }
              if (local_f8 != 0x7079686d) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 == '\0') goto LAB_1003f2cb2;
                piVar5 = &local_148;
                local_148 = 0x8220202;
                iStack_144 = 0x7a0a90;
                iStack_140 = 1;
                uStack_13c = 0x822;
                pcVar4 = "dbPlaylist.magic == kDDBPlaylistMagic";
                goto LAB_1003f2d0f;
              }
              iVar2 = (**(code **)(*param_2 + 0x38))
                                (param_2,0x7079686d,&local_f8,0xb8,uVar8,param_3);
              if (iVar2 != 0) break;
              local_198 = uVar8;
              if (CONCAT22(uStack_ea,local_ec) != 0) {
                uVar7 = 0;
                do {
                  iVar2 = FUN_1004002e0(param_1,&local_148);
                  if (iVar2 != 0) {
                    if (iVar2 == -0x80) goto LAB_1003f2cc0;
                    uVar3 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar3,0x10);
                    if (cVar1 == '\0') goto LAB_1003f2cc0;
                    piVar5 = &local_168;
                    local_168 = 0x8220202;
                    local_164 = "Assertion failure";
                    local_15c = 0x400;
                    uStack_15a = (undefined2)iVar2;
                    uStack_158 = (undefined2)((uint)iVar2 >> 0x10);
                    goto LAB_1003f2c84;
                  }
                  iVar6 = iStack_140 - iStack_144;
                  iVar2 = FUN_1003f0368(param_1,param_1,iVar6);
                  param_3 = local_18c;
                  if (iVar2 != 0) {
                    if (iVar2 == -0x80) goto LAB_1003f2cc0;
                    uVar3 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar3,0x10);
                    if (cVar1 == '\0') goto LAB_1003f2cc0;
                    piVar5 = &local_168;
                    local_168 = 0x8220202;
                    local_164 = "Assertion failure";
                    local_15c = 0x400;
                    uStack_15a = (undefined2)iVar2;
                    uStack_158 = (undefined2)((uint)iVar2 >> 0x10);
                    goto LAB_1003f2c84;
                  }
                  iVar2 = (**(code **)(*param_2 + 0x38))
                                    (param_2,CONCAT22(uStack_13a,uStack_13c),param_1,iVar6,0,
                                     local_18c);
                  if (iVar2 != 0) goto LAB_1003f2cc0;
                  uVar7 = uVar7 + 1;
                } while (uVar7 < CONCAT22(uStack_ea,local_ec));
              }
              if (CONCAT22(uStack_e6,local_e8) != 0) {
                uVar7 = 0;
                do {
                  iVar2 = FUN_1003f16c4(param_1,&local_148,0x4c);
                  if (iVar2 != 0) {
                    if (iVar2 == -0x80) goto LAB_1003f2cc0;
                    uVar3 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar3,0x10);
                    if (cVar1 == '\0') goto LAB_1003f2cc0;
                    piVar5 = &local_168;
                    local_168 = 0x8220202;
                    local_164 = "Assertion failure";
                    local_15c = 0x400;
                    uStack_15a = (undefined2)iVar2;
                    uStack_158 = (undefined2)((uint)iVar2 >> 0x10);
                    goto LAB_1003f2c84;
                  }
                  if (*(char *)(param_1 + 0x100127) != '\0') {
                    auVar10._4_4_ = iStack_144;
                    auVar10._0_4_ = local_148;
                    auVar10._12_2_ = uStack_13c;
                    auVar10._8_4_ = iStack_140;
                    auVar10._14_2_ = uStack_13a;
                    local_124 = pshufb(local_124,_DAT_100711fe0);
                    auVar9 = pshufb(auVar10,_DAT_100718a70);
                    local_148 = auVar9._0_4_;
                    iStack_144 = auVar9._4_4_;
                    iStack_140 = auVar9._8_4_;
                    uStack_13c = auVar9._12_2_;
                    uStack_13a = auVar9._14_2_;
                    auStack_134 = pshufb(auStack_134,_DAT_100718a70);
                    local_10c = local_10c >> 0x38 | (local_10c & 0xff000000000000) >> 0x28 |
                                (local_10c & 0xff0000000000) >> 0x18 |
                                (local_10c & 0xff00000000) >> 8 | (local_10c & 0xff000000) << 8 |
                                (local_10c & 0xff0000) << 0x18 | (local_10c & 0xff00) << 0x28 |
                                local_10c << 0x38;
                    local_110 = local_110 >> 0x18 | (local_110 & 0xff0000) >> 8 |
                                (local_110 & 0xff00) << 8 | local_110 << 0x18;
                  }
                  if (local_148 != 0x7069686d) {
                    uVar3 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar3,0x10);
                    if (cVar1 == '\0') goto LAB_1003f2cb2;
                    piVar5 = &local_168;
                    local_168 = 0x8220202;
                    local_164 = "Assertion failure";
                    local_15c = 0x822;
                    pcVar4 = "dbPlaylistItem.magic == kDDBPlaylistItemMagic";
                    goto LAB_1003f2d0f;
                  }
                  iVar2 = (**(code **)(*param_2 + 0x40))
                                    (param_2,0x7069686d,&local_148,0x4c,uVar7,param_3);
                  if (iVar2 != 0) goto LAB_1003f2cc0;
                  local_190 = uVar7;
                  if (CONCAT22(uStack_13a,uStack_13c) != 0) {
                    uVar7 = 0;
                    do {
                      iVar2 = FUN_1004002e0(param_1,&local_168);
                      if (iVar2 != 0) {
                        if (iVar2 == -0x80) goto LAB_1003f2cc0;
                        uVar3 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar3,0x10);
                        if (cVar1 == '\0') goto LAB_1003f2cc0;
                        piVar5 = &local_188;
                        local_188 = 0x8220202;
                        local_184 = "Assertion failure";
                        local_17c = 0x400;
                        local_17a = iVar2;
                        goto LAB_1003f2c84;
                      }
                      iVar6 = local_164._4_4_ - (int)local_164;
                      iVar2 = FUN_1003f0368(param_1,param_1,iVar6);
                      param_3 = local_18c;
                      if (iVar2 != 0) {
                        if (iVar2 == -0x80) goto LAB_1003f2cc0;
                        uVar3 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar3,0x10);
                        if (cVar1 == '\0') goto LAB_1003f2cc0;
                        piVar5 = &local_188;
                        local_188 = 0x8220202;
                        local_184 = "Assertion failure";
                        local_17c = 0x400;
                        local_17a = iVar2;
                        goto LAB_1003f2c84;
                      }
                      iVar2 = (**(code **)(*param_2 + 0x40))
                                        (param_2,CONCAT22(uStack_15a,local_15c),param_1,iVar6,0,
                                         local_18c);
                      if (iVar2 != 0) goto LAB_1003f2cc0;
                      uVar7 = uVar7 + 1;
                    } while (uVar7 < CONCAT22(uStack_13a,uStack_13c));
                  }
                  uVar7 = local_190;
                  iVar2 = (**(code **)(*param_2 + 0x40))(param_2,local_148,0,0,local_190,param_3);
                  if (iVar2 != 0) goto LAB_1003f2cc0;
                  uVar7 = uVar7 + 1;
                } while (uVar7 < CONCAT22(uStack_e6,local_e8));
              }
              iVar2 = (**(code **)(*param_2 + 0x38))(param_2,local_f8,0,0,0,param_3);
              if (iVar2 != 0) goto LAB_1003f2cc0;
              iVar2 = FUN_1001ceb24(*(undefined8 *)(param_1 + 0x100168),0x7570726d,0,
                                    0xffffffffffffffff,0);
              if (iVar2 != 0) break;
              uVar7 = (int)local_198 + 1;
              uVar8 = (ulong)uVar7;
            } while (uVar7 < local_1f0._4_4_);
          }
          iVar2 = (**(code **)(*param_2 + 0x38))(param_2,local_1f4,0,0,0,param_3);
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          piVar5 = &local_f8;
          local_f8 = 0x8220202;
          local_f4 = "Assertion failure";
          local_ec = 0x822;
          pcVar4 = "header.magic == kDDBPlaylistsListHeaderMagic";
LAB_1003f2d0f:
          *(char **)((long)piVar5 + 0xe) = pcVar4;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",piVar5,0x16);
        }
LAB_1003f2cb2:
        FUN_1001782e9(0,0);
        iVar2 = -0xd0;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        piVar5 = &local_f8;
        local_f8 = 0x8220202;
        local_f4 = "Assertion failure";
        local_ec = 0x400;
        uStack_ea = (undefined2)iVar2;
        local_e8 = (undefined2)((uint)iVar2 >> 0x10);
LAB_1003f2c84:
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",piVar5,0x12);
      }
    }
  }
LAB_1003f2cc0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

