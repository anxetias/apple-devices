// name: FUN_10023049d
// address: 10023049d

void FUN_10023049d(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1001cc24a("com.apple.AMPDevicesAgent","bookkit");
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar1);
  uVar1 = DAT_1008a2de8;
  DAT_1008a2de8 = uVar2;
  (*(code *)PTR__objc_release_10082c7b0)(uVar1);
  return;
}

