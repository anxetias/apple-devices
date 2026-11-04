// name: FUN_100601742
// address: 100601742

undefined8 FUN_100601742(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 local_38;
  
  if ((*(char *)(param_1 + 0x68) == '\x01') && (*(long *)(param_1 + 0x58) != 0)) {
    lVar2 = FUN_10017076e(*(undefined8 *)(param_1 + 0x38));
    if (0 < lVar2) {
      lVar3 = 0;
      do {
        local_38 = 0;
        FUN_100325516(param_1,lVar3,&local_38,0,0,0);
        cVar1 = FUN_100170633(local_38,*(undefined8 *)(param_1 + 0x58));
        FUN_10017060f(local_38);
        if (cVar1 != '\0') {
          *(long *)(param_1 + 0x60) = lVar3;
          break;
        }
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
  }
  return *(undefined8 *)(param_1 + 0x60);
}

