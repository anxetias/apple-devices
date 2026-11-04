// name: FUN_1001be202
// address: 1001be202

undefined8
FUN_1001be202(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  cVar1 = FUN_1001ee056();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a2b63(uVar2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    if (*(long *)(param_1 + 0x30) == 0) {
      pcVar3 = *(code **)(param_1 + 0x40);
      if (pcVar3 == (code *)0x0) {
        uVar2 = FUN_1001cc310();
        uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          FUN_1006a2bd9(uVar2);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar2);
        FUN_1001782e9(0,0);
        pcVar3 = *(code **)(param_1 + 0x40);
      }
      (*pcVar3)(param_2,param_3,*(undefined8 *)(param_1 + 0x48),param_4,param_5);
    }
    else {
      FUN_1001be322(param_1 + 0x10,param_2,param_3,param_4,param_5);
    }
    uVar2 = 0;
    if (param_6 != 0) {
      FUN_1001e8f15(param_6);
    }
  }
  return uVar2;
}

