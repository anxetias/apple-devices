// name: FUN_1001ebdcf
// address: 1001ebdcf

void FUN_1001ebdcf(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c3ca3(uVar2);
    }
    FUN_1001782e9(0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006cea38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__arc4random_buf_10082cbb8)();
  return;
}

