// name: FUN_100174d74
// address: 100174d74

undefined8 FUN_100174d74(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006810ba(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      uVar2 = _CFBundleCopyLocalizedString();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100681044(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

