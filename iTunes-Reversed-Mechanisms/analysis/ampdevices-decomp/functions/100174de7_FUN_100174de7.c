// name: FUN_100174de7
// address: 100174de7

undefined8 FUN_100174de7(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100681130(uVar2);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006cdab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)PTR__CFBundleGetInfoDictionary_10082d7f0)();
  return uVar2;
}

