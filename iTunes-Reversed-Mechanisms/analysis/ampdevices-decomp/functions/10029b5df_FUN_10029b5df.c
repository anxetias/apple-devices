// name: FUN_10029b5df
// address: 10029b5df

void FUN_10029b5df(undefined8 param_1,long param_2,uint param_3,byte param_4)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = (ulong)param_3;
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = 0;
    uVar5 = 0;
    do {
      uVar5 = uVar5 + (*(char *)(param_2 + 0x33 + lVar3) == '\0');
      lVar3 = lVar3 + 0x78;
    } while (uVar4 * 0x78 - lVar3 != 0);
  }
  lVar3 = FUN_100496019();
  do {
    if (lVar3 == 0) {
      FUN_10029afed(param_1,1,0,param_2,uVar4);
      return;
    }
    if (*(int *)(lVar3 + 0xa4) != 0) {
      *(undefined1 *)(lVar3 + 0xb3) = 0;
      *(undefined2 *)(lVar3 + 0x70) = 0;
      if ((*(char *)(lVar3 + 0xd7) == '\0') && ((*(byte *)(lVar3 + 0xb2) & param_4) == 0)) {
        cVar2 = FUN_10029b39e(lVar3);
        bVar1 = *(byte *)(lVar3 + 0x80);
        if (cVar2 == '\0') {
          if (2 < bVar1 - 1) {
            if (bVar1 == 0) goto LAB_10029b697;
            if (bVar1 != 5) goto LAB_10029b6e0;
          }
LAB_10029b6d1:
          *(byte *)(lVar3 + 0xb3) = *(byte *)(lVar3 + 0xb3) | 1;
          *(int *)(lVar3 + 0xa0) = *(int *)(lVar3 + 0xa0) + 1;
        }
        else if ((bVar1 == 3) || (bVar1 == 0)) {
LAB_10029b697:
          cVar2 = FUN_10029b39e(lVar3);
          if ((cVar2 == '\0') &&
             ((*(uint *)(lVar3 + 0x9c) < uVar5 ||
              (cVar2 = FUN_10029af6b(lVar3,param_2,uVar4,0), cVar2 != '\0')))) {
            if (*(char *)(lVar3 + 0x80) == '\0') {
              *(undefined1 *)(lVar3 + 0x80) = 3;
            }
            goto LAB_10029b6d1;
          }
        }
      }
    }
LAB_10029b6e0:
    lVar3 = FUN_1004960d0(lVar3);
  } while( true );
}

