// name: FUN_100465fe6
// address: 100465fe6

void FUN_100465fe6(long *param_1,uint param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  plVar2 = (long *)param_1[1];
  if ((long *)param_1[1] == (long *)0x0) {
    plVar5 = param_1 + 1;
    plVar4 = plVar5;
  }
  else {
    do {
      while (plVar5 = plVar2, param_2 < *(uint *)(plVar5 + 4)) {
        plVar2 = (long *)*plVar5;
        plVar4 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_10046602d;
      }
      if (param_2 <= *(uint *)(plVar5 + 4)) {
        return;
      }
      plVar2 = (long *)plVar5[1];
    } while ((long *)plVar5[1] != (long *)0x0);
    plVar4 = plVar5 + 1;
  }
LAB_10046602d:
  puVar3 = operator_new(0x38);
  *(undefined4 *)(puVar3 + 4) = *param_3;
  uVar1 = *(undefined8 *)(param_3 + 4);
  puVar3[5] = *(undefined8 *)(param_3 + 2);
  puVar3[6] = uVar1;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = plVar5;
  *plVar4 = (long)puVar3;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar3 = (undefined8 *)*plVar4;
  }
  FUN_1001ad344(param_1[1],puVar3);
  param_1[2] = param_1[2] + 1;
  return;
}

