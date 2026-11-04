// name: FUN_10013a5de
// address: 10013a5de

void FUN_10013a5de(void *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  if (plVar1 == (long *)((long)param_1 + 0x10)) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_10013a60b;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10013a60b:
  operator_delete(param_1);
  return;
}

