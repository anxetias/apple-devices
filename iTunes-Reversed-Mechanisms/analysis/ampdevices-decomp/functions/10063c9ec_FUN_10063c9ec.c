// name: FUN_10063c9ec
// address: 10063c9ec

void FUN_10063c9ec(long param_1,long param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_2 + 0x144) = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 0x14c) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x150) = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_2 + 0x19c) = *(undefined4 *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x14) != 0 || *(int *)(param_1 + 0x18) != 0) {
    FUN_100473a90(param_2);
    lVar1 = *(long *)(param_2 + 0x80);
    *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(lVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  }
  return;
}

