// name: FUN_100235e82
// address: 100235e82

void FUN_100235e82(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1001cc24a("com.apple.amp","clientcommandprocessor");
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar1);
  uVar1 = DAT_1008a2e00;
  DAT_1008a2e00 = uVar2;
  (*(code *)PTR__objc_release_10082c7b0)(uVar1);
  return;
}

