// name: FUN_100286b82
// address: 100286b82

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100286b82(long param_1,uint param_2,double *param_3)

{
  double dVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  double *pdVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = _UNK_100711698;
  *param_3 = _DAT_100711690;
  param_3[1] = dVar7;
  if (0 < (int)param_2) {
    uVar6 = (ulong)param_2;
    ___bzero(param_3 + 2,uVar6 * 0x10);
    uVar2 = _DAT_100700b30;
    uVar3 = 0;
    do {
      dVar8 = 0.0 - *(double *)(param_1 + uVar3 * 0x10);
      dVar7 = 0.0 - *(double *)(param_1 + 8 + uVar3 * 0x10);
      uVar4 = uVar6 + 1;
      pdVar5 = param_3 + uVar6 * 2;
      do {
        dVar1 = *pdVar5;
        *pdVar5 = dVar1 * dVar8 + pdVar5[1] * (double)((ulong)dVar7 ^ uVar2) + pdVar5[-2];
        pdVar5[1] = pdVar5[1] * dVar8 + dVar1 * dVar7 + pdVar5[-1];
        pdVar5 = pdVar5 + -2;
        uVar4 = uVar4 - 1;
      } while (1 < uVar4);
      dVar1 = *param_3;
      *param_3 = dVar8 * dVar1 + (double)((ulong)dVar7 ^ uVar2) * param_3[1];
      param_3[1] = dVar8 * param_3[1] + dVar7 * dVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar6);
  }
  return;
}

