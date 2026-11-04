// name: FUN_1001cd899
// address: 1001cd899

undefined1 FUN_1001cd899(undefined8 param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  lVar2 = FUN_100172473(DAT_1008c4d90,param_1,0x8000100);
  if (lVar2 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_1006af514(uVar6);
    }
    uVar7 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (DAT_1008a2330 == 0) {
      DAT_1008a2330 = *(long *)PTR__kCFPreferencesCurrentApplication_10082e0f8;
    }
    lVar3 = FUN_1001722b7(lVar2);
    if (lVar3 == 0) {
      uVar7 = 0;
    }
    else {
      lVar4 = FUN_1001705e9(lVar3);
      lVar5 = FUN_100173434();
      if (lVar4 == lVar5) {
        uVar7 = 1;
        if (param_2 != (long *)0x0) {
          *param_2 = lVar3;
          lVar3 = 0;
        }
      }
      else {
        uVar7 = 0;
      }
      FUN_10017060f(lVar3);
    }
    FUN_10017060f(lVar2);
  }
  return uVar7;
}

