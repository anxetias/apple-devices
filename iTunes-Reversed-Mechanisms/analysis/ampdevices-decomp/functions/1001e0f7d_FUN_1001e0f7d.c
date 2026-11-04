// name: FUN_1001e0f7d
// address: 1001e0f7d

undefined1 FUN_1001e0f7d(byte *param_1,long param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if (0 < param_2) {
    pbVar2 = param_1 + param_2;
    do {
      if (9 < (byte)(*param_1 - 0x30)) {
        uVar1 = *param_1 - 0x41;
        if (0x25 < uVar1) {
          return 0;
        }
        if ((0x3f0000003fU >> ((ulong)uVar1 & 0x3f) & 1) == 0) {
          return 0;
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < pbVar2);
  }
  return 1;
}

