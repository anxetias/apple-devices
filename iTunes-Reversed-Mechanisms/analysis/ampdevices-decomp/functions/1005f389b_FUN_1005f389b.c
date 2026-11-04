// name: FUN_1005f389b
// address: 1005f389b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005f389b(float param_1,float param_2,float *param_3,char param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  undefined8 uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  float fVar20;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (float *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "soundEnhancer != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1005f3cf8;
  }
  param_3[0x28] = param_2;
  uVar4 = CONCAT44(_DAT_100700430 ^ (uint)(DAT_10075e240 * param_2),DAT_10075e240 * param_2);
  *(undefined8 *)(param_3 + 0x20) = uVar4;
  *(undefined8 *)(param_3 + 0x22) = uVar4;
  uVar4 = _UNK_10075e238;
  *(undefined8 *)(param_3 + 0x24) = _DAT_10075e230;
  *(undefined8 *)(param_3 + 0x26) = uVar4;
  fVar5 = 0.0;
  if ((param_2 != 0.0) || (NAN(param_2))) {
    dVar6 = DAT_10075e248 * (double)param_1;
    auVar9._0_8_ = (double)(_DAT_100700b30 & (ulong)dVar6 | _DAT_1007563e0) + dVar6;
    auVar9._8_8_ = _UNK_1007563e8;
    auVar9 = roundsd(ZEXT816(0),auVar9,0xb);
    fVar5 = (float)auVar9._0_8_;
    dVar6 = DAT_10075e250;
    if ((fVar5 <= DAT_100718a98) && (dVar6 = DAT_10075e258, DAT_10075e244 <= fVar5)) {
      dVar6 = (double)fVar5;
    }
    dVar7 = (double)___exp10((_DAT_10075e260 * (double)param_2) / DAT_100700ae8);
    if (DAT_100701ae0 <= dVar7) {
      dVar15 = dVar7 * dVar7;
LAB_1005f3a17:
      dVar15 = dVar15 * DAT_100700b00;
    }
    else {
      dVar15 = dVar7 * dVar7;
      if (DAT_100700b00 < dVar7) {
        dVar15 = dVar15 + DAT_100700458;
        goto LAB_1005f3a17;
      }
      dVar15 = dVar15 + dVar15;
    }
    dVar16 = (double)param_1 * DAT_100700b00;
    dVar15 = SQRT(dVar15) * SQRT(dVar15);
    dVar15 = (double)((ulong)((DAT_100700af8 + dVar15) / (dVar7 * dVar7 - dVar15)) & _DAT_100700b40)
    ;
    dVar6 = (double)_tan((dVar6 / dVar16) * DAT_100700b18 * DAT_100700b00);
    dVar6 = (DAT_100700458 / dVar6) * SQRT(dVar15);
    dVar15 = DAT_100700458 - dVar7 * dVar6;
    dVar19 = dVar7 * dVar6 + DAT_100700458;
    dVar18 = DAT_100700458 - dVar6;
    dVar6 = dVar6 + DAT_100700458;
    dVar7 = (double)___exp10(((double)param_2 * _DAT_100747c98) / DAT_100700ae8);
    if (DAT_100701ae0 <= dVar7) {
      dVar8 = dVar7 * dVar7;
LAB_1005f3b33:
      dVar8 = dVar8 * DAT_100700b00;
    }
    else {
      dVar8 = dVar7 * dVar7;
      if (DAT_100700b00 < dVar7) {
        dVar8 = dVar8 + DAT_100700458;
        goto LAB_1005f3b33;
      }
      dVar8 = dVar8 + dVar8;
    }
    fVar11 = (float)(dVar15 / dVar6);
    fVar5 = (float)(dVar18 / dVar6);
    dVar18 = (DAT_100744e18 / dVar16) * DAT_100700b18;
    dVar15 = (double)_tan((DAT_10070e580 / dVar16) * DAT_100700b18 * DAT_100700b00);
    dVar16 = SQRT(dVar8) * SQRT(dVar8);
    dVar15 = (SQRT((double)((ulong)(DAT_100700af8 + dVar16) & _DAT_100700b40)) * dVar15) /
             SQRT((double)((ulong)(dVar7 * dVar7 - dVar16) & _DAT_100700b40));
    dVar8 = dVar7 * dVar15 + DAT_100700458;
    dVar16 = dVar15 + DAT_100700458;
    dVar18 = (double)_cos(dVar18);
    auVar10._0_8_ = dVar18 * _DAT_10071c708;
    auVar10._8_8_ = DAT_100700458 - dVar7 * dVar15;
    uVar14 = (undefined4)((ulong)dVar16 >> 0x20);
    auVar1._8_4_ = SUB84(dVar16,0);
    auVar1._0_8_ = dVar16;
    auVar1._12_4_ = uVar14;
    auVar9 = divpd(auVar10,auVar1);
    uVar4 = CONCAT44((float)auVar9._8_8_,(float)auVar9._0_8_);
    auVar17._0_8_ = DAT_100700458 - dVar15;
    auVar17._8_8_ = dVar8;
    auVar2._8_4_ = SUB84(dVar16,0);
    auVar2._0_8_ = dVar16;
    auVar2._12_4_ = uVar14;
    auVar9 = divpd(auVar17,auVar2);
    fVar12 = (float)auVar9._0_8_;
    fVar13 = (float)auVar9._8_8_;
    fVar20 = (float)(dVar19 / dVar6);
  }
  else {
    fVar12 = (float)DAT_1007114e0;
    fVar13 = (float)((ulong)DAT_1007114e0 >> 0x20);
    uVar4 = 0;
    fVar11 = 0.0;
    fVar20 = DAT_100700b50;
  }
  param_3[0xc] = fVar20;
  param_3[0xd] = 0.0;
  param_3[0xe] = fVar20;
  param_3[0xf] = 0.0;
  param_3[0x10] = fVar11;
  param_3[0x11] = 0.0;
  param_3[0x12] = fVar11;
  param_3[0x13] = 0.0;
  param_3[0x14] = fVar5;
  param_3[0x15] = 0.0;
  param_3[0x16] = fVar5;
  param_3[0x17] = 0.0;
  *param_3 = fVar13;
  param_3[1] = 0.0;
  param_3[2] = fVar13;
  param_3[3] = 0.0;
  *(undefined8 *)(param_3 + 4) = uVar4;
  *(undefined8 *)(param_3 + 6) = uVar4;
  param_3[8] = (float)uVar4;
  param_3[9] = fVar12;
  param_3[10] = (float)uVar4;
  param_3[0xb] = fVar12;
  *(bool *)(param_3 + 0x29) = param_4 != '\0';
LAB_1005f3cf8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

