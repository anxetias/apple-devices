// name: FUN_1001e8240
// address: 1001e8240

long FUN_1001e8240(void)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_100171d7b();
  lVar3 = FUN_1001712f2(0,uVar2,0,0);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c0833(uVar4);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') goto LAB_1001e829d;
  }
  _CFDateFormatterSetFormat(lVar3,&cf_y);
LAB_1001e829d:
  FUN_10017060f(uVar2);
  return lVar3;
}

