// name: FUN_1005942c0
// address: 1005942c0

void FUN_1005942c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      puVar8 = param_2 + -2;
      cVar3 = (*(code *)*param_3)(puVar8,param_1);
      if (cVar3 == '\0') {
        uVar2 = param_1[1];
        *param_5 = *param_1;
        param_5[1] = uVar2;
        uVar10 = *(undefined4 *)puVar8;
        uVar11 = *(undefined4 *)((long)param_2 + -0xc);
        uVar12 = *(undefined4 *)(param_2 + -1);
        uVar13 = *(undefined4 *)((long)param_2 + -4);
      }
      else {
        uVar2 = param_2[-1];
        *param_5 = *puVar8;
        param_5[1] = uVar2;
        uVar10 = *(undefined4 *)param_1;
        uVar11 = *(undefined4 *)((long)param_1 + 4);
        uVar12 = *(undefined4 *)(param_1 + 1);
        uVar13 = *(undefined4 *)((long)param_1 + 0xc);
      }
      *(undefined4 *)(param_5 + 2) = uVar10;
      *(undefined4 *)((long)param_5 + 0x14) = uVar11;
      *(undefined4 *)(param_5 + 3) = uVar12;
      *(undefined4 *)((long)param_5 + 0x1c) = uVar13;
    }
    else if (param_4 == 1) {
      uVar2 = param_1[1];
      *param_5 = *param_1;
      param_5[1] = uVar2;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        uVar10 = *(undefined4 *)((long)param_1 + 4);
        uVar11 = *(undefined4 *)(param_1 + 1);
        uVar12 = *(undefined4 *)((long)param_1 + 0xc);
        *(undefined4 *)param_5 = *(undefined4 *)param_1;
        *(undefined4 *)((long)param_5 + 4) = uVar10;
        *(undefined4 *)(param_5 + 1) = uVar11;
        *(undefined4 *)((long)param_5 + 0xc) = uVar12;
        param_1 = param_1 + 2;
        if (param_1 != param_2) {
          lVar6 = 0;
          puVar8 = param_5;
          do {
            puVar9 = puVar8 + 2;
            cVar3 = (*(code *)*param_3)(param_1,puVar8);
            puVar4 = puVar9;
            if (cVar3 != '\0') {
              *(undefined4 *)puVar9 = *(undefined4 *)puVar8;
              *(undefined4 *)((long)puVar8 + 0x14) = *(undefined4 *)((long)puVar8 + 4);
              *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(puVar8 + 1);
              *(undefined4 *)((long)puVar8 + 0x1c) = *(undefined4 *)((long)puVar8 + 0xc);
              puVar4 = param_5;
              lVar7 = lVar6;
              if (puVar8 != param_5) {
                do {
                  puVar1 = puVar8 + -2;
                  cVar3 = (*(code *)*param_3)(param_1,puVar1);
                  puVar4 = puVar8;
                  if (cVar3 == '\0') break;
                  *(undefined4 *)puVar8 = *(undefined4 *)puVar1;
                  *(undefined4 *)((long)puVar8 + 4) = *(undefined4 *)((long)puVar8 + -0xc);
                  *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + -1);
                  *(undefined4 *)((long)puVar8 + 0xc) = *(undefined4 *)((long)puVar8 + -4);
                  lVar7 = lVar7 + 0x10;
                  puVar4 = param_5;
                  puVar8 = puVar1;
                } while (lVar7 != 0);
              }
            }
            uVar10 = *(undefined4 *)((long)param_1 + 4);
            uVar11 = *(undefined4 *)(param_1 + 1);
            uVar12 = *(undefined4 *)((long)param_1 + 0xc);
            *(undefined4 *)puVar4 = *(undefined4 *)param_1;
            *(undefined4 *)((long)puVar4 + 4) = uVar10;
            *(undefined4 *)(puVar4 + 1) = uVar11;
            *(undefined4 *)((long)puVar4 + 0xc) = uVar12;
            param_1 = param_1 + 2;
            lVar6 = lVar6 + -0x10;
            puVar8 = puVar9;
          } while (param_1 != param_2);
        }
      }
    }
    else {
      uVar5 = param_4 >> 1;
      puVar8 = param_1 + uVar5 * 2;
      FUN_100594083(param_1,puVar8,param_3,uVar5,param_5,uVar5);
      FUN_100594083(puVar8,param_2,param_3,param_4 - uVar5,param_5 + uVar5 * 2,param_4 - uVar5);
      puVar4 = puVar8;
      do {
        if (puVar4 == param_2) {
          if (param_1 == puVar8) {
            return;
          }
          lVar6 = 0;
          do {
            puVar4 = (undefined8 *)((long)param_1 + lVar6);
            uVar2 = puVar4[1];
            *(undefined8 *)((long)param_5 + lVar6) = *puVar4;
            ((undefined8 *)((long)param_5 + lVar6))[1] = uVar2;
            lVar6 = lVar6 + 0x10;
          } while (puVar4 + 2 != puVar8);
          return;
        }
        cVar3 = (*(code *)*param_3)(puVar4,param_1);
        if (cVar3 == '\0') {
          uVar10 = *(undefined4 *)((long)param_1 + 4);
          uVar11 = *(undefined4 *)(param_1 + 1);
          uVar12 = *(undefined4 *)((long)param_1 + 0xc);
          *(undefined4 *)param_5 = *(undefined4 *)param_1;
          *(undefined4 *)((long)param_5 + 4) = uVar10;
          *(undefined4 *)(param_5 + 1) = uVar11;
          *(undefined4 *)((long)param_5 + 0xc) = uVar12;
          param_1 = param_1 + 2;
        }
        else {
          uVar10 = *(undefined4 *)((long)puVar4 + 4);
          uVar11 = *(undefined4 *)(puVar4 + 1);
          uVar12 = *(undefined4 *)((long)puVar4 + 0xc);
          *(undefined4 *)param_5 = *(undefined4 *)puVar4;
          *(undefined4 *)((long)param_5 + 4) = uVar10;
          *(undefined4 *)(param_5 + 1) = uVar11;
          *(undefined4 *)((long)param_5 + 0xc) = uVar12;
          puVar4 = puVar4 + 2;
        }
        param_5 = param_5 + 2;
      } while (param_1 != puVar8);
      if (puVar4 != param_2) {
        lVar6 = 0;
        do {
          puVar8 = (undefined8 *)(lVar6 + (long)puVar4);
          uVar2 = puVar8[1];
          *(undefined8 *)((long)param_5 + lVar6) = *puVar8;
          ((undefined8 *)((long)param_5 + lVar6))[1] = uVar2;
          lVar6 = lVar6 + 0x10;
        } while (puVar8 + 2 != param_2);
      }
    }
  }
  return;
}

