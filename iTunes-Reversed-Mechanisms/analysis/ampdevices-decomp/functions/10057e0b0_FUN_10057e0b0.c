// name: FUN_10057e0b0
// address: 10057e0b0

undefined8 FUN_10057e0b0(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  if ((((*(char *)(param_1 + 0x44) != '\0') || (*(long *)(param_1 + 0x80) != 0)) ||
      (*(long *)(param_1 + 0x98) != *(long *)(param_1 + 0x90))) ||
     (((*(long *)(param_1 + 0xb0) != *(long *)(param_1 + 0xa8) ||
       (*(long *)(param_1 + 200) != *(long *)(param_1 + 0xc0))) ||
      ((*(long *)(param_1 + 0xe0) != *(long *)(param_1 + 0xd8) || (*(long *)(param_1 + 0x108) != 0))
      )))) {
    return 1;
  }
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x30) != 0) {
      return 1;
    }
    plVar2 = (long *)(lVar1 + 0x58);
    uVar3 = 0xffffffffffffffff;
    do {
      if (uVar3 == 6) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      lVar1 = *plVar2;
      plVar2 = plVar2 + 5;
    } while (lVar1 == 0);
    if (uVar3 < 7) {
      return 1;
    }
  }
  return 0;
}

