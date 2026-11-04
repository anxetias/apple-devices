// name: FUN_1005c8650
// address: 1005c8650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005c8650(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  
  plVar3 = param_1;
  plVar1 = (long *)param_1[1];
  if ((long *)param_1[1] == (long *)0x0) {
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
  if (DAT_1008c2fa8 == param_1) {
    DAT_1008c2fa8 = plVar2;
  }
  _DAT_1008c2fb8 = _DAT_1008c2fb8 + -1;
  FUN_1001b7512(DAT_1008c2fb0);
  return;
}

