// name: FUN_100174240
// address: 100174240

void FUN_100174240(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067fe4a(uVar2);
    }
    FUN_1001782e9(0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006cdebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFStringAppendCharacters_10082dc70)();
  return;
}

