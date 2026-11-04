// name: FUN_1001c0466
// address: 1001c0466

long * FUN_1001c0466(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)*param_1;
  plVar4 = (long *)param_1[1];
  if (plVar3 == plVar4) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a4717(uVar2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
    plVar3 = (long *)*param_1;
    plVar4 = (long *)param_1[1];
  }
  do {
    plVar3 = plVar3 + 2;
    *param_1 = (long)plVar3;
    if (plVar3 == plVar4) {
      return param_1;
    }
  } while (*plVar3 + 1U < 2);
  return param_1;
}

