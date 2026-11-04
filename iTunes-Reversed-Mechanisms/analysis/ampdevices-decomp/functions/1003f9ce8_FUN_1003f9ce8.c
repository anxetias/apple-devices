// name: FUN_1003f9ce8
// address: 1003f9ce8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003f9ce8(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint local_1c4;
  undefined8 local_1c0;
  undefined1 local_168 [16];
  uint uStack_158;
  ulong uStack_154;
  byte local_14c;
  char local_14b;
  ulong local_148;
  char local_140;
  char local_13f;
  undefined1 local_13e;
  undefined1 local_13d;
  undefined8 local_13c;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  uint local_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined2 local_dc;
  undefined2 uStack_da;
  undefined2 uStack_d8;
  undefined4 uStack_d6;
  uint local_c8 [3];
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined4 uStack_b6;
  undefined2 local_b0 [2];
  undefined1 local_ac;
  ulong local_a8;
  ulong local_a0;
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x100008);
  iVar3 = FUN_1003f16c4(param_1,&local_1c4,0x5c);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      if (*(char *)(param_1 + 0x100127) != '\0') {
        local_1c4 = local_1c4 >> 0x18 | (local_1c4 & 0xff0000) >> 8 | (local_1c4 & 0xff00) << 8 |
                    local_1c4 << 0x18;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = local_1c0;
        auVar10 = pshufb(auVar10,_DAT_10070e4b0);
        local_1c0 = auVar10._0_8_;
      }
      if (local_1c4 == 0x616c686d) {
        if (local_1c0._4_4_ == 0) {
          iVar3 = 0;
        }
        else {
          local_110 = lVar1 + 0x2070;
          local_f8 = lVar1 + 0x1cb0;
          local_108 = lVar1 + 0x1c60;
          uVar9 = 0;
          do {
            local_ec = uVar9;
            FUN_10027367c();
            iVar3 = FUN_1003f16c4(param_1,local_168,0x58);
            if (iVar3 != 0) {
              if (iVar3 != -0x80) {
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 != '\0') {
                  puVar8 = &local_e8;
                  local_e8 = 0x8220202;
                  local_e4 = "Assertion failure";
                  local_dc = 0x400;
                  uStack_da = (undefined2)iVar3;
                  uStack_d8 = (undefined2)((uint)iVar3 >> 0x10);
LAB_1003fa604:
                  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",puVar8,0x12);
                }
              }
LAB_1003fa695:
              FUN_1001b7a50(local_68);
              FUN_1001b7a50(local_78);
              FUN_1001b7a50(local_90);
              goto LAB_1003fa6b3;
            }
            if (*(char *)(param_1 + 0x100127) != '\0') {
              local_168 = pshufb(local_168,_DAT_100718a70);
              uStack_158 = uStack_158 >> 0x18 | (uStack_158 & 0xff0000) >> 8 |
                           (uStack_158 & 0xff00) << 8 | uStack_158 << 0x18;
              uStack_154 = uStack_154 >> 0x38 | (uStack_154 & 0xff000000000000) >> 0x28 |
                           (uStack_154 & 0xff0000000000) >> 0x18 | (uStack_154 & 0xff00000000) >> 8
                           | (uStack_154 & 0xff000000) << 8 | (uStack_154 & 0xff0000) << 0x18 |
                           (uStack_154 & 0xff00) << 0x28 | uStack_154 << 0x38;
              local_148 = local_148 >> 0x38 | (local_148 & 0xff000000000000) >> 0x28 |
                          (local_148 & 0xff0000000000) >> 0x18 | (local_148 & 0xff00000000) >> 8 |
                          (local_148 & 0xff000000) << 8 | (local_148 & 0xff0000) << 0x18 |
                          (local_148 & 0xff00) << 0x28 | local_148 << 0x38;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = local_13c;
              auVar10 = pshufb(auVar11,_DAT_100718a70);
              local_13c = auVar10._0_8_;
            }
            if (local_168._0_4_ != 0x6169686d) {
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                local_e8 = 0x8220202;
                local_e4 = "Assertion failure";
                local_dc = 0x822;
                uStack_da = 0xba1c;
                uStack_d8 = 0x7c;
                uStack_d6 = 1;
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_e8,0x16
                                   );
              }
              iVar3 = -0xd0;
              FUN_1001782e9(0,0);
              goto LAB_1003fa695;
            }
            if (local_168._12_4_ != 0) {
              uVar9 = 0;
              do {
                iVar3 = FUN_1004002e0(param_1,&local_e8);
                if (iVar3 != 0) {
                  if (iVar3 == -0x80) goto LAB_1003fa695;
                  uVar4 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar2 == '\0') goto LAB_1003fa695;
                  puVar8 = &local_58;
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                  goto LAB_1003fa604;
                }
                lVar7 = local_f8;
                switch(CONCAT22(uStack_da,local_dc)) {
                case 200:
                  if ((6 < local_14c) ||
                     (puVar5 = &uStack_b8, lVar7 = local_108, (0x6cU >> (local_14c & 0x1f) & 1) == 0
                     )) {
                    uVar4 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar2 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x822;
                      local_4a = 
                      "(dbAlbumInfo.albumKind == kAlbumKind_Other) || (dbAlbumInfo.albumKind == kAlbumKind_Podcast) || (dbAlbumInfo.albumKind == kAlbumKind_ObsoleteiTunesU) || (dbAlbumInfo.albumKind == kAlbumKind_ObsoleteApplication)"
                      ;
                      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                    puVar5 = &uStack_b8;
                    lVar7 = local_108;
                  }
                  break;
                case 0xc9:
                  puVar5 = (undefined2 *)((long)&uStack_b6 + 2);
                  if (local_14c != 2) {
                    uVar4 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar2 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x822;
                      local_4a = "dbAlbumInfo.albumKind == kAlbumKind_Other";
                      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                    puVar5 = (undefined2 *)((long)&uStack_b6 + 2);
                    lVar7 = local_f8;
                  }
                  break;
                case 0xca:
                  puVar5 = local_b0;
                  if (local_14c != 2) {
                    uVar4 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar2 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x822;
                      local_4a = "dbAlbumInfo.albumKind == kAlbumKind_Other";
                      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                    puVar5 = local_b0;
                    lVar7 = local_f8;
                  }
                  break;
                case 0xcb:
                  puVar6 = local_78;
                  if ((local_14c != 3) && (local_14c != 6)) {
                    uVar4 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar2 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x822;
                      local_4a = 
                      "(dbAlbumInfo.albumKind == kAlbumKind_Podcast) || (dbAlbumInfo.albumKind == kAlbumKind_ObsoleteiTunesU)"
                      ;
                      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                    puVar6 = local_78;
                  }
                  goto LAB_1003fa078;
                case 0xcc:
                  puVar5 = &uStack_b8;
                  lVar7 = local_110;
                  if (local_14c != 4) {
                    uVar4 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar2 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x822;
                      local_4a = "dbAlbumInfo.albumKind == kAlbumKind_TVShow";
                      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                    puVar5 = &uStack_b8;
                    lVar7 = local_110;
                  }
                  break;
                default:
                  iVar3 = FUN_100160dce(*(undefined8 *)(param_1 + 0x100000),
                                        local_e4._4_4_ - (int)local_e4);
                  goto LAB_1003fa0dc;
                case 0xce:
                  puVar6 = local_68;
                  if ((local_14c != 3) && (local_14c != 6)) {
                    uVar4 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar2 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x822;
                      local_4a = 
                      "(dbAlbumInfo.albumKind == kAlbumKind_Podcast) || (dbAlbumInfo.albumKind == kAlbumKind_ObsoleteiTunesU)"
                      ;
                      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                    puVar6 = local_68;
                  }
LAB_1003fa078:
                  iVar3 = FUN_100400ad6(param_1,0,puVar6);
                  goto LAB_1003fa0dc;
                }
                iVar3 = FUN_100400583(param_1,1,lVar7,puVar5);
LAB_1003fa0dc:
                if (iVar3 != 0) {
                  if (iVar3 == -0x80) goto LAB_1003fa695;
                  uVar4 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar2 == '\0') goto LAB_1003fa695;
                  puVar8 = &local_58;
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                  goto LAB_1003fa604;
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < (uint)local_168._12_4_);
            }
            local_c8[0] = (uint)local_14c;
            local_ac = local_14b != '\0';
            local_c8[2] = (uint)lVar1;
            uStack_bc = (undefined2)((ulong)lVar1 >> 0x20);
            uStack_ba = (undefined2)((ulong)lVar1 >> 0x30);
            local_a0 = local_148;
            local_80 = (undefined4)local_13c;
            local_a8 = uStack_154;
            iVar3 = FUN_10027373a(local_c8,&local_100);
            if (iVar3 == 0) {
              if (uStack_158 != 0) {
                FUN_100400456(*(undefined8 *)(param_1 + 0x100150),uStack_158,local_100);
              }
              if ((local_13f == '\0') && (local_140 != '\0')) {
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 != '\0') {
                  local_e8 = 0x8220202;
                  local_e4 = "Assertion failure";
                  local_dc = 0x822;
                  uStack_da = 0xbbd3;
                  uStack_d8 = 0x7c;
                  uStack_d6 = 1;
                  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_e8,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              FUN_1003a2ffa(local_100,local_13e,local_13c._4_4_);
              *(undefined1 *)(local_100 + 0xe7) = local_13d;
            }
            else if (iVar3 != 0x234e) {
              if (iVar3 != -0x80) {
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 != '\0') {
                  puVar8 = &local_e8;
                  local_e8 = 0x8220202;
                  local_e4 = "Assertion failure";
                  local_dc = 0x400;
                  uStack_da = (undefined2)iVar3;
                  uStack_d8 = (undefined2)((uint)iVar3 >> 0x10);
                  goto LAB_1003fa604;
                }
              }
              goto LAB_1003fa695;
            }
            uVar9 = local_ec;
            FUN_1001b7a50(local_68);
            FUN_1001b7a50(local_78);
            FUN_1001b7a50(local_90);
            uVar9 = uVar9 + 1;
          } while (uVar9 < local_1c0._4_4_);
        }
        *(undefined1 *)(param_1 + 0x100144) = 1;
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_c8[0] = 0x8220202;
          local_c8[1] = 0x7a0a90;
          local_c8[2] = 1;
          uStack_bc = 0x822;
          uStack_ba = 0xb9f3;
          uStack_b8 = 0x7c;
          uStack_b6 = 1;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_c8,0x16);
        }
        FUN_1001782e9(0,0);
        iVar3 = -0xd0;
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_c8[0] = 0x8220202;
        local_c8[1] = 0x7a0a90;
        local_c8[2] = 1;
        uStack_bc = 0x400;
        uStack_ba = (undefined2)iVar3;
        uStack_b8 = (undefined2)((uint)iVar3 >> 0x10);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_c8,0x12);
      }
    }
  }
LAB_1003fa6b3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

