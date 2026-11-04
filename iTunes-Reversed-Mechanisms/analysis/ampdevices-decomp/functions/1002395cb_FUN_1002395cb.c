// name: FUN_1002395cb
// address: 1002395cb

undefined1  [16] FUN_1002395cb(double param_1,double param_2,long param_3)

{
  ushort uVar1;
  double dVar2;
  bool bVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  
  uVar4 = 0;
  dVar8 = 0.0;
  if (((param_1 == 0.0) && (!NAN(param_1))) || ((param_2 == 0.0 && (!NAN(param_2)))))
  goto LAB_100239727;
  dVar5 = (double)*(ushort *)(param_3 + 0x60);
  dVar7 = param_1;
  if (param_2 <= param_1) {
    dVar7 = param_2;
  }
  dVar8 = param_1;
  if (param_1 <= param_2) {
    dVar8 = param_2;
  }
  dVar2 = dVar7;
  if (*(ushort *)(param_3 + 0x62) == 0) {
    if (dVar5 < dVar7) {
      dVar8 = (dVar8 * dVar5) / dVar7;
      dVar2 = dVar5;
    }
  }
  else {
    dVar6 = (double)*(ushort *)(param_3 + 0x62);
    if (dVar6 < dVar8) {
      dVar2 = (dVar7 * dVar6) / dVar8;
      if (dVar5 <= dVar2) {
LAB_100239683:
        uVar1 = *(ushort *)(param_3 + 0x66);
        uVar4 = (ulong)uVar1;
        bVar3 = 1 < uVar1;
        dVar8 = dVar6;
        if ((bVar3) && (dVar5 < dVar2)) {
          dVar2 = (double)(uint)((int)(long)dVar2 -
                                (int)(((long)dVar2 & 0xffffffffU) % (ulong)(uint)uVar1));
          bVar3 = true;
        }
      }
      else {
        dVar6 = (double)*(ushort *)(param_3 + 100);
        dVar9 = (double)(~-(ulong)(dVar5 < dVar7) & (ulong)dVar8 |
                        (ulong)((dVar8 * dVar5) / dVar7) & -(ulong)(dVar5 < dVar7));
        if (dVar6 < dVar9) {
          dVar8 = (dVar7 * dVar6) / dVar8;
          dVar2 = DAT_100700458;
          if (DAT_100700458 <= dVar8) {
            dVar2 = dVar8;
          }
          goto LAB_100239683;
        }
        dVar2 = dVar5;
        if (dVar7 <= dVar5) {
          dVar2 = dVar7;
        }
        uVar4 = (ulong)*(ushort *)(param_3 + 0x66);
        bVar3 = 1 < *(ushort *)(param_3 + 0x66);
        dVar8 = dVar9;
      }
      if ((bVar3) && (dVar5 < dVar8)) {
        dVar8 = (double)(uint)((int)(long)dVar8 - (int)(((long)dVar8 & 0xffffffffU) % uVar4));
      }
    }
  }
  uVar4 = ~-(ulong)(param_1 < param_2) & (ulong)dVar8 | -(ulong)(param_1 < param_2) & (ulong)dVar2;
  if (param_2 <= param_1) {
    dVar8 = dVar2;
  }
LAB_100239727:
  auVar10._8_8_ = dVar8;
  auVar10._0_8_ = uVar4;
  return auVar10;
}

