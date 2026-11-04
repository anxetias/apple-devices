// name: FUN_1005033a5
// address: 1005033a5

undefined1 FUN_1005033a5(void)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = FUN_1004de449();
  if ((lVar2 == 0) || (*(char *)(DAT_1008c76a0 + 0x1a94) != '\0')) {
    uVar1 = 0;
  }
  else {
    FUN_1004e8318(lVar2,0);
    uVar1 = *(undefined1 *)(lVar2 + 0x6af0);
  }
  return uVar1;
}

