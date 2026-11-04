// name: FUN_1001b21e7
// address: 1001b21e7

void FUN_1001b21e7(void)

{
  void *pvVar1;
  char cVar2;
  undefined8 uVar3;
  
  FUN_1001eed65(&DAT_1008c52d8);
  DAT_1008c52e0 = 0;
  if (DAT_1008c5350 != 0) {
    FUN_100172ab2(DAT_1008c5340,DAT_1008c5350,*(undefined8 *)PTR__kCFRunLoopCommonModes_10082e110);
    FUN_10017060f(DAT_1008c5350);
    DAT_1008c5350 = 0;
  }
  if (DAT_1008c5348 != 0) {
    FUN_100172980(DAT_1008c5340,DAT_1008c5348,*(undefined8 *)PTR__kCFRunLoopCommonModes_10082e110);
    FUN_10017060f(DAT_1008c5348);
    DAT_1008c5348 = 0;
  }
  DAT_1008c5340 = 0;
  FUN_1001e9de0(&DAT_1008c5200);
  pvVar1 = DAT_1008c5258;
  if (DAT_1008c5258 == (void *)0x0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a0585(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  if (pvVar1 != DAT_1008c5250) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a05fb(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  if (DAT_1008c5268 != 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a0671(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  if (DAT_1008c5290 != 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a06e7(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  if (DAT_1008c52b8 != 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a075d(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  if (DAT_1008c52f0 != 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a07d3(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  FUN_1001b24c7(&DAT_1008c5260);
  FUN_1001b24c7(&DAT_1008c5288);
  FUN_1001b24c7(&DAT_1008c52b0);
  FUN_1001b24c7(&DAT_1008c52e8);
  pvVar1 = DAT_1008c5250;
  if (DAT_1008c5250 != (void *)0x0) {
    FUN_1001b01f4(DAT_1008c5250);
    operator_delete(pvVar1);
  }
  DAT_1008c5250 = (void *)0x0;
  FUN_1001e9eb9(&DAT_1008c5200);
  return;
}

