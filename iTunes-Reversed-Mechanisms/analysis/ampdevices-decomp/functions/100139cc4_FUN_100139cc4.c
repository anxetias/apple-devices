// name: FUN_100139cc4
// address: 100139cc4

void FUN_100139cc4(long param_1)

{
  long *plVar1;
  
  FUN_1001b7a50(param_1 + 0x1b8);
  FUN_100134af8(param_1 + 0x1b0,0);
  plVar1 = *(long **)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_10013ed3c(param_1);
  return;
}

