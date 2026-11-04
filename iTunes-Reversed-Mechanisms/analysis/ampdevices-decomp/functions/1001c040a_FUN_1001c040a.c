// name: FUN_1001c040a
// address: 1001c040a

void FUN_1001c040a(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_10089fb80 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001001c0419. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_10089fb80 + 0x18))();
    return;
  }
  uVar2 = FUN_1001cc310();
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006a46a1(uVar2);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  FUN_1001782e9(0,0);
  return;
}

