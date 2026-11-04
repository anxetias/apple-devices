// name: FUN_100133056
// address: 100133056

void FUN_100133056(long *param_1)

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
      plVar4 = (long *)plVar5[-2];
      plVar5 = plVar5 + -6;
      if (plVar5 == plVar4) {
        lVar3 = 0x20;
LAB_10013309a:
        (**(code **)(*plVar4 + lVar3))();
      }
      else {
        lVar3 = 0x28;
        if (plVar4 != (long *)0x0) goto LAB_10013309a;
      }
    } while (plVar5 != plVar2);
    plVar4 = *(long **)*param_1;
  }
  plVar1[1] = (long)plVar2;
  operator_delete(plVar4);
  return;
}

