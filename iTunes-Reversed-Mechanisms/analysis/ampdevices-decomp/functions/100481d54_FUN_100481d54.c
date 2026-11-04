// name: FUN_100481d54
// address: 100481d54

void FUN_100481d54(long *param_1,int param_2)

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
      if (param_2 <= (int)plVar4[4]) {
        plVar5 = plVar4;
      }
      plVar4 = (long *)plVar4[(int)plVar4[4] < param_2];
    } while (plVar4 != (long *)0x0);
    if ((plVar5 != param_1 + 1) && ((int)plVar5[4] <= param_2)) {
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

