// name: FUN_1004993ef
// address: 1004993ef

long FUN_1004993ef(undefined8 param_1,int param_2,uint param_3,char param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_1004968c5();
  lVar3 = 0;
  do {
    if (lVar2 == 0) {
      return lVar3;
    }
    if (*(int *)(lVar2 + 0x10) == param_2) {
      uVar1 = *(uint *)(lVar2 + 0x14);
      if (uVar1 == param_3) {
        return lVar2;
      }
      if ((uVar1 <= param_3 && param_4 == '\0') &&
         ((lVar3 == 0 || (*(uint *)(lVar3 + 0x14) < uVar1)))) {
        lVar3 = lVar2;
      }
    }
    lVar2 = FUN_100496985(lVar2);
  } while( true );
}

