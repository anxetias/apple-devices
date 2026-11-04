// name: FUN_100173093
// address: 100173093

undefined8 FUN_100173093(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067e140(uVar2);
    }
    FUN_1001782e9(1,0);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006cddde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)PTR__CFReadStreamOpen_10082db48)();
  return uVar2;
}

