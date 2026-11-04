// name: FUN_1001e54d7
// address: 1001e54d7

undefined1 FUN_1001e54d7(ushort *param_1)

{
  ulong uVar1;
  
  if ((ulong)*param_1 != 0) {
    uVar1 = 0;
    do {
      if (0x7f < param_1[uVar1 + 1]) {
        return 0;
      }
      uVar1 = uVar1 + 1;
    } while (*param_1 != uVar1);
  }
  return 1;
}

