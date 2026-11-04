// name: FUN_1003f630f
// address: 1003f630f

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f630f(long param_1,undefined1 (*param_2) [16])

{
  ushort *puVar1;
  undefined1 (*pauVar2) [16];
  ulong uVar3;
  uint uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  auVar15 = _DAT_100718a70;
  auVar6 = pshufb(*param_2,_DAT_100718a70);
  *param_2 = auVar6;
  uVar4 = *(uint *)(param_2[0x1f] + 4);
  *(uint *)(param_2[0x1f] + 4) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *(ulong *)param_2[1];
  auVar6 = pshufb(auVar6,auVar15);
  *(long *)param_2[1] = auVar6._0_8_;
  uVar4 = *(uint *)(param_2[1] + 8);
  *(uint *)(param_2[1] + 8) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = *(ulong *)param_2[2];
  auVar6 = pshufb(auVar7,auVar15);
  *(long *)param_2[2] = auVar6._0_8_;
  uVar3 = *(ulong *)(param_2[0x12] + 0xc);
  *(ulong *)(param_2[0x12] + 0xc) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  auVar6 = pshufb(*(undefined1 (*) [16])(param_2[2] + 8),auVar15);
  *(undefined1 (*) [16])(param_2[2] + 8) = auVar6;
  uVar4 = *(uint *)(param_2[3] + 8);
  *(uint *)(param_2[3] + 8) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  puVar1 = (ushort *)(param_2[0x20] + 0xc);
  *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
  auVar6 = pshufb(*(undefined1 (*) [16])(param_2[3] + 0xc),auVar15);
  *(undefined1 (*) [16])(param_2[3] + 0xc) = auVar6;
  auVar6 = pshufb(*(undefined1 (*) [16])(param_2[4] + 0xc),auVar15);
  *(undefined1 (*) [16])(param_2[4] + 0xc) = auVar6;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = *(ulong *)(param_2[9] + 8);
  auVar6 = pshufb(auVar8,auVar15);
  *(long *)(param_2[9] + 8) = auVar6._0_8_;
  uVar4 = *(uint *)param_2[10];
  *(uint *)param_2[10] =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = *(ulong *)(param_2[5] + 0xc);
  auVar6 = pshufb(auVar9,auVar15);
  *(long *)(param_2[5] + 0xc) = auVar6._0_8_;
  uVar4 = *(uint *)(param_2[0x15] + 4);
  *(uint *)(param_2[0x15] + 4) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = *(uint *)(param_2[6] + 4);
  *(uint *)(param_2[6] + 4) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = *(uint *)(param_2[0x14] + 4);
  *(uint *)(param_2[0x14] + 4) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  auVar6 = pshufb(param_2[0xe],auVar15);
  param_2[0xe] = auVar6;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *(ulong *)param_2[0xf];
  auVar6 = pshufb(auVar10,auVar15);
  *(long *)param_2[0xf] = auVar6._0_8_;
  auVar7 = _DAT_100711fe0;
  auVar6 = pshufb(*(undefined1 (*) [16])(param_2[0x19] + 8),_DAT_100711fe0);
  *(undefined1 (*) [16])(param_2[0x19] + 8) = auVar6;
  uVar3 = *(ulong *)(param_2[0x20] + 4);
  *(ulong *)(param_2[0x20] + 4) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  auVar6 = pshufb(*(undefined1 (*) [16])(param_2[0x1a] + 8),auVar7);
  *(undefined1 (*) [16])(param_2[0x1a] + 8) = auVar6;
  auVar6 = pshufb(*(undefined1 (*) [16])(param_2[0x1b] + 8),auVar7);
  *(undefined1 (*) [16])(param_2[0x1b] + 8) = auVar6;
  auVar6 = pshufb(*(undefined1 (*) [16])(param_2[0x1c] + 8),auVar7);
  *(undefined1 (*) [16])(param_2[0x1c] + 8) = auVar6;
  uVar3 = *(ulong *)(param_2[0x1d] + 8);
  *(ulong *)(param_2[0x1d] + 8) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *(ulong *)(param_2[6] + 8);
  auVar6 = pshufb(auVar11,auVar15);
  *(long *)(param_2[6] + 8) = auVar6._0_8_;
  uVar3 = *(ulong *)param_2[7];
  *(ulong *)param_2[7] =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  auVar6 = pshufb(*(undefined1 (*) [16])(param_2[0x21] + 8),auVar7);
  *(undefined1 (*) [16])(param_2[0x21] + 8) = auVar6;
  auVar6 = _DAT_10070c140;
  auVar8 = pshufb(ZEXT416(*(uint *)(param_2[7] + 10)),_DAT_10070c140);
  *(int *)(param_2[7] + 10) = auVar8._0_4_;
  puVar1 = (ushort *)(param_2[7] + 0xe);
  *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
  uVar4 = *(uint *)param_2[8];
  *(uint *)param_2[8] =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = *(uint *)param_2[0x16];
  *(uint *)param_2[0x16] =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = *(uint *)(param_2[8] + 0xc);
  *(uint *)(param_2[8] + 0xc) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  pauVar2 = param_2 + 9;
  *(ushort *)*pauVar2 = *(short *)*pauVar2 << 8 | *(ushort *)*pauVar2 >> 8;
  uVar4 = *(uint *)(param_2[9] + 4);
  *(uint *)(param_2[9] + 4) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar3 = *(ulong *)(param_2[0x12] + 4);
  *(ulong *)(param_2[0x12] + 4) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  uVar3 = *(ulong *)(param_2[10] + 8);
  *(ulong *)(param_2[10] + 8) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = *(ulong *)(param_2[0xb] + 4);
  auVar8 = pshufb(auVar12,auVar15);
  *(long *)(param_2[0xb] + 4) = auVar8._0_8_;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = *(ulong *)(param_2[0xc] + 8);
  auVar8 = pshufb(auVar13,auVar15);
  *(long *)(param_2[0xc] + 8) = auVar8._0_8_;
  uVar3 = *(ulong *)(param_2[0xb] + 0xc);
  *(ulong *)(param_2[0xb] + 0xc) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  uVar3 = *(ulong *)(param_2[0xf] + 8);
  *(ulong *)(param_2[0xf] + 8) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  uVar4 = *(uint *)(param_2[0xc] + 4);
  *(uint *)(param_2[0xc] + 4) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = *(uint *)(param_2[0x1f] + 8);
  *(uint *)(param_2[0x1f] + 8) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  auVar8 = pshufb(param_2[0xd],auVar15);
  param_2[0xd] = auVar8;
  uVar3 = *(ulong *)(param_2[0x11] + 8);
  *(ulong *)(param_2[0x11] + 8) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  uVar3 = *(ulong *)(param_2[0x14] + 0xc);
  *(ulong *)(param_2[0x14] + 0xc) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  uVar4 = *(uint *)param_2[0x12];
  *(uint *)param_2[0x12] =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar3 = *(ulong *)(param_2[0x15] + 8);
  *(ulong *)(param_2[0x15] + 8) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  uVar4 = *(uint *)(param_2[0x16] + 0xc);
  *(uint *)(param_2[0x16] + 0xc) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  auVar8 = pshufb(*(undefined1 (*) [16])(param_2[0x18] + 4),auVar15);
  *(undefined1 (*) [16])(param_2[0x18] + 4) = auVar8;
  auVar8 = pshufb(ZEXT416(*(uint *)(param_2[0x17] + 4)),auVar6);
  *(int *)(param_2[0x17] + 4) = auVar8._0_4_;
  uVar4 = *(uint *)(param_2[0x17] + 8);
  *(uint *)(param_2[0x17] + 8) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  auVar8 = pshufb(ZEXT416(*(uint *)(param_2[0x17] + 0xc)),auVar6);
  *(int *)(param_2[0x17] + 0xc) = auVar8._0_4_;
  uVar4 = *(uint *)param_2[0x18];
  *(uint *)param_2[0x18] =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar4 = *(uint *)param_2[0x1e];
  *(uint *)param_2[0x1e] =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  uVar3 = *(ulong *)(param_2[0x1e] + 4);
  *(ulong *)(param_2[0x1e] + 4) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  uVar4 = *(uint *)param_2[0x21];
  *(uint *)param_2[0x21] =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = *(ulong *)(param_2[0x1e] + 0xc);
  auVar15 = pshufb(auVar14,auVar15);
  *(long *)(param_2[0x1e] + 0xc) = auVar15._0_8_;
  uVar3 = *(ulong *)(param_2[0x1f] + 0xc);
  *(ulong *)(param_2[0x1f] + 0xc) =
       uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
       (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
       (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  uVar4 = *(uint *)param_2[0x23];
  *(uint *)param_2[0x23] =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  auVar7 = pshufb(*(undefined1 (*) [16])(param_2[0x23] + 4),auVar7);
  *(undefined1 (*) [16])(param_2[0x23] + 4) = auVar7;
  auVar6 = pshufb(ZEXT416(*(uint *)(param_2[0x24] + 8)),auVar6);
  *(int *)(param_2[0x24] + 8) = auVar6._0_4_;
  uVar4 = *(uint *)(param_2[0x25] + 4);
  *(uint *)(param_2[0x25] + 4) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  if ((*(int *)(param_1 + 0xc) << 8 | *(uint *)(param_1 + 0x10)) < 0x10a) {
    uVar4 = (uint)(long)*(float *)(param_2[8] + 8);
    fVar5 = (float)(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18)
    ;
  }
  else {
    fVar5 = (float)FUN_1001c0f77();
  }
  *(float *)(param_2[8] + 8) = fVar5;
  return;
}

