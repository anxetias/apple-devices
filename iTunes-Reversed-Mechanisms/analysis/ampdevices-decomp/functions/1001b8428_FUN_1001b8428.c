// name: FUN_1001b8428
// address: 1001b8428

undefined8 FUN_1001b8428(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (((long *)*param_1 == (long *)0x0) || (*(long *)*param_1 == 0)) {
    plVar1 = (long *)param_1[1];
    if (plVar1 == (long *)0x0) {
      uVar2 = 1;
    }
    else {
      uVar2 = CONCAT71((int7)((ulong)plVar1 >> 8),*plVar1 == 0);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

