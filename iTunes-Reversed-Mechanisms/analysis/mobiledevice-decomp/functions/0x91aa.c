// rea decompile_all
// name: _AccelerateCrypto_SHA256_compress_ssse3
// address: 0x91aa
// body: available
// range: 0x91aa-0xb772 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0000ab85) */
/* WARNING: Removing unreachable block (ram,0x0000a737) */
/* WARNING: Removing unreachable block (ram,0x00009603) */
/* WARNING: Removing unreachable block (ram,0x0000a511) */
/* WARNING: Removing unreachable block (ram,0x00009c77) */
/* WARNING: Removing unreachable block (ram,0x000093dd) */
/* WARNING: Removing unreachable block (ram,0x0000a95e) */
/* WARNING: Removing unreachable block (ram,0x0000a0c4) */
/* WARNING: Removing unreachable block (ram,0x0000982a) */
/* WARNING: Removing unreachable block (ram,0x00009a51) */
/* WARNING: Removing unreachable block (ram,0x00009e9d) */
/* WARNING: Removing unreachable block (ram,0x0000a2eb) */

void _AccelerateCrypto_SHA256_compress_ssse3(uint *param_1,long param_2,undefined1 (*param_3) [16])

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar21;
  uint uVar22;
  undefined1 auVar20 [16];
  uint uVar23;
  uint uVar24;
  uint uVar26;
  uint uVar27;
  undefined1 auVar25 [16];
  uint uVar28;
  uint uVar29;
  uint uVar31;
  uint uVar32;
  undefined1 auVar30 [16];
  uint uVar33;
  uint uVar34;
  uint uVar36;
  uint uVar37;
  undefined1 auVar35 [16];
  uint uVar38;
  int iVar39;
  int iVar40;
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
  long local_38;
  
  auVar20._8_8_ = 0xc0d0e0f08090a0b;
  auVar20._0_8_ = 0x405060700010203;
  auVar20 = pshufb(*param_3,auVar20);
  auVar25._8_8_ = 0xc0d0e0f08090a0b;
  auVar25._0_8_ = 0x405060700010203;
  auVar25 = pshufb(param_3[1],auVar25);
  auVar30._8_8_ = 0xc0d0e0f08090a0b;
  auVar30._0_8_ = 0x405060700010203;
  auVar30 = pshufb(param_3[2],auVar30);
  auVar35._8_8_ = 0xc0d0e0f08090a0b;
  auVar35._0_8_ = 0x405060700010203;
  auVar35 = pshufb(param_3[3],auVar35);
  local_108 = auVar20._0_4_;
  iStack_104 = auVar20._4_4_;
  iStack_100 = auVar20._8_4_;
  iStack_fc = auVar20._12_4_;
  local_f8 = auVar25._0_4_;
  iStack_f4 = auVar25._4_4_;
  iStack_f0 = auVar25._8_4_;
  iStack_ec = auVar25._12_4_;
  local_e8 = auVar30._0_4_;
  iStack_e4 = auVar30._4_4_;
  iStack_e0 = auVar30._8_4_;
  iStack_dc = auVar30._12_4_;
  local_d8 = auVar35._0_4_;
  iStack_d4 = auVar35._4_4_;
  iStack_d0 = auVar35._8_4_;
  iStack_cc = auVar35._12_4_;
  local_38 = param_2;
  while( true ) {
    iStack_cc = iStack_cc + -0x3e640e8c;
    iStack_d0 = iStack_d0 + -0x6423f959;
    iStack_d4 = iStack_d4 + -0x7f214e02;
    local_d8 = local_d8 + 0x72be5d74;
    iStack_dc = iStack_dc + 0x550c7dc3;
    iStack_e0 = iStack_e0 + 0x243185be;
    iStack_e4 = iStack_e4 + 0x12835b01;
    local_e8 = local_e8 + -0x27f85568;
    iStack_ec = iStack_ec + -0x54e3a12b;
    iStack_f0 = iStack_f0 + -0x6dc07d5c;
    iStack_f4 = iStack_f4 + 0x59f111f1;
    local_f8 = local_f8 + 0x3956c25b;
    iStack_fc = iStack_fc + -0x164a245b;
    iStack_100 = iStack_100 + -0x4a3f0431;
    iStack_104 = iStack_104 + 0x71374491;
    local_108 = local_108 + 0x428a2f98;
    uVar10 = *param_1;
    uVar11 = param_1[1];
    uVar12 = param_1[2];
    uVar8 = param_1[4];
    uVar7 = param_1[5];
    uVar14 = param_1[6];
    uVar6 = (uVar8 >> 0xe | uVar8 << 0x12) ^ uVar8;
    uVar9 = (uVar10 >> 9 | uVar10 << 0x17) ^ uVar10;
    uVar6 = (uVar6 >> 5 | uVar6 << 0x1b) ^ uVar8;
    uVar15 = auVar20._4_4_;
    uVar22 = auVar20._8_4_;
    uVar23 = auVar20._12_4_;
    uVar24 = auVar25._0_4_;
    uVar9 = (uVar9 >> 0xb | uVar9 << 0x15) ^ uVar10;
    iVar17 = param_1[7] +
             ((uVar7 ^ uVar14) & uVar8 ^ uVar14) + (uVar6 >> 6 | uVar6 << 0x1a) + local_108;
    uVar13 = param_1[3] + iVar17;
    uVar18 = iVar17 + (uVar9 >> 2 | uVar9 << 0x1e) + ((uVar10 | uVar12) & uVar11 | uVar10 & uVar12);
    uVar6 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
    uVar9 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
    uVar6 = (uVar6 >> 5 | uVar6 << 0x1b) ^ uVar13;
    uVar31 = auVar30._4_4_;
    uVar32 = auVar30._8_4_;
    uVar33 = auVar30._12_4_;
    uVar34 = auVar35._0_4_;
    uVar9 = (uVar9 >> 0xb | uVar9 << 0x15) ^ uVar18;
    iVar17 = uVar14 + ((uVar8 ^ uVar7) & uVar13 ^ uVar7) + (uVar6 >> 6 | uVar6 << 0x1a) + iStack_104
    ;
    uVar37 = auVar35._8_4_;
    uVar14 = auVar35._12_4_;
    uVar12 = uVar12 + iVar17;
    uVar16 = iVar17 + (uVar9 >> 2 | uVar9 << 0x1e) + ((uVar18 | uVar11) & uVar10 | uVar18 & uVar11);
    uVar6 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar9 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
    uVar1 = CONCAT44(uVar14 >> 10,uVar37 >> 10) ^ CONCAT44(uVar14 >> 0x11,uVar37 >> 0x11) ^
            CONCAT44(uVar14 << 0xd,uVar37 << 0xd) ^ CONCAT44(uVar14 >> 0x13,uVar37 >> 0x13) ^
            CONCAT44(uVar14 << 0xf,uVar37 << 0xf);
    uVar6 = (uVar6 >> 5 | uVar6 << 0x1b) ^ uVar12;
    uVar19 = auVar20._0_4_ +
             (uVar15 >> 3 ^ uVar15 >> 7 ^ uVar15 << 0xe ^ uVar15 >> 0x12 ^ uVar15 << 0x19) + uVar31
             + (int)uVar1;
    uVar21 = uVar15 + (uVar22 >> 3 ^ uVar22 >> 7 ^ uVar22 << 0xe ^ uVar22 >> 0x12 ^ uVar22 << 0x19)
             + uVar32 + (int)(uVar1 >> 0x20);
    uVar9 = (uVar9 >> 0xb | uVar9 << 0x15) ^ uVar16;
    iVar17 = uVar7 + ((uVar13 ^ uVar8) & uVar12 ^ uVar8) + (uVar6 >> 6 | uVar6 << 0x1a) + iStack_100
    ;
    uVar11 = uVar11 + iVar17;
    uVar15 = iVar17 + (uVar9 >> 2 | uVar9 << 0x1e) + ((uVar16 | uVar10) & uVar18 | uVar16 & uVar10);
    uVar7 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
    uVar6 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
    uVar7 = (uVar7 >> 5 | uVar7 << 0x1b) ^ uVar11;
    uVar6 = (uVar6 >> 0xb | uVar6 << 0x15) ^ uVar15;
    iVar17 = uVar8 + ((uVar12 ^ uVar13) & uVar11 ^ uVar13) + (uVar7 >> 6 | uVar7 << 0x1a) +
                     iStack_fc;
    uVar22 = uVar22 + (uVar23 >> 3 ^ uVar23 >> 7 ^ uVar23 << 0xe ^ uVar23 >> 0x12 ^ uVar23 << 0x19)
             + uVar33 +
             (uVar19 >> 10 ^ uVar19 * 0x2000 ^ uVar19 >> 0x11 ^ uVar19 >> 0x13 ^ uVar19 * 0x8000);
    uVar23 = uVar23 + (uVar24 >> 3 ^ uVar24 >> 7 ^ uVar24 << 0xe ^ uVar24 >> 0x12 ^ uVar24 << 0x19)
             + uVar34 +
             (uVar21 >> 10 ^ uVar21 * 0x2000 ^ uVar21 >> 0x11 ^ uVar21 >> 0x13 ^ uVar21 * 0x8000);
    uVar10 = uVar10 + iVar17;
    uVar9 = iVar17 + (uVar6 >> 2 | uVar6 << 0x1e) + ((uVar15 | uVar18) & uVar16 | uVar15 & uVar18);
    uVar8 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
    uVar7 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar10;
    uVar26 = auVar25._4_4_;
    uVar27 = auVar25._8_4_;
    uVar28 = auVar25._12_4_;
    uVar29 = auVar30._0_4_;
    uVar7 = (uVar7 >> 0xb | uVar7 << 0x15) ^ uVar9;
    iVar17 = uVar13 + ((uVar11 ^ uVar12) & uVar10 ^ uVar12) + (uVar8 >> 6 | uVar8 << 0x1a) +
                      local_f8;
    uVar18 = uVar18 + iVar17;
    uVar6 = iVar17 + (uVar7 >> 2 | uVar7 << 0x1e) + ((uVar9 | uVar16) & uVar15 | uVar9 & uVar16);
    uVar8 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
    uVar7 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar18;
    uVar36 = auVar35._4_4_;
    uVar7 = (uVar7 >> 0xb | uVar7 << 0x15) ^ uVar6;
    iVar17 = uVar12 + ((uVar10 ^ uVar11) & uVar18 ^ uVar11) + (uVar8 >> 6 | uVar8 << 0x1a) +
                      iStack_f4;
    uVar16 = uVar16 + iVar17;
    uVar7 = iVar17 + (uVar7 >> 2 | uVar7 << 0x1e) + ((uVar6 | uVar15) & uVar9 | uVar6 & uVar15);
    uVar12 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
    uVar8 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
    uVar1 = CONCAT44(uVar23 >> 10,uVar22 >> 10) ^ CONCAT44(uVar23 >> 0x11,uVar22 >> 0x11) ^
            CONCAT44(uVar23 * 0x2000,uVar22 * 0x2000) ^ CONCAT44(uVar23 >> 0x13,uVar22 >> 0x13) ^
            CONCAT44(uVar23 * 0x8000,uVar22 * 0x8000);
    uVar12 = (uVar12 >> 5 | uVar12 << 0x1b) ^ uVar16;
    uVar24 = uVar24 + (uVar26 >> 3 ^ uVar26 >> 7 ^ uVar26 << 0xe ^ uVar26 >> 0x12 ^ uVar26 << 0x19)
             + uVar36 + (int)uVar1;
    uVar26 = uVar26 + (uVar27 >> 3 ^ uVar27 >> 7 ^ uVar27 << 0xe ^ uVar27 >> 0x12 ^ uVar27 << 0x19)
             + uVar37 + (int)(uVar1 >> 0x20);
    uVar8 = (uVar8 >> 0xb | uVar8 << 0x15) ^ uVar7;
    iVar17 = uVar11 + ((uVar18 ^ uVar10) & uVar16 ^ uVar10) + (uVar12 >> 6 | uVar12 << 0x1a) +
                      iStack_f0;
    uVar15 = uVar15 + iVar17;
    uVar8 = iVar17 + (uVar8 >> 2 | uVar8 << 0x1e) + ((uVar7 | uVar9) & uVar6 | uVar7 & uVar9);
    uVar11 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
    uVar12 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar15;
    uVar12 = (uVar12 >> 0xb | uVar12 << 0x15) ^ uVar8;
    iVar17 = uVar10 + ((uVar16 ^ uVar18) & uVar15 ^ uVar18) + (uVar11 >> 6 | uVar11 << 0x1a) +
                      iStack_ec;
    uVar27 = uVar27 + (uVar28 >> 3 ^ uVar28 >> 7 ^ uVar28 << 0xe ^ uVar28 >> 0x12 ^ uVar28 << 0x19)
             + uVar14 +
             (uVar24 >> 10 ^ uVar24 * 0x2000 ^ uVar24 >> 0x11 ^ uVar24 >> 0x13 ^ uVar24 * 0x8000);
    uVar28 = uVar28 + (uVar29 >> 3 ^ uVar29 >> 7 ^ uVar29 << 0xe ^ uVar29 >> 0x12 ^ uVar29 << 0x19)
             + uVar19 +
             (uVar26 >> 10 ^ uVar26 * 0x2000 ^ uVar26 >> 0x11 ^ uVar26 >> 0x13 ^ uVar26 * 0x8000);
    uVar9 = uVar9 + iVar17;
    uVar12 = iVar17 + (uVar12 >> 2 | uVar12 << 0x1e) + ((uVar8 | uVar6) & uVar7 | uVar8 & uVar6);
    uVar10 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
    uVar11 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar9;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar12;
    iVar17 = uVar18 + ((uVar15 ^ uVar16) & uVar9 ^ uVar16) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      local_e8;
    uVar6 = uVar6 + iVar17;
    uVar18 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar12 | uVar7) & uVar8 | uVar12 & uVar7);
    uVar10 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar11 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar6;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar18;
    iVar17 = uVar16 + ((uVar9 ^ uVar15) & uVar6 ^ uVar15) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      iStack_e4;
    uVar7 = uVar7 + iVar17;
    uVar16 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar18 | uVar8) & uVar12 | uVar18 & uVar8);
    uVar10 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
    uVar11 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
    uVar1 = CONCAT44(uVar28 >> 10,uVar27 >> 10) ^ CONCAT44(uVar28 >> 0x11,uVar27 >> 0x11) ^
            CONCAT44(uVar28 * 0x2000,uVar27 * 0x2000) ^ CONCAT44(uVar28 >> 0x13,uVar27 >> 0x13) ^
            CONCAT44(uVar28 * 0x8000,uVar27 * 0x8000);
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar7;
    uVar29 = uVar29 + (uVar31 >> 3 ^ uVar31 >> 7 ^ uVar31 << 0xe ^ uVar31 >> 0x12 ^ uVar31 << 0x19)
             + uVar21 + (int)uVar1;
    uVar31 = uVar31 + (uVar32 >> 3 ^ uVar32 >> 7 ^ uVar32 << 0xe ^ uVar32 >> 0x12 ^ uVar32 << 0x19)
             + uVar22 + (int)(uVar1 >> 0x20);
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar16;
    iVar17 = uVar15 + ((uVar6 ^ uVar9) & uVar7 ^ uVar9) + (uVar10 >> 6 | uVar10 << 0x1a) + iStack_e0
    ;
    uVar8 = uVar8 + iVar17;
    uVar13 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) +
             ((uVar16 | uVar12) & uVar18 | uVar16 & uVar12);
    uVar10 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
    uVar11 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar8;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar13;
    iVar17 = uVar9 + ((uVar7 ^ uVar6) & uVar8 ^ uVar6) + (uVar10 >> 6 | uVar10 << 0x1a) + iStack_dc;
    uVar32 = uVar32 + (uVar33 >> 3 ^ uVar33 >> 7 ^ uVar33 << 0xe ^ uVar33 >> 0x12 ^ uVar33 << 0x19)
             + uVar23 +
             (uVar29 >> 10 ^ uVar29 * 0x2000 ^ uVar29 >> 0x11 ^ uVar29 >> 0x13 ^ uVar29 * 0x8000);
    uVar33 = uVar33 + (uVar34 >> 3 ^ uVar34 >> 7 ^ uVar34 << 0xe ^ uVar34 >> 0x12 ^ uVar34 << 0x19)
             + uVar24 +
             (uVar31 >> 10 ^ uVar31 * 0x2000 ^ uVar31 >> 0x11 ^ uVar31 >> 0x13 ^ uVar31 * 0x8000);
    uVar12 = uVar12 + iVar17;
    uVar9 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar13 | uVar18) & uVar16 | uVar13 & uVar18)
    ;
    uVar10 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar11 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar12;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar9;
    iVar17 = uVar6 + ((uVar8 ^ uVar7) & uVar12 ^ uVar7) + (uVar10 >> 6 | uVar10 << 0x1a) + local_d8;
    uVar18 = uVar18 + iVar17;
    uVar6 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar9 | uVar16) & uVar13 | uVar9 & uVar16);
    uVar10 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
    uVar11 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar18;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar6;
    iVar17 = uVar7 + ((uVar12 ^ uVar8) & uVar18 ^ uVar8) + (uVar10 >> 6 | uVar10 << 0x1a) +
                     iStack_d4;
    uVar16 = uVar16 + iVar17;
    uVar7 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar6 | uVar13) & uVar9 | uVar6 & uVar13);
    uVar10 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
    uVar11 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
    uVar1 = CONCAT44(uVar33 >> 10,uVar32 >> 10) ^ CONCAT44(uVar33 >> 0x11,uVar32 >> 0x11) ^
            CONCAT44(uVar33 * 0x2000,uVar32 * 0x2000) ^ CONCAT44(uVar33 >> 0x13,uVar32 >> 0x13) ^
            CONCAT44(uVar33 * 0x8000,uVar32 * 0x8000);
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar16;
    uVar34 = uVar34 + (uVar36 >> 3 ^ uVar36 >> 7 ^ uVar36 << 0xe ^ uVar36 >> 0x12 ^ uVar36 << 0x19)
             + uVar26 + (int)uVar1;
    uVar36 = uVar36 + (uVar37 >> 3 ^ uVar37 >> 7 ^ uVar37 << 0xe ^ uVar37 >> 0x12 ^ uVar37 << 0x19)
             + uVar27 + (int)(uVar1 >> 0x20);
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar7;
    iVar17 = uVar8 + ((uVar18 ^ uVar12) & uVar16 ^ uVar12) + (uVar10 >> 6 | uVar10 << 0x1a) +
                     iStack_d0;
    uVar13 = uVar13 + iVar17;
    uVar8 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar7 | uVar9) & uVar6 | uVar7 & uVar9);
    uVar10 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
    uVar11 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar13;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar8;
    iVar17 = uVar12 + ((uVar16 ^ uVar18) & uVar13 ^ uVar18) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      iStack_cc;
    uVar37 = uVar37 + (uVar14 >> 3 ^ uVar14 >> 7 ^ uVar14 << 0xe ^ uVar14 >> 0x12 ^ uVar14 << 0x19)
             + uVar28 +
             (uVar34 >> 10 ^ uVar34 * 0x2000 ^ uVar34 >> 0x11 ^ uVar34 >> 0x13 ^ uVar34 * 0x8000);
    uVar38 = uVar14 + (uVar19 >> 3 ^ uVar19 >> 7 ^ uVar19 * 0x4000 ^ uVar19 >> 0x12 ^
                      uVar19 * 0x2000000) + uVar29 +
             (uVar36 >> 10 ^ uVar36 * 0x2000 ^ uVar36 >> 0x11 ^ uVar36 >> 0x13 ^ uVar36 * 0x8000);
    uVar9 = uVar9 + iVar17;
    uVar12 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar8 | uVar6) & uVar7 | uVar8 & uVar6);
    uVar10 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
    uVar11 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar9;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar12;
    iVar17 = uVar18 + ((uVar13 ^ uVar16) & uVar9 ^ uVar16) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar19 + 0xe49b69c1;
    uVar6 = uVar6 + iVar17;
    uVar18 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar12 | uVar7) & uVar8 | uVar12 & uVar7);
    uVar10 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar11 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar6;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar18;
    iVar17 = uVar16 + ((uVar9 ^ uVar13) & uVar6 ^ uVar13) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar21 + 0xefbe4786;
    uVar7 = uVar7 + iVar17;
    uVar15 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar18 | uVar8) & uVar12 | uVar18 & uVar8);
    uVar10 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
    uVar11 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
    uVar1 = CONCAT44(uVar38 >> 10,uVar37 >> 10) ^ CONCAT44(uVar38 >> 0x11,uVar37 >> 0x11) ^
            CONCAT44(uVar38 * 0x2000,uVar37 * 0x2000) ^ CONCAT44(uVar38 >> 0x13,uVar37 >> 0x13) ^
            CONCAT44(uVar38 * 0x8000,uVar37 * 0x8000);
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar7;
    uVar19 = uVar19 + (uVar21 >> 3 ^ uVar21 >> 7 ^ uVar21 * 0x4000 ^ uVar21 >> 0x12 ^
                      uVar21 * 0x2000000) + uVar31 + (int)uVar1;
    uVar21 = uVar21 + (uVar22 >> 3 ^ uVar22 >> 7 ^ uVar22 * 0x4000 ^ uVar22 >> 0x12 ^
                      uVar22 * 0x2000000) + uVar32 + (int)(uVar1 >> 0x20);
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar15;
    iVar17 = uVar13 + ((uVar6 ^ uVar9) & uVar7 ^ uVar9) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar22 + 0xfc19dc6;
    uVar8 = uVar8 + iVar17;
    uVar13 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) +
             ((uVar15 | uVar12) & uVar18 | uVar15 & uVar12);
    uVar10 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
    uVar11 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar8;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar13;
    iVar17 = uVar9 + ((uVar7 ^ uVar6) & uVar8 ^ uVar6) + (uVar10 >> 6 | uVar10 << 0x1a) +
                     uVar23 + 0x240ca1cc;
    uVar22 = uVar22 + (uVar23 >> 3 ^ uVar23 >> 7 ^ uVar23 * 0x4000 ^ uVar23 >> 0x12 ^
                      uVar23 * 0x2000000) + uVar33 +
             (uVar19 >> 10 ^ uVar19 * 0x2000 ^ uVar19 >> 0x11 ^ uVar19 >> 0x13 ^ uVar19 * 0x8000);
    uVar23 = uVar23 + (uVar24 >> 3 ^ uVar24 >> 7 ^ uVar24 * 0x4000 ^ uVar24 >> 0x12 ^
                      uVar24 * 0x2000000) + uVar34 +
             (uVar21 >> 10 ^ uVar21 * 0x2000 ^ uVar21 >> 0x11 ^ uVar21 >> 0x13 ^ uVar21 * 0x8000);
    uVar12 = uVar12 + iVar17;
    uVar9 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar13 | uVar18) & uVar15 | uVar13 & uVar18)
    ;
    uVar10 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar11 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar12;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar9;
    iVar17 = uVar6 + ((uVar8 ^ uVar7) & uVar12 ^ uVar7) + (uVar10 >> 6 | uVar10 << 0x1a) +
                     uVar24 + 0x2de92c6f;
    uVar18 = uVar18 + iVar17;
    uVar14 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar9 | uVar15) & uVar13 | uVar9 & uVar15);
    uVar10 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
    uVar11 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar18;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar14;
    iVar17 = uVar7 + ((uVar12 ^ uVar8) & uVar18 ^ uVar8) + (uVar10 >> 6 | uVar10 << 0x1a) +
                     uVar26 + 0x4a7484aa;
    uVar15 = uVar15 + iVar17;
    uVar7 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar14 | uVar13) & uVar9 | uVar14 & uVar13);
    uVar10 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
    uVar11 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
    uVar1 = CONCAT44(uVar23 >> 10,uVar22 >> 10) ^ CONCAT44(uVar23 >> 0x11,uVar22 >> 0x11) ^
            CONCAT44(uVar23 * 0x2000,uVar22 * 0x2000) ^ CONCAT44(uVar23 >> 0x13,uVar22 >> 0x13) ^
            CONCAT44(uVar23 * 0x8000,uVar22 * 0x8000);
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar15;
    uVar24 = uVar24 + (uVar26 >> 3 ^ uVar26 >> 7 ^ uVar26 * 0x4000 ^ uVar26 >> 0x12 ^
                      uVar26 * 0x2000000) + uVar36 + (int)uVar1;
    uVar26 = uVar26 + (uVar27 >> 3 ^ uVar27 >> 7 ^ uVar27 * 0x4000 ^ uVar27 >> 0x12 ^
                      uVar27 * 0x2000000) + uVar37 + (int)(uVar1 >> 0x20);
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar7;
    iVar17 = uVar8 + ((uVar18 ^ uVar12) & uVar15 ^ uVar12) + (uVar10 >> 6 | uVar10 << 0x1a) +
                     uVar27 + 0x5cb0a9dc;
    uVar13 = uVar13 + iVar17;
    uVar8 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar7 | uVar9) & uVar14 | uVar7 & uVar9);
    uVar10 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
    uVar11 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar13;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar8;
    iVar17 = uVar12 + ((uVar15 ^ uVar18) & uVar13 ^ uVar18) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar28 + 0x76f988da;
    uVar27 = uVar27 + (uVar28 >> 3 ^ uVar28 >> 7 ^ uVar28 * 0x4000 ^ uVar28 >> 0x12 ^
                      uVar28 * 0x2000000) + uVar38 +
             (uVar24 >> 10 ^ uVar24 * 0x2000 ^ uVar24 >> 0x11 ^ uVar24 >> 0x13 ^ uVar24 * 0x8000);
    uVar28 = uVar28 + (uVar29 >> 3 ^ uVar29 >> 7 ^ uVar29 * 0x4000 ^ uVar29 >> 0x12 ^
                      uVar29 * 0x2000000) + uVar19 +
             (uVar26 >> 10 ^ uVar26 * 0x2000 ^ uVar26 >> 0x11 ^ uVar26 >> 0x13 ^ uVar26 * 0x8000);
    uVar9 = uVar9 + iVar17;
    uVar12 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar8 | uVar14) & uVar7 | uVar8 & uVar14);
    uVar10 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
    uVar11 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar9;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar12;
    iVar17 = uVar18 + ((uVar13 ^ uVar15) & uVar9 ^ uVar15) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar29 + 0x983e5152;
    uVar14 = uVar14 + iVar17;
    uVar16 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar12 | uVar7) & uVar8 | uVar12 & uVar7);
    uVar10 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
    uVar11 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar14;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar16;
    iVar17 = uVar15 + ((uVar9 ^ uVar13) & uVar14 ^ uVar13) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar31 + 0xa831c66d;
    uVar7 = uVar7 + iVar17;
    uVar15 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar16 | uVar8) & uVar12 | uVar16 & uVar8);
    uVar10 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
    uVar11 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
    uVar1 = CONCAT44(uVar28 >> 10,uVar27 >> 10) ^ CONCAT44(uVar28 >> 0x11,uVar27 >> 0x11) ^
            CONCAT44(uVar28 * 0x2000,uVar27 * 0x2000) ^ CONCAT44(uVar28 >> 0x13,uVar27 >> 0x13) ^
            CONCAT44(uVar28 * 0x8000,uVar27 * 0x8000);
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar7;
    uVar29 = uVar29 + (uVar31 >> 3 ^ uVar31 >> 7 ^ uVar31 * 0x4000 ^ uVar31 >> 0x12 ^
                      uVar31 * 0x2000000) + uVar21 + (int)uVar1;
    uVar31 = uVar31 + (uVar32 >> 3 ^ uVar32 >> 7 ^ uVar32 * 0x4000 ^ uVar32 >> 0x12 ^
                      uVar32 * 0x2000000) + uVar22 + (int)(uVar1 >> 0x20);
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar15;
    iVar17 = uVar13 + ((uVar14 ^ uVar9) & uVar7 ^ uVar9) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar32 + 0xb00327c8;
    uVar8 = uVar8 + iVar17;
    uVar13 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) +
             ((uVar15 | uVar12) & uVar16 | uVar15 & uVar12);
    uVar10 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
    uVar11 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar8;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar13;
    iVar17 = uVar9 + ((uVar7 ^ uVar14) & uVar8 ^ uVar14) + (uVar10 >> 6 | uVar10 << 0x1a) +
                     uVar33 + 0xbf597fc7;
    uVar32 = uVar32 + (uVar33 >> 3 ^ uVar33 >> 7 ^ uVar33 * 0x4000 ^ uVar33 >> 0x12 ^
                      uVar33 * 0x2000000) + uVar23 +
             (uVar29 >> 10 ^ uVar29 * 0x2000 ^ uVar29 >> 0x11 ^ uVar29 >> 0x13 ^ uVar29 * 0x8000);
    uVar33 = uVar33 + (uVar34 >> 3 ^ uVar34 >> 7 ^ uVar34 * 0x4000 ^ uVar34 >> 0x12 ^
                      uVar34 * 0x2000000) + uVar24 +
             (uVar31 >> 10 ^ uVar31 * 0x2000 ^ uVar31 >> 0x11 ^ uVar31 >> 0x13 ^ uVar31 * 0x8000);
    uVar12 = uVar12 + iVar17;
    uVar6 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar13 | uVar16) & uVar15 | uVar13 & uVar16)
    ;
    uVar10 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar11 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar12;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar6;
    iVar17 = uVar14 + ((uVar8 ^ uVar7) & uVar12 ^ uVar7) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar34 + 0xc6e00bf3;
    uVar16 = uVar16 + iVar17;
    uVar14 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar6 | uVar15) & uVar13 | uVar6 & uVar15);
    uVar10 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
    uVar11 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar16;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar14;
    iVar17 = uVar7 + ((uVar12 ^ uVar8) & uVar16 ^ uVar8) + (uVar10 >> 6 | uVar10 << 0x1a) +
                     uVar36 + 0xd5a79147;
    uVar15 = uVar15 + iVar17;
    uVar7 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar14 | uVar13) & uVar6 | uVar14 & uVar13);
    uVar10 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
    uVar11 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
    uVar1 = CONCAT44(uVar33 >> 10,uVar32 >> 10) ^ CONCAT44(uVar33 >> 0x11,uVar32 >> 0x11) ^
            CONCAT44(uVar33 * 0x2000,uVar32 * 0x2000) ^ CONCAT44(uVar33 >> 0x13,uVar32 >> 0x13) ^
            CONCAT44(uVar33 * 0x8000,uVar32 * 0x8000);
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar15;
    uVar34 = uVar34 + (uVar36 >> 3 ^ uVar36 >> 7 ^ uVar36 * 0x4000 ^ uVar36 >> 0x12 ^
                      uVar36 * 0x2000000) + uVar26 + (int)uVar1;
    uVar36 = uVar36 + (uVar37 >> 3 ^ uVar37 >> 7 ^ uVar37 * 0x4000 ^ uVar37 >> 0x12 ^
                      uVar37 * 0x2000000) + uVar27 + (int)(uVar1 >> 0x20);
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar7;
    iVar17 = uVar8 + ((uVar16 ^ uVar12) & uVar15 ^ uVar12) + (uVar10 >> 6 | uVar10 << 0x1a) +
                     uVar37 + 0x6ca6351;
    uVar13 = uVar13 + iVar17;
    uVar8 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar7 | uVar6) & uVar14 | uVar7 & uVar6);
    uVar10 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
    uVar11 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar13;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar8;
    iVar17 = uVar12 + ((uVar15 ^ uVar16) & uVar13 ^ uVar16) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar38 + 0x14292967;
    uVar37 = uVar37 + (uVar38 >> 3 ^ uVar38 >> 7 ^ uVar38 * 0x4000 ^ uVar38 >> 0x12 ^
                      uVar38 * 0x2000000) + uVar28 +
             (uVar34 >> 10 ^ uVar34 * 0x2000 ^ uVar34 >> 0x11 ^ uVar34 >> 0x13 ^ uVar34 * 0x8000);
    uVar38 = uVar38 + (uVar19 >> 3 ^ uVar19 >> 7 ^ uVar19 * 0x4000 ^ uVar19 >> 0x12 ^
                      uVar19 * 0x2000000) + uVar29 +
             (uVar36 >> 10 ^ uVar36 * 0x2000 ^ uVar36 >> 0x11 ^ uVar36 >> 0x13 ^ uVar36 * 0x8000);
    uVar6 = uVar6 + iVar17;
    uVar12 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar8 | uVar14) & uVar7 | uVar8 & uVar14);
    uVar10 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar11 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar6;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar12;
    iVar17 = uVar16 + ((uVar13 ^ uVar15) & uVar6 ^ uVar15) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar19 + 0x27b70a85;
    uVar14 = uVar14 + iVar17;
    uVar16 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar12 | uVar7) & uVar8 | uVar12 & uVar7);
    uVar10 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
    uVar11 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar14;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar16;
    iVar17 = uVar15 + ((uVar6 ^ uVar13) & uVar14 ^ uVar13) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar21 + 0x2e1b2138;
    uVar7 = uVar7 + iVar17;
    uVar15 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar16 | uVar8) & uVar12 | uVar16 & uVar8);
    uVar10 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
    uVar11 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
    uVar1 = CONCAT44(uVar38 >> 10,uVar37 >> 10) ^ CONCAT44(uVar38 >> 0x11,uVar37 >> 0x11) ^
            CONCAT44(uVar38 * 0x2000,uVar37 * 0x2000) ^ CONCAT44(uVar38 >> 0x13,uVar37 >> 0x13) ^
            CONCAT44(uVar38 * 0x8000,uVar37 * 0x8000);
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar7;
    uVar18 = uVar19 + (uVar21 >> 3 ^ uVar21 >> 7 ^ uVar21 * 0x4000 ^ uVar21 >> 0x12 ^
                      uVar21 * 0x2000000) + uVar31 + (int)uVar1;
    uVar19 = uVar21 + (uVar22 >> 3 ^ uVar22 >> 7 ^ uVar22 * 0x4000 ^ uVar22 >> 0x12 ^
                      uVar22 * 0x2000000) + uVar32 + (int)(uVar1 >> 0x20);
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar15;
    iVar17 = uVar13 + ((uVar14 ^ uVar6) & uVar7 ^ uVar6) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar22 + 0x4d2c6dfc;
    uVar8 = uVar8 + iVar17;
    uVar9 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar15 | uVar12) & uVar16 | uVar15 & uVar12)
    ;
    uVar10 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
    uVar11 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar8;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar9;
    iVar17 = uVar6 + ((uVar7 ^ uVar14) & uVar8 ^ uVar14) + (uVar10 >> 6 | uVar10 << 0x1a) +
                     uVar23 + 0x53380d13;
    uVar21 = uVar22 + (uVar23 >> 3 ^ uVar23 >> 7 ^ uVar23 * 0x4000 ^ uVar23 >> 0x12 ^
                      uVar23 * 0x2000000) + uVar33 +
             (uVar18 >> 10 ^ uVar18 * 0x2000 ^ uVar18 >> 0x11 ^ uVar18 >> 0x13 ^ uVar18 * 0x8000);
    uVar22 = uVar23 + (uVar24 >> 3 ^ uVar24 >> 7 ^ uVar24 * 0x4000 ^ uVar24 >> 0x12 ^
                      uVar24 * 0x2000000) + uVar34 +
             (uVar19 >> 10 ^ uVar19 * 0x2000 ^ uVar19 >> 0x11 ^ uVar19 >> 0x13 ^ uVar19 * 0x8000);
    uVar12 = uVar12 + iVar17;
    uVar6 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar9 | uVar16) & uVar15 | uVar9 & uVar16);
    uVar10 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar11 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar12;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar6;
    iVar17 = uVar14 + ((uVar8 ^ uVar7) & uVar12 ^ uVar7) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar24 + 0x650a7354;
    uVar16 = uVar16 + iVar17;
    uVar14 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar6 | uVar15) & uVar9 | uVar6 & uVar15);
    uVar10 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
    uVar11 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar16;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar14;
    iVar17 = uVar7 + ((uVar12 ^ uVar8) & uVar16 ^ uVar8) + (uVar10 >> 6 | uVar10 << 0x1a) +
                     uVar26 + 0x766a0abb;
    uVar15 = uVar15 + iVar17;
    uVar7 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar14 | uVar9) & uVar6 | uVar14 & uVar9);
    uVar10 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
    uVar11 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
    uVar1 = CONCAT44(uVar22 >> 10,uVar21 >> 10) ^ CONCAT44(uVar22 >> 0x11,uVar21 >> 0x11) ^
            CONCAT44(uVar22 * 0x2000,uVar21 * 0x2000) ^ CONCAT44(uVar22 >> 0x13,uVar21 >> 0x13) ^
            CONCAT44(uVar22 * 0x8000,uVar21 * 0x8000);
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar15;
    uVar23 = uVar24 + (uVar26 >> 3 ^ uVar26 >> 7 ^ uVar26 * 0x4000 ^ uVar26 >> 0x12 ^
                      uVar26 * 0x2000000) + uVar36 + (int)uVar1;
    uVar24 = uVar26 + (uVar27 >> 3 ^ uVar27 >> 7 ^ uVar27 * 0x4000 ^ uVar27 >> 0x12 ^
                      uVar27 * 0x2000000) + uVar37 + (int)(uVar1 >> 0x20);
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar7;
    iVar17 = uVar8 + ((uVar16 ^ uVar12) & uVar15 ^ uVar12) + (uVar10 >> 6 | uVar10 << 0x1a) +
                     uVar27 + 0x81c2c92e;
    uVar9 = uVar9 + iVar17;
    uVar8 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar7 | uVar6) & uVar14 | uVar7 & uVar6);
    uVar10 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
    uVar11 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar9;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar8;
    iVar17 = uVar12 + ((uVar15 ^ uVar16) & uVar9 ^ uVar16) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar28 + 0x92722c85;
    uVar26 = uVar27 + (uVar28 >> 3 ^ uVar28 >> 7 ^ uVar28 * 0x4000 ^ uVar28 >> 0x12 ^
                      uVar28 * 0x2000000) + uVar38 +
             (uVar23 >> 10 ^ uVar23 * 0x2000 ^ uVar23 >> 0x11 ^ uVar23 >> 0x13 ^ uVar23 * 0x8000);
    uVar27 = uVar28 + (uVar29 >> 3 ^ uVar29 >> 7 ^ uVar29 * 0x4000 ^ uVar29 >> 0x12 ^
                      uVar29 * 0x2000000) + uVar18 +
             (uVar24 >> 10 ^ uVar24 * 0x2000 ^ uVar24 >> 0x11 ^ uVar24 >> 0x13 ^ uVar24 * 0x8000);
    uVar6 = uVar6 + iVar17;
    uVar12 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar8 | uVar14) & uVar7 | uVar8 & uVar14);
    uVar10 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar11 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar6;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar12;
    iVar17 = uVar16 + ((uVar9 ^ uVar15) & uVar6 ^ uVar15) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar29 + 0xa2bfe8a1;
    uVar14 = uVar14 + iVar17;
    uVar16 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar12 | uVar7) & uVar8 | uVar12 & uVar7);
    uVar10 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
    uVar11 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar14;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar16;
    iVar17 = uVar15 + ((uVar6 ^ uVar9) & uVar14 ^ uVar9) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar31 + 0xa81a664b;
    uVar7 = uVar7 + iVar17;
    uVar13 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar16 | uVar8) & uVar12 | uVar16 & uVar8);
    uVar10 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
    uVar11 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
    uVar1 = CONCAT44(uVar27 >> 10,uVar26 >> 10) ^ CONCAT44(uVar27 >> 0x11,uVar26 >> 0x11) ^
            CONCAT44(uVar27 * 0x2000,uVar26 * 0x2000) ^ CONCAT44(uVar27 >> 0x13,uVar26 >> 0x13) ^
            CONCAT44(uVar27 * 0x8000,uVar26 * 0x8000);
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar7;
    uVar15 = uVar29 + (uVar31 >> 3 ^ uVar31 >> 7 ^ uVar31 * 0x4000 ^ uVar31 >> 0x12 ^
                      uVar31 * 0x2000000) + uVar19 + (int)uVar1;
    uVar28 = uVar31 + (uVar32 >> 3 ^ uVar32 >> 7 ^ uVar32 * 0x4000 ^ uVar32 >> 0x12 ^
                      uVar32 * 0x2000000) + uVar21 + (int)(uVar1 >> 0x20);
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar13;
    iVar17 = uVar9 + ((uVar14 ^ uVar6) & uVar7 ^ uVar6) + (uVar10 >> 6 | uVar10 << 0x1a) +
                     uVar32 + 0xc24b8b70;
    uVar8 = uVar8 + iVar17;
    uVar9 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar13 | uVar12) & uVar16 | uVar13 & uVar12)
    ;
    uVar10 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
    uVar11 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar8;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar9;
    iVar17 = uVar6 + ((uVar7 ^ uVar14) & uVar8 ^ uVar14) + (uVar10 >> 6 | uVar10 << 0x1a) +
                     uVar33 + 0xc76c51a3;
    uVar29 = uVar32 + (uVar33 >> 3 ^ uVar33 >> 7 ^ uVar33 * 0x4000 ^ uVar33 >> 0x12 ^
                      uVar33 * 0x2000000) + uVar22 +
             (uVar15 >> 10 ^ uVar15 * 0x2000 ^ uVar15 >> 0x11 ^ uVar15 >> 0x13 ^ uVar15 * 0x8000);
    uVar31 = uVar33 + (uVar34 >> 3 ^ uVar34 >> 7 ^ uVar34 * 0x4000 ^ uVar34 >> 0x12 ^
                      uVar34 * 0x2000000) + uVar23 +
             (uVar28 >> 10 ^ uVar28 * 0x2000 ^ uVar28 >> 0x11 ^ uVar28 >> 0x13 ^ uVar28 * 0x8000);
    uVar12 = uVar12 + iVar17;
    uVar6 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar9 | uVar16) & uVar13 | uVar9 & uVar16);
    uVar10 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar11 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar12;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar6;
    iVar17 = uVar14 + ((uVar8 ^ uVar7) & uVar12 ^ uVar7) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar34 + 0xd192e819;
    uVar16 = uVar16 + iVar17;
    uVar14 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar6 | uVar13) & uVar9 | uVar6 & uVar13);
    uVar10 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
    uVar11 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar16;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar14;
    iVar17 = uVar7 + ((uVar12 ^ uVar8) & uVar16 ^ uVar8) + (uVar10 >> 6 | uVar10 << 0x1a) +
                     uVar36 + 0xd6990624;
    uVar13 = uVar13 + iVar17;
    uVar7 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar14 | uVar9) & uVar6 | uVar14 & uVar9);
    uVar10 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
    uVar11 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
    uVar1 = CONCAT44(uVar31 >> 10,uVar29 >> 10) ^ CONCAT44(uVar31 >> 0x11,uVar29 >> 0x11) ^
            CONCAT44(uVar31 * 0x2000,uVar29 * 0x2000) ^ CONCAT44(uVar31 >> 0x13,uVar29 >> 0x13) ^
            CONCAT44(uVar31 * 0x8000,uVar29 * 0x8000);
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar13;
    uVar32 = uVar34 + (uVar36 >> 3 ^ uVar36 >> 7 ^ uVar36 * 0x4000 ^ uVar36 >> 0x12 ^
                      uVar36 * 0x2000000) + uVar24 + (int)uVar1;
    uVar33 = uVar36 + (uVar37 >> 3 ^ uVar37 >> 7 ^ uVar37 * 0x4000 ^ uVar37 >> 0x12 ^
                      uVar37 * 0x2000000) + uVar26 + (int)(uVar1 >> 0x20);
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar7;
    iVar17 = uVar8 + ((uVar16 ^ uVar12) & uVar13 ^ uVar12) + (uVar10 >> 6 | uVar10 << 0x1a) +
                     uVar37 + 0xf40e3585;
    uVar9 = uVar9 + iVar17;
    uVar8 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar7 | uVar6) & uVar14 | uVar7 & uVar6);
    uVar10 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
    uVar11 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar9;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar8;
    iVar17 = uVar12 + ((uVar13 ^ uVar16) & uVar9 ^ uVar16) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar38 + 0x106aa070;
    uVar6 = uVar6 + iVar17;
    iVar39 = uVar37 + (uVar38 >> 3 ^ uVar38 >> 7 ^ uVar38 * 0x4000 ^ uVar38 >> 0x12 ^
                      uVar38 * 0x2000000) + uVar27 +
             (uVar32 >> 10 ^ uVar32 * 0x2000 ^ uVar32 >> 0x11 ^ uVar32 >> 0x13 ^ uVar32 * 0x8000) +
             -0x41065c09;
    iVar40 = uVar38 + (uVar18 >> 3 ^ uVar18 >> 7 ^ uVar18 * 0x4000 ^ uVar18 >> 0x12 ^
                      uVar18 * 0x2000000) + uVar15 +
             (uVar33 >> 10 ^ uVar33 * 0x2000 ^ uVar33 >> 0x11 ^ uVar33 >> 0x13 ^ uVar33 * 0x8000) +
             -0x398e870e;
    uVar10 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar8 | uVar14) & uVar7 | uVar8 & uVar14);
    local_38 = local_38 + -1;
    if (local_38 == 0) break;
    uVar11 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar12 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar6;
    uVar12 = (uVar12 >> 0xb | uVar12 << 0x15) ^ uVar10;
    iVar17 = uVar16 + ((uVar9 ^ uVar13) & uVar6 ^ uVar13) + (uVar11 >> 6 | uVar11 << 0x1a) +
                      uVar18 + 0x19a4c116;
    uVar14 = uVar14 + iVar17;
    uVar16 = iVar17 + (uVar12 >> 2 | uVar12 << 0x1e) + ((uVar10 | uVar7) & uVar8 | uVar10 & uVar7);
    auVar2._8_8_ = 0xc0d0e0f08090a0b;
    auVar2._0_8_ = 0x405060700010203;
    auVar20 = pshufb(param_3[4],auVar2);
    uVar11 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
    uVar12 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar14;
    uVar12 = (uVar12 >> 0xb | uVar12 << 0x15) ^ uVar16;
    iVar17 = uVar13 + ((uVar6 ^ uVar9) & uVar14 ^ uVar9) + (uVar11 >> 6 | uVar11 << 0x1a) +
                      uVar19 + 0x1e376c08;
    uVar7 = uVar7 + iVar17;
    uVar13 = iVar17 + (uVar12 >> 2 | uVar12 << 0x1e) + ((uVar16 | uVar8) & uVar10 | uVar16 & uVar8);
    uVar11 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
    uVar12 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar7;
    uVar12 = (uVar12 >> 0xb | uVar12 << 0x15) ^ uVar13;
    iVar17 = uVar9 + ((uVar14 ^ uVar6) & uVar7 ^ uVar6) + (uVar11 >> 6 | uVar11 << 0x1a) +
                     uVar21 + 0x2748774c;
    uVar8 = uVar8 + iVar17;
    uVar9 = iVar17 + (uVar12 >> 2 | uVar12 << 0x1e) + ((uVar13 | uVar10) & uVar16 | uVar13 & uVar10)
    ;
    local_108 = auVar20._0_4_;
    iStack_104 = auVar20._4_4_;
    iStack_100 = auVar20._8_4_;
    iStack_fc = auVar20._12_4_;
    uVar11 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
    uVar12 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar8;
    uVar12 = (uVar12 >> 0xb | uVar12 << 0x15) ^ uVar9;
    iVar17 = uVar6 + ((uVar7 ^ uVar14) & uVar8 ^ uVar14) + (uVar11 >> 6 | uVar11 << 0x1a) +
                     uVar22 + 0x34b0bcb5;
    uVar10 = uVar10 + iVar17;
    uVar6 = iVar17 + (uVar12 >> 2 | uVar12 << 0x1e) + ((uVar9 | uVar16) & uVar13 | uVar9 & uVar16);
    uVar11 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
    uVar12 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar10;
    uVar12 = (uVar12 >> 0xb | uVar12 << 0x15) ^ uVar6;
    iVar17 = uVar14 + ((uVar8 ^ uVar7) & uVar10 ^ uVar7) + (uVar11 >> 6 | uVar11 << 0x1a) +
                      uVar23 + 0x391c0cb3;
    uVar16 = uVar16 + iVar17;
    uVar14 = iVar17 + (uVar12 >> 2 | uVar12 << 0x1e) + ((uVar6 | uVar13) & uVar9 | uVar6 & uVar13);
    auVar3._8_8_ = 0xc0d0e0f08090a0b;
    auVar3._0_8_ = 0x405060700010203;
    auVar25 = pshufb(param_3[5],auVar3);
    uVar11 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
    uVar12 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar16;
    uVar12 = (uVar12 >> 0xb | uVar12 << 0x15) ^ uVar14;
    iVar17 = uVar7 + ((uVar10 ^ uVar8) & uVar16 ^ uVar8) + (uVar11 >> 6 | uVar11 << 0x1a) +
                     uVar24 + 0x4ed8aa4a;
    uVar13 = uVar13 + iVar17;
    uVar7 = iVar17 + (uVar12 >> 2 | uVar12 << 0x1e) + ((uVar14 | uVar9) & uVar6 | uVar14 & uVar9);
    uVar11 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
    uVar12 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar13;
    uVar12 = (uVar12 >> 0xb | uVar12 << 0x15) ^ uVar7;
    iVar17 = uVar8 + ((uVar16 ^ uVar10) & uVar13 ^ uVar10) + (uVar11 >> 6 | uVar11 << 0x1a) +
                     uVar26 + 0x5b9cca4f;
    uVar9 = uVar9 + iVar17;
    uVar8 = iVar17 + (uVar12 >> 2 | uVar12 << 0x1e) + ((uVar7 | uVar6) & uVar14 | uVar7 & uVar6);
    local_f8 = auVar25._0_4_;
    iStack_f4 = auVar25._4_4_;
    iStack_f0 = auVar25._8_4_;
    iStack_ec = auVar25._12_4_;
    uVar11 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
    uVar12 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar9;
    uVar12 = (uVar12 >> 0xb | uVar12 << 0x15) ^ uVar8;
    iVar17 = uVar10 + ((uVar13 ^ uVar16) & uVar9 ^ uVar16) + (uVar11 >> 6 | uVar11 << 0x1a) +
                      uVar27 + 0x682e6ff3;
    uVar6 = uVar6 + iVar17;
    uVar12 = iVar17 + (uVar12 >> 2 | uVar12 << 0x1e) + ((uVar8 | uVar14) & uVar7 | uVar8 & uVar14);
    uVar10 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar11 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar6;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar12;
    iVar17 = uVar16 + ((uVar9 ^ uVar13) & uVar6 ^ uVar13) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar15 + 0x748f82ee;
    uVar14 = uVar14 + iVar17;
    uVar15 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar12 | uVar7) & uVar8 | uVar12 & uVar7);
    auVar4._8_8_ = 0xc0d0e0f08090a0b;
    auVar4._0_8_ = 0x405060700010203;
    auVar30 = pshufb(param_3[6],auVar4);
    uVar10 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
    uVar11 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar14;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar15;
    iVar17 = uVar13 + ((uVar6 ^ uVar9) & uVar14 ^ uVar9) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar28 + 0x78a5636f;
    uVar7 = uVar7 + iVar17;
    uVar13 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar15 | uVar8) & uVar12 | uVar15 & uVar8);
    uVar10 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
    uVar11 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar7;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar13;
    iVar17 = uVar9 + ((uVar14 ^ uVar6) & uVar7 ^ uVar6) + (uVar10 >> 6 | uVar10 << 0x1a) +
                     uVar29 + 0x84c87814;
    uVar8 = uVar8 + iVar17;
    uVar9 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar13 | uVar12) & uVar15 | uVar13 & uVar12)
    ;
    local_e8 = auVar30._0_4_;
    iStack_e4 = auVar30._4_4_;
    iStack_e0 = auVar30._8_4_;
    iStack_dc = auVar30._12_4_;
    uVar10 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
    uVar11 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar8;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar9;
    iVar17 = uVar6 + ((uVar7 ^ uVar14) & uVar8 ^ uVar14) + (uVar10 >> 6 | uVar10 << 0x1a) +
                     uVar31 + 0x8cc70208;
    uVar12 = uVar12 + iVar17;
    uVar6 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar9 | uVar15) & uVar13 | uVar9 & uVar15);
    uVar10 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar11 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar12;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar6;
    iVar17 = uVar14 + ((uVar8 ^ uVar7) & uVar12 ^ uVar7) + (uVar10 >> 6 | uVar10 << 0x1a) +
                      uVar32 + 0x90befffa;
    uVar15 = uVar15 + iVar17;
    uVar14 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar6 | uVar13) & uVar9 | uVar6 & uVar13);
    auVar5._8_8_ = 0xc0d0e0f08090a0b;
    auVar5._0_8_ = 0x405060700010203;
    auVar35 = pshufb(param_3[7],auVar5);
    uVar10 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
    uVar11 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar15;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar14;
    iVar17 = uVar7 + ((uVar12 ^ uVar8) & uVar15 ^ uVar8) + (uVar10 >> 6 | uVar10 << 0x1a) +
                     uVar33 + 0xa4506ceb;
    uVar13 = uVar13 + iVar17;
    uVar7 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar14 | uVar9) & uVar6 | uVar14 & uVar9);
    uVar10 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
    uVar11 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar13;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar7;
    iVar17 = uVar8 + ((uVar15 ^ uVar12) & uVar13 ^ uVar12) + (uVar10 >> 6 | uVar10 << 0x1a) + iVar39
    ;
    uVar9 = uVar9 + iVar17;
    uVar8 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar7 | uVar6) & uVar14 | uVar7 & uVar6);
    local_d8 = auVar35._0_4_;
    iStack_d4 = auVar35._4_4_;
    iStack_d0 = auVar35._8_4_;
    iStack_cc = auVar35._12_4_;
    uVar10 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
    uVar11 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar9;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar8;
    iVar17 = uVar12 + ((uVar13 ^ uVar15) & uVar9 ^ uVar15) + (uVar10 >> 6 | uVar10 << 0x1a) + iVar40
    ;
    *param_1 = *param_1 +
               iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar8 | uVar14) & uVar7 | uVar8 & uVar14)
    ;
    param_1[1] = param_1[1] + uVar8;
    param_1[2] = param_1[2] + uVar7;
    param_1[3] = param_1[3] + uVar14;
    param_1[4] = param_1[4] + uVar6 + iVar17;
    param_1[5] = param_1[5] + uVar9;
    param_1[6] = param_1[6] + uVar13;
    param_1[7] = param_1[7] + uVar15;
    param_3 = param_3 + 4;
  }
  uVar11 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
  uVar12 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
  uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar6;
  uVar12 = (uVar12 >> 0xb | uVar12 << 0x15) ^ uVar10;
  iVar17 = uVar16 + ((uVar9 ^ uVar13) & uVar6 ^ uVar13) + (uVar11 >> 6 | uVar11 << 0x1a) +
                    uVar18 + 0x19a4c116;
  uVar14 = uVar14 + iVar17;
  uVar16 = iVar17 + (uVar12 >> 2 | uVar12 << 0x1e) + ((uVar10 | uVar7) & uVar8 | uVar10 & uVar7);
  uVar11 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
  uVar12 = (uVar16 >> 9 | uVar16 * 0x800000) ^ uVar16;
  uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar14;
  uVar12 = (uVar12 >> 0xb | uVar12 << 0x15) ^ uVar16;
  iVar17 = uVar13 + ((uVar6 ^ uVar9) & uVar14 ^ uVar9) + (uVar11 >> 6 | uVar11 << 0x1a) +
                    uVar19 + 0x1e376c08;
  uVar7 = uVar7 + iVar17;
  uVar13 = iVar17 + (uVar12 >> 2 | uVar12 << 0x1e) + ((uVar16 | uVar8) & uVar10 | uVar16 & uVar8);
  uVar11 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
  uVar12 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
  uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar7;
  uVar12 = (uVar12 >> 0xb | uVar12 << 0x15) ^ uVar13;
  iVar17 = uVar9 + ((uVar14 ^ uVar6) & uVar7 ^ uVar6) + (uVar11 >> 6 | uVar11 << 0x1a) +
                   uVar21 + 0x2748774c;
  uVar8 = uVar8 + iVar17;
  uVar9 = iVar17 + (uVar12 >> 2 | uVar12 << 0x1e) + ((uVar13 | uVar10) & uVar16 | uVar13 & uVar10);
  uVar11 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
  uVar12 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
  uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar8;
  uVar12 = (uVar12 >> 0xb | uVar12 << 0x15) ^ uVar9;
  iVar17 = uVar6 + ((uVar7 ^ uVar14) & uVar8 ^ uVar14) + (uVar11 >> 6 | uVar11 << 0x1a) +
                   uVar22 + 0x34b0bcb5;
  uVar10 = uVar10 + iVar17;
  uVar6 = iVar17 + (uVar12 >> 2 | uVar12 << 0x1e) + ((uVar9 | uVar16) & uVar13 | uVar9 & uVar16);
  uVar11 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
  uVar12 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
  uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar10;
  uVar12 = (uVar12 >> 0xb | uVar12 << 0x15) ^ uVar6;
  iVar17 = uVar14 + ((uVar8 ^ uVar7) & uVar10 ^ uVar7) + (uVar11 >> 6 | uVar11 << 0x1a) +
                    uVar23 + 0x391c0cb3;
  uVar16 = uVar16 + iVar17;
  uVar14 = iVar17 + (uVar12 >> 2 | uVar12 << 0x1e) + ((uVar6 | uVar13) & uVar9 | uVar6 & uVar13);
  uVar11 = (uVar16 >> 0xe | uVar16 * 0x40000) ^ uVar16;
  uVar12 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
  uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar16;
  uVar12 = (uVar12 >> 0xb | uVar12 << 0x15) ^ uVar14;
  iVar17 = uVar7 + ((uVar10 ^ uVar8) & uVar16 ^ uVar8) + (uVar11 >> 6 | uVar11 << 0x1a) +
                   uVar24 + 0x4ed8aa4a;
  uVar13 = uVar13 + iVar17;
  uVar7 = iVar17 + (uVar12 >> 2 | uVar12 << 0x1e) + ((uVar14 | uVar9) & uVar6 | uVar14 & uVar9);
  uVar11 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
  uVar12 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
  uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar13;
  uVar12 = (uVar12 >> 0xb | uVar12 << 0x15) ^ uVar7;
  iVar17 = uVar8 + ((uVar16 ^ uVar10) & uVar13 ^ uVar10) + (uVar11 >> 6 | uVar11 << 0x1a) +
                   uVar26 + 0x5b9cca4f;
  uVar9 = uVar9 + iVar17;
  uVar8 = iVar17 + (uVar12 >> 2 | uVar12 << 0x1e) + ((uVar7 | uVar6) & uVar14 | uVar7 & uVar6);
  uVar11 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
  uVar12 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
  uVar11 = (uVar11 >> 5 | uVar11 << 0x1b) ^ uVar9;
  uVar12 = (uVar12 >> 0xb | uVar12 << 0x15) ^ uVar8;
  iVar17 = uVar10 + ((uVar13 ^ uVar16) & uVar9 ^ uVar16) + (uVar11 >> 6 | uVar11 << 0x1a) +
                    uVar27 + 0x682e6ff3;
  uVar6 = uVar6 + iVar17;
  uVar12 = iVar17 + (uVar12 >> 2 | uVar12 << 0x1e) + ((uVar8 | uVar14) & uVar7 | uVar8 & uVar14);
  uVar10 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
  uVar11 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
  uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar6;
  uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar12;
  iVar17 = uVar16 + ((uVar9 ^ uVar13) & uVar6 ^ uVar13) + (uVar10 >> 6 | uVar10 << 0x1a) +
                    uVar15 + 0x748f82ee;
  uVar14 = uVar14 + iVar17;
  uVar15 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar12 | uVar7) & uVar8 | uVar12 & uVar7);
  uVar10 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
  uVar11 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
  uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar14;
  uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar15;
  iVar17 = uVar13 + ((uVar6 ^ uVar9) & uVar14 ^ uVar9) + (uVar10 >> 6 | uVar10 << 0x1a) +
                    uVar28 + 0x78a5636f;
  uVar7 = uVar7 + iVar17;
  uVar13 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar15 | uVar8) & uVar12 | uVar15 & uVar8);
  uVar10 = (uVar7 >> 0xe | uVar7 * 0x40000) ^ uVar7;
  uVar11 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
  uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar7;
  uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar13;
  iVar17 = uVar9 + ((uVar14 ^ uVar6) & uVar7 ^ uVar6) + (uVar10 >> 6 | uVar10 << 0x1a) +
                   uVar29 + 0x84c87814;
  uVar8 = uVar8 + iVar17;
  uVar9 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar13 | uVar12) & uVar15 | uVar13 & uVar12);
  uVar10 = (uVar8 >> 0xe | uVar8 * 0x40000) ^ uVar8;
  uVar11 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
  uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar8;
  uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar9;
  iVar17 = uVar6 + ((uVar7 ^ uVar14) & uVar8 ^ uVar14) + (uVar10 >> 6 | uVar10 << 0x1a) +
                   uVar31 + 0x8cc70208;
  uVar12 = uVar12 + iVar17;
  uVar6 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar9 | uVar15) & uVar13 | uVar9 & uVar15);
  uVar10 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
  uVar11 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
  uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar12;
  uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar6;
  iVar17 = uVar14 + ((uVar8 ^ uVar7) & uVar12 ^ uVar7) + (uVar10 >> 6 | uVar10 << 0x1a) +
                    uVar32 + 0x90befffa;
  uVar15 = uVar15 + iVar17;
  uVar14 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar6 | uVar13) & uVar9 | uVar6 & uVar13);
  uVar10 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
  uVar11 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
  uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar15;
  uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar14;
  iVar17 = uVar7 + ((uVar12 ^ uVar8) & uVar15 ^ uVar8) + (uVar10 >> 6 | uVar10 << 0x1a) +
                   uVar33 + 0xa4506ceb;
  uVar13 = uVar13 + iVar17;
  uVar7 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar14 | uVar9) & uVar6 | uVar14 & uVar9);
  uVar10 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
  uVar11 = (uVar7 >> 9 | uVar7 * 0x800000) ^ uVar7;
  uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar13;
  uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar7;
  iVar17 = uVar8 + ((uVar15 ^ uVar12) & uVar13 ^ uVar12) + (uVar10 >> 6 | uVar10 << 0x1a) + iVar39;
  uVar9 = uVar9 + iVar17;
  uVar8 = iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar7 | uVar6) & uVar14 | uVar7 & uVar6);
  uVar10 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
  uVar11 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
  uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar9;
  uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar8;
  iVar17 = uVar12 + ((uVar13 ^ uVar15) & uVar9 ^ uVar15) + (uVar10 >> 6 | uVar10 << 0x1a) + iVar40;
  *param_1 = *param_1 +
             iVar17 + (uVar11 >> 2 | uVar11 << 0x1e) + ((uVar8 | uVar14) & uVar7 | uVar8 & uVar14);
  param_1[1] = param_1[1] + uVar8;
  param_1[2] = param_1[2] + uVar7;
  param_1[3] = param_1[3] + uVar14;
  param_1[4] = param_1[4] + uVar6 + iVar17;
  param_1[5] = param_1[5] + uVar9;
  param_1[6] = param_1[6] + uVar13;
  param_1[7] = param_1[7] + uVar15;
  return;
}

