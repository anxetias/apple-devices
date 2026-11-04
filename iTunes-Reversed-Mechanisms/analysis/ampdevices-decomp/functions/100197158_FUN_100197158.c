// name: FUN_100197158
// address: 100197158

undefined8
FUN_100197158(char *param_1,undefined2 *param_2,long param_3,ushort *param_4,char *param_5,
             uint param_6,char *param_7,ushort param_8,undefined2 *param_9,undefined8 *param_10)

{
  ushort uVar1;
  char cVar2;
  undefined8 uVar3;
  size_t sVar4;
  int iVar5;
  char *pcVar6;
  byte bVar7;
  
  if (param_1 == (char *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_100696386(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    uVar3 = 0xffffffce;
    if ((*param_1 == '\x1f') && (param_1[1] == -0x75)) {
      if (param_2 == (undefined2 *)0x0) {
        cVar2 = param_1[2];
      }
      else {
        *param_2 = 0x8b1f;
        cVar2 = param_1[2];
        *(char *)(param_2 + 1) = cVar2;
        *(char *)((long)param_2 + 3) = param_1[3];
        iVar5 = -1;
        if (*(uint *)(param_1 + 4) < 0x83da4f80) {
          iVar5 = *(uint *)(param_1 + 4) + 0x7c25b080;
        }
        *(int *)(param_2 + 2) = iVar5;
        *(char *)(param_2 + 4) = param_1[8];
        *(char *)((long)param_2 + 9) = param_1[9];
      }
      if (cVar2 != '\b') {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          FUN_100696310(uVar3);
        }
        FUN_1001782e9(0,0);
      }
      bVar7 = param_1[3];
      if ((bVar7 & 4) == 0) {
        pcVar6 = param_1 + 10;
      }
      else {
        uVar1 = *(ushort *)(param_1 + 10);
        if (param_4 != (ushort *)0x0) {
          *param_4 = uVar1;
        }
        if (param_3 != 0) {
          FUN_1001c631b(param_1 + 0xc,param_3,(ulong)uVar1);
          bVar7 = param_1[3];
        }
        pcVar6 = param_1 + 0xc + uVar1;
      }
      if ((bVar7 & 8) != 0) {
        sVar4 = _strlen(pcVar6);
        if (param_5 != (char *)0x0) {
          _strncpy(param_5,pcVar6,(ulong)param_6 & 0xffff);
          bVar7 = param_1[3];
        }
        pcVar6 = pcVar6 + (sVar4 & 0xffff) + 1;
      }
      if ((bVar7 & 0x10) != 0) {
        sVar4 = _strlen(pcVar6);
        if (param_7 != (char *)0x0) {
          _strncpy(param_7,pcVar6,(ulong)param_8);
          bVar7 = param_1[3];
        }
        pcVar6 = pcVar6 + (sVar4 & 0xffff) + 1;
      }
      if ((bVar7 & 2) != 0) {
        if (param_9 != (undefined2 *)0x0) {
          *param_9 = *(undefined2 *)pcVar6;
        }
        pcVar6 = pcVar6 + 2;
      }
      uVar3 = 0;
      if (param_10 != (undefined8 *)0x0) {
        *param_10 = pcVar6;
      }
    }
  }
  return uVar3;
}

