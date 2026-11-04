// name: FUN_1001bfb42
// address: 1001bfb42

void FUN_1001bfb42(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    FUN_1001e9de0(param_1 + 0x40);
    FUN_1001c0c8a(param_1 + 0x30,param_1 + 0x38,param_2);
    FUN_1001e9eb9(param_1 + 0x40);
    return;
  }
  uVar2 = FUN_1001cc310();
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006a3df6(uVar2);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  FUN_1001782e9(0,0);
  return;
}

