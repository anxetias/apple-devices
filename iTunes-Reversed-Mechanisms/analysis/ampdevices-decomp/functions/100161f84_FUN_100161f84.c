// name: FUN_100161f84
// address: 100161f84

void FUN_100161f84(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  uVar3 = _CFURLCredentialStorageCreate(DAT_1008c4d90);
  *(undefined8 *)(param_1 + 0x24) = uVar3;
  uVar3 = FUN_100172e65(DAT_1008c4d90,0,PTR__kCFTypeSetCallBacks_10082e148);
  *(undefined8 *)(param_1 + 0x26) = uVar3;
  puVar2 = PTR__kCFTypeDictionaryValueCallBacks_10082e140;
  puVar1 = PTR__kCFTypeDictionaryKeyCallBacks_10082e138;
  uVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar3 = FUN_100171409(DAT_1008c4d90,0,puVar1,puVar2);
  *(undefined8 *)(param_1 + 0x2a) = uVar3;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  FUN_1001e9c3e(param_1);
  FUN_1001e9c3e(param_1 + 0x12);
  return;
}

