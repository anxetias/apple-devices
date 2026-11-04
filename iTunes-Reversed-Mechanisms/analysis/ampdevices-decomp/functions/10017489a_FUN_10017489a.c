// name: FUN_10017489a
// address: 10017489a

undefined8 FUN_10017489a(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006807f8(uVar2);
    }
    FUN_1001782e9(0,0);
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006ce0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)PTR__CFURLGetPortNumber_10082def8)();
  return uVar2;
}

