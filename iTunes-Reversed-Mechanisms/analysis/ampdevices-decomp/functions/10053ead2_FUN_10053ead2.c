// name: FUN_10053ead2
// address: 10053ead2

undefined4 FUN_10053ead2(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x4b0) == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0x4b4);
  }
  return uVar1;
}

