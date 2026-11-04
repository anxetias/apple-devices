// name: FUN_10061fb66
// address: 10061fb66

long * FUN_10061fb66(long param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 8);
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    plVar3 = (long *)(param_1 + 8);
    plVar2 = plVar3;
  }
  else {
    do {
      while (plVar3 = plVar1, param_2 < (ulong)plVar3[4]) {
        plVar1 = (long *)*plVar3;
        plVar2 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_10061fbb1;
      }
      if (param_2 <= (ulong)plVar3[4]) {
        return plVar3;
      }
      plVar1 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar2 = plVar3 + 1;
  }
LAB_10061fbb1:
  plVar1 = operator_new(0x30);
  plVar1[4] = *param_3;
  plVar1[5] = 0;
  FUN_10020e4b6(param_1,plVar3,plVar2,plVar1);
  return plVar1;
}

