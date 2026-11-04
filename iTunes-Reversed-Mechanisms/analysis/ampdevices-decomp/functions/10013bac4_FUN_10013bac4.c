// name: FUN_10013bac4
// address: 10013bac4

void FUN_10013bac4(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  FUN_100203686();
  return;
}

