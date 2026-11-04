// name: FUN_1003a35b8
// address: 1003a35b8

long FUN_1003a35b8(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    return *(long *)(param_1 + 0x40);
  }
  if ((*(ushort *)(param_1 + 0xf8) & 0x40) != 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    if ((*(ushort *)(param_1 + 0xf8) & 2) == 0) {
      FUN_10055ea6a(param_1);
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      lVar1 = *(long *)(*(long *)(param_1 + 0x60) + 0x58);
      while (lVar1 != 0) {
        lVar1 = *(long *)(*(long *)(lVar1 + 0x10) + 0x58);
        if (lVar1 != 0) {
          *(long *)(param_1 + 0x38) = lVar1;
          break;
        }
        lVar1 = FUN_1003a0a12();
      }
    }
    *(byte *)(param_1 + 0xf8) = *(byte *)(param_1 + 0xf8) & 0xbf;
  }
  return *(long *)(param_1 + 0x38);
}

