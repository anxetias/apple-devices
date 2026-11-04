// name: FUN_1001b0b7a
// address: 1001b0b7a

void FUN_1001b0b7a(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_1008c5258 != DAT_1008c5250) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069fbe8(uVar2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
  }
  uVar2 = FUN_1001ebd46();
  *(undefined8 *)(DAT_1008c5250 + 0x40) = uVar2;
  return;
}

