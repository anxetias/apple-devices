// name: FUN_1001e1d17
// address: 1001e1d17

undefined1
FUN_1001e1d17(byte *param_1,char *param_2,byte *param_3,byte param_4,char param_5,
             undefined8 *param_6)

{
  byte bVar1;
  char cVar2;
  size_t sVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  
  if (param_3 != (byte *)0x0) {
    *param_3 = 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  if (param_1 == (byte *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006bbbd3(uVar4);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
  if ((param_2 != (char *)0x0) && ('\0' < *param_2)) {
    sVar3 = _strlen(param_2);
    if (sVar3 < 0x100) {
      if (sVar3 == 0) goto LAB_1001e1e4f;
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006bbb5d(uVar4);
      }
      FUN_1001782e9(0,0);
    }
    bVar7 = 0;
    do {
      bVar8 = *param_1;
      bVar6 = bVar8 - 0x20;
      if (0x19 < (byte)(bVar8 + 0x9f)) {
        bVar6 = bVar8;
      }
      if (param_5 == '\0') {
        bVar6 = bVar8;
      }
      bVar8 = 0;
      if (bVar6 == 0) {
        return 0;
      }
      bVar1 = param_2[bVar7];
      bVar5 = bVar1 - 0x20;
      if (0x19 < (byte)(bVar1 + 0x9f)) {
        bVar5 = bVar1;
      }
      if (param_5 == '\0') {
        bVar5 = bVar1;
      }
      if (bVar5 == bVar6) {
        bVar8 = bVar7 + 1;
      }
      param_1 = param_1 + 1;
      bVar7 = bVar8;
    } while (bVar8 != (byte)sVar3);
  }
LAB_1001e1e4f:
  if (param_3 != (byte *)0x0) {
    do {
      bVar7 = *param_1;
      if (bVar7 == 0) {
        return 1;
      }
      if ((bVar7 == 0xd) || (bVar7 == 10)) {
        if (param_6 == (undefined8 *)0x0) {
          return 1;
        }
        param_1 = param_1 + 2;
        goto LAB_1001e1e96;
      }
      param_1 = param_1 + 1;
      bVar8 = *param_3;
      *param_3 = bVar8 + 1;
      param_3[(byte)(bVar8 + 1)] = bVar7;
    } while (*param_3 != param_4);
  }
  if (param_6 != (undefined8 *)0x0) {
LAB_1001e1e96:
    *param_6 = param_1;
  }
  return 1;
}

