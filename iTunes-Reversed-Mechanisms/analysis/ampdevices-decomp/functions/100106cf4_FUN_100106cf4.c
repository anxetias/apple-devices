// name: FUN_100106cf4
// address: 100106cf4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100106cf4(long param_1,long param_2,long param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar7 = _DAT_100700430;
  if (1 < param_4) {
    uVar8 = param_4 >> 1;
    uVar9 = param_4 * 2 - 1;
    lVar10 = 0;
    do {
      param_4 = param_4 - 1;
      fVar1 = *(float *)(param_1 + 4 + lVar10 * 2);
      fVar2 = *(float *)(param_1 + (ulong)(uVar9 - 1) * 4);
      uVar3 = *(uint *)(param_1 + lVar10 * 2);
      fVar4 = *(float *)(param_2 + (ulong)param_4 * 4);
      fVar5 = *(float *)(param_3 + (ulong)param_4 * 4);
      auVar11 = insertps(ZEXT416(uVar3),ZEXT416(*(uint *)(param_3 + lVar10)),0x10);
      auVar12 = insertps(ZEXT416(*(uint *)(param_3 + lVar10)),
                         ZEXT416((uint)*(float *)(param_2 + lVar10)),0x10);
      fVar6 = *(float *)(param_1 + (ulong)uVar9 * 4);
      *(ulong *)(param_1 + lVar10 * 2) =
           CONCAT44(auVar12._4_4_ * fVar6 + (float)(uVar3 ^ uVar7) * auVar11._4_4_,
                    auVar12._0_4_ * fVar6 + *(float *)(param_2 + lVar10) * auVar11._0_4_);
      *(float *)(param_1 + (ulong)(uVar9 - 1) * 4) = fVar1 * fVar5 + fVar2 * fVar4;
      *(float *)(param_1 + (ulong)uVar9 * 4) = fVar1 * fVar4 - fVar5 * fVar2;
      lVar10 = lVar10 + 4;
      uVar9 = uVar9 - 2;
    } while ((ulong)uVar8 << 2 != lVar10);
  }
  return;
}

