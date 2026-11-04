// name: FUN_1001c08c8
// address: 1001c08c8

void FUN_1001c08c8(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  byte extraout_DL;
  
  if (*param_1 == 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a4879(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  FUN_1001c09e4(param_1,param_2);
  if ((extraout_DL & 1) != 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a48ef(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  plVar1 = (long *)FUN_1001c09e4(param_1,param_2);
  if (*plVar1 == -1) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a4965(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  puVar4 = (undefined8 *)FUN_1001c09e4(param_1,param_2);
  *puVar4 = *param_2;
  puVar4[1] = param_2[1];
  return;
}

