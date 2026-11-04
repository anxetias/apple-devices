// name: FUN_1001668a7
// address: 1001668a7

long FUN_1001668a7(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_100171475();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 != lVar4) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_100673bae(uVar5);
      }
      lVar2 = 0;
      FUN_1001782e9(0,0);
    }
  }
  return lVar2;
}

