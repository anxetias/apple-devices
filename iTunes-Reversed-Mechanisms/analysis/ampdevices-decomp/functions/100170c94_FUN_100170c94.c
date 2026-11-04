// name: FUN_100170c94
// address: 100170c94

void FUN_100170c94(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067a1a4(uVar2);
    }
    FUN_1001782e9(0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006cda30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFArrayRemoveAllValues_10082d740)();
  return;
}

