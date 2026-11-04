// name: FUN_100323d54
// address: 100323d54

void FUN_100323d54(long *param_1,ulong param_2,undefined8 *param_3)

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
      while (plVar5 = plVar2, param_2 < (ulong)plVar5[4]) {
        plVar2 = (long *)*plVar5;
        plVar4 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_100323d9c;
      }
      if (param_2 <= (ulong)plVar5[4]) {
        return;
      }
      plVar2 = (long *)plVar5[1];
    } while ((long *)plVar5[1] != (long *)0x0);
    plVar4 = plVar5 + 1;
  }
LAB_100323d9c:
  puVar3 = operator_new(0x30);
  uVar1 = param_3[1];
  puVar3[4] = *param_3;
  puVar3[5] = uVar1;
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

