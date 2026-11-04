// name: FUN_1001719b7
// address: 1001719b7

undefined8 FUN_1001719b7(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067b576(uVar2);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006cdc76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)PTR__CFHTTPMessageCopyBody_10082d450)();
  return uVar2;
}

