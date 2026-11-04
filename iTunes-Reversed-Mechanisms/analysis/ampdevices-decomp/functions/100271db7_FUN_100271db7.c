// name: FUN_100271db7
// address: 100271db7

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100271db7(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  byte bVar14;
  char cVar15;
  uint uVar16;
  long lVar17;
  ulong uVar19;
  undefined8 uVar20;
  ushort uVar21;
  ulong uVar22;
  undefined4 *puVar23;
  undefined *puVar24;
  uint uVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  long lVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  bool bVar35;
  float fVar36;
  float fVar38;
  float fVar39;
  undefined1 auVar37 [16];
  float fVar40;
  float fVar41;
  float fVar43;
  float fVar44;
  undefined1 auVar42 [16];
  float fVar45;
  float fVar47;
  undefined1 auVar46 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar48 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar52 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar56 [16];
  float fVar62;
  float fVar63;
  undefined1 auVar60 [16];
  float fVar64;
  undefined1 auVar61 [16];
  float fVar67;
  float fVar68;
  undefined1 auVar65 [16];
  float fVar69;
  undefined1 auVar66 [16];
  undefined1 (*local_2468) [16];
  undefined1 local_2458 [4608];
  undefined1 local_1258 [4608];
  undefined8 local_58;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined8 uStack_40;
  long local_38;
  ulong uVar18;
  
  uStack_40 = 0x100271dcf;
  lVar17 = FUN_100108310();
  cVar15 = DAT_1008c5d60;
  lVar17 = -lVar17;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar14 = *(byte *)(param_1 + 0x15);
  local_58 = (undefined1 *)CONCAT44(local_58._4_4_,(undefined4)local_58);
  if (bVar14 != 0) {
    uVar33 = 0;
    lVar34 = param_1 + 0x2298;
    do {
      uVar22 = (ulong)*(uint *)(param_1 + 0x28);
      if ((*(char *)(param_1 + 0x12) != '\x02') && (*(long *)(param_1 + 0x4fa0) != 0)) {
        puVar23 = (undefined4 *)
                  (*(long *)(param_1 + 0x4fa0) +
                  (ulong)((int)uVar33 * *(uint *)(param_1 + 0x28) * 0x20) * 4);
        lVar29 = 0;
        lVar28 = lVar34;
        do {
          if (uVar22 != 0) {
            lVar32 = 0;
            do {
              *puVar23 = *(undefined4 *)(lVar28 + lVar32 * 4);
              puVar23 = puVar23 + 1;
              lVar32 = lVar32 + 0x20;
            } while (uVar22 << 5 != lVar32);
          }
          lVar29 = lVar29 + 1;
          lVar28 = lVar28 + 4;
        } while (lVar29 != 0x20);
      }
      uVar21 = *(ushort *)(param_1 + 0x2294 + uVar33 * 2);
      uVar18 = (ulong)uVar21;
      if (*(long *)(param_1 + 0x8c) != 0) {
        local_2468 = (undefined1 (*) [16])(*(long *)(param_1 + 0x8c) + uVar33 * 4);
        if (cVar15 != '\0') {
          if (bVar14 < 2) {
            if (((ulong)local_2468 & 0xf) != 0) {
              *(undefined8 *)((long)&local_38 + lVar17) = 0x100272569;
              uVar20 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar17) = 0x100272579;
              cVar15 = _os_log_type_enabled(uVar20,0x10);
              if (cVar15 != '\0') {
                local_58._0_4_ = 0x8220202;
                local_58._4_4_ = 0x7a0a90;
                local_50 = 1;
                uStack_4c = 0x822;
                uStack_4a = 0x6594;
                uStack_48 = 0x1007b;
                *(undefined8 *)((long)&local_38 + lVar17) = 0x1002725f1;
                __os_log_error_impl(0x100000000,uVar20,0x10,"%{public}s: (%{public}s)",&local_58,
                                    0x16);
              }
              *(undefined8 *)((long)&local_38 + lVar17) = 0x100272586;
              FUN_1001782e9(0,0);
              goto LAB_100272586;
            }
          }
          else {
            local_2468 = (undefined1 (*) [16])(local_2458 + uVar33 * 0x1200);
          }
        }
        if (uVar22 != 0) {
          lVar28 = uVar33 * 0x1000 + param_1 + 0x294;
          uVar30 = 0;
          do {
            iVar13 = (int)uVar18;
            uVar16 = iVar13 + 0x3c0U & 0x3ff;
            uVar18 = (ulong)uVar16;
            lVar29 = uVar30 * 0x80 + param_1 + 0x2298 + uVar33 * 0x1200;
            pfVar1 = (float *)(lVar28 + uVar18 * 4);
            if (cVar15 == '\0') {
              *(undefined8 *)((long)&local_38 + lVar17) = 0x10027225b;
              FUN_100493ff1(lVar29);
              uVar19 = (ulong)*(byte *)(param_1 + 0x15);
              puVar24 = &DAT_10071d010;
              pauVar27 = local_2468;
              uVar26 = 0;
              do {
                uVar25 = uVar16 + (int)uVar26;
                uVar31 = uVar16 + (int)uVar26 + 0x60;
                fVar41 = 0.0;
                fVar43 = 0.0;
                fVar44 = 0.0;
                fVar45 = 0.0;
                lVar29 = 0;
                fVar36 = 0.0;
                fVar38 = 0.0;
                fVar39 = 0.0;
                fVar40 = 0.0;
                do {
                  uVar25 = uVar25 & 0x3ff;
                  uVar31 = uVar31 & 0x3ff;
                  pfVar1 = (float *)(lVar28 + (ulong)uVar25 * 4);
                  pfVar4 = (float *)(lVar28 + 0x10 + (ulong)uVar25 * 4);
                  pfVar5 = (float *)(puVar24 + lVar29 + -0x80);
                  pfVar6 = (float *)(puVar24 + lVar29 + -0x70);
                  pfVar2 = (float *)(puVar24 + lVar29);
                  pfVar7 = (float *)(puVar24 + lVar29 + 0x10);
                  pfVar3 = (float *)(lVar28 + (ulong)uVar31 * 4);
                  fVar41 = *pfVar3 * *pfVar2 + *pfVar5 * *pfVar1 + fVar41;
                  fVar43 = pfVar3[1] * pfVar2[1] + pfVar5[1] * pfVar1[1] + fVar43;
                  fVar44 = pfVar3[2] * pfVar2[2] + pfVar5[2] * pfVar1[2] + fVar44;
                  fVar45 = pfVar3[3] * pfVar2[3] + pfVar5[3] * pfVar1[3] + fVar45;
                  pfVar1 = (float *)(lVar28 + 0x10 + (ulong)uVar31 * 4);
                  fVar36 = *pfVar1 * *pfVar7 + *pfVar6 * *pfVar4 + fVar36;
                  fVar38 = pfVar1[1] * pfVar7[1] + pfVar6[1] * pfVar4[1] + fVar38;
                  fVar39 = pfVar1[2] * pfVar7[2] + pfVar6[2] * pfVar4[2] + fVar39;
                  fVar40 = pfVar1[3] * pfVar7[3] + pfVar6[3] * pfVar4[3] + fVar40;
                  uVar25 = uVar25 + 0x80;
                  uVar31 = uVar31 + 0x80;
                  lVar29 = lVar29 + 0x100;
                } while ((int)lVar29 != 0x800);
                auVar37._4_4_ = -(uint)(fVar43 < DAT_10071c5e0._4_4_);
                auVar37._0_4_ = -(uint)(fVar41 < (float)DAT_10071c5e0);
                auVar37._8_4_ = -(uint)(fVar44 < DAT_10071c5e0._8_4_);
                auVar37._12_4_ = -(uint)(fVar45 < DAT_10071c5e0._12_4_);
                auVar42._4_4_ = -(uint)(fVar38 < DAT_10071c5e0._4_4_);
                auVar42._0_4_ = -(uint)(fVar36 < (float)DAT_10071c5e0);
                auVar42._8_4_ = -(uint)(fVar39 < DAT_10071c5e0._8_4_);
                auVar42._12_4_ = -(uint)(fVar40 < DAT_10071c5e0._12_4_);
                auVar37 = packssdw(auVar37,auVar42);
                auVar37 = packsswb(auVar37,auVar37);
                fVar47 = DAT_100700b24;
                if ((SUB161(auVar37 >> 7,0) & 1) == 0) {
                  fVar47 = fVar41;
                }
                *(uint *)*pauVar27 =
                     -(uint)(DAT_100700b50 < fVar41) & (uint)DAT_100700b50 |
                     ~-(uint)(DAT_100700b50 < fVar41) & (uint)fVar47;
                fVar41 = DAT_100700b24;
                if ((SUB161(auVar37 >> 0xf,0) & 1) == 0) {
                  fVar41 = fVar43;
                }
                *(uint *)(*pauVar27 + uVar19 * 4) =
                     -(uint)(DAT_100700b50 < fVar43) & (uint)DAT_100700b50 |
                     ~-(uint)(DAT_100700b50 < fVar43) & (uint)fVar41;
                fVar41 = DAT_100700b24;
                if ((SUB161(auVar37 >> 0x17,0) & 1) == 0) {
                  fVar41 = fVar44;
                }
                *(uint *)(*pauVar27 + uVar19 * 8) =
                     -(uint)(DAT_100700b50 < fVar44) & (uint)DAT_100700b50 |
                     ~-(uint)(DAT_100700b50 < fVar44) & (uint)fVar41;
                fVar41 = DAT_100700b24;
                if ((SUB161(auVar37 >> 0x1f,0) & 1) == 0) {
                  fVar41 = fVar45;
                }
                *(uint *)(*pauVar27 + uVar19 * 0xc) =
                     -(uint)(DAT_100700b50 < fVar45) & (uint)DAT_100700b50 |
                     ~-(uint)(DAT_100700b50 < fVar45) & (uint)fVar41;
                fVar41 = DAT_100700b24;
                if ((SUB161(auVar37 >> 0x27,0) & 1) == 0) {
                  fVar41 = fVar36;
                }
                *(uint *)pauVar27[uVar19] =
                     -(uint)(DAT_100700b50 < fVar36) & (uint)DAT_100700b50 |
                     ~-(uint)(DAT_100700b50 < fVar36) & (uint)fVar41;
                fVar36 = DAT_100700b24;
                if ((SUB161(auVar37 >> 0x2f,0) & 1) == 0) {
                  fVar36 = fVar38;
                }
                *(uint *)((long)pauVar27 + uVar19 * 0x14) =
                     -(uint)(DAT_100700b50 < fVar38) & (uint)DAT_100700b50 |
                     ~-(uint)(DAT_100700b50 < fVar38) & (uint)fVar36;
                fVar36 = DAT_100700b24;
                if ((SUB161(auVar37 >> 0x37,0) & 1) == 0) {
                  fVar36 = fVar39;
                }
                *(uint *)((long)pauVar27 + uVar19 * 0x18) =
                     -(uint)(DAT_100700b50 < fVar39) & (uint)DAT_100700b50 |
                     ~-(uint)(DAT_100700b50 < fVar39) & (uint)fVar36;
                fVar36 = DAT_100700b24;
                if ((SUB161(auVar37 >> 0x3f,0) & 1) == 0) {
                  fVar36 = fVar40;
                }
                *(uint *)((long)pauVar27 + uVar19 * 0x1c) =
                     -(uint)(DAT_100700b50 < fVar40) & (uint)DAT_100700b50 |
                     ~-(uint)(DAT_100700b50 < fVar40) & (uint)fVar36;
                pauVar27 = pauVar27 + uVar19 * 2;
                puVar24 = puVar24 + 0x20;
                bVar35 = uVar26 < 0x18;
                uVar26 = uVar26 + 8;
              } while (bVar35);
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar17) = 0x100271f7e;
              FUN_100494ee0(lVar29,pfVar1);
              uVar19 = (ulong)(iVar13 + 0x20U & 0x3ff);
              pfVar2 = (float *)(lVar28 + uVar19 * 4);
              auVar46._0_4_ = *pfVar2 * _DAT_10071c670 + *pfVar1 * _DAT_10071c5f0;
              auVar46._4_4_ = pfVar2[1] * _UNK_10071c674 + pfVar1[1] * _UNK_10071c5f4;
              auVar46._8_4_ = pfVar2[2] * _UNK_10071c678 + pfVar1[2] * _UNK_10071c5f8;
              auVar46._12_4_ = pfVar2[3] * _UNK_10071c67c + pfVar1[3] * _UNK_10071c5fc;
              pfVar2 = (float *)(lVar28 + 0x10 + uVar19 * 4);
              auVar48._0_4_ = *pfVar2 * _DAT_10071c680 + pfVar1[4] * _DAT_10071c600;
              auVar48._4_4_ = pfVar2[1] * _UNK_10071c684 + pfVar1[5] * _UNK_10071c604;
              auVar48._8_4_ = pfVar2[2] * _UNK_10071c688 + pfVar1[6] * _UNK_10071c608;
              auVar48._12_4_ = pfVar2[3] * _UNK_10071c68c + pfVar1[7] * _UNK_10071c60c;
              pfVar2 = (float *)(lVar28 + 0x20 + uVar19 * 4);
              auVar52._0_4_ = *pfVar2 * _DAT_10071c690 + pfVar1[8] * _DAT_10071c610;
              auVar52._4_4_ = pfVar2[1] * _UNK_10071c694 + pfVar1[9] * _UNK_10071c614;
              auVar52._8_4_ = pfVar2[2] * _UNK_10071c698 + pfVar1[10] * _UNK_10071c618;
              auVar52._12_4_ = pfVar2[3] * _UNK_10071c69c + pfVar1[0xb] * _UNK_10071c61c;
              pfVar2 = (float *)(lVar28 + 0x30 + uVar19 * 4);
              auVar56._0_4_ = *pfVar2 * _DAT_10071c6a0 + pfVar1[0xc] * _DAT_10071c620;
              auVar56._4_4_ = pfVar2[1] * _UNK_10071c6a4 + pfVar1[0xd] * _UNK_10071c624;
              auVar56._8_4_ = pfVar2[2] * _UNK_10071c6a8 + pfVar1[0xe] * _UNK_10071c628;
              auVar56._12_4_ = pfVar2[3] * _UNK_10071c6ac + pfVar1[0xf] * _UNK_10071c62c;
              pfVar2 = (float *)(lVar28 + 0x40 + uVar19 * 4);
              auVar61._0_4_ = *pfVar2 * _DAT_10071c6b0 + pfVar1[0x10] * _DAT_10071c630;
              auVar61._4_4_ = pfVar2[1] * _UNK_10071c6b4 + pfVar1[0x11] * _UNK_10071c634;
              auVar61._8_4_ = pfVar2[2] * _UNK_10071c6b8 + pfVar1[0x12] * _UNK_10071c638;
              auVar61._12_4_ = pfVar2[3] * _UNK_10071c6bc + pfVar1[0x13] * _UNK_10071c63c;
              pfVar2 = (float *)(lVar28 + 0x50 + uVar19 * 4);
              auVar66._0_4_ = *pfVar2 * _DAT_10071c6c0 + pfVar1[0x14] * _DAT_10071c640;
              auVar66._4_4_ = pfVar2[1] * _UNK_10071c6c4 + pfVar1[0x15] * _UNK_10071c644;
              auVar66._8_4_ = pfVar2[2] * _UNK_10071c6c8 + pfVar1[0x16] * _UNK_10071c648;
              auVar66._12_4_ = pfVar2[3] * _UNK_10071c6cc + pfVar1[0x17] * _UNK_10071c64c;
              pfVar2 = (float *)(lVar28 + 0x60 + uVar19 * 4);
              auVar60._0_4_ = *pfVar2 * _DAT_10071c6d0 + pfVar1[0x18] * _DAT_10071c650;
              auVar60._4_4_ = pfVar2[1] * _UNK_10071c6d4 + pfVar1[0x19] * _UNK_10071c654;
              auVar60._8_4_ = pfVar2[2] * _UNK_10071c6d8 + pfVar1[0x1a] * _UNK_10071c658;
              auVar60._12_4_ = pfVar2[3] * _UNK_10071c6dc + pfVar1[0x1b] * _UNK_10071c65c;
              pfVar2 = (float *)(lVar28 + 0x70 + uVar19 * 4);
              auVar65._0_4_ = *pfVar2 * _DAT_10071c6e0 + pfVar1[0x1c] * _DAT_10071c660;
              auVar65._4_4_ = pfVar2[1] * _UNK_10071c6e4 + pfVar1[0x1d] * _UNK_10071c664;
              auVar65._8_4_ = pfVar2[2] * _UNK_10071c6e8 + pfVar1[0x1e] * _UNK_10071c668;
              auVar65._12_4_ = pfVar2[3] * _UNK_10071c6ec + pfVar1[0x1f] * _UNK_10071c66c;
              uVar25 = uVar16 + 0xe0;
              lVar29 = 0;
              uVar19 = uVar18;
              do {
                uVar19 = (ulong)((int)uVar19 + 0x80U & 0x3ff);
                uVar26 = (ulong)(uVar25 & 0x3ff);
                pfVar1 = (float *)(lVar28 + uVar19 * 4);
                pfVar3 = (float *)(lVar28 + 0x10 + uVar19 * 4);
                pfVar4 = (float *)(lVar28 + 0x20 + uVar19 * 4);
                pfVar5 = (float *)(lVar28 + 0x30 + uVar19 * 4);
                fVar36 = auVar46._4_4_;
                fVar38 = auVar46._8_4_;
                fVar39 = auVar46._12_4_;
                fVar40 = auVar48._4_4_;
                fVar41 = auVar48._8_4_;
                fVar43 = auVar48._12_4_;
                fVar44 = auVar52._4_4_;
                fVar45 = auVar52._8_4_;
                fVar47 = auVar52._12_4_;
                fVar49 = auVar56._4_4_;
                fVar50 = auVar56._8_4_;
                fVar51 = auVar56._12_4_;
                pfVar6 = (float *)(lVar28 + 0x40 + uVar19 * 4);
                pfVar7 = (float *)(lVar28 + 0x50 + uVar19 * 4);
                pfVar8 = (float *)(lVar28 + 0x60 + uVar19 * 4);
                pfVar9 = (float *)(lVar28 + 0x70 + uVar19 * 4);
                fVar53 = auVar61._4_4_;
                fVar54 = auVar61._8_4_;
                fVar55 = auVar61._12_4_;
                fVar57 = auVar66._4_4_;
                fVar58 = auVar66._8_4_;
                fVar59 = auVar66._12_4_;
                fVar62 = auVar60._4_4_;
                fVar63 = auVar60._8_4_;
                fVar64 = auVar60._12_4_;
                fVar67 = auVar65._4_4_;
                fVar68 = auVar65._8_4_;
                fVar69 = auVar65._12_4_;
                pfVar2 = (float *)(lVar28 + uVar26 * 4);
                pfVar10 = (float *)(lVar28 + 0x10 + uVar26 * 4);
                pfVar11 = (float *)(lVar28 + 0x20 + uVar26 * 4);
                pfVar12 = (float *)(lVar28 + 0x30 + uVar26 * 4);
                auVar46._0_4_ =
                     *pfVar2 * *(float *)(&DAT_10071d110 + lVar29) +
                     *pfVar1 * *(float *)(&DAT_10071d090 + lVar29) + auVar46._0_4_;
                auVar46._4_4_ =
                     pfVar2[1] * *(float *)(&UNK_10071d114 + lVar29) +
                     pfVar1[1] * *(float *)(&UNK_10071d094 + lVar29) + fVar36;
                auVar46._8_4_ =
                     pfVar2[2] * *(float *)(&UNK_10071d118 + lVar29) +
                     pfVar1[2] * *(float *)(&UNK_10071d098 + lVar29) + fVar38;
                auVar46._12_4_ =
                     pfVar2[3] * *(float *)(&UNK_10071d11c + lVar29) +
                     pfVar1[3] * *(float *)(&UNK_10071d09c + lVar29) + fVar39;
                auVar48._0_4_ =
                     *pfVar10 * *(float *)(&DAT_10071d120 + lVar29) +
                     *pfVar3 * *(float *)(&DAT_10071d0a0 + lVar29) + auVar48._0_4_;
                auVar48._4_4_ =
                     pfVar10[1] * *(float *)(&UNK_10071d124 + lVar29) +
                     pfVar3[1] * *(float *)(&UNK_10071d0a4 + lVar29) + fVar40;
                auVar48._8_4_ =
                     pfVar10[2] * *(float *)(&UNK_10071d128 + lVar29) +
                     pfVar3[2] * *(float *)(&UNK_10071d0a8 + lVar29) + fVar41;
                auVar48._12_4_ =
                     pfVar10[3] * *(float *)(&UNK_10071d12c + lVar29) +
                     pfVar3[3] * *(float *)(&UNK_10071d0ac + lVar29) + fVar43;
                auVar52._0_4_ =
                     *pfVar11 * *(float *)(&DAT_10071d130 + lVar29) +
                     *pfVar4 * *(float *)(&DAT_10071d0b0 + lVar29) + auVar52._0_4_;
                auVar52._4_4_ =
                     pfVar11[1] * *(float *)(&UNK_10071d134 + lVar29) +
                     pfVar4[1] * *(float *)(&UNK_10071d0b4 + lVar29) + fVar44;
                auVar52._8_4_ =
                     pfVar11[2] * *(float *)(&UNK_10071d138 + lVar29) +
                     pfVar4[2] * *(float *)(&UNK_10071d0b8 + lVar29) + fVar45;
                auVar52._12_4_ =
                     pfVar11[3] * *(float *)(&UNK_10071d13c + lVar29) +
                     pfVar4[3] * *(float *)(&UNK_10071d0bc + lVar29) + fVar47;
                auVar56._0_4_ =
                     *pfVar12 * *(float *)(&DAT_10071d140 + lVar29) +
                     *pfVar5 * *(float *)(&DAT_10071d0c0 + lVar29) + auVar56._0_4_;
                auVar56._4_4_ =
                     pfVar12[1] * *(float *)(&UNK_10071d144 + lVar29) +
                     pfVar5[1] * *(float *)(&UNK_10071d0c4 + lVar29) + fVar49;
                auVar56._8_4_ =
                     pfVar12[2] * *(float *)(&UNK_10071d148 + lVar29) +
                     pfVar5[2] * *(float *)(&UNK_10071d0c8 + lVar29) + fVar50;
                auVar56._12_4_ =
                     pfVar12[3] * *(float *)(&UNK_10071d14c + lVar29) +
                     pfVar5[3] * *(float *)(&UNK_10071d0cc + lVar29) + fVar51;
                pfVar1 = (float *)(lVar28 + 0x40 + uVar26 * 4);
                pfVar2 = (float *)(lVar28 + 0x50 + uVar26 * 4);
                pfVar3 = (float *)(lVar28 + 0x60 + uVar26 * 4);
                pfVar4 = (float *)(lVar28 + 0x70 + uVar26 * 4);
                uVar25 = (uVar25 & 0x3ff) + 0x80;
                auVar61._0_4_ =
                     *pfVar1 * *(float *)(&DAT_10071d150 + lVar29) +
                     *pfVar6 * *(float *)(&DAT_10071d0d0 + lVar29) + auVar61._0_4_;
                auVar61._4_4_ =
                     pfVar1[1] * *(float *)(&UNK_10071d154 + lVar29) +
                     pfVar6[1] * *(float *)(&UNK_10071d0d4 + lVar29) + fVar53;
                auVar61._8_4_ =
                     pfVar1[2] * *(float *)(&UNK_10071d158 + lVar29) +
                     pfVar6[2] * *(float *)(&UNK_10071d0d8 + lVar29) + fVar54;
                auVar61._12_4_ =
                     pfVar1[3] * *(float *)(&UNK_10071d15c + lVar29) +
                     pfVar6[3] * *(float *)(&UNK_10071d0dc + lVar29) + fVar55;
                auVar66._0_4_ =
                     *pfVar2 * *(float *)(&DAT_10071d160 + lVar29) +
                     *pfVar7 * *(float *)(&DAT_10071d0e0 + lVar29) + auVar66._0_4_;
                auVar66._4_4_ =
                     pfVar2[1] * *(float *)(&UNK_10071d164 + lVar29) +
                     pfVar7[1] * *(float *)(&UNK_10071d0e4 + lVar29) + fVar57;
                auVar66._8_4_ =
                     pfVar2[2] * *(float *)(&UNK_10071d168 + lVar29) +
                     pfVar7[2] * *(float *)(&UNK_10071d0e8 + lVar29) + fVar58;
                auVar66._12_4_ =
                     pfVar2[3] * *(float *)(&UNK_10071d16c + lVar29) +
                     pfVar7[3] * *(float *)(&UNK_10071d0ec + lVar29) + fVar59;
                auVar60._0_4_ =
                     *pfVar3 * *(float *)(&DAT_10071d170 + lVar29) +
                     *pfVar8 * *(float *)(&DAT_10071d0f0 + lVar29) + auVar60._0_4_;
                auVar60._4_4_ =
                     pfVar3[1] * *(float *)(&UNK_10071d174 + lVar29) +
                     pfVar8[1] * *(float *)(&UNK_10071d0f4 + lVar29) + fVar62;
                auVar60._8_4_ =
                     pfVar3[2] * *(float *)(&UNK_10071d178 + lVar29) +
                     pfVar8[2] * *(float *)(&UNK_10071d0f8 + lVar29) + fVar63;
                auVar60._12_4_ =
                     pfVar3[3] * *(float *)(&UNK_10071d17c + lVar29) +
                     pfVar8[3] * *(float *)(&UNK_10071d0fc + lVar29) + fVar64;
                auVar65._0_4_ =
                     *pfVar4 * *(float *)(&DAT_10071d180 + lVar29) +
                     *pfVar9 * *(float *)(&DAT_10071d100 + lVar29) + auVar65._0_4_;
                auVar65._4_4_ =
                     pfVar4[1] * *(float *)(&UNK_10071d184 + lVar29) +
                     pfVar9[1] * *(float *)(&UNK_10071d104 + lVar29) + fVar67;
                auVar65._8_4_ =
                     pfVar4[2] * *(float *)(&UNK_10071d188 + lVar29) +
                     pfVar9[2] * *(float *)(&UNK_10071d108 + lVar29) + fVar68;
                auVar65._12_4_ =
                     pfVar4[3] * *(float *)(&UNK_10071d18c + lVar29) +
                     pfVar9[3] * *(float *)(&UNK_10071d10c + lVar29) + fVar69;
                lVar29 = lVar29 + 0x100;
              } while ((int)lVar29 != 0x700);
              auVar37 = maxps(auVar46,_DAT_10071c5e0);
              auVar42 = maxps(auVar48,_DAT_10071c5e0);
              auVar46 = maxps(auVar52,_DAT_10071c5e0);
              auVar48 = maxps(auVar56,_DAT_10071c5e0);
              auVar52 = maxps(auVar61,_DAT_10071c5e0);
              auVar56 = maxps(auVar66,_DAT_10071c5e0);
              auVar61 = maxps(auVar60,_DAT_10071c5e0);
              auVar66 = maxps(auVar65,_DAT_10071c5e0);
              auVar37 = minps(auVar37,_DAT_100700bd0);
              auVar42 = minps(auVar42,_DAT_100700bd0);
              auVar46 = minps(auVar46,_DAT_100700bd0);
              auVar48 = minps(auVar48,_DAT_100700bd0);
              auVar52 = minps(auVar52,_DAT_100700bd0);
              auVar56 = minps(auVar56,_DAT_100700bd0);
              auVar61 = minps(auVar61,_DAT_100700bd0);
              auVar66 = minps(auVar66,_DAT_100700bd0);
              *local_2468 = auVar37;
              local_2468[1] = auVar42;
              local_2468[2] = auVar46;
              local_2468[3] = auVar48;
              local_2468[4] = auVar52;
              local_2468[5] = auVar56;
              local_2468[6] = auVar61;
              local_2468[7] = auVar66;
            }
            lVar29 = 0x80;
            if (cVar15 == '\0') {
              lVar29 = (ulong)*(byte *)(param_1 + 0x15) << 7;
            }
            local_2468 = (undefined1 (*) [16])(*local_2468 + lVar29);
            uVar30 = uVar30 + 1;
          } while (uVar30 != uVar22);
          bVar14 = *(byte *)(param_1 + 0x15);
          uVar21 = (ushort)uVar16;
        }
      }
      *(ushort *)(param_1 + 0x2294 + uVar33 * 2) = uVar21;
      uVar33 = uVar33 + 1;
      lVar34 = lVar34 + 0x1200;
    } while (uVar33 < bVar14);
    local_58 = (undefined1 *)CONCAT44(local_58._4_4_,(undefined4)local_58);
    if (((1 < bVar14) &&
        (lVar34 = *(long *)(param_1 + 0x8c),
        local_58 = (undefined1 *)CONCAT44(local_58._4_4_,(undefined4)local_58), lVar34 != 0)) &&
       (local_58 = (undefined1 *)CONCAT44(local_58._4_4_,(undefined4)local_58), cVar15 != '\0')) {
      local_58 = local_2458;
      local_50 = SUB84(local_1258,0);
      uStack_4c = (undefined2)((ulong)local_1258 >> 0x20);
      uStack_4a = (undefined2)((ulong)local_1258 >> 0x30);
      iVar13 = *(int *)(param_1 + 0x28);
      *(undefined8 *)((long)&local_38 + lVar17) = 0x100272562;
      _vDSP_ztoc(&local_58,1,lVar34,2,iVar13 << 5);
    }
  }
LAB_100272586:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)&local_38 + lVar17) = FUN_1002725f8;
    ___stack_chk_fail();
  }
  return;
}

