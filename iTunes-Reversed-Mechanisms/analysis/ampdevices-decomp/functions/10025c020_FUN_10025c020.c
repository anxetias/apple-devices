// name: FUN_10025c020
// address: 10025c020

void FUN_10025c020(undefined8 *param_1)

{
  *(undefined2 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0x1e) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + 10) = 0;
  *(undefined8 *)((long)param_1 + 0x12) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((long)param_1 + 0x4d) = 0;
  *(undefined4 *)(param_1 + 0xb) = 100;
  *(undefined2 *)((long)param_1 + 0x5c) = 0;
  FUN_1001c62d9((long)param_1 + 0x1f,1);
  FUN_1001c62d9((long)param_1 + 0x55,3);
  FUN_1001c62d9((long)param_1 + 0x5e,0x28);
  return;
}

