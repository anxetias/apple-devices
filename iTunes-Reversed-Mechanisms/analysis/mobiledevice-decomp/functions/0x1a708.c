// rea decompile_all
// name: _AccelerateCrypto_SHA256_compress_AVX1
// address: 0x1a708
// body: available
// range: 0x1a708-0x1bbb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _AccelerateCrypto_SHA256_compress_AVX1(uint *param_1,long param_2,undefined1 (*param_3) [16])

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
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
  int local_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  long local_158;
  long local_38;
  
  auVar31 = vpshufb_avx(*param_3,_DAT_002ad9c0);
  auVar32 = vpshufb_avx(param_3[1],_DAT_002ad9c0);
  auVar33 = vpshufb_avx(param_3[2],_DAT_002ad9c0);
  auVar34 = vpshufb_avx(param_3[3],_DAT_002ad9c0);
  local_198 = auVar31._0_4_ + 0x428a2f98;
  iStack_194 = auVar31._4_4_ + 0x71374491;
  iStack_190 = auVar31._8_4_ + -0x4a3f0431;
  iStack_18c = auVar31._12_4_ + -0x164a245b;
  local_188 = auVar32._0_4_ + 0x3956c25b;
  iStack_184 = auVar32._4_4_ + 0x59f111f1;
  iStack_180 = auVar32._8_4_ + -0x6dc07d5c;
  iStack_17c = auVar32._12_4_ + -0x54e3a12b;
  local_178 = auVar33._0_4_ + -0x27f85568;
  iStack_174 = auVar33._4_4_ + 0x12835b01;
  iStack_170 = auVar33._8_4_ + 0x243185be;
  iStack_16c = auVar33._12_4_ + 0x550c7dc3;
  local_168 = auVar34._0_4_ + 0x72be5d74;
  iStack_164 = auVar34._4_4_ + -0x7f214e02;
  iStack_160 = auVar34._8_4_ + -0x6423f959;
  iStack_15c = auVar34._12_4_ + -0x3e640e8c;
  piVar9 = &DAT_002b1a50;
  local_38 = param_2;
  while( true ) {
    uVar11 = *param_1;
    uVar14 = param_1[1];
    uVar15 = param_1[2];
    uVar17 = param_1[3];
    uVar7 = param_1[4];
    uVar6 = param_1[5];
    uVar5 = param_1[6];
    uVar4 = param_1[7];
    local_158 = 3;
    do {
      piVar10 = piVar9;
      auVar27 = vpalignr_avx(auVar34,auVar33,4);
      auVar30 = vpalignr_avx(auVar32,auVar31,4);
      uVar3 = (uVar7 >> 0xe | uVar7 << 0x12) ^ uVar7;
      uVar8 = (uVar11 >> 9 | uVar11 << 0x17) ^ uVar11;
      auVar35 = vpslld_avx(auVar30,0xe);
      uVar3 = (uVar3 >> 5 | uVar3 << 0x1b) ^ uVar7;
      auVar28 = vpsrld_avx(auVar30,7);
      uVar8 = (uVar8 >> 0xb | uVar8 << 0x15) ^ uVar11;
      auVar26 = vpsrld_avx(auVar30,3);
      iVar24 = uVar4 + ((uVar6 ^ uVar5) & uVar7 ^ uVar5) + (uVar3 >> 6 | uVar3 << 0x1a) + local_198;
      auVar36 = vpslld_avx(auVar35,0xb);
      uVar17 = uVar17 + iVar24;
      auVar29 = vpsrld_avx(auVar28,0xb);
      uVar25 = iVar24 + (uVar8 >> 2 | uVar8 << 0x1e) +
               ((uVar11 | uVar15) & uVar14 | uVar11 & uVar15);
      auVar30 = vunpckhps_avx(auVar34,auVar34);
      auVar36 = auVar26 ^ auVar35 ^ auVar28 ^ auVar29 ^ auVar36;
      auVar28 = vpsrlq_avx(auVar30,0x11);
      uVar4 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
      auVar30 = vpsrlq_avx(auVar30,0x13);
      uVar3 = (uVar25 >> 9 | uVar25 * 0x800000) ^ uVar25;
      uVar4 = (uVar4 >> 5 | uVar4 << 0x1b) ^ uVar17;
      auVar26 = vpsrld_avx(auVar34,10);
      uVar3 = (uVar3 >> 0xb | uVar3 << 0x15) ^ uVar25;
      iVar24 = uVar5 + ((uVar7 ^ uVar6) & uVar17 ^ uVar6) + (uVar4 >> 6 | uVar4 << 0x1a) +
                       iStack_194;
      auVar30 = vpshufd_avx(auVar30 ^ auVar28,0x80);
      uVar15 = uVar15 + iVar24;
      uVar23 = iVar24 + (uVar3 >> 2 | uVar3 << 0x1e) +
               ((uVar25 | uVar14) & uVar11 | uVar25 & uVar14);
      auVar26 = vpsrldq_avx(auVar26 ^ auVar30,8);
      uVar5 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
      auVar30._0_4_ = auVar31._0_4_ + auVar27._0_4_ + auVar36._0_4_ + auVar26._0_4_;
      auVar30._4_4_ = auVar31._4_4_ + auVar27._4_4_ + auVar36._4_4_ + auVar26._4_4_;
      auVar30._8_4_ = auVar31._8_4_ + auVar27._8_4_ + auVar36._8_4_ + auVar26._8_4_;
      auVar30._12_4_ = auVar31._12_4_ + auVar27._12_4_ + auVar36._12_4_ + auVar26._12_4_;
      uVar4 = (uVar23 >> 9 | uVar23 * 0x800000) ^ uVar23;
      uVar5 = (uVar5 >> 5 | uVar5 << 0x1b) ^ uVar15;
      auVar31 = vunpcklps_avx(auVar30,auVar30);
      uVar4 = (uVar4 >> 0xb | uVar4 << 0x15) ^ uVar23;
      auVar27 = vpsrld_avx(auVar30,10);
      auVar36 = vpsrlq_avx(auVar31,0x11);
      iVar24 = uVar6 + ((uVar17 ^ uVar7) & uVar15 ^ uVar7) + (uVar5 >> 6 | uVar5 << 0x1a) +
                       iStack_190;
      auVar31 = vpsrlq_avx(auVar31,0x13);
      uVar14 = uVar14 + iVar24;
      uVar22 = iVar24 + (uVar4 >> 2 | uVar4 << 0x1e) +
               ((uVar23 | uVar11) & uVar25 | uVar23 & uVar11);
      auVar31 = vpshufd_avx(auVar31 ^ auVar36,8);
      uVar6 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
      uVar5 = (uVar22 >> 9 | uVar22 * 0x800000) ^ uVar22;
      uVar6 = (uVar6 >> 5 | uVar6 << 0x1b) ^ uVar14;
      uVar5 = (uVar5 >> 0xb | uVar5 << 0x15) ^ uVar22;
      auVar27 = vpslldq_avx(auVar27 ^ auVar31,8);
      iVar19 = uVar7 + ((uVar15 ^ uVar17) & uVar14 ^ uVar17) + (uVar6 >> 6 | uVar6 << 0x1a) +
                       iStack_18c;
      auVar31._0_4_ = auVar30._0_4_ + auVar27._0_4_;
      auVar31._4_4_ = auVar30._4_4_ + auVar27._4_4_;
      auVar31._8_4_ = auVar30._8_4_ + auVar27._8_4_;
      auVar31._12_4_ = auVar30._12_4_ + auVar27._12_4_;
      uVar11 = uVar11 + iVar19;
      local_198 = auVar31._0_4_ + *piVar10;
      iStack_194 = auVar31._4_4_ + piVar10[1];
      iStack_190 = auVar31._8_4_ + piVar10[2];
      iVar24 = auVar31._12_4_ + piVar10[3];
      uVar20 = iVar19 + (uVar5 >> 2 | uVar5 << 0x1e) +
               ((uVar22 | uVar25) & uVar23 | uVar22 & uVar25);
      auVar30 = vpalignr_avx(auVar31,auVar34,4);
      uVar7 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
      uVar6 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
      auVar27 = vpalignr_avx(auVar33,auVar32,4);
      uVar7 = (uVar7 >> 5 | uVar7 << 0x1b) ^ uVar11;
      uVar6 = (uVar6 >> 0xb | uVar6 << 0x15) ^ uVar20;
      auVar29 = vpslld_avx(auVar27,0xe);
      auVar26 = vpsrld_avx(auVar27,7);
      iVar19 = uVar17 + ((uVar14 ^ uVar15) & uVar11 ^ uVar15) + (uVar7 >> 6 | uVar7 << 0x1a) +
                        local_188;
      auVar27 = vpsrld_avx(auVar27,3);
      uVar25 = uVar25 + iVar19;
      uVar18 = iVar19 + (uVar6 >> 2 | uVar6 << 0x1e) +
               ((uVar20 | uVar23) & uVar22 | uVar20 & uVar23);
      auVar28 = vpsrld_avx(auVar26,0xb);
      auVar36 = vpslld_avx(auVar29,0xb);
      uVar17 = (uVar25 >> 0xe | uVar25 * 0x40000) ^ uVar25;
      uVar7 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
      uVar17 = (uVar17 >> 5 | uVar17 << 0x1b) ^ uVar25;
      auVar36 = auVar27 ^ auVar29 ^ auVar26 ^ auVar28 ^ auVar36;
      uVar7 = (uVar7 >> 0xb | uVar7 << 0x15) ^ uVar18;
      auVar27 = vunpckhps_avx(auVar31,auVar31);
      iVar19 = uVar15 + ((uVar11 ^ uVar14) & uVar25 ^ uVar14) + (uVar17 >> 6 | uVar17 << 0x1a) +
                        iStack_184;
      auVar26 = vpsrld_avx(auVar31,10);
      uVar23 = uVar23 + iVar19;
      auVar28 = vpsrlq_avx(auVar27,0x11);
      auVar27 = vpsrlq_avx(auVar27,0x13);
      uVar16 = iVar19 + (uVar7 >> 2 | uVar7 << 0x1e) +
               ((uVar18 | uVar22) & uVar20 | uVar18 & uVar22);
      uVar15 = (uVar23 >> 0xe | uVar23 * 0x40000) ^ uVar23;
      auVar27 = vpshufd_avx(auVar27 ^ auVar28,0x80);
      uVar17 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
      uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar23;
      auVar26 = vpsrldq_avx(auVar26 ^ auVar27,8);
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar16;
      auVar27._0_4_ = auVar32._0_4_ + auVar30._0_4_ + auVar36._0_4_ + auVar26._0_4_;
      auVar27._4_4_ = auVar32._4_4_ + auVar30._4_4_ + auVar36._4_4_ + auVar26._4_4_;
      auVar27._8_4_ = auVar32._8_4_ + auVar30._8_4_ + auVar36._8_4_ + auVar26._8_4_;
      auVar27._12_4_ = auVar32._12_4_ + auVar30._12_4_ + auVar36._12_4_ + auVar26._12_4_;
      auVar32 = vunpcklps_avx(auVar27,auVar27);
      iVar19 = uVar14 + ((uVar25 ^ uVar11) & uVar23 ^ uVar11) + (uVar15 >> 6 | uVar15 << 0x1a) +
                        iStack_180;
      auVar30 = vpsrld_avx(auVar27,10);
      uVar22 = uVar22 + iVar19;
      auVar36 = vpsrlq_avx(auVar32,0x11);
      auVar32 = vpsrlq_avx(auVar32,0x13);
      uVar3 = iVar19 + (uVar17 >> 2 | uVar17 << 0x1e) +
              ((uVar16 | uVar20) & uVar18 | uVar16 & uVar20);
      uVar14 = (uVar22 >> 0xe | uVar22 * 0x40000) ^ uVar22;
      auVar32 = vpshufd_avx(auVar32 ^ auVar36,8);
      uVar15 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar22;
      uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar3;
      auVar30 = vpslldq_avx(auVar30 ^ auVar32,8);
      auVar32._0_4_ = auVar27._0_4_ + auVar30._0_4_;
      auVar32._4_4_ = auVar27._4_4_ + auVar30._4_4_;
      auVar32._8_4_ = auVar27._8_4_ + auVar30._8_4_;
      auVar32._12_4_ = auVar27._12_4_ + auVar30._12_4_;
      iVar12 = uVar11 + ((uVar23 ^ uVar25) & uVar22 ^ uVar25) + (uVar14 >> 6 | uVar14 << 0x1a) +
                        iStack_17c;
      uVar20 = uVar20 + iVar12;
      local_188 = auVar32._0_4_ + piVar10[4];
      iStack_184 = auVar32._4_4_ + piVar10[5];
      iStack_180 = auVar32._8_4_ + piVar10[6];
      iVar19 = auVar32._12_4_ + piVar10[7];
      uVar8 = iVar12 + (uVar15 >> 2 | uVar15 << 0x1e) + ((uVar3 | uVar18) & uVar16 | uVar3 & uVar18)
      ;
      auVar30 = vpalignr_avx(auVar32,auVar31,4);
      auVar27 = vpalignr_avx(auVar34,auVar33,4);
      uVar11 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
      uVar14 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
      auVar35 = vpslld_avx(auVar27,0xe);
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar20;
      auVar28 = vpsrld_avx(auVar27,7);
      uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar8;
      auVar36 = vpsrld_avx(auVar27,3);
      iVar12 = uVar25 + ((uVar22 ^ uVar23) & uVar20 ^ uVar23) + (uVar11 >> 6 | uVar11 << 0x1a) +
                        local_178;
      auVar26 = vpslld_avx(auVar35,0xb);
      uVar18 = uVar18 + iVar12;
      auVar29 = vpsrld_avx(auVar28,0xb);
      uVar4 = iVar12 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar8 | uVar16) & uVar3 | uVar8 & uVar16);
      auVar27 = vunpckhps_avx(auVar32,auVar32);
      auVar26 = auVar36 ^ auVar35 ^ auVar28 ^ auVar29 ^ auVar26;
      auVar28 = vpsrlq_avx(auVar27,0x11);
      uVar11 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
      auVar27 = vpsrlq_avx(auVar27,0x13);
      uVar14 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar18;
      auVar36 = vpsrld_avx(auVar32,10);
      uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar4;
      iVar12 = uVar23 + ((uVar20 ^ uVar22) & uVar18 ^ uVar22) + (uVar11 >> 6 | uVar11 << 0x1a) +
                        iStack_174;
      auVar27 = vpshufd_avx(auVar27 ^ auVar28,0x80);
      uVar16 = uVar16 + iVar12;
      uVar5 = iVar12 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar4 | uVar3) & uVar8 | uVar4 & uVar3);
      auVar27 = vpsrldq_avx(auVar36 ^ auVar27,8);
      uVar11 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
      auVar36._0_4_ = auVar33._0_4_ + auVar30._0_4_ + auVar26._0_4_ + auVar27._0_4_;
      auVar36._4_4_ = auVar33._4_4_ + auVar30._4_4_ + auVar26._4_4_ + auVar27._4_4_;
      auVar36._8_4_ = auVar33._8_4_ + auVar30._8_4_ + auVar26._8_4_ + auVar27._8_4_;
      auVar36._12_4_ = auVar33._12_4_ + auVar30._12_4_ + auVar26._12_4_ + auVar27._12_4_;
      uVar14 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar16;
      auVar33 = vunpcklps_avx(auVar36,auVar36);
      uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar5;
      auVar30 = vpsrld_avx(auVar36,10);
      auVar27 = vpsrlq_avx(auVar33,0x11);
      iVar12 = uVar22 + ((uVar18 ^ uVar20) & uVar16 ^ uVar20) + (uVar11 >> 6 | uVar11 << 0x1a) +
                        iStack_170;
      auVar33 = vpsrlq_avx(auVar33,0x13);
      uVar3 = uVar3 + iVar12;
      uVar6 = iVar12 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar5 | uVar8) & uVar4 | uVar5 & uVar8);
      auVar33 = vpshufd_avx(auVar33 ^ auVar27,8);
      uVar11 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
      uVar14 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar3;
      uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar6;
      auVar30 = vpslldq_avx(auVar30 ^ auVar33,8);
      iVar21 = uVar20 + ((uVar16 ^ uVar18) & uVar3 ^ uVar18) + (uVar11 >> 6 | uVar11 << 0x1a) +
                        iStack_16c;
      auVar33._0_4_ = auVar36._0_4_ + auVar30._0_4_;
      auVar33._4_4_ = auVar36._4_4_ + auVar30._4_4_;
      auVar33._8_4_ = auVar36._8_4_ + auVar30._8_4_;
      auVar33._12_4_ = auVar36._12_4_ + auVar30._12_4_;
      uVar8 = uVar8 + iVar21;
      local_178 = auVar33._0_4_ + piVar10[8];
      iStack_174 = auVar33._4_4_ + piVar10[9];
      iStack_170 = auVar33._8_4_ + piVar10[10];
      iVar12 = auVar33._12_4_ + piVar10[0xb];
      uVar7 = iVar21 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar6 | uVar4) & uVar5 | uVar6 & uVar4);
      auVar30 = vpalignr_avx(auVar33,auVar32,4);
      uVar11 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
      uVar14 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
      auVar27 = vpalignr_avx(auVar31,auVar34,4);
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar8;
      uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar7;
      auVar29 = vpslld_avx(auVar27,0xe);
      auVar26 = vpsrld_avx(auVar27,7);
      iVar21 = uVar18 + ((uVar3 ^ uVar16) & uVar8 ^ uVar16) + (uVar11 >> 6 | uVar11 << 0x1a) +
                        local_168;
      auVar27 = vpsrld_avx(auVar27,3);
      uVar4 = uVar4 + iVar21;
      uVar17 = iVar21 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar7 | uVar5) & uVar6 | uVar7 & uVar5);
      auVar28 = vpsrld_avx(auVar26,0xb);
      auVar36 = vpslld_avx(auVar29,0xb);
      uVar11 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
      uVar14 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar4;
      auVar36 = auVar27 ^ auVar29 ^ auVar26 ^ auVar28 ^ auVar36;
      uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar17;
      auVar27 = vunpckhps_avx(auVar33,auVar33);
      iVar21 = uVar16 + ((uVar8 ^ uVar3) & uVar4 ^ uVar3) + (uVar11 >> 6 | uVar11 << 0x1a) +
                        iStack_164;
      auVar26 = vpsrld_avx(auVar33,10);
      uVar5 = uVar5 + iVar21;
      auVar28 = vpsrlq_avx(auVar27,0x11);
      auVar27 = vpsrlq_avx(auVar27,0x13);
      uVar15 = iVar21 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar17 | uVar6) & uVar7 | uVar17 & uVar6)
      ;
      uVar11 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
      auVar27 = vpshufd_avx(auVar27 ^ auVar28,0x80);
      uVar14 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar5;
      auVar27 = vpsrldq_avx(auVar26 ^ auVar27,8);
      uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar15;
      auVar26._0_4_ = auVar34._0_4_ + auVar30._0_4_ + auVar36._0_4_ + auVar27._0_4_;
      auVar26._4_4_ = auVar34._4_4_ + auVar30._4_4_ + auVar36._4_4_ + auVar27._4_4_;
      auVar26._8_4_ = auVar34._8_4_ + auVar30._8_4_ + auVar36._8_4_ + auVar27._8_4_;
      auVar26._12_4_ = auVar34._12_4_ + auVar30._12_4_ + auVar36._12_4_ + auVar27._12_4_;
      auVar34 = vunpcklps_avx(auVar26,auVar26);
      iVar21 = uVar3 + ((uVar4 ^ uVar8) & uVar5 ^ uVar8) + (uVar11 >> 6 | uVar11 << 0x1a) +
                       iStack_160;
      auVar30 = vpsrld_avx(auVar26,10);
      uVar6 = uVar6 + iVar21;
      auVar27 = vpsrlq_avx(auVar34,0x11);
      auVar34 = vpsrlq_avx(auVar34,0x13);
      uVar14 = iVar21 + (uVar14 >> 2 | uVar14 << 0x1e) +
               ((uVar15 | uVar7) & uVar17 | uVar15 & uVar7);
      uVar11 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      auVar34 = vpshufd_avx(auVar34 ^ auVar27,8);
      uVar3 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
      uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar6;
      uVar3 = (uVar3 >> 0xb | uVar3 << 0x15) ^ uVar14;
      auVar30 = vpslldq_avx(auVar30 ^ auVar34,8);
      auVar34._0_4_ = auVar26._0_4_ + auVar30._0_4_;
      auVar34._4_4_ = auVar26._4_4_ + auVar30._4_4_;
      auVar34._8_4_ = auVar26._8_4_ + auVar30._8_4_;
      auVar34._12_4_ = auVar26._12_4_ + auVar30._12_4_;
      iVar13 = uVar8 + ((uVar5 ^ uVar4) & uVar6 ^ uVar4) + (uVar11 >> 6 | uVar11 << 0x1a) +
                       iStack_15c;
      uVar7 = uVar7 + iVar13;
      local_168 = auVar34._0_4_ + piVar10[0xc];
      iStack_164 = auVar34._4_4_ + piVar10[0xd];
      iStack_160 = auVar34._8_4_ + piVar10[0xe];
      iVar21 = auVar34._12_4_ + piVar10[0xf];
      uVar11 = iVar13 + (uVar3 >> 2 | uVar3 << 0x1e) +
               ((uVar14 | uVar17) & uVar15 | uVar14 & uVar17);
      lVar1 = local_158 + -1;
      bVar2 = 0 < local_158;
      piVar9 = piVar10 + 0x10;
      iStack_18c = iVar24;
      iStack_17c = iVar19;
      iStack_16c = iVar12;
      iStack_15c = iVar21;
      local_158 = lVar1;
    } while (lVar1 != 0 && bVar2);
    local_38 = local_38 + -1;
    if (local_38 == 0) break;
    uVar3 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
    uVar8 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
    uVar3 = (uVar3 >> 5 | uVar3 << 0x1b) ^ uVar7;
    uVar8 = (uVar8 >> 0xb | uVar8 << 0x15) ^ uVar11;
    iVar13 = uVar4 + ((uVar6 ^ uVar5) & uVar7 ^ uVar5) + (uVar3 >> 6 | uVar3 << 0x1a) + local_198;
    uVar17 = uVar17 + iVar13;
    uVar8 = iVar13 + (uVar8 >> 2 | uVar8 << 0x1e) + ((uVar11 | uVar15) & uVar14 | uVar11 & uVar15);
    auVar31 = vpshufb_avx(param_3[4],_DAT_002ad9c0);
    uVar4 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
    uVar3 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    uVar4 = (uVar4 >> 5 | uVar4 << 0x1b) ^ uVar17;
    uVar3 = (uVar3 >> 0xb | uVar3 << 0x15) ^ uVar8;
    iVar13 = uVar5 + ((uVar7 ^ uVar6) & uVar17 ^ uVar6) + (uVar4 >> 6 | uVar4 << 0x1a) + iStack_194;
    uVar15 = uVar15 + iVar13;
    uVar3 = iVar13 + (uVar3 >> 2 | uVar3 << 0x1e) + ((uVar8 | uVar14) & uVar11 | uVar8 & uVar14);
    uVar5 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
    uVar4 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
    uVar5 = (uVar5 >> 5 | uVar5 << 0x1b) ^ uVar15;
    uVar4 = (uVar4 >> 0xb | uVar4 << 0x15) ^ uVar3;
    iVar13 = uVar6 + ((uVar17 ^ uVar7) & uVar15 ^ uVar7) + (uVar5 >> 6 | uVar5 << 0x1a) + iStack_190
    ;
    uVar14 = uVar14 + iVar13;
    uVar4 = iVar13 + (uVar4 >> 2 | uVar4 << 0x1e) + ((uVar3 | uVar11) & uVar8 | uVar3 & uVar11);
    local_198 = auVar31._0_4_ + piVar10[-0x30];
    iStack_194 = auVar31._4_4_ + piVar10[-0x2f];
    iStack_190 = auVar31._8_4_ + piVar10[-0x2e];
    iStack_18c = auVar31._12_4_ + piVar10[-0x2d];
    uVar6 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
    uVar5 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
    uVar6 = (uVar6 >> 5 | uVar6 << 0x1b) ^ uVar14;
    uVar5 = (uVar5 >> 0xb | uVar5 << 0x15) ^ uVar4;
    iVar24 = uVar7 + ((uVar15 ^ uVar17) & uVar14 ^ uVar17) + (uVar6 >> 6 | uVar6 << 0x1a) + iVar24;
    uVar11 = uVar11 + iVar24;
    uVar5 = iVar24 + (uVar5 >> 2 | uVar5 << 0x1e) + ((uVar4 | uVar8) & uVar3 | uVar4 & uVar8);
    uVar7 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
    uVar6 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
    uVar7 = (uVar7 >> 5 | uVar7 << 0x1b) ^ uVar11;
    uVar6 = (uVar6 >> 0xb | uVar6 << 0x15) ^ uVar5;
    iVar24 = uVar17 + ((uVar14 ^ uVar15) & uVar11 ^ uVar15) + (uVar7 >> 6 | uVar7 << 0x1a) +
                      local_188;
    uVar8 = uVar8 + iVar24;
    uVar6 = iVar24 + (uVar6 >> 2 | uVar6 << 0x1e) + ((uVar5 | uVar3) & uVar4 | uVar5 & uVar3);
    auVar32 = vpshufb_avx(param_3[5],_DAT_002ad9c0);
    uVar17 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
    uVar7 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar17 = (uVar17 >> 5 | uVar17 << 0x1b) ^ uVar8;
    uVar7 = (uVar7 >> 0xb | uVar7 << 0x15) ^ uVar6;
    iVar24 = uVar15 + ((uVar11 ^ uVar14) & uVar8 ^ uVar14) + (uVar17 >> 6 | uVar17 << 0x1a) +
                      iStack_184;
    uVar3 = uVar3 + iVar24;
    uVar7 = iVar24 + (uVar7 >> 2 | uVar7 << 0x1e) + ((uVar6 | uVar4) & uVar5 | uVar6 & uVar4);
    uVar15 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
    uVar17 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar3;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar7;
    iVar24 = uVar14 + ((uVar8 ^ uVar11) & uVar3 ^ uVar11) + (uVar15 >> 6 | uVar15 << 0x1a) +
                      iStack_180;
    uVar4 = uVar4 + iVar24;
    uVar17 = iVar24 + (uVar17 >> 2 | uVar17 << 0x1e) + ((uVar7 | uVar5) & uVar6 | uVar7 & uVar5);
    local_188 = auVar32._0_4_ + piVar10[-0x2c];
    iStack_184 = auVar32._4_4_ + piVar10[-0x2b];
    iStack_180 = auVar32._8_4_ + piVar10[-0x2a];
    iStack_17c = auVar32._12_4_ + piVar10[-0x29];
    uVar14 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
    uVar15 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar4;
    uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar17;
    iVar24 = uVar11 + ((uVar3 ^ uVar8) & uVar4 ^ uVar8) + (uVar14 >> 6 | uVar14 << 0x1a) + iVar19;
    uVar5 = uVar5 + iVar24;
    uVar15 = iVar24 + (uVar15 >> 2 | uVar15 << 0x1e) + ((uVar17 | uVar6) & uVar7 | uVar17 & uVar6);
    uVar11 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
    uVar14 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar5;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar15;
    iVar24 = uVar8 + ((uVar4 ^ uVar3) & uVar5 ^ uVar3) + (uVar11 >> 6 | uVar11 << 0x1a) + local_178;
    uVar6 = uVar6 + iVar24;
    uVar8 = iVar24 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar15 | uVar7) & uVar17 | uVar15 & uVar7);
    auVar33 = vpshufb_avx(param_3[6],_DAT_002ad9c0);
    uVar11 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar14 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar6;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar8;
    iVar24 = uVar3 + ((uVar5 ^ uVar4) & uVar6 ^ uVar4) + (uVar11 >> 6 | uVar11 << 0x1a) + iStack_174
    ;
    uVar7 = uVar7 + iVar24;
    uVar3 = iVar24 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar8 | uVar17) & uVar15 | uVar8 & uVar17);
    uVar11 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
    uVar14 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar7;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar3;
    iVar24 = uVar4 + ((uVar6 ^ uVar5) & uVar7 ^ uVar5) + (uVar11 >> 6 | uVar11 << 0x1a) + iStack_170
    ;
    uVar17 = uVar17 + iVar24;
    uVar4 = iVar24 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar3 | uVar15) & uVar8 | uVar3 & uVar15);
    local_178 = auVar33._0_4_ + piVar10[-0x28];
    iStack_174 = auVar33._4_4_ + piVar10[-0x27];
    iStack_170 = auVar33._8_4_ + piVar10[-0x26];
    iStack_16c = auVar33._12_4_ + piVar10[-0x25];
    uVar11 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
    uVar14 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar17;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar4;
    iVar24 = uVar5 + ((uVar7 ^ uVar6) & uVar17 ^ uVar6) + (uVar11 >> 6 | uVar11 << 0x1a) + iVar12;
    uVar15 = uVar15 + iVar24;
    uVar5 = iVar24 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar4 | uVar8) & uVar3 | uVar4 & uVar8);
    uVar11 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
    uVar14 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar15;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar5;
    iVar24 = uVar6 + ((uVar17 ^ uVar7) & uVar15 ^ uVar7) + (uVar11 >> 6 | uVar11 << 0x1a) +
                     local_168;
    uVar8 = uVar8 + iVar24;
    uVar6 = iVar24 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar5 | uVar3) & uVar4 | uVar5 & uVar3);
    auVar34 = vpshufb_avx(param_3[7],_DAT_002ad9c0);
    uVar11 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
    uVar14 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar8;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar6;
    iVar24 = uVar7 + ((uVar15 ^ uVar17) & uVar8 ^ uVar17) + (uVar11 >> 6 | uVar11 << 0x1a) +
                     iStack_164;
    uVar3 = uVar3 + iVar24;
    uVar7 = iVar24 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar6 | uVar4) & uVar5 | uVar6 & uVar4);
    uVar11 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
    uVar14 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar3;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar7;
    iVar24 = uVar17 + ((uVar8 ^ uVar15) & uVar3 ^ uVar15) + (uVar11 >> 6 | uVar11 << 0x1a) +
                      iStack_160;
    uVar4 = uVar4 + iVar24;
    uVar17 = iVar24 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar7 | uVar5) & uVar6 | uVar7 & uVar5);
    local_168 = auVar34._0_4_ + piVar10[-0x24];
    iStack_164 = auVar34._4_4_ + piVar10[-0x23];
    iStack_160 = auVar34._8_4_ + piVar10[-0x22];
    iStack_15c = auVar34._12_4_ + piVar10[-0x21];
    uVar11 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
    uVar14 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar4;
    uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar17;
    iVar24 = uVar15 + ((uVar3 ^ uVar8) & uVar4 ^ uVar8) + (uVar11 >> 6 | uVar11 << 0x1a) + iVar21;
    piVar9 = piVar10 + -0x20;
    *param_1 = *param_1 +
               iVar24 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar17 | uVar6) & uVar7 | uVar17 & uVar6)
    ;
    param_1[1] = param_1[1] + uVar17;
    param_1[2] = param_1[2] + uVar7;
    param_1[3] = param_1[3] + uVar6;
    param_1[4] = param_1[4] + uVar5 + iVar24;
    param_1[5] = param_1[5] + uVar4;
    param_1[6] = param_1[6] + uVar3;
    param_1[7] = param_1[7] + uVar8;
    param_3 = param_3 + 4;
  }
  uVar3 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
  uVar8 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
  uVar3 = (uVar3 >> 5 | uVar3 << 0x1b) ^ uVar7;
  uVar8 = (uVar8 >> 0xb | uVar8 << 0x15) ^ uVar11;
  iVar13 = uVar4 + ((uVar6 ^ uVar5) & uVar7 ^ uVar5) + (uVar3 >> 6 | uVar3 << 0x1a) + local_198;
  uVar17 = uVar17 + iVar13;
  uVar8 = iVar13 + (uVar8 >> 2 | uVar8 << 0x1e) + ((uVar11 | uVar15) & uVar14 | uVar11 & uVar15);
  uVar4 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
  uVar3 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
  uVar4 = (uVar4 >> 5 | uVar4 << 0x1b) ^ uVar17;
  uVar3 = (uVar3 >> 0xb | uVar3 << 0x15) ^ uVar8;
  iVar13 = uVar5 + ((uVar7 ^ uVar6) & uVar17 ^ uVar6) + (uVar4 >> 6 | uVar4 << 0x1a) + iStack_194;
  uVar15 = uVar15 + iVar13;
  uVar3 = iVar13 + (uVar3 >> 2 | uVar3 << 0x1e) + ((uVar8 | uVar14) & uVar11 | uVar8 & uVar14);
  uVar5 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
  uVar4 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
  uVar5 = (uVar5 >> 5 | uVar5 << 0x1b) ^ uVar15;
  uVar4 = (uVar4 >> 0xb | uVar4 << 0x15) ^ uVar3;
  iVar13 = uVar6 + ((uVar17 ^ uVar7) & uVar15 ^ uVar7) + (uVar5 >> 6 | uVar5 << 0x1a) + iStack_190;
  uVar14 = uVar14 + iVar13;
  uVar4 = iVar13 + (uVar4 >> 2 | uVar4 << 0x1e) + ((uVar3 | uVar11) & uVar8 | uVar3 & uVar11);
  uVar6 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
  uVar5 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
  uVar6 = (uVar6 >> 5 | uVar6 << 0x1b) ^ uVar14;
  uVar5 = (uVar5 >> 0xb | uVar5 << 0x15) ^ uVar4;
  iVar24 = uVar7 + ((uVar15 ^ uVar17) & uVar14 ^ uVar17) + (uVar6 >> 6 | uVar6 << 0x1a) + iVar24;
  uVar11 = uVar11 + iVar24;
  uVar5 = iVar24 + (uVar5 >> 2 | uVar5 << 0x1e) + ((uVar4 | uVar8) & uVar3 | uVar4 & uVar8);
  uVar7 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
  uVar6 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
  uVar7 = (uVar7 >> 5 | uVar7 << 0x1b) ^ uVar11;
  uVar6 = (uVar6 >> 0xb | uVar6 << 0x15) ^ uVar5;
  iVar24 = uVar17 + ((uVar14 ^ uVar15) & uVar11 ^ uVar15) + (uVar7 >> 6 | uVar7 << 0x1a) + local_188
  ;
  uVar8 = uVar8 + iVar24;
  uVar6 = iVar24 + (uVar6 >> 2 | uVar6 << 0x1e) + ((uVar5 | uVar3) & uVar4 | uVar5 & uVar3);
  uVar17 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
  uVar7 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
  uVar17 = (uVar17 >> 5 | uVar17 << 0x1b) ^ uVar8;
  uVar7 = (uVar7 >> 0xb | uVar7 << 0x15) ^ uVar6;
  iVar24 = uVar15 + ((uVar11 ^ uVar14) & uVar8 ^ uVar14) + (uVar17 >> 6 | uVar17 << 0x1a) +
                    iStack_184;
  uVar3 = uVar3 + iVar24;
  uVar7 = iVar24 + (uVar7 >> 2 | uVar7 << 0x1e) + ((uVar6 | uVar4) & uVar5 | uVar6 & uVar4);
  uVar15 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
  uVar17 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
  uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar3;
  uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar7;
  iVar24 = uVar14 + ((uVar8 ^ uVar11) & uVar3 ^ uVar11) + (uVar15 >> 6 | uVar15 << 0x1a) +
                    iStack_180;
  uVar4 = uVar4 + iVar24;
  uVar17 = iVar24 + (uVar17 >> 2 | uVar17 << 0x1e) + ((uVar7 | uVar5) & uVar6 | uVar7 & uVar5);
  uVar14 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
  uVar15 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
  uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar4;
  uVar15 = (uVar15 >> 0xb | uVar15 << 0x15) ^ uVar17;
  iVar24 = uVar11 + ((uVar3 ^ uVar8) & uVar4 ^ uVar8) + (uVar14 >> 6 | uVar14 << 0x1a) + iVar19;
  uVar5 = uVar5 + iVar24;
  uVar15 = iVar24 + (uVar15 >> 2 | uVar15 << 0x1e) + ((uVar17 | uVar6) & uVar7 | uVar17 & uVar6);
  uVar11 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
  uVar14 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
  uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar5;
  uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar15;
  iVar24 = uVar8 + ((uVar4 ^ uVar3) & uVar5 ^ uVar3) + (uVar11 >> 6 | uVar11 << 0x1a) + local_178;
  uVar6 = uVar6 + iVar24;
  uVar8 = iVar24 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar15 | uVar7) & uVar17 | uVar15 & uVar7);
  uVar11 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
  uVar14 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
  uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar6;
  uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar8;
  iVar24 = uVar3 + ((uVar5 ^ uVar4) & uVar6 ^ uVar4) + (uVar11 >> 6 | uVar11 << 0x1a) + iStack_174;
  uVar7 = uVar7 + iVar24;
  uVar3 = iVar24 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar8 | uVar17) & uVar15 | uVar8 & uVar17);
  uVar11 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
  uVar14 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
  uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar7;
  uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar3;
  iVar24 = uVar4 + ((uVar6 ^ uVar5) & uVar7 ^ uVar5) + (uVar11 >> 6 | uVar11 << 0x1a) + iStack_170;
  uVar17 = uVar17 + iVar24;
  uVar4 = iVar24 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar3 | uVar15) & uVar8 | uVar3 & uVar15);
  uVar11 = (uVar17 >> 0xe | uVar17 * 0x40000) ^ uVar17;
  uVar14 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
  uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar17;
  uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar4;
  iVar24 = uVar5 + ((uVar7 ^ uVar6) & uVar17 ^ uVar6) + (uVar11 >> 6 | uVar11 << 0x1a) + iVar12;
  uVar15 = uVar15 + iVar24;
  uVar5 = iVar24 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar4 | uVar8) & uVar3 | uVar4 & uVar8);
  uVar11 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
  uVar14 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
  uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar15;
  uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar5;
  iVar24 = uVar6 + ((uVar17 ^ uVar7) & uVar15 ^ uVar7) + (uVar11 >> 6 | uVar11 << 0x1a) + local_168;
  uVar8 = uVar8 + iVar24;
  uVar6 = iVar24 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar5 | uVar3) & uVar4 | uVar5 & uVar3);
  uVar11 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
  uVar14 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
  uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar8;
  uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar6;
  iVar24 = uVar7 + ((uVar15 ^ uVar17) & uVar8 ^ uVar17) + (uVar11 >> 6 | uVar11 << 0x1a) +
                   iStack_164;
  uVar3 = uVar3 + iVar24;
  uVar7 = iVar24 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar6 | uVar4) & uVar5 | uVar6 & uVar4);
  uVar11 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
  uVar14 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
  uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar3;
  uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar7;
  iVar24 = uVar17 + ((uVar8 ^ uVar15) & uVar3 ^ uVar15) + (uVar11 >> 6 | uVar11 << 0x1a) +
                    iStack_160;
  uVar4 = uVar4 + iVar24;
  uVar17 = iVar24 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar7 | uVar5) & uVar6 | uVar7 & uVar5);
  uVar11 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
  uVar14 = (uVar17 >> 9 | uVar17 * 0x800000) ^ uVar17;
  uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar4;
  uVar14 = (uVar14 >> 0xb | uVar14 << 0x15) ^ uVar17;
  iVar24 = uVar15 + ((uVar3 ^ uVar8) & uVar4 ^ uVar8) + (uVar11 >> 6 | uVar11 << 0x1a) + iVar21;
  *param_1 = *param_1 +
             iVar24 + (uVar14 >> 2 | uVar14 << 0x1e) + ((uVar17 | uVar6) & uVar7 | uVar17 & uVar6);
  param_1[1] = param_1[1] + uVar17;
  param_1[2] = param_1[2] + uVar7;
  param_1[3] = param_1[3] + uVar6;
  param_1[4] = param_1[4] + uVar5 + iVar24;
  param_1[5] = param_1[5] + uVar4;
  param_1[6] = param_1[6] + uVar3;
  param_1[7] = param_1[7] + uVar8;
  return;
}

