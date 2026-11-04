// name: FUN_1001261c0
// address: 1001261c0

void FUN_1001261c0(long param_1,long param_2,int param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar5 = (uint)param_4;
  if (0 < (int)uVar5) {
    if ((param_3 == 1 && 7 < uVar5) && 0x1f < (ulong)(param_2 - param_1)) {
      uVar7 = uVar5 & 0x7ffffff8;
      uVar8 = (ulong)uVar7;
      iVar6 = uVar7 * param_3;
      lVar10 = 0;
      do {
        uVar2 = ((undefined8 *)(param_1 + lVar10))[1];
        puVar1 = (undefined8 *)(param_1 + 0x10 + lVar10);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        *(undefined8 *)(param_2 + lVar10) = *(undefined8 *)(param_1 + lVar10);
        ((undefined8 *)(param_2 + lVar10))[1] = uVar2;
        puVar1 = (undefined8 *)(param_2 + 0x10 + lVar10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        lVar10 = lVar10 + 0x20;
      } while ((ulong)((uint)(param_4 >> 3) & 0xfffffff) << 5 != lVar10);
      if (uVar7 == uVar5) {
        return;
      }
    }
    else {
      uVar8 = 0;
      iVar6 = 0;
    }
    uVar9 = uVar8;
    for (uVar11 = param_4 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)(param_2 + (long)iVar6 * 4) = *(undefined4 *)(param_1 + uVar9 * 4);
      uVar9 = uVar9 + 1;
      iVar6 = iVar6 + param_3;
    }
    if (uVar8 - (param_4 & 0xffffffff) < 0xfffffffffffffffd) {
      do {
        *(undefined4 *)(param_2 + (long)iVar6 * 4) = *(undefined4 *)(param_1 + uVar9 * 4);
        *(undefined4 *)(param_2 + (long)(iVar6 + param_3) * 4) =
             *(undefined4 *)(param_1 + 4 + uVar9 * 4);
        *(undefined4 *)(param_2 + (long)(param_3 * 2 + iVar6) * 4) =
             *(undefined4 *)(param_1 + 8 + uVar9 * 4);
        *(undefined4 *)(param_2 + (long)(iVar6 + param_3 * 3) * 4) =
             *(undefined4 *)(param_1 + 0xc + uVar9 * 4);
        uVar9 = uVar9 + 4;
        iVar6 = iVar6 + param_3 + param_3 * 3;
      } while ((param_4 & 0xffffffff) != uVar9);
    }
  }
  return;
}

