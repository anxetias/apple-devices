// name: FUN_10015d7a0
// address: 10015d7a0

undefined1 FUN_10015d7a0(long param_1)

{
  undefined1 uVar1;
  
  if (((*(int *)(param_1 + 8) != 0x6c70636d) || ((*(uint *)(param_1 + 0xc) & 3) != 1)) ||
     (uVar1 = 1, *(int *)(param_1 + 0x20) != 0x20)) {
    uVar1 = 0;
  }
  return uVar1;
}

