// name: FUN_1001071ee
// address: 1001071ee

void FUN_1001071ee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10082fd50;
  if ((long *)param_1[0x485] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010010720c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[0x485] + 8))();
    return;
  }
  return;
}

