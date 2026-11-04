// rea decompile_all
// name: _AccelerateCrypto_SHA1_compress_AVX2
// address: 0x1fc20
// body: available
// range: 0x1fc20-0x208da inclusive
// range: 0x208e0-0x20a93 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _AccelerateCrypto_SHA1_compress_AVX2(uint *param_1,long param_2,undefined1 (*param_3) [16])

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
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
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  uVar17 = *param_1;
  uVar18 = param_1[1];
  uVar21 = param_1[2];
  uVar19 = param_1[3];
  uVar22 = param_1[4];
  auVar26 = vpshufb_avx(*param_3,_REV32);
  local_58 = auVar26._0_4_;
  iStack_54 = auVar26._4_4_;
  iStack_50 = auVar26._8_4_;
  iStack_4c = auVar26._12_4_;
  auVar27 = vpshufb_avx(param_3[1],_REV32);
  local_48 = auVar27._0_4_;
  iStack_44 = auVar27._4_4_;
  iStack_40 = auVar27._8_4_;
  iStack_3c = auVar27._12_4_;
  auVar28 = vpshufb_avx(param_3[2],_REV32);
  local_38 = auVar28._0_4_;
  iStack_34 = auVar28._4_4_;
  iStack_30 = auVar28._8_4_;
  iStack_2c = auVar28._12_4_;
  auVar29 = vpshufb_avx(param_3[3],_REV32);
  local_28 = auVar29._0_4_;
  iStack_24 = auVar29._4_4_;
  iStack_20 = auVar29._8_4_;
  iStack_1c = auVar29._12_4_;
  while( true ) {
    iStack_1c = iStack_1c + 0x5a827999;
    iStack_20 = iStack_20 + 0x5a827999;
    iStack_24 = iStack_24 + 0x5a827999;
    local_28 = local_28 + 0x5a827999;
    iStack_2c = iStack_2c + 0x5a827999;
    iStack_30 = iStack_30 + 0x5a827999;
    iStack_34 = iStack_34 + 0x5a827999;
    local_38 = local_38 + 0x5a827999;
    iStack_3c = iStack_3c + 0x5a827999;
    iStack_40 = iStack_40 + 0x5a827999;
    iStack_44 = iStack_44 + 0x5a827999;
    local_48 = local_48 + 0x5a827999;
    iStack_4c = iStack_4c + 0x5a827999;
    iStack_50 = iStack_50 + 0x5a827999;
    iStack_54 = iStack_54 + 0x5a827999;
    local_58 = local_58 + 0x5a827999;
    auVar34 = vpalignr_avx(auVar27,auVar26,8);
    auVar25 = vpsrldq_avx(auVar29,4);
    uVar20 = uVar18 << 0x1e | uVar18 >> 2;
    auVar34 = auVar28 ^ auVar34 ^ auVar25 ^ auVar26;
    auVar30 = vpslldq_avx(auVar34,0xc);
    uVar18 = uVar22 + local_58 + ((uVar21 ^ uVar19) & uVar18 ^ uVar19) +
             (uVar17 >> 0x1b | uVar17 << 5);
    uVar22 = uVar19 + iStack_54 + (uVar18 >> 0x1b | uVar18 * 0x20) +
             ((uVar20 ^ uVar21) & uVar17 ^ uVar21);
    uVar17 = uVar17 << 0x1e | uVar17 >> 2;
    auVar25 = vpslld_avx(auVar34,1);
    auVar34 = vpsrld_avx(auVar34,0x1f);
    auVar34 = vpor_avx(auVar25,auVar34);
    auVar35 = vpslld_avx(auVar30,2);
    auVar25 = vpsrld_avx(auVar30,0x1e);
    uVar19 = uVar18 * 0x40000000 | uVar18 >> 2;
    auVar25 = auVar35 ^ auVar34 ^ auVar25;
    uVar21 = uVar21 + iStack_50 + ((uVar17 ^ uVar20) & uVar18 ^ uVar20) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar18 = uVar20 + iStack_4c + (uVar21 >> 0x1b | uVar21 * 0x20) +
             ((uVar19 ^ uVar17) & uVar22 ^ uVar17);
    uVar20 = uVar22 * 0x40000000 | uVar22 >> 2;
    auVar34 = vpalignr_avx(auVar28,auVar27,8);
    auVar30 = vpsrldq_avx(auVar25,4);
    uVar22 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar34 = auVar34 ^ auVar29 ^ auVar27 ^ auVar30;
    auVar35 = vpslldq_avx(auVar34,0xc);
    uVar17 = uVar17 + local_48 + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) +
             (uVar18 >> 0x1b | uVar18 * 0x20);
    uVar21 = uVar19 + iStack_44 + (uVar17 >> 0x1b | uVar17 * 0x20) +
             ((uVar22 ^ uVar20) & uVar18 ^ uVar20);
    uVar19 = uVar18 * 0x40000000 | uVar18 >> 2;
    auVar30 = vpslld_avx(auVar34,1);
    auVar34 = vpsrld_avx(auVar34,0x1f);
    auVar34 = vpor_avx(auVar30,auVar34);
    auVar33 = vpslld_avx(auVar35,2);
    auVar30 = vpsrld_avx(auVar35,0x1e);
    uVar18 = uVar17 * 0x40000000 | uVar17 >> 2;
    auVar30 = auVar33 ^ auVar34 ^ auVar30;
    uVar17 = uVar20 + iStack_40 + ((uVar19 ^ uVar22) & uVar17 ^ uVar22) +
             (uVar21 >> 0x1b | uVar21 * 0x20);
    uVar22 = uVar22 + iStack_3c + (uVar17 >> 0x1b | uVar17 * 0x20) +
             ((uVar18 ^ uVar19) & uVar21 ^ uVar19);
    uVar21 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar34 = vpalignr_avx(auVar29,auVar28,8);
    auVar35 = vpsrldq_avx(auVar30,4);
    uVar23 = uVar17 * 0x40000000 | uVar17 >> 2;
    auVar34 = auVar34 ^ auVar25 ^ auVar28 ^ auVar35;
    auVar33 = vpslldq_avx(auVar34,0xc);
    uVar19 = uVar19 + local_38 + ((uVar21 ^ uVar18) & uVar17 ^ uVar18) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar17 = uVar18 + iStack_34 + (uVar19 >> 0x1b | uVar19 * 0x20) +
             ((uVar23 ^ uVar21) & uVar22 ^ uVar21);
    uVar20 = uVar22 * 0x40000000 | uVar22 >> 2;
    auVar35 = vpslld_avx(auVar34,1);
    auVar34 = vpsrld_avx(auVar34,0x1f);
    auVar34 = vpor_avx(auVar35,auVar34);
    auVar32 = vpslld_avx(auVar33,2);
    auVar35 = vpsrld_avx(auVar33,0x1e);
    uVar22 = uVar19 * 0x40000000 | uVar19 >> 2;
    auVar35 = auVar32 ^ auVar34 ^ auVar35;
    uVar18 = uVar21 + iStack_30 + ((uVar20 ^ uVar23) & uVar19 ^ uVar23) +
             (uVar17 >> 0x1b | uVar17 * 0x20);
    uVar23 = uVar23 + iStack_2c + (uVar18 >> 0x1b | uVar18 * 0x20) +
             ((uVar22 ^ uVar20) & uVar17 ^ uVar20);
    uVar17 = uVar17 * 0x40000000 | uVar17 >> 2;
    auVar34 = vpalignr_avx(auVar25,auVar29,8);
    auVar33 = vpsrldq_avx(auVar35,4);
    uVar21 = uVar18 * 0x40000000 | uVar18 >> 2;
    auVar34 = auVar34 ^ auVar30 ^ auVar33 ^ auVar29;
    auVar32 = vpslldq_avx(auVar34,0xc);
    uVar19 = uVar20 + local_28 + ((uVar17 ^ uVar22) & uVar18 ^ uVar22) +
             (uVar23 >> 0x1b | uVar23 * 0x20);
    uVar18 = uVar22 + iStack_24 + (uVar19 >> 0x1b | uVar19 * 0x20) +
             ((uVar21 ^ uVar17) & uVar23 ^ uVar17);
    uVar20 = uVar23 * 0x40000000 | uVar23 >> 2;
    auVar33 = vpslld_avx(auVar34,1);
    auVar34 = vpsrld_avx(auVar34,0x1f);
    auVar34 = vpor_avx(auVar33,auVar34);
    auVar31 = vpslld_avx(auVar32,2);
    auVar33 = vpsrld_avx(auVar32,0x1e);
    uVar22 = uVar19 * 0x40000000 | uVar19 >> 2;
    auVar33 = auVar31 ^ auVar34 ^ auVar33;
    uVar17 = uVar17 + iStack_20 + ((uVar20 ^ uVar21) & uVar19 ^ uVar21) +
             (uVar18 >> 0x1b | uVar18 * 0x20);
    uVar21 = uVar21 + iStack_1c + (uVar17 >> 0x1b | uVar17 * 0x20) +
             ((uVar22 ^ uVar20) & uVar18 ^ uVar20);
    uVar19 = uVar18 * 0x40000000 | uVar18 >> 2;
    auVar34 = vpalignr_avx(auVar33,auVar35,8);
    uVar18 = uVar17 * 0x40000000 | uVar17 >> 2;
    auVar34 = auVar27 ^ auVar26 ^ auVar25 ^ auVar34;
    uVar17 = uVar20 + auVar25._0_4_ + 0x5a827999 + ((uVar19 ^ uVar22) & uVar17 ^ uVar22) +
             (uVar21 >> 0x1b | uVar21 * 0x20);
    uVar22 = uVar22 + auVar25._4_4_ + 0x5a827999 + (uVar17 >> 0x1b | uVar17 * 0x20) +
             ((uVar18 ^ uVar19) & uVar21 ^ uVar19);
    uVar21 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar26 = vpslld_avx(auVar34,2);
    auVar34 = vpsrld_avx(auVar34,0x1e);
    auVar34 = vpor_avx(auVar34,auVar26);
    uVar23 = uVar17 * 0x40000000 | uVar17 >> 2;
    uVar19 = uVar19 + auVar25._8_4_ + 0x5a827999 + ((uVar21 ^ uVar18) & uVar17 ^ uVar18) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar17 = uVar18 + auVar25._12_4_ + 0x5a827999 + (uVar19 >> 0x1b | uVar19 * 0x20) +
             ((uVar23 ^ uVar21) & uVar22 ^ uVar21);
    uVar20 = uVar22 * 0x40000000 | uVar22 >> 2;
    auVar26 = vpalignr_avx(auVar34,auVar33,8);
    uVar22 = uVar19 * 0x40000000 | uVar19 >> 2;
    auVar26 = auVar27 ^ auVar28 ^ auVar30 ^ auVar26;
    uVar18 = uVar21 + auVar30._0_4_ + 0x6ed9eba1 + (uVar23 ^ uVar20 ^ uVar19) +
             (uVar17 >> 0x1b | uVar17 * 0x20);
    uVar23 = uVar23 + auVar30._4_4_ + 0x6ed9eba1 + (uVar18 >> 0x1b | uVar18 * 0x20) +
             (uVar20 ^ uVar22 ^ uVar17);
    uVar17 = uVar17 * 0x40000000 | uVar17 >> 2;
    auVar27 = vpslld_avx(auVar26,2);
    auVar26 = vpsrld_avx(auVar26,0x1e);
    auVar27 = vpor_avx(auVar26,auVar27);
    uVar21 = uVar18 * 0x40000000 | uVar18 >> 2;
    uVar19 = uVar20 + auVar30._8_4_ + 0x6ed9eba1 + (uVar22 ^ uVar17 ^ uVar18) +
             (uVar23 >> 0x1b | uVar23 * 0x20);
    uVar18 = uVar22 + auVar30._12_4_ + 0x6ed9eba1 + (uVar19 >> 0x1b | uVar19 * 0x20) +
             (uVar17 ^ uVar21 ^ uVar23);
    uVar20 = uVar23 * 0x40000000 | uVar23 >> 2;
    auVar26 = vpalignr_avx(auVar27,auVar34,8);
    uVar22 = uVar19 * 0x40000000 | uVar19 >> 2;
    auVar26 = auVar28 ^ auVar29 ^ auVar35 ^ auVar26;
    uVar17 = uVar17 + auVar35._0_4_ + 0x6ed9eba1 + (uVar21 ^ uVar20 ^ uVar19) +
             (uVar18 >> 0x1b | uVar18 * 0x20);
    uVar21 = uVar21 + auVar35._4_4_ + 0x6ed9eba1 + (uVar17 >> 0x1b | uVar17 * 0x20) +
             (uVar20 ^ uVar22 ^ uVar18);
    uVar19 = uVar18 * 0x40000000 | uVar18 >> 2;
    auVar28 = vpslld_avx(auVar26,2);
    auVar26 = vpsrld_avx(auVar26,0x1e);
    auVar28 = vpor_avx(auVar26,auVar28);
    uVar18 = uVar17 * 0x40000000 | uVar17 >> 2;
    uVar17 = uVar20 + auVar35._8_4_ + 0x6ed9eba1 + (uVar22 ^ uVar19 ^ uVar17) +
             (uVar21 >> 0x1b | uVar21 * 0x20);
    uVar22 = uVar22 + auVar35._12_4_ + 0x6ed9eba1 + (uVar17 >> 0x1b | uVar17 * 0x20) +
             (uVar19 ^ uVar18 ^ uVar21);
    uVar21 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar26 = vpalignr_avx(auVar28,auVar27,8);
    uVar23 = uVar17 * 0x40000000 | uVar17 >> 2;
    auVar26 = auVar29 ^ auVar25 ^ auVar33 ^ auVar26;
    uVar19 = uVar19 + auVar33._0_4_ + 0x6ed9eba1 + (uVar18 ^ uVar21 ^ uVar17) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar17 = uVar18 + auVar33._4_4_ + 0x6ed9eba1 + (uVar19 >> 0x1b | uVar19 * 0x20) +
             (uVar21 ^ uVar23 ^ uVar22);
    uVar20 = uVar22 * 0x40000000 | uVar22 >> 2;
    auVar29 = vpslld_avx(auVar26,2);
    auVar26 = vpsrld_avx(auVar26,0x1e);
    auVar29 = vpor_avx(auVar26,auVar29);
    uVar22 = uVar19 * 0x40000000 | uVar19 >> 2;
    uVar18 = uVar21 + auVar33._8_4_ + 0x6ed9eba1 + (uVar23 ^ uVar20 ^ uVar19) +
             (uVar17 >> 0x1b | uVar17 * 0x20);
    uVar23 = uVar23 + auVar33._12_4_ + 0x6ed9eba1 + (uVar18 >> 0x1b | uVar18 * 0x20) +
             (uVar20 ^ uVar22 ^ uVar17);
    uVar17 = uVar17 * 0x40000000 | uVar17 >> 2;
    auVar26 = vpalignr_avx(auVar29,auVar28,8);
    uVar21 = uVar18 * 0x40000000 | uVar18 >> 2;
    auVar26 = auVar25 ^ auVar30 ^ auVar34 ^ auVar26;
    uVar19 = uVar20 + auVar34._0_4_ + 0x6ed9eba1 + (uVar22 ^ uVar17 ^ uVar18) +
             (uVar23 >> 0x1b | uVar23 * 0x20);
    uVar18 = uVar22 + auVar34._4_4_ + 0x6ed9eba1 + (uVar19 >> 0x1b | uVar19 * 0x20) +
             (uVar17 ^ uVar21 ^ uVar23);
    uVar20 = uVar23 * 0x40000000 | uVar23 >> 2;
    auVar25 = vpslld_avx(auVar26,2);
    auVar26 = vpsrld_avx(auVar26,0x1e);
    auVar25 = vpor_avx(auVar26,auVar25);
    uVar22 = uVar19 * 0x40000000 | uVar19 >> 2;
    uVar17 = uVar17 + auVar34._8_4_ + 0x6ed9eba1 + (uVar21 ^ uVar20 ^ uVar19) +
             (uVar18 >> 0x1b | uVar18 * 0x20);
    uVar21 = uVar21 + auVar34._12_4_ + 0x6ed9eba1 + (uVar17 >> 0x1b | uVar17 * 0x20) +
             (uVar20 ^ uVar22 ^ uVar18);
    uVar19 = uVar18 * 0x40000000 | uVar18 >> 2;
    auVar26 = vpalignr_avx(auVar25,auVar29,8);
    uVar18 = uVar17 * 0x40000000 | uVar17 >> 2;
    auVar26 = auVar27 ^ auVar30 ^ auVar35 ^ auVar26;
    uVar17 = uVar20 + auVar27._0_4_ + 0x6ed9eba1 + (uVar22 ^ uVar19 ^ uVar17) +
             (uVar21 >> 0x1b | uVar21 * 0x20);
    uVar22 = uVar22 + auVar27._4_4_ + 0x6ed9eba1 + (uVar17 >> 0x1b | uVar17 * 0x20) +
             (uVar19 ^ uVar18 ^ uVar21);
    uVar21 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar30 = vpslld_avx(auVar26,2);
    auVar26 = vpsrld_avx(auVar26,0x1e);
    auVar30 = vpor_avx(auVar26,auVar30);
    uVar23 = uVar17 * 0x40000000 | uVar17 >> 2;
    uVar19 = uVar19 + auVar27._8_4_ + 0x6ed9eba1 + (uVar18 ^ uVar21 ^ uVar17) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar17 = uVar18 + auVar27._12_4_ + 0x6ed9eba1 + (uVar19 >> 0x1b | uVar19 * 0x20) +
             (uVar21 ^ uVar23 ^ uVar22);
    uVar20 = uVar22 * 0x40000000 | uVar22 >> 2;
    auVar26 = vpalignr_avx(auVar30,auVar25,8);
    uVar22 = uVar19 * 0x40000000 | uVar19 >> 2;
    auVar26 = auVar28 ^ auVar35 ^ auVar33 ^ auVar26;
    uVar18 = uVar21 + auVar28._0_4_ + -0x70e44324 + ((uVar20 | uVar19) & uVar23 | uVar19 & uVar20) +
             (uVar17 >> 0x1b | uVar17 * 0x20);
    uVar23 = uVar23 + auVar28._4_4_ + -0x70e44324 + (uVar18 >> 0x1b | uVar18 * 0x20) +
             ((uVar22 | uVar17) & uVar20 | uVar17 & uVar22);
    uVar17 = uVar17 * 0x40000000 | uVar17 >> 2;
    auVar35 = vpslld_avx(auVar26,2);
    auVar26 = vpsrld_avx(auVar26,0x1e);
    auVar35 = vpor_avx(auVar26,auVar35);
    uVar21 = uVar18 * 0x40000000 | uVar18 >> 2;
    uVar19 = uVar20 + auVar28._8_4_ + -0x70e44324 + ((uVar17 | uVar18) & uVar22 | uVar18 & uVar17) +
             (uVar23 >> 0x1b | uVar23 * 0x20);
    uVar18 = uVar22 + auVar28._12_4_ + -0x70e44324 + (uVar19 >> 0x1b | uVar19 * 0x20) +
             ((uVar21 | uVar23) & uVar17 | uVar23 & uVar21);
    uVar20 = uVar23 * 0x40000000 | uVar23 >> 2;
    auVar26 = vpalignr_avx(auVar35,auVar30,8);
    uVar22 = uVar19 * 0x40000000 | uVar19 >> 2;
    auVar26 = auVar33 ^ auVar34 ^ auVar29 ^ auVar26;
    uVar17 = uVar17 + auVar29._0_4_ + -0x70e44324 + ((uVar20 | uVar19) & uVar21 | uVar19 & uVar20) +
             (uVar18 >> 0x1b | uVar18 * 0x20);
    uVar21 = uVar21 + auVar29._4_4_ + -0x70e44324 + (uVar17 >> 0x1b | uVar17 * 0x20) +
             ((uVar22 | uVar18) & uVar20 | uVar18 & uVar22);
    uVar19 = uVar18 * 0x40000000 | uVar18 >> 2;
    auVar33 = vpslld_avx(auVar26,2);
    auVar26 = vpsrld_avx(auVar26,0x1e);
    auVar33 = vpor_avx(auVar26,auVar33);
    uVar18 = uVar17 * 0x40000000 | uVar17 >> 2;
    uVar17 = uVar20 + auVar29._8_4_ + -0x70e44324 + ((uVar19 | uVar17) & uVar22 | uVar17 & uVar19) +
             (uVar21 >> 0x1b | uVar21 * 0x20);
    uVar22 = uVar22 + auVar29._12_4_ + -0x70e44324 + (uVar17 >> 0x1b | uVar17 * 0x20) +
             ((uVar18 | uVar21) & uVar19 | uVar21 & uVar18);
    uVar21 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar26 = vpalignr_avx(auVar33,auVar35,8);
    uVar23 = uVar17 * 0x40000000 | uVar17 >> 2;
    auVar26 = auVar27 ^ auVar34 ^ auVar25 ^ auVar26;
    uVar19 = uVar19 + auVar25._0_4_ + -0x70e44324 + ((uVar21 | uVar17) & uVar18 | uVar17 & uVar21) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar17 = uVar18 + auVar25._4_4_ + -0x70e44324 + (uVar19 >> 0x1b | uVar19 * 0x20) +
             ((uVar23 | uVar22) & uVar21 | uVar22 & uVar23);
    uVar20 = uVar22 * 0x40000000 | uVar22 >> 2;
    auVar34 = vpslld_avx(auVar26,2);
    auVar26 = vpsrld_avx(auVar26,0x1e);
    auVar34 = vpor_avx(auVar26,auVar34);
    uVar22 = uVar19 * 0x40000000 | uVar19 >> 2;
    iVar1 = auVar34._0_4_ + -0x359d3e2a;
    iVar5 = auVar34._4_4_ + -0x359d3e2a;
    iVar9 = auVar34._8_4_ + -0x359d3e2a;
    iVar13 = auVar34._12_4_ + -0x359d3e2a;
    uVar18 = uVar21 + auVar25._8_4_ + -0x70e44324 + ((uVar20 | uVar19) & uVar23 | uVar19 & uVar20) +
             (uVar17 >> 0x1b | uVar17 * 0x20);
    uVar23 = uVar23 + auVar25._12_4_ + -0x70e44324 + (uVar18 >> 0x1b | uVar18 * 0x20) +
             ((uVar22 | uVar17) & uVar20 | uVar17 & uVar22);
    uVar17 = uVar17 * 0x40000000 | uVar17 >> 2;
    auVar26 = vpalignr_avx(auVar34,auVar33,8);
    uVar21 = uVar18 * 0x40000000 | uVar18 >> 2;
    auVar26 = auVar27 ^ auVar28 ^ auVar30 ^ auVar26;
    uVar19 = uVar20 + auVar30._0_4_ + -0x70e44324 + ((uVar17 | uVar18) & uVar22 | uVar18 & uVar17) +
             (uVar23 >> 0x1b | uVar23 * 0x20);
    uVar18 = uVar22 + auVar30._4_4_ + -0x70e44324 + (uVar19 >> 0x1b | uVar19 * 0x20) +
             ((uVar21 | uVar23) & uVar17 | uVar23 & uVar21);
    uVar20 = uVar23 * 0x40000000 | uVar23 >> 2;
    auVar27 = vpslld_avx(auVar26,2);
    auVar26 = vpsrld_avx(auVar26,0x1e);
    auVar27 = vpor_avx(auVar26,auVar27);
    uVar22 = uVar19 * 0x40000000 | uVar19 >> 2;
    iVar2 = auVar27._0_4_ + -0x359d3e2a;
    iVar6 = auVar27._4_4_ + -0x359d3e2a;
    iVar10 = auVar27._8_4_ + -0x359d3e2a;
    iVar14 = auVar27._12_4_ + -0x359d3e2a;
    uVar17 = uVar17 + auVar30._8_4_ + -0x70e44324 + ((uVar20 | uVar19) & uVar21 | uVar19 & uVar20) +
             (uVar18 >> 0x1b | uVar18 * 0x20);
    uVar21 = uVar21 + auVar30._12_4_ + -0x70e44324 + (uVar17 >> 0x1b | uVar17 * 0x20) +
             ((uVar22 | uVar18) & uVar20 | uVar18 & uVar22);
    uVar19 = uVar18 * 0x40000000 | uVar18 >> 2;
    auVar26 = vpalignr_avx(auVar27,auVar34,8);
    uVar18 = uVar17 * 0x40000000 | uVar17 >> 2;
    auVar26 = auVar28 ^ auVar29 ^ auVar35 ^ auVar26;
    uVar17 = uVar20 + auVar35._0_4_ + -0x70e44324 + ((uVar19 | uVar17) & uVar22 | uVar17 & uVar19) +
             (uVar21 >> 0x1b | uVar21 * 0x20);
    uVar22 = uVar22 + auVar35._4_4_ + -0x70e44324 + (uVar17 >> 0x1b | uVar17 * 0x20) +
             ((uVar18 | uVar21) & uVar19 | uVar21 & uVar18);
    uVar21 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar28 = vpslld_avx(auVar26,2);
    auVar26 = vpsrld_avx(auVar26,0x1e);
    auVar26 = vpor_avx(auVar26,auVar28);
    uVar23 = uVar17 * 0x40000000 | uVar17 >> 2;
    iVar3 = auVar26._0_4_ + -0x359d3e2a;
    iVar7 = auVar26._4_4_ + -0x359d3e2a;
    iVar11 = auVar26._8_4_ + -0x359d3e2a;
    iVar15 = auVar26._12_4_ + -0x359d3e2a;
    uVar19 = uVar19 + auVar35._8_4_ + -0x70e44324 + ((uVar21 | uVar17) & uVar18 | uVar17 & uVar21) +
             (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar17 = uVar18 + auVar35._12_4_ + -0x70e44324 + (uVar19 >> 0x1b | uVar19 * 0x20) +
             ((uVar23 | uVar22) & uVar21 | uVar22 & uVar23);
    uVar20 = uVar22 * 0x40000000 | uVar22 >> 2;
    auVar26 = vpalignr_avx(auVar26,auVar27,8);
    uVar22 = uVar19 * 0x40000000 | uVar19 >> 2;
    auVar26 = auVar29 ^ auVar25 ^ auVar33 ^ auVar26;
    uVar18 = uVar21 + auVar33._0_4_ + -0x359d3e2a + (uVar23 ^ uVar20 ^ uVar19) +
             (uVar17 >> 0x1b | uVar17 * 0x20);
    uVar23 = uVar23 + auVar33._4_4_ + -0x359d3e2a + (uVar18 >> 0x1b | uVar18 * 0x20) +
             (uVar20 ^ uVar22 ^ uVar17);
    uVar17 = uVar17 * 0x40000000 | uVar17 >> 2;
    auVar29 = vpslld_avx(auVar26,2);
    auVar26 = vpsrld_avx(auVar26,0x1e);
    auVar26 = vpor_avx(auVar26,auVar29);
    uVar21 = uVar18 * 0x40000000 | uVar18 >> 2;
    iVar4 = auVar26._0_4_ + -0x359d3e2a;
    iVar8 = auVar26._4_4_ + -0x359d3e2a;
    iVar12 = auVar26._8_4_ + -0x359d3e2a;
    iVar16 = auVar26._12_4_ + -0x359d3e2a;
    uVar19 = uVar20 + auVar33._8_4_ + -0x359d3e2a + (uVar22 ^ uVar17 ^ uVar18) +
             (uVar23 >> 0x1b | uVar23 * 0x20);
    uVar18 = uVar22 + auVar33._12_4_ + -0x359d3e2a + (uVar19 >> 0x1b | uVar19 * 0x20) +
             (uVar17 ^ uVar21 ^ uVar23);
    uVar22 = uVar23 * 0x40000000 | uVar23 >> 2;
    bVar24 = param_2 == 0;
    param_2 = param_2 + -1;
    if (bVar24 || param_2 == 0) break;
    uVar20 = uVar19 * 0x40000000 | uVar19 >> 2;
    auVar26 = vpshufb_avx(param_3[4],_REV32);
    uVar17 = uVar17 + iVar1 + (uVar21 ^ uVar22 ^ uVar19) + (uVar18 >> 0x1b | uVar18 * 0x20);
    uVar21 = uVar21 + iVar5 + (uVar17 >> 0x1b | uVar17 * 0x20) + (uVar22 ^ uVar20 ^ uVar18);
    uVar19 = uVar18 * 0x40000000 | uVar18 >> 2;
    local_58 = auVar26._0_4_;
    iStack_54 = auVar26._4_4_;
    iStack_50 = auVar26._8_4_;
    iStack_4c = auVar26._12_4_;
    uVar18 = uVar17 * 0x40000000 | uVar17 >> 2;
    uVar17 = uVar22 + iVar9 + (uVar20 ^ uVar19 ^ uVar17) + (uVar21 >> 0x1b | uVar21 * 0x20);
    uVar22 = uVar20 + iVar13 + (uVar17 >> 0x1b | uVar17 * 0x20) + (uVar19 ^ uVar18 ^ uVar21);
    uVar21 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar23 = uVar17 * 0x40000000 | uVar17 >> 2;
    auVar27 = vpshufb_avx(param_3[5],_REV32);
    uVar19 = uVar19 + iVar2 + (uVar18 ^ uVar21 ^ uVar17) + (uVar22 >> 0x1b | uVar22 * 0x20);
    uVar17 = uVar18 + iVar6 + (uVar19 >> 0x1b | uVar19 * 0x20) + (uVar21 ^ uVar23 ^ uVar22);
    uVar20 = uVar22 * 0x40000000 | uVar22 >> 2;
    local_48 = auVar27._0_4_;
    iStack_44 = auVar27._4_4_;
    iStack_40 = auVar27._8_4_;
    iStack_3c = auVar27._12_4_;
    uVar22 = uVar19 * 0x40000000 | uVar19 >> 2;
    uVar18 = uVar21 + iVar10 + (uVar23 ^ uVar20 ^ uVar19) + (uVar17 >> 0x1b | uVar17 * 0x20);
    uVar23 = uVar23 + iVar14 + (uVar18 >> 0x1b | uVar18 * 0x20) + (uVar20 ^ uVar22 ^ uVar17);
    uVar17 = uVar17 * 0x40000000 | uVar17 >> 2;
    uVar21 = uVar18 * 0x40000000 | uVar18 >> 2;
    auVar28 = vpshufb_avx(param_3[6],_REV32);
    uVar18 = uVar20 + iVar3 + (uVar22 ^ uVar17 ^ uVar18) + (uVar23 >> 0x1b | uVar23 * 0x20);
    uVar19 = uVar22 + iVar7 + (uVar18 >> 0x1b | uVar18 * 0x20) + (uVar17 ^ uVar21 ^ uVar23);
    uVar23 = uVar23 * 0x40000000 | uVar23 >> 2;
    local_38 = auVar28._0_4_;
    iStack_34 = auVar28._4_4_;
    iStack_30 = auVar28._8_4_;
    iStack_2c = auVar28._12_4_;
    uVar22 = uVar18 * 0x40000000 | uVar18 >> 2;
    uVar17 = uVar17 + iVar11 + (uVar21 ^ uVar23 ^ uVar18) + (uVar19 >> 0x1b | uVar19 * 0x20);
    uVar18 = uVar21 + iVar15 + (uVar17 >> 0x1b | uVar17 * 0x20) + (uVar23 ^ uVar22 ^ uVar19);
    uVar20 = uVar19 * 0x40000000 | uVar19 >> 2;
    uVar21 = uVar17 * 0x40000000 | uVar17 >> 2;
    auVar29 = vpshufb_avx(param_3[7],_REV32);
    uVar17 = uVar23 + iVar4 + (uVar22 ^ uVar20 ^ uVar17) + (uVar18 >> 0x1b | uVar18 * 0x20);
    uVar23 = uVar22 + iVar8 + (uVar17 >> 0x1b | uVar17 * 0x20) + (uVar20 ^ uVar21 ^ uVar18);
    uVar22 = uVar18 * 0x40000000 | uVar18 >> 2;
    local_28 = auVar29._0_4_;
    iStack_24 = auVar29._4_4_;
    iStack_20 = auVar29._8_4_;
    iStack_1c = auVar29._12_4_;
    uVar19 = uVar17 * 0x40000000 | uVar17 >> 2;
    uVar18 = uVar20 + iVar12 + (uVar21 ^ uVar22 ^ uVar17) + (uVar23 >> 0x1b | uVar23 * 0x20);
    uVar17 = uVar21 + iVar16 + (uVar18 >> 0x1b | uVar18 * 0x20) + (uVar22 ^ uVar19 ^ uVar23) +
             *param_1;
    *param_1 = uVar17;
    uVar18 = uVar18 + param_1[1];
    param_1[1] = uVar18;
    uVar21 = (uVar23 * 0x40000000 | uVar23 >> 2) + param_1[2];
    param_1[2] = uVar21;
    uVar19 = uVar19 + param_1[3];
    param_1[3] = uVar19;
    uVar22 = uVar22 + param_1[4];
    param_1[4] = uVar22;
    param_3 = param_3 + 4;
  }
  uVar20 = uVar19 * 0x40000000 | uVar19 >> 2;
  uVar17 = uVar17 + iVar1 + (uVar21 ^ uVar22 ^ uVar19) + (uVar18 >> 0x1b | uVar18 * 0x20);
  uVar21 = uVar21 + iVar5 + (uVar17 >> 0x1b | uVar17 * 0x20) + (uVar22 ^ uVar20 ^ uVar18);
  uVar19 = uVar18 * 0x40000000 | uVar18 >> 2;
  uVar18 = uVar17 * 0x40000000 | uVar17 >> 2;
  uVar17 = uVar22 + iVar9 + (uVar20 ^ uVar19 ^ uVar17) + (uVar21 >> 0x1b | uVar21 * 0x20);
  uVar22 = uVar20 + iVar13 + (uVar17 >> 0x1b | uVar17 * 0x20) + (uVar19 ^ uVar18 ^ uVar21);
  uVar21 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar23 = uVar17 * 0x40000000 | uVar17 >> 2;
  uVar19 = uVar19 + iVar2 + (uVar18 ^ uVar21 ^ uVar17) + (uVar22 >> 0x1b | uVar22 * 0x20);
  uVar17 = uVar18 + iVar6 + (uVar19 >> 0x1b | uVar19 * 0x20) + (uVar21 ^ uVar23 ^ uVar22);
  uVar20 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar22 = uVar19 * 0x40000000 | uVar19 >> 2;
  uVar18 = uVar21 + iVar10 + (uVar23 ^ uVar20 ^ uVar19) + (uVar17 >> 0x1b | uVar17 * 0x20);
  uVar23 = uVar23 + iVar14 + (uVar18 >> 0x1b | uVar18 * 0x20) + (uVar20 ^ uVar22 ^ uVar17);
  uVar17 = uVar17 * 0x40000000 | uVar17 >> 2;
  uVar21 = uVar18 * 0x40000000 | uVar18 >> 2;
  uVar19 = uVar20 + iVar3 + (uVar22 ^ uVar17 ^ uVar18) + (uVar23 >> 0x1b | uVar23 * 0x20);
  uVar18 = uVar22 + iVar7 + (uVar19 >> 0x1b | uVar19 * 0x20) + (uVar17 ^ uVar21 ^ uVar23);
  uVar20 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar22 = uVar19 * 0x40000000 | uVar19 >> 2;
  uVar17 = uVar17 + iVar11 + (uVar21 ^ uVar20 ^ uVar19) + (uVar18 >> 0x1b | uVar18 * 0x20);
  uVar21 = uVar21 + iVar15 + (uVar17 >> 0x1b | uVar17 * 0x20) + (uVar20 ^ uVar22 ^ uVar18);
  uVar19 = uVar18 * 0x40000000 | uVar18 >> 2;
  uVar18 = uVar17 * 0x40000000 | uVar17 >> 2;
  uVar20 = uVar20 + iVar4 + (uVar22 ^ uVar19 ^ uVar17) + (uVar21 >> 0x1b | uVar21 * 0x20);
  uVar22 = uVar22 + iVar8 + (uVar20 >> 0x1b | uVar20 * 0x20) + (uVar19 ^ uVar18 ^ uVar21);
  uVar17 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar23 = uVar20 * 0x40000000 | uVar20 >> 2;
  uVar21 = uVar19 + iVar12 + (uVar18 ^ uVar17 ^ uVar20) + (uVar22 >> 0x1b | uVar22 * 0x20);
  *param_1 = uVar18 + iVar16 + (uVar21 >> 0x1b | uVar21 * 0x20) + (uVar17 ^ uVar23 ^ uVar22) +
             *param_1;
  param_1[1] = uVar21 + param_1[1];
  param_1[2] = (uVar22 * 0x40000000 | uVar22 >> 2) + param_1[2];
  param_1[3] = uVar23 + param_1[3];
  param_1[4] = uVar17 + param_1[4];
  return;
}

