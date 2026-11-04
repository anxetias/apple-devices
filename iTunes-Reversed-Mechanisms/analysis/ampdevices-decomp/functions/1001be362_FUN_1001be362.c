// name: FUN_1001be362
// address: 1001be362

void FUN_1001be362(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_10083cfb8;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0x19) = 0;
  *(undefined8 *)((long)param_1 + 0x21) = 0;
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a2c4f(uVar2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
  }
  return;
}

