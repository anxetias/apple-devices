// name: FUN_1002866ad
// address: 1002866ad

void FUN_1002866ad(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  
  *(undefined4 *)(param_1 + 0x280) = 0;
  uVar1 = *(uint *)(param_1 + 0x510);
  if (0 < (int)uVar1) {
    iVar5 = 1;
    if (1 < (int)(uVar1 * 2)) {
      iVar5 = uVar1 * 2;
    }
    iVar4 = 0;
    dVar8 = 0.0;
    do {
      dVar6 = dVar8 + DAT_100700b00;
      if ((uVar1 & 1) != 0) {
        dVar6 = dVar8;
      }
      dVar9 = dVar8;
      uVar7 = ___sincos_stret((dVar6 * DAT_100700b18) / (double)(int)uVar1);
      if (dVar9 < 0.0) {
        uVar2 = *(ulong *)(param_1 + 0x568);
        if ((uVar2 & 1) != 0) {
          lVar3 = (long)iVar4;
          iVar4 = iVar4 + 1;
          *(int *)(param_1 + 0x280) = iVar4;
          *(double *)(param_1 + lVar3 * 0x10) = dVar9;
          *(undefined8 *)(param_1 + 8 + lVar3 * 0x10) = uVar7;
        }
        *(ulong *)(param_1 + 0x568) = uVar2 >> 1;
      }
      dVar8 = dVar8 + DAT_100700458;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

