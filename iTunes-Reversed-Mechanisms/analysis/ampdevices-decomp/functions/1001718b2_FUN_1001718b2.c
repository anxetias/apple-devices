// name: FUN_1001718b2
// address: 1001718b2

undefined8 FUN_1001718b2(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067b39e(uVar2);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006cdc46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)PTR__CFHTTPCookieCopyRequestHeaderFields_10082d410)();
  return uVar2;
}

