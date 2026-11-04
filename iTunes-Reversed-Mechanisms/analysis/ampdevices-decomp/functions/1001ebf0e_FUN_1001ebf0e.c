// name: FUN_1001ebf0e
// address: 1001ebf0e

void FUN_1001ebf0e(void)

{
  char cVar1;
  undefined8 uVar2;
  
  DAT_1008a2b40 = __CFCopySystemVersionDictionary();
  if (DAT_1008a2b40 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c3d8f(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  return;
}

