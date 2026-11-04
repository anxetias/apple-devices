// name: FUN_1001b01f4
// address: 1001b01f4

void FUN_1001b01f4(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  
  FUN_1001b28ce();
  cVar2 = FUN_1001e8dbb(param_1 + 0x98);
  if (cVar2 != '\0') {
    FUN_1001e9587(param_1 + 0x98);
  }
  plVar1 = *(long **)(param_1 + 0x80);
  if (plVar1 == (long *)(param_1 + 0x60)) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001001b0249. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + lVar3))();
  return;
}

