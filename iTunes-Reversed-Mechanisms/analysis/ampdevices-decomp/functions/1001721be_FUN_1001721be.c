// name: FUN_1001721be
// address: 1001721be

void FUN_1001721be(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067c3c0(uVar2);
    }
    FUN_1001782e9(0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006cdd42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFNumberFormatterSetFormat_10082da88)();
  return;
}

