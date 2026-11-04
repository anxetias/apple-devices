// name: FUN_100529c62
// address: 100529c62

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100529c62(ulong *param_1)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar7 = _DAT_100718a70;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_1;
  auVar5 = pshufb(auVar5,_DAT_100718a70);
  *param_1 = auVar5._0_8_;
  uVar3 = (uint)param_1[1];
  uVar2 = (uint)param_1[6];
  *(uint *)(param_1 + 1) =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  auVar5 = pshufb(ZEXT416(*(uint *)((long)param_1 + 0xc)),_DAT_100741f00);
  *(int *)((long)param_1 + 0xc) = auVar5._0_4_;
  *(uint *)(param_1 + 6) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar4 = *(ulong *)((long)param_1 + 0x34);
  *(ulong *)((long)param_1 + 0x34) =
       uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
       (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
       (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
  uVar3 = *(uint *)((long)param_1 + 0x3c);
  *(uint *)((long)param_1 + 0x3c) =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *(ulong *)((long)param_1 + 0x44);
  auVar5 = pshufb(auVar6,auVar7);
  *(long *)((long)param_1 + 0x44) = auVar5._0_8_;
  uVar3 = *(uint *)((long)param_1 + 0x4c);
  *(uint *)((long)param_1 + 0x4c) =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  puVar1 = param_1 + 10;
  *(ushort *)puVar1 = (short)*puVar1 << 8 | (ushort)*puVar1 >> 8;
  auVar7 = pshufb(*(undefined1 (*) [16])((long)param_1 + 0x54),auVar7);
  *(undefined1 (*) [16])((long)param_1 + 0x54) = auVar7;
  uVar3 = *(uint *)((long)param_1 + 100);
  *(uint *)((long)param_1 + 100) =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar4 = param_1[0xd];
  param_1[0xd] = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                 (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                 (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28 |
                 uVar4 << 0x38;
  uVar3 = (uint)param_1[0xe];
  *(uint *)(param_1 + 0xe) =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  return;
}

