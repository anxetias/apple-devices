// name: FUN_10015001e
// address: 10015001e

void FUN_10015001e(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)((long)param_1 + 0x40);
  if (plVar1 == (long *)((long)param_1 + 0x20)) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_10015004b;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10015004b:
  operator_delete(param_1);
  return;
}

