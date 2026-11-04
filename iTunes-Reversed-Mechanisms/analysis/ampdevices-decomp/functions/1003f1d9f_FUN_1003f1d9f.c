// name: FUN_1003f1d9f
// address: 1003f1d9f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003f1d9f(long param_1,long *param_2)

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
  uint local_12c;
  undefined8 local_128;
  ulong local_d0;
  int local_c8;
  char *local_c4;
  undefined2 local_bc;
  int local_ba;
  int local_a8;
  undefined8 local_a4;
  undefined2 local_9c;
  undefined2 uStack_9a;
  undefined2 uStack_98;
  int local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  ushort uStack_78;
  ushort uStack_76;
  ulong uStack_74;
  ulong local_68;
  uint local_60;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_1003f16c4(param_1,&local_12c,0x5c);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      if (*(char *)(param_1 + 0x100127) != '\0') {
        local_12c = local_12c >> 0x18 | (local_12c & 0xff0000) >> 8 | (local_12c & 0xff00) << 8 |
                    local_12c << 0x18;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = local_128;
        auVar10 = pshufb(auVar10,_DAT_10070e4b0);
        local_128 = auVar10._0_8_;
      }
      if (local_12c == 0x696c686d) {
        iVar3 = (**(code **)(*param_2 + 0x28))(param_2,0x696c686d,&local_12c,0x5c,0);
        if (iVar3 == 0) {
          if (local_128._4_4_ != 0) {
            uVar8 = 0;
            do {
              iVar3 = FUN_1003f16c4(param_1,&local_88,0x50);
              uVar1 = uStack_78;
              if (iVar3 != 0) {
                if (iVar3 == -0x80) goto LAB_1003f206b;
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 == '\0') goto LAB_1003f206b;
                piVar6 = &local_a8;
                local_a8 = 0x8220202;
                local_a4 = "Assertion failure";
                local_9c = 0x400;
                uStack_9a = (undefined2)iVar3;
                uStack_98 = (undefined2)((uint)iVar3 >> 0x10);
                goto LAB_1003f202b;
              }
              if (*(char *)(param_1 + 0x100127) != '\0') {
                auVar11._12_2_ = uStack_7c;
                auVar11._8_4_ = uStack_80;
                auVar11._14_2_ = uStack_7a;
                auVar11._4_4_ = uStack_84;
                auVar11._0_4_ = local_88;
                auVar10 = pshufb(auVar11,_DAT_100718a70);
                local_88 = auVar10._0_4_;
                uStack_84 = auVar10._4_4_;
                uStack_80 = auVar10._8_4_;
                uStack_7c = auVar10._12_2_;
                uStack_7a = auVar10._14_2_;
                iVar3 = CONCAT22(uStack_76,uStack_78);
                uStack_78 = uStack_76 >> 8 | uStack_76 << 8;
                uStack_76 = uVar1 >> 8 | (ushort)((uint)(iVar3 << 0x18) >> 0x10);
                uStack_74 = uStack_74 >> 0x38 | (uStack_74 & 0xff000000000000) >> 0x28 |
                            (uStack_74 & 0xff0000000000) >> 0x18 | (uStack_74 & 0xff00000000) >> 8 |
                            (uStack_74 & 0xff000000) << 8 | (uStack_74 & 0xff0000) << 0x18 |
                            (uStack_74 & 0xff00) << 0x28 | uStack_74 << 0x38;
                local_68 = local_68 >> 0x38 | (local_68 & 0xff000000000000) >> 0x28 |
                           (local_68 & 0xff0000000000) >> 0x18 | (local_68 & 0xff00000000) >> 8 |
                           (local_68 & 0xff000000) << 8 | (local_68 & 0xff0000) << 0x18 |
                           (local_68 & 0xff00) << 0x28 | local_68 << 0x38;
                local_60 = local_60 >> 0x18 | (local_60 & 0xff0000) >> 8 | (local_60 & 0xff00) << 8
                           | local_60 << 0x18;
              }
              if (local_88 != 0x6969686d) {
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 == '\0') goto LAB_1003f205d;
                piVar6 = &local_a8;
                local_a8 = 0x8220202;
                local_a4 = "Assertion failure";
                local_9c = 0x822;
                pcVar5 = "dbArtistInfo.magic == kDDBArtistInfoMagic";
                goto LAB_1003f216d;
              }
              iVar3 = (**(code **)(*param_2 + 0x28))(param_2,0x6969686d,&local_88,0x50,uVar8);
              if (iVar3 != 0) goto LAB_1003f206b;
              local_d0 = uVar8;
              if (CONCAT22(uStack_7a,uStack_7c) != 0) {
                uVar7 = 0;
                do {
                  iVar3 = FUN_1004002e0(param_1,&local_a8);
                  if (iVar3 != 0) {
                    if (iVar3 == -0x80) goto LAB_1003f206b;
                    uVar4 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar2 == '\0') goto LAB_1003f206b;
                    piVar6 = &local_c8;
                    local_c8 = 0x8220202;
                    local_c4 = "Assertion failure";
                    local_bc = 0x400;
                    local_ba = iVar3;
                    goto LAB_1003f202b;
                  }
                  iVar9 = local_a4._4_4_ - (int)local_a4;
                  iVar3 = FUN_1003f0368(param_1,param_1,iVar9);
                  if (iVar3 != 0) {
                    if (iVar3 == -0x80) goto LAB_1003f206b;
                    uVar4 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar2 == '\0') goto LAB_1003f206b;
                    piVar6 = &local_c8;
                    local_c8 = 0x8220202;
                    local_c4 = "Assertion failure";
                    local_bc = 0x400;
                    local_ba = iVar3;
                    goto LAB_1003f202b;
                  }
                  iVar3 = (**(code **)(*param_2 + 0x28))
                                    (param_2,CONCAT22(uStack_9a,local_9c),param_1,iVar9,0);
                  if (iVar3 != 0) goto LAB_1003f206b;
                  uVar7 = uVar7 + 1;
                } while (uVar7 < CONCAT22(uStack_7a,uStack_7c));
              }
              iVar9 = (int)local_d0;
              iVar3 = (**(code **)(*param_2 + 0x28))(param_2,0x6969686d,0,0,local_d0 & 0xffffffff);
              if (iVar3 != 0) goto LAB_1003f206b;
              iVar3 = FUN_1001ceb24(*(undefined8 *)(param_1 + 0x100168),0x7570726d,0,
                                    0xffffffffffffffff,0);
              if (iVar3 != 0) break;
              uVar7 = iVar9 + 1;
              uVar8 = (ulong)uVar7;
            } while (uVar7 < local_128._4_4_);
          }
          *(undefined1 *)(param_1 + 0x100145) = 1;
          iVar3 = (**(code **)(*param_2 + 0x28))(param_2,local_12c,0,0,0);
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          piVar6 = &local_88;
          local_88 = 0x8220202;
          uStack_84 = 0x7a0a90;
          uStack_80 = 1;
          uStack_7c = 0x822;
          pcVar5 = "header.magic == kDDBArtistListHeaderMagic";
LAB_1003f216d:
          *(char **)((long)piVar6 + 0xe) = pcVar5;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",piVar6,0x16);
        }
LAB_1003f205d:
        FUN_1001782e9(0,0);
        iVar3 = -0xd0;
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        piVar6 = &local_88;
        local_88 = 0x8220202;
        uStack_84 = 0x7a0a90;
        uStack_80 = 1;
        uStack_7c = 0x400;
        uStack_7a = (undefined2)iVar3;
        uStack_78 = (ushort)((uint)iVar3 >> 0x10);
LAB_1003f202b:
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",piVar6,0x12);
      }
    }
  }
LAB_1003f206b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

