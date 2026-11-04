// name: FUN_1001afad2
// address: 1001afad2

void FUN_1001afad2(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_10083ca18;
  if (*(char *)((long)param_1 + 0x3e) != '\0') {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069f499(uVar2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
  }
  if (*(char *)((long)param_1 + 0x3d) != '\0') {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069f50f(uVar2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
  }
  return;
}

