// name: FUN_1001cf1a0
// address: 1001cf1a0

int FUN_1001cf1a0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1001cf1e5();
  if (iVar2 == 0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006afdd0(iVar2,uVar3);
    }
  }
  return iVar2;
}

