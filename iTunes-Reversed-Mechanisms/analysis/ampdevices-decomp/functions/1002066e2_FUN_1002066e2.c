// name: FUN_1002066e2
// address: 1002066e2

void FUN_1002066e2(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  byte local_40 [16];
  void *local_30;
  
  plVar1 = (long *)(param_1 + 0x1b0);
  FUN_100147c92(local_40);
  plVar3 = (long *)FUN_1002074ea(plVar1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (plVar3 != (long *)(param_1 + 0x1b8)) {
    FUN_1001c4b9c(plVar3[7]);
    FUN_1001c64c1(plVar3[7]);
    plVar5 = plVar3;
    plVar2 = (long *)plVar3[1];
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar6 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar6);
    }
    else {
      do {
        plVar4 = plVar2;
        plVar2 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
    if ((long *)*plVar1 == plVar3) {
      *plVar1 = (long)plVar4;
    }
    *(long *)(param_1 + 0x1c0) = *(long *)(param_1 + 0x1c0) + -1;
    FUN_1001b7512(*(undefined8 *)(param_1 + 0x1b8),plVar3);
    if ((*(byte *)(plVar3 + 4) & 1) != 0) {
      operator_delete((void *)plVar3[6]);
    }
    operator_delete(plVar3);
  }
  return;
}

