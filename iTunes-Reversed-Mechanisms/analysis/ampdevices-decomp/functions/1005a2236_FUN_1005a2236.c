// name: FUN_1005a2236
// address: 1005a2236

void FUN_1005a2236(long param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_10017060f(*(undefined8 *)(param_1 + 0x68));
  FUN_10017060f(*(undefined8 *)(param_1 + 0x70));
  FUN_10017060f(*(undefined8 *)(param_1 + 0x78));
  FUN_10017060f(*(undefined8 *)(param_1 + 0x80));
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
                    /* WARNING: Could not recover jumptable at 0x0001005a2292. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + lVar2))();
  return;
}

