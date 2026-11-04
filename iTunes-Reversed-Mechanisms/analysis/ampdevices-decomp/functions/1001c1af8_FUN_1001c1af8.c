// name: FUN_1001c1af8
// address: 1001c1af8

void FUN_1001c1af8(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 local_28 [16];
  
  cVar1 = FUN_1001b8428(&DAT_1008a2110);
  if (cVar1 != '\0') {
    uVar3 = _CFBundleGetMainBundle();
    lVar2 = _CFBundleGetValueForInfoDictionaryKey
                      (uVar3,*(undefined8 *)PTR__kCFBundleExecutableKey_10082e040);
    if (lVar2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006a54fb(uVar3);
      }
      FUN_1001782e9(0,0);
    }
    FUN_1001b7eb0(local_28,lVar2);
    FUN_1001b80b2(&DAT_1008a2110,local_28);
    FUN_1001b7a50(local_28);
  }
  return;
}

