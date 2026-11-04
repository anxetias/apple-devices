// name: FUN_100414a41
// address: 100414a41

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100414a41(long *param_1,uint *param_2,uint *param_3,int param_4,int param_5,ulong param_6,
                 uint param_7)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar9 = _DAT_100704180;
  fVar8 = DAT_100700b50;
  fVar7 = DAT_100700b24;
  fVar1 = *(float *)((long)param_1 + 0x2c);
  fVar2 = *(float *)(param_1 + 7);
  fVar16 = *(float *)(param_1 + 3);
  fVar15 = *(float *)((long)param_1 + 0x1c);
  iVar12 = *(int *)((long)param_1 + 0x14);
  uVar13 = *(uint *)((long)param_1 + 0xc);
  uVar11 = *(uint *)(param_1 + 2);
  lVar6 = *param_1;
  uVar5 = *(uint *)(param_1 + 6);
  if (param_5 == 2) {
    if (param_4 != 0) {
      fVar17 = DAT_100700b50;
      iVar14 = param_4;
      do {
        uVar3 = *param_2;
        uVar4 = param_2[param_6 & 0xffffffff];
        *(uint *)(lVar6 + (ulong)uVar13 * 4) = uVar3;
        fVar18 = (float)(uVar3 & uVar9);
        *(uint *)(lVar6 + (ulong)(uVar13 + 1) * 4) = uVar4;
        fVar19 = (float)(uVar4 & uVar9);
        if (fVar18 <= fVar19) {
          fVar18 = fVar19;
        }
        if (fVar18 <= fVar16) {
          if (iVar12 == 0) {
            fVar16 = 0.0;
            iVar12 = 0;
          }
          else {
            iVar12 = iVar12 + -1;
          }
        }
        else {
          iVar12 = (int)param_1[5];
          fVar17 = fVar1 / fVar18;
          fVar16 = fVar18;
        }
        uVar3 = uVar11 + 1;
        uVar10 = (ulong)uVar11;
        if (fVar1 <= fVar16) {
          fVar18 = (fVar17 - fVar15) * *(float *)((long)param_1 + 0x34);
        }
        else {
          fVar18 = fVar2 - fVar15 * fVar2;
        }
        fVar15 = fVar15 + fVar18;
        uVar13 = uVar13 + 2 & uVar5;
        uVar11 = uVar11 + 2 & uVar5;
        fVar20 = *(float *)(lVar6 + uVar10 * 4) * fVar15;
        fVar19 = *(float *)(lVar6 + (ulong)uVar3 * 4) * fVar15;
        fVar18 = fVar7;
        if (fVar7 <= fVar20) {
          fVar18 = fVar20;
        }
        fVar21 = fVar7;
        if (fVar7 <= fVar19) {
          fVar21 = fVar19;
        }
        *param_3 = -(uint)(fVar8 < fVar20) & (uint)fVar8 | ~-(uint)(fVar8 < fVar20) & (uint)fVar18;
        param_3[param_7] =
             -(uint)(fVar8 < fVar19) & (uint)fVar8 | ~-(uint)(fVar8 < fVar19) & (uint)fVar21;
        param_2 = param_2 + (param_6 & 0xffffffff) * 2;
        param_3 = param_3 + (ulong)param_7 * 2;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
  }
  else if (param_4 != 0) {
    fVar17 = DAT_100700b50;
    iVar14 = param_4;
    do {
      uVar3 = *param_2;
      *(uint *)(lVar6 + (ulong)uVar13 * 4) = uVar3;
      fVar18 = (float)(uVar3 & uVar9);
      if (fVar18 <= fVar16) {
        if (iVar12 == 0) {
          fVar16 = 0.0;
          iVar12 = 0;
        }
        else {
          iVar12 = iVar12 + -1;
        }
      }
      else {
        iVar12 = (int)param_1[5];
        fVar17 = fVar1 / fVar18;
        fVar16 = fVar18;
      }
      uVar10 = (ulong)uVar11;
      if (fVar1 <= fVar16) {
        fVar18 = (fVar17 - fVar15) * *(float *)((long)param_1 + 0x34);
      }
      else {
        fVar18 = fVar2 - fVar15 * fVar2;
      }
      fVar15 = fVar15 + fVar18;
      uVar13 = uVar13 + 1 & uVar5;
      uVar11 = uVar11 + 1 & uVar5;
      fVar19 = *(float *)(lVar6 + uVar10 * 4) * fVar15;
      fVar18 = fVar7;
      if (fVar7 <= fVar19) {
        fVar18 = fVar19;
      }
      *param_3 = -(uint)(fVar8 < fVar19) & (uint)fVar8 | ~-(uint)(fVar8 < fVar19) & (uint)fVar18;
      param_2 = param_2 + (param_6 & 0xffffffff);
      param_3 = param_3 + param_7;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  *(uint *)((long)param_1 + 0xc) = uVar13;
  *(uint *)(param_1 + 2) = uVar11;
  *(int *)((long)param_1 + 0x14) = iVar12;
  *(float *)(param_1 + 3) = fVar16;
  *(float *)((long)param_1 + 0x1c) = fVar15;
  return param_4;
}

