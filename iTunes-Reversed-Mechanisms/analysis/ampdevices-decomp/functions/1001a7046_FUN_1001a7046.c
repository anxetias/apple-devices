// name: FUN_1001a7046
// address: 1001a7046

long FUN_1001a7046(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001001a7058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (**(code **)(param_1 + 0x18))();
    return lVar1;
  }
  lVar1 = (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x38));
  if (lVar1 == 0xffffffff) {
    lVar1 = -1;
  }
  return lVar1;
}

