// rea decompile_all
// name: _AccelerateCrypto_SHA1_compress_ssse3
// address: 0xb9e0
// body: available
// range: 0xb9e0-0xc718 inclusive
// range: 0xc720-0xc8c9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0000bc44) */
/* WARNING: Removing unreachable block (ram,0x0000bd04) */
/* WARNING: Removing unreachable block (ram,0x0000bb81) */
/* WARNING: Removing unreachable block (ram,0x0000bac1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _AccelerateCrypto_SHA1_compress_ssse3(uint *param_1,long param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar42;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar48;
  int iVar49;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  int iVar50;
  undefined1 auVar40 [16];
  int iVar43;
  int iVar47;
  int iVar51;
  undefined1 auVar41 [16];
  int iVar52;
  int iVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  uint uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  int local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  
  auVar17 = _DAT_002ad810;
  uVar18 = *param_1;
  uVar19 = param_1[1];
  uVar21 = param_1[2];
  uVar23 = param_1[3];
  uVar20 = param_1[4];
  auVar30 = pshufb(*param_3,_DAT_002ad810);
  local_108 = auVar30._0_4_;
  iStack_104 = auVar30._4_4_;
  iStack_fc = auVar30._12_4_;
  iStack_100 = auVar30._8_4_;
  auVar31 = pshufb(param_3[1],_DAT_002ad810);
  local_f8 = auVar31._0_4_;
  iStack_f4 = auVar31._4_4_;
  iStack_ec = auVar31._12_4_;
  iStack_f0 = auVar31._8_4_;
  auVar32 = pshufb(param_3[2],_DAT_002ad810);
  local_e8 = auVar32._0_4_;
  iStack_e4 = auVar32._4_4_;
  iStack_dc = auVar32._12_4_;
  iStack_e0 = auVar32._8_4_;
  auVar33 = pshufb(param_3[3],_DAT_002ad810);
  local_d8 = auVar33._0_4_;
  iStack_d4 = auVar33._4_4_;
  iStack_cc = auVar33._12_4_;
  iStack_d0 = auVar33._8_4_;
  while( true ) {
    iStack_cc = iStack_cc + 0x5a827999;
    iStack_d0 = iStack_d0 + 0x5a827999;
    iStack_d4 = iStack_d4 + 0x5a827999;
    local_d8 = local_d8 + 0x5a827999;
    iStack_dc = iStack_dc + 0x5a827999;
    iStack_e0 = iStack_e0 + 0x5a827999;
    iStack_e4 = iStack_e4 + 0x5a827999;
    local_e8 = local_e8 + 0x5a827999;
    iStack_ec = iStack_ec + 0x5a827999;
    iStack_f0 = iStack_f0 + 0x5a827999;
    iStack_f4 = iStack_f4 + 0x5a827999;
    local_f8 = local_f8 + 0x5a827999;
    iStack_fc = iStack_fc + 0x5a827999;
    iStack_100 = iStack_100 + 0x5a827999;
    iStack_104 = iStack_104 + 0x5a827999;
    local_108 = local_108 + 0x5a827999;
    auVar1._16_16_ = auVar31;
    auVar1._0_16_ = auVar30;
    uVar22 = uVar19 << 0x1e | uVar19 >> 2;
    auVar66 = auVar1._8_16_ ^ auVar32 ^ auVar33 >> 0x20 ^ auVar30;
    uVar65 = auVar66._0_4_;
    uVar20 = (uVar18 << 5 | uVar18 >> 0x1b) +
             uVar20 + local_108 + ((uVar21 ^ uVar23) & uVar19 ^ uVar23);
    uVar24 = uVar23 + iStack_104 + (uVar20 * 0x20 | uVar20 >> 0x1b) +
             ((uVar22 ^ uVar21) & uVar18 ^ uVar21);
    uVar18 = uVar18 << 0x1e | uVar18 >> 2;
    auVar67._0_4_ = uVar65 >> 0x1f;
    auVar67._4_4_ = auVar66._4_4_ >> 0x1f;
    auVar67._8_4_ = auVar66._8_4_ >> 0x1f;
    auVar67._12_4_ = auVar66._12_4_ >> 0x1f;
    auVar34._0_4_ = uVar65 << 1;
    auVar34._4_4_ = auVar66._4_4_ << 1;
    auVar34._8_4_ = auVar66._8_4_ << 1;
    auVar34._12_4_ = auVar66._12_4_ << 1;
    uVar19 = uVar20 * 0x40000000 | uVar20 >> 2;
    auVar34 = (auVar34 | auVar67) ^ ZEXT416(uVar65 << 2) << 0x60 ^ ZEXT416(uVar65 >> 0x1e) << 0x60;
    uVar21 = (uVar24 * 0x20 | uVar24 >> 0x1b) +
             uVar21 + iStack_100 + ((uVar18 ^ uVar22) & uVar20 ^ uVar22);
    uVar23 = uVar22 + iStack_fc + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar19 ^ uVar18) & uVar24 ^ uVar18);
    uVar22 = uVar24 * 0x40000000 | uVar24 >> 2;
    auVar2._16_16_ = auVar32;
    auVar2._0_16_ = auVar31;
    uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar62 = auVar2._8_16_ ^ auVar33 ^ auVar34 >> 0x20 ^ auVar31;
    uVar24 = auVar62._0_4_;
    uVar21 = (uVar23 * 0x20 | uVar23 >> 0x1b) +
             uVar18 + local_f8 + ((uVar22 ^ uVar19) & uVar21 ^ uVar19);
    uVar19 = uVar19 + iStack_f4 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar20 ^ uVar22) & uVar23 ^ uVar22);
    uVar23 = uVar23 * 0x40000000 | uVar23 >> 2;
    auVar63._0_4_ = uVar24 >> 0x1f;
    auVar63._4_4_ = auVar62._4_4_ >> 0x1f;
    auVar63._8_4_ = auVar62._8_4_ >> 0x1f;
    auVar63._12_4_ = auVar62._12_4_ >> 0x1f;
    auVar66._0_4_ = uVar24 << 1;
    auVar66._4_4_ = auVar62._4_4_ << 1;
    auVar66._8_4_ = auVar62._8_4_ << 1;
    auVar66._12_4_ = auVar62._12_4_ << 1;
    uVar18 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar66 = (auVar66 | auVar63) ^ ZEXT416(uVar24 << 2) << 0x60 ^ ZEXT416(uVar24 >> 0x1e) << 0x60;
    uVar21 = (uVar19 * 0x20 | uVar19 >> 0x1b) +
             uVar22 + iStack_f0 + ((uVar23 ^ uVar20) & uVar21 ^ uVar20);
    uVar20 = uVar20 + iStack_ec + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar18 ^ uVar23) & uVar19 ^ uVar23);
    uVar19 = uVar19 * 0x40000000 | uVar19 >> 2;
    auVar3._16_16_ = auVar33;
    auVar3._0_16_ = auVar32;
    uVar22 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar59 = auVar3._8_16_ ^ auVar34 ^ auVar66 >> 0x20 ^ auVar32;
    uVar24 = auVar59._0_4_;
    uVar21 = (uVar20 * 0x20 | uVar20 >> 0x1b) +
             uVar23 + local_e8 + ((uVar19 ^ uVar18) & uVar21 ^ uVar18);
    uVar18 = uVar18 + iStack_e4 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar22 ^ uVar19) & uVar20 ^ uVar19);
    uVar20 = uVar20 * 0x40000000 | uVar20 >> 2;
    auVar60._0_4_ = uVar24 >> 0x1f;
    auVar60._4_4_ = auVar59._4_4_ >> 0x1f;
    auVar60._8_4_ = auVar59._8_4_ >> 0x1f;
    auVar60._12_4_ = auVar59._12_4_ >> 0x1f;
    auVar62._0_4_ = uVar24 << 1;
    auVar62._4_4_ = auVar59._4_4_ << 1;
    auVar62._8_4_ = auVar59._8_4_ << 1;
    auVar62._12_4_ = auVar59._12_4_ << 1;
    uVar23 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar62 = (auVar62 | auVar60) ^ ZEXT416(uVar24 << 2) << 0x60 ^ ZEXT416(uVar24 >> 0x1e) << 0x60;
    uVar21 = (uVar18 * 0x20 | uVar18 >> 0x1b) +
             uVar19 + iStack_e0 + ((uVar20 ^ uVar22) & uVar21 ^ uVar22);
    uVar22 = uVar22 + iStack_dc + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar23 ^ uVar20) & uVar18 ^ uVar20);
    uVar18 = uVar18 * 0x40000000 | uVar18 >> 2;
    auVar4._16_16_ = auVar34;
    auVar4._0_16_ = auVar33;
    uVar19 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar56 = auVar4._8_16_ ^ auVar66 ^ auVar62 >> 0x20 ^ auVar33;
    uVar24 = auVar56._0_4_;
    uVar21 = (uVar22 * 0x20 | uVar22 >> 0x1b) +
             uVar20 + local_d8 + ((uVar18 ^ uVar23) & uVar21 ^ uVar23);
    uVar23 = uVar23 + iStack_d4 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar19 ^ uVar18) & uVar22 ^ uVar18);
    uVar22 = uVar22 * 0x40000000 | uVar22 >> 2;
    auVar57._0_4_ = uVar24 >> 0x1f;
    auVar57._4_4_ = auVar56._4_4_ >> 0x1f;
    auVar57._8_4_ = auVar56._8_4_ >> 0x1f;
    auVar57._12_4_ = auVar56._12_4_ >> 0x1f;
    auVar59._0_4_ = uVar24 << 1;
    auVar59._4_4_ = auVar56._4_4_ << 1;
    auVar59._8_4_ = auVar56._8_4_ << 1;
    auVar59._12_4_ = auVar56._12_4_ << 1;
    uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar59 = (auVar59 | auVar57) ^ ZEXT416(uVar24 << 2) << 0x60 ^ ZEXT416(uVar24 >> 0x1e) << 0x60;
    uVar21 = (uVar23 * 0x20 | uVar23 >> 0x1b) +
             uVar18 + iStack_d0 + ((uVar22 ^ uVar19) & uVar21 ^ uVar19);
    uVar19 = uVar19 + iStack_cc + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar20 ^ uVar22) & uVar23 ^ uVar22);
    uVar23 = uVar23 * 0x40000000 | uVar23 >> 2;
    auVar5._16_16_ = auVar59;
    auVar5._0_16_ = auVar62;
    uVar18 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar30 = auVar5._8_16_ ^ auVar34 ^ auVar30 ^ auVar31;
    uVar21 = (uVar19 * 0x20 | uVar19 >> 0x1b) +
             uVar22 + auVar34._0_4_ + 0x5a827999 + ((uVar23 ^ uVar20) & uVar21 ^ uVar20);
    uVar20 = uVar20 + auVar34._4_4_ + 0x5a827999 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar18 ^ uVar23) & uVar19 ^ uVar23);
    uVar19 = uVar19 * 0x40000000 | uVar19 >> 2;
    auVar54._0_4_ = auVar30._0_4_ >> 0x1e;
    auVar54._4_4_ = auVar30._4_4_ >> 0x1e;
    auVar54._8_4_ = auVar30._8_4_ >> 0x1e;
    auVar54._12_4_ = auVar30._12_4_ >> 0x1e;
    auVar56._0_4_ = auVar30._0_4_ << 2;
    auVar56._4_4_ = auVar30._4_4_ << 2;
    auVar56._8_4_ = auVar30._8_4_ << 2;
    auVar56._12_4_ = auVar30._12_4_ << 2;
    auVar56 = auVar56 | auVar54;
    uVar22 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar21 = (uVar20 * 0x20 | uVar20 >> 0x1b) +
             uVar23 + auVar34._8_4_ + 0x5a827999 + ((uVar19 ^ uVar18) & uVar21 ^ uVar18);
    uVar18 = uVar18 + auVar34._12_4_ + 0x5a827999 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar22 ^ uVar19) & uVar20 ^ uVar19);
    uVar20 = uVar20 * 0x40000000 | uVar20 >> 2;
    auVar6._16_16_ = auVar56;
    auVar6._0_16_ = auVar59;
    uVar23 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar30 = auVar6._8_16_ ^ auVar66 ^ auVar31 ^ auVar32;
    uVar21 = (uVar18 * 0x20 | uVar18 >> 0x1b) +
             uVar19 + auVar66._0_4_ + 0x6ed9eba1 + (uVar22 ^ uVar20 ^ uVar21);
    uVar22 = uVar22 + auVar66._4_4_ + 0x6ed9eba1 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar20 ^ uVar23 ^ uVar18);
    uVar18 = uVar18 * 0x40000000 | uVar18 >> 2;
    auVar72._0_4_ = auVar30._0_4_ >> 0x1e;
    auVar72._4_4_ = auVar30._4_4_ >> 0x1e;
    auVar72._8_4_ = auVar30._8_4_ >> 0x1e;
    auVar72._12_4_ = auVar30._12_4_ >> 0x1e;
    auVar31._0_4_ = auVar30._0_4_ << 2;
    auVar31._4_4_ = auVar30._4_4_ << 2;
    auVar31._8_4_ = auVar30._8_4_ << 2;
    auVar31._12_4_ = auVar30._12_4_ << 2;
    auVar31 = auVar31 | auVar72;
    uVar19 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar21 = (uVar22 * 0x20 | uVar22 >> 0x1b) +
             uVar20 + auVar66._8_4_ + 0x6ed9eba1 + (uVar23 ^ uVar18 ^ uVar21);
    uVar23 = uVar23 + auVar66._12_4_ + 0x6ed9eba1 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar18 ^ uVar19 ^ uVar22);
    uVar22 = uVar22 * 0x40000000 | uVar22 >> 2;
    auVar7._16_16_ = auVar31;
    auVar7._0_16_ = auVar56;
    uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar30 = auVar7._8_16_ ^ auVar62 ^ auVar32 ^ auVar33;
    uVar21 = (uVar23 * 0x20 | uVar23 >> 0x1b) +
             uVar18 + auVar62._0_4_ + 0x6ed9eba1 + (uVar19 ^ uVar22 ^ uVar21);
    uVar19 = uVar19 + auVar62._4_4_ + 0x6ed9eba1 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar22 ^ uVar20 ^ uVar23);
    uVar23 = uVar23 * 0x40000000 | uVar23 >> 2;
    auVar70._0_4_ = auVar30._0_4_ >> 0x1e;
    auVar70._4_4_ = auVar30._4_4_ >> 0x1e;
    auVar70._8_4_ = auVar30._8_4_ >> 0x1e;
    auVar70._12_4_ = auVar30._12_4_ >> 0x1e;
    auVar32._0_4_ = auVar30._0_4_ << 2;
    auVar32._4_4_ = auVar30._4_4_ << 2;
    auVar32._8_4_ = auVar30._8_4_ << 2;
    auVar32._12_4_ = auVar30._12_4_ << 2;
    auVar32 = auVar32 | auVar70;
    uVar18 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar21 = (uVar19 * 0x20 | uVar19 >> 0x1b) +
             uVar22 + auVar62._8_4_ + 0x6ed9eba1 + (uVar20 ^ uVar23 ^ uVar21);
    uVar20 = uVar20 + auVar62._12_4_ + 0x6ed9eba1 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar23 ^ uVar18 ^ uVar19);
    uVar19 = uVar19 * 0x40000000 | uVar19 >> 2;
    auVar8._16_16_ = auVar32;
    auVar8._0_16_ = auVar31;
    uVar22 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar30 = auVar8._8_16_ ^ auVar59 ^ auVar33 ^ auVar34;
    uVar21 = (uVar20 * 0x20 | uVar20 >> 0x1b) +
             uVar23 + auVar59._0_4_ + 0x6ed9eba1 + (uVar18 ^ uVar19 ^ uVar21);
    uVar18 = uVar18 + auVar59._4_4_ + 0x6ed9eba1 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar19 ^ uVar22 ^ uVar20);
    uVar20 = uVar20 * 0x40000000 | uVar20 >> 2;
    auVar69._0_4_ = auVar30._0_4_ >> 0x1e;
    auVar69._4_4_ = auVar30._4_4_ >> 0x1e;
    auVar69._8_4_ = auVar30._8_4_ >> 0x1e;
    auVar69._12_4_ = auVar30._12_4_ >> 0x1e;
    auVar33._0_4_ = auVar30._0_4_ << 2;
    auVar33._4_4_ = auVar30._4_4_ << 2;
    auVar33._8_4_ = auVar30._8_4_ << 2;
    auVar33._12_4_ = auVar30._12_4_ << 2;
    auVar33 = auVar33 | auVar69;
    uVar23 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar21 = (uVar18 * 0x20 | uVar18 >> 0x1b) +
             uVar19 + auVar59._8_4_ + 0x6ed9eba1 + (uVar22 ^ uVar20 ^ uVar21);
    uVar22 = uVar22 + auVar59._12_4_ + 0x6ed9eba1 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar20 ^ uVar23 ^ uVar18);
    uVar18 = uVar18 * 0x40000000 | uVar18 >> 2;
    auVar9._16_16_ = auVar33;
    auVar9._0_16_ = auVar32;
    uVar19 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar30 = auVar9._8_16_ ^ auVar56 ^ auVar34 ^ auVar66;
    uVar21 = (uVar22 * 0x20 | uVar22 >> 0x1b) +
             uVar20 + auVar56._0_4_ + 0x6ed9eba1 + (uVar23 ^ uVar18 ^ uVar21);
    uVar23 = uVar23 + auVar56._4_4_ + 0x6ed9eba1 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar18 ^ uVar19 ^ uVar22);
    uVar22 = uVar22 * 0x40000000 | uVar22 >> 2;
    auVar68._0_4_ = auVar30._0_4_ >> 0x1e;
    auVar68._4_4_ = auVar30._4_4_ >> 0x1e;
    auVar68._8_4_ = auVar30._8_4_ >> 0x1e;
    auVar68._12_4_ = auVar30._12_4_ >> 0x1e;
    auVar35._0_4_ = auVar30._0_4_ << 2;
    auVar35._4_4_ = auVar30._4_4_ << 2;
    auVar35._8_4_ = auVar30._8_4_ << 2;
    auVar35._12_4_ = auVar30._12_4_ << 2;
    auVar35 = auVar35 | auVar68;
    uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar21 = (uVar23 * 0x20 | uVar23 >> 0x1b) +
             uVar18 + auVar56._8_4_ + 0x6ed9eba1 + (uVar19 ^ uVar22 ^ uVar21);
    uVar19 = uVar19 + auVar56._12_4_ + 0x6ed9eba1 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar22 ^ uVar20 ^ uVar23);
    uVar23 = uVar23 * 0x40000000 | uVar23 >> 2;
    auVar10._16_16_ = auVar35;
    auVar10._0_16_ = auVar33;
    uVar18 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar30 = auVar10._8_16_ ^ auVar31 ^ auVar66 ^ auVar62;
    uVar21 = (uVar19 * 0x20 | uVar19 >> 0x1b) +
             uVar22 + auVar31._0_4_ + 0x6ed9eba1 + (uVar20 ^ uVar23 ^ uVar21);
    uVar20 = uVar20 + auVar31._4_4_ + 0x6ed9eba1 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar23 ^ uVar18 ^ uVar19);
    uVar19 = uVar19 * 0x40000000 | uVar19 >> 2;
    auVar64._0_4_ = auVar30._0_4_ >> 0x1e;
    auVar64._4_4_ = auVar30._4_4_ >> 0x1e;
    auVar64._8_4_ = auVar30._8_4_ >> 0x1e;
    auVar64._12_4_ = auVar30._12_4_ >> 0x1e;
    auVar36._0_4_ = auVar30._0_4_ << 2;
    auVar36._4_4_ = auVar30._4_4_ << 2;
    auVar36._8_4_ = auVar30._8_4_ << 2;
    auVar36._12_4_ = auVar30._12_4_ << 2;
    auVar36 = auVar36 | auVar64;
    uVar22 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar21 = (uVar20 * 0x20 | uVar20 >> 0x1b) +
             uVar23 + auVar31._8_4_ + 0x6ed9eba1 + (uVar18 ^ uVar19 ^ uVar21);
    uVar18 = uVar18 + auVar31._12_4_ + 0x6ed9eba1 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar19 ^ uVar22 ^ uVar20);
    uVar20 = uVar20 * 0x40000000 | uVar20 >> 2;
    auVar11._16_16_ = auVar36;
    auVar11._0_16_ = auVar35;
    uVar23 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar30 = auVar11._8_16_ ^ auVar32 ^ auVar62 ^ auVar59;
    uVar21 = (uVar18 * 0x20 | uVar18 >> 0x1b) +
             uVar19 + auVar32._0_4_ + -0x70e44324 + ((uVar20 | uVar21) & uVar22 | uVar21 & uVar20);
    uVar22 = uVar22 + auVar32._4_4_ + -0x70e44324 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar23 | uVar18) & uVar20 | uVar18 & uVar23);
    uVar18 = uVar18 * 0x40000000 | uVar18 >> 2;
    auVar61._0_4_ = auVar30._0_4_ >> 0x1e;
    auVar61._4_4_ = auVar30._4_4_ >> 0x1e;
    auVar61._8_4_ = auVar30._8_4_ >> 0x1e;
    auVar61._12_4_ = auVar30._12_4_ >> 0x1e;
    auVar37._0_4_ = auVar30._0_4_ << 2;
    auVar37._4_4_ = auVar30._4_4_ << 2;
    auVar37._8_4_ = auVar30._8_4_ << 2;
    auVar37._12_4_ = auVar30._12_4_ << 2;
    auVar37 = auVar37 | auVar61;
    uVar19 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar21 = (uVar22 * 0x20 | uVar22 >> 0x1b) +
             uVar20 + auVar32._8_4_ + -0x70e44324 + ((uVar18 | uVar21) & uVar23 | uVar21 & uVar18);
    uVar23 = uVar23 + auVar32._12_4_ + -0x70e44324 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar19 | uVar22) & uVar18 | uVar22 & uVar19);
    uVar22 = uVar22 * 0x40000000 | uVar22 >> 2;
    auVar12._16_16_ = auVar37;
    auVar12._0_16_ = auVar36;
    uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar30 = auVar12._8_16_ ^ auVar33 ^ auVar59 ^ auVar56;
    uVar21 = (uVar23 * 0x20 | uVar23 >> 0x1b) +
             uVar18 + auVar33._0_4_ + -0x70e44324 + ((uVar22 | uVar21) & uVar19 | uVar21 & uVar22);
    uVar19 = uVar19 + auVar33._4_4_ + -0x70e44324 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar20 | uVar23) & uVar22 | uVar23 & uVar20);
    uVar23 = uVar23 * 0x40000000 | uVar23 >> 2;
    auVar58._0_4_ = auVar30._0_4_ >> 0x1e;
    auVar58._4_4_ = auVar30._4_4_ >> 0x1e;
    auVar58._8_4_ = auVar30._8_4_ >> 0x1e;
    auVar58._12_4_ = auVar30._12_4_ >> 0x1e;
    auVar38._0_4_ = auVar30._0_4_ << 2;
    auVar38._4_4_ = auVar30._4_4_ << 2;
    auVar38._8_4_ = auVar30._8_4_ << 2;
    auVar38._12_4_ = auVar30._12_4_ << 2;
    auVar38 = auVar38 | auVar58;
    uVar18 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar21 = (uVar19 * 0x20 | uVar19 >> 0x1b) +
             uVar22 + auVar33._8_4_ + -0x70e44324 + ((uVar23 | uVar21) & uVar20 | uVar21 & uVar23);
    uVar20 = uVar20 + auVar33._12_4_ + -0x70e44324 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar18 | uVar19) & uVar23 | uVar19 & uVar18);
    uVar19 = uVar19 * 0x40000000 | uVar19 >> 2;
    auVar13._16_16_ = auVar38;
    auVar13._0_16_ = auVar37;
    uVar22 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar30 = auVar13._8_16_ ^ auVar35 ^ auVar56 ^ auVar31;
    uVar21 = (uVar20 * 0x20 | uVar20 >> 0x1b) +
             uVar23 + auVar35._0_4_ + -0x70e44324 + ((uVar19 | uVar21) & uVar18 | uVar21 & uVar19);
    uVar18 = uVar18 + auVar35._4_4_ + -0x70e44324 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar22 | uVar20) & uVar19 | uVar20 & uVar22);
    uVar20 = uVar20 * 0x40000000 | uVar20 >> 2;
    auVar55._0_4_ = auVar30._0_4_ >> 0x1e;
    auVar55._4_4_ = auVar30._4_4_ >> 0x1e;
    auVar55._8_4_ = auVar30._8_4_ >> 0x1e;
    auVar55._12_4_ = auVar30._12_4_ >> 0x1e;
    auVar39._0_4_ = auVar30._0_4_ << 2;
    auVar39._4_4_ = auVar30._4_4_ << 2;
    auVar39._8_4_ = auVar30._8_4_ << 2;
    auVar39._12_4_ = auVar30._12_4_ << 2;
    auVar39 = auVar39 | auVar55;
    uVar23 = uVar21 * 0x40000000 | uVar21 >> 2;
    iVar26 = auVar39._0_4_ + -0x359d3e2a;
    iVar42 = auVar39._4_4_ + -0x359d3e2a;
    iVar46 = auVar39._8_4_ + -0x359d3e2a;
    iVar50 = auVar39._12_4_ + -0x359d3e2a;
    uVar21 = (uVar18 * 0x20 | uVar18 >> 0x1b) +
             uVar19 + auVar35._8_4_ + -0x70e44324 + ((uVar20 | uVar21) & uVar22 | uVar21 & uVar20);
    uVar22 = uVar22 + auVar35._12_4_ + -0x70e44324 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar23 | uVar18) & uVar20 | uVar18 & uVar23);
    uVar18 = uVar18 * 0x40000000 | uVar18 >> 2;
    auVar14._16_16_ = auVar39;
    auVar14._0_16_ = auVar38;
    uVar19 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar30 = auVar14._8_16_ ^ auVar36 ^ auVar31 ^ auVar32;
    uVar21 = (uVar22 * 0x20 | uVar22 >> 0x1b) +
             uVar20 + auVar36._0_4_ + -0x70e44324 + ((uVar18 | uVar21) & uVar23 | uVar21 & uVar18);
    uVar23 = uVar23 + auVar36._4_4_ + -0x70e44324 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar19 | uVar22) & uVar18 | uVar22 & uVar19);
    uVar22 = uVar22 * 0x40000000 | uVar22 >> 2;
    auVar73._0_4_ = auVar30._0_4_ >> 0x1e;
    auVar73._4_4_ = auVar30._4_4_ >> 0x1e;
    auVar73._8_4_ = auVar30._8_4_ >> 0x1e;
    auVar73._12_4_ = auVar30._12_4_ >> 0x1e;
    auVar40._0_4_ = auVar30._0_4_ << 2;
    auVar40._4_4_ = auVar30._4_4_ << 2;
    auVar40._8_4_ = auVar30._8_4_ << 2;
    auVar40._12_4_ = auVar30._12_4_ << 2;
    auVar40 = auVar40 | auVar73;
    uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
    iVar27 = auVar40._0_4_ + -0x359d3e2a;
    iVar43 = auVar40._4_4_ + -0x359d3e2a;
    iVar47 = auVar40._8_4_ + -0x359d3e2a;
    iVar51 = auVar40._12_4_ + -0x359d3e2a;
    uVar21 = (uVar23 * 0x20 | uVar23 >> 0x1b) +
             uVar18 + auVar36._8_4_ + -0x70e44324 + ((uVar22 | uVar21) & uVar19 | uVar21 & uVar22);
    uVar19 = uVar19 + auVar36._12_4_ + -0x70e44324 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar20 | uVar23) & uVar22 | uVar23 & uVar20);
    uVar23 = uVar23 * 0x40000000 | uVar23 >> 2;
    auVar15._16_16_ = auVar40;
    auVar15._0_16_ = auVar39;
    uVar18 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar30 = auVar15._8_16_ ^ auVar37 ^ auVar32 ^ auVar33;
    uVar21 = (uVar19 * 0x20 | uVar19 >> 0x1b) +
             uVar22 + auVar37._0_4_ + -0x70e44324 + ((uVar23 | uVar21) & uVar20 | uVar21 & uVar23);
    uVar20 = uVar20 + auVar37._4_4_ + -0x70e44324 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar18 | uVar19) & uVar23 | uVar19 & uVar18);
    uVar19 = uVar19 * 0x40000000 | uVar19 >> 2;
    auVar71._0_4_ = auVar30._0_4_ >> 0x1e;
    auVar71._4_4_ = auVar30._4_4_ >> 0x1e;
    auVar71._8_4_ = auVar30._8_4_ >> 0x1e;
    auVar71._12_4_ = auVar30._12_4_ >> 0x1e;
    auVar41._0_4_ = auVar30._0_4_ << 2;
    auVar41._4_4_ = auVar30._4_4_ << 2;
    auVar41._8_4_ = auVar30._8_4_ << 2;
    auVar41._12_4_ = auVar30._12_4_ << 2;
    auVar41 = auVar41 | auVar71;
    uVar22 = uVar21 * 0x40000000 | uVar21 >> 2;
    iVar28 = auVar41._0_4_ + -0x359d3e2a;
    iVar44 = auVar41._4_4_ + -0x359d3e2a;
    iVar48 = auVar41._8_4_ + -0x359d3e2a;
    iVar52 = auVar41._12_4_ + -0x359d3e2a;
    uVar21 = (uVar20 * 0x20 | uVar20 >> 0x1b) +
             uVar23 + auVar37._8_4_ + -0x70e44324 + ((uVar19 | uVar21) & uVar18 | uVar21 & uVar19);
    uVar18 = uVar18 + auVar37._12_4_ + -0x70e44324 + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             ((uVar22 | uVar20) & uVar19 | uVar20 & uVar22);
    uVar20 = uVar20 * 0x40000000 | uVar20 >> 2;
    auVar16._16_16_ = auVar41;
    auVar16._0_16_ = auVar40;
    uVar23 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar30 = auVar16._8_16_ ^ auVar38 ^ auVar33 ^ auVar35;
    uVar21 = (uVar18 * 0x20 | uVar18 >> 0x1b) +
             uVar19 + auVar38._0_4_ + -0x359d3e2a + (uVar22 ^ uVar20 ^ uVar21);
    uVar22 = uVar22 + auVar38._4_4_ + -0x359d3e2a + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar20 ^ uVar23 ^ uVar18);
    uVar18 = uVar18 * 0x40000000 | uVar18 >> 2;
    uVar19 = uVar21 * 0x40000000 | uVar21 >> 2;
    iVar29 = (auVar30._0_4_ << 2 | auVar30._0_4_ >> 0x1e) + 0xca62c1d6;
    iVar45 = (auVar30._4_4_ << 2 | auVar30._4_4_ >> 0x1e) + 0xca62c1d6;
    iVar49 = (auVar30._8_4_ << 2 | auVar30._8_4_ >> 0x1e) + 0xca62c1d6;
    iVar53 = (auVar30._12_4_ << 2 | auVar30._12_4_ >> 0x1e) + 0xca62c1d6;
    uVar21 = (uVar22 * 0x20 | uVar22 >> 0x1b) +
             uVar20 + auVar38._8_4_ + -0x359d3e2a + (uVar23 ^ uVar18 ^ uVar21);
    uVar23 = uVar23 + auVar38._12_4_ + -0x359d3e2a + (uVar21 * 0x20 | uVar21 >> 0x1b) +
             (uVar18 ^ uVar19 ^ uVar22);
    uVar20 = uVar22 * 0x40000000 | uVar22 >> 2;
    bVar25 = param_2 == 0;
    param_2 = param_2 + -1;
    if (bVar25 || param_2 == 0) break;
    uVar22 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar30 = pshufb(param_3[4],auVar17);
    local_108 = auVar30._0_4_;
    iStack_104 = auVar30._4_4_;
    iStack_fc = auVar30._12_4_;
    uVar21 = (uVar23 * 0x20 | uVar23 >> 0x1b) + uVar18 + iVar26 + (uVar19 ^ uVar20 ^ uVar21);
    uVar19 = uVar19 + iVar42 + (uVar21 * 0x20 | uVar21 >> 0x1b) + (uVar20 ^ uVar22 ^ uVar23);
    uVar23 = uVar23 * 0x40000000 | uVar23 >> 2;
    iStack_100 = auVar30._8_4_;
    uVar18 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar21 = (uVar19 * 0x20 | uVar19 >> 0x1b) + uVar20 + iVar46 + (uVar22 ^ uVar23 ^ uVar21);
    uVar20 = uVar22 + iVar50 + (uVar21 * 0x20 | uVar21 >> 0x1b) + (uVar23 ^ uVar18 ^ uVar19);
    uVar19 = uVar19 * 0x40000000 | uVar19 >> 2;
    uVar22 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar31 = pshufb(param_3[5],auVar17);
    local_f8 = auVar31._0_4_;
    iStack_f4 = auVar31._4_4_;
    iStack_ec = auVar31._12_4_;
    uVar21 = (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar23 + iVar27 + (uVar18 ^ uVar19 ^ uVar21);
    uVar18 = uVar18 + iVar43 + (uVar21 * 0x20 | uVar21 >> 0x1b) + (uVar19 ^ uVar22 ^ uVar20);
    uVar20 = uVar20 * 0x40000000 | uVar20 >> 2;
    iStack_f0 = auVar31._8_4_;
    uVar23 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar21 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar19 + iVar47 + (uVar22 ^ uVar20 ^ uVar21);
    uVar22 = uVar22 + iVar51 + (uVar21 * 0x20 | uVar21 >> 0x1b) + (uVar20 ^ uVar23 ^ uVar18);
    uVar18 = uVar18 * 0x40000000 | uVar18 >> 2;
    uVar19 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar32 = pshufb(param_3[6],auVar17);
    local_e8 = auVar32._0_4_;
    iStack_e4 = auVar32._4_4_;
    iStack_dc = auVar32._12_4_;
    uVar21 = (uVar22 * 0x20 | uVar22 >> 0x1b) + uVar20 + iVar28 + (uVar23 ^ uVar18 ^ uVar21);
    uVar23 = uVar23 + iVar44 + (uVar21 * 0x20 | uVar21 >> 0x1b) + (uVar18 ^ uVar19 ^ uVar22);
    uVar24 = uVar22 * 0x40000000 | uVar22 >> 2;
    iStack_e0 = auVar32._8_4_;
    uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar21 = (uVar23 * 0x20 | uVar23 >> 0x1b) + uVar18 + iVar48 + (uVar19 ^ uVar24 ^ uVar21);
    uVar19 = uVar19 + iVar52 + (uVar21 * 0x20 | uVar21 >> 0x1b) + (uVar24 ^ uVar20 ^ uVar23);
    uVar22 = uVar23 * 0x40000000 | uVar23 >> 2;
    uVar18 = uVar21 * 0x40000000 | uVar21 >> 2;
    auVar33 = pshufb(param_3[7],auVar17);
    local_d8 = auVar33._0_4_;
    iStack_d4 = auVar33._4_4_;
    iStack_cc = auVar33._12_4_;
    uVar21 = (uVar19 * 0x20 | uVar19 >> 0x1b) + uVar24 + iVar29 + (uVar20 ^ uVar22 ^ uVar21);
    uVar24 = uVar20 + iVar45 + (uVar21 * 0x20 | uVar21 >> 0x1b) + (uVar22 ^ uVar18 ^ uVar19);
    uVar20 = uVar19 * 0x40000000 | uVar19 >> 2;
    iStack_d0 = auVar33._8_4_;
    uVar23 = uVar21 * 0x40000000 | uVar21 >> 2;
    uVar19 = (uVar24 * 0x20 | uVar24 >> 0x1b) + uVar22 + iVar49 + (uVar18 ^ uVar20 ^ uVar21);
    uVar18 = uVar18 + iVar53 + (uVar19 * 0x20 | uVar19 >> 0x1b) + (uVar20 ^ uVar23 ^ uVar24) +
             *param_1;
    *param_1 = uVar18;
    uVar19 = uVar19 + param_1[1];
    param_1[1] = uVar19;
    uVar21 = (uVar24 * 0x40000000 | uVar24 >> 2) + param_1[2];
    param_1[2] = uVar21;
    uVar23 = uVar23 + param_1[3];
    param_1[3] = uVar23;
    uVar20 = uVar20 + param_1[4];
    param_1[4] = uVar20;
    param_3 = param_3 + 4;
  }
  uVar22 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = (uVar23 * 0x20 | uVar23 >> 0x1b) + uVar18 + iVar26 + (uVar19 ^ uVar20 ^ uVar21);
  uVar19 = uVar19 + iVar42 + (uVar21 * 0x20 | uVar21 >> 0x1b) + (uVar20 ^ uVar22 ^ uVar23);
  uVar23 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar18 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = (uVar19 * 0x20 | uVar19 >> 0x1b) + uVar20 + iVar46 + (uVar22 ^ uVar23 ^ uVar21);
  uVar20 = uVar22 + iVar50 + (uVar21 * 0x20 | uVar21 >> 0x1b) + (uVar23 ^ uVar18 ^ uVar19);
  uVar19 = uVar19 * 0x40000000 | uVar19 >> 2;
  uVar22 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar23 + iVar27 + (uVar18 ^ uVar19 ^ uVar21);
  uVar18 = uVar18 + iVar43 + (uVar21 * 0x20 | uVar21 >> 0x1b) + (uVar19 ^ uVar22 ^ uVar20);
  uVar20 = uVar20 * 0x40000000 | uVar20 >> 2;
  uVar23 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar19 + iVar47 + (uVar22 ^ uVar20 ^ uVar21);
  uVar22 = uVar22 + iVar51 + (uVar21 * 0x20 | uVar21 >> 0x1b) + (uVar20 ^ uVar23 ^ uVar18);
  uVar18 = uVar18 * 0x40000000 | uVar18 >> 2;
  uVar19 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = (uVar22 * 0x20 | uVar22 >> 0x1b) + uVar20 + iVar28 + (uVar23 ^ uVar18 ^ uVar21);
  uVar23 = uVar23 + iVar44 + (uVar21 * 0x20 | uVar21 >> 0x1b) + (uVar18 ^ uVar19 ^ uVar22);
  uVar22 = uVar22 * 0x40000000 | uVar22 >> 2;
  uVar20 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = (uVar23 * 0x20 | uVar23 >> 0x1b) + uVar18 + iVar48 + (uVar19 ^ uVar22 ^ uVar21);
  uVar19 = uVar19 + iVar52 + (uVar21 * 0x20 | uVar21 >> 0x1b) + (uVar22 ^ uVar20 ^ uVar23);
  uVar23 = uVar23 * 0x40000000 | uVar23 >> 2;
  uVar18 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = (uVar19 * 0x20 | uVar19 >> 0x1b) + uVar22 + iVar29 + (uVar20 ^ uVar23 ^ uVar21);
  uVar20 = uVar20 + iVar45 + (uVar21 * 0x20 | uVar21 >> 0x1b) + (uVar23 ^ uVar18 ^ uVar19);
  uVar19 = uVar19 * 0x40000000 | uVar19 >> 2;
  uVar22 = uVar21 * 0x40000000 | uVar21 >> 2;
  uVar21 = (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar23 + iVar49 + (uVar18 ^ uVar19 ^ uVar21);
  *param_1 = uVar18 + iVar53 + (uVar21 * 0x20 | uVar21 >> 0x1b) + (uVar19 ^ uVar22 ^ uVar20) +
             *param_1;
  param_1[1] = uVar21 + param_1[1];
  param_1[2] = (uVar20 * 0x40000000 | uVar20 >> 2) + param_1[2];
  param_1[3] = uVar22 + param_1[3];
  param_1[4] = uVar19 + param_1[4];
  return;
}

