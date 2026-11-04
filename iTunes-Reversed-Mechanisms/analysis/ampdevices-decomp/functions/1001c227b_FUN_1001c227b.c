// name: FUN_1001c227b
// address: 1001c227b

long FUN_1001c227b(void)

{
  char cVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = FUN_100171d7b();
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a5af9(uVar4);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
  if (*(long *)PTR__kCFLocaleCountryCode_10082e0b8 != 0) {
    uVar4 = FUN_100171e9f(lVar3);
    lVar5 = FUN_1001705fc(uVar4);
    if (lVar5 != 0) goto LAB_1001c232d;
  }
  uVar4 = FUN_100171e5b(lVar3);
  lVar5 = FUN_1001737f8(uVar4);
  if ((lVar5 < 5) || (sVar2 = FUN_10017380b(uVar4,2), sVar2 != 0x5f)) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_100173623(DAT_1008c4d90,uVar4,3,2);
  }
LAB_1001c232d:
  FUN_10017060f(lVar3);
  return lVar5;
}

