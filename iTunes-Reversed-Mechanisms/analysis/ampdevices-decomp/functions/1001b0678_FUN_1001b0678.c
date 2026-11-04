// name: FUN_1001b0678
// address: 1001b0678

void FUN_1001b0678(long param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*param_2 != 0) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069f838(uVar2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
  }
  *param_2 = param_1;
  param_2[1] = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  param_2[2] = lVar3;
  if (lVar3 == 0) {
    lVar3 = param_1;
  }
  *(long **)(lVar3 + 8) = param_2;
  *(long **)(param_1 + 0x10) = param_2;
  return;
}

