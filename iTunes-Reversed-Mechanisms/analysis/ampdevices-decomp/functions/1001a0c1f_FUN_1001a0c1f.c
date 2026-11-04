// name: FUN_1001a0c1f
// address: 1001a0c1f

void FUN_1001a0c1f(undefined8 *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  bVar1 = *param_2;
  bVar2 = *param_3;
  bVar3 = *param_4;
  lVar4 = param_1[(ulong)bVar2 + 0x10b] + param_1[(ulong)bVar1 + 0xb] +
          param_1[(ulong)bVar3 + 0x20b];
  lVar7 = param_1[(ulong)bVar2 + 0x40b] + param_1[(ulong)bVar1 + 0x30b] +
          param_1[(ulong)bVar3 + 0x50b];
  lVar8 = param_1[(ulong)bVar2 + 0x70b] + param_1[(ulong)bVar1 + 0x60b] +
          param_1[(ulong)bVar3 + 0x80b];
  uVar5 = lVar8 * lVar8 + lVar7 * lVar7;
  if (((long)param_1[0x90d] < (long)uVar5) ||
     (lVar6 = param_1[0x90e] - lVar4, (ulong)(lVar6 * lVar6) < uVar5)) {
    dVar15 = (double)lVar4 * DAT_10070f3c8;
    dVar10 = (double)_hypot(SUB84((double)lVar7 * DAT_10070f3c8,0),(double)lVar8 * DAT_10070f3c8);
    dVar12 = (double)bVar1 / DAT_10070bd08;
    dVar13 = (double)bVar2 / DAT_10070bd08;
    dVar14 = (double)bVar3 / DAT_10070bd08;
    dVar15 = dVar15 + dVar10;
    auVar11._8_4_ = SUB84(dVar15,0);
    auVar11._0_8_ = dVar10;
    auVar11._12_4_ = (int)((ulong)dVar15 >> 0x20);
    auVar11 = divpd(*(undefined1 (*) [16])(param_1 + 0x90b),auVar11);
    uVar9 = auVar11._8_4_;
    if (auVar11._0_8_ <= auVar11._8_8_) {
      uVar9 = auVar11._0_4_;
    }
    dVar15 = (double)_pow(uVar9,*param_1);
    dVar10 = dVar13 * dVar15 * DAT_10070bd08 + DAT_100700b00;
    dVar13 = dVar14 * dVar15 * DAT_10070bd08 + DAT_100700b00;
    *param_2 = (byte)(int)(dVar12 * dVar15 * DAT_10070bd08 + DAT_100700b00);
    *param_3 = (byte)(int)dVar10;
    *param_4 = (byte)(int)dVar13;
  }
  return;
}

