// name: FUN_1004c2c06
// address: 1004c2c06

undefined8 FUN_1004c2c06(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x4f0) == 0) {
    uVar1 = 0xffffffce;
  }
  else {
    *(undefined2 *)(param_1 + 0x50a) = 0;
    uVar1 = 0;
    if (*(long *)(*(long *)(param_1 + 0x4f0) + 0x4b0) != 0) {
      FUN_10044516e(0);
    }
  }
  return uVar1;
}

