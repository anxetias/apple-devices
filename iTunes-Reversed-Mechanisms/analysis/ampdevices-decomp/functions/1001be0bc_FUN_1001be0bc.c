// name: FUN_1001be0bc
// address: 1001be0bc

void FUN_1001be0bc(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_10083cf98;
  FUN_10028593a(param_1 + 2);
  param_1[8] = param_3;
  param_1[9] = param_4;
  bVar1 = param_3 == 0;
  if (*(long *)(param_2 + 0x20) != 0) {
    bVar1 = param_3 != 0 || param_4 != 0;
  }
  if (bVar1) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a2aed(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  return;
}

