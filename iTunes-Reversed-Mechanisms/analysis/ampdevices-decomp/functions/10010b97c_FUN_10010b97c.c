// name: FUN_10010b97c
// address: 10010b97c

void FUN_10010b97c(undefined8 param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                  int *param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  
  iVar1 = *param_6;
  if (0 < (long)iVar1) {
    lVar3 = *(long *)(param_6 + 2);
    lVar4 = *param_5;
    lVar5 = *param_4;
    lVar9 = 0;
    iVar10 = 0;
    do {
      uVar2 = *(uint *)(lVar3 + lVar9 * 4);
      uVar8 = 6;
      if ((int)uVar2 < 6) {
        uVar8 = uVar2;
      }
      *(undefined4 *)(lVar4 + lVar9 * 4) = 0;
      *(undefined4 *)(lVar5 + lVar9 * 4) = 0;
      if (0 < (int)uVar2) {
        lVar6 = *param_2;
        lVar7 = *param_3;
        uVar11 = 0;
        do {
          *(float *)(lVar5 + lVar9 * 4) =
               *(float *)(lVar6 + (long)iVar10 * 4 + uVar11 * 4) + *(float *)(lVar5 + lVar9 * 4);
          *(float *)(lVar4 + lVar9 * 4) =
               *(float *)((long)iVar10 * 4 + lVar7 + uVar11 * 4) + *(float *)(lVar4 + lVar9 * 4);
          uVar11 = uVar11 + 1;
        } while (uVar8 != uVar11);
      }
      iVar10 = iVar10 + uVar8;
      lVar9 = lVar9 + 1;
    } while (lVar9 != iVar1);
  }
  return;
}

