// name: FUN_100156c06
// address: 100156c06

void FUN_100156c06(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)((long)param_1 + 0x40);
  if (plVar1 == (long *)((long)param_1 + 0x20)) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_100156c33;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_100156c33:
  operator_delete(param_1);
  return;
}

