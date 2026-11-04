// name: FUN_10019732d
// address: 10019732d

undefined1 FUN_10019732d(char *param_1,ulong param_2,int *param_3)

{
  ushort *puVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  ushort *puVar5;
  
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == (char *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006963fc(uVar4);
    }
    FUN_1001782e9(0,0);
    return 2;
  }
  if (9 < param_2) {
    if (*param_1 != '\x1f') {
      return 2;
    }
    if (param_1[1] != -0x75) {
      return 2;
    }
    if (param_1[2] != '\b') {
      return 2;
    }
    puVar5 = (ushort *)(param_1 + 10);
    puVar1 = (ushort *)(param_1 + param_2);
    bVar2 = param_1[3];
    if (((bVar2 & 4) == 0) ||
       ((0xb < (long)param_2 &&
        (puVar5 = (ushort *)((long)puVar5 + (ulong)*puVar5 + 2), puVar5 <= puVar1)))) {
      if ((bVar2 & 8) != 0) {
        if (puVar1 <= puVar5) {
          return 0;
        }
        while ((char)*puVar5 != '\0') {
          puVar5 = (ushort *)((long)puVar5 + 1);
          if (puVar1 <= puVar5) {
            return 0;
          }
        }
        puVar5 = (ushort *)((long)puVar5 + 1);
      }
      if ((bVar2 & 0x10) != 0) {
        if (puVar1 <= puVar5) {
          return 0;
        }
        while ((char)*puVar5 != '\0') {
          puVar5 = (ushort *)((long)puVar5 + 1);
          if (puVar1 <= puVar5) {
            return 0;
          }
        }
        puVar5 = puVar5 + 1;
      }
      if (((bVar2 & 2) == 0) || (puVar5 = puVar5 + 1, puVar5 <= puVar1)) {
        if (param_3 != (int *)0x0) {
          *param_3 = (int)puVar5 - (int)param_1;
          return 1;
        }
        return 1;
      }
    }
  }
  return 0;
}

