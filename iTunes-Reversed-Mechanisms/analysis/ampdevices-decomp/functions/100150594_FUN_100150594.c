// name: FUN_100150594
// address: 100150594

void FUN_100150594(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1001cc24a("com.apple.amp.storeservices","account");
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar1);
  uVar1 = DAT_10088fd80;
  DAT_10088fd80 = uVar2;
  (*(code *)PTR__objc_release_10082c7b0)(uVar1);
  return;
}

