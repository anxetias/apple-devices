// name: FUN_100174746
// address: 100174746

undefined8 FUN_100174746(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006805aa(uVar2);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006ce0de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)PTR__CFURLGetString_10082df00)();
  return uVar2;
}

