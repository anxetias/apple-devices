// name: FUN_100249c30
// address: 100249c30

void FUN_100249c30(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_1001b7a44(param_1 + 1);
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[10] = 0xffffffffffffffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_1001c62d9((long)param_1 + 0x1c,4);
  FUN_1001c62d9(param_1 + 5,0x20);
  return;
}

