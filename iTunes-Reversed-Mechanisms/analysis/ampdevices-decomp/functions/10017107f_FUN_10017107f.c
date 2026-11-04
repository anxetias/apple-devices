// name: FUN_10017107f
// address: 10017107f

void FUN_10017107f(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067a7a2(uVar2);
    }
    FUN_1001782e9(0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006cdb3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFDataIncreaseLength_10082d8a8)();
  return;
}

