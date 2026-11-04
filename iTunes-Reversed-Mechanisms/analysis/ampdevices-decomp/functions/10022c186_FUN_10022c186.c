// name: FUN_10022c186
// address: 10022c186

void FUN_10022c186(undefined2 *param_1)

{
  *param_1 = 0xff00;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_10032f0f2(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  ___bzero(param_1 + 0x4c,0x428);
  FUN_1001b7a44(param_1 + 0x260);
  return;
}

