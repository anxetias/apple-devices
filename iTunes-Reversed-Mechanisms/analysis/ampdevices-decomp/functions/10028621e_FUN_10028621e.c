// name: FUN_10028621e
// address: 10028621e

/* WARNING: Removing unreachable block (ram,0x0001002862c6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10028621e(long param_1,undefined4 param_2,int param_3,int param_4,float *param_5,
                  long param_6)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  *(undefined4 *)(param_1 + 0x510) = param_2;
  *(undefined8 *)(param_1 + 0x568) = 0xffffffffffffffff;
  *(double *)(param_1 + 0x518) = (double)param_4 / (double)param_3;
  FUN_1002866ad();
  dVar10 = *(double *)(param_1 + 0x520) * _UNK_10073fa68;
  uVar8 = _tan();
  uVar9 = _tan(dVar10);
  auVar13._8_8_ = uVar9;
  auVar13._0_8_ = uVar8;
  auVar14._8_8_ = _UNK_10073fa68;
  auVar14._0_8_ = _DAT_10073fa60;
  auVar14 = divpd(auVar13,auVar14);
  *(undefined1 (*) [16])(param_1 + 0x558) = auVar14;
  iVar4 = *(int *)(param_1 + 0x280);
  if (0 < (long)iVar4) {
    dVar10 = auVar14._0_8_ * DAT_100700b08;
    uVar6 = (ulong)DAT_100700b30;
    lVar7 = 0;
    do {
      dVar2 = *(double *)(param_1 + lVar7);
      dVar3 = *(double *)(param_1 + 8 + lVar7);
      dVar11 = dVar2 * dVar2 + dVar3 * dVar3;
      auVar12._0_8_ = dVar2 * dVar10 + dVar3 * 0.0;
      auVar12._8_8_ = dVar2 * 0.0 + dVar3 * (double)((ulong)dVar10 ^ uVar6);
      auVar5._8_8_ = dVar11;
      auVar5._0_8_ = dVar11;
      auVar14 = divpd(auVar12,auVar5);
      *(undefined1 (*) [16])(param_1 + lVar7) = auVar14;
      puVar1 = (undefined8 *)(param_1 + 0x140 + lVar7);
      *puVar1 = 0;
      puVar1[1] = 0;
      lVar7 = lVar7 + 0x10;
    } while ((long)iVar4 << 4 != lVar7);
  }
  *(int *)(param_1 + 0x284) = iVar4;
  FUN_100286791(param_1);
  FUN_1002869ce(param_1);
  dVar10 = (double)_hypot(*(undefined8 *)(param_1 + 0x550),*(undefined8 *)(param_1 + 0x548));
  *param_5 = (float)dVar10;
  iVar4 = *(int *)(param_1 + 0x508);
  if (0 < (long)iVar4) {
    lVar7 = 0;
    do {
      *(float *)(param_6 + lVar7 * 4) = (float)*(double *)(param_1 + 0x618 + lVar7 * 8);
      lVar7 = lVar7 + 1;
    } while (iVar4 != lVar7);
  }
  return;
}

