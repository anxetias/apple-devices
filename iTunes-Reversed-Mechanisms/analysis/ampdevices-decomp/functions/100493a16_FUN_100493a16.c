// name: FUN_100493a16
// address: 100493a16

void FUN_100493a16(long *param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)param_1[1];
  if ((long *)param_1[1] == (long *)0x0) {
    plVar4 = param_1 + 1;
    plVar3 = plVar4;
  }
  else {
    do {
      while (plVar4 = plVar1, param_2 < (ulong)plVar4[4]) {
        plVar1 = (long *)*plVar4;
        plVar3 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_100493a5e;
      }
      if (param_2 <= (ulong)plVar4[4]) {
        return;
      }
      plVar1 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar3 = plVar4 + 1;
  }
LAB_100493a5e:
  puVar2 = operator_new(0x28);
  puVar2[4] = param_3;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = plVar4;
  *plVar3 = (long)puVar2;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar2 = (undefined8 *)*plVar3;
  }
  FUN_1001ad344(param_1[1],puVar2);
  param_1[2] = param_1[2] + 1;
  return;
}

