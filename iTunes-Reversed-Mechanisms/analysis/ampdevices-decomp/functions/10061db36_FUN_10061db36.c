// name: FUN_10061db36
// address: 10061db36

void FUN_10061db36(undefined8 param_1,uint param_2)

{
  char cVar1;
  long lVar2;
  int *piVar3;
  undefined1 local_40 [16];
  
  FUN_1001b7a44();
  piVar3 = &DAT_10075f534;
  lVar2 = 0;
  do {
    if ((param_2 >> ((uint)lVar2 & 0x1f) & 1) != 0) {
      cVar1 = FUN_1001b8428(param_1);
      if (cVar1 == '\0') {
        FUN_1001b7b04(local_40,", ");
        FUN_1001bbcfe(param_1,local_40);
        FUN_1001b7a50(local_40);
      }
      FUN_1001b7b04(local_40,(long)&DAT_10075f534 + (long)*piVar3);
      FUN_1001bbcfe(param_1,local_40);
      FUN_1001b7a50(local_40);
    }
    lVar2 = lVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (lVar2 != 0x19);
  return;
}

