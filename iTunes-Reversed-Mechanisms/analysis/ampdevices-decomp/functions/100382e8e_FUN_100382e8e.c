// name: FUN_100382e8e
// address: 100382e8e

void FUN_100382e8e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  puVar9 = param_1;
  if (param_1 != param_2) {
    do {
      *param_3 = &PTR_FUN_100855b70;
      uVar6 = puVar9[2];
      uVar7 = puVar9[3];
      uVar8 = puVar9[4];
      param_3[1] = puVar9[1];
      param_3[2] = uVar6;
      param_3[3] = uVar7;
      param_3[4] = uVar8;
      param_3[5] = puVar9[5];
      lVar2 = puVar9[7];
      uVar6 = puVar9[7];
      param_3[6] = puVar9[6];
      param_3[7] = uVar6;
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      lVar2 = puVar9[9];
      uVar3 = *(undefined4 *)((long)puVar9 + 0x44);
      uVar4 = *(undefined4 *)(puVar9 + 9);
      uVar5 = *(undefined4 *)((long)puVar9 + 0x4c);
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(puVar9 + 8);
      *(undefined4 *)((long)param_3 + 0x44) = uVar3;
      *(undefined4 *)(param_3 + 9) = uVar4;
      *(undefined4 *)((long)param_3 + 0x4c) = uVar5;
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      puVar9 = puVar9 + 10;
      param_3 = param_3 + 10;
    } while (puVar9 != param_2);
    do {
      (**(code **)*param_1)(param_1);
      param_1 = param_1 + 10;
    } while (param_1 != param_2);
  }
  return;
}

