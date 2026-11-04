// name: FUN_10038f413
// address: 10038f413

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10038f413(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char local_190 [80];
  undefined1 local_140 [72];
  ulong local_f8;
  long *local_f0;
  int local_e8;
  undefined4 local_e4;
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
  int local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  iVar4 = FUN_10017d477(param_1,local_190,0);
  if (iVar4 == -0x80) goto LAB_10038f4c7;
  if (iVar4 != 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 == '\0') goto LAB_10038f4c7;
    uStack_da = (undefined2)iVar4;
    uStack_d8 = (undefined2)((uint)iVar4 >> 0x10);
    goto LAB_10038f67a;
  }
  if (local_190[0] != '\0') {
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
    goto LAB_10038f4c7;
  }
  lVar6 = FUN_100495500(0);
  if (lVar6 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_e8 = 0x8220202;
      local_e4 = 0x7a0a90;
      uStack_e0 = 1;
      uStack_dc = 0x822;
      uStack_da = 0x648e;
      uStack_d8 = 0x7b;
      uStack_d6 = 1;
      uStack_d4 = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_e8,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x6c;
    goto LAB_10038f4c7;
  }
  iVar4 = FUN_100388024(lVar6,&local_f0);
  if (iVar4 == 0) {
    iVar4 = FUN_10015ff27(param_1,local_140,0x20000);
    if (iVar4 == -0x80) goto LAB_10038f4c7;
    if (iVar4 == 0) {
      *local_f0 = (long)local_140;
      iVar4 = FUN_100160c3f(local_140,&local_f8);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          iVar4 = FUN_10038815d(local_f0,&local_e8,0x84);
          uVar2 = uStack_d4;
          if (iVar4 != -0x80) {
            if (iVar4 == 0) {
              iVar4 = -0xd0;
              if (local_e8 == 0x6d686664) {
                *(undefined1 *)((long)local_f0 + 0x15) = 1;
                local_e8 = 0x6466686d;
                auVar8._4_4_ = uStack_e0;
                auVar8._0_4_ = local_e4;
                auVar8._8_2_ = uStack_dc;
                auVar8._10_2_ = uStack_da;
                auVar8._12_2_ = uStack_d8;
                auVar8._14_2_ = uStack_d6;
                auVar8 = pshufb(auVar8,_DAT_100718a70);
                local_e4 = auVar8._0_4_;
                uStack_e0 = auVar8._4_4_;
                uStack_dc = auVar8._8_2_;
                uStack_da = auVar8._10_2_;
                uStack_d8 = auVar8._12_2_;
                uStack_d6 = auVar8._14_2_;
                iVar1 = CONCAT22(uStack_d2,uStack_d4);
                uStack_d4 = uStack_d2 >> 8 | uStack_d2 << 8;
                uStack_d2 = uVar2 >> 8 | (ushort)((uint)(iVar1 << 0x18) >> 0x10);
                local_cc = local_cc >> 0x18 | (local_cc & 0xff0000) >> 8 | (local_cc & 0xff00) << 8
                           | local_cc << 0x18;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = local_b4;
                auVar8 = pshufb(auVar9,_DAT_100718a70);
                local_b4 = auVar8._0_8_;
                local_ac = pshufb(local_ac,_DAT_100711fe0);
                local_9c = local_9c << 8 | local_9c >> 8;
              }
              else {
                if (local_e8 != 0x6466686d) goto LAB_10038f92b;
                *(undefined1 *)((long)local_f0 + 0x15) = 0;
              }
              if (local_f8 == uStack_e0) {
                if (CONCAT22(uStack_da,uStack_dc) == 0) {
                  if (CONCAT22(uStack_d2,uStack_d4) != 0) {
                    if (param_2 != (undefined8 *)0x0) {
                      *param_2 = local_ac._0_8_;
                    }
                    iVar4 = 0;
                    if (param_3 != (undefined8 *)0x0) {
                      *param_3 = local_ac._8_8_;
                    }
                    goto LAB_10038f92b;
                  }
                  uVar5 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar3 != '\0') {
                    local_4a = "fileHeader.numSections != 0";
                    goto LAB_10038fa35;
                  }
                }
                else {
                  uVar5 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar3 != '\0') {
                    local_4a = "fileHeader.majorVersion <= kCurrentITImageDBMajorVersion";
LAB_10038fa35:
                    local_4c = 0x822;
                    local_54 = "Assertion failure";
                    local_58 = 0x8220202;
                    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                }
                FUN_1001782e9(0,0);
              }
              else {
                uVar5 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar5,0x10);
                if (cVar3 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "fileHeader.fileSize == fileSize";
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                iVar4 = -0x27;
              }
            }
            else {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                piVar7 = &local_58;
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                goto LAB_10038f828;
              }
            }
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            piVar7 = &local_e8;
            local_e8 = 0x8220202;
            local_e4 = 0x7a0a90;
            uStack_e0 = 1;
            uStack_dc = 0x400;
            uStack_da = (undefined2)iVar4;
            uStack_d8 = (undefined2)((uint)iVar4 >> 0x10);
LAB_10038f828:
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",piVar7,0x12);
          }
        }
      }
LAB_10038f92b:
      FUN_10016013b(local_140);
      *local_f0 = 0;
      FUN_10038a886(local_f0);
      FUN_100495a1c(lVar6);
      goto LAB_10038f4c7;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 == '\0') goto LAB_10038f4c7;
    uStack_da = (undefined2)iVar4;
    uStack_d8 = (undefined2)((uint)iVar4 >> 0x10);
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 == '\0') goto LAB_10038f4c7;
    uStack_da = (undefined2)iVar4;
    uStack_d8 = (undefined2)((uint)iVar4 >> 0x10);
  }
LAB_10038f67a:
  uStack_e0 = 1;
  local_e4 = 0x7a0a90;
  uStack_dc = 0x400;
  local_e8 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_e8,0x12);
LAB_10038f4c7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

