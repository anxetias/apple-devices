// name: FUN_1001c1fb3
// address: 1001c1fb3

undefined8 FUN_1001c1fb3(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = _CFPreferencesCopyValue
                    (&cf_AppleLanguages,*(undefined8 *)PTR__kCFPreferencesAnyApplication_10082e0e0,
                     *(undefined8 *)PTR__kCFPreferencesCurrentUser_10082e108,
                     *(undefined8 *)PTR__kCFPreferencesAnyHost_10082e0e8);
  if (lVar2 == 0) {
LAB_1001c205d:
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006a5921(uVar5);
    }
  }
  else {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFArrayGetTypeID();
    if (lVar3 != lVar4) goto LAB_1001c205d;
    lVar3 = FUN_10017076e(lVar2);
    if (lVar3 < 1) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006a57bf(uVar5);
      }
    }
    else {
      lVar3 = FUN_100164a01(lVar2,0);
      if (lVar3 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006a58ab(uVar5);
        }
      }
      else {
        lVar3 = FUN_100171d85(DAT_1008c4d90,lVar3);
        if (lVar3 != 0) {
          uVar5 = FUN_100173623(DAT_1008c4d90,lVar3,0,2);
          goto LAB_1001c2089;
        }
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006a5835(uVar5);
        }
      }
    }
  }
  uVar5 = 0;
  FUN_1001782e9(0,0);
  lVar3 = 0;
LAB_1001c2089:
  FUN_10017060f(lVar3);
  FUN_10017060f(lVar2);
  return uVar5;
}

