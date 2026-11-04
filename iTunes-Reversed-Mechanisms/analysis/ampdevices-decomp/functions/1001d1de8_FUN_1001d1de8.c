// name: FUN_1001d1de8
// address: 1001d1de8

int FUN_1001d1de8(long param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  iVar2 = FUN_1001cf1e5();
  if (iVar2 == 0) {
    iVar2 = 0;
    if (*(long *)(param_1 + 0x68) != 0) {
      uVar3 = *(uint *)(param_1 + 0x10);
      if (uVar3 != 0) {
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x68) + 0x18);
        uVar5 = 0;
        do {
          *puVar6 = 0;
          if (*(char *)(puVar6 + -2) != '\0') {
            FUN_1001d1de8(puVar6[-1]);
            uVar3 = *(uint *)(param_1 + 0x10);
          }
          uVar5 = uVar5 + 1;
          puVar6 = puVar6 + 4;
        } while (uVar5 < uVar3);
        iVar2 = 0;
      }
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006b1d1e(iVar2,uVar4);
    }
  }
  return iVar2;
}

