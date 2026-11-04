// name: FUN_1001cf5c9
// address: 1001cf5c9

void FUN_1001cf5c9(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  
  if (param_1 != 0) {
    iVar2 = FUN_1001cf1e5();
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 4) != 0) {
        iVar2 = *(int *)(param_1 + 4) + -1;
        *(int *)(param_1 + 4) = iVar2;
        if (iVar2 != 0) {
          return;
        }
        lVar6 = *(long *)(param_1 + 0x68);
        if (lVar6 != 0) {
          uVar3 = *(uint *)(param_1 + 0x10);
          if (uVar3 != 0) {
            puVar5 = (undefined8 *)(lVar6 + 0x10);
            uVar7 = 0;
            do {
              if (*(char *)(puVar5 + -1) != '\0') {
                FUN_1001cf5c9(*puVar5);
                uVar3 = *(uint *)(param_1 + 0x10);
              }
              uVar7 = uVar7 + 1;
              puVar5 = puVar5 + 4;
            } while (uVar7 < uVar3);
            lVar6 = *(long *)(param_1 + 0x68);
          }
          FUN_1001c64c1(lVar6);
        }
        FUN_1001dcc15(param_1 + 0x18);
        FUN_1001c62d9(param_1,0x70);
        FUN_1001c64c1(param_1);
        return;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006b023a(uVar4);
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006b01c4(uVar4);
      }
    }
    FUN_1001782e9(0,0);
  }
  return;
}

