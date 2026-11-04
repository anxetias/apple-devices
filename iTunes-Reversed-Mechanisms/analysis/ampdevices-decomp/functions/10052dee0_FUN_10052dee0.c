// name: FUN_10052dee0
// address: 10052dee0

undefined8 FUN_10052dee0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x558) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010052def4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(param_1 + 0x558) + 0x110))();
    return uVar1;
  }
  return 0;
}

