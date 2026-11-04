// name: FUN_1001c3ac4
// address: 1001c3ac4

void FUN_1001c3ac4(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  
  if (param_2 != param_3) {
    do {
      FUN_1001c3b2a(param_1,param_1 + 8,param_2 + 4);
      plVar1 = (long *)param_2[1];
      plVar2 = param_2;
      if ((long *)param_2[1] == (long *)0x0) {
        do {
          param_2 = (long *)plVar2[2];
          bVar3 = (long *)*param_2 != plVar2;
          plVar2 = param_2;
        } while (bVar3);
      }
      else {
        do {
          param_2 = plVar1;
          plVar1 = (long *)*param_2;
        } while ((long *)*param_2 != (long *)0x0);
      }
    } while (param_2 != param_3);
  }
  return;
}

