// name: FUN_100132aec
// address: 100132aec

void FUN_100132aec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1001cc24a("com.apple.amp.storeservices","lifecycle");
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar1);
  uVar1 = DAT_10088fc88;
  DAT_10088fc88 = uVar2;
  (*(code *)PTR__objc_release_10082c7b0)(uVar1);
  return;
}

