// name: FUN_1005e4b52
// address: 1005e4b52

undefined1 FUN_1005e4b52(long param_1)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  
  if ((*(byte *)(*(long *)(param_1 + 8) + 0x1bb4) & 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x5f) == '\0') && (lVar3 = *(long *)(param_1 + 200), lVar3 != 0)) {
      if ((*(byte *)(lVar3 + 0xc5) & 0x10) == 0) goto LAB_1005e4ba4;
      do {
        lVar3 = FUN_1005e3e6c();
        if (lVar3 == 0) break;
LAB_1005e4ba4:
        cVar2 = FUN_100474865(lVar3);
        *(char *)(param_1 + 0x5f) = cVar2;
      } while (cVar2 == '\0');
    }
    uVar1 = *(undefined1 *)(param_1 + 0x5f);
  }
  return uVar1;
}

