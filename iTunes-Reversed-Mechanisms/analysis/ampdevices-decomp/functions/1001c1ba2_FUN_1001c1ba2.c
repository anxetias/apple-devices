// name: FUN_1001c1ba2
// address: 1001c1ba2

void FUN_1001c1ba2(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 local_28 [16];
  
  lVar1 = _CFBundleGetMainBundle();
  if (lVar1 != 0) {
    lVar2 = _CFBundleGetValueForInfoDictionaryKey(lVar1,&cf_FullVersion);
    if ((lVar2 == 0) &&
       (lVar2 = _CFBundleGetValueForInfoDictionaryKey
                          (lVar1,*(undefined8 *)PTR__kCFBundleVersionKey_10082e058), lVar2 == 0)) {
      return;
    }
    lVar1 = _CFGetTypeID(lVar2);
    lVar3 = _CFStringGetTypeID();
    if (lVar1 == lVar3) {
      FUN_1001b7eb0(local_28,lVar2);
      FUN_1001b80b2(&DAT_1008a21d8,local_28);
      FUN_1001b7a50(local_28);
    }
  }
  return;
}

