// name: FUN_100208c33
// address: 100208c33

void FUN_100208c33(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1001cc24a("com.apple.iTunes","parental_prefs");
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar1);
  uVar1 = DAT_1008a2b90;
  DAT_1008a2b90 = uVar2;
  (*(code *)PTR__objc_release_10082c7b0)(uVar1);
  return;
}

