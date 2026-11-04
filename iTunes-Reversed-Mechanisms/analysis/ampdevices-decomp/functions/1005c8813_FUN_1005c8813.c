// name: FUN_1005c8813
// address: 1005c8813

void FUN_1005c8813(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  DAT_1008c7918 = 1;
  lVar2 = FUN_100171d7b();
  if (lVar2 != 0) {
    lVar3 = FUN_100171e9f(lVar2,*(undefined8 *)PTR__kCFLocaleCollatorIdentifier_10082e0b0);
    if (lVar3 != 0) {
      cVar1 = FUN_100173f7c(lVar3,&cf_en);
      if (cVar1 != '\0') {
        DAT_1008c7918 = 0;
      }
    }
    FUN_10017060f(lVar2);
    return;
  }
  return;
}

