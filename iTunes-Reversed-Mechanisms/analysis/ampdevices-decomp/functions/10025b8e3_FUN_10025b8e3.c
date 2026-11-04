// name: FUN_10025b8e3
// address: 10025b8e3

void FUN_10025b8e3(void)

{
  undefined8 uVar1;
  int iVar2;
  
  if (DAT_1008c54e8 == '\0') {
    iVar2 = ___cxa_guard_acquire(&DAT_1008c54e8);
    if (iVar2 != 0) {
      uVar1 = FUN_1001cc24a("com.apple.AMPDevicesAgent","perf");
      DAT_1008c54e0 = _objc_retainAutoreleasedReturnValue(uVar1);
      ___cxa_guard_release(&DAT_1008c54e8);
    }
  }
  _objc_retainAutoreleaseReturnValue(DAT_1008c54e0);
  return;
}

