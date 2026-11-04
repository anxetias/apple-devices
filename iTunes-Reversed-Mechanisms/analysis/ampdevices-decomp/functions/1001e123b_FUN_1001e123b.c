// name: FUN_1001e123b
// address: 1001e123b

void FUN_1001e123b(byte *param_1)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  
  uVar3 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar1 = 4;
    uVar4 = 1;
    do {
      bVar2 = (byte)uVar3;
      if ((param_1[uVar4] == 0x25) && (1 < (uint)((int)uVar3 - (int)uVar4))) {
        bVar6 = param_1[uVar4 + 1];
        bVar8 = bVar6 - 0x20;
        if (0x19 < (byte)(bVar6 + 0x9f)) {
          bVar8 = bVar6;
        }
        bVar6 = bVar8 - 0x30;
        if (9 < bVar6) {
          if (5 < (byte)(bVar8 + 0xbf)) goto LAB_1001e130c;
          bVar6 = bVar8 - 0x37;
        }
        bVar8 = param_1[uVar4 + 2];
        bVar7 = bVar8 - 0x20;
        if (0x19 < (byte)(bVar8 + 0x9f)) {
          bVar7 = bVar8;
        }
        bVar8 = bVar7 - 0x30;
        if (9 < bVar8) {
          if (5 < (byte)(bVar7 + 0xbf)) goto LAB_1001e130c;
          bVar8 = bVar7 - 0x37;
        }
        param_1[uVar4] = bVar6 << 4 | bVar8;
        uVar5 = uVar1;
        if (uVar4 + 3 <= uVar3) {
          do {
            param_1[uVar5 - 2] = param_1[uVar5];
            bVar2 = *param_1;
            bVar9 = uVar5 < bVar2;
            uVar5 = uVar5 + 1;
          } while (bVar9);
        }
        uVar3 = (ulong)(byte)(bVar2 - 2);
        *param_1 = bVar2 - 2;
      }
LAB_1001e130c:
      uVar1 = uVar1 + 1;
      bVar9 = uVar4 < uVar3;
      uVar4 = uVar4 + 1;
    } while (bVar9);
  }
  return;
}

