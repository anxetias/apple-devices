// name: FUN_100285d02
// address: 100285d02

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100285d02(float *param_1,long param_2,long param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long lVar10;
  undefined2 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar15 [16];
  float fVar20;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  
  auVar17 = _DAT_10073fa50;
  auVar16 = _DAT_10073fa40;
  fVar9 = _UNK_10073fa3c;
  fVar8 = _UNK_10073fa38;
  fVar7 = _UNK_10073fa34;
  fVar20 = _DAT_10073fa30;
  fVar19 = DAT_10070c178;
  fVar18 = DAT_10070bcf4;
  fVar6 = _UNK_10070043c;
  fVar5 = _UNK_100700438;
  uVar4 = _UNK_100700434;
  fVar23 = param_1[0x10];
  fVar1 = *param_1;
  fVar2 = param_1[4];
  fVar22 = param_1[8];
  auVar15 = ZEXT416((uint)param_1[0xc]);
  fVar21 = param_1[0xe];
  auVar13 = ZEXT416((uint)fVar21);
  if (param_5 != 2) {
    if (((uint)fVar23 & 1) == 0) {
      if (((uint)fVar23 & 2) == 0) {
        if (param_4 != 0) {
          fVar22 = (float)((uint)fVar22 ^ _DAT_100700430);
          lVar10 = 0;
          do {
            fVar23 = auVar15._0_4_;
            auVar29._4_4_ = uVar4;
            auVar29._0_4_ = fVar22;
            auVar29._8_4_ = fVar5;
            auVar29._12_4_ = fVar6;
            auVar15._4_12_ = auVar29._4_12_;
            auVar15._0_4_ = fVar22 * fVar23 + *(float *)(param_2 + lVar10 * 4);
            *(float *)(param_3 + lVar10 * 4) = fVar23 * fVar2 + fVar1 * auVar15._0_4_;
            lVar10 = lVar10 + 1;
          } while (param_4 != (int)lVar10);
        }
      }
      else if (param_4 != 0) {
        fVar22 = (float)((uint)fVar22 ^ _DAT_100700430);
        lVar10 = 0;
        auVar16 = auVar15;
        do {
          auVar13._4_4_ = uVar4;
          auVar13._0_4_ = fVar22;
          auVar13._8_4_ = fVar5;
          auVar13._12_4_ = fVar6;
          auVar15._4_12_ = auVar13._4_12_;
          auVar15._0_4_ = fVar22 * auVar16._0_4_ + *(float *)(param_2 + lVar10 * 4);
          fVar23 = auVar16._0_4_ * fVar2 + fVar1 * auVar15._0_4_;
          uVar11 = 0x7fff;
          if (fVar23 <= fVar18) {
            fVar20 = fVar19;
            if (fVar19 <= fVar23) {
              fVar20 = fVar23;
            }
            uVar11 = (undefined2)(int)fVar20;
          }
          *(undefined2 *)(param_3 + lVar10 * 2) = uVar11;
          lVar10 = lVar10 + 1;
          auVar16 = auVar15;
        } while (param_4 != (int)lVar10);
      }
    }
    else if (((uint)fVar23 & 2) == 0) {
      if (param_4 != 0) {
        fVar22 = (float)((uint)fVar22 ^ _DAT_100700430);
        lVar10 = 0;
        do {
          fVar23 = auVar15._0_4_;
          auVar16._4_4_ = uVar4;
          auVar16._0_4_ = fVar22;
          auVar16._8_4_ = fVar5;
          auVar16._12_4_ = fVar6;
          auVar15._4_12_ = auVar16._4_12_;
          auVar15._0_4_ = fVar22 * fVar23 + (float)(int)*(short *)(param_2 + lVar10 * 2);
          *(float *)(param_3 + lVar10 * 4) = fVar23 * fVar2 + fVar1 * auVar15._0_4_;
          lVar10 = lVar10 + 1;
        } while (param_4 != (int)lVar10);
      }
    }
    else if (param_4 != 0) {
      fVar22 = (float)((uint)fVar22 ^ _DAT_100700430);
      lVar10 = 0;
      auVar16 = auVar15;
      do {
        auVar17._4_4_ = uVar4;
        auVar17._0_4_ = fVar22;
        auVar17._8_4_ = fVar5;
        auVar17._12_4_ = fVar6;
        auVar15._4_12_ = auVar17._4_12_;
        auVar15._0_4_ = fVar22 * auVar16._0_4_ + (float)(int)*(short *)(param_2 + lVar10 * 2);
        fVar23 = auVar16._0_4_ * fVar2 + fVar1 * auVar15._0_4_;
        uVar11 = 0x7fff;
        if (fVar23 <= fVar18) {
          fVar20 = fVar19;
          if (fVar19 <= fVar23) {
            fVar20 = fVar23;
          }
          uVar11 = (undefined2)(int)fVar20;
        }
        *(undefined2 *)(param_3 + lVar10 * 2) = uVar11;
        lVar10 = lVar10 + 1;
        auVar16 = auVar15;
      } while (param_4 != (int)lVar10);
    }
    goto LAB_100286050;
  }
  if (((uint)fVar23 & 1) == 0) {
    if (((uint)fVar23 & 2) == 0) {
      if (param_4 == 0) goto LAB_100286050;
      auVar15 = insertps(auVar15,auVar13,0x10);
      fVar21 = (float)((uint)fVar22 ^ _DAT_100700430);
      fVar22 = (float)((uint)fVar22 ^ _UNK_100700434);
      lVar10 = 0;
      do {
        fVar23 = auVar15._0_4_;
        fVar18 = auVar15._4_4_;
        fVar19 = auVar15._8_4_;
        fVar20 = auVar15._12_4_;
        uVar3 = *(undefined8 *)(param_2 + lVar10 * 8);
        auVar15._0_4_ = fVar21 * fVar23 + (float)uVar3;
        auVar15._4_4_ = fVar22 * fVar18 + (float)((ulong)uVar3 >> 0x20);
        auVar15._8_4_ = fVar5 * fVar19 + 0.0;
        auVar15._12_4_ = fVar6 * fVar20 + 0.0;
        *(ulong *)(param_3 + lVar10 * 8) =
             CONCAT44(fVar18 * fVar2 + fVar1 * auVar15._4_4_,fVar23 * fVar2 + fVar1 * auVar15._0_4_)
        ;
        lVar10 = lVar10 + 1;
      } while (param_4 != (int)lVar10);
    }
    else {
      if (param_4 == 0) goto LAB_100286050;
      auVar15 = insertps(auVar15,auVar13,0x10);
      fVar21 = (float)((uint)fVar22 ^ _DAT_100700430);
      fVar22 = (float)((uint)fVar22 ^ _UNK_100700434);
      lVar10 = 0;
      do {
        fVar23 = auVar15._4_4_;
        fVar18 = auVar15._12_4_;
        uVar3 = *(undefined8 *)(param_2 + lVar10 * 8);
        fVar19 = auVar15._0_4_;
        fVar28 = auVar15._8_4_;
        auVar15._0_4_ = fVar21 * fVar19 + (float)uVar3;
        auVar15._4_4_ = fVar22 * fVar23 + (float)((ulong)uVar3 >> 0x20);
        auVar15._8_4_ = fVar5 * fVar28 + 0.0;
        auVar15._12_4_ = fVar6 * fVar18 + 0.0;
        auVar24._0_4_ = fVar19 * fVar2 + fVar1 * auVar15._0_4_;
        auVar24._4_4_ = fVar23 * fVar2 + fVar1 * auVar15._4_4_;
        auVar24._8_4_ = fVar28 * 0.0 + auVar15._8_4_ * 0.0;
        auVar24._12_4_ = fVar18 * 0.0 + auVar15._12_4_ * 0.0;
        auVar12._4_4_ = -(uint)(fVar7 < auVar24._4_4_);
        auVar12._0_4_ = -(uint)(fVar20 < auVar24._0_4_);
        auVar12._8_4_ = -(uint)(fVar8 < auVar24._8_4_);
        auVar12._12_4_ = -(uint)(fVar9 < auVar24._12_4_);
        auVar13 = pshuflw(auVar12,auVar12,0xe8);
        auVar29 = maxps(auVar16,auVar24);
        auVar25._0_4_ = (int)auVar29._0_4_;
        auVar25._4_4_ = (int)auVar29._4_4_;
        auVar25._8_4_ = (int)auVar29._8_4_;
        auVar25._12_4_ = (int)auVar29._12_4_;
        auVar29 = pshuflw(auVar25,auVar25,0xe8);
        auVar13 = pblendvb(auVar29,auVar17,auVar13);
        *(int *)(param_3 + lVar10 * 4) = auVar13._0_4_;
        lVar10 = lVar10 + 1;
      } while (param_4 != (int)lVar10);
    }
  }
  else if (((uint)fVar23 & 2) == 0) {
    if (param_4 == 0) goto LAB_100286050;
    auVar15 = insertps(auVar15,auVar13,0x10);
    fVar21 = (float)((uint)fVar22 ^ _DAT_100700430);
    fVar22 = (float)((uint)fVar22 ^ _UNK_100700434);
    lVar10 = 0;
    do {
      fVar23 = auVar15._0_4_;
      fVar18 = auVar15._4_4_;
      fVar19 = auVar15._8_4_;
      fVar20 = auVar15._12_4_;
      auVar16 = ZEXT416(*(uint *)(param_2 + lVar10 * 4));
      auVar16 = pmovsxwd(auVar16,auVar16);
      auVar15._0_4_ = fVar21 * fVar23 + (float)auVar16._0_4_;
      auVar15._4_4_ = fVar22 * fVar18 + (float)auVar16._4_4_;
      auVar15._8_4_ = fVar5 * fVar19 + (float)auVar16._8_4_;
      auVar15._12_4_ = fVar6 * fVar20 + (float)auVar16._12_4_;
      *(ulong *)(param_3 + lVar10 * 8) =
           CONCAT44(fVar18 * fVar2 + fVar1 * auVar15._4_4_,fVar23 * fVar2 + fVar1 * auVar15._0_4_);
      lVar10 = lVar10 + 1;
    } while (param_4 != (int)lVar10);
  }
  else {
    if (param_4 == 0) goto LAB_100286050;
    auVar15 = insertps(auVar15,auVar13,0x10);
    fVar21 = (float)((uint)fVar22 ^ _DAT_100700430);
    fVar22 = (float)((uint)fVar22 ^ _UNK_100700434);
    lVar10 = 0;
    do {
      fVar23 = auVar15._4_4_;
      fVar18 = auVar15._12_4_;
      auVar13 = ZEXT416(*(uint *)(param_2 + lVar10 * 4));
      auVar13 = pmovsxwd(auVar13,auVar13);
      fVar19 = auVar15._0_4_;
      fVar28 = auVar15._8_4_;
      auVar15._0_4_ = fVar21 * fVar19 + (float)auVar13._0_4_;
      auVar15._4_4_ = fVar22 * fVar23 + (float)auVar13._4_4_;
      auVar15._8_4_ = fVar5 * fVar28 + (float)auVar13._8_4_;
      auVar15._12_4_ = fVar6 * fVar18 + (float)auVar13._12_4_;
      auVar26._0_4_ = fVar19 * fVar2 + fVar1 * auVar15._0_4_;
      auVar26._4_4_ = fVar23 * fVar2 + fVar1 * auVar15._4_4_;
      auVar26._8_4_ = fVar28 * 0.0 + auVar15._8_4_ * 0.0;
      auVar26._12_4_ = fVar18 * 0.0 + auVar15._12_4_ * 0.0;
      auVar14._4_4_ = -(uint)(fVar7 < auVar26._4_4_);
      auVar14._0_4_ = -(uint)(fVar20 < auVar26._0_4_);
      auVar14._8_4_ = -(uint)(fVar8 < auVar26._8_4_);
      auVar14._12_4_ = -(uint)(fVar9 < auVar26._12_4_);
      auVar13 = pshuflw(auVar14,auVar14,0xe8);
      auVar29 = maxps(auVar16,auVar26);
      auVar27._0_4_ = (int)auVar29._0_4_;
      auVar27._4_4_ = (int)auVar29._4_4_;
      auVar27._8_4_ = (int)auVar29._8_4_;
      auVar27._12_4_ = (int)auVar29._12_4_;
      auVar29 = pshuflw(auVar27,auVar27,0xe8);
      auVar13 = pblendvb(auVar29,auVar17,auVar13);
      *(int *)(param_3 + lVar10 * 4) = auVar13._0_4_;
      lVar10 = lVar10 + 1;
    } while (param_4 != (int)lVar10);
  }
  fVar21 = auVar15._4_4_;
LAB_100286050:
  param_1[0xc] = auVar15._0_4_;
  param_1[0xe] = fVar21;
  return;
}

