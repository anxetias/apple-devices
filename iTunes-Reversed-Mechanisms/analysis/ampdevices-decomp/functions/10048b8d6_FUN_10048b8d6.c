// name: FUN_10048b8d6
// address: 10048b8d6

long FUN_10048b8d6(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = FUN_100315ede();
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(long *)(lVar1 + 0x290) == param_2) break;
    lVar1 = FUN_100316031(lVar1);
  }
  return lVar1;
}

