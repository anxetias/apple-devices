// name: FUN_1001ceb24
// address: 1001ceb24

undefined8 FUN_1001ceb24(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != (undefined8 *)0x0) && ((code *)*param_1 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001001ceb36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*param_1)();
    return uVar1;
  }
  return 0;
}

