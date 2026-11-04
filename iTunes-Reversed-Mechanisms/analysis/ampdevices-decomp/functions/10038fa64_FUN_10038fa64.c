// name: FUN_10038fa64
// address: 10038fa64

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10038fa64(undefined1 (*param_1) [16])

{
  ushort *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar4 = _DAT_100718a70;
  auVar7 = *(undefined1 (*) [16])(param_1[2] + 0xc);
  auVar5 = pshufb(*param_1,_DAT_100718a70);
  *param_1 = auVar5;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *(ulong *)param_1[1];
  auVar5 = pshufb(auVar5,auVar4);
  *(long *)param_1[1] = auVar5._0_8_;
  puVar1 = (ushort *)(param_1[1] + 0xc);
  *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *(ulong *)(param_1[2] + 4);
  auVar5 = pshufb(auVar6,auVar4);
  *(long *)(param_1[2] + 4) = auVar5._0_8_;
  auVar7 = pshufb(auVar7,_DAT_100711fe0);
  *(undefined1 (*) [16])(param_1[2] + 0xc) = auVar7;
  uVar3 = *(ulong *)(param_1[3] + 0xc);
  *(ulong *)(param_1[3] + 0xc) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  uVar3 = *(ulong *)(param_1[5] + 0xc);
  *(ulong *)(param_1[5] + 0xc) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  uVar2 = *(uint *)(param_1[4] + 4);
  *(uint *)(param_1[4] + 4) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar3 = *(ulong *)(param_1[4] + 8);
  *(ulong *)(param_1[4] + 8) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = *(ulong *)param_1[5];
  auVar7 = pshufb(auVar7,auVar4);
  *(long *)param_1[5] = auVar7._0_8_;
  puVar1 = (ushort *)(param_1[5] + 8);
  *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
  return;
}

