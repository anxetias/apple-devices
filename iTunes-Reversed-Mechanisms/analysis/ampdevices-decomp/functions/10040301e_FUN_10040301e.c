// name: FUN_10040301e
// address: 10040301e

void FUN_10040301e(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0xae0) != 0) {
    FUN_1003b92bd();
  }
  FUN_100235b24(param_1 + 0xb30);
  FUN_1001b7a50(param_1 + 0x88);
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == (long *)(param_1 + 0x10)) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010040307c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + lVar2))();
  return;
}

