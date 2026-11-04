// name: FUN_1001cd9e9
// address: 1001cd9e9

undefined8 FUN_1001cd9e9(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (((param_2 == 0) || (lVar3 = *(long *)(param_2 + 8), *(long *)(param_2 + 8) == 0)) &&
     (lVar3 = DAT_1008a2330, DAT_1008a2330 == 0)) {
    DAT_1008a2330 = *(long *)PTR__kCFPreferencesCurrentApplication_10082e0f8;
    uVar2 = FUN_1001722b7();
    return uVar2;
  }
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067c60e(uVar2);
    }
  }
  else {
    if (lVar3 != 0) {
      uVar2 = _CFPreferencesCopyAppValue();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067c598(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

