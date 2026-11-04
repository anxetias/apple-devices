// name: FUN_1001b19b0
// address: 1001b19b0

undefined4 FUN_1001b19b0(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (DAT_1008c5258 == 0) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a0086(uVar2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar3 = *(undefined4 *)(DAT_1008c5258 + 0x18);
  }
  return uVar3;
}

