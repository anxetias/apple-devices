// name: FUN_10061ce1f
// address: 10061ce1f

undefined1 FUN_10061ce1f(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  
  if ((((param_2 == 0) || (lVar1 = *(long *)(param_1 + 0x20), *(char *)(lVar1 + 0xd31) == '\0')) ||
      (*(char *)(lVar1 + 0x2da) == '\0')) || ((*(byte *)(lVar1 + 0x2d9) & 2) == 0)) {
LAB_10061ce50:
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
    for (lVar4 = *(long *)(*(long *)(param_2 + 0x78) + 8); lVar4 != 0;
        lVar4 = *(long *)(lVar4 + 0x18)) {
      if ((*(long *)(lVar4 + 8) != 0) && ((*(byte *)(*(long *)(lVar4 + 8) + 0xc5) & 4) != 0)) {
        lVar3 = FUN_1002ba359(lVar4);
        if (lVar3 != 0) {
          cVar2 = FUN_1002be216(*(undefined8 *)(lVar1 + 0x818),lVar3);
          if (cVar2 != '\0') goto LAB_10061ce50;
        }
      }
    }
  }
  return uVar5;
}

