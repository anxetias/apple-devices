// name: FUN_100567324
// address: 100567324

long * FUN_100567324(long *param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)param_1[1];
  if ((long *)param_1[1] == (long *)0x0) {
    plVar4 = param_1 + 1;
    plVar3 = plVar4;
  }
  else {
    do {
      while (plVar4 = plVar2, param_2 < (ulong)plVar4[4]) {
        plVar2 = (long *)*plVar4;
        plVar3 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_10056736f;
      }
      if (param_2 <= (ulong)plVar4[4]) {
        return plVar4;
      }
      plVar2 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar3 = plVar4 + 1;
  }
LAB_10056736f:
  plVar1 = operator_new(0x30);
  plVar1[4] = *param_3;
  plVar1[5] = 0;
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar1[2] = (long)plVar4;
  *plVar3 = (long)plVar1;
  plVar2 = plVar1;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar2 = (long *)*plVar3;
  }
  FUN_1001ad344(param_1[1],plVar2);
  param_1[2] = param_1[2] + 1;
  return plVar1;
}

