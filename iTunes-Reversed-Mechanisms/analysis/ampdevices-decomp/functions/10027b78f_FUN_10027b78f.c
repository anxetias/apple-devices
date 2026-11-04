// name: FUN_10027b78f
// address: 10027b78f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10027b78f(uint *param_1,int param_2)

{
  ushort *puVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ushort uVar8;
  ushort uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar4 = *param_1;
  uVar5 = *(uint *)((long)param_1 + 6);
  *param_1 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  *(uint *)((long)param_1 + 6) =
       uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  uVar4 = *(uint *)((long)param_1 + 0x30a);
  *(uint *)((long)param_1 + 0x30a) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar6 = *(ulong *)((long)param_1 + 0x30e);
  *(ulong *)((long)param_1 + 0x30e) =
       uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
       (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
       (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *(ulong *)((long)param_1 + 0x32e);
  auVar10 = pshufb(auVar10,_DAT_100718a70);
  *(long *)((long)param_1 + 0x32e) = auVar10._0_8_;
  uVar6 = *(ulong *)(param_1 + 0x155);
  *(ulong *)(param_1 + 0x155) =
       uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
       (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
       (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
  uVar4 = param_1[0xcf];
  param_1[0xcf] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar6 = *(ulong *)(param_1 + 0xd0);
  *(ulong *)(param_1 + 0xd0) =
       uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
       (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
       (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
  uVar3 = (ushort)param_1[0xd2];
  uVar8 = uVar3 << 8 | uVar3 >> 8;
  uVar9 = uVar8;
  if (param_2 != 0) {
    uVar9 = uVar3;
  }
  *(ushort *)(param_1 + 0xd2) = uVar8;
  FUN_1001e5408((long)param_1 + 0x34a,uVar9,0x1ff);
  uVar3 = (ushort)param_1[0x16a];
  uVar9 = uVar3 << 8 | uVar3 >> 8;
  uVar4 = param_1[0x168];
  param_1[0x168] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  *(ushort *)(param_1 + 0x16a) = uVar9;
  if (param_2 != 0) {
    uVar9 = uVar3;
  }
  FUN_1001e5408((long)param_1 + 0x5aa,uVar9,0x1ff);
  uVar3 = (ushort)param_1[0x1ea];
  uVar9 = uVar3 << 8 | uVar3 >> 8;
  *(ushort *)(param_1 + 0x1ea) = uVar9;
  if (param_2 != 0) {
    uVar9 = uVar3;
  }
  FUN_1001e5408((long)param_1 + 0x7aa,uVar9,0x1ff);
  auVar10 = _DAT_100718a70;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *(ulong *)(param_1 + 0x26a);
  auVar11 = pshufb(auVar11,_DAT_100718a70);
  *(long *)(param_1 + 0x26a) = auVar11._0_8_;
  uVar6 = *(ulong *)(param_1 + 0x32d);
  *(ulong *)(param_1 + 0x32d) =
       uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
       (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
       (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
  lVar7 = 0;
  do {
    puVar2 = param_1 + lVar7 + 0x32f;
    *(ushort *)puVar2 = (ushort)*puVar2 << 8 | (ushort)*puVar2 >> 8;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x10);
  uVar3 = *(ushort *)((long)param_1 + 0x1082);
  uVar9 = uVar3 << 8 | uVar3 >> 8;
  auVar10 = pshufb(*(undefined1 (*) [16])((long)param_1 + 0x100a),auVar10);
  *(undefined1 (*) [16])((long)param_1 + 0x100a) = auVar10;
  uVar4 = *(uint *)((long)param_1 + 0x102a);
  *(uint *)((long)param_1 + 0x102a) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar6 = *(ulong *)((long)param_1 + 0x107a);
  *(ulong *)((long)param_1 + 0x107a) =
       uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
       (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
       (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
  *(ushort *)((long)param_1 + 0x1082) = uVar9;
  if ((char)param_2 != '\0') {
    uVar9 = uVar3;
  }
  FUN_1001e5408(param_1 + 0x421,uVar9,0x1ff,uVar9);
  uVar4 = *(uint *)((long)param_1 + 0x1036);
  *(uint *)((long)param_1 + 0x1036) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = *(uint *)((long)param_1 + 0x1282);
  *(uint *)((long)param_1 + 0x1282) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  puVar1 = (ushort *)((long)param_1 + 0x128a);
  *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
  uVar4 = param_1[0x4a6];
  param_1[0x4a6] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  puVar2 = param_1 + 0x4a7;
  *(ushort *)puVar2 = (ushort)*puVar2 << 8 | (ushort)*puVar2 >> 8;
  auVar10 = _DAT_100711fe0;
  auVar11 = pshufb(*(undefined1 (*) [16])(param_1 + 0x4a8),_DAT_100711fe0);
  *(undefined1 (*) [16])(param_1 + 0x4a8) = auVar11;
  auVar11 = pshufb(*(undefined1 (*) [16])(param_1 + 0x4ac),auVar10);
  *(undefined1 (*) [16])(param_1 + 0x4ac) = auVar11;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = *(ulong *)(param_1 + 0x157);
  auVar11 = pshufb(auVar12,_DAT_100718a70);
  *(long *)(param_1 + 0x157) = auVar11._0_8_;
  uVar4 = param_1[0x159];
  param_1[0x159] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = param_1[0x4b0];
  param_1[0x4b0] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar6 = *(ulong *)(param_1 + 0x4b2);
  *(ulong *)(param_1 + 0x4b2) =
       uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
       (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
       (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
  uVar4 = param_1[0x4b5];
  param_1[0x4b5] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar6 = *(ulong *)(param_1 + 0x4be);
  *(ulong *)(param_1 + 0x4be) =
       uVar6 >> 0x38 | (uVar6 & 0xff000000000000) >> 0x28 | (uVar6 & 0xff0000000000) >> 0x18 |
       (uVar6 & 0xff00000000) >> 8 | (uVar6 & 0xff000000) << 8 | (uVar6 & 0xff0000) << 0x18 |
       (uVar6 & 0xff00) << 0x28 | uVar6 << 0x38;
  uVar4 = param_1[0x4d1];
  param_1[0x4d1] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  auVar10 = pshufb(*(undefined1 (*) [16])(param_1 + 0x4d2),auVar10);
  *(undefined1 (*) [16])(param_1 + 0x4d2) = auVar10;
  return;
}

