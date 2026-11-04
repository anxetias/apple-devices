// name: FUN_100490a47
// address: 100490a47

long FUN_100490a47(int *param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*param_1 != 0) && (lVar1 = FUN_100314a6c(), lVar1 != 0)) {
    if ((param_1[3] != 0) &&
       (((lVar2 = FUN_10048b3c0(lVar1), lVar2 != 0 && (param_1[4] != 0)) &&
        (lVar2 = FUN_1004839f2(lVar2), lVar2 != 0)))) {
      return lVar2;
    }
    if ((param_1[1] != 0) && (lVar1 = FUN_1002f950a(lVar1), lVar1 != 0)) {
      lVar1 = FUN_10048c647(lVar1);
      return lVar1;
    }
  }
  return 0;
}

