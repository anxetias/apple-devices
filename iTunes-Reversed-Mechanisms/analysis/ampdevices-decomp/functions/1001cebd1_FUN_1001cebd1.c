// name: FUN_1001cebd1
// address: 1001cebd1

undefined8 FUN_1001cebd1(undefined4 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != (undefined8 *)0x0) && ((code *)*param_2 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001001cebf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)*param_2)(param_2,0x7570726d,param_1,100,0);
    return uVar1;
  }
  return 0;
}

