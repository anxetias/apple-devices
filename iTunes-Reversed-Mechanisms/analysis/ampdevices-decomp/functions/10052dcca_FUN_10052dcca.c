// name: FUN_10052dcca
// address: 10052dcca

undefined8 FUN_10052dcca(long param_1,long param_2)

{
  undefined8 uVar1;
  
  *(long *)(param_1 + 0x550) = *(long *)(param_1 + 0x550) + param_2;
  if (*(long **)(param_1 + 0x558) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010052dcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x558) + 0xc0))();
    return uVar1;
  }
  return 0;
}

