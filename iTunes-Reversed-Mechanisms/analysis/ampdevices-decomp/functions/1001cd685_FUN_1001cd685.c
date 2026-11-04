// name: FUN_1001cd685
// address: 1001cd685

long FUN_1001cd685(undefined8 param_1,char param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((param_3 == 0) && (param_3 = DAT_1008a2330, DAT_1008a2330 == 0)) {
    param_3 = *(long *)PTR__kCFPreferencesCurrentApplication_10082e0f8;
    DAT_1008a2330 = param_3;
  }
  lVar2 = FUN_1001722b7(param_1,param_3);
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFDictionaryGetTypeID();
    if (lVar3 == lVar4) {
      if (param_2 == '\0') {
        return lVar2;
      }
      lVar3 = FUN_100172752(DAT_1008c4d90,lVar2,2);
      FUN_10017060f(lVar2);
      return lVar3;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006af428(uVar5);
    }
    FUN_1001782e9(0,0);
    FUN_10017060f(lVar2);
  }
  return 0;
}

