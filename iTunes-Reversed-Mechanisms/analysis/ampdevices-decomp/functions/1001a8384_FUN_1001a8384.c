// name: FUN_1001a8384
// address: 1001a8384

void FUN_1001a8384(undefined8 *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  byte bVar13;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_3 - 1U < 2) {
    uVar5 = FUN_1001b83f0(param_2);
    if ((uVar5 & 1) == 0) {
      uVar6 = _CFDataCreateMutable(DAT_1008c4d98,0);
      *param_1 = uVar6;
      *(undefined1 *)(param_1 + 1) = 1;
      _CFDataSetLength(uVar6,uVar5 >> 1);
      lVar10 = FUN_1001b83ae(param_2);
      lVar8 = FUN_1001b83ae(param_2);
      lVar9 = _CFDataGetMutableBytePtr(*param_1);
      if (lVar10 != lVar8 + uVar5) {
        lVar11 = 0;
        do {
          cVar2 = *(char *)(lVar10 + lVar11 * 2);
          bVar12 = cVar2 - 0x30;
          if (9 < bVar12) {
            if ((byte)(cVar2 + 0x9fU) < 6) {
              bVar12 = cVar2 + 0xa9;
            }
            else {
              bVar12 = cVar2 - 0x37;
              if (5 < (byte)(cVar2 + 0xbfU)) {
                bVar12 = 0xff;
              }
            }
          }
          lVar1 = lVar10 + lVar11 * 2;
          cVar2 = *(char *)(lVar1 + 1);
          bVar13 = cVar2 - 0x30;
          if (9 < bVar13) {
            if ((byte)(cVar2 + 0x9fU) < 6) {
              bVar13 = cVar2 + 0xa9;
            }
            else {
              bVar13 = cVar2 - 0x37;
              if (5 < (byte)(cVar2 + 0xbfU)) {
                bVar13 = 0xff;
              }
            }
          }
          *(byte *)(lVar9 + lVar11) = bVar12 << 4 | bVar13;
          lVar11 = lVar11 + 1;
        } while (lVar1 + 2 != lVar8 + uVar5);
      }
    }
  }
  else if (param_3 == 3) {
    lVar10 = FUN_1001b8d0c(param_2);
    if (lVar10 != 0) {
      uVar6 = _CFStringCreateExternalRepresentation(DAT_1008c4d98,lVar10,0x8000100,0);
      *param_1 = uVar6;
      *(undefined1 *)(param_1 + 1) = 0;
      _CFRelease(lVar10);
      return;
    }
  }
  else if (param_3 == 0) {
    uVar5 = FUN_1001b83f0(param_2);
    if (uVar5 >> 0x20 != 0) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        FUN_10069ecc7(uVar6);
      }
      FUN_1001782e9(0,0);
    }
    uVar3 = FUN_1001b83f0(param_2);
    uVar3 = FUN_10015f3c8(uVar3);
    uVar6 = _CFDataCreateMutable(DAT_1008c4d98,0);
    *param_1 = uVar6;
    *(undefined1 *)(param_1 + 1) = 1;
    _CFDataSetLength(uVar6,uVar3);
    uVar6 = FUN_1001b83ae(param_2);
    uVar4 = FUN_1001b83f0(param_2);
    uVar7 = _CFDataGetMutableBytePtr(*param_1);
    uVar3 = FUN_10015f5bf(uVar6,uVar4,uVar7,uVar3,0);
    _CFDataSetLength(*param_1,uVar3);
  }
  return;
}

