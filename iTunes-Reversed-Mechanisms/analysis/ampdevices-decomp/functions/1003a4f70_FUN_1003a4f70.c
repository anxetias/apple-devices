// name: FUN_1003a4f70
// address: 1003a4f70

void FUN_1003a4f70(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)((long)param_1 + 0x40);
  if (plVar1 == (long *)((long)param_1 + 0x20)) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_1003a4f9d;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1003a4f9d:
  operator_delete(param_1);
  return;
}

