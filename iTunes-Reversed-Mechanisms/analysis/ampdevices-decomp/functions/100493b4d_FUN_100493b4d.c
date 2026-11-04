// name: FUN_100493b4d
// address: 100493b4d

void FUN_100493b4d(long param_1,long param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  uVar14 = param_3 * 2;
  if (uVar14 < param_4) {
    do {
      if ((param_4 - 1 <= uVar14) ||
         (uVar13 = (ulong)(uVar14 | 1),
         *(uint *)(param_2 + uVar13 * 4) <= *(uint *)(param_2 + (ulong)uVar14 * 4))) {
        uVar13 = (ulong)uVar14;
      }
      uVar12 = (ulong)param_3;
      param_3 = (uint)uVar13;
      if (*(uint *)(param_2 + uVar13 * 4) <= *(uint *)(param_2 + uVar12 * 4)) {
        return;
      }
      lVar5 = uVar12 * 0x1c;
      uVar6 = *(undefined8 *)(param_1 + lVar5);
      uVar7 = ((undefined8 *)(param_1 + lVar5))[1];
      puVar1 = (undefined8 *)(param_1 + 0xc + lVar5);
      uVar8 = puVar1[1];
      uStack_18 = (undefined4)((ulong)*puVar1 >> 0x20);
      local_1c = (undefined4)((ulong)uVar7 >> 0x20);
      lVar4 = uVar13 * 0x1c;
      uVar9 = *(undefined8 *)(param_1 + lVar4);
      uVar10 = ((undefined8 *)(param_1 + lVar4))[1];
      puVar1 = (undefined8 *)(param_1 + 0xc + lVar4);
      uVar11 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0xc + lVar5);
      *puVar2 = *puVar1;
      puVar2[1] = uVar11;
      *(undefined8 *)(param_1 + lVar5) = uVar9;
      ((undefined8 *)(param_1 + lVar5))[1] = uVar10;
      puVar1 = (undefined8 *)(param_1 + 0xc + lVar4);
      *puVar1 = CONCAT44(uStack_18,local_1c);
      puVar1[1] = uVar8;
      *(undefined8 *)(param_1 + lVar4) = uVar6;
      ((undefined8 *)(param_1 + lVar4))[1] = uVar7;
      uVar3 = *(undefined4 *)(param_2 + uVar12 * 4);
      *(undefined4 *)(param_2 + uVar12 * 4) = *(undefined4 *)(param_2 + uVar13 * 4);
      *(undefined4 *)(param_2 + uVar13 * 4) = uVar3;
      uVar14 = param_3 * 2;
    } while (uVar14 < param_4);
  }
  return;
}

