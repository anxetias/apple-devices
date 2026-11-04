// name: FUN_10023e55a
// address: 10023e55a

void FUN_10023e55a(undefined8 *param_1,undefined8 param_2)

{
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  FUN_1001e9c3e(param_1 + 6);
  *param_1 = &PTR_FUN_10083ea08;
  param_1[0xf] = param_2;
  *(undefined2 *)(param_1 + 0x10) = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 4;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

