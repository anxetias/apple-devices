// name: FUN_1001ceee0
// address: 1001ceee0

void FUN_1001ceee0(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < 1) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006afc75(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}

