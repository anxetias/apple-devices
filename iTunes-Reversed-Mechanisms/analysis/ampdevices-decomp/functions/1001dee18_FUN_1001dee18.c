// name: FUN_1001dee18
// address: 1001dee18

void FUN_1001dee18(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  byte extraout_DL;
  
  if (*param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006b9a1d(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  FUN_1001deef6(param_1,param_2);
  if ((extraout_DL & 1) != 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006b9a93(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  piVar1 = (int *)FUN_1001deef6(param_1,param_2);
  if (*piVar1 == -1) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006b9b09(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  puVar2 = (undefined8 *)FUN_1001deef6(param_1,param_2);
  *puVar2 = *param_2;
  return;
}

