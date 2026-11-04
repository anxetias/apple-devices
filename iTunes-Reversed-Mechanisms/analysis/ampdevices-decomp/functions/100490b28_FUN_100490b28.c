// name: FUN_100490b28
// address: 100490b28

long FUN_100490b28(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*param_1 != 0) && (lVar1 = FUN_100309333(), lVar1 != 0)) {
    if ((param_1[3] != 0) &&
       (((lVar2 = FUN_10048b5ec(lVar1), lVar2 != 0 && (param_1[4] != 0)) &&
        (lVar2 = FUN_10048a10b(lVar2), lVar2 != 0)))) {
      return lVar2;
    }
    if ((param_1[1] != 0) && (lVar1 = FUN_100300729(lVar1), lVar1 != 0)) {
      lVar1 = FUN_10048c647(lVar1);
      return lVar1;
    }
  }
  return 0;
}

