// name: FUN_1002136b2
// address: 1002136b2

void FUN_1002136b2(long param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 0x2ac9) != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002136d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x4e8))((long *)*param_2,1);
  return;
}

