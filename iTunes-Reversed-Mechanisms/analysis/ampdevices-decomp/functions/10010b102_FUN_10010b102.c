// name: FUN_10010b102
// address: 10010b102

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010b102(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  short sVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  byte bVar12;
  ulong uVar13;
  long lVar14;
  undefined **ppuVar15;
  bool bVar16;
  byte bVar17;
  long lVar18;
  char cVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  undefined **ppuVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  undefined *local_108;
  undefined *local_100;
  long local_f0;
  long local_e8;
  uint local_dc;
  float afStack_d8 [20];
  float local_88 [20];
  long local_38;
  undefined8 uVar36;
  
  fVar35 = DAT_100700b60;
  fVar33 = DAT_100700b5c;
  fVar6 = DAT_100700b58;
  fVar34 = DAT_100700b50;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = *(long *)(param_1 + 0x1e30);
  bVar12 = *(byte *)(lVar5 + 0x10);
  local_110 = *(long *)(lVar5 + 0x1c8);
  local_118 = *(long *)(lVar5 + 0x1d0);
  local_120 = *(long *)(lVar5 + 0x1d8);
  local_128 = *(long *)(lVar5 + 0x1e0);
  lVar14 = lVar5 + 0x170;
  local_f0 = *(long *)(lVar5 + 0x1a0);
  local_e8 = *(long *)(lVar5 + 0x1a8);
  local_88[0x10] = 0.0;
  local_88[0x11] = 0.0;
  local_88[0x12] = 0.0;
  local_88[0x13] = 0.0;
  local_88[0xc] = 0.0;
  local_88[0xd] = 0.0;
  local_88[0xe] = 0.0;
  local_88[0xf] = 0.0;
  local_88[8] = 0.0;
  local_88[9] = 0.0;
  local_88[10] = 0.0;
  local_88[0xb] = 0.0;
  local_88[4] = 0.0;
  local_88[5] = 0.0;
  local_88[6] = 0.0;
  local_88[7] = 0.0;
  local_88[0] = 0.0;
  local_88[1] = 0.0;
  local_88[2] = 0.0;
  local_88[3] = 0.0;
  uVar13 = 0;
  lVar26 = local_118;
  lVar21 = local_110;
  do {
    if (uVar13 == 10) {
      lVar26 = param_3;
      lVar21 = param_2;
    }
    if (uVar13 < 10) {
      cVar19 = (&DAT_1007014c0)[uVar13];
      uVar22 = (int)cVar19 + 1;
LAB_10010b1f7:
      fVar29 = local_88[(long)(short)(&DAT_1007014e0)[uVar13] & 0xffffffffffffefffU];
      lVar20 = (long)cVar19;
      do {
        fVar30 = *(float *)(lVar21 + lVar20 * 4);
        fVar31 = *(float *)(lVar26 + lVar20 * 4);
        fVar29 = fVar29 + fVar30 * fVar30 + fVar31 * fVar31;
        lVar20 = lVar20 + 1;
      } while ((int)uVar22 != lVar20);
      local_88[(long)(short)(&DAT_1007014e0)[uVar13] & 0xffffffffffffefffU] = fVar29;
    }
    else {
      uVar22 = (int)(char)(&DAT_1007014c1)[uVar13];
      if ((int)(uint)bVar12 < (int)(char)(&DAT_1007014c1)[uVar13]) {
        uVar22 = (uint)bVar12;
      }
      cVar19 = (&DAT_1007014c0)[uVar13];
      if ((int)cVar19 < (int)uVar22) goto LAB_10010b1f7;
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 != 0x16);
  lVar21 = *(long *)(lVar5 + 0x1b0);
  lVar26 = *(long *)(lVar5 + 0x1b8);
  lVar20 = *(long *)(lVar5 + 0x1c0);
  lVar18 = 0;
  do {
    fVar30 = *(float *)(lVar21 + lVar18 * 4) * fVar6;
    *(float *)(lVar21 + lVar18 * 4) = fVar30;
    fVar29 = local_88[lVar18];
    if (fVar30 < fVar29) {
      *(float *)(lVar21 + lVar18 * 4) = fVar29;
      fVar30 = fVar29;
    }
    fVar31 = *(float *)(lVar20 + lVar18 * 4);
    fVar31 = ((fVar30 - fVar29) - fVar31) * fVar33 + fVar31;
    *(float *)(lVar20 + lVar18 * 4) = fVar31;
    fVar30 = *(float *)(lVar26 + lVar18 * 4);
    fVar30 = (fVar29 - fVar30) * fVar33 + fVar30;
    *(float *)(lVar26 + lVar18 * 4) = fVar30;
    fVar11 = DAT_100700b68;
    fVar10 = DAT_100700b64;
    fVar29 = DAT_100700b50;
    uVar9 = _UNK_10070043c;
    uVar8 = _UNK_100700438;
    uVar7 = _UNK_100700434;
    uVar22 = _DAT_100700430;
    fVar31 = fVar31 * fVar35;
    uVar28 = -(uint)(fVar30 < fVar31);
    afStack_d8[lVar18] = (float)(~uVar28 & (uint)fVar34 | (uint)(fVar30 / fVar31) & uVar28);
    lVar18 = lVar18 + 1;
  } while (lVar18 != 0x14);
  lVar21 = lVar5 + 0x188;
  local_100 = &DAT_1007015b0;
  local_108 = &DAT_1007015e0;
  ppuVar15 = &PTR_DAT_10088f410;
  ppuVar25 = &PTR_DAT_10088f430;
  uVar13 = 0;
  local_dc = 0;
  do {
    sVar4 = (&DAT_1007014e0)[uVar13];
    if (uVar13 == 10) {
      local_f0 = *(long *)(lVar5 + 0x128);
      local_e8 = *(long *)(lVar5 + 0x130);
      local_dc = 3;
      ppuVar25 = &PTR_DAT_10088f3f0;
      ppuVar15 = &PTR_DAT_10088f3d0;
      local_108 = &DAT_100701560;
      local_100 = &DAT_100701510;
      lVar14 = lVar5 + 0x140;
      lVar21 = lVar5 + 0x158;
      local_128 = param_5;
      local_120 = param_4;
      local_118 = param_3;
      local_110 = param_2;
LAB_10010b44f:
      uVar28 = (int)(char)(&DAT_1007014c1)[uVar13];
      if ((int)(uint)bVar12 < (int)(char)(&DAT_1007014c1)[uVar13]) {
        uVar28 = (uint)bVar12;
      }
      cVar19 = (&DAT_1007014c0)[uVar13];
      if ((int)cVar19 < (int)uVar28) {
        bVar16 = false;
        goto LAB_10010b474;
      }
    }
    else {
      if (9 < uVar13) goto LAB_10010b44f;
      cVar19 = (&DAT_1007014c0)[uVar13];
      uVar28 = (int)cVar19 + 1;
      bVar16 = true;
LAB_10010b474:
      lVar26 = (long)cVar19;
      do {
        lVar20 = lVar26 - (ulong)local_dc;
        uVar1 = *(undefined4 *)(local_110 + lVar26 * 4);
        uVar2 = *(undefined4 *)(local_118 + lVar26 * 4);
        if ((uVar13 < 10) || (lVar26 < 0x17)) {
          fVar34 = fVar29;
          if (3 < lVar26) {
            fVar34 = (float)(int)lVar26 * fVar10 + fVar11;
          }
          fVar6 = fVar29;
          if (!bVar16) {
            fVar6 = fVar34;
          }
          lVar18 = *(long *)(local_f0 + lVar20 * 8);
          lVar24 = (ulong)*(byte *)(lVar5 + 0x124) * 4;
          lVar23 = *(long *)(local_e8 + lVar20 * 8);
          uVar3 = *(uint *)(lVar23 + lVar24);
          auVar39 = insertps(ZEXT416(*(uint *)(local_108 + lVar20 * 4)),ZEXT416(uVar3),0x10);
          auVar37._0_4_ = uVar3 ^ uVar22;
          auVar37._4_4_ = uVar7;
          auVar37._8_4_ = uVar8;
          auVar37._12_4_ = uVar9;
          auVar38 = insertps(auVar37,ZEXT416(*(uint *)(local_100 + lVar20 * 4)),0x1c);
          fVar34 = *(float *)(lVar18 + lVar24);
          auVar37 = insertps(ZEXT416(*(uint *)(local_100 + lVar20 * 4)),
                             ZEXT416(*(uint *)(local_108 + lVar20 * 4)),0x10);
          auVar32._0_4_ = auVar37._0_4_ * fVar34 + auVar38._0_4_ * auVar39._0_4_;
          auVar32._4_4_ = auVar37._4_4_ * fVar34 + auVar38._4_4_ * auVar39._4_4_;
          auVar32._8_4_ = auVar37._8_4_ * 0.0 + auVar38._8_4_ * auVar39._8_4_;
          auVar32._12_4_ = auVar37._12_4_ * 0.0 + auVar38._12_4_ * auVar39._12_4_;
          *(undefined4 *)(lVar18 + lVar24) = uVar1;
          *(undefined4 *)(lVar23 + lVar24) = uVar2;
          lVar18 = 0;
          do {
            lVar27 = (ulong)*(byte *)(lVar5 + 0x138 + lVar18) * 8;
            lVar23 = *(long *)(*(long *)(lVar14 + lVar18 * 8) + lVar27);
            lVar24 = *(long *)(lVar21 + lVar18 * 8);
            uVar3 = *(uint *)(*(long *)(lVar24 + lVar27) + lVar20 * 4);
            fVar30 = (float)(&DAT_1007014b0)[lVar18] * (float)((uint)fVar6 ^ uVar22);
            auVar39 = insertps(ZEXT416(*(uint *)(ppuVar25[lVar18] + lVar20 * 4)),ZEXT416(uVar3),0x10
                              );
            auVar38._0_4_ = uVar3 ^ uVar22;
            auVar38._4_4_ = uVar7;
            auVar38._8_4_ = uVar8;
            auVar38._12_4_ = uVar9;
            auVar37 = insertps(auVar38,ZEXT416(*(uint *)(ppuVar15[lVar18] + lVar20 * 4)),0x1c);
            fVar34 = *(float *)(lVar23 + lVar20 * 4);
            auVar38 = insertps(ZEXT416(*(uint *)(ppuVar15[lVar18] + lVar20 * 4)),
                               ZEXT416(*(uint *)(ppuVar25[lVar18] + lVar20 * 4)),0x10);
            fVar33 = auVar32._12_4_;
            fVar35 = fVar30 * auVar32._0_4_ + auVar38._0_4_ * fVar34 + auVar37._0_4_ * auVar39._0_4_
            ;
            fVar30 = fVar30 * auVar32._4_4_ + auVar38._4_4_ * fVar34 + auVar37._4_4_ * auVar39._4_4_
            ;
            uVar36 = CONCAT44(fVar30,fVar35);
            fVar34 = (float)(&DAT_1007014b0)[lVar18] * fVar6;
            *(float *)(lVar23 + lVar20 * 4) = fVar34 * fVar35 + auVar32._0_4_;
            *(float *)(*(long *)(lVar24 + (ulong)*(byte *)(lVar5 + 0x138 + lVar18) * 8) + lVar20 * 4
                      ) = fVar34 * fVar30 + auVar32._4_4_;
            lVar18 = lVar18 + 1;
            auVar32._8_4_ =
                 auVar32._8_4_ * 0.0 + auVar38._8_4_ * 0.0 + auVar37._8_4_ * auVar39._8_4_;
            auVar32._0_8_ = uVar36;
            auVar32._12_4_ = fVar33 * 0.0 + auVar38._12_4_ * 0.0 + auVar37._12_4_ * auVar39._12_4_;
          } while (lVar18 != 3);
        }
        else {
          lVar18 = *(long *)(local_f0 + lVar20 * 8);
          lVar23 = (ulong)*(byte *)(lVar5 + 0x1d9 + lVar26) * 4;
          lVar20 = *(long *)(local_e8 + lVar20 * 8);
          auVar37 = insertps(ZEXT416(*(uint *)(lVar18 + lVar23)),*(undefined4 *)(lVar20 + lVar23),
                             0x10);
          uVar36 = auVar37._0_8_;
          *(undefined4 *)(lVar18 + lVar23) = uVar1;
          *(undefined4 *)(lVar20 + (ulong)*(byte *)(lVar5 + 0x1d9 + lVar26) * 4) = uVar2;
          bVar17 = *(char *)(lVar5 + 0x1d9 + lVar26) + 1;
          if (*(byte *)(lVar5 + 0x202 + lVar26) <= bVar17) {
            bVar17 = 0;
          }
          *(byte *)(lVar5 + 0x1d9 + lVar26) = bVar17;
        }
        *(float *)(local_120 + lVar26 * 4) =
             afStack_d8[(long)sVar4 & 0xffffffffffffefffU] * (float)uVar36;
        *(float *)(local_128 + lVar26 * 4) =
             (float)((ulong)uVar36 >> 0x20) * afStack_d8[(long)sVar4 & 0xffffffffffffefffU];
        lVar26 = lVar26 + 1;
      } while (lVar26 != (int)uVar28);
    }
    uVar13 = uVar13 + 1;
    if (uVar13 == 0x16) {
      bVar12 = *(char *)(lVar5 + 0x124) + 1;
      if (1 < bVar12) {
        bVar12 = 0;
      }
      *(byte *)(lVar5 + 0x124) = bVar12;
      lVar14 = -3;
      do {
        bVar12 = *(char *)(lVar5 + 0x13b + lVar14) + 1;
        if (*(byte *)(lVar5 + 0x13e + lVar14) <= bVar12) {
          bVar12 = 0;
        }
        *(byte *)(lVar5 + 0x13b + lVar14) = bVar12;
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0);
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
  } while( true );
}

