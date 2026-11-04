// name: FUN_1005f356f
// address: 1005f356f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005f356f(float *param_1,long param_2,long param_3,int param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  char cVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar14;
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  float fVar17;
  undefined1 auVar16 [16];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  uVar9 = _UNK_10070043c;
  fVar8 = _UNK_100700438;
  uVar7 = _UNK_100700434;
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == 0 || param_1 == (float *)0x0) || param_3 == 0) {
    uVar11 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar11,0x10);
    if (cVar10 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "(soundEnhancer != nullptr && input != nullptr && output != nullptr)";
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (param_5 < 3) {
    if (param_4 != 0) {
      fVar1 = *param_1;
      fVar2 = param_1[4];
      fVar3 = param_1[5];
      fVar4 = param_1[0xc];
      fVar5 = param_1[0x10];
      fVar18 = param_1[0x1a];
      fVar14 = param_1[0x1b];
      auVar15 = ZEXT416((uint)param_1[0x1c]);
      fVar26 = param_1[0x1e];
      fVar6 = param_1[0x24];
      if (param_5 == 2) {
        auVar15 = insertps(auVar15,ZEXT416((uint)fVar26),0x10);
        auVar20 = insertps(ZEXT416((uint)param_1[0x19]),ZEXT416((uint)fVar14),0x10);
        auVar13 = insertps(ZEXT416((uint)param_1[0x18]),ZEXT416((uint)fVar18),0x10);
        fVar22 = (float)((uint)param_1[9] ^ _DAT_100700430);
        fVar23 = (float)((uint)param_1[8] ^ _DAT_100700430);
        fVar24 = (float)((uint)param_1[0x14] ^ _DAT_100700430);
        auVar19._4_4_ = _UNK_100700434;
        auVar19._0_4_ = _DAT_100700430 ^ (uint)(param_1[0x28] * DAT_10075e240);
        auVar19._8_4_ = _UNK_100700438;
        auVar19._12_4_ = _UNK_10070043c;
        auVar19 = insertps(ZEXT416((uint)(param_1[0x28] * DAT_10075e240)),auVar19,0x10);
        lVar12 = 0;
        do {
          auVar21 = auVar13;
          fVar14 = auVar21._4_4_;
          fVar18 = auVar15._0_4_;
          fVar26 = auVar15._4_4_;
          fVar25 = auVar15._8_4_;
          fVar17 = auVar15._12_4_;
          uVar11 = *(undefined8 *)(param_2 + lVar12 * 8);
          auVar13._0_4_ = fVar23 * auVar21._0_4_ + fVar22 * auVar20._0_4_ + (float)uVar11;
          auVar13._4_4_ = fVar23 * fVar14 + fVar22 * auVar20._4_4_ + (float)((ulong)uVar11 >> 0x20);
          auVar13._8_4_ = fVar8 * auVar21._8_4_ + fVar8 * auVar20._8_4_ + 0.0;
          auVar13._12_4_ = fVar8 * auVar21._12_4_ + fVar8 * auVar20._12_4_ + 0.0;
          auVar15._0_4_ =
               fVar24 * fVar18 +
               auVar20._0_4_ * fVar3 + fVar2 * auVar21._0_4_ + fVar1 * auVar13._0_4_;
          auVar15._4_4_ =
               fVar24 * fVar26 + auVar20._4_4_ * fVar3 + fVar2 * fVar14 + fVar1 * auVar13._4_4_;
          auVar15._8_4_ =
               fVar8 * fVar25 + auVar20._8_4_ * 0.0 + auVar21._8_4_ * 0.0 + auVar13._8_4_ * 0.0;
          auVar15._12_4_ =
               fVar8 * fVar17 + auVar20._12_4_ * 0.0 + auVar21._12_4_ * 0.0 + auVar13._12_4_ * 0.0;
          fVar25 = fVar18 * fVar5 + fVar4 * auVar15._0_4_;
          fVar26 = fVar26 * fVar5 + fVar4 * auVar15._4_4_;
          fVar18 = fVar25 - fVar26;
          *(ulong *)(param_3 + lVar12 * 8) =
               CONCAT44((fVar18 * auVar19._4_4_ + fVar26) * fVar6,
                        (fVar18 * auVar19._0_4_ + fVar25) * fVar6);
          lVar12 = lVar12 + 1;
          fVar18 = auVar13._4_4_;
          auVar20 = auVar21;
          fVar26 = auVar15._4_4_;
        } while (param_4 != (int)lVar12);
      }
      else {
        fVar22 = (float)((uint)param_1[9] ^ _DAT_100700430);
        fVar23 = (float)((uint)param_1[8] ^ _DAT_100700430);
        fVar24 = (float)((uint)param_1[0x14] ^ _DAT_100700430);
        lVar12 = 0;
        auVar13 = ZEXT416((uint)param_1[0x18]);
        auVar19 = ZEXT416((uint)param_1[0x19]);
        do {
          auVar21 = auVar13;
          fVar25 = auVar15._0_4_;
          auVar20._4_4_ = uVar7;
          auVar20._0_4_ = fVar23;
          auVar20._8_4_ = fVar8;
          auVar20._12_4_ = uVar9;
          auVar13._4_12_ = auVar20._4_12_;
          auVar13._0_4_ =
               fVar23 * auVar21._0_4_ + fVar22 * auVar19._0_4_ + *(float *)(param_2 + lVar12 * 4);
          auVar16._4_4_ = uVar7;
          auVar16._0_4_ = fVar24;
          auVar16._8_4_ = fVar8;
          auVar16._12_4_ = uVar9;
          auVar15._4_12_ = auVar16._4_12_;
          auVar15._0_4_ =
               fVar24 * fVar25 +
               auVar19._0_4_ * fVar3 + fVar2 * auVar21._0_4_ + fVar1 * auVar13._0_4_;
          *(float *)(param_3 + lVar12 * 4) = (fVar25 * fVar5 + fVar4 * auVar15._0_4_) * fVar6;
          lVar12 = lVar12 + 1;
          auVar19 = auVar21;
        } while (param_4 != (int)lVar12);
      }
      param_1[0x18] = auVar13._0_4_;
      param_1[0x19] = auVar21._0_4_;
      param_1[0x1a] = fVar18;
      param_1[0x1b] = fVar14;
      param_1[0x1c] = auVar15._0_4_;
      param_1[0x1e] = fVar26;
    }
  }
  else if (param_2 != param_3) {
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
      FUN_1001c631b(param_2,param_3,(ulong)(param_5 * param_4) << 2);
      return;
    }
    goto LAB_1005f3896;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
LAB_1005f3896:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

