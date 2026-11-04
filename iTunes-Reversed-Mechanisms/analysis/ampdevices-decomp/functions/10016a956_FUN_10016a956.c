// name: FUN_10016a956
// address: 10016a956

long FUN_10016a956(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_100172686();
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFDictionaryGetTypeID();
    if (lVar3 == lVar4) {
      return lVar2;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006784da(uVar5);
    }
    FUN_1001782e9(0,0);
    FUN_10017060f(lVar2);
  }
  return 0;
}

