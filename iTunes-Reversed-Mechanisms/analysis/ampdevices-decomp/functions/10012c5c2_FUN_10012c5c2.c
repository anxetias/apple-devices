// name: FUN_10012c5c2
// address: 10012c5c2

void FUN_10012c5c2(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar1 = (long *)*param_1;
  plVar2 = (long *)*plVar1;
  if (plVar2 == (long *)0x0) {
    return;
  }
  plVar5 = (long *)plVar1[1];
  plVar4 = plVar2;
  if (plVar5 != plVar2) {
    do {
      plVar4 = (long *)plVar5[-4];
      plVar5 = plVar5 + -8;
      if (plVar5 == plVar4) {
        lVar3 = 0x20;
LAB_10012c606:
        (**(code **)(*plVar4 + lVar3))();
      }
      else {
        lVar3 = 0x28;
        if (plVar4 != (long *)0x0) goto LAB_10012c606;
      }
    } while (plVar5 != plVar2);
    plVar4 = *(long **)*param_1;
  }
  plVar1[1] = (long)plVar2;
  operator_delete(plVar4);
  return;
}

