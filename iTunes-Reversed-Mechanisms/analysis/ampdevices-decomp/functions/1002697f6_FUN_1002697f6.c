// name: FUN_1002697f6
// address: 1002697f6

void FUN_1002697f6(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1001cc24a("com.apple.AMPDevicesAgent","devicesagentevents");
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar1);
  uVar1 = DAT_1008a2e88;
  DAT_1008a2e88 = uVar2;
  (*(code *)PTR__objc_release_10082c7b0)(uVar1);
  return;
}

