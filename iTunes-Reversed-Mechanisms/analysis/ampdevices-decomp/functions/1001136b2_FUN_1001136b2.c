// name: FUN_1001136b2
// address: 1001136b2

void FUN_1001136b2(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  fVar8 = (float)*param_1;
  fVar9 = (float)((ulong)*param_1 >> 0x20);
  fVar10 = (float)param_1[2];
  fVar11 = (float)((ulong)param_1[2] >> 0x20);
  auVar12._0_4_ = fVar9 + fVar11;
  auVar12._4_4_ = fVar8 + fVar10;
  auVar12._8_4_ = fVar9 + fVar11;
  auVar12._12_4_ = fVar8 + fVar10;
  auVar5._0_4_ = fVar9 - fVar11;
  auVar5._4_4_ = fVar8 - fVar10;
  auVar5._8_4_ = fVar9 - fVar11;
  auVar5._12_4_ = fVar8 - fVar10;
  auVar6 = blendps(auVar5,auVar12,9);
  fVar8 = *(float *)(param_1 + 1);
  fVar9 = *(float *)((long)param_1 + 0x1c);
  fVar10 = *(float *)(param_1 + 3);
  fVar11 = *(float *)((long)param_1 + 0xc);
  auVar13._0_4_ = fVar9 - fVar11;
  auVar13._4_4_ = fVar9 - fVar11;
  auVar13._8_4_ = fVar8 - fVar10;
  auVar13._12_4_ = fVar8 - fVar10;
  auVar14._4_4_ = fVar9 + fVar11;
  auVar14._0_4_ = fVar9 + fVar11;
  auVar14._8_4_ = fVar8 + fVar10;
  auVar14._12_4_ = fVar8 + fVar10;
  auVar14 = blendps(auVar13,auVar14,9);
  fVar8 = auVar6._0_4_ + auVar14._0_4_;
  fVar9 = auVar6._4_4_ + auVar14._4_4_;
  fVar10 = auVar6._8_4_ + auVar14._8_4_;
  fVar11 = auVar6._12_4_ + auVar14._12_4_;
  auVar2._4_4_ = fVar9;
  auVar2._0_4_ = fVar8;
  auVar2._8_4_ = fVar10;
  auVar2._12_4_ = fVar11;
  uVar1 = extractps(auVar2,3);
  *param_1 = uVar1;
  auVar7._0_4_ = auVar6._0_4_ - auVar14._0_4_;
  auVar7._4_4_ = auVar6._4_4_ - auVar14._4_4_;
  auVar7._8_4_ = auVar6._8_4_ - auVar14._8_4_;
  auVar7._12_4_ = auVar6._12_4_ - auVar14._12_4_;
  auVar4._4_8_ = auVar14._8_8_;
  auVar4._0_4_ = auVar7._4_4_;
  auVar15._0_8_ = auVar4._0_8_ << 0x20;
  auVar15._8_4_ = auVar7._8_4_;
  auVar15._12_4_ = auVar7._12_4_;
  auVar16._4_12_ = auVar15._4_12_;
  auVar16._0_4_ = fVar8;
  *(undefined1 (*) [16])((long)param_1 + 4) = auVar16;
  auVar6._4_4_ = fVar9;
  auVar6._0_4_ = fVar8;
  auVar6._8_4_ = fVar10;
  auVar6._12_4_ = fVar11;
  auVar14 = blendps(auVar7,auVar6,2);
  *(long *)((long)param_1 + 0x14) = auVar14._0_8_;
  auVar3._4_4_ = fVar9;
  auVar3._0_4_ = fVar8;
  auVar3._8_4_ = fVar10;
  auVar3._12_4_ = fVar11;
  uVar1 = extractps(auVar3,2);
  *(undefined8 *)((long)param_1 + 0x1c) = uVar1;
  return;
}

