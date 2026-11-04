// name: FUN_1001b0756
// address: 1001b0756

void FUN_1001b0756(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*param_2 != param_1) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_10069f8ae(uVar4);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
  }
  lVar1 = param_2[1];
  lVar2 = param_2[2];
  lVar5 = lVar2;
  if (lVar2 == 0) {
    lVar5 = param_1;
  }
  *(long *)(lVar5 + 8) = lVar1;
  if (lVar1 == 0) {
    *(long *)(param_1 + 0x10) = lVar2;
  }
  else {
    *(long *)(lVar1 + 0x10) = lVar2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

