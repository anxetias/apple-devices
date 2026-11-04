// name: FUN_100133548
// address: 100133548

void FUN_100133548(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    plVar4 = (long *)param_1[1];
    plVar3 = plVar1;
    if (plVar4 != plVar1) {
      do {
        plVar3 = (long *)plVar4[-2];
        plVar4 = plVar4 + -6;
        if (plVar4 == plVar3) {
          lVar2 = 0x20;
LAB_100133587:
          (**(code **)(*plVar3 + lVar2))();
        }
        else {
          lVar2 = 0x28;
          if (plVar3 != (long *)0x0) goto LAB_100133587;
        }
      } while (plVar4 != plVar1);
      plVar3 = (long *)*param_1;
    }
    param_1[1] = (long)plVar1;
    operator_delete(plVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

