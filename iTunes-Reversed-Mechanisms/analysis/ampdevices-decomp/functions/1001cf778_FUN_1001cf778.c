// name: FUN_1001cf778
// address: 1001cf778

int FUN_1001cf778(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  iVar2 = FUN_1001cf1e5();
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 8) == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        FUN_1006b03fe(uVar5);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x32;
    }
    else {
      iVar3 = *(int *)(param_1 + 8) + -1;
      *(int *)(param_1 + 8) = iVar3;
      iVar2 = 0;
      if (iVar3 == 0) {
        FUN_1001dcd18(param_1 + 0x18);
        if (*(long *)(param_1 + 0x68) != 0) {
          uVar4 = *(uint *)(param_1 + 0x10);
          iVar2 = 0;
          if (uVar4 != 0) {
            puVar7 = (undefined8 *)(*(long *)(param_1 + 0x68) + 0x10);
            uVar6 = 0;
            do {
              if (*(char *)(puVar7 + -1) != '\0') {
                FUN_1001cf778(*puVar7);
                uVar4 = *(uint *)(param_1 + 0x10);
              }
              uVar6 = uVar6 + 1;
              puVar7 = puVar7 + 4;
            } while (uVar6 < uVar4);
            iVar2 = 0;
          }
        }
      }
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006b0392(iVar2,uVar5);
    }
  }
  return iVar2;
}

