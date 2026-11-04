// name: FUN_100285aa4
// address: 100285aa4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100285aa4(double param_1,double param_2,double param_3,float *param_4,float param_5,char param_6
             )

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == (float *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "filter != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
    goto LAB_100285c96;
  }
  param_4[0x10] = param_5;
  dVar5 = (param_1 / (param_2 * DAT_100700b00)) * DAT_100700b18;
  dVar4 = (double)___exp10(SUB84(param_3 / DAT_100700ae8,0));
  if (DAT_100701ae0 <= dVar4) {
    dVar9 = dVar4 * dVar4;
LAB_100285b5b:
    dVar9 = dVar9 * DAT_100700b00;
  }
  else {
    dVar9 = dVar4 * dVar4;
    if (DAT_100700b00 < dVar4) {
      dVar9 = dVar9 + DAT_100700458;
      goto LAB_100285b5b;
    }
    dVar9 = dVar9 + dVar9;
  }
  dVar9 = SQRT(dVar9) * SQRT(dVar9);
  dVar9 = SQRT((double)((ulong)((DAT_100700af8 + dVar9) / (dVar4 * dVar4 - dVar9)) & _DAT_100700b40)
              );
  dVar5 = (double)_tan(SUB84(dVar5 * DAT_100700b00,0));
  if (param_6 == '\x01') {
    dVar9 = (DAT_100700458 / dVar5) * dVar9;
    dVar5 = dVar9 + DAT_100700458;
    dVar10 = (dVar4 * dVar9 + DAT_100700458) / dVar5;
    auVar6._0_8_ = DAT_100700458 - dVar9;
    auVar6._8_8_ = DAT_100700458 - dVar4 * dVar9;
    auVar1._8_4_ = SUB84(dVar5,0);
    auVar1._0_8_ = dVar5;
    auVar1._12_4_ = (int)((ulong)dVar5 >> 0x20);
    auVar7 = divpd(auVar6,auVar1);
  }
  else {
    dVar5 = dVar5 * dVar9;
    dVar9 = dVar5 + DAT_100700458;
    dVar10 = (dVar4 * dVar5 + DAT_100700458) / dVar9;
    auVar8._0_8_ = (ulong)(DAT_100700458 - dVar5) ^ _DAT_100700b30;
    auVar8._8_8_ = DAT_100700458 - dVar4 * dVar5;
    auVar7._8_4_ = SUB84(dVar9,0);
    auVar7._0_8_ = dVar9;
    auVar7._12_4_ = (int)((ulong)dVar9 >> 0x20);
    auVar7 = divpd(auVar8,auVar7);
  }
  *param_4 = (float)dVar10;
  uVar3 = 0;
  param_4[1] = 0.0;
  param_4[2] = (float)dVar10;
  param_4[3] = 0.0;
  param_4[4] = (float)auVar7._8_8_;
  param_4[5] = 0.0;
  param_4[6] = (float)auVar7._8_8_;
  param_4[7] = 0.0;
  param_4[8] = (float)auVar7._0_8_;
  param_4[9] = 0.0;
  param_4[10] = (float)auVar7._0_8_;
  param_4[0xb] = 0.0;
LAB_100285c96:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

