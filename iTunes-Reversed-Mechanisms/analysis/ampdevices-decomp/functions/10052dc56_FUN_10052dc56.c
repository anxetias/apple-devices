// name: FUN_10052dc56
// address: 10052dc56

undefined8 FUN_10052dc56(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x558) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010052dc6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x558) + 0x68))();
    return uVar1;
  }
  return 0;
}

