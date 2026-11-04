// name: FUN_1003c2b00
// address: 1003c2b00

void FUN_1003c2b00(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1008572b8;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  param_1[0x90] = 0;
  *(undefined8 *)((long)param_1 + 0x4b4) = 0;
  *(undefined8 *)((long)param_1 + 0x4bc) = 0;
  *(undefined8 *)((long)param_1 + 0x4c4) = 0;
  *(undefined8 *)((long)param_1 + 0x4cc) = 0;
  *(undefined4 *)((long)param_1 + 0x4d4) = 0;
  FUN_1001c62d9(param_1 + 4,0x460);
  FUN_1001c62d9(param_1 + 0x91,0x2c);
  return;
}

