// name: FUN_10052df58
// address: 10052df58

undefined8 FUN_10052df58(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x558) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010052df73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x558) + 0xe0))();
    return uVar1;
  }
  return 0;
}

