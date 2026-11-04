// name: FUN_10061f695
// address: 10061f695

undefined1 FUN_10061f695(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = FUN_1004744bf(param_2[1],0);
  if ((uVar4 & 0x21800c) != 8) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if ((((*(char *)(lVar1 + 0x39c) != '\0') && (*(char *)(lVar1 + 0xd30) != '\0')) &&
      (*(char *)(lVar1 + 0x3f) == '\0')) &&
     ((*(char *)(lVar1 + 0x2a2) == '\0' || (cVar2 = FUN_1003a7f56(param_2), cVar2 == '\0')))) {
    if (*(char *)(lVar1 + 0x39d) == '\x02') {
      cVar2 = FUN_1002be216(*(undefined8 *)(lVar1 + 0x830),*(undefined8 *)param_2[1]);
      if (cVar2 != '\0') {
        return 1;
      }
      uVar3 = FUN_1002be216(*(undefined8 *)(lVar1 + 0x838),*(undefined8 *)(*param_2 + 0x60));
      return uVar3;
    }
    if (*(char *)(lVar1 + 0x39d) == '\x01') {
      return 1;
    }
  }
  return 0;
}

