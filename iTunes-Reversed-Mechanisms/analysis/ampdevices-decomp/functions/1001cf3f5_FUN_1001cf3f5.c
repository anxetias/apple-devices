// name: FUN_1001cf3f5
// address: 1001cf3f5

int FUN_1001cf3f5(long param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  iVar3 = FUN_1001cf1e5();
  if (iVar3 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar1 + 1;
    iVar3 = 0;
    if (iVar1 == 0) {
      FUN_1001dccc7(param_1 + 0x18);
      iVar3 = 0;
      if (*(long *)(param_1 + 0x68) != 0) {
        uVar4 = *(uint *)(param_1 + 0x10);
        if (uVar4 != 0) {
          puVar7 = (undefined8 *)(*(long *)(param_1 + 0x68) + 0x10);
          uVar6 = 0;
          do {
            if (*(char *)(puVar7 + -1) != '\0') {
              FUN_1001cf3f5(*puVar7);
              uVar4 = *(uint *)(param_1 + 0x10);
            }
            uVar6 = uVar6 + 1;
            puVar7 = puVar7 + 4;
          } while (uVar6 < uVar4);
          iVar3 = 0;
        }
      }
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006b0000(iVar3,uVar5);
    }
  }
  return iVar3;
}

