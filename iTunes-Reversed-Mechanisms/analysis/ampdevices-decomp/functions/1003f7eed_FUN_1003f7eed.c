// name: FUN_1003f7eed
// address: 1003f7eed

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f7eed(long param_1)

{
  ushort *puVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(ulong *)(param_1 + 4);
  auVar4 = pshufb(auVar4,_DAT_10070c150);
  *(long *)(param_1 + 4) = auVar4._0_8_;
  puVar1 = (ushort *)(param_1 + 0x12);
  *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
  puVar1 = (ushort *)(param_1 + 0x220);
  *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *(ulong *)(param_1 + 0x14);
  auVar4 = pshufb(auVar5,_DAT_10070e4b0);
  *(long *)(param_1 + 0x14) = auVar4._0_8_;
  uVar2 = *(uint *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x1c) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  lVar3 = 0;
  auVar4 = ZEXT416(DAT_100741f00);
  do {
    auVar5 = pshufb(ZEXT416(*(uint *)(param_1 + 0x20 + lVar3)),auVar4);
    *(int *)(param_1 + 0x20 + lVar3) = auVar5._0_4_;
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x200);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *(ulong *)(param_1 + 0x228);
  auVar4 = pshufb(auVar6,_DAT_10070c150);
  *(long *)(param_1 + 0x228) = auVar4._0_8_;
  return;
}

