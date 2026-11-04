// name: FUN_1001bf9de
// address: 1001bf9de

void FUN_1001bf9de(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1001ee056();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a3d80(uVar2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
  }
  else if (*(long *)(param_1 + 0x88) != 0) {
    FUN_100172cc1();
    FUN_100172980(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x88),
                  *(undefined8 *)PTR__kCFRunLoopCommonModes_10082e110);
    FUN_10017060f(*(undefined8 *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  return;
}

