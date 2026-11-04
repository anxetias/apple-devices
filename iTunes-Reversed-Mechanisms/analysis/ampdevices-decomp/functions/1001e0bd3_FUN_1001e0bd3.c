// name: FUN_1001e0bd3
// address: 1001e0bd3

void FUN_1001e0bd3(long param_1,ulong param_2,short *param_3,char param_4,char param_5)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  short sVar4;
  ulong uVar5;
  ushort *puVar6;
  bool bVar7;
  
  if (param_2 < 0x80) {
    sVar4 = 0;
    if (param_5 != '\0') {
      sVar4 = (short)param_2 + -1;
    }
    *param_3 = sVar4 + (short)param_2 * 2;
    pcVar2 = "0123456789abcdef";
    if (param_4 == '\0') {
      pcVar2 = "0123456789ABCDEF";
    }
    if (param_2 != 0) {
      puVar6 = (ushort *)(param_3 + 1);
      uVar5 = 1;
      do {
        *puVar6 = (ushort)(byte)pcVar2[*(byte *)(param_1 + -1 + uVar5) >> 4];
        puVar6[1] = (ushort)(byte)pcVar2[*(byte *)(param_1 + -1 + uVar5) & 0xf];
        if (uVar5 < param_2 && param_5 == '\x01') {
          puVar6[2] = 0x3a;
          puVar6 = puVar6 + 3;
        }
        else {
          puVar6 = puVar6 + 2;
        }
        bVar7 = uVar5 != param_2;
        uVar5 = uVar5 + 1;
      } while (bVar7);
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bb4e7(uVar3);
    }
    FUN_1001782e9(0,0);
    *param_3 = 0;
  }
  return;
}

