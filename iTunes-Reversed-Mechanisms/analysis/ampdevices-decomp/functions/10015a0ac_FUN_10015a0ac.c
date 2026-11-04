// name: FUN_10015a0ac
// address: 10015a0ac

void FUN_10015a0ac(long *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  if (*(int *)(param_2 + 0x48) != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066a953(uVar3);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 1) = 0xffffffce;
      return;
    }
    param_2 = *param_1;
  }
  iVar2 = FUN_1001e9de0(param_2);
  *(int *)(param_1 + 1) = iVar2;
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066a9c9(iVar2,uVar3);
    }
  }
  return;
}

