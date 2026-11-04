// name: FUN_1003bf218
// address: 1003bf218

void FUN_1003bf218(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x1da0);
  if (plVar1 == (long *)(param_1 + 0x1d80)) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_1003bf24b;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_1003bf24b:
  FUN_100235b24(param_1 + 0x1d50);
  FUN_100235b24(param_1 + 0x17c8);
  return;
}

