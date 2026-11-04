// name: FUN_10052dcae
// address: 10052dcae

undefined8 FUN_10052dcae(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x558) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010052dcc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x558) + 0x58))();
    return uVar1;
  }
  return 0;
}

