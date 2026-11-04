// name: FUN_100171607
// address: 100171607

undefined8 FUN_100171607(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067ae8c(uVar2);
    }
    FUN_1001782e9(0,0);
    return 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006cdc04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)PTR__CFErrorGetCode_10082d9b0)();
  return uVar2;
}

