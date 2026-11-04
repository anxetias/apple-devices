// name: FUN_100448f36
// address: 100448f36

void FUN_100448f36(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    _CFRelease();
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (*(long *)(param_1 + 0x90) != 0) {
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x98);
  }
  puVar2 = PTR__kCMTimeZero_10082bc18;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(PTR__kCMTimeZero_10082bc18 + 0x10);
  uVar1 = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)puVar2;
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}

