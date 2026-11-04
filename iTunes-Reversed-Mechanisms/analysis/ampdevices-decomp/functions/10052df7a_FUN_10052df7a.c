// name: FUN_10052df7a
// address: 10052df7a

undefined8 FUN_10052df7a(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x558) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010052df95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x558) + 0xe8))();
    return uVar1;
  }
  return 0;
}

