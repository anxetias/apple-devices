// name: FUN_10013509c
// address: 10013509c

void FUN_10013509c(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)((long)param_1 + 0x40);
  if (plVar1 == (long *)((long)param_1 + 0x20)) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_1001350c9;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1001350c9:
  operator_delete(param_1);
  return;
}

