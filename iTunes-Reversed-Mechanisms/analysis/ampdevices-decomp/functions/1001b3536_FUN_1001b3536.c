// name: FUN_1001b3536
// address: 1001b3536

void FUN_1001b3536(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0x3ff0000000000000;
  param_2[8] = 0x100000000;
  *param_2 = &PTR_FUN_10083cad0;
  uVar1 = _CGImageRetain(param_3);
  param_2[9] = uVar1;
  param_2[10] = 0;
  *(undefined4 *)(param_2 + 0xb) = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = param_1;
  return;
}

