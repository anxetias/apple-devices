// name: FUN_1001119ec
// address: 1001119ec

void FUN_1001119ec(long param_1)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0xa34) = 0;
  *(undefined8 *)(param_1 + 0xa3c) = 0;
  *(undefined8 *)(param_1 + 0xa44) = 0;
  *(undefined8 *)(param_1 + 0xa4c) = 0;
  *(undefined8 *)(param_1 + 0xa54) = 0;
  *(undefined8 *)(param_1 + 0xa5c) = 0;
  *(undefined8 *)(param_1 + 0xa64) = 0;
  *(undefined8 *)(param_1 + 0xa6c) = 0;
  *(undefined8 *)(param_1 + 0xa74) = 0;
  *(undefined8 *)(param_1 + 0xa7c) = 0;
  *(undefined8 *)(param_1 + 0xa84) = 0;
  *(undefined4 *)(param_1 + 0xa8c) = 0;
  if (*(int *)(param_1 + 0xb20) == 0) {
    *(undefined4 *)(param_1 + 0xa38) = 0;
  }
  lVar1 = 0;
  do {
    *(undefined1 *)(param_1 + 0x494 + lVar1) = 0;
    *(undefined1 *)(param_1 + 0x498 + lVar1) = 0;
    *(undefined1 *)(param_1 + 0x49a + lVar1) = 0;
    *(undefined4 *)(param_1 + 0x49c + lVar1) = 0;
    *(undefined1 *)(param_1 + 0x508 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x4a0 + lVar1) = 0;
    lVar1 = lVar1 + 0x78;
  } while (lVar1 != 0x5a0);
  return;
}

