// name: FUN_10054d34a
// address: 10054d34a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10054d34a(long param_1)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  byte bVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  lVar2 = *(long *)(param_1 + 0x818);
  if (*(int *)(lVar2 + 4) == 0x73747a32) {
    uVar3 = *(uint *)(lVar2 + 0x10);
    if (*(int *)(lVar2 + 0xc) == 8) {
      if (uVar3 == 0) goto LAB_10054d44b;
      dVar7 = 0.0;
      uVar5 = 0;
      do {
        dVar7 = dVar7 + (double)*(byte *)(lVar2 + 0x14 + uVar5);
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
    }
    else if (*(int *)(lVar2 + 0xc) == 4) {
      if (uVar3 == 0) {
LAB_10054d44b:
        dVar7 = 0.0;
        uVar3 = 0;
      }
      else {
        uVar4 = 0;
        dVar7 = 0.0;
        do {
          bVar1 = *(byte *)(lVar2 + 0x14 + (ulong)(uVar4 >> 1));
          bVar6 = bVar1 & 0xf;
          if ((uVar4 & 1) == 0) {
            bVar6 = bVar1 >> 4;
          }
          dVar7 = dVar7 + (double)bVar6;
          uVar4 = uVar4 + 1;
        } while (uVar3 != uVar4);
      }
    }
    else {
      if (uVar3 == 0) goto LAB_10054d44b;
      dVar7 = 0.0;
      uVar5 = 0;
      do {
        dVar7 = dVar7 + (double)*(ushort *)(lVar2 + 0x14 + uVar5 * 2);
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
    }
  }
  else {
    dVar7 = 0.0;
    if (*(int *)(lVar2 + 4) != 0x7374737a) goto LAB_10054d45c;
    if (*(int *)(lVar2 + 0xc) != 0) {
      dVar7 = (double)*(int *)(lVar2 + 0xc);
      goto LAB_10054d45c;
    }
    uVar3 = *(uint *)(lVar2 + 0x10);
    if ((ulong)uVar3 != 0) {
      uVar5 = 0;
      do {
        dVar7 = dVar7 + (double)*(uint *)(lVar2 + 0x14 + uVar5 * 4);
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
    }
  }
  dVar7 = dVar7 / (double)(int)uVar3;
LAB_10054d45c:
  dVar7 = ((double)*(float *)(param_1 + 0x858) * dVar7 * _DAT_100747c98) /
          (double)*(uint *)(param_1 + 0x868);
  uVar5 = 0;
  if (*(int *)(param_1 + 0x850) == 0x6d703461) {
    auVar9._0_8_ = (double)((ulong)(dVar7 / DAT_100756400) & _DAT_100700b30 | _DAT_1007563e0) +
                   dVar7 / DAT_100756400;
    auVar9._8_8_ = _UNK_1007563e8;
    auVar9 = roundsd(ZEXT816(0),auVar9,0xb);
    uVar5 = auVar9._8_8_;
    dVar7 = auVar9._0_8_ * DAT_100756400;
  }
  auVar8._8_8_ = _UNK_100700b38 & uVar5 | _UNK_1007563e8;
  auVar8._0_8_ = (double)(_DAT_100700b30 & (ulong)dVar7 | _DAT_1007563e0) + dVar7;
  auVar9 = roundsd(auVar8,auVar8,0xb);
  return (long)auVar9._0_8_;
}

