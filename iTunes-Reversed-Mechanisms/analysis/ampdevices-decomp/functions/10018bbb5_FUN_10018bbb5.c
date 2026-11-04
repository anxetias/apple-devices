// name: FUN_10018bbb5
// address: 10018bbb5

undefined2 * FUN_10018bbb5(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  
  lVar5 = (long)param_2 - (long)param_1;
  lVar6 = lVar5 >> 1;
  lVar3 = (long)param_3 - (long)param_2 >> 1;
  lVar7 = lVar6;
  if (lVar6 == lVar3) {
    puVar2 = param_2;
    if (param_2 != param_3 && param_1 != param_2) {
      do {
        puVar8 = puVar2 + 1;
        uVar1 = *param_1;
        *param_1 = *puVar2;
        *puVar2 = uVar1;
        if (param_1 + 1 == param_2) {
          return param_2;
        }
        param_1 = param_1 + 1;
        puVar2 = puVar8;
      } while (puVar8 != param_3);
    }
  }
  else {
    do {
      lVar4 = lVar3;
      lVar3 = lVar7 % lVar4;
      lVar7 = lVar4;
    } while (lVar3 != 0);
    puVar2 = param_1 + lVar4;
    do {
      uVar1 = puVar2[-1];
      puVar9 = (undefined2 *)((long)puVar2 + lVar5 + -2);
      puVar2 = puVar2 + -1;
      puVar8 = puVar2;
      do {
        puVar10 = puVar9;
        *puVar8 = *puVar10;
        lVar3 = (long)param_3 - (long)puVar10 >> 1;
        puVar9 = param_1 + (lVar6 - lVar3);
        if (lVar6 < lVar3) {
          puVar9 = (undefined2 *)((long)puVar10 + lVar5);
        }
        puVar8 = puVar10;
      } while (puVar9 != puVar2);
      *puVar10 = uVar1;
    } while (puVar2 != param_1);
    param_2 = (undefined2 *)((long)param_1 + ((long)param_3 - (long)param_2));
  }
  return param_2;
}

