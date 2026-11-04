// name: FUN_10013d46a
// address: 10013d46a

void FUN_10013d46a(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_100205d70((long)param_1 + 0x40);
  plVar1 = *(long **)((long)param_1 + 0x30);
  if (plVar1 == (long *)((long)param_1 + 0x10)) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_10013d4a1;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10013d4a1:
  operator_delete(param_1);
  return;
}

