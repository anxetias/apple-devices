// name: FUN_10020e52a
// address: 10020e52a

long * FUN_10020e52a(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  
  plVar2 = param_2;
  plVar1 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar3 = (long *)plVar2[2];
      bVar4 = (long *)*plVar3 != plVar2;
      plVar2 = plVar3;
    } while (bVar4);
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = (long)plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_1001b7512(param_1[1]);
  return plVar3;
}

