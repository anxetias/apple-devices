// name: FUN_10048bc57
// address: 10048bc57

long FUN_10048bc57(int param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = FUN_100306d78();
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    lVar2 = FUN_10048b3c0(lVar1,param_1);
    if (lVar2 != 0) break;
    lVar1 = FUN_100306e32(lVar1);
  }
  return lVar2;
}

