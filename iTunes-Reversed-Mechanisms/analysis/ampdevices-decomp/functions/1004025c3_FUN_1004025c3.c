// name: FUN_1004025c3
// address: 1004025c3

void FUN_1004025c3(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
                  undefined8 *param_5)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if (param_4 != 0) {
    if (param_4 != 1) {
      if (param_4 != 2) {
        if (8 < (long)param_4) {
          uVar4 = param_4 >> 1;
          puVar3 = param_1 + uVar4;
          FUN_100402386(param_1,puVar3,param_3,uVar4,param_5,uVar4);
          FUN_100402386(puVar3,param_2,param_3,param_4 - uVar4,param_5 + uVar4,param_4 - uVar4);
          puVar8 = puVar3;
          do {
            puVar5 = puVar8;
            if (puVar5 == param_2) {
              if (param_1 == puVar3) {
                return;
              }
              lVar9 = 0;
              do {
                puVar8 = (undefined8 *)((long)param_1 + lVar9);
                *(undefined8 *)((long)param_5 + lVar9) = *puVar8;
                lVar9 = lVar9 + 8;
              } while (puVar8 + 1 != puVar3);
              return;
            }
            bVar2 = (*(code *)*param_3)(*puVar5,*param_1);
            puVar6 = param_1;
            if (bVar2 != 0) {
              puVar6 = puVar5;
            }
            puVar8 = (undefined8 *)((long)puVar5 + (ulong)((uint)bVar2 * 8));
            param_1 = param_1 + (bVar2 ^ 1);
            *param_5 = *puVar6;
            param_5 = param_5 + 1;
          } while (param_1 != puVar3);
          if (puVar8 == param_2) {
            return;
          }
          lVar9 = 0;
          do {
            puVar3 = (undefined8 *)((long)puVar5 + lVar9 + (ulong)((uint)bVar2 * 8));
            *(undefined8 *)((long)param_5 + lVar9) = *puVar3;
            lVar9 = lVar9 + 8;
          } while (puVar3 + 1 != param_2);
          return;
        }
        if (param_1 == param_2) {
          return;
        }
        *param_5 = *param_1;
        param_1 = param_1 + 1;
        if (param_1 == param_2) {
          return;
        }
        lVar9 = 0;
        puVar3 = param_5;
        do {
          cVar1 = (*(code *)*param_3)(*param_1,*puVar3);
          puVar8 = puVar3 + 1;
          if ((cVar1 != '\0') &&
             (puVar3[1] = *puVar3, puVar8 = param_5, lVar7 = lVar9, puVar3 != param_5)) {
            do {
              cVar1 = (*(code *)*param_3)(*param_1,*(undefined8 *)((long)param_5 + lVar7 + -8));
              if (cVar1 == '\0') {
                puVar8 = (undefined8 *)(lVar7 + (long)param_5);
                break;
              }
              *(undefined8 *)((long)param_5 + lVar7) = *(undefined8 *)((long)param_5 + lVar7 + -8);
              lVar7 = lVar7 + -8;
            } while (lVar7 != 0);
          }
          *puVar8 = *param_1;
          param_1 = param_1 + 1;
          lVar9 = lVar9 + 8;
          puVar3 = puVar3 + 1;
          if (param_1 == param_2) {
            return;
          }
        } while( true );
      }
      cVar1 = (*(code *)*param_3)(param_2[-1],*param_1);
      puVar3 = param_1;
      if (cVar1 != '\0') {
        puVar3 = param_2 + -1;
      }
      *param_5 = *puVar3;
      param_5 = param_5 + 1;
      if (cVar1 == '\0') {
        param_1 = param_2 + -1;
      }
    }
    *param_5 = *param_1;
  }
  return;
}

