// name: FUN_10014c52e
// address: 10014c52e

void FUN_10014c52e(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1001cc24a("com.apple.amp.storeservices","touchid");
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar1);
  uVar1 = DAT_10088fd68;
  DAT_10088fd68 = uVar2;
  (*(code *)PTR__objc_release_10082c7b0)(uVar1);
  return;
}

