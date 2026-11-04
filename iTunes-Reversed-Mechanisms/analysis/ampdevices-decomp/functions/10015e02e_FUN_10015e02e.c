// name: FUN_10015e02e
// address: 10015e02e

void FUN_10015e02e(long param_1,long param_2,int param_3)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  long lVar6;
  ushort uVar7;
  float fVar8;
  
  dVar5 = DAT_10070c188;
  fVar4 = DAT_10070c178;
  fVar3 = DAT_10070c174;
  fVar2 = DAT_10070bcf4;
  dVar1 = DAT_100700b00;
  if (param_3 != 0) {
    lVar6 = 0;
    do {
      fVar8 = *(float *)(param_1 + lVar6 * 4) * fVar3;
      if (fVar8 <= 0.0) {
        if (0.0 <= fVar8) {
          uVar7 = 0;
        }
        else {
          uVar7 = (ushort)(int)((double)fVar8 + dVar5);
          if (fVar8 < fVar4) {
            uVar7 = 0x8000;
          }
        }
      }
      else {
        uVar7 = (ushort)(int)((double)fVar8 + dVar1);
        if (fVar2 < fVar8) {
          uVar7 = 0x7fff;
        }
      }
      *(ushort *)(param_2 + lVar6 * 2) = uVar7 << 8 | uVar7 >> 8;
      lVar6 = lVar6 + 1;
    } while (param_3 != (int)lVar6);
  }
  return;
}

