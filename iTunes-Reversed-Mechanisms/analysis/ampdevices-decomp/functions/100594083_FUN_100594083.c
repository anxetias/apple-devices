// name: FUN_100594083
// address: 100594083

void FUN_100594083(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4,
                  undefined8 *param_5,long param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  if (1 < param_4) {
    local_40 = param_1;
    if (param_4 == 2) {
      puVar10 = param_2 + -2;
      cVar7 = (*(code *)*param_3)(puVar10,param_1);
      if (cVar7 != '\0') {
        uVar4 = *local_40;
        uVar5 = local_40[1];
        uVar6 = param_2[-1];
        *local_40 = *puVar10;
        local_40[1] = uVar6;
        *puVar10 = uVar4;
        param_2[-1] = uVar5;
      }
    }
    else if ((long)param_4 < 0x81) {
      if (param_1 + 2 != param_2 && param_1 != param_2) {
        lVar9 = 0;
        puVar10 = param_1 + 2;
        do {
          puVar12 = puVar10;
          cVar7 = (*(code *)*param_3)(puVar12,param_1);
          if (cVar7 != '\0') {
            local_58 = *puVar12;
            uStack_50 = puVar12[1];
            puVar10 = puVar12;
            lVar13 = lVar9;
            do {
              *(undefined4 *)puVar10 = *(undefined4 *)(puVar10 + -2);
              *(undefined4 *)((long)puVar10 + 4) = *(undefined4 *)((long)puVar10 + -0xc);
              *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar10 + -1);
              *(undefined4 *)((long)puVar10 + 0xc) = *(undefined4 *)((long)puVar10 + -4);
              puVar11 = local_40;
              if (lVar13 == 0) break;
              cVar7 = (*(code *)*param_3)(&local_58,puVar10 + -4);
              puVar11 = puVar10 + -2;
              lVar13 = lVar13 + 0x10;
              puVar10 = puVar11;
            } while (cVar7 != '\0');
            *(undefined4 *)puVar11 = (undefined4)local_58;
            *(undefined4 *)((long)puVar11 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((long)puVar11 + 0xc) = uStack_50._4_4_;
          }
          lVar9 = lVar9 + -0x10;
          puVar10 = puVar12 + 2;
          param_1 = puVar12;
        } while (puVar12 + 2 != param_2);
      }
    }
    else {
      uVar8 = param_4 >> 1;
      local_38 = (undefined8 *)(uVar8 * 0x10);
      puVar10 = param_1 + uVar8 * 2;
      local_48 = param_4 - uVar8;
      if (param_6 < (long)param_4) {
        local_38 = (undefined8 *)param_6;
        FUN_100594083(param_1,puVar10,param_3,uVar8,param_5);
        FUN_100594083(puVar10,param_2,param_3,local_48,param_5,local_38);
        FUN_1005944f1(param_1,puVar10,param_2,param_3,uVar8,local_48,param_5,local_38);
      }
      else {
        FUN_1005942c0(param_1,puVar10,param_3,uVar8,param_5);
        local_38 = (undefined8 *)((long)local_38 + (long)param_5);
        FUN_1005942c0(puVar10,param_2,param_3,local_48,local_38);
        puVar12 = param_5 + param_4 * 2;
        puVar10 = local_38;
        do {
          if (puVar10 == puVar12) {
            if (param_5 == local_38) {
              return;
            }
            lVar9 = 0;
            do {
              puVar10 = (undefined8 *)((long)param_5 + lVar9);
              uVar4 = puVar10[1];
              *(undefined8 *)((long)param_1 + lVar9) = *puVar10;
              ((undefined8 *)((long)param_1 + lVar9))[1] = uVar4;
              lVar9 = lVar9 + 0x10;
            } while (puVar10 + 2 != local_38);
            return;
          }
          cVar7 = (*(code *)*param_3)(puVar10,param_5);
          if (cVar7 == '\0') {
            uVar1 = *(undefined4 *)((long)param_5 + 4);
            uVar2 = *(undefined4 *)(param_5 + 1);
            uVar3 = *(undefined4 *)((long)param_5 + 0xc);
            *(undefined4 *)param_1 = *(undefined4 *)param_5;
            *(undefined4 *)((long)param_1 + 4) = uVar1;
            *(undefined4 *)(param_1 + 1) = uVar2;
            *(undefined4 *)((long)param_1 + 0xc) = uVar3;
            param_5 = param_5 + 2;
          }
          else {
            uVar1 = *(undefined4 *)((long)puVar10 + 4);
            uVar2 = *(undefined4 *)(puVar10 + 1);
            uVar3 = *(undefined4 *)((long)puVar10 + 0xc);
            *(undefined4 *)param_1 = *(undefined4 *)puVar10;
            *(undefined4 *)((long)param_1 + 4) = uVar1;
            *(undefined4 *)(param_1 + 1) = uVar2;
            *(undefined4 *)((long)param_1 + 0xc) = uVar3;
            puVar10 = puVar10 + 2;
          }
          param_1 = param_1 + 2;
        } while (param_5 != local_38);
        if (puVar10 != puVar12) {
          lVar9 = 0;
          do {
            puVar11 = (undefined8 *)((long)puVar10 + lVar9);
            uVar4 = puVar11[1];
            *(undefined8 *)((long)param_1 + lVar9) = *puVar11;
            ((undefined8 *)((long)param_1 + lVar9))[1] = uVar4;
            lVar9 = lVar9 + 0x10;
          } while (puVar11 + 2 != puVar12);
        }
      }
    }
  }
  return;
}

