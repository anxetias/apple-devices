// name: FUN_100502b90
// address: 100502b90

byte FUN_100502b90(void)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = FUN_1004de449();
  if ((((lVar2 == 0) || (*(char *)(lVar2 + 0x6acf) != '\0')) || (*(int *)(lVar2 + 0x6b0c) != 0)) ||
     (*(long *)(lVar2 + 0x30) == 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)(lVar2 + 0x30) + 0x2be0) >> 5 & 1;
  }
  return bVar1;
}

