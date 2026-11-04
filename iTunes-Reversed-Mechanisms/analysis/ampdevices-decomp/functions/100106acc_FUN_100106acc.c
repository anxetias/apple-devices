// name: FUN_100106acc
// address: 100106acc

void FUN_100106acc(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  undefined4 uVar18;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar19;
  undefined1 auVar17 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM7 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  
  lVar3 = *(long *)(param_4 + 0x1940);
  lVar4 = *(long *)(param_4 + 0x1950);
  fVar29 = *(float *)(param_4 + 0xa00);
  fVar7 = *(float *)(param_4 + 0xa04);
  fVar8 = *(float *)(param_4 + 0xa08);
  fVar9 = *(float *)(param_4 + 0xa0c);
  fVar28 = *(float *)(param_4 + 0xa10);
  uVar2 = *(uint *)(param_5 + 0x7c);
  *(uint *)(lVar4 + 0x27c) = uVar2;
  auVar20 = ZEXT416((uint)(fVar28 * *(float *)(lVar4 + 0x26c)));
  auVar15 = insertps(ZEXT416(uVar2),*(undefined4 *)(lVar4 + 0x278),0x10);
  auVar15 = insertps(auVar15,*(undefined4 *)(lVar4 + 0x274),0x20);
  auVar15 = insertps(auVar15,*(undefined4 *)(lVar4 + 0x270),0x30);
  auVar16._0_4_ = auVar15._0_4_ * fVar29;
  auVar16._4_4_ = auVar15._4_4_ * fVar7;
  auVar16._8_4_ = auVar15._8_4_ * fVar8;
  auVar16._12_4_ = auVar15._12_4_ * fVar9;
  puVar11 = (uint *)(param_5 + 0x78);
  puVar12 = (uint *)(lVar4 + 0x268);
  lVar13 = 0;
  lVar14 = 0;
  do {
    pfVar1 = (float *)(param_4 + 0xa14 + lVar14);
    fVar7 = *pfVar1;
    fVar8 = pfVar1[1];
    fVar9 = pfVar1[2];
    fVar10 = pfVar1[3];
    fVar28 = *(float *)(param_4 + 0xa24 + lVar14);
    uVar2 = *puVar11;
    fVar29 = *(float *)(param_4 + 0xa1c + lVar14);
    *puVar12 = uVar2;
    uVar18 = auVar16._4_4_;
    auVar5._4_8_ = in_XMM7._8_8_;
    auVar5._0_4_ = uVar18;
    auVar24._0_8_ = auVar5._0_8_ << 0x20;
    auVar24._8_4_ = auVar16._8_4_;
    uVar19 = auVar16._12_4_;
    auVar24._12_4_ = uVar19;
    auVar26._4_4_ = uVar18;
    auVar26._0_4_ = uVar18;
    auVar26._8_4_ = uVar19;
    auVar26._12_4_ = uVar19;
    auVar17 = insertps(auVar16,ZEXT416((uint)(*(float *)(lVar3 + 0x10 + lVar14) * fVar28)),0x10);
    auVar15 = insertps(ZEXT416(uVar2),puVar12[-1],0x10);
    auVar15 = insertps(auVar15,puVar12[-2],0x20);
    auVar15 = insertps(auVar15,puVar12[-3],0x30);
    auVar16._0_4_ = auVar15._0_4_ * fVar7;
    auVar16._4_4_ = auVar15._4_4_ * fVar8;
    auVar16._8_4_ = auVar15._8_4_ * fVar9;
    auVar16._12_4_ = auVar15._12_4_ * fVar10;
    auVar22._4_4_ = fVar10;
    auVar22._0_4_ = fVar10;
    auVar22._8_4_ = fVar10;
    auVar22._12_4_ = fVar10;
    auVar27._4_12_ = auVar22._4_12_;
    auVar27._0_4_ = fVar10 * *(float *)(lVar3 + 0xc + lVar14);
    auVar22 = insertps(auVar20,ZEXT416((uint)(*(float *)(lVar3 + lVar14) * fVar7)),0x10);
    auVar20._4_4_ = uVar19;
    auVar20._0_4_ = uVar19;
    auVar20._8_4_ = uVar19;
    auVar20._12_4_ = uVar19;
    auVar15._4_4_ = fVar8;
    auVar15._0_4_ = fVar8 * *(float *)(lVar3 + 4 + lVar14);
    auVar15._8_4_ = fVar10;
    auVar15._12_4_ = fVar10;
    auVar15 = insertps(auVar20,auVar15,0x10);
    auVar20 = ZEXT416((uint)(fVar28 * (float)puVar12[-4]));
    auVar25._8_8_ = auVar24._8_8_;
    auVar25._0_8_ = auVar25._8_8_;
    in_XMM7 = insertps(auVar25,ZEXT416((uint)(fVar29 * *(float *)(lVar3 + 8 + lVar14))),0x10);
    auVar27 = insertps(auVar26,auVar27,0x10);
    fVar28 = auVar17._0_4_ + auVar27._0_4_ + in_XMM7._0_4_ + auVar15._0_4_ + auVar22._0_4_;
    fVar29 = auVar17._4_4_ + auVar27._4_4_ + in_XMM7._4_4_ + auVar15._4_4_ + auVar22._4_4_;
    *(float *)(param_2 + lVar13) = fVar28 - fVar29;
    *(float *)(param_3 + lVar13) = fVar28 + fVar29;
    lVar14 = lVar14 + 0x14;
    puVar11 = puVar11 + -1;
    lVar13 = lVar13 + 4;
    puVar12 = puVar12 + -5;
  } while (lVar14 != 0x26c);
  auVar20 = insertps(auVar20,ZEXT416((uint)(*(float *)(param_4 + 0xc80) * *(float *)(lVar3 + 0x26c))
                                    ),0x10);
  auVar6._4_4_ = auVar16._8_4_;
  auVar6._0_4_ = auVar16._4_4_;
  auVar6._8_4_ = auVar16._12_4_;
  auVar21._8_8_ = auVar16._8_8_;
  auVar21._0_8_ = auVar6._4_8_;
  auVar22 = insertps(auVar21,ZEXT416((uint)(*(float *)(param_4 + 0xc88) * *(float *)(lVar3 + 0x274))
                                    ),0x10);
  auVar23._4_4_ = auVar16._12_4_;
  auVar23._0_4_ = auVar16._12_4_;
  auVar23._8_4_ = auVar16._12_4_;
  auVar23._12_4_ = auVar16._12_4_;
  auVar27 = insertps(auVar23,ZEXT416((uint)(*(float *)(param_4 + 0xc84) * *(float *)(lVar3 + 0x270))
                                    ),0x10);
  auVar17._4_4_ = auVar16._4_4_;
  auVar17._0_4_ = auVar16._4_4_;
  auVar17._8_4_ = auVar16._12_4_;
  auVar17._12_4_ = auVar16._12_4_;
  auVar17 = insertps(auVar17,ZEXT416((uint)(*(float *)(param_4 + 0xc8c) * *(float *)(lVar3 + 0x278))
                                    ),0x10);
  auVar15 = insertps(auVar16,ZEXT416((uint)(*(float *)(param_4 + 0xc90) * *(float *)(lVar3 + 0x27c))
                                    ),0x10);
  fVar28 = auVar15._0_4_ + auVar17._0_4_ + auVar22._0_4_ + auVar27._0_4_ + auVar20._0_4_;
  fVar29 = auVar15._4_4_ + auVar17._4_4_ + auVar22._4_4_ + auVar27._4_4_ + auVar20._4_4_;
  *(float *)(param_2 + 0x7c) = fVar28 - fVar29;
  *(float *)(param_3 + 0x7c) = fVar28 + fVar29;
  *(long *)(param_4 + 0x1940) = lVar4;
  *(long *)(param_4 + 0x1950) = lVar3 + 4;
  return;
}

