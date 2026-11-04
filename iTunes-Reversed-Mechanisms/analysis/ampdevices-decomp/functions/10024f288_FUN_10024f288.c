// name: FUN_10024f288
// address: 10024f288

void FUN_10024f288(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined1 param_9)

{
  undefined8 uVar1;
  
  FUN_100249ed4();
  FUN_100249ed4(param_1 + 0x10,param_3);
  uVar1 = FUN_1001705fc(param_4);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_1001705fc(param_5);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = FUN_1001705fc(param_6);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_1001705fc(param_7);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = param_8;
  *(undefined1 *)(param_1 + 0x44) = param_9;
  return;
}

