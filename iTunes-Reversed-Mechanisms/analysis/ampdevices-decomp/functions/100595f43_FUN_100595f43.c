// name: FUN_100595f43
// address: 100595f43

undefined8 FUN_100595f43(int *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  uVar8 = 0xffffffce;
  if (((param_1 != (int *)0x0) && (*param_1 == 0x4f4c5354)) && (param_1[1] != 0)) {
    uVar9 = (ulong)param_2;
    lVar2 = *(long *)(param_1 + 2);
    uVar11 = (*(long *)(param_1 + 4) - lVar2 >> 3) * 0x6db6db6db6db6db7;
    if (uVar9 <= uVar11 && uVar11 - uVar9 != 0) {
      lVar10 = uVar9 * 0x38;
      uVar8 = 0;
      uVar3 = *(undefined8 *)(lVar2 + lVar10);
      uVar4 = ((undefined8 *)(lVar2 + lVar10))[1];
      puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar10);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar2 + 0x1c + lVar10);
      uVar7 = puVar1[1];
      *(undefined8 *)((long)param_3 + 0x1c) = *puVar1;
      *(undefined8 *)((long)param_3 + 0x24) = uVar7;
      param_3[2] = uVar5;
      param_3[3] = uVar6;
      *param_3 = uVar3;
      param_3[1] = uVar4;
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = *(undefined8 *)(*(long *)(param_1 + 2) + 0x30 + lVar10);
      }
    }
  }
  return uVar8;
}

