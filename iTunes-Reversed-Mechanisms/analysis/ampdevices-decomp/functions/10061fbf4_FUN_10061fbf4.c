// name: FUN_10061fbf4
// address: 10061fbf4

void FUN_10061fbf4(long *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  
  plVar1 = (long *)param_1[1];
  if (plVar1 != (long *)0x0) {
    plVar4 = plVar1;
    plVar5 = param_1 + 1;
    do {
      bVar6 = *(uint *)((long)plVar4 + 0x1c) < param_2;
      if (!bVar6) {
        plVar5 = plVar4;
      }
      plVar4 = (long *)plVar4[bVar6];
    } while (plVar4 != (long *)0x0);
    if ((plVar5 != param_1 + 1) && (*(uint *)((long)plVar5 + 0x1c) <= param_2)) {
      plVar4 = plVar5;
      plVar2 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar4[2];
          bVar6 = (long *)*plVar3 != plVar4;
          plVar4 = plVar3;
        } while (bVar6);
      }
      else {
        do {
          plVar3 = plVar2;
          plVar2 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      if ((long *)*param_1 == plVar5) {
        *param_1 = (long)plVar3;
      }
      param_1[2] = param_1[2] + -1;
      FUN_1001b7512(plVar1,plVar5);
      operator_delete(plVar5);
      return;
    }
  }
  return;
}

