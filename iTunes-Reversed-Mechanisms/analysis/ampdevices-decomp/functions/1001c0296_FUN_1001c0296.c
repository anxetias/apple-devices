// name: FUN_1001c0296
// address: 1001c0296

undefined8
FUN_1001c0296(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_10089fb80 == (long *)0x0) {
    uVar2 = FUN_1001cc310(0,param_1,param_2,param_3,param_5,param_4);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a4453(uVar2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    uVar2 = (**(code **)(*DAT_10089fb80 + 0x10))();
  }
  return uVar2;
}

