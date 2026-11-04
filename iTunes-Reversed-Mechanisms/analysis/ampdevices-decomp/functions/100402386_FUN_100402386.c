// name: FUN_100402386
// address: 100402386

void FUN_100402386(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
                  undefined8 *param_5,long param_6)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      cVar2 = (*(code *)*param_3)(param_2[-1],*param_1);
      if (cVar2 != '\0') {
        uVar1 = *param_1;
        *param_1 = param_2[-1];
        param_2[-1] = uVar1;
      }
    }
    else if ((long)param_4 < 0x81) {
      if (param_1 + 1 != param_2 && param_1 != param_2) {
        lVar9 = 8;
        puVar8 = param_1 + 1;
        puVar6 = param_1;
        do {
          puVar5 = puVar8;
          cVar2 = (*(code *)*param_3)(puVar6[1],*puVar6);
          if (cVar2 != '\0') {
            uVar1 = *puVar5;
            lVar7 = lVar9;
            do {
              *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_1 + lVar7 + -8);
              puVar8 = param_1;
              if (lVar7 == 8) goto LAB_100402457;
              cVar2 = (*(code *)*param_3)(uVar1,*(undefined8 *)((long)param_1 + lVar7 + -0x10));
              lVar7 = lVar7 + -8;
            } while (cVar2 != '\0');
            puVar8 = (undefined8 *)(lVar7 + (long)param_1);
LAB_100402457:
            *puVar8 = uVar1;
          }
          lVar9 = lVar9 + 8;
          puVar8 = puVar5 + 1;
          puVar6 = puVar5;
        } while (puVar5 + 1 != param_2);
      }
    }
    else {
      uVar10 = param_4 >> 1;
      puVar8 = param_1 + uVar10;
      lVar9 = param_4 - uVar10;
      if (param_6 < (long)param_4) {
        FUN_100402386(param_1,puVar8,param_3,uVar10,param_5);
        FUN_100402386(puVar8,param_2,param_3,lVar9,param_5,param_6);
        FUN_1004027ba(param_1,puVar8,param_2,param_3,uVar10,lVar9,param_5,param_6);
      }
      else {
        FUN_1004025c3(param_1,puVar8,param_3,uVar10,param_5);
        puVar6 = param_5 + uVar10;
        FUN_1004025c3(puVar8,param_2,param_3,lVar9,puVar6);
        puVar8 = param_5 + param_4;
        puVar5 = puVar6;
        do {
          puVar4 = puVar5;
          if (puVar4 == puVar8) {
            if (param_5 == puVar6) {
              return;
            }
            lVar9 = 0;
            do {
              puVar8 = (undefined8 *)((long)param_5 + lVar9);
              *(undefined8 *)((long)param_1 + lVar9) = *puVar8;
              lVar9 = lVar9 + 8;
            } while (puVar8 + 1 != puVar6);
            return;
          }
          bVar3 = (*(code *)*param_3)(*puVar4,*param_5);
          puVar5 = param_5;
          if (bVar3 != 0) {
            puVar5 = puVar4;
          }
          param_5 = param_5 + (bVar3 ^ 1);
          *param_1 = *puVar5;
          param_1 = param_1 + 1;
          puVar5 = puVar4 + bVar3;
        } while (param_5 != puVar6);
        if (puVar4 + bVar3 != puVar8) {
          lVar9 = 0;
          do {
            puVar6 = (undefined8 *)((long)puVar4 + lVar9 + (ulong)bVar3 * 8);
            *(undefined8 *)((long)param_1 + lVar9) = *puVar6;
            lVar9 = lVar9 + 8;
          } while (puVar6 + 1 != puVar8);
        }
      }
    }
  }
  return;
}

