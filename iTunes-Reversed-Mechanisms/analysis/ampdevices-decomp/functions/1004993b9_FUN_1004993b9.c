// name: FUN_1004993b9
// address: 1004993b9

long FUN_1004993b9(undefined8 param_1,int param_2,short param_3)

{
  long lVar1;
  
  lVar1 = FUN_1004968c5();
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if ((*(int *)(lVar1 + 0x10) == param_2) && (*(short *)(lVar1 + 0x47c) == param_3)) break;
    lVar1 = FUN_100496985(lVar1);
  }
  return lVar1;
}

