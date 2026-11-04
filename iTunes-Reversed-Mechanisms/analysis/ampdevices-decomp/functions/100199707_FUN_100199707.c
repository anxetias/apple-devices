// name: FUN_100199707
// address: 100199707

bool FUN_100199707(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if ((param_1 == 0) || (lVar2 = FUN_100171973(), lVar2 == 0)) {
    return false;
  }
  cVar1 = FUN_100169eb1(lVar2,&cf_HTTP_1_1);
  if (cVar1 == '\0') {
    lVar3 = FUN_100171a6c(param_1,&cf_Accept_Ranges);
    if (lVar3 == 0) {
      bVar4 = false;
      goto LAB_1001997c3;
    }
    cVar1 = FUN_100169eb1(lVar3,&cf_bytes);
    FUN_10017060f(lVar3);
    FUN_10017060f(lVar2);
    if (cVar1 == '\0') {
      return false;
    }
  }
  else {
    FUN_10017060f(lVar2);
  }
  lVar2 = FUN_100171a6c(param_1,&cf_Accept_Ranges);
  if (lVar2 == 0) {
    return true;
  }
  cVar1 = FUN_100169eb1(lVar2,&cf_none);
  bVar4 = cVar1 == '\0';
LAB_1001997c3:
  FUN_10017060f(lVar2);
  return bVar4;
}

