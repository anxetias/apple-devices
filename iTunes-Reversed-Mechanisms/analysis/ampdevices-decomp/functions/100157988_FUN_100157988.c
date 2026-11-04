// name: FUN_100157988
// address: 100157988

void FUN_100157988(long param_1,long param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6
                  ,ulong param_7)

{
  int iVar4;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  int iVar11;
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined1 (*pauVar17) [16];
  ulong uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  undefined1 extraout_var_00 [56];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [64];
  undefined1 auVar38 [12];
  undefined1 in_ZMM3 [64];
  undefined1 (*local_e0) [16];
  ulong local_d8;
  ulong local_d0;
  long local_c8;
  undefined1 (*local_c0) [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  ulong local_90;
  ulong local_88;
  ulong local_80;
  long local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  long local_58;
  ulong local_50;
  ulong local_48;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 extraout_var [56];
  
  if ((param_2 + 2U <= param_5 || param_4 <= (ulong)(param_2 * 4) && param_2 * 4 - param_4 != 0) ||
      ((9999 < param_3 - 1 || 9999 < param_2 - 1U) || param_1 == 0)) {
    return;
  }
  local_50 = param_2 - param_5;
  local_d8 = local_50 >> 1;
  local_c8 = local_d8 * 0x10;
  local_d0 = param_3;
  local_68 = param_4;
  local_60 = param_3;
  local_48 = local_d8;
  iVar6 = _posix_memalign(&local_e0,0x20,local_c8 * param_3);
  local_c0 = (undefined1 (*) [16])0x0;
  if (iVar6 == 0) {
    local_c0 = local_e0;
  }
  if (local_c0 == (undefined1 (*) [16])0x0) goto LAB_10015800f;
  uVar18 = param_5 - 1;
  if (param_6 < param_5) {
    uVar18 = param_6;
  }
  auVar21 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_1 + (uVar18 + local_48) * 4)));
  *local_c0 = auVar21;
  local_e0 = local_e0 + 1;
  if (3 < local_50) {
    uVar13 = 2;
    if (2 < local_48) {
      uVar13 = local_48;
    }
    lVar14 = uVar13 - 1;
    auVar28 = auVar21;
    do {
      auVar32._0_4_ = auVar28._0_4_ + auVar21._0_4_;
      auVar32._4_4_ = auVar28._4_4_ + auVar21._4_4_;
      auVar32._8_4_ = auVar28._8_4_ + auVar21._8_4_;
      auVar32._12_4_ = auVar28._12_4_ + auVar21._12_4_;
      *local_e0 = auVar32;
      local_e0 = local_e0 + 1;
      lVar14 = lVar14 + -1;
      auVar28 = auVar32;
    } while (lVar14 != 0);
  }
  local_90 = param_7 | 1;
  auVar38 = in_ZMM3._4_12_;
  if (local_60 < 2) {
    auVar21._8_8_ = 0;
    auVar21._0_8_ = local_60;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = local_48;
    auVar28 = vpunpcklqdq_avx(auVar28,auVar21);
    auVar29._8_8_ = DAT_10070bd00;
    auVar29._0_8_ = DAT_10070bd00;
    auVar21 = vpand_avx(auVar28,auVar29);
    auVar32 = vpsrlq_avx(auVar28,1);
    auVar21 = vpor_avx(auVar32,auVar21);
    auVar21 = vblendvpd_avx(auVar28,auVar21,auVar28);
    auVar35._0_4_ = (float)auVar21._8_8_;
    auVar35._4_12_ = auVar38;
    auVar30._0_4_ = (float)auVar21._0_8_;
    auVar30._4_12_ = auVar38;
    auVar21 = vinsertps_avx(auVar30,auVar35,0x1c);
    auVar36._0_4_ = auVar21._0_4_ + auVar21._0_4_;
    auVar36._4_4_ = auVar21._4_4_ + auVar21._4_4_;
    auVar36._8_4_ = auVar21._8_4_ + auVar21._8_4_;
    auVar36._12_4_ = auVar21._12_4_ + auVar21._12_4_;
    auVar28 = vpcmpgtq_avx((undefined1  [16])0x0,auVar28);
    auVar28 = vpshufd_avx(auVar28,0xed);
    auVar21 = vblendvps_avx(auVar21,auVar36,auVar28);
    auVar31._8_8_ = 0;
    auVar31._0_8_ = DAT_10070bcd0;
    auVar21 = vdivps_avx(auVar31,auVar21);
    if (local_60 != 0) goto LAB_100157c35;
    bVar5 = true;
  }
  else {
    lVar14 = (uVar18 + local_48) * 4 + param_1;
    uVar13 = 2;
    if (2 < local_48) {
      uVar13 = local_48;
    }
    uVar15 = 1;
    pauVar9 = local_c0;
    do {
      auVar21 = vpmovzxbd_avx(ZEXT416(*(uint *)(lVar14 + local_68)));
      iVar6 = auVar21._0_4_ + *(int *)*pauVar9;
      iVar8 = auVar21._4_4_ + *(int *)(*pauVar9 + 4);
      iVar11 = auVar21._8_4_ + *(int *)(*pauVar9 + 8);
      iVar4 = auVar21._12_4_ + *(int *)(*pauVar9 + 0xc);
      *(int *)*local_e0 = iVar6;
      *(int *)(*local_e0 + 4) = iVar8;
      *(int *)(*local_e0 + 8) = iVar11;
      *(int *)(*local_e0 + 0xc) = iVar4;
      pauVar12 = pauVar9;
      lVar16 = uVar13 - 1;
      if (3 < local_50) {
        do {
          pauVar12 = pauVar9 + 1;
          auVar1._0_4_ = iVar6 + auVar21._0_4_;
          auVar1._4_4_ = iVar8 + auVar21._4_4_;
          auVar1._8_4_ = iVar11 + auVar21._8_4_;
          auVar1._12_4_ = iVar4 + auVar21._12_4_;
          auVar28 = vpsubd_avx(auVar1,*pauVar9);
          iVar6 = auVar28._0_4_ + *(int *)pauVar9[1];
          iVar8 = auVar28._4_4_ + *(int *)(pauVar9[1] + 4);
          iVar11 = auVar28._8_4_ + *(int *)(pauVar9[1] + 8);
          iVar4 = auVar28._12_4_ + *(int *)(pauVar9[1] + 0xc);
          *(int *)local_e0[1] = iVar6;
          *(int *)(local_e0[1] + 4) = iVar8;
          *(int *)(local_e0[1] + 8) = iVar11;
          *(int *)(local_e0[1] + 0xc) = iVar4;
          local_e0 = local_e0 + 1;
          lVar16 = lVar16 + -1;
          pauVar9 = pauVar12;
        } while (lVar16 != 0);
      }
      lVar14 = lVar14 + local_68;
      uVar15 = uVar15 + 1;
      local_e0 = local_e0 + 1;
      pauVar9 = pauVar12 + 1;
    } while (uVar15 != local_60);
    auVar20._8_8_ = 0;
    auVar20._0_8_ = local_60;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = local_48;
    auVar28 = vpunpcklqdq_avx(auVar24,auVar20);
    auVar25._8_8_ = DAT_10070bd00;
    auVar25._0_8_ = DAT_10070bd00;
    auVar21 = vpand_avx(auVar28,auVar25);
    auVar32 = vpsrlq_avx(auVar28,1);
    auVar21 = vpor_avx(auVar32,auVar21);
    auVar21 = vblendvpd_avx(auVar28,auVar21,auVar28);
    auVar33._0_4_ = (float)auVar21._8_8_;
    auVar33._4_12_ = auVar38;
    auVar26._0_4_ = (float)auVar21._0_8_;
    auVar26._4_12_ = auVar38;
    auVar21 = vinsertps_avx(auVar26,auVar33,0x1c);
    auVar34._0_4_ = auVar21._0_4_ + auVar21._0_4_;
    auVar34._4_4_ = auVar21._4_4_ + auVar21._4_4_;
    auVar34._8_4_ = auVar21._8_4_ + auVar21._8_4_;
    auVar34._12_4_ = auVar21._12_4_ + auVar21._12_4_;
    auVar28 = vpcmpgtq_avx((undefined1  [16])0x0,auVar28);
    auVar28 = vpshufd_avx(auVar28,0xed);
    auVar21 = vblendvps_avx(auVar21,auVar34,auVar28);
    auVar27._8_8_ = 0;
    auVar27._0_8_ = DAT_10070bcd0;
    auVar21 = vdivps_avx(auVar27,auVar21);
LAB_100157c35:
    local_b8 = auVar21;
    auVar37 = ZEXT1664(local_b8);
    local_70 = local_48 + (local_48 == 0);
    local_a8 = vmovshdup_avx(local_b8);
    uVar13 = 0;
    local_34 = DAT_100700b24;
    local_88 = param_5;
    local_80 = uVar18;
    local_58 = param_1;
    fVar23 = DAT_10070bcf0;
    do {
      if (1 < local_50) {
        local_78 = CONCAT44(local_78._4_4_,local_34 * local_34);
        uVar18 = 0;
        fVar19 = DAT_100700b24;
        do {
          local_3c = (fVar19 * fVar19 + (float)local_78) * fVar23;
          local_38 = fVar19;
          auVar22._0_8_ = FUN_1001578dc(&local_d8,uVar18 & 0xffffffff,uVar13 & 0xffffffff,local_90);
          fVar23 = DAT_10070bcf0;
          auVar22._8_56_ = extraout_var;
          auVar37 = ZEXT1664(local_b8);
          uVar10 = vextractps_avx(auVar22._0_16_,2);
          iVar6 = *(int *)(&DAT_10070bd10 + (ulong)((uint)(long)local_3c ^ 0xff) * 4);
          uVar7 = vextractps_avx(auVar22._0_16_,1);
          iVar8 = (uVar7 & 0xff) * iVar6;
          iVar11 = ((uint)auVar22._0_8_ & 0xff) * iVar6;
          *(uint *)(param_1 + uVar18 * 4) =
               (iVar11 + 0x80U >> 8) + iVar11 + 0x80 >> 8 |
               iVar8 + (iVar8 + 0x80U >> 8) + 0x80 & 0xffff00 |
               (uVar10 & 0xff) * iVar6 * 0x101 + 0x8080 & 0xff0000 | 0xff000000;
          uVar18 = uVar18 + 1;
          fVar19 = local_b8._0_4_ + local_38;
        } while (local_70 != uVar18);
      }
      auVar21 = auVar37._0_16_;
      uVar13 = uVar13 + 1;
      param_1 = param_1 + local_68;
      local_34 = local_34 + (float)local_a8._0_4_;
    } while (uVar13 != local_60);
    bVar5 = false;
    uVar18 = local_80;
    param_5 = local_88;
    param_1 = local_58;
  }
  uVar13 = local_90;
  if (param_5 == 1) {
    uVar18 = 1;
  }
  lVar14 = (param_5 + local_48) - uVar18;
  pauVar9 = local_c0 + 1;
  auVar28 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_1 + lVar14 * 4)));
  *local_c0 = auVar28;
  if (3 < local_50) {
    uVar18 = 2;
    if (2 < local_48) {
      uVar18 = local_48;
    }
    lVar16 = uVar18 - 1;
    auVar32 = auVar28;
    do {
      auVar2._0_4_ = auVar32._0_4_ + auVar28._0_4_;
      auVar2._4_4_ = auVar32._4_4_ + auVar28._4_4_;
      auVar2._8_4_ = auVar32._8_4_ + auVar28._8_4_;
      auVar2._12_4_ = auVar32._12_4_ + auVar28._12_4_;
      *pauVar9 = auVar2;
      pauVar9 = pauVar9 + 1;
      lVar16 = lVar16 + -1;
      auVar32 = auVar2;
    } while (lVar16 != 0);
  }
  if (1 < local_60) {
    lVar14 = lVar14 * 4 + param_1;
    uVar18 = 2;
    if (2 < local_48) {
      uVar18 = local_48;
    }
    uVar15 = 1;
    pauVar12 = local_c0;
    do {
      auVar28 = vpmovzxbd_avx(ZEXT416(*(uint *)(lVar14 + local_68)));
      iVar6 = auVar28._0_4_ + *(int *)*pauVar12;
      iVar8 = auVar28._4_4_ + *(int *)(*pauVar12 + 4);
      iVar11 = auVar28._8_4_ + *(int *)(*pauVar12 + 8);
      iVar4 = auVar28._12_4_ + *(int *)(*pauVar12 + 0xc);
      *(int *)*pauVar9 = iVar6;
      *(int *)(*pauVar9 + 4) = iVar8;
      *(int *)(*pauVar9 + 8) = iVar11;
      *(int *)(*pauVar9 + 0xc) = iVar4;
      pauVar17 = pauVar12;
      lVar16 = uVar18 - 1;
      if (3 < local_50) {
        do {
          pauVar17 = pauVar12 + 1;
          auVar3._0_4_ = iVar6 + auVar28._0_4_;
          auVar3._4_4_ = iVar8 + auVar28._4_4_;
          auVar3._8_4_ = iVar11 + auVar28._8_4_;
          auVar3._12_4_ = iVar4 + auVar28._12_4_;
          auVar32 = vpsubd_avx(auVar3,*pauVar12);
          iVar6 = auVar32._0_4_ + *(int *)pauVar12[1];
          iVar8 = auVar32._4_4_ + *(int *)(pauVar12[1] + 4);
          iVar11 = auVar32._8_4_ + *(int *)(pauVar12[1] + 8);
          iVar4 = auVar32._12_4_ + *(int *)(pauVar12[1] + 0xc);
          *(int *)pauVar9[1] = iVar6;
          *(int *)(pauVar9[1] + 4) = iVar8;
          *(int *)(pauVar9[1] + 8) = iVar11;
          *(int *)(pauVar9[1] + 0xc) = iVar4;
          pauVar9 = pauVar9 + 1;
          lVar16 = lVar16 + -1;
          pauVar12 = pauVar17;
        } while (lVar16 != 0);
      }
      lVar14 = lVar14 + local_68;
      uVar15 = uVar15 + 1;
      pauVar9 = pauVar9 + 1;
      pauVar12 = pauVar17 + 1;
    } while (uVar15 != local_60);
  }
  if (!bVar5) {
    param_1 = (param_5 + local_48) * 4 + param_1;
    local_48 = local_48 + (local_48 == 0);
    local_a8 = vmovshdup_avx(auVar21);
    local_34 = DAT_100700b24;
    uVar18 = 0;
    local_b8 = auVar21;
    fVar23 = DAT_10070bcf0;
    do {
      if (1 < local_50) {
        local_70 = CONCAT44(local_70._4_4_,local_34 * local_34);
        fVar19 = 0.0;
        uVar15 = 0;
        local_78 = param_1;
        do {
          local_3c = (fVar19 * fVar19 + (float)local_70) * fVar23;
          local_38 = fVar19;
          auVar37._0_8_ =
               FUN_1001578dc(&local_d8,uVar15 & 0xffffffff,uVar18 & 0xffffffff,uVar13 & 0xffffffff);
          fVar23 = DAT_10070bcf0;
          auVar37._8_56_ = extraout_var_00;
          iVar6 = *(int *)(&DAT_10070bd10 + (ulong)((uint)(long)local_3c ^ 0xff) * 4);
          uVar10 = vextractps_avx(auVar37._0_16_,2);
          uVar7 = vextractps_avx(auVar37._0_16_,1);
          iVar8 = (uVar7 & 0xff) * iVar6;
          iVar11 = ((uint)auVar37._0_8_ & 0xff) * iVar6;
          *(uint *)(local_78 + uVar15 * 4) =
               (iVar11 + 0x80U >> 8) + iVar11 + 0x80 >> 8 |
               (iVar8 + 0x80U >> 8) + iVar8 + 0x80 & 0xffff00 |
               (uVar10 & 0xff) * iVar6 * 0x101 + 0x8080 & 0xff0000 | 0xff000000;
          uVar15 = uVar15 + 1;
          fVar19 = local_b8._0_4_ + local_38;
          param_1 = local_78;
        } while (local_48 != uVar15);
      }
      uVar18 = uVar18 + 1;
      param_1 = param_1 + local_68;
      local_34 = local_34 + (float)local_a8._0_4_;
    } while (uVar18 != local_60);
  }
LAB_10015800f:
  _free(local_c0);
  return;
}

