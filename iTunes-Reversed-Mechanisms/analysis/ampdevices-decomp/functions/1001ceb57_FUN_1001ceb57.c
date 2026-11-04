// name: FUN_1001ceb57
// address: 1001ceb57

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001ceb57(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double dVar2;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    dVar2 = (double)FUN_1001ebd46();
    if (_DAT_100711ef0 < dVar2 - (double)param_1[5]) {
      param_1[5] = (long)dVar2;
                    /* WARNING: Could not recover jumptable at 0x0001001cebb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)*param_1)(param_1,0x69646c65,param_2,param_3,param_4);
      return uVar1;
    }
  }
  return 0;
}

