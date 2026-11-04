// name: FUN_1001997d8
// address: 1001997d8

bool FUN_1001997d8(long param_1)

{
  long lVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_100171a6c(param_1,&cf_Content_Range);
    bVar2 = lVar1 != 0;
    if (bVar2) {
      FUN_10017060f(lVar1);
    }
  }
  return bVar2;
}

