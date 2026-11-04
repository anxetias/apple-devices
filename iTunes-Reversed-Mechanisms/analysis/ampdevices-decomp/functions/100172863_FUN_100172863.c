// name: FUN_100172863
// address: 100172863

void FUN_100172863(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067d0a8(uVar2);
    }
    FUN_1001782e9(0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006cde8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRunLoopWakeUp_10082dc30)();
  return;
}

