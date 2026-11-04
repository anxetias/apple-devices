// name: FUN_10012d226
// address: 10012d226

void FUN_10012d226(void *param_1)

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
    if (plVar1 == (long *)0x0) goto LAB_10012d25d;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10012d25d:
  operator_delete(param_1);
  return;
}

