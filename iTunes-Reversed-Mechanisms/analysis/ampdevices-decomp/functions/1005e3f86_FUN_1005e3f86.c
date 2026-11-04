// name: FUN_1005e3f86
// address: 1005e3f86

ulong FUN_1005e3f86(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 unaff_RBX;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 200);
    uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if (lVar2 != 0) {
      if ((*(byte *)(lVar2 + 0xc5) & 0x10) != 0) goto LAB_1005e3fb4;
      do {
        uVar1 = FUN_100481a53(lVar2);
        uVar3 = (ulong)uVar1;
        if ((char)uVar1 == '\0') break;
LAB_1005e3fb4:
        lVar2 = FUN_1005e3e6c();
      } while (lVar2 != 0);
    }
  }
  return uVar3 & 0xffffffff;
}

