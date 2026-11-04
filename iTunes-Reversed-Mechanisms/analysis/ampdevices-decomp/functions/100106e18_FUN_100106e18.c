// name: FUN_100106e18
// address: 100106e18

void FUN_100106e18(long param_1,float *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  
  if (1 < param_3) {
    uVar5 = param_3 >> 1;
    fVar8 = param_2[param_3];
    fVar9 = *param_2;
    uVar6 = param_3 * 2 - 1;
    uVar7 = 0;
    do {
      param_3 = param_3 - 1;
      fVar1 = *(float *)(param_1 + uVar7 * 8);
      fVar2 = *(float *)(param_1 + 4 + uVar7 * 8);
      fVar3 = *(float *)(param_1 + (ulong)(uVar6 - 1) * 4);
      fVar4 = *(float *)(param_1 + (ulong)uVar6 * 4);
      *(float *)(param_1 + uVar7 * 8) = fVar1 * fVar8 + fVar9 * fVar2;
      *(float *)(param_1 + (ulong)uVar6 * 4) = fVar1 * fVar9 - fVar8 * fVar2;
      fVar9 = param_2[uVar7 + 1];
      fVar8 = param_2[param_3];
      *(float *)(param_1 + (ulong)(uVar6 - 1) * 4) = fVar3 * fVar9 + fVar4 * fVar8;
      *(float *)(param_1 + 4 + uVar7 * 8) = fVar3 * fVar8 - fVar9 * fVar4;
      uVar7 = uVar7 + 1;
      uVar6 = uVar6 - 2;
    } while (uVar5 != uVar7);
  }
  return;
}

