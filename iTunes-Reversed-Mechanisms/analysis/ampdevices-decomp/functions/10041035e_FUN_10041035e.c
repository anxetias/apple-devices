// name: FUN_10041035e
// address: 10041035e

void FUN_10041035e(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined1 param_16,
                  undefined1 param_17,undefined8 param_18)

{
  undefined8 uVar1;
  
  *param_3 = param_4;
  param_3[1] = param_5;
  FUN_1001b7a5c(param_3 + 8,param_6);
  *(undefined8 *)(param_3 + 0x18) = param_7;
  FUN_1001b7a5c(param_3 + 0x20,param_8);
  *(undefined8 *)(param_3 + 0x30) = 0;
  FUN_1001b7a5c(param_3 + 0x38,param_9);
  FUN_1001b7a5c(param_3 + 0x48,param_10);
  FUN_1001b7a5c(param_3 + 0x58,param_11);
  FUN_1001b7a5c(param_3 + 0x68,param_12);
  *(undefined4 *)(param_3 + 0x78) = param_13;
  *(undefined4 *)(param_3 + 0x7c) = param_14;
  FUN_1001b7a5c(param_3 + 0x80,param_15);
  param_3[0x90] = param_16;
  *(undefined8 *)(param_3 + 0x98) = param_1;
  *(undefined8 *)(param_3 + 0xa0) = param_2;
  param_3[0xa8] = param_17;
  uVar1 = FUN_1001705fc(param_18);
  *(undefined8 *)(param_3 + 0xb0) = uVar1;
  return;
}

