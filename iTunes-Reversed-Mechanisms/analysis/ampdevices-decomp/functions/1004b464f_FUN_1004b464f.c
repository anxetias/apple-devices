// name: FUN_1004b464f
// address: 1004b464f

long FUN_1004b464f(void)

{
  long lVar1;
  
  lVar1 = FUN_1004aa784();
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (0x3e5 < *(int *)(lVar1 + 0x118) - 3U) break;
    lVar1 = FUN_1004ab52d(lVar1);
  }
  return lVar1;
}

