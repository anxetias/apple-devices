// name: FUN_100285a3c
// address: 100285a3c

void FUN_100285a3c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  
  plVar3 = param_2;
  plVar1 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar2 = (long *)plVar3[2];
      bVar4 = (long *)*plVar2 != plVar3;
      plVar3 = plVar2;
    } while (bVar4);
  }
  else {
    do {
      plVar2 = plVar1;
      plVar1 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = (long)plVar2;
  }
  param_1[2] = param_1[2] + -1;
  FUN_1001b7512(param_1[1],param_2);
  FUN_100205d70(param_2 + 5);
  FUN_1001ab006(param_2 + 4);
  operator_delete(param_2);
  return;
}

