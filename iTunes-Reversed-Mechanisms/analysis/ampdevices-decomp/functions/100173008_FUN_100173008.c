// name: FUN_100173008
// address: 100173008

undefined8 FUN_100173008(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067e054(uVar2);
    }
    FUN_1001782e9(0,0);
    return 7;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006cddd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)PTR__CFReadStreamGetStatus_10082db38)();
  return uVar2;
}

