// name: FUN_1001368d4
// address: 1001368d4

void FUN_1001368d4(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  if (plVar1 == (long *)((long)param_1 + 0x10)) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_100136901;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_100136901:
  operator_delete(param_1);
  return;
}

