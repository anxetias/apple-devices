// name: FUN_10024f328
// address: 10024f328

void FUN_10024f328(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_100249ed4();
  FUN_100249ed4(param_1 + 0x10,param_2 + 0x10);
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
  return;
}

