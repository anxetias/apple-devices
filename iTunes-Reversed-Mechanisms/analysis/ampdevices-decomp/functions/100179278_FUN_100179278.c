// name: FUN_100179278
// address: 100179278

void FUN_100179278(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 9) = 0;
  *(undefined8 *)((long)param_1 + 0x11) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10015a028(param_1 + 4);
  return;
}

