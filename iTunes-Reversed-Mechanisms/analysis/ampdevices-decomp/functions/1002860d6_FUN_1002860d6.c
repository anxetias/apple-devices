// name: FUN_1002860d6
// address: 1002860d6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002860d6(long param_1,undefined4 param_2,int param_3,int param_4,float *param_5,
                  long param_6)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  *(undefined4 *)(param_1 + 0x510) = param_2;
  *(undefined8 *)(param_1 + 0x568) = 0xffffffffffffffff;
  *(double *)(param_1 + 0x518) = (double)param_4 / (double)param_3;
  FUN_1002866ad();
  dVar5 = *(double *)(param_1 + 0x520) * _UNK_10073fa68;
  uVar6 = _tan();
  uVar4 = _tan(SUB84(dVar5,0));
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = uVar6;
  auVar10._8_8_ = _UNK_10073fa68;
  auVar10._0_8_ = _DAT_10073fa60;
  auVar10 = divpd(auVar9,auVar10);
  *(undefined1 (*) [16])(param_1 + 0x558) = auVar10;
  dVar5 = DAT_10073fa70;
  iVar3 = *(int *)(param_1 + 0x280);
  if (0 < (long)iVar3) {
    dVar8 = auVar10._0_8_ * DAT_100700b08;
    lVar7 = 0;
    do {
      pdVar1 = (double *)(param_1 + 8 + lVar7);
      dVar2 = *(double *)(param_1 + lVar7);
      *(double *)(param_1 + lVar7) = *(double *)(param_1 + lVar7) * dVar8 + *pdVar1 * dVar5;
      ((double *)(param_1 + lVar7))[1] = dVar2 * 0.0 + *pdVar1 * dVar8;
      lVar7 = lVar7 + 0x10;
    } while ((long)iVar3 * 0x10 != lVar7);
  }
  *(undefined4 *)(param_1 + 0x284) = 0;
  FUN_100286791(param_1);
  FUN_1002869ce(param_1);
  dVar5 = (double)_hypot((int)*(undefined8 *)(param_1 + 0x530),*(undefined8 *)(param_1 + 0x528));
  *param_5 = (float)dVar5;
  iVar3 = *(int *)(param_1 + 0x508);
  if (0 < (long)iVar3) {
    lVar7 = 0;
    do {
      *(float *)(param_6 + lVar7 * 4) = (float)*(double *)(param_1 + 0x618 + lVar7 * 8);
      lVar7 = lVar7 + 1;
    } while (iVar3 != lVar7);
  }
  return;
}

