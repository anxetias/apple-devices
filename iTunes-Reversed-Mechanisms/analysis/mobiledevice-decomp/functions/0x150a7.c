// rea decompile_all
// name: _AccelerateCrypto_SHA256_compress_AVX2
// address: 0x150a7
// body: available
// range: 0x150a7-0x16646 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _AccelerateCrypto_SHA256_compress_AVX2(uint *param_1,long param_2,undefined1 (*param_3) [32])

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  int local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  long local_50;
  long local_48;
  int *local_38;
  
  auVar26 = vpshufb_avx2(*param_3,_DAT_002ad960);
  auVar28 = vpshufb_avx2(param_3[1],_DAT_002ad960);
  local_1c0 = auVar26._0_4_ + 0x428a2f98;
  iStack_1bc = auVar26._4_4_ + 0x71374491;
  iStack_1b8 = auVar26._8_4_ + -0x4a3f0431;
  iStack_1b4 = auVar26._12_4_ + -0x164a245b;
  iStack_1b0 = auVar26._16_4_ + 0x3956c25b;
  iStack_1ac = auVar26._20_4_ + 0x59f111f1;
  iStack_1a8 = auVar26._24_4_ + -0x6dc07d5c;
  iStack_1a4 = auVar26._28_4_ + -0x54e3a12b;
  local_1a0 = auVar28._0_4_ + -0x27f85568;
  iStack_19c = auVar28._4_4_ + 0x12835b01;
  iStack_198 = auVar28._8_4_ + 0x243185be;
  iStack_194 = auVar28._12_4_ + 0x550c7dc3;
  iStack_190 = auVar28._16_4_ + 0x72be5d74;
  iStack_18c = auVar28._20_4_ + -0x7f214e02;
  iStack_188 = auVar28._24_4_ + -0x6423f959;
  iStack_184 = auVar28._28_4_ + -0x3e640e8c;
  local_38 = &DAT_002b1a50;
  local_48 = param_2;
  while( true ) {
    uVar15 = *param_1;
    uVar16 = param_1[1];
    uVar17 = param_1[2];
    uVar18 = param_1[3];
    uVar19 = param_1[4];
    uVar20 = param_1[5];
    uVar21 = param_1[6];
    uVar22 = param_1[7];
    local_50 = 3;
    piVar11 = local_38;
    do {
      local_38 = piVar11;
      auVar27 = vperm2f128_avx(auVar28,auVar28,0xf1);
      auVar23 = vperm2f128_avx(auVar26,auVar28,0x21);
      auVar24 = vpsrldq_avx2(auVar27,8);
      auVar27 = vpalignr_avx2(auVar27,auVar28,4);
      auVar23 = vpalignr_avx2(auVar23,auVar26,4);
      auVar30 = vpslld_avx2(auVar23,0xe);
      iVar12 = ((uVar20 ^ uVar21) & uVar19 ^ uVar21) +
               ((uVar19 >> 0x19 | uVar19 << 7) ^ (uVar19 >> 0xb | uVar19 << 0x15) ^
               (uVar19 >> 6 | uVar19 << 0x1a));
      auVar29 = vpsrld_avx2(auVar23,7);
      uVar18 = uVar18 + uVar22 + local_1c0 + iVar12;
      auVar23 = vpsrld_avx2(auVar23,3);
      uVar22 = uVar22 + local_1c0 +
               ((uVar15 >> 0x16 | uVar15 << 10) ^ (uVar15 >> 0xd | uVar15 << 0x13) ^
               (uVar15 >> 2 | uVar15 << 0x1e)) + iVar12 +
               ((uVar15 | uVar17) & uVar16 | uVar15 & uVar17);
      auVar34 = vpslld_avx2(auVar24,0xd);
      auVar32 = vpsrld_avx2(auVar24,0x11);
      auVar25 = vpsrld_avx2(auVar24,10);
      auVar31 = vpslld_avx2(auVar30,0xb);
      auVar35 = vpslld_avx2(auVar34,2);
      iVar12 = ((uVar19 ^ uVar20) & uVar18 ^ uVar20) +
               ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
               (uVar18 >> 6 | uVar18 * 0x4000000));
      auVar24 = vpsrld_avx2(auVar29,0xb);
      uVar17 = uVar17 + uVar21 + iStack_1bc + iVar12;
      uVar21 = uVar21 + iStack_1bc +
               ((uVar22 >> 0x16 | uVar22 * 0x400) ^ (uVar22 >> 0xd | uVar22 * 0x80000) ^
               (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar12 +
               ((uVar22 | uVar16) & uVar15 | uVar22 & uVar16);
      auVar33 = vpsrld_avx2(auVar32,2);
      auVar24 = auVar23 ^ auVar30 ^ auVar29 ^ auVar31 ^ auVar24;
      auVar33 = auVar25 ^ auVar34 ^ auVar32 ^ auVar35 ^ auVar33;
      auVar23._0_4_ = auVar26._0_4_ + auVar27._0_4_ + auVar24._0_4_ + auVar33._0_4_;
      auVar23._4_4_ = auVar26._4_4_ + auVar27._4_4_ + auVar24._4_4_ + auVar33._4_4_;
      auVar23._8_4_ = auVar26._8_4_ + auVar27._8_4_ + auVar24._8_4_ + auVar33._8_4_;
      auVar23._12_4_ = auVar26._12_4_ + auVar27._12_4_ + auVar24._12_4_ + auVar33._12_4_;
      auVar23._16_4_ = auVar26._16_4_ + auVar27._16_4_ + auVar24._16_4_ + auVar33._16_4_;
      auVar23._20_4_ = auVar26._20_4_ + auVar27._20_4_ + auVar24._20_4_ + auVar33._20_4_;
      auVar23._24_4_ = auVar26._24_4_ + auVar27._24_4_ + auVar24._24_4_ + auVar33._24_4_;
      auVar23._28_4_ = auVar26._28_4_ + auVar27._28_4_ + auVar24._28_4_ + auVar33._28_4_;
      auVar26 = vperm2f128_avx(auVar23,auVar23,0xf);
      auVar27 = vperm2f128_avx(auVar23,auVar23,0xf0);
      auVar24 = vpslldq_avx2(auVar26,0xc);
      iVar12 = ((uVar18 ^ uVar19) & uVar17 ^ uVar19) +
               ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
               (uVar17 >> 6 | uVar17 * 0x4000000));
      auVar26 = vpslldq_avx2(auVar27,8);
      uVar16 = uVar16 + uVar20 + iStack_1b8 + iVar12;
      uVar20 = uVar20 + iStack_1b8 +
               ((uVar21 >> 0x16 | uVar21 * 0x400) ^ (uVar21 >> 0xd | uVar21 * 0x80000) ^
               (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar12 +
               ((uVar21 | uVar15) & uVar22 | uVar21 & uVar15);
      auVar25 = vpslld_avx2(auVar26,0xd);
      auVar33 = vpsrld_avx2(auVar26,0x11);
      auVar27 = vpsrld_avx2(auVar26,10);
      auVar29 = vpslld_avx2(auVar25,2);
      auVar26 = vpsrld_avx2(auVar33,2);
      iVar12 = ((uVar17 ^ uVar18) & uVar16 ^ uVar18) +
               ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
               (uVar16 >> 6 | uVar16 * 0x4000000));
      auVar26 = auVar27 ^ auVar25 ^ auVar33 ^ auVar29 ^ auVar26;
      uVar15 = uVar15 + uVar19 + iStack_1b4 + iVar12;
      uVar19 = uVar19 + iStack_1b4 +
               ((uVar20 >> 0x16 | uVar20 * 0x400) ^ (uVar20 >> 0xd | uVar20 * 0x80000) ^
               (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar12 +
               ((uVar20 | uVar22) & uVar21 | uVar20 & uVar22);
      auVar27._0_4_ = auVar23._0_4_ + auVar24._0_4_ + auVar26._0_4_;
      auVar27._4_4_ = auVar23._4_4_ + auVar24._4_4_ + auVar26._4_4_;
      auVar27._8_4_ = auVar23._8_4_ + auVar24._8_4_ + auVar26._8_4_;
      auVar27._12_4_ = auVar23._12_4_ + auVar24._12_4_ + auVar26._12_4_;
      auVar27._16_4_ = auVar23._16_4_ + auVar24._16_4_ + auVar26._16_4_;
      auVar27._20_4_ = auVar23._20_4_ + auVar24._20_4_ + auVar26._20_4_;
      auVar27._24_4_ = auVar23._24_4_ + auVar24._24_4_ + auVar26._24_4_;
      auVar27._28_4_ = auVar23._28_4_ + auVar24._28_4_ + auVar26._28_4_;
      auVar26 = vperm2f128_avx(auVar27,auVar27,0xf);
      auVar26 = vpsrldq_avx2(auVar26,8);
      auVar33 = vpslld_avx2(auVar26,0xd);
      auVar24 = vpsrld_avx2(auVar26,0x11);
      auVar23 = vpsrld_avx2(auVar26,10);
      iVar12 = ((uVar16 ^ uVar17) & uVar15 ^ uVar17) +
               ((uVar15 >> 0x19 | uVar15 * 0x80) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
               (uVar15 >> 6 | uVar15 * 0x4000000));
      auVar25 = vpslld_avx2(auVar33,2);
      uVar22 = uVar22 + uVar18 + iStack_1b0 + iVar12;
      uVar18 = uVar18 + iStack_1b0 +
               ((uVar19 >> 0x16 | uVar19 * 0x400) ^ (uVar19 >> 0xd | uVar19 * 0x80000) ^
               (uVar19 >> 2 | uVar19 * 0x40000000)) + iVar12 +
               ((uVar19 | uVar21) & uVar20 | uVar19 & uVar21);
      auVar26 = vpsrld_avx2(auVar24,2);
      auVar26 = auVar23 ^ auVar33 ^ auVar24 ^ auVar25 ^ auVar26;
      auVar24._0_4_ = auVar27._0_4_ + auVar26._0_4_;
      auVar24._4_4_ = auVar27._4_4_ + auVar26._4_4_;
      auVar24._8_4_ = auVar27._8_4_ + auVar26._8_4_;
      auVar24._12_4_ = auVar27._12_4_ + auVar26._12_4_;
      auVar24._16_4_ = auVar27._16_4_ + auVar26._16_4_;
      auVar24._20_4_ = auVar27._20_4_ + auVar26._20_4_;
      auVar24._24_4_ = auVar27._24_4_ + auVar26._24_4_;
      auVar24._28_4_ = auVar27._28_4_ + auVar26._28_4_;
      auVar26 = vperm2f128_avx(auVar24,auVar24,0x1f);
      auVar26 = vpslldq_avx2(auVar26,8);
      iVar12 = ((uVar15 ^ uVar16) & uVar22 ^ uVar16) +
               ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
               (uVar22 >> 6 | uVar22 * 0x4000000));
      auVar33 = vpslld_avx2(auVar26,0xd);
      uVar21 = uVar21 + uVar17 + iStack_1ac + iVar12;
      auVar23 = vpsrld_avx2(auVar26,0x11);
      uVar17 = uVar17 + iStack_1ac +
               ((uVar18 >> 0x16 | uVar18 * 0x400) ^ (uVar18 >> 0xd | uVar18 * 0x80000) ^
               (uVar18 >> 2 | uVar18 * 0x40000000)) + iVar12 +
               ((uVar18 | uVar20) & uVar19 | uVar18 & uVar20);
      auVar26 = vpsrld_avx2(auVar26,10);
      auVar25 = vpslld_avx2(auVar33,2);
      auVar27 = vpsrld_avx2(auVar23,2);
      auVar27 = auVar26 ^ auVar33 ^ auVar23 ^ auVar25 ^ auVar27;
      iVar12 = ((uVar22 ^ uVar15) & uVar21 ^ uVar15) +
               ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
               (uVar21 >> 6 | uVar21 * 0x4000000));
      auVar26._0_4_ = auVar24._0_4_ + auVar27._0_4_;
      auVar26._4_4_ = auVar24._4_4_ + auVar27._4_4_;
      auVar26._8_4_ = auVar24._8_4_ + auVar27._8_4_;
      auVar26._12_4_ = auVar24._12_4_ + auVar27._12_4_;
      auVar26._16_4_ = auVar24._16_4_ + auVar27._16_4_;
      auVar26._20_4_ = auVar24._20_4_ + auVar27._20_4_;
      auVar26._24_4_ = auVar24._24_4_ + auVar27._24_4_;
      auVar26._28_4_ = auVar24._28_4_ + auVar27._28_4_;
      uVar20 = uVar20 + uVar16 + iStack_1a8 + iVar12;
      uVar16 = uVar16 + iStack_1a8 +
               ((uVar17 >> 0x16 | uVar17 * 0x400) ^ (uVar17 >> 0xd | uVar17 * 0x80000) ^
               (uVar17 >> 2 | uVar17 * 0x40000000)) + iVar12 +
               ((uVar17 | uVar19) & uVar18 | uVar17 & uVar19);
      iVar12 = ((uVar21 ^ uVar22) & uVar20 ^ uVar22) +
               ((uVar20 >> 0x19 | uVar20 * 0x80) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
               (uVar20 >> 6 | uVar20 * 0x4000000));
      uVar19 = uVar19 + uVar15 + iStack_1a4 + iVar12;
      uVar15 = uVar15 + iStack_1a4 +
               ((uVar16 >> 0x16 | uVar16 * 0x400) ^ (uVar16 >> 0xd | uVar16 * 0x80000) ^
               (uVar16 >> 2 | uVar16 * 0x40000000)) + iVar12 +
               ((uVar16 | uVar18) & uVar17 | uVar16 & uVar18);
      local_1c0 = auVar26._0_4_ + *local_38;
      iStack_1bc = auVar26._4_4_ + local_38[1];
      iStack_1b8 = auVar26._8_4_ + local_38[2];
      iVar12 = auVar26._12_4_ + local_38[3];
      iVar3 = auVar26._16_4_ + local_38[4];
      iVar5 = auVar26._20_4_ + local_38[5];
      iVar7 = auVar26._24_4_ + local_38[6];
      iVar9 = auVar26._28_4_ + local_38[7];
      auVar27 = vperm2f128_avx(auVar26,auVar26,0xf1);
      auVar23 = vperm2f128_avx(auVar28,auVar26,0x21);
      auVar24 = vpsrldq_avx2(auVar27,8);
      auVar27 = vpalignr_avx2(auVar27,auVar26,4);
      auVar23 = vpalignr_avx2(auVar23,auVar28,4);
      auVar30 = vpslld_avx2(auVar23,0xe);
      iVar13 = ((uVar20 ^ uVar21) & uVar19 ^ uVar21) +
               ((uVar19 >> 0x19 | uVar19 * 0x80) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
               (uVar19 >> 6 | uVar19 * 0x4000000));
      auVar29 = vpsrld_avx2(auVar23,7);
      uVar18 = uVar18 + uVar22 + local_1a0 + iVar13;
      auVar33 = vpsrld_avx2(auVar23,3);
      uVar22 = uVar22 + local_1a0 +
               ((uVar15 >> 0x16 | uVar15 * 0x400) ^ (uVar15 >> 0xd | uVar15 * 0x80000) ^
               (uVar15 >> 2 | uVar15 * 0x40000000)) + iVar13 +
               ((uVar15 | uVar17) & uVar16 | uVar15 & uVar17);
      auVar34 = vpslld_avx2(auVar24,0xd);
      auVar32 = vpsrld_avx2(auVar24,0x11);
      auVar25 = vpsrld_avx2(auVar24,10);
      auVar31 = vpslld_avx2(auVar30,0xb);
      auVar35 = vpslld_avx2(auVar34,2);
      iVar13 = ((uVar19 ^ uVar20) & uVar18 ^ uVar20) +
               ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
               (uVar18 >> 6 | uVar18 * 0x4000000));
      auVar23 = vpsrld_avx2(auVar29,0xb);
      uVar17 = uVar17 + uVar21 + iStack_19c + iVar13;
      uVar21 = uVar21 + iStack_19c +
               ((uVar22 >> 0x16 | uVar22 * 0x400) ^ (uVar22 >> 0xd | uVar22 * 0x80000) ^
               (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar13 +
               ((uVar22 | uVar16) & uVar15 | uVar22 & uVar16);
      auVar24 = vpsrld_avx2(auVar32,2);
      auVar23 = auVar33 ^ auVar30 ^ auVar29 ^ auVar31 ^ auVar23;
      auVar24 = auVar25 ^ auVar34 ^ auVar32 ^ auVar35 ^ auVar24;
      auVar33._0_4_ = auVar28._0_4_ + auVar27._0_4_ + auVar23._0_4_ + auVar24._0_4_;
      auVar33._4_4_ = auVar28._4_4_ + auVar27._4_4_ + auVar23._4_4_ + auVar24._4_4_;
      auVar33._8_4_ = auVar28._8_4_ + auVar27._8_4_ + auVar23._8_4_ + auVar24._8_4_;
      auVar33._12_4_ = auVar28._12_4_ + auVar27._12_4_ + auVar23._12_4_ + auVar24._12_4_;
      auVar33._16_4_ = auVar28._16_4_ + auVar27._16_4_ + auVar23._16_4_ + auVar24._16_4_;
      auVar33._20_4_ = auVar28._20_4_ + auVar27._20_4_ + auVar23._20_4_ + auVar24._20_4_;
      auVar33._24_4_ = auVar28._24_4_ + auVar27._24_4_ + auVar23._24_4_ + auVar24._24_4_;
      auVar33._28_4_ = auVar28._28_4_ + auVar27._28_4_ + auVar23._28_4_ + auVar24._28_4_;
      auVar28 = vperm2f128_avx(auVar33,auVar33,0xf);
      auVar27 = vperm2f128_avx(auVar33,auVar33,0xf0);
      auVar23 = vpslldq_avx2(auVar28,0xc);
      iVar13 = ((uVar18 ^ uVar19) & uVar17 ^ uVar19) +
               ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
               (uVar17 >> 6 | uVar17 * 0x4000000));
      auVar28 = vpslldq_avx2(auVar27,8);
      uVar16 = uVar16 + uVar20 + iStack_198 + iVar13;
      uVar20 = uVar20 + iStack_198 +
               ((uVar21 >> 0x16 | uVar21 * 0x400) ^ (uVar21 >> 0xd | uVar21 * 0x80000) ^
               (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar13 +
               ((uVar21 | uVar15) & uVar22 | uVar21 & uVar15);
      auVar25 = vpslld_avx2(auVar28,0xd);
      auVar24 = vpsrld_avx2(auVar28,0x11);
      auVar27 = vpsrld_avx2(auVar28,10);
      auVar29 = vpslld_avx2(auVar25,2);
      auVar28 = vpsrld_avx2(auVar24,2);
      iVar13 = ((uVar17 ^ uVar18) & uVar16 ^ uVar18) +
               ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
               (uVar16 >> 6 | uVar16 * 0x4000000));
      auVar28 = auVar27 ^ auVar25 ^ auVar24 ^ auVar29 ^ auVar28;
      uVar15 = uVar15 + uVar19 + iStack_194 + iVar13;
      uVar19 = uVar19 + iStack_194 +
               ((uVar20 >> 0x16 | uVar20 * 0x400) ^ (uVar20 >> 0xd | uVar20 * 0x80000) ^
               (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar13 +
               ((uVar20 | uVar22) & uVar21 | uVar20 & uVar22);
      auVar25._0_4_ = auVar33._0_4_ + auVar23._0_4_ + auVar28._0_4_;
      auVar25._4_4_ = auVar33._4_4_ + auVar23._4_4_ + auVar28._4_4_;
      auVar25._8_4_ = auVar33._8_4_ + auVar23._8_4_ + auVar28._8_4_;
      auVar25._12_4_ = auVar33._12_4_ + auVar23._12_4_ + auVar28._12_4_;
      auVar25._16_4_ = auVar33._16_4_ + auVar23._16_4_ + auVar28._16_4_;
      auVar25._20_4_ = auVar33._20_4_ + auVar23._20_4_ + auVar28._20_4_;
      auVar25._24_4_ = auVar33._24_4_ + auVar23._24_4_ + auVar28._24_4_;
      auVar25._28_4_ = auVar33._28_4_ + auVar23._28_4_ + auVar28._28_4_;
      auVar28 = vperm2f128_avx(auVar25,auVar25,0xf);
      auVar28 = vpsrldq_avx2(auVar28,8);
      auVar24 = vpslld_avx2(auVar28,0xd);
      auVar23 = vpsrld_avx2(auVar28,0x11);
      auVar27 = vpsrld_avx2(auVar28,10);
      iVar13 = ((uVar16 ^ uVar17) & uVar15 ^ uVar17) +
               ((uVar15 >> 0x19 | uVar15 * 0x80) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
               (uVar15 >> 6 | uVar15 * 0x4000000));
      auVar33 = vpslld_avx2(auVar24,2);
      uVar22 = uVar22 + uVar18 + iStack_190 + iVar13;
      uVar18 = uVar18 + iStack_190 +
               ((uVar19 >> 0x16 | uVar19 * 0x400) ^ (uVar19 >> 0xd | uVar19 * 0x80000) ^
               (uVar19 >> 2 | uVar19 * 0x40000000)) + iVar13 +
               ((uVar19 | uVar21) & uVar20 | uVar19 & uVar21);
      auVar28 = vpsrld_avx2(auVar23,2);
      auVar28 = auVar27 ^ auVar24 ^ auVar23 ^ auVar33 ^ auVar28;
      auVar29._0_4_ = auVar25._0_4_ + auVar28._0_4_;
      auVar29._4_4_ = auVar25._4_4_ + auVar28._4_4_;
      auVar29._8_4_ = auVar25._8_4_ + auVar28._8_4_;
      auVar29._12_4_ = auVar25._12_4_ + auVar28._12_4_;
      auVar29._16_4_ = auVar25._16_4_ + auVar28._16_4_;
      auVar29._20_4_ = auVar25._20_4_ + auVar28._20_4_;
      auVar29._24_4_ = auVar25._24_4_ + auVar28._24_4_;
      auVar29._28_4_ = auVar25._28_4_ + auVar28._28_4_;
      auVar28 = vperm2f128_avx(auVar29,auVar29,0x1f);
      auVar28 = vpslldq_avx2(auVar28,8);
      iVar13 = ((uVar15 ^ uVar16) & uVar22 ^ uVar16) +
               ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
               (uVar22 >> 6 | uVar22 * 0x4000000));
      auVar24 = vpslld_avx2(auVar28,0xd);
      uVar21 = uVar21 + uVar17 + iStack_18c + iVar13;
      auVar23 = vpsrld_avx2(auVar28,0x11);
      uVar17 = uVar17 + iStack_18c +
               ((uVar18 >> 0x16 | uVar18 * 0x400) ^ (uVar18 >> 0xd | uVar18 * 0x80000) ^
               (uVar18 >> 2 | uVar18 * 0x40000000)) + iVar13 +
               ((uVar18 | uVar20) & uVar19 | uVar18 & uVar20);
      auVar28 = vpsrld_avx2(auVar28,10);
      auVar33 = vpslld_avx2(auVar24,2);
      auVar27 = vpsrld_avx2(auVar23,2);
      auVar27 = auVar28 ^ auVar24 ^ auVar23 ^ auVar33 ^ auVar27;
      iVar13 = ((uVar22 ^ uVar15) & uVar21 ^ uVar15) +
               ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
               (uVar21 >> 6 | uVar21 * 0x4000000));
      auVar28._0_4_ = auVar29._0_4_ + auVar27._0_4_;
      auVar28._4_4_ = auVar29._4_4_ + auVar27._4_4_;
      auVar28._8_4_ = auVar29._8_4_ + auVar27._8_4_;
      auVar28._12_4_ = auVar29._12_4_ + auVar27._12_4_;
      auVar28._16_4_ = auVar29._16_4_ + auVar27._16_4_;
      auVar28._20_4_ = auVar29._20_4_ + auVar27._20_4_;
      auVar28._24_4_ = auVar29._24_4_ + auVar27._24_4_;
      auVar28._28_4_ = auVar29._28_4_ + auVar27._28_4_;
      uVar20 = uVar20 + uVar16 + iStack_188 + iVar13;
      uVar16 = uVar16 + iStack_188 +
               ((uVar17 >> 0x16 | uVar17 * 0x400) ^ (uVar17 >> 0xd | uVar17 * 0x80000) ^
               (uVar17 >> 2 | uVar17 * 0x40000000)) + iVar13 +
               ((uVar17 | uVar19) & uVar18 | uVar17 & uVar19);
      iVar13 = ((uVar21 ^ uVar22) & uVar20 ^ uVar22) +
               ((uVar20 >> 0x19 | uVar20 * 0x80) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
               (uVar20 >> 6 | uVar20 * 0x4000000));
      uVar19 = uVar19 + uVar15 + iStack_184 + iVar13;
      uVar15 = uVar15 + iStack_184 +
               ((uVar16 >> 0x16 | uVar16 * 0x400) ^ (uVar16 >> 0xd | uVar16 * 0x80000) ^
               (uVar16 >> 2 | uVar16 * 0x40000000)) + iVar13 +
               ((uVar16 | uVar18) & uVar17 | uVar16 & uVar18);
      local_1a0 = auVar28._0_4_ + local_38[8];
      iStack_19c = auVar28._4_4_ + local_38[9];
      iStack_198 = auVar28._8_4_ + local_38[10];
      iVar13 = auVar28._12_4_ + local_38[0xb];
      iVar4 = auVar28._16_4_ + local_38[0xc];
      iVar6 = auVar28._20_4_ + local_38[0xd];
      iVar8 = auVar28._24_4_ + local_38[0xe];
      iVar10 = auVar28._28_4_ + local_38[0xf];
      lVar1 = local_50 + -1;
      bVar2 = 0 < local_50;
      iStack_1b4 = iVar12;
      iStack_1b0 = iVar3;
      iStack_1ac = iVar5;
      iStack_1a8 = iVar7;
      iStack_1a4 = iVar9;
      iStack_194 = iVar13;
      iStack_190 = iVar4;
      iStack_18c = iVar6;
      iStack_188 = iVar8;
      iStack_184 = iVar10;
      local_50 = lVar1;
      piVar11 = local_38 + 0x10;
    } while (lVar1 != 0 && bVar2);
    local_48 = local_48 + -1;
    if (local_48 == 0) break;
    iVar14 = ((uVar20 ^ uVar21) & uVar19 ^ uVar21) +
             ((uVar19 >> 0x19 | uVar19 * 0x80) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
             (uVar19 >> 6 | uVar19 * 0x4000000));
    uVar18 = uVar18 + uVar22 + local_1c0 + iVar14;
    uVar22 = uVar22 + local_1c0 +
             ((uVar15 >> 0x16 | uVar15 * 0x400) ^ (uVar15 >> 0xd | uVar15 * 0x80000) ^
             (uVar15 >> 2 | uVar15 * 0x40000000)) + iVar14 +
             ((uVar15 | uVar17) & uVar16 | uVar15 & uVar17);
    auVar26 = vpshufb_avx2(param_3[2],_DAT_002ad960);
    iVar14 = ((uVar19 ^ uVar20) & uVar18 ^ uVar20) +
             ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
             (uVar18 >> 6 | uVar18 * 0x4000000));
    uVar17 = uVar17 + uVar21 + iStack_1bc + iVar14;
    uVar21 = uVar21 + iStack_1bc +
             ((uVar22 >> 0x16 | uVar22 * 0x400) ^ (uVar22 >> 0xd | uVar22 * 0x80000) ^
             (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar14 +
             ((uVar22 | uVar16) & uVar15 | uVar22 & uVar16);
    iVar14 = ((uVar18 ^ uVar19) & uVar17 ^ uVar19) +
             ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
             (uVar17 >> 6 | uVar17 * 0x4000000));
    uVar16 = uVar16 + uVar20 + iStack_1b8 + iVar14;
    uVar20 = uVar20 + iStack_1b8 +
             ((uVar21 >> 0x16 | uVar21 * 0x400) ^ (uVar21 >> 0xd | uVar21 * 0x80000) ^
             (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar14 +
             ((uVar21 | uVar15) & uVar22 | uVar21 & uVar15);
    local_1c0 = auVar26._0_4_ + local_38[-0x30];
    iStack_1bc = auVar26._4_4_ + local_38[-0x2f];
    iStack_1b8 = auVar26._8_4_ + local_38[-0x2e];
    iStack_1b4 = auVar26._12_4_ + local_38[-0x2d];
    iStack_1b0 = auVar26._16_4_ + local_38[-0x2c];
    iStack_1ac = auVar26._20_4_ + local_38[-0x2b];
    iStack_1a8 = auVar26._24_4_ + local_38[-0x2a];
    iStack_1a4 = auVar26._28_4_ + local_38[-0x29];
    iVar14 = ((uVar17 ^ uVar18) & uVar16 ^ uVar18) +
             ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
             (uVar16 >> 6 | uVar16 * 0x4000000));
    uVar15 = uVar15 + uVar19 + iVar12 + iVar14;
    uVar19 = uVar19 + iVar12 +
             ((uVar20 >> 0x16 | uVar20 * 0x400) ^ (uVar20 >> 0xd | uVar20 * 0x80000) ^
             (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar14 +
             ((uVar20 | uVar22) & uVar21 | uVar20 & uVar22);
    iVar12 = ((uVar16 ^ uVar17) & uVar15 ^ uVar17) +
             ((uVar15 >> 0x19 | uVar15 * 0x80) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
             (uVar15 >> 6 | uVar15 * 0x4000000));
    uVar22 = uVar22 + uVar18 + iVar3 + iVar12;
    uVar18 = uVar18 + iVar3 +
             ((uVar19 >> 0x16 | uVar19 * 0x400) ^ (uVar19 >> 0xd | uVar19 * 0x80000) ^
             (uVar19 >> 2 | uVar19 * 0x40000000)) + iVar12 +
             ((uVar19 | uVar21) & uVar20 | uVar19 & uVar21);
    iVar12 = ((uVar15 ^ uVar16) & uVar22 ^ uVar16) +
             ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
             (uVar22 >> 6 | uVar22 * 0x4000000));
    uVar21 = uVar21 + uVar17 + iVar5 + iVar12;
    uVar17 = uVar17 + iVar5 +
             ((uVar18 >> 0x16 | uVar18 * 0x400) ^ (uVar18 >> 0xd | uVar18 * 0x80000) ^
             (uVar18 >> 2 | uVar18 * 0x40000000)) + iVar12 +
             ((uVar18 | uVar20) & uVar19 | uVar18 & uVar20);
    iVar12 = ((uVar22 ^ uVar15) & uVar21 ^ uVar15) +
             ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
             (uVar21 >> 6 | uVar21 * 0x4000000));
    uVar20 = uVar20 + uVar16 + iVar7 + iVar12;
    uVar16 = uVar16 + iVar7 +
             ((uVar17 >> 0x16 | uVar17 * 0x400) ^ (uVar17 >> 0xd | uVar17 * 0x80000) ^
             (uVar17 >> 2 | uVar17 * 0x40000000)) + iVar12 +
             ((uVar17 | uVar19) & uVar18 | uVar17 & uVar19);
    iVar12 = ((uVar21 ^ uVar22) & uVar20 ^ uVar22) +
             ((uVar20 >> 0x19 | uVar20 * 0x80) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
             (uVar20 >> 6 | uVar20 * 0x4000000));
    uVar19 = uVar19 + uVar15 + iVar9 + iVar12;
    uVar15 = uVar15 + iVar9 +
             ((uVar16 >> 0x16 | uVar16 * 0x400) ^ (uVar16 >> 0xd | uVar16 * 0x80000) ^
             (uVar16 >> 2 | uVar16 * 0x40000000)) + iVar12 +
             ((uVar16 | uVar18) & uVar17 | uVar16 & uVar18);
    iVar12 = ((uVar20 ^ uVar21) & uVar19 ^ uVar21) +
             ((uVar19 >> 0x19 | uVar19 * 0x80) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
             (uVar19 >> 6 | uVar19 * 0x4000000));
    uVar18 = uVar18 + uVar22 + local_1a0 + iVar12;
    uVar22 = uVar22 + local_1a0 +
             ((uVar15 >> 0x16 | uVar15 * 0x400) ^ (uVar15 >> 0xd | uVar15 * 0x80000) ^
             (uVar15 >> 2 | uVar15 * 0x40000000)) + iVar12 +
             ((uVar15 | uVar17) & uVar16 | uVar15 & uVar17);
    auVar28 = vpshufb_avx2(param_3[3],_DAT_002ad960);
    iVar12 = ((uVar19 ^ uVar20) & uVar18 ^ uVar20) +
             ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
             (uVar18 >> 6 | uVar18 * 0x4000000));
    uVar17 = uVar17 + uVar21 + iStack_19c + iVar12;
    uVar21 = uVar21 + iStack_19c +
             ((uVar22 >> 0x16 | uVar22 * 0x400) ^ (uVar22 >> 0xd | uVar22 * 0x80000) ^
             (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar12 +
             ((uVar22 | uVar16) & uVar15 | uVar22 & uVar16);
    iVar12 = ((uVar18 ^ uVar19) & uVar17 ^ uVar19) +
             ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
             (uVar17 >> 6 | uVar17 * 0x4000000));
    uVar16 = uVar16 + uVar20 + iStack_198 + iVar12;
    uVar20 = uVar20 + iStack_198 +
             ((uVar21 >> 0x16 | uVar21 * 0x400) ^ (uVar21 >> 0xd | uVar21 * 0x80000) ^
             (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar12 +
             ((uVar21 | uVar15) & uVar22 | uVar21 & uVar15);
    local_1a0 = auVar28._0_4_ + local_38[-0x28];
    iStack_19c = auVar28._4_4_ + local_38[-0x27];
    iStack_198 = auVar28._8_4_ + local_38[-0x26];
    iStack_194 = auVar28._12_4_ + local_38[-0x25];
    iStack_190 = auVar28._16_4_ + local_38[-0x24];
    iStack_18c = auVar28._20_4_ + local_38[-0x23];
    iStack_188 = auVar28._24_4_ + local_38[-0x22];
    iStack_184 = auVar28._28_4_ + local_38[-0x21];
    iVar12 = ((uVar17 ^ uVar18) & uVar16 ^ uVar18) +
             ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
             (uVar16 >> 6 | uVar16 * 0x4000000));
    uVar15 = uVar15 + uVar19 + iVar13 + iVar12;
    uVar19 = uVar19 + iVar13 +
             ((uVar20 >> 0x16 | uVar20 * 0x400) ^ (uVar20 >> 0xd | uVar20 * 0x80000) ^
             (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar12 +
             ((uVar20 | uVar22) & uVar21 | uVar20 & uVar22);
    iVar12 = ((uVar16 ^ uVar17) & uVar15 ^ uVar17) +
             ((uVar15 >> 0x19 | uVar15 * 0x80) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
             (uVar15 >> 6 | uVar15 * 0x4000000));
    uVar22 = uVar22 + uVar18 + iVar4 + iVar12;
    uVar18 = uVar18 + iVar4 +
             ((uVar19 >> 0x16 | uVar19 * 0x400) ^ (uVar19 >> 0xd | uVar19 * 0x80000) ^
             (uVar19 >> 2 | uVar19 * 0x40000000)) + iVar12 +
             ((uVar19 | uVar21) & uVar20 | uVar19 & uVar21);
    iVar12 = ((uVar15 ^ uVar16) & uVar22 ^ uVar16) +
             ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
             (uVar22 >> 6 | uVar22 * 0x4000000));
    uVar21 = uVar21 + uVar17 + iVar6 + iVar12;
    uVar17 = uVar17 + iVar6 +
             ((uVar18 >> 0x16 | uVar18 * 0x400) ^ (uVar18 >> 0xd | uVar18 * 0x80000) ^
             (uVar18 >> 2 | uVar18 * 0x40000000)) + iVar12 +
             ((uVar18 | uVar20) & uVar19 | uVar18 & uVar20);
    iVar12 = ((uVar22 ^ uVar15) & uVar21 ^ uVar15) +
             ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
             (uVar21 >> 6 | uVar21 * 0x4000000));
    uVar20 = uVar20 + uVar16 + iVar8 + iVar12;
    uVar16 = uVar16 + iVar8 +
             ((uVar17 >> 0x16 | uVar17 * 0x400) ^ (uVar17 >> 0xd | uVar17 * 0x80000) ^
             (uVar17 >> 2 | uVar17 * 0x40000000)) + iVar12 +
             ((uVar17 | uVar19) & uVar18 | uVar17 & uVar19);
    iVar12 = ((uVar21 ^ uVar22) & uVar20 ^ uVar22) +
             ((uVar20 >> 0x19 | uVar20 * 0x80) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
             (uVar20 >> 6 | uVar20 * 0x4000000));
    local_38 = local_38 + -0x20;
    *param_1 = *param_1 +
               uVar15 + iVar10 +
               ((uVar16 >> 0x16 | uVar16 * 0x400) ^ (uVar16 >> 0xd | uVar16 * 0x80000) ^
               (uVar16 >> 2 | uVar16 * 0x40000000)) + iVar12 +
               ((uVar16 | uVar18) & uVar17 | uVar16 & uVar18);
    param_1[1] = param_1[1] + uVar16;
    param_1[2] = param_1[2] + uVar17;
    param_1[3] = param_1[3] + uVar18;
    param_1[4] = param_1[4] + uVar19 + uVar15 + iVar10 + iVar12;
    param_1[5] = param_1[5] + uVar20;
    param_1[6] = param_1[6] + uVar21;
    param_1[7] = param_1[7] + uVar22;
    param_3 = param_3 + 2;
  }
  iVar14 = ((uVar20 ^ uVar21) & uVar19 ^ uVar21) +
           ((uVar19 >> 0x19 | uVar19 * 0x80) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
           (uVar19 >> 6 | uVar19 * 0x4000000));
  uVar18 = uVar18 + uVar22 + local_1c0 + iVar14;
  uVar22 = uVar22 + local_1c0 +
           ((uVar15 >> 0x16 | uVar15 * 0x400) ^ (uVar15 >> 0xd | uVar15 * 0x80000) ^
           (uVar15 >> 2 | uVar15 * 0x40000000)) + iVar14 +
           ((uVar15 | uVar17) & uVar16 | uVar15 & uVar17);
  iVar14 = ((uVar19 ^ uVar20) & uVar18 ^ uVar20) +
           ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
           (uVar18 >> 6 | uVar18 * 0x4000000));
  uVar17 = uVar17 + uVar21 + iStack_1bc + iVar14;
  uVar21 = uVar21 + iStack_1bc +
           ((uVar22 >> 0x16 | uVar22 * 0x400) ^ (uVar22 >> 0xd | uVar22 * 0x80000) ^
           (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar14 +
           ((uVar22 | uVar16) & uVar15 | uVar22 & uVar16);
  iVar14 = ((uVar18 ^ uVar19) & uVar17 ^ uVar19) +
           ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
           (uVar17 >> 6 | uVar17 * 0x4000000));
  uVar16 = uVar16 + uVar20 + iStack_1b8 + iVar14;
  uVar20 = uVar20 + iStack_1b8 +
           ((uVar21 >> 0x16 | uVar21 * 0x400) ^ (uVar21 >> 0xd | uVar21 * 0x80000) ^
           (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar14 +
           ((uVar21 | uVar15) & uVar22 | uVar21 & uVar15);
  iVar14 = ((uVar17 ^ uVar18) & uVar16 ^ uVar18) +
           ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
           (uVar16 >> 6 | uVar16 * 0x4000000));
  uVar15 = uVar15 + uVar19 + iVar12 + iVar14;
  uVar19 = uVar19 + iVar12 +
           ((uVar20 >> 0x16 | uVar20 * 0x400) ^ (uVar20 >> 0xd | uVar20 * 0x80000) ^
           (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar14 +
           ((uVar20 | uVar22) & uVar21 | uVar20 & uVar22);
  iVar12 = ((uVar16 ^ uVar17) & uVar15 ^ uVar17) +
           ((uVar15 >> 0x19 | uVar15 * 0x80) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
           (uVar15 >> 6 | uVar15 * 0x4000000));
  uVar22 = uVar22 + uVar18 + iVar3 + iVar12;
  uVar18 = uVar18 + iVar3 +
           ((uVar19 >> 0x16 | uVar19 * 0x400) ^ (uVar19 >> 0xd | uVar19 * 0x80000) ^
           (uVar19 >> 2 | uVar19 * 0x40000000)) + iVar12 +
           ((uVar19 | uVar21) & uVar20 | uVar19 & uVar21);
  iVar12 = ((uVar15 ^ uVar16) & uVar22 ^ uVar16) +
           ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
           (uVar22 >> 6 | uVar22 * 0x4000000));
  uVar21 = uVar21 + uVar17 + iVar5 + iVar12;
  uVar17 = uVar17 + iVar5 +
           ((uVar18 >> 0x16 | uVar18 * 0x400) ^ (uVar18 >> 0xd | uVar18 * 0x80000) ^
           (uVar18 >> 2 | uVar18 * 0x40000000)) + iVar12 +
           ((uVar18 | uVar20) & uVar19 | uVar18 & uVar20);
  iVar12 = ((uVar22 ^ uVar15) & uVar21 ^ uVar15) +
           ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
           (uVar21 >> 6 | uVar21 * 0x4000000));
  uVar20 = uVar20 + uVar16 + iVar7 + iVar12;
  uVar16 = uVar16 + iVar7 +
           ((uVar17 >> 0x16 | uVar17 * 0x400) ^ (uVar17 >> 0xd | uVar17 * 0x80000) ^
           (uVar17 >> 2 | uVar17 * 0x40000000)) + iVar12 +
           ((uVar17 | uVar19) & uVar18 | uVar17 & uVar19);
  iVar12 = ((uVar21 ^ uVar22) & uVar20 ^ uVar22) +
           ((uVar20 >> 0x19 | uVar20 * 0x80) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
           (uVar20 >> 6 | uVar20 * 0x4000000));
  uVar19 = uVar19 + uVar15 + iVar9 + iVar12;
  uVar15 = uVar15 + iVar9 +
           ((uVar16 >> 0x16 | uVar16 * 0x400) ^ (uVar16 >> 0xd | uVar16 * 0x80000) ^
           (uVar16 >> 2 | uVar16 * 0x40000000)) + iVar12 +
           ((uVar16 | uVar18) & uVar17 | uVar16 & uVar18);
  iVar12 = ((uVar20 ^ uVar21) & uVar19 ^ uVar21) +
           ((uVar19 >> 0x19 | uVar19 * 0x80) ^ (uVar19 >> 0xb | uVar19 * 0x200000) ^
           (uVar19 >> 6 | uVar19 * 0x4000000));
  uVar18 = uVar18 + uVar22 + local_1a0 + iVar12;
  uVar22 = uVar22 + local_1a0 +
           ((uVar15 >> 0x16 | uVar15 * 0x400) ^ (uVar15 >> 0xd | uVar15 * 0x80000) ^
           (uVar15 >> 2 | uVar15 * 0x40000000)) + iVar12 +
           ((uVar15 | uVar17) & uVar16 | uVar15 & uVar17);
  iVar12 = ((uVar19 ^ uVar20) & uVar18 ^ uVar20) +
           ((uVar18 >> 0x19 | uVar18 * 0x80) ^ (uVar18 >> 0xb | uVar18 * 0x200000) ^
           (uVar18 >> 6 | uVar18 * 0x4000000));
  uVar17 = uVar17 + uVar21 + iStack_19c + iVar12;
  uVar21 = uVar21 + iStack_19c +
           ((uVar22 >> 0x16 | uVar22 * 0x400) ^ (uVar22 >> 0xd | uVar22 * 0x80000) ^
           (uVar22 >> 2 | uVar22 * 0x40000000)) + iVar12 +
           ((uVar22 | uVar16) & uVar15 | uVar22 & uVar16);
  iVar12 = ((uVar18 ^ uVar19) & uVar17 ^ uVar19) +
           ((uVar17 >> 0x19 | uVar17 * 0x80) ^ (uVar17 >> 0xb | uVar17 * 0x200000) ^
           (uVar17 >> 6 | uVar17 * 0x4000000));
  uVar16 = uVar16 + uVar20 + iStack_198 + iVar12;
  uVar20 = uVar20 + iStack_198 +
           ((uVar21 >> 0x16 | uVar21 * 0x400) ^ (uVar21 >> 0xd | uVar21 * 0x80000) ^
           (uVar21 >> 2 | uVar21 * 0x40000000)) + iVar12 +
           ((uVar21 | uVar15) & uVar22 | uVar21 & uVar15);
  iVar12 = ((uVar17 ^ uVar18) & uVar16 ^ uVar18) +
           ((uVar16 >> 0x19 | uVar16 * 0x80) ^ (uVar16 >> 0xb | uVar16 * 0x200000) ^
           (uVar16 >> 6 | uVar16 * 0x4000000));
  uVar15 = uVar15 + uVar19 + iVar13 + iVar12;
  uVar19 = uVar19 + iVar13 +
           ((uVar20 >> 0x16 | uVar20 * 0x400) ^ (uVar20 >> 0xd | uVar20 * 0x80000) ^
           (uVar20 >> 2 | uVar20 * 0x40000000)) + iVar12 +
           ((uVar20 | uVar22) & uVar21 | uVar20 & uVar22);
  iVar12 = ((uVar16 ^ uVar17) & uVar15 ^ uVar17) +
           ((uVar15 >> 0x19 | uVar15 * 0x80) ^ (uVar15 >> 0xb | uVar15 * 0x200000) ^
           (uVar15 >> 6 | uVar15 * 0x4000000));
  uVar22 = uVar22 + uVar18 + iVar4 + iVar12;
  uVar18 = uVar18 + iVar4 +
           ((uVar19 >> 0x16 | uVar19 * 0x400) ^ (uVar19 >> 0xd | uVar19 * 0x80000) ^
           (uVar19 >> 2 | uVar19 * 0x40000000)) + iVar12 +
           ((uVar19 | uVar21) & uVar20 | uVar19 & uVar21);
  iVar12 = ((uVar15 ^ uVar16) & uVar22 ^ uVar16) +
           ((uVar22 >> 0x19 | uVar22 * 0x80) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
           (uVar22 >> 6 | uVar22 * 0x4000000));
  uVar21 = uVar21 + uVar17 + iVar6 + iVar12;
  uVar17 = uVar17 + iVar6 +
           ((uVar18 >> 0x16 | uVar18 * 0x400) ^ (uVar18 >> 0xd | uVar18 * 0x80000) ^
           (uVar18 >> 2 | uVar18 * 0x40000000)) + iVar12 +
           ((uVar18 | uVar20) & uVar19 | uVar18 & uVar20);
  iVar12 = ((uVar22 ^ uVar15) & uVar21 ^ uVar15) +
           ((uVar21 >> 0x19 | uVar21 * 0x80) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
           (uVar21 >> 6 | uVar21 * 0x4000000));
  uVar20 = uVar20 + uVar16 + iVar8 + iVar12;
  uVar16 = uVar16 + iVar8 +
           ((uVar17 >> 0x16 | uVar17 * 0x400) ^ (uVar17 >> 0xd | uVar17 * 0x80000) ^
           (uVar17 >> 2 | uVar17 * 0x40000000)) + iVar12 +
           ((uVar17 | uVar19) & uVar18 | uVar17 & uVar19);
  iVar12 = ((uVar21 ^ uVar22) & uVar20 ^ uVar22) +
           ((uVar20 >> 0x19 | uVar20 * 0x80) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
           (uVar20 >> 6 | uVar20 * 0x4000000));
  *param_1 = *param_1 +
             uVar15 + iVar10 +
             ((uVar16 >> 0x16 | uVar16 * 0x400) ^ (uVar16 >> 0xd | uVar16 * 0x80000) ^
             (uVar16 >> 2 | uVar16 * 0x40000000)) + iVar12 +
             ((uVar16 | uVar18) & uVar17 | uVar16 & uVar18);
  param_1[1] = param_1[1] + uVar16;
  param_1[2] = param_1[2] + uVar17;
  param_1[3] = param_1[3] + uVar18;
  param_1[4] = param_1[4] + uVar19 + uVar15 + iVar10 + iVar12;
  param_1[5] = param_1[5] + uVar20;
  param_1[6] = param_1[6] + uVar21;
  param_1[7] = param_1[7] + uVar22;
  return;
}

