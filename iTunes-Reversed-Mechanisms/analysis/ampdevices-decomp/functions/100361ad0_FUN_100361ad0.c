// name: FUN_100361ad0
// address: 100361ad0

void FUN_100361ad0(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  bool bVar11;
  
  DAT_1008bdcc8 = (undefined8 *)0x0;
  DAT_1008bdcd0 = 0;
  DAT_1008bdcc0 = &DAT_1008bdcc8;
  lVar9 = 0;
  do {
    puVar5 = &DAT_1008bdcc8;
    if ((undefined8 **)DAT_1008bdcc0 == &DAT_1008bdcc8) {
LAB_100361b3d:
      puVar10 = &DAT_1008bdcc8;
      puVar7 = &DAT_1008bdcc8;
      if (DAT_1008bdcc8 == (undefined8 *)0x0) goto LAB_100361b8e;
      if (puVar5[1] == 0) {
        puVar10 = puVar5;
        puVar7 = puVar5 + 1;
        goto LAB_100361b8e;
      }
    }
    else {
      puVar7 = DAT_1008bdcc8;
      if (DAT_1008bdcc8 == (undefined8 *)0x0) {
        puVar7 = &DAT_1008bdcc8;
        do {
          puVar5 = (undefined8 *)puVar7[2];
          bVar11 = (undefined8 *)*puVar5 == puVar7;
          puVar7 = puVar5;
        } while (bVar11);
      }
      else {
        do {
          puVar5 = puVar7;
          puVar7 = (undefined8 *)puVar5[1];
        } while ((undefined8 *)puVar5[1] != (undefined8 *)0x0);
      }
      uVar1 = *(ulong *)(param_1 + lVar9);
      if ((ulong)puVar5[4] < uVar1) goto LAB_100361b3d;
      puVar10 = &DAT_1008bdcc8;
      puVar5 = DAT_1008bdcc8;
      while (puVar7 = puVar10, puVar5 != (undefined8 *)0x0) {
        while (puVar10 = puVar5, (ulong)puVar10[4] <= uVar1) {
          if (uVar1 <= (ulong)puVar10[4]) goto LAB_100361bbb;
          puVar5 = (undefined8 *)puVar10[1];
          if ((undefined8 *)puVar10[1] == (undefined8 *)0x0) {
            puVar7 = puVar10 + 1;
            goto LAB_100361b8e;
          }
        }
        puVar5 = (undefined8 *)*puVar10;
      }
LAB_100361b8e:
      pvVar6 = operator_new(0x30);
      puVar8 = (undefined4 *)(param_1 + lVar9);
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      *(undefined4 *)((long)pvVar6 + 0x20) = *puVar8;
      *(undefined4 *)((long)pvVar6 + 0x24) = uVar2;
      *(undefined4 *)((long)pvVar6 + 0x28) = uVar3;
      *(undefined4 *)((long)pvVar6 + 0x2c) = uVar4;
      FUN_10020e4b6(&DAT_1008bdcc0,puVar10,puVar7,pvVar6);
    }
LAB_100361bbb:
    lVar9 = lVar9 + 0x10;
    if (lVar9 == 0x2d0) {
      return;
    }
  } while( true );
}

