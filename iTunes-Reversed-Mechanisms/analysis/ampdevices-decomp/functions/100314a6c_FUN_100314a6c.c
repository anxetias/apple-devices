// name: FUN_100314a6c
// address: 100314a6c

long FUN_100314a6c(int param_1)

{
  long lVar1;
  
  lVar1 = FUN_100306d78();
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(lVar1 + 0x88) == param_1) break;
    lVar1 = FUN_100306e32(lVar1);
  }
  return lVar1;
}

