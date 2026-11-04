// name: FUN_1001d153d
// address: 1001d153d

int FUN_1001d153d(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  iVar2 = FUN_1001cf1e5();
  if (iVar2 == 0) {
    uVar5 = *(uint *)(param_1 + 0x10);
    if (uVar5 == 0) {
      iVar2 = 0x88;
    }
    else {
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0x68) + 0x10);
      iVar2 = 0x88;
      uVar6 = 0;
      do {
        if (*(char *)(puVar7 + -1) == '\0') {
          uVar3 = *(uint *)((long)puVar7 + -4);
        }
        else {
          uVar3 = FUN_1001d153d(*puVar7);
          uVar5 = *(uint *)(param_1 + 0x10);
        }
        iVar2 = iVar2 + uVar3 + (uVar3 & 1) + 0x38;
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 4;
      } while (uVar6 < uVar5);
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006b1650(uVar4);
    }
    iVar2 = 0;
    FUN_1001782e9(0,0);
  }
  return iVar2;
}

