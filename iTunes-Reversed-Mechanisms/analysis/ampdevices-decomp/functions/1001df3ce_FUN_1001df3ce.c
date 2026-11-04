// name: FUN_1001df3ce
// address: 1001df3ce

ulong FUN_1001df3ce(byte *param_1,long param_2,byte *param_3,long param_4,ulong param_5)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ulong local_38;
  
  if (param_1 == (byte *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006b9e45(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  if (param_3 == (byte *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006b9ecd(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  if ((param_5 & 0x10) != 0) {
    local_38 = param_5 & 0xffffffff;
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006b9f55(uVar4);
    }
    FUN_1001782e9(0,0);
    param_5 = local_38;
  }
  if ((param_5 & 2) != 0) {
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      pbVar1 = param_1 + param_2;
      do {
        if (0x20 < *param_1) goto LAB_1001df4ac;
        param_1 = param_1 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      param_2 = 0;
      param_1 = pbVar1;
    }
LAB_1001df4ac:
    if (param_4 == 0) {
      param_4 = 0;
    }
    else {
      pbVar1 = param_3 + param_4;
      do {
        if (0x20 < *param_3) goto LAB_1001df4cd;
        param_3 = param_3 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      param_4 = 0;
      param_3 = pbVar1;
    }
  }
LAB_1001df4cd:
  if (((param_5 & 0xffffffff) >> 1 & 4) == 0 && (param_5 & 4) == 0) {
    bVar9 = param_2 != 0;
    bVar10 = param_4 != 0;
    if (bVar9 && bVar10) {
      lVar6 = 0;
      do {
        bVar7 = param_1[lVar6];
        if (((char)bVar7 < '\0') || (bVar2 = param_3[lVar6], (char)bVar2 < '\0'))
        goto LAB_1001df577;
        bVar8 = bVar2;
        if ((param_5 & 1) != 0) {
          bVar8 = bVar7 - 0x20;
          if (0x19 < (byte)(bVar7 + 0x9f)) {
            bVar8 = bVar7;
          }
          bVar7 = bVar8;
          bVar8 = bVar2 - 0x20;
          if (0x19 < (byte)(bVar2 + 0x9f)) {
            bVar8 = bVar2;
          }
        }
        if (bVar7 >= bVar8 && bVar7 != bVar8) {
          return 1;
        }
        if (bVar7 < bVar8) {
          return 0xffffffff;
        }
        bVar10 = param_4 + -1 != lVar6;
        bVar9 = param_2 + -1 != lVar6;
      } while ((bVar9) && (bVar11 = param_4 + -1 != lVar6, lVar6 = lVar6 + 1, bVar11));
    }
    uVar5 = 1;
    if (!bVar9) {
      uVar5 = (ulong)-(uint)bVar10;
    }
  }
  else {
LAB_1001df577:
    uVar5 = FUN_1001df5d0(param_1,param_3,(int)(short)param_2,(int)(short)param_4);
  }
  return uVar5;
}

