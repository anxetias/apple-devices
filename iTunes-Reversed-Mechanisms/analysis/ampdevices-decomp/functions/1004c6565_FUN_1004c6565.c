// name: FUN_1004c6565
// address: 1004c6565

undefined8 FUN_1004c6565(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if ((long *)*param_1 != (long *)0x0) {
      (**(code **)(*(long *)*param_1 + 8))();
      *param_1 = 0;
    }
    FUN_1001c64c1(param_1);
  }
  return 0;
}

