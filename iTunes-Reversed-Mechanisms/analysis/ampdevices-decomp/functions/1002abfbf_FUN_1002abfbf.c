// name: FUN_1002abfbf
// address: 1002abfbf

void FUN_1002abfbf(void)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = FUN_100315ede();
joined_r0x0001002abfd1:
  do {
    do {
      lVar1 = lVar3;
      if (lVar1 == 0) {
        return;
      }
      lVar3 = FUN_1003161a8(lVar1);
    } while (((((*(uint *)(lVar1 + 0x240) & 4) != 0) || ((*(byte *)(lVar1 + 0x298) & 1) != 0)) ||
             ((*(uint *)(lVar1 + 0x240) & 8) != 0)) || (*(short *)(lVar1 + 0x10) != 0));
    for (lVar4 = FUN_100485529(lVar1); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x18)) {
      cVar2 = FUN_1002ac6f9(*(undefined8 *)(lVar4 + 8));
      if (cVar2 == '\0') goto joined_r0x0001002abfd1;
    }
    FUN_100488d27(lVar1,0,0);
  } while( true );
}

