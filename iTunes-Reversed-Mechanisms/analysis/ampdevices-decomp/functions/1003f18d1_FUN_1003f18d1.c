// name: FUN_1003f18d1
// address: 1003f18d1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003f18d1(long param_1,long *param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint local_13c;
  undefined8 local_138;
  ulong local_e0;
  int local_d8;
  char *local_d4;
  undefined2 local_cc;
  int local_ca;
  int local_b8;
  undefined8 local_b4;
  undefined2 local_ac;
  undefined2 uStack_aa;
  undefined2 uStack_a8;
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  ushort uStack_88;
  ushort uStack_86;
  ulong uStack_84;
  ulong local_78;
  ulong local_6c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_1003f16c4(param_1,&local_13c,0x5c);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      if (*(char *)(param_1 + 0x100127) != '\0') {
        local_13c = local_13c >> 0x18 | (local_13c & 0xff0000) >> 8 | (local_13c & 0xff00) << 8 |
                    local_13c << 0x18;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = local_138;
        auVar10 = pshufb(auVar10,_DAT_10070e4b0);
        local_138 = auVar10._0_8_;
      }
      if (local_13c == 0x616c686d) {
        iVar3 = (**(code **)(*param_2 + 0x20))(param_2,0x616c686d,&local_13c,0x5c,0);
        if (iVar3 == 0) {
          if (local_138._4_4_ != 0) {
            uVar8 = 0;
            do {
              iVar3 = FUN_1003f16c4(param_1,&local_98,0x58);
              uVar1 = uStack_88;
              if (iVar3 != 0) {
                if (iVar3 == -0x80) goto LAB_1003f1bc3;
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 == '\0') goto LAB_1003f1bc3;
                piVar6 = &local_b8;
                local_b8 = 0x8220202;
                local_b4 = "Assertion failure";
                local_ac = 0x400;
                uStack_aa = (undefined2)iVar3;
                uStack_a8 = (undefined2)((uint)iVar3 >> 0x10);
                goto LAB_1003f1b83;
              }
              if (*(char *)(param_1 + 0x100127) != '\0') {
                auVar12._12_2_ = uStack_8c;
                auVar12._8_4_ = uStack_90;
                auVar12._14_2_ = uStack_8a;
                auVar12._4_4_ = uStack_94;
                auVar12._0_4_ = local_98;
                auVar10 = pshufb(auVar12,_DAT_100718a70);
                local_98 = auVar10._0_4_;
                uStack_94 = auVar10._4_4_;
                uStack_90 = auVar10._8_4_;
                uStack_8c = auVar10._12_2_;
                uStack_8a = auVar10._14_2_;
                iVar3 = CONCAT22(uStack_86,uStack_88);
                uStack_88 = uStack_86 >> 8 | uStack_86 << 8;
                uStack_86 = uVar1 >> 8 | (ushort)((uint)(iVar3 << 0x18) >> 0x10);
                uStack_84 = uStack_84 >> 0x38 | (uStack_84 & 0xff000000000000) >> 0x28 |
                            (uStack_84 & 0xff0000000000) >> 0x18 | (uStack_84 & 0xff00000000) >> 8 |
                            (uStack_84 & 0xff000000) << 8 | (uStack_84 & 0xff0000) << 0x18 |
                            (uStack_84 & 0xff00) << 0x28 | uStack_84 << 0x38;
                local_78 = local_78 >> 0x38 | (local_78 & 0xff000000000000) >> 0x28 |
                           (local_78 & 0xff0000000000) >> 0x18 | (local_78 & 0xff00000000) >> 8 |
                           (local_78 & 0xff000000) << 8 | (local_78 & 0xff0000) << 0x18 |
                           (local_78 & 0xff00) << 0x28 | local_78 << 0x38;
                auVar11._8_8_ = 0;
                auVar11._0_8_ = local_6c;
                auVar10 = pshufb(auVar11,_DAT_100718a70);
                local_6c = auVar10._0_8_;
              }
              if (local_98 != 0x6169686d) {
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 == '\0') goto LAB_1003f1bb5;
                piVar6 = &local_b8;
                local_b8 = 0x8220202;
                local_b4 = "Assertion failure";
                local_ac = 0x822;
                pcVar5 = "dbAlbumInfo.magic == kDDBAlbumInfoMagic";
                goto LAB_1003f1cc8;
              }
              iVar3 = (**(code **)(*param_2 + 0x20))(param_2,0x6169686d,&local_98,0x58,uVar8);
              if (iVar3 != 0) goto LAB_1003f1bc3;
              local_e0 = uVar8;
              if (CONCAT22(uStack_8a,uStack_8c) != 0) {
                uVar7 = 0;
                do {
                  iVar3 = FUN_1004002e0(param_1,&local_b8);
                  if (iVar3 != 0) {
                    if (iVar3 == -0x80) goto LAB_1003f1bc3;
                    uVar4 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar2 == '\0') goto LAB_1003f1bc3;
                    piVar6 = &local_d8;
                    local_d8 = 0x8220202;
                    local_d4 = "Assertion failure";
                    local_cc = 0x400;
                    local_ca = iVar3;
                    goto LAB_1003f1b83;
                  }
                  iVar9 = local_b4._4_4_ - (int)local_b4;
                  iVar3 = FUN_1003f0368(param_1,param_1,iVar9);
                  if (iVar3 != 0) {
                    if (iVar3 == -0x80) goto LAB_1003f1bc3;
                    uVar4 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar2 == '\0') goto LAB_1003f1bc3;
                    piVar6 = &local_d8;
                    local_d8 = 0x8220202;
                    local_d4 = "Assertion failure";
                    local_cc = 0x400;
                    local_ca = iVar3;
                    goto LAB_1003f1b83;
                  }
                  iVar3 = (**(code **)(*param_2 + 0x20))
                                    (param_2,CONCAT22(uStack_aa,local_ac),param_1,iVar9,0);
                  if (iVar3 != 0) goto LAB_1003f1bc3;
                  uVar7 = uVar7 + 1;
                } while (uVar7 < CONCAT22(uStack_8a,uStack_8c));
              }
              iVar9 = (int)local_e0;
              iVar3 = (**(code **)(*param_2 + 0x20))(param_2,0x6169686d,0,0,local_e0 & 0xffffffff);
              if (iVar3 != 0) goto LAB_1003f1bc3;
              iVar3 = FUN_1001ceb24(*(undefined8 *)(param_1 + 0x100168),0x7570726d,0,
                                    0xffffffffffffffff,0);
              if (iVar3 != 0) break;
              uVar7 = iVar9 + 1;
              uVar8 = (ulong)uVar7;
            } while (uVar7 < local_138._4_4_);
          }
          *(undefined1 *)(param_1 + 0x100144) = 1;
          iVar3 = (**(code **)(*param_2 + 0x20))(param_2,local_13c,0,0,0);
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          piVar6 = &local_98;
          local_98 = 0x8220202;
          uStack_94 = 0x7a0a90;
          uStack_90 = 1;
          uStack_8c = 0x822;
          pcVar5 = "header.magic == kDDBAlbumListHeaderMagic";
LAB_1003f1cc8:
          *(char **)((long)piVar6 + 0xe) = pcVar5;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",piVar6,0x16);
        }
LAB_1003f1bb5:
        FUN_1001782e9(0,0);
        iVar3 = -0xd0;
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        piVar6 = &local_98;
        local_98 = 0x8220202;
        uStack_94 = 0x7a0a90;
        uStack_90 = 1;
        uStack_8c = 0x400;
        uStack_8a = (undefined2)iVar3;
        uStack_88 = (ushort)((uint)iVar3 >> 0x10);
LAB_1003f1b83:
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",piVar6,0x12);
      }
    }
  }
LAB_1003f1bc3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

