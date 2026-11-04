// name: FUN_10015811a
// address: 10015811a

void FUN_10015811a(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  
  *param_1 = &PTR_FUN_10083bff0;
  plVar2 = (long *)param_1[0x19];
  while (plVar2 != param_1 + 0x1a) {
    FUN_10017060f(plVar2[5]);
    plVar1 = (long *)plVar2[1];
    plVar3 = plVar2;
    if ((long *)plVar2[1] == (long *)0x0) {
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
  }
  plVar2 = (long *)param_1[0x1c];
  while (plVar2 != param_1 + 0x1d) {
    FUN_10017060f(plVar2[5]);
    plVar1 = (long *)plVar2[1];
    plVar3 = plVar2;
    if ((long *)plVar2[1] == (long *)0x0) {
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
  }
  FUN_1002a41f4(param_1 + 0x1c,param_1[0x1d]);
  FUN_1002a41f4(param_1 + 0x19,param_1[0x1a]);
  FUN_1002a41f4(param_1 + 0x16,param_1[0x17]);
  FUN_1002a41f4(param_1 + 0x13,param_1[0x14]);
  FUN_1002a41f4(param_1 + 0x10,param_1[0x11]);
  FUN_1002a41f4(param_1 + 0xd,param_1[0xe]);
  FUN_1002a41f4(param_1 + 10,param_1[0xb]);
  FUN_1002a41f4(param_1 + 7,param_1[8]);
  FUN_1002a41f4(param_1 + 4,param_1[5]);
  FUN_1002a41f4(param_1 + 1,param_1[2]);
  return;
}

