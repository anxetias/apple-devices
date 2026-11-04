// name: FUN_10052cdf4
// address: 10052cdf4

undefined8 FUN_10052cdf4(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x5b0);
  }
  return *(undefined8 *)(param_1 + 0x598);
}

