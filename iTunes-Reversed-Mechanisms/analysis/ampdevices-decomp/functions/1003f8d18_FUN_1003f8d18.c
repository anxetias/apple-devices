// name: FUN_1003f8d18
// address: 1003f8d18

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f8d18(undefined1 (*param_1) [16])

{
  ushort *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar6 = _DAT_100718a70;
  auVar4 = pshufb(*param_1,_DAT_100718a70);
  *param_1 = auVar4;
  uVar2 = *(uint *)param_1[1];
  *(uint *)param_1[1] =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = *(uint *)(param_1[1] + 8);
  *(uint *)(param_1[1] + 8) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = *(uint *)(param_1[5] + 8);
  *(uint *)(param_1[5] + 8) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar3 = *(ulong *)(param_1[1] + 0xc);
  *(ulong *)(param_1[1] + 0xc) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  auVar4 = _DAT_100711fe0;
  auVar5 = pshufb(*(undefined1 (*) [16])(param_1[8] + 8),_DAT_100711fe0);
  *(undefined1 (*) [16])(param_1[8] + 8) = auVar5;
  puVar1 = (ushort *)(param_1[2] + 8);
  *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
  uVar2 = *(uint *)(param_1[2] + 0xc);
  *(uint *)(param_1[2] + 0xc) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = *(uint *)(param_1[3] + 8);
  *(uint *)(param_1[3] + 8) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  auVar5 = pshufb(*(undefined1 (*) [16])(param_1[3] + 0xc),auVar4);
  *(undefined1 (*) [16])(param_1[3] + 0xc) = auVar5;
  uVar2 = *(uint *)(param_1[4] + 0xc);
  *(uint *)(param_1[4] + 0xc) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *(ulong *)(param_1[7] + 0xc);
  auVar6 = pshufb(auVar5,auVar6);
  *(long *)(param_1[7] + 0xc) = auVar6._0_8_;
  uVar2 = *(uint *)(param_1[8] + 4);
  *(uint *)(param_1[8] + 4) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar3 = *(ulong *)param_1[3];
  *(ulong *)param_1[3] =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  auVar6 = pshufb(*(undefined1 (*) [16])(param_1[5] + 0xc),auVar4);
  *(undefined1 (*) [16])(param_1[5] + 0xc) = auVar6;
  auVar4 = pshufb(*(undefined1 (*) [16])(param_1[6] + 0xc),auVar4);
  *(undefined1 (*) [16])(param_1[6] + 0xc) = auVar4;
  uVar2 = *(uint *)(param_1[9] + 0xc);
  *(uint *)(param_1[9] + 0xc) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  return;
}

