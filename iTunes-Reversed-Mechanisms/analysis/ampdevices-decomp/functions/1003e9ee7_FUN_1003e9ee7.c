// name: FUN_1003e9ee7
// address: 1003e9ee7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003e9ee7(undefined1 (*param_1) [16])

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar6 = _DAT_100718a70;
  auVar4 = pshufb(*param_1,_DAT_100718a70);
  *param_1 = auVar4;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(ulong *)param_1[1];
  auVar4 = pshufb(auVar4,auVar6);
  *(long *)param_1[1] = auVar4._0_8_;
  uVar3 = *(ulong *)(param_1[2] + 4);
  *(ulong *)(param_1[2] + 4) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  uVar2 = *(uint *)(param_1[2] + 0xc);
  *(uint *)(param_1[2] + 0xc) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  pauVar1 = param_1 + 3;
  *(ushort *)*pauVar1 = *(short *)*pauVar1 << 8 | *(ushort *)*pauVar1 >> 8;
  uVar3 = *(ulong *)(param_1[4] + 8);
  *(ulong *)(param_1[4] + 8) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *(ulong *)param_1[5];
  auVar6 = pshufb(auVar5,auVar6);
  *(long *)param_1[5] = auVar6._0_8_;
  uVar2 = *(uint *)(param_1[6] + 0xc);
  *(uint *)(param_1[6] + 0xc) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  pauVar1 = param_1 + 7;
  *(ushort *)*pauVar1 = *(short *)*pauVar1 << 8 | *(ushort *)*pauVar1 >> 8;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *(ulong *)param_1[10];
  auVar6 = pshufb(auVar6,_DAT_10070c150);
  *(long *)param_1[10] = auVar6._0_8_;
  uVar2 = *(uint *)(param_1[0xe] + 8);
  *(uint *)(param_1[0xe] + 8) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  return;
}

