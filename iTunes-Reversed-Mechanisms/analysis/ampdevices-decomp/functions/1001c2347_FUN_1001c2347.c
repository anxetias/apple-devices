// name: FUN_1001c2347
// address: 1001c2347

undefined8 FUN_1001c2347(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  _CFTimeZoneResetSystem();
  lVar2 = _CFTimeZoneCopySystem();
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a5b6f(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0;
  }
  else {
    uVar3 = _CFTimeZoneGetName(lVar2);
    uVar3 = FUN_1001705fc(uVar3);
    FUN_10017060f(lVar2);
  }
  return uVar3;
}

