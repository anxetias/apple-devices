// name: FUN_10017217a
// address: 10017217a

undefined8 FUN_10017217a(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067c34a(uVar2);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006cdd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)PTR__CFNumberFormatterGetLocale_10082da80)();
  return uVar2;
}

