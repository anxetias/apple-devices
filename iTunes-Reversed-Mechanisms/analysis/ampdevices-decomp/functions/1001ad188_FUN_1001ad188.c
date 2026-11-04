// name: FUN_1001ad188
// address: 1001ad188

undefined * FUN_1001ad188(uint param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (param_1 < 0x7d) {
    puVar3 = &DAT_10089cc00 + (ulong)param_1 * 0x60;
  }
  else {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069f33f(uVar2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    puVar3 = (undefined *)0x0;
    FUN_1001782e9(0,0);
  }
  return puVar3;
}

