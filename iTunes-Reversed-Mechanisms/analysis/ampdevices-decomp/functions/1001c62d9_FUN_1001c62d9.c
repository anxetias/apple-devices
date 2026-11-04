// name: FUN_1001c62d9
// address: 1001c62d9

void FUN_1001c62d9(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a9464(uVar2);
    }
    FUN_1001782e9(0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006cea5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_10082cbe8)();
  return;
}

