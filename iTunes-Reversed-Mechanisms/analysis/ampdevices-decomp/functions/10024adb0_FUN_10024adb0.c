// name: FUN_10024adb0
// address: 10024adb0

long FUN_10024adb0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_1 != param_2) {
    FUN_10017060f(*(undefined8 *)(param_1 + 0x20));
    FUN_10017060f(*(undefined8 *)(param_1 + 0x28));
    FUN_10017060f(*(undefined8 *)(param_1 + 0x30));
    FUN_10017060f(*(undefined8 *)(param_1 + 0x38));
    FUN_100249f2c(param_1,param_2);
    FUN_100249f2c(param_1 + 0x10,param_2 + 0x10);
    uVar1 = FUN_1001705fc(*(undefined8 *)(param_2 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    uVar1 = FUN_1001705fc(*(undefined8 *)(param_2 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    uVar1 = FUN_1001705fc(*(undefined8 *)(param_2 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    uVar1 = FUN_1001705fc(*(undefined8 *)(param_2 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
  }
  return param_1;
}

