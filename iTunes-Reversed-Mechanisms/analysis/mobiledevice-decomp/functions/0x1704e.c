// rea decompile_all
// name: _AccelerateCrypto_SHA512_compress_AVX2
// address: 0x1704e
// body: available
// range: 0x1704e-0x1a2b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _AccelerateCrypto_SHA512_compress_AVX2(ulong *param_1,long param_2,undefined1 (*param_3) [32])

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
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  ulong uVar39;
  long lVar40;
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  long local_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long local_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long local_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long local_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long local_38;
  
  auVar50 = vpshufb_avx2(*param_3,_DAT_002ad980);
  auVar42 = vpshufb_avx2(param_3[1],_DAT_002ad980);
  auVar43 = vpshufb_avx2(param_3[2],_DAT_002ad980);
  auVar44 = vpshufb_avx2(param_3[3],_DAT_002ad980);
  local_1c0 = auVar50._0_8_;
  lStack_1b8 = auVar50._8_8_;
  lStack_1b0 = auVar50._16_8_ + -0x4a3f043013b2c4d1;
  lStack_1a8 = auVar50._24_8_;
  local_1a0 = auVar42._0_8_;
  lStack_198 = auVar42._8_8_;
  lStack_190 = auVar42._16_8_ + DAT_002b2020._16_8_;
  lStack_188 = auVar42._24_8_;
  local_180 = auVar43._0_8_;
  lStack_178 = auVar43._8_8_;
  lStack_170 = auVar43._16_8_ + DAT_002b2040._16_8_;
  lStack_168 = auVar43._24_8_;
  local_160 = auVar44._0_8_;
  lStack_158 = auVar44._8_8_;
  lStack_150 = auVar44._16_8_ + DAT_002b2060._16_8_;
  lStack_148 = auVar44._24_8_;
  local_38 = param_2;
  while( true ) {
    lStack_148 = lStack_148 + -0x3e640e8b3096d96c;
    lStack_158 = lStack_158 + -0x7f214e01c4e9694f;
    local_160 = local_160 + 0x72be5d74f27b896f;
    lStack_168 = lStack_168 + 0x550c7dc3d5ffb4e2;
    lStack_178 = lStack_178 + 0x12835b0145706fbe;
    local_180 = local_180 + -0x27f855675cfcfdbe;
    lStack_188 = lStack_188 + -0x54e3a12a25927ee8;
    lStack_198 = lStack_198 + 0x59f111f1b605d019;
    local_1a0 = local_1a0 + 0x3956c25bf348b538;
    lStack_1a8 = lStack_1a8 + -0x164a245a7e762444;
    lStack_1b8 = lStack_1b8 + 0x7137449123ef65cd;
    local_1c0 = local_1c0 + 0x428a2f98d728ae22;
    uVar27 = *param_1;
    uVar29 = param_1[1];
    uVar33 = param_1[2];
    uVar26 = param_1[4];
    uVar25 = param_1[5];
    uVar24 = param_1[6];
    auVar41 = vpblendd_avx2(auVar50,auVar42,3);
    auVar49 = vpermq_avx2(auVar41,0x39);
    auVar41 = vperm2f128_avx(auVar44,(undefined1  [32])0x0,0x21);
    auVar46 = vpsrlq_avx2(auVar49,1);
    auVar48 = vpsllq_avx2(auVar49,0x38);
    auVar45 = vpsrlq_avx2(auVar49,7);
    auVar47 = vpsrlq_avx2(auVar46,7);
    auVar49 = vpsllq_avx2(auVar48,7);
    auVar49 = auVar45 ^ auVar46 ^ auVar48 ^ auVar47 ^ auVar49;
    auVar46 = vpsrlq_avx2(auVar41,0x13);
    auVar48 = vpsllq_avx2(auVar41,3);
    auVar41 = vpsrlq_avx2(auVar41,6);
    auVar47 = vpsrlq_avx2(auVar46,0x2a);
    auVar45 = vpsllq_avx2(auVar48,0x2a);
    auVar45 = auVar41 ^ auVar46 ^ auVar48 ^ auVar47 ^ auVar45;
    auVar41 = vpblendd_avx2(auVar43,auVar44,3);
    auVar46 = vpermq_avx2(auVar41,0x39);
    auVar41._0_8_ = auVar50._0_8_ + auVar49._0_8_ + auVar45._0_8_ + auVar46._0_8_;
    auVar41._8_8_ = auVar50._8_8_ + auVar49._8_8_ + auVar45._8_8_ + auVar46._8_8_;
    auVar41._16_8_ = auVar50._16_8_ + auVar49._16_8_ + auVar45._16_8_ + auVar46._16_8_;
    auVar41._24_8_ = auVar50._24_8_ + auVar49._24_8_ + auVar45._24_8_ + auVar46._24_8_;
    auVar50 = vperm2f128_avx(auVar41,(undefined1  [32])0x0,2);
    auVar45 = vpsrlq_avx2(auVar50,0x13);
    auVar47 = vpsllq_avx2(auVar50,3);
    auVar49 = vpsrlq_avx2(auVar50,6);
    auVar46 = vpsrlq_avx2(auVar45,0x2a);
    auVar50 = vpsllq_avx2(auVar47,0x2a);
    auVar50 = auVar49 ^ auVar45 ^ auVar47 ^ auVar46 ^ auVar50;
    auVar49._0_8_ = auVar41._0_8_ + auVar50._0_8_;
    auVar49._8_8_ = auVar41._8_8_ + auVar50._8_8_;
    auVar49._16_8_ = auVar41._16_8_ + auVar50._16_8_;
    auVar49._24_8_ = auVar41._24_8_ + auVar50._24_8_;
    uVar23 = uVar26 >> 0xe | uVar26 << 0x32;
    local_1c0 = param_1[7] + ((uVar24 ^ uVar25) & uVar26 ^ uVar24) +
                ((uVar26 >> 0x12 | uVar26 << 0x2e) ^ uVar23 ^
                (uVar23 >> 0x1b | (uVar26 >> 0xe) << 0x25)) + local_1c0;
    uVar35 = param_1[3] + local_1c0;
    uVar23 = uVar27 >> 0x1c | uVar27 << 0x24;
    uVar39 = local_1c0 +
             ((uVar27 >> 0x22 | uVar27 << 0x1e) ^ uVar23 ^
             (uVar23 >> 0xb | (uVar27 >> 0x1c) << 0x35)) +
             ((uVar29 ^ uVar33) & uVar27 ^ uVar33 & uVar29);
    uVar23 = uVar35 >> 0xe | uVar35 << 0x32;
    lStack_1b8 = uVar24 + ((uVar25 ^ uVar26) & uVar35 ^ uVar25) +
                 ((uVar35 >> 0x12 | uVar35 << 0x2e) ^ uVar23 ^
                 (uVar23 >> 0x1b | (uVar35 >> 0xe) << 0x25)) + lStack_1b8;
    uVar33 = uVar33 + lStack_1b8;
    uVar24 = uVar39 >> 0x1c | uVar39 << 0x24;
    uVar38 = lStack_1b8 +
             ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ uVar24 ^
             (uVar24 >> 0xb | (uVar39 >> 0x1c) << 0x35)) +
             ((uVar27 ^ uVar29) & uVar39 ^ uVar29 & uVar27);
    uVar24 = uVar33 >> 0xe | uVar33 << 0x32;
    lStack_1b0 = uVar25 + ((uVar26 ^ uVar35) & uVar33 ^ uVar26) +
                 ((uVar33 >> 0x12 | uVar33 << 0x2e) ^ uVar24 ^
                 (uVar24 >> 0x1b | (uVar33 >> 0xe) << 0x25)) + lStack_1b0;
    uVar29 = uVar29 + lStack_1b0;
    uVar25 = uVar38 >> 0x1c | uVar38 << 0x24;
    uVar23 = lStack_1b0 +
             ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ uVar25 ^
             (uVar25 >> 0xb | (uVar38 >> 0x1c) << 0x35)) +
             ((uVar39 ^ uVar27) & uVar38 ^ uVar27 & uVar39);
    uVar25 = uVar29 >> 0xe | uVar29 << 0x32;
    lStack_1a8 = uVar26 + ((uVar35 ^ uVar33) & uVar29 ^ uVar35) +
                 ((uVar29 >> 0x12 | uVar29 << 0x2e) ^ uVar25 ^
                 (uVar25 >> 0x1b | (uVar29 >> 0xe) << 0x25)) + lStack_1a8;
    uVar27 = uVar27 + lStack_1a8;
    uVar26 = uVar23 >> 0x1c | uVar23 << 0x24;
    uVar24 = lStack_1a8 +
             ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ uVar26 ^
             (uVar26 >> 0xb | (uVar23 >> 0x1c) << 0x35)) +
             ((uVar38 ^ uVar39) & uVar23 ^ uVar39 & uVar38);
    auVar50 = vpblendd_avx2(auVar42,auVar43,3);
    auVar41 = vpermq_avx2(auVar50,0x39);
    auVar50 = vperm2f128_avx(auVar49,(undefined1  [32])0x0,0x21);
    auVar46 = vpsrlq_avx2(auVar41,1);
    auVar48 = vpsllq_avx2(auVar41,0x38);
    auVar45 = vpsrlq_avx2(auVar41,7);
    auVar47 = vpsrlq_avx2(auVar46,7);
    auVar41 = vpsllq_avx2(auVar48,7);
    auVar41 = auVar45 ^ auVar46 ^ auVar48 ^ auVar47 ^ auVar41;
    auVar46 = vpsrlq_avx2(auVar50,0x13);
    auVar48 = vpsllq_avx2(auVar50,3);
    auVar45 = vpsrlq_avx2(auVar50,6);
    auVar47 = vpsrlq_avx2(auVar46,0x2a);
    auVar50 = vpsllq_avx2(auVar48,0x2a);
    auVar50 = auVar45 ^ auVar46 ^ auVar48 ^ auVar47 ^ auVar50;
    auVar45 = vpblendd_avx2(auVar44,auVar49,3);
    auVar46 = vpermq_avx2(auVar45,0x39);
    auVar45._0_8_ = auVar42._0_8_ + auVar41._0_8_ + auVar50._0_8_ + auVar46._0_8_;
    auVar45._8_8_ = auVar42._8_8_ + auVar41._8_8_ + auVar50._8_8_ + auVar46._8_8_;
    auVar45._16_8_ = auVar42._16_8_ + auVar41._16_8_ + auVar50._16_8_ + auVar46._16_8_;
    auVar45._24_8_ = auVar42._24_8_ + auVar41._24_8_ + auVar50._24_8_ + auVar46._24_8_;
    auVar50 = vperm2f128_avx(auVar45,(undefined1  [32])0x0,2);
    auVar41 = vpsrlq_avx2(auVar50,0x13);
    auVar47 = vpsllq_avx2(auVar50,3);
    auVar42 = vpsrlq_avx2(auVar50,6);
    auVar46 = vpsrlq_avx2(auVar41,0x2a);
    auVar50 = vpsllq_avx2(auVar47,0x2a);
    auVar50 = auVar42 ^ auVar41 ^ auVar47 ^ auVar46 ^ auVar50;
    auVar42._0_8_ = auVar45._0_8_ + auVar50._0_8_;
    auVar42._8_8_ = auVar45._8_8_ + auVar50._8_8_;
    auVar42._16_8_ = auVar45._16_8_ + auVar50._16_8_;
    auVar42._24_8_ = auVar45._24_8_ + auVar50._24_8_;
    uVar26 = uVar27 >> 0xe | uVar27 << 0x32;
    local_1a0 = uVar35 + ((uVar33 ^ uVar29) & uVar27 ^ uVar33) +
                ((uVar27 >> 0x12 | uVar27 << 0x2e) ^ uVar26 ^
                (uVar26 >> 0x1b | (uVar27 >> 0xe) << 0x25)) + local_1a0;
    uVar39 = uVar39 + local_1a0;
    uVar26 = uVar24 >> 0x1c | uVar24 << 0x24;
    uVar25 = local_1a0 +
             ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ uVar26 ^
             (uVar26 >> 0xb | (uVar24 >> 0x1c) << 0x35)) +
             ((uVar23 ^ uVar38) & uVar24 ^ uVar38 & uVar23);
    uVar26 = uVar39 >> 0xe | uVar39 << 0x32;
    lStack_198 = uVar33 + ((uVar29 ^ uVar27) & uVar39 ^ uVar29) +
                 ((uVar39 >> 0x12 | uVar39 << 0x2e) ^ uVar26 ^
                 (uVar26 >> 0x1b | (uVar39 >> 0xe) << 0x25)) + lStack_198;
    uVar38 = uVar38 + lStack_198;
    uVar33 = uVar25 >> 0x1c | uVar25 << 0x24;
    uVar26 = lStack_198 +
             ((uVar25 >> 0x22 | uVar25 * 0x40000000) ^ uVar33 ^
             (uVar33 >> 0xb | (uVar25 >> 0x1c) << 0x35)) +
             ((uVar24 ^ uVar23) & uVar25 ^ uVar23 & uVar24);
    uVar33 = uVar38 >> 0xe | uVar38 << 0x32;
    lStack_190 = uVar29 + ((uVar27 ^ uVar39) & uVar38 ^ uVar27) +
                 ((uVar38 >> 0x12 | uVar38 << 0x2e) ^ uVar33 ^
                 (uVar33 >> 0x1b | (uVar38 >> 0xe) << 0x25)) + lStack_190;
    uVar23 = uVar23 + lStack_190;
    uVar29 = uVar26 >> 0x1c | uVar26 << 0x24;
    uVar33 = lStack_190 +
             ((uVar26 >> 0x22 | uVar26 * 0x40000000) ^ uVar29 ^
             (uVar29 >> 0xb | (uVar26 >> 0x1c) << 0x35)) +
             ((uVar25 ^ uVar24) & uVar26 ^ uVar24 & uVar25);
    uVar29 = uVar23 >> 0xe | uVar23 << 0x32;
    lStack_188 = uVar27 + ((uVar39 ^ uVar38) & uVar23 ^ uVar39) +
                 ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ uVar29 ^
                 (uVar29 >> 0x1b | (uVar23 >> 0xe) << 0x25)) + lStack_188;
    uVar24 = uVar24 + lStack_188;
    uVar27 = uVar33 >> 0x1c | uVar33 << 0x24;
    uVar29 = lStack_188 +
             ((uVar33 >> 0x22 | uVar33 * 0x40000000) ^ uVar27 ^
             (uVar27 >> 0xb | (uVar33 >> 0x1c) << 0x35)) +
             ((uVar26 ^ uVar25) & uVar33 ^ uVar25 & uVar26);
    auVar50 = vpblendd_avx2(auVar43,auVar44,3);
    auVar41 = vpermq_avx2(auVar50,0x39);
    auVar50 = vperm2f128_avx(auVar42,(undefined1  [32])0x0,0x21);
    auVar46 = vpsrlq_avx2(auVar41,1);
    auVar48 = vpsllq_avx2(auVar41,0x38);
    auVar45 = vpsrlq_avx2(auVar41,7);
    auVar47 = vpsrlq_avx2(auVar46,7);
    auVar41 = vpsllq_avx2(auVar48,7);
    auVar41 = auVar45 ^ auVar46 ^ auVar48 ^ auVar47 ^ auVar41;
    auVar46 = vpsrlq_avx2(auVar50,0x13);
    auVar48 = vpsllq_avx2(auVar50,3);
    auVar45 = vpsrlq_avx2(auVar50,6);
    auVar47 = vpsrlq_avx2(auVar46,0x2a);
    auVar50 = vpsllq_avx2(auVar48,0x2a);
    auVar50 = auVar45 ^ auVar46 ^ auVar48 ^ auVar47 ^ auVar50;
    auVar45 = vpblendd_avx2(auVar49,auVar42,3);
    auVar45 = vpermq_avx2(auVar45,0x39);
    auVar46._0_8_ = auVar43._0_8_ + auVar41._0_8_ + auVar50._0_8_ + auVar45._0_8_;
    auVar46._8_8_ = auVar43._8_8_ + auVar41._8_8_ + auVar50._8_8_ + auVar45._8_8_;
    auVar46._16_8_ = auVar43._16_8_ + auVar41._16_8_ + auVar50._16_8_ + auVar45._16_8_;
    auVar46._24_8_ = auVar43._24_8_ + auVar41._24_8_ + auVar50._24_8_ + auVar45._24_8_;
    auVar50 = vperm2f128_avx(auVar46,(undefined1  [32])0x0,2);
    auVar41 = vpsrlq_avx2(auVar50,0x13);
    auVar47 = vpsllq_avx2(auVar50,3);
    auVar43 = vpsrlq_avx2(auVar50,6);
    auVar45 = vpsrlq_avx2(auVar41,0x2a);
    auVar50 = vpsllq_avx2(auVar47,0x2a);
    auVar50 = auVar43 ^ auVar41 ^ auVar47 ^ auVar45 ^ auVar50;
    auVar43._0_8_ = auVar46._0_8_ + auVar50._0_8_;
    auVar43._8_8_ = auVar46._8_8_ + auVar50._8_8_;
    auVar43._16_8_ = auVar46._16_8_ + auVar50._16_8_;
    auVar43._24_8_ = auVar46._24_8_ + auVar50._24_8_;
    uVar27 = uVar24 >> 0xe | uVar24 << 0x32;
    local_180 = uVar39 + ((uVar38 ^ uVar23) & uVar24 ^ uVar38) +
                ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ uVar27 ^
                (uVar27 >> 0x1b | (uVar24 >> 0xe) << 0x25)) + local_180;
    uVar25 = uVar25 + local_180;
    uVar27 = uVar29 >> 0x1c | uVar29 << 0x24;
    uVar39 = local_180 +
             ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ uVar27 ^
             (uVar27 >> 0xb | (uVar29 >> 0x1c) << 0x35)) +
             ((uVar33 ^ uVar26) & uVar29 ^ uVar26 & uVar33);
    uVar27 = uVar25 >> 0xe | uVar25 << 0x32;
    lStack_178 = uVar38 + ((uVar23 ^ uVar24) & uVar25 ^ uVar23) +
                 ((uVar25 >> 0x12 | uVar25 << 0x2e) ^ uVar27 ^
                 (uVar27 >> 0x1b | (uVar25 >> 0xe) << 0x25)) + lStack_178;
    uVar26 = uVar26 + lStack_178;
    uVar27 = uVar39 >> 0x1c | uVar39 << 0x24;
    uVar35 = lStack_178 +
             ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ uVar27 ^
             (uVar27 >> 0xb | (uVar39 >> 0x1c) << 0x35)) +
             ((uVar29 ^ uVar33) & uVar39 ^ uVar33 & uVar29);
    uVar27 = uVar26 >> 0xe | uVar26 << 0x32;
    lStack_170 = uVar23 + ((uVar24 ^ uVar25) & uVar26 ^ uVar24) +
                 ((uVar26 >> 0x12 | uVar26 << 0x2e) ^ uVar27 ^
                 (uVar27 >> 0x1b | (uVar26 >> 0xe) << 0x25)) + lStack_170;
    uVar33 = uVar33 + lStack_170;
    uVar27 = uVar35 >> 0x1c | uVar35 << 0x24;
    uVar23 = lStack_170 +
             ((uVar35 >> 0x22 | uVar35 * 0x40000000) ^ uVar27 ^
             (uVar27 >> 0xb | (uVar35 >> 0x1c) << 0x35)) +
             ((uVar39 ^ uVar29) & uVar35 ^ uVar29 & uVar39);
    uVar27 = uVar33 >> 0xe | uVar33 << 0x32;
    lStack_168 = uVar24 + ((uVar25 ^ uVar26) & uVar33 ^ uVar25) +
                 ((uVar33 >> 0x12 | uVar33 << 0x2e) ^ uVar27 ^
                 (uVar27 >> 0x1b | (uVar33 >> 0xe) << 0x25)) + lStack_168;
    uVar29 = uVar29 + lStack_168;
    uVar27 = uVar23 >> 0x1c | uVar23 << 0x24;
    uVar24 = lStack_168 +
             ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ uVar27 ^
             (uVar27 >> 0xb | (uVar23 >> 0x1c) << 0x35)) +
             ((uVar35 ^ uVar39) & uVar23 ^ uVar39 & uVar35);
    auVar50 = vpblendd_avx2(auVar44,auVar49,3);
    auVar41 = vpermq_avx2(auVar50,0x39);
    auVar50 = vperm2f128_avx(auVar43,(undefined1  [32])0x0,0x21);
    auVar46 = vpsrlq_avx2(auVar41,1);
    auVar48 = vpsllq_avx2(auVar41,0x38);
    auVar45 = vpsrlq_avx2(auVar41,7);
    auVar47 = vpsrlq_avx2(auVar46,7);
    auVar41 = vpsllq_avx2(auVar48,7);
    auVar41 = auVar45 ^ auVar46 ^ auVar48 ^ auVar47 ^ auVar41;
    auVar46 = vpsrlq_avx2(auVar50,0x13);
    auVar48 = vpsllq_avx2(auVar50,3);
    auVar45 = vpsrlq_avx2(auVar50,6);
    auVar47 = vpsrlq_avx2(auVar46,0x2a);
    auVar50 = vpsllq_avx2(auVar48,0x2a);
    auVar50 = auVar45 ^ auVar46 ^ auVar48 ^ auVar47 ^ auVar50;
    auVar45 = vpblendd_avx2(auVar42,auVar43,3);
    auVar45 = vpermq_avx2(auVar45,0x39);
    auVar47._0_8_ = auVar44._0_8_ + auVar41._0_8_ + auVar50._0_8_ + auVar45._0_8_;
    auVar47._8_8_ = auVar44._8_8_ + auVar41._8_8_ + auVar50._8_8_ + auVar45._8_8_;
    auVar47._16_8_ = auVar44._16_8_ + auVar41._16_8_ + auVar50._16_8_ + auVar45._16_8_;
    auVar47._24_8_ = auVar44._24_8_ + auVar41._24_8_ + auVar50._24_8_ + auVar45._24_8_;
    auVar50 = vperm2f128_avx(auVar47,(undefined1  [32])0x0,2);
    auVar41 = vpsrlq_avx2(auVar50,0x13);
    auVar46 = vpsllq_avx2(auVar50,3);
    auVar44 = vpsrlq_avx2(auVar50,6);
    auVar45 = vpsrlq_avx2(auVar41,0x2a);
    auVar50 = vpsllq_avx2(auVar46,0x2a);
    auVar50 = auVar44 ^ auVar41 ^ auVar46 ^ auVar45 ^ auVar50;
    auVar44._0_8_ = auVar47._0_8_ + auVar50._0_8_;
    auVar44._8_8_ = auVar47._8_8_ + auVar50._8_8_;
    auVar44._16_8_ = auVar47._16_8_ + auVar50._16_8_;
    auVar44._24_8_ = auVar47._24_8_ + auVar50._24_8_;
    uVar27 = uVar29 >> 0xe | uVar29 << 0x32;
    local_160 = uVar25 + ((uVar26 ^ uVar33) & uVar29 ^ uVar26) +
                ((uVar29 >> 0x12 | uVar29 << 0x2e) ^ uVar27 ^
                (uVar27 >> 0x1b | (uVar29 >> 0xe) << 0x25)) + local_160;
    uVar39 = uVar39 + local_160;
    uVar27 = uVar24 >> 0x1c | uVar24 << 0x24;
    uVar25 = local_160 +
             ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ uVar27 ^
             (uVar27 >> 0xb | (uVar24 >> 0x1c) << 0x35)) +
             ((uVar23 ^ uVar35) & uVar24 ^ uVar35 & uVar23);
    uVar27 = uVar39 >> 0xe | uVar39 << 0x32;
    lStack_158 = uVar26 + ((uVar33 ^ uVar29) & uVar39 ^ uVar33) +
                 ((uVar39 >> 0x12 | uVar39 << 0x2e) ^ uVar27 ^
                 (uVar27 >> 0x1b | (uVar39 >> 0xe) << 0x25)) + lStack_158;
    uVar35 = uVar35 + lStack_158;
    uVar27 = uVar25 >> 0x1c | uVar25 << 0x24;
    uVar26 = lStack_158 +
             ((uVar25 >> 0x22 | uVar25 * 0x40000000) ^ uVar27 ^
             (uVar27 >> 0xb | (uVar25 >> 0x1c) << 0x35)) +
             ((uVar24 ^ uVar23) & uVar25 ^ uVar23 & uVar24);
    uVar27 = uVar35 >> 0xe | uVar35 << 0x32;
    lStack_150 = uVar33 + ((uVar29 ^ uVar39) & uVar35 ^ uVar29) +
                 ((uVar35 >> 0x12 | uVar35 << 0x2e) ^ uVar27 ^
                 (uVar27 >> 0x1b | (uVar35 >> 0xe) << 0x25)) + lStack_150;
    uVar23 = uVar23 + lStack_150;
    uVar27 = uVar26 >> 0x1c | uVar26 << 0x24;
    uVar33 = lStack_150 +
             ((uVar26 >> 0x22 | uVar26 * 0x40000000) ^ uVar27 ^
             (uVar27 >> 0xb | (uVar26 >> 0x1c) << 0x35)) +
             ((uVar25 ^ uVar24) & uVar26 ^ uVar24 & uVar25);
    uVar27 = uVar23 >> 0xe | uVar23 << 0x32;
    lStack_148 = uVar29 + ((uVar39 ^ uVar35) & uVar23 ^ uVar39) +
                 ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ uVar27 ^
                 (uVar27 >> 0x1b | (uVar23 >> 0xe) << 0x25)) + lStack_148;
    uVar24 = uVar24 + lStack_148;
    uVar27 = uVar33 >> 0x1c | uVar33 << 0x24;
    uVar29 = lStack_148 +
             ((uVar33 >> 0x22 | uVar33 * 0x40000000) ^ uVar27 ^
             (uVar27 >> 0xb | (uVar33 >> 0x1c) << 0x35)) +
             ((uVar26 ^ uVar25) & uVar33 ^ uVar25 & uVar26);
    auVar50 = vpblendd_avx2(auVar49,auVar42,3);
    auVar41 = vpermq_avx2(auVar50,0x39);
    auVar50 = vperm2f128_avx(auVar44,(undefined1  [32])0x0,0x21);
    auVar46 = vpsrlq_avx2(auVar41,1);
    auVar48 = vpsllq_avx2(auVar41,0x38);
    auVar45 = vpsrlq_avx2(auVar41,7);
    auVar47 = vpsrlq_avx2(auVar46,7);
    auVar41 = vpsllq_avx2(auVar48,7);
    auVar41 = auVar45 ^ auVar46 ^ auVar48 ^ auVar47 ^ auVar41;
    auVar46 = vpsrlq_avx2(auVar50,0x13);
    auVar48 = vpsllq_avx2(auVar50,3);
    auVar45 = vpsrlq_avx2(auVar50,6);
    auVar47 = vpsrlq_avx2(auVar46,0x2a);
    auVar50 = vpsllq_avx2(auVar48,0x2a);
    auVar50 = auVar45 ^ auVar46 ^ auVar48 ^ auVar47 ^ auVar50;
    auVar45 = vpblendd_avx2(auVar43,auVar44,3);
    auVar45 = vpermq_avx2(auVar45,0x39);
    auVar48._0_8_ = auVar49._0_8_ + auVar41._0_8_ + auVar50._0_8_ + auVar45._0_8_;
    auVar48._8_8_ = auVar49._8_8_ + auVar41._8_8_ + auVar50._8_8_ + auVar45._8_8_;
    auVar48._16_8_ = auVar49._16_8_ + auVar41._16_8_ + auVar50._16_8_ + auVar45._16_8_;
    auVar48._24_8_ = auVar49._24_8_ + auVar41._24_8_ + auVar50._24_8_ + auVar45._24_8_;
    auVar50 = vperm2f128_avx(auVar48,(undefined1  [32])0x0,2);
    auVar45 = vpsrlq_avx2(auVar50,0x13);
    auVar47 = vpsllq_avx2(auVar50,3);
    auVar41 = vpsrlq_avx2(auVar50,6);
    auVar46 = vpsrlq_avx2(auVar45,0x2a);
    auVar50 = vpsllq_avx2(auVar47,0x2a);
    auVar50 = auVar41 ^ auVar45 ^ auVar47 ^ auVar46 ^ auVar50;
    auVar1._0_8_ = auVar48._0_8_ + auVar50._0_8_;
    auVar1._8_8_ = auVar48._8_8_ + auVar50._8_8_;
    auVar1._16_8_ = auVar48._16_8_ + auVar50._16_8_;
    auVar1._24_8_ = auVar48._24_8_ + auVar50._24_8_;
    uVar27 = uVar24 >> 0xe | uVar24 << 0x32;
    lVar40 = uVar39 + ((uVar35 ^ uVar23) & uVar24 ^ uVar35) +
             ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar24 >> 0xe) << 0x25)) + auVar49._0_8_ + -0x1b64963e610eb52e;
    uVar25 = uVar25 + lVar40;
    uVar27 = uVar29 >> 0x1c | uVar29 << 0x24;
    uVar38 = lVar40 + ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar29 >> 0x1c) << 0x35)) +
             ((uVar33 ^ uVar26) & uVar29 ^ uVar26 & uVar33);
    uVar27 = uVar25 >> 0xe | uVar25 << 0x32;
    lVar40 = uVar35 + ((uVar23 ^ uVar24) & uVar25 ^ uVar23) +
             ((uVar25 >> 0x12 | uVar25 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar25 >> 0xe) << 0x25)) + auVar49._8_8_ + -0x1041b879c7b0da1d;
    uVar26 = uVar26 + lVar40;
    uVar27 = uVar38 >> 0x1c | uVar38 << 0x24;
    uVar35 = lVar40 + ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar38 >> 0x1c) << 0x35)) +
             ((uVar29 ^ uVar33) & uVar38 ^ uVar33 & uVar29);
    uVar27 = uVar26 >> 0xe | uVar26 << 0x32;
    lVar40 = uVar23 + ((uVar24 ^ uVar25) & uVar26 ^ uVar24) +
             ((uVar26 >> 0x12 | uVar26 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar26 >> 0xe) << 0x25)) + auVar49._16_8_ + DAT_002b2080._16_8_;
    uVar33 = uVar33 + lVar40;
    uVar27 = uVar35 >> 0x1c | uVar35 << 0x24;
    uVar23 = lVar40 + ((uVar35 >> 0x22 | uVar35 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar35 >> 0x1c) << 0x35)) +
             ((uVar38 ^ uVar29) & uVar35 ^ uVar29 & uVar38);
    uVar27 = uVar33 >> 0xe | uVar33 << 0x32;
    lVar40 = uVar24 + ((uVar25 ^ uVar26) & uVar33 ^ uVar25) +
             ((uVar33 >> 0x12 | uVar33 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar33 >> 0xe) << 0x25)) + auVar49._24_8_ + 0x240ca1cc77ac9c65;
    uVar29 = uVar29 + lVar40;
    uVar27 = uVar23 >> 0x1c | uVar23 << 0x24;
    uVar24 = lVar40 + ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar23 >> 0x1c) << 0x35)) +
             ((uVar35 ^ uVar38) & uVar23 ^ uVar38 & uVar35);
    auVar50 = vpblendd_avx2(auVar42,auVar43,3);
    auVar41 = vpermq_avx2(auVar50,0x39);
    auVar50 = vperm2f128_avx(auVar1,(undefined1  [32])0x0,0x21);
    auVar45 = vpsrlq_avx2(auVar41,1);
    auVar47 = vpsllq_avx2(auVar41,0x38);
    auVar49 = vpsrlq_avx2(auVar41,7);
    auVar46 = vpsrlq_avx2(auVar45,7);
    auVar41 = vpsllq_avx2(auVar47,7);
    auVar41 = auVar49 ^ auVar45 ^ auVar47 ^ auVar46 ^ auVar41;
    auVar45 = vpsrlq_avx2(auVar50,0x13);
    auVar47 = vpsllq_avx2(auVar50,3);
    auVar49 = vpsrlq_avx2(auVar50,6);
    auVar46 = vpsrlq_avx2(auVar45,0x2a);
    auVar50 = vpsllq_avx2(auVar47,0x2a);
    auVar50 = auVar49 ^ auVar45 ^ auVar47 ^ auVar46 ^ auVar50;
    auVar49 = vpblendd_avx2(auVar44,auVar1,3);
    auVar49 = vpermq_avx2(auVar49,0x39);
    auVar2._0_8_ = auVar42._0_8_ + auVar41._0_8_ + auVar50._0_8_ + auVar49._0_8_;
    auVar2._8_8_ = auVar42._8_8_ + auVar41._8_8_ + auVar50._8_8_ + auVar49._8_8_;
    auVar2._16_8_ = auVar42._16_8_ + auVar41._16_8_ + auVar50._16_8_ + auVar49._16_8_;
    auVar2._24_8_ = auVar42._24_8_ + auVar41._24_8_ + auVar50._24_8_ + auVar49._24_8_;
    auVar50 = vperm2f128_avx(auVar2,(undefined1  [32])0x0,2);
    auVar49 = vpsrlq_avx2(auVar50,0x13);
    auVar46 = vpsllq_avx2(auVar50,3);
    auVar41 = vpsrlq_avx2(auVar50,6);
    auVar45 = vpsrlq_avx2(auVar49,0x2a);
    auVar50 = vpsllq_avx2(auVar46,0x2a);
    auVar50 = auVar41 ^ auVar49 ^ auVar46 ^ auVar45 ^ auVar50;
    auVar3._0_8_ = auVar2._0_8_ + auVar50._0_8_;
    auVar3._8_8_ = auVar2._8_8_ + auVar50._8_8_;
    auVar3._16_8_ = auVar2._16_8_ + auVar50._16_8_;
    auVar3._24_8_ = auVar2._24_8_ + auVar50._24_8_;
    uVar27 = uVar29 >> 0xe | uVar29 << 0x32;
    lVar40 = uVar25 + ((uVar26 ^ uVar33) & uVar29 ^ uVar26) +
             ((uVar29 >> 0x12 | uVar29 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar29 >> 0xe) << 0x25)) + auVar42._0_8_ + 0x2de92c6f592b0275;
    uVar38 = uVar38 + lVar40;
    uVar27 = uVar24 >> 0x1c | uVar24 << 0x24;
    uVar25 = lVar40 + ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar24 >> 0x1c) << 0x35)) +
             ((uVar23 ^ uVar35) & uVar24 ^ uVar35 & uVar23);
    uVar27 = uVar38 >> 0xe | uVar38 << 0x32;
    lVar40 = uVar26 + ((uVar33 ^ uVar29) & uVar38 ^ uVar33) +
             ((uVar38 >> 0x12 | uVar38 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar38 >> 0xe) << 0x25)) + auVar42._8_8_ + 0x4a7484aa6ea6e483;
    uVar35 = uVar35 + lVar40;
    uVar27 = uVar25 >> 0x1c | uVar25 << 0x24;
    uVar26 = lVar40 + ((uVar25 >> 0x22 | uVar25 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar25 >> 0x1c) << 0x35)) +
             ((uVar24 ^ uVar23) & uVar25 ^ uVar23 & uVar24);
    uVar27 = uVar35 >> 0xe | uVar35 << 0x32;
    lVar40 = uVar33 + ((uVar29 ^ uVar38) & uVar35 ^ uVar29) +
             ((uVar35 >> 0x12 | uVar35 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar35 >> 0xe) << 0x25)) + auVar42._16_8_ + DAT_002b20a0._16_8_;
    uVar23 = uVar23 + lVar40;
    uVar27 = uVar26 >> 0x1c | uVar26 << 0x24;
    uVar33 = lVar40 + ((uVar26 >> 0x22 | uVar26 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar26 >> 0x1c) << 0x35)) +
             ((uVar25 ^ uVar24) & uVar26 ^ uVar24 & uVar25);
    uVar27 = uVar23 >> 0xe | uVar23 << 0x32;
    lVar40 = uVar29 + ((uVar38 ^ uVar35) & uVar23 ^ uVar38) +
             ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar23 >> 0xe) << 0x25)) + auVar42._24_8_ + 0x76f988da831153b5;
    uVar24 = uVar24 + lVar40;
    uVar27 = uVar33 >> 0x1c | uVar33 << 0x24;
    uVar29 = lVar40 + ((uVar33 >> 0x22 | uVar33 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar33 >> 0x1c) << 0x35)) +
             ((uVar26 ^ uVar25) & uVar33 ^ uVar25 & uVar26);
    auVar50 = vpblendd_avx2(auVar43,auVar44,3);
    auVar42 = vpermq_avx2(auVar50,0x39);
    auVar50 = vperm2f128_avx(auVar3,(undefined1  [32])0x0,0x21);
    auVar49 = vpsrlq_avx2(auVar42,1);
    auVar46 = vpsllq_avx2(auVar42,0x38);
    auVar41 = vpsrlq_avx2(auVar42,7);
    auVar45 = vpsrlq_avx2(auVar49,7);
    auVar42 = vpsllq_avx2(auVar46,7);
    auVar42 = auVar41 ^ auVar49 ^ auVar46 ^ auVar45 ^ auVar42;
    auVar49 = vpsrlq_avx2(auVar50,0x13);
    auVar46 = vpsllq_avx2(auVar50,3);
    auVar41 = vpsrlq_avx2(auVar50,6);
    auVar45 = vpsrlq_avx2(auVar49,0x2a);
    auVar50 = vpsllq_avx2(auVar46,0x2a);
    auVar50 = auVar41 ^ auVar49 ^ auVar46 ^ auVar45 ^ auVar50;
    auVar41 = vpblendd_avx2(auVar1,auVar3,3);
    auVar41 = vpermq_avx2(auVar41,0x39);
    auVar4._0_8_ = auVar43._0_8_ + auVar42._0_8_ + auVar50._0_8_ + auVar41._0_8_;
    auVar4._8_8_ = auVar43._8_8_ + auVar42._8_8_ + auVar50._8_8_ + auVar41._8_8_;
    auVar4._16_8_ = auVar43._16_8_ + auVar42._16_8_ + auVar50._16_8_ + auVar41._16_8_;
    auVar4._24_8_ = auVar43._24_8_ + auVar42._24_8_ + auVar50._24_8_ + auVar41._24_8_;
    auVar50 = vperm2f128_avx(auVar4,(undefined1  [32])0x0,2);
    auVar41 = vpsrlq_avx2(auVar50,0x13);
    auVar45 = vpsllq_avx2(auVar50,3);
    auVar42 = vpsrlq_avx2(auVar50,6);
    auVar49 = vpsrlq_avx2(auVar41,0x2a);
    auVar50 = vpsllq_avx2(auVar45,0x2a);
    auVar50 = auVar42 ^ auVar41 ^ auVar45 ^ auVar49 ^ auVar50;
    auVar5._0_8_ = auVar4._0_8_ + auVar50._0_8_;
    auVar5._8_8_ = auVar4._8_8_ + auVar50._8_8_;
    auVar5._16_8_ = auVar4._16_8_ + auVar50._16_8_;
    auVar5._24_8_ = auVar4._24_8_ + auVar50._24_8_;
    uVar27 = uVar24 >> 0xe | uVar24 << 0x32;
    lVar40 = uVar38 + ((uVar35 ^ uVar23) & uVar24 ^ uVar35) +
             ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar24 >> 0xe) << 0x25)) + auVar43._0_8_ + -0x67c1aead11992055;
    uVar25 = uVar25 + lVar40;
    uVar27 = uVar29 >> 0x1c | uVar29 << 0x24;
    uVar38 = lVar40 + ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar29 >> 0x1c) << 0x35)) +
             ((uVar33 ^ uVar26) & uVar29 ^ uVar26 & uVar33);
    uVar27 = uVar25 >> 0xe | uVar25 << 0x32;
    lVar40 = uVar35 + ((uVar23 ^ uVar24) & uVar25 ^ uVar23) +
             ((uVar25 >> 0x12 | uVar25 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar25 >> 0xe) << 0x25)) + auVar43._8_8_ + -0x57ce3992d24bcdf0;
    uVar26 = uVar26 + lVar40;
    uVar27 = uVar38 >> 0x1c | uVar38 << 0x24;
    uVar35 = lVar40 + ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar38 >> 0x1c) << 0x35)) +
             ((uVar29 ^ uVar33) & uVar38 ^ uVar33 & uVar29);
    uVar27 = uVar26 >> 0xe | uVar26 << 0x32;
    lVar40 = uVar23 + ((uVar24 ^ uVar25) & uVar26 ^ uVar24) +
             ((uVar26 >> 0x12 | uVar26 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar26 >> 0xe) << 0x25)) + auVar43._16_8_ + DAT_002b20c0._16_8_;
    uVar33 = uVar33 + lVar40;
    uVar27 = uVar35 >> 0x1c | uVar35 << 0x24;
    uVar23 = lVar40 + ((uVar35 >> 0x22 | uVar35 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar35 >> 0x1c) << 0x35)) +
             ((uVar38 ^ uVar29) & uVar35 ^ uVar29 & uVar38);
    uVar27 = uVar33 >> 0xe | uVar33 << 0x32;
    lVar40 = uVar24 + ((uVar25 ^ uVar26) & uVar33 ^ uVar25) +
             ((uVar33 >> 0x12 | uVar33 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar33 >> 0xe) << 0x25)) + auVar43._24_8_ + -0x40a680384110f11c;
    uVar29 = uVar29 + lVar40;
    uVar27 = uVar23 >> 0x1c | uVar23 << 0x24;
    uVar24 = lVar40 + ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar23 >> 0x1c) << 0x35)) +
             ((uVar35 ^ uVar38) & uVar23 ^ uVar38 & uVar35);
    auVar50 = vpblendd_avx2(auVar44,auVar1,3);
    auVar42 = vpermq_avx2(auVar50,0x39);
    auVar50 = vperm2f128_avx(auVar5,(undefined1  [32])0x0,0x21);
    auVar41 = vpsrlq_avx2(auVar42,1);
    auVar45 = vpsllq_avx2(auVar42,0x38);
    auVar43 = vpsrlq_avx2(auVar42,7);
    auVar49 = vpsrlq_avx2(auVar41,7);
    auVar42 = vpsllq_avx2(auVar45,7);
    auVar42 = auVar43 ^ auVar41 ^ auVar45 ^ auVar49 ^ auVar42;
    auVar41 = vpsrlq_avx2(auVar50,0x13);
    auVar45 = vpsllq_avx2(auVar50,3);
    auVar43 = vpsrlq_avx2(auVar50,6);
    auVar49 = vpsrlq_avx2(auVar41,0x2a);
    auVar50 = vpsllq_avx2(auVar45,0x2a);
    auVar50 = auVar43 ^ auVar41 ^ auVar45 ^ auVar49 ^ auVar50;
    auVar43 = vpblendd_avx2(auVar3,auVar5,3);
    auVar43 = vpermq_avx2(auVar43,0x39);
    auVar6._0_8_ = auVar44._0_8_ + auVar42._0_8_ + auVar50._0_8_ + auVar43._0_8_;
    auVar6._8_8_ = auVar44._8_8_ + auVar42._8_8_ + auVar50._8_8_ + auVar43._8_8_;
    auVar6._16_8_ = auVar44._16_8_ + auVar42._16_8_ + auVar50._16_8_ + auVar43._16_8_;
    auVar6._24_8_ = auVar44._24_8_ + auVar42._24_8_ + auVar50._24_8_ + auVar43._24_8_;
    auVar50 = vperm2f128_avx(auVar6,(undefined1  [32])0x0,2);
    auVar43 = vpsrlq_avx2(auVar50,0x13);
    auVar49 = vpsllq_avx2(auVar50,3);
    auVar42 = vpsrlq_avx2(auVar50,6);
    auVar41 = vpsrlq_avx2(auVar43,0x2a);
    auVar50 = vpsllq_avx2(auVar49,0x2a);
    auVar50 = auVar42 ^ auVar43 ^ auVar49 ^ auVar41 ^ auVar50;
    auVar7._0_8_ = auVar6._0_8_ + auVar50._0_8_;
    auVar7._8_8_ = auVar6._8_8_ + auVar50._8_8_;
    auVar7._16_8_ = auVar6._16_8_ + auVar50._16_8_;
    auVar7._24_8_ = auVar6._24_8_ + auVar50._24_8_;
    uVar27 = uVar29 >> 0xe | uVar29 << 0x32;
    lVar40 = uVar25 + ((uVar26 ^ uVar33) & uVar29 ^ uVar26) +
             ((uVar29 >> 0x12 | uVar29 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar29 >> 0xe) << 0x25)) + auVar44._0_8_ + -0x391ff40cc257703e;
    uVar38 = uVar38 + lVar40;
    uVar27 = uVar24 >> 0x1c | uVar24 << 0x24;
    uVar25 = lVar40 + ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar24 >> 0x1c) << 0x35)) +
             ((uVar23 ^ uVar35) & uVar24 ^ uVar35 & uVar23);
    uVar27 = uVar38 >> 0xe | uVar38 << 0x32;
    lVar40 = uVar26 + ((uVar33 ^ uVar29) & uVar38 ^ uVar33) +
             ((uVar38 >> 0x12 | uVar38 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar38 >> 0xe) << 0x25)) + auVar44._8_8_ + -0x2a586eb86cf558db;
    uVar35 = uVar35 + lVar40;
    uVar27 = uVar25 >> 0x1c | uVar25 << 0x24;
    uVar26 = lVar40 + ((uVar25 >> 0x22 | uVar25 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar25 >> 0x1c) << 0x35)) +
             ((uVar24 ^ uVar23) & uVar25 ^ uVar23 & uVar24);
    uVar27 = uVar35 >> 0xe | uVar35 << 0x32;
    lVar40 = uVar33 + ((uVar29 ^ uVar38) & uVar35 ^ uVar29) +
             ((uVar35 >> 0x12 | uVar35 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar35 >> 0xe) << 0x25)) + auVar44._16_8_ + DAT_002b20e0._16_8_;
    uVar23 = uVar23 + lVar40;
    uVar27 = uVar26 >> 0x1c | uVar26 << 0x24;
    uVar33 = lVar40 + ((uVar26 >> 0x22 | uVar26 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar26 >> 0x1c) << 0x35)) +
             ((uVar25 ^ uVar24) & uVar26 ^ uVar24 & uVar25);
    uVar27 = uVar23 >> 0xe | uVar23 << 0x32;
    lVar40 = uVar29 + ((uVar38 ^ uVar35) & uVar23 ^ uVar38) +
             ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar23 >> 0xe) << 0x25)) + auVar44._24_8_ + 0x142929670a0e6e70;
    uVar24 = uVar24 + lVar40;
    uVar27 = uVar33 >> 0x1c | uVar33 << 0x24;
    uVar29 = lVar40 + ((uVar33 >> 0x22 | uVar33 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar33 >> 0x1c) << 0x35)) +
             ((uVar26 ^ uVar25) & uVar33 ^ uVar25 & uVar26);
    auVar50 = vpblendd_avx2(auVar1,auVar3,3);
    auVar42 = vpermq_avx2(auVar50,0x39);
    auVar50 = vperm2f128_avx(auVar7,(undefined1  [32])0x0,0x21);
    auVar44 = vpsrlq_avx2(auVar42,1);
    auVar49 = vpsllq_avx2(auVar42,0x38);
    auVar43 = vpsrlq_avx2(auVar42,7);
    auVar41 = vpsrlq_avx2(auVar44,7);
    auVar42 = vpsllq_avx2(auVar49,7);
    auVar42 = auVar43 ^ auVar44 ^ auVar49 ^ auVar41 ^ auVar42;
    auVar44 = vpsrlq_avx2(auVar50,0x13);
    auVar49 = vpsllq_avx2(auVar50,3);
    auVar43 = vpsrlq_avx2(auVar50,6);
    auVar41 = vpsrlq_avx2(auVar44,0x2a);
    auVar50 = vpsllq_avx2(auVar49,0x2a);
    auVar50 = auVar43 ^ auVar44 ^ auVar49 ^ auVar41 ^ auVar50;
    auVar43 = vpblendd_avx2(auVar5,auVar7,3);
    auVar43 = vpermq_avx2(auVar43,0x39);
    auVar8._0_8_ = auVar1._0_8_ + auVar42._0_8_ + auVar50._0_8_ + auVar43._0_8_;
    auVar8._8_8_ = auVar1._8_8_ + auVar42._8_8_ + auVar50._8_8_ + auVar43._8_8_;
    auVar8._16_8_ = auVar1._16_8_ + auVar42._16_8_ + auVar50._16_8_ + auVar43._16_8_;
    auVar8._24_8_ = auVar1._24_8_ + auVar42._24_8_ + auVar50._24_8_ + auVar43._24_8_;
    auVar50 = vperm2f128_avx(auVar8,(undefined1  [32])0x0,2);
    auVar43 = vpsrlq_avx2(auVar50,0x13);
    auVar41 = vpsllq_avx2(auVar50,3);
    auVar42 = vpsrlq_avx2(auVar50,6);
    auVar44 = vpsrlq_avx2(auVar43,0x2a);
    auVar50 = vpsllq_avx2(auVar41,0x2a);
    auVar50 = auVar42 ^ auVar43 ^ auVar41 ^ auVar44 ^ auVar50;
    auVar9._0_8_ = auVar8._0_8_ + auVar50._0_8_;
    auVar9._8_8_ = auVar8._8_8_ + auVar50._8_8_;
    auVar9._16_8_ = auVar8._16_8_ + auVar50._16_8_;
    auVar9._24_8_ = auVar8._24_8_ + auVar50._24_8_;
    uVar27 = uVar24 >> 0xe | uVar24 << 0x32;
    lVar40 = uVar38 + ((uVar35 ^ uVar23) & uVar24 ^ uVar35) +
             ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar24 >> 0xe) << 0x25)) + auVar1._0_8_ + 0x27b70a8546d22ffc;
    uVar25 = uVar25 + lVar40;
    uVar27 = uVar29 >> 0x1c | uVar29 << 0x24;
    uVar38 = lVar40 + ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar29 >> 0x1c) << 0x35)) +
             ((uVar33 ^ uVar26) & uVar29 ^ uVar26 & uVar33);
    uVar27 = uVar25 >> 0xe | uVar25 << 0x32;
    lVar40 = uVar35 + ((uVar23 ^ uVar24) & uVar25 ^ uVar23) +
             ((uVar25 >> 0x12 | uVar25 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar25 >> 0xe) << 0x25)) + auVar1._8_8_ + 0x2e1b21385c26c926;
    uVar26 = uVar26 + lVar40;
    uVar27 = uVar38 >> 0x1c | uVar38 << 0x24;
    uVar35 = lVar40 + ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar38 >> 0x1c) << 0x35)) +
             ((uVar29 ^ uVar33) & uVar38 ^ uVar33 & uVar29);
    uVar27 = uVar26 >> 0xe | uVar26 << 0x32;
    lVar40 = uVar23 + ((uVar24 ^ uVar25) & uVar26 ^ uVar24) +
             ((uVar26 >> 0x12 | uVar26 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar26 >> 0xe) << 0x25)) + auVar1._16_8_ + DAT_002b2100._16_8_;
    uVar33 = uVar33 + lVar40;
    uVar27 = uVar35 >> 0x1c | uVar35 << 0x24;
    uVar23 = lVar40 + ((uVar35 >> 0x22 | uVar35 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar35 >> 0x1c) << 0x35)) +
             ((uVar38 ^ uVar29) & uVar35 ^ uVar29 & uVar38);
    uVar27 = uVar33 >> 0xe | uVar33 << 0x32;
    lVar40 = uVar24 + ((uVar25 ^ uVar26) & uVar33 ^ uVar25) +
             ((uVar33 >> 0x12 | uVar33 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar33 >> 0xe) << 0x25)) + auVar1._24_8_ + 0x53380d139d95b3df;
    uVar29 = uVar29 + lVar40;
    uVar27 = uVar23 >> 0x1c | uVar23 << 0x24;
    uVar24 = lVar40 + ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar23 >> 0x1c) << 0x35)) +
             ((uVar35 ^ uVar38) & uVar23 ^ uVar38 & uVar35);
    auVar50 = vpblendd_avx2(auVar3,auVar5,3);
    auVar42 = vpermq_avx2(auVar50,0x39);
    auVar50 = vperm2f128_avx(auVar9,(undefined1  [32])0x0,0x21);
    auVar44 = vpsrlq_avx2(auVar42,1);
    auVar49 = vpsllq_avx2(auVar42,0x38);
    auVar43 = vpsrlq_avx2(auVar42,7);
    auVar41 = vpsrlq_avx2(auVar44,7);
    auVar42 = vpsllq_avx2(auVar49,7);
    auVar42 = auVar43 ^ auVar44 ^ auVar49 ^ auVar41 ^ auVar42;
    auVar44 = vpsrlq_avx2(auVar50,0x13);
    auVar49 = vpsllq_avx2(auVar50,3);
    auVar43 = vpsrlq_avx2(auVar50,6);
    auVar41 = vpsrlq_avx2(auVar44,0x2a);
    auVar50 = vpsllq_avx2(auVar49,0x2a);
    auVar50 = auVar43 ^ auVar44 ^ auVar49 ^ auVar41 ^ auVar50;
    auVar43 = vpblendd_avx2(auVar7,auVar9,3);
    auVar43 = vpermq_avx2(auVar43,0x39);
    auVar10._0_8_ = auVar3._0_8_ + auVar42._0_8_ + auVar50._0_8_ + auVar43._0_8_;
    auVar10._8_8_ = auVar3._8_8_ + auVar42._8_8_ + auVar50._8_8_ + auVar43._8_8_;
    auVar10._16_8_ = auVar3._16_8_ + auVar42._16_8_ + auVar50._16_8_ + auVar43._16_8_;
    auVar10._24_8_ = auVar3._24_8_ + auVar42._24_8_ + auVar50._24_8_ + auVar43._24_8_;
    auVar50 = vperm2f128_avx(auVar10,(undefined1  [32])0x0,2);
    auVar43 = vpsrlq_avx2(auVar50,0x13);
    auVar41 = vpsllq_avx2(auVar50,3);
    auVar42 = vpsrlq_avx2(auVar50,6);
    auVar44 = vpsrlq_avx2(auVar43,0x2a);
    auVar50 = vpsllq_avx2(auVar41,0x2a);
    auVar50 = auVar42 ^ auVar43 ^ auVar41 ^ auVar44 ^ auVar50;
    auVar11._0_8_ = auVar10._0_8_ + auVar50._0_8_;
    auVar11._8_8_ = auVar10._8_8_ + auVar50._8_8_;
    auVar11._16_8_ = auVar10._16_8_ + auVar50._16_8_;
    auVar11._24_8_ = auVar10._24_8_ + auVar50._24_8_;
    uVar27 = uVar29 >> 0xe | uVar29 << 0x32;
    lVar40 = uVar25 + ((uVar26 ^ uVar33) & uVar29 ^ uVar26) +
             ((uVar29 >> 0x12 | uVar29 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar29 >> 0xe) << 0x25)) + auVar3._0_8_ + 0x650a73548baf63de;
    uVar38 = uVar38 + lVar40;
    uVar27 = uVar24 >> 0x1c | uVar24 << 0x24;
    uVar25 = lVar40 + ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar24 >> 0x1c) << 0x35)) +
             ((uVar23 ^ uVar35) & uVar24 ^ uVar35 & uVar23);
    uVar27 = uVar38 >> 0xe | uVar38 << 0x32;
    lVar40 = uVar26 + ((uVar33 ^ uVar29) & uVar38 ^ uVar33) +
             ((uVar38 >> 0x12 | uVar38 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar38 >> 0xe) << 0x25)) + auVar3._8_8_ + 0x766a0abb3c77b2a8;
    uVar35 = uVar35 + lVar40;
    uVar27 = uVar25 >> 0x1c | uVar25 << 0x24;
    uVar26 = lVar40 + ((uVar25 >> 0x22 | uVar25 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar25 >> 0x1c) << 0x35)) +
             ((uVar24 ^ uVar23) & uVar25 ^ uVar23 & uVar24);
    uVar27 = uVar35 >> 0xe | uVar35 << 0x32;
    lVar40 = uVar33 + ((uVar29 ^ uVar38) & uVar35 ^ uVar29) +
             ((uVar35 >> 0x12 | uVar35 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar35 >> 0xe) << 0x25)) + auVar3._16_8_ + DAT_002b2120._16_8_;
    uVar23 = uVar23 + lVar40;
    uVar27 = uVar26 >> 0x1c | uVar26 << 0x24;
    uVar33 = lVar40 + ((uVar26 >> 0x22 | uVar26 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar26 >> 0x1c) << 0x35)) +
             ((uVar25 ^ uVar24) & uVar26 ^ uVar24 & uVar25);
    uVar27 = uVar23 >> 0xe | uVar23 << 0x32;
    lVar40 = uVar29 + ((uVar38 ^ uVar35) & uVar23 ^ uVar38) +
             ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar23 >> 0xe) << 0x25)) + auVar3._24_8_ + -0x6d8dd37aeb7dcac5;
    uVar24 = uVar24 + lVar40;
    uVar27 = uVar33 >> 0x1c | uVar33 << 0x24;
    uVar29 = lVar40 + ((uVar33 >> 0x22 | uVar33 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar33 >> 0x1c) << 0x35)) +
             ((uVar26 ^ uVar25) & uVar33 ^ uVar25 & uVar26);
    auVar50 = vpblendd_avx2(auVar5,auVar7,3);
    auVar42 = vpermq_avx2(auVar50,0x39);
    auVar50 = vperm2f128_avx(auVar11,(undefined1  [32])0x0,0x21);
    auVar44 = vpsrlq_avx2(auVar42,1);
    auVar49 = vpsllq_avx2(auVar42,0x38);
    auVar43 = vpsrlq_avx2(auVar42,7);
    auVar41 = vpsrlq_avx2(auVar44,7);
    auVar42 = vpsllq_avx2(auVar49,7);
    auVar42 = auVar43 ^ auVar44 ^ auVar49 ^ auVar41 ^ auVar42;
    auVar44 = vpsrlq_avx2(auVar50,0x13);
    auVar49 = vpsllq_avx2(auVar50,3);
    auVar43 = vpsrlq_avx2(auVar50,6);
    auVar41 = vpsrlq_avx2(auVar44,0x2a);
    auVar50 = vpsllq_avx2(auVar49,0x2a);
    auVar50 = auVar43 ^ auVar44 ^ auVar49 ^ auVar41 ^ auVar50;
    auVar43 = vpblendd_avx2(auVar9,auVar11,3);
    auVar43 = vpermq_avx2(auVar43,0x39);
    auVar12._0_8_ = auVar5._0_8_ + auVar42._0_8_ + auVar50._0_8_ + auVar43._0_8_;
    auVar12._8_8_ = auVar5._8_8_ + auVar42._8_8_ + auVar50._8_8_ + auVar43._8_8_;
    auVar12._16_8_ = auVar5._16_8_ + auVar42._16_8_ + auVar50._16_8_ + auVar43._16_8_;
    auVar12._24_8_ = auVar5._24_8_ + auVar42._24_8_ + auVar50._24_8_ + auVar43._24_8_;
    auVar50 = vperm2f128_avx(auVar12,(undefined1  [32])0x0,2);
    auVar43 = vpsrlq_avx2(auVar50,0x13);
    auVar41 = vpsllq_avx2(auVar50,3);
    auVar42 = vpsrlq_avx2(auVar50,6);
    auVar44 = vpsrlq_avx2(auVar43,0x2a);
    auVar50 = vpsllq_avx2(auVar41,0x2a);
    auVar50 = auVar42 ^ auVar43 ^ auVar41 ^ auVar44 ^ auVar50;
    auVar13._0_8_ = auVar12._0_8_ + auVar50._0_8_;
    auVar13._8_8_ = auVar12._8_8_ + auVar50._8_8_;
    auVar13._16_8_ = auVar12._16_8_ + auVar50._16_8_;
    auVar13._24_8_ = auVar12._24_8_ + auVar50._24_8_;
    uVar27 = uVar24 >> 0xe | uVar24 << 0x32;
    lVar40 = uVar38 + ((uVar35 ^ uVar23) & uVar24 ^ uVar35) +
             ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar24 >> 0xe) << 0x25)) + auVar5._0_8_ + -0x5d40175eb30efc9c;
    uVar25 = uVar25 + lVar40;
    uVar27 = uVar29 >> 0x1c | uVar29 << 0x24;
    uVar38 = lVar40 + ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar29 >> 0x1c) << 0x35)) +
             ((uVar33 ^ uVar26) & uVar29 ^ uVar26 & uVar33);
    uVar27 = uVar25 >> 0xe | uVar25 << 0x32;
    lVar40 = uVar35 + ((uVar23 ^ uVar24) & uVar25 ^ uVar23) +
             ((uVar25 >> 0x12 | uVar25 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar25 >> 0xe) << 0x25)) + auVar5._8_8_ + -0x57e599b443bdcfff;
    uVar26 = uVar26 + lVar40;
    uVar27 = uVar38 >> 0x1c | uVar38 << 0x24;
    uVar35 = lVar40 + ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar38 >> 0x1c) << 0x35)) +
             ((uVar29 ^ uVar33) & uVar38 ^ uVar33 & uVar29);
    uVar27 = uVar26 >> 0xe | uVar26 << 0x32;
    lVar40 = uVar23 + ((uVar24 ^ uVar25) & uVar26 ^ uVar24) +
             ((uVar26 >> 0x12 | uVar26 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar26 >> 0xe) << 0x25)) + auVar5._16_8_ + DAT_002b2140._16_8_;
    uVar33 = uVar33 + lVar40;
    uVar27 = uVar35 >> 0x1c | uVar35 << 0x24;
    uVar23 = lVar40 + ((uVar35 >> 0x22 | uVar35 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar35 >> 0x1c) << 0x35)) +
             ((uVar38 ^ uVar29) & uVar35 ^ uVar29 & uVar38);
    uVar27 = uVar33 >> 0xe | uVar33 << 0x32;
    lVar40 = uVar24 + ((uVar25 ^ uVar26) & uVar33 ^ uVar25) +
             ((uVar33 >> 0x12 | uVar33 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar33 >> 0xe) << 0x25)) + auVar5._24_8_ + -0x3893ae5cf9ab41d0;
    uVar29 = uVar29 + lVar40;
    uVar27 = uVar23 >> 0x1c | uVar23 << 0x24;
    uVar24 = lVar40 + ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar23 >> 0x1c) << 0x35)) +
             ((uVar35 ^ uVar38) & uVar23 ^ uVar38 & uVar35);
    auVar50 = vpblendd_avx2(auVar7,auVar9,3);
    auVar42 = vpermq_avx2(auVar50,0x39);
    auVar50 = vperm2f128_avx(auVar13,(undefined1  [32])0x0,0x21);
    auVar44 = vpsrlq_avx2(auVar42,1);
    auVar49 = vpsllq_avx2(auVar42,0x38);
    auVar43 = vpsrlq_avx2(auVar42,7);
    auVar41 = vpsrlq_avx2(auVar44,7);
    auVar42 = vpsllq_avx2(auVar49,7);
    auVar42 = auVar43 ^ auVar44 ^ auVar49 ^ auVar41 ^ auVar42;
    auVar44 = vpsrlq_avx2(auVar50,0x13);
    auVar49 = vpsllq_avx2(auVar50,3);
    auVar43 = vpsrlq_avx2(auVar50,6);
    auVar41 = vpsrlq_avx2(auVar44,0x2a);
    auVar50 = vpsllq_avx2(auVar49,0x2a);
    auVar50 = auVar43 ^ auVar44 ^ auVar49 ^ auVar41 ^ auVar50;
    auVar43 = vpblendd_avx2(auVar11,auVar13,3);
    auVar43 = vpermq_avx2(auVar43,0x39);
    auVar14._0_8_ = auVar7._0_8_ + auVar42._0_8_ + auVar50._0_8_ + auVar43._0_8_;
    auVar14._8_8_ = auVar7._8_8_ + auVar42._8_8_ + auVar50._8_8_ + auVar43._8_8_;
    auVar14._16_8_ = auVar7._16_8_ + auVar42._16_8_ + auVar50._16_8_ + auVar43._16_8_;
    auVar14._24_8_ = auVar7._24_8_ + auVar42._24_8_ + auVar50._24_8_ + auVar43._24_8_;
    auVar50 = vperm2f128_avx(auVar14,(undefined1  [32])0x0,2);
    auVar43 = vpsrlq_avx2(auVar50,0x13);
    auVar41 = vpsllq_avx2(auVar50,3);
    auVar42 = vpsrlq_avx2(auVar50,6);
    auVar44 = vpsrlq_avx2(auVar43,0x2a);
    auVar50 = vpsllq_avx2(auVar41,0x2a);
    auVar50 = auVar42 ^ auVar43 ^ auVar41 ^ auVar44 ^ auVar50;
    auVar15._0_8_ = auVar14._0_8_ + auVar50._0_8_;
    auVar15._8_8_ = auVar14._8_8_ + auVar50._8_8_;
    auVar15._16_8_ = auVar14._16_8_ + auVar50._16_8_;
    auVar15._24_8_ = auVar14._24_8_ + auVar50._24_8_;
    uVar27 = uVar29 >> 0xe | uVar29 << 0x32;
    lVar40 = uVar25 + ((uVar26 ^ uVar33) & uVar29 ^ uVar26) +
             ((uVar29 >> 0x12 | uVar29 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar29 >> 0xe) << 0x25)) + auVar7._0_8_ + -0x2e6d17e62910ade8;
    uVar38 = uVar38 + lVar40;
    uVar27 = uVar24 >> 0x1c | uVar24 << 0x24;
    uVar25 = lVar40 + ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar24 >> 0x1c) << 0x35)) +
             ((uVar23 ^ uVar35) & uVar24 ^ uVar35 & uVar23);
    uVar27 = uVar38 >> 0xe | uVar38 << 0x32;
    lVar40 = uVar26 + ((uVar33 ^ uVar29) & uVar38 ^ uVar33) +
             ((uVar38 >> 0x12 | uVar38 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar38 >> 0xe) << 0x25)) + auVar7._8_8_ + -0x2966f9dbaa9a56f0;
    uVar35 = uVar35 + lVar40;
    uVar27 = uVar25 >> 0x1c | uVar25 << 0x24;
    uVar26 = lVar40 + ((uVar25 >> 0x22 | uVar25 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar25 >> 0x1c) << 0x35)) +
             ((uVar24 ^ uVar23) & uVar25 ^ uVar23 & uVar24);
    uVar27 = uVar35 >> 0xe | uVar35 << 0x32;
    lVar40 = uVar33 + ((uVar29 ^ uVar38) & uVar35 ^ uVar29) +
             ((uVar35 >> 0x12 | uVar35 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar35 >> 0xe) << 0x25)) + auVar7._16_8_ + DAT_002b2160._16_8_;
    uVar23 = uVar23 + lVar40;
    uVar27 = uVar26 >> 0x1c | uVar26 << 0x24;
    uVar33 = lVar40 + ((uVar26 >> 0x22 | uVar26 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar26 >> 0x1c) << 0x35)) +
             ((uVar25 ^ uVar24) & uVar26 ^ uVar24 & uVar25);
    uVar27 = uVar23 >> 0xe | uVar23 << 0x32;
    lVar40 = uVar29 + ((uVar38 ^ uVar35) & uVar23 ^ uVar38) +
             ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar23 >> 0xe) << 0x25)) + auVar7._24_8_ + 0x106aa07032bbd1b8;
    uVar24 = uVar24 + lVar40;
    uVar27 = uVar33 >> 0x1c | uVar33 << 0x24;
    uVar29 = lVar40 + ((uVar33 >> 0x22 | uVar33 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar33 >> 0x1c) << 0x35)) +
             ((uVar26 ^ uVar25) & uVar33 ^ uVar25 & uVar26);
    auVar50 = vpblendd_avx2(auVar9,auVar11,3);
    auVar42 = vpermq_avx2(auVar50,0x39);
    auVar50 = vperm2f128_avx(auVar15,(undefined1  [32])0x0,0x21);
    auVar44 = vpsrlq_avx2(auVar42,1);
    auVar49 = vpsllq_avx2(auVar42,0x38);
    auVar43 = vpsrlq_avx2(auVar42,7);
    auVar41 = vpsrlq_avx2(auVar44,7);
    auVar42 = vpsllq_avx2(auVar49,7);
    auVar42 = auVar43 ^ auVar44 ^ auVar49 ^ auVar41 ^ auVar42;
    auVar44 = vpsrlq_avx2(auVar50,0x13);
    auVar49 = vpsllq_avx2(auVar50,3);
    auVar43 = vpsrlq_avx2(auVar50,6);
    auVar41 = vpsrlq_avx2(auVar44,0x2a);
    auVar50 = vpsllq_avx2(auVar49,0x2a);
    auVar50 = auVar43 ^ auVar44 ^ auVar49 ^ auVar41 ^ auVar50;
    auVar43 = vpblendd_avx2(auVar13,auVar15,3);
    auVar43 = vpermq_avx2(auVar43,0x39);
    auVar16._0_8_ = auVar9._0_8_ + auVar42._0_8_ + auVar50._0_8_ + auVar43._0_8_;
    auVar16._8_8_ = auVar9._8_8_ + auVar42._8_8_ + auVar50._8_8_ + auVar43._8_8_;
    auVar16._16_8_ = auVar9._16_8_ + auVar42._16_8_ + auVar50._16_8_ + auVar43._16_8_;
    auVar16._24_8_ = auVar9._24_8_ + auVar42._24_8_ + auVar50._24_8_ + auVar43._24_8_;
    auVar50 = vperm2f128_avx(auVar16,(undefined1  [32])0x0,2);
    auVar43 = vpsrlq_avx2(auVar50,0x13);
    auVar41 = vpsllq_avx2(auVar50,3);
    auVar42 = vpsrlq_avx2(auVar50,6);
    auVar44 = vpsrlq_avx2(auVar43,0x2a);
    auVar50 = vpsllq_avx2(auVar41,0x2a);
    auVar50 = auVar42 ^ auVar43 ^ auVar41 ^ auVar44 ^ auVar50;
    auVar17._0_8_ = auVar16._0_8_ + auVar50._0_8_;
    auVar17._8_8_ = auVar16._8_8_ + auVar50._8_8_;
    auVar17._16_8_ = auVar16._16_8_ + auVar50._16_8_;
    auVar17._24_8_ = auVar16._24_8_ + auVar50._24_8_;
    uVar27 = uVar24 >> 0xe | uVar24 << 0x32;
    lVar40 = uVar38 + ((uVar35 ^ uVar23) & uVar24 ^ uVar35) +
             ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar24 >> 0xe) << 0x25)) + auVar9._0_8_ + 0x19a4c116b8d2d0c8;
    uVar25 = uVar25 + lVar40;
    uVar27 = uVar29 >> 0x1c | uVar29 << 0x24;
    uVar38 = lVar40 + ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar29 >> 0x1c) << 0x35)) +
             ((uVar33 ^ uVar26) & uVar29 ^ uVar26 & uVar33);
    uVar27 = uVar25 >> 0xe | uVar25 << 0x32;
    lVar40 = uVar35 + ((uVar23 ^ uVar24) & uVar25 ^ uVar23) +
             ((uVar25 >> 0x12 | uVar25 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar25 >> 0xe) << 0x25)) + auVar9._8_8_ + 0x1e376c085141ab53;
    uVar26 = uVar26 + lVar40;
    uVar27 = uVar38 >> 0x1c | uVar38 << 0x24;
    uVar35 = lVar40 + ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar38 >> 0x1c) << 0x35)) +
             ((uVar29 ^ uVar33) & uVar38 ^ uVar33 & uVar29);
    lVar36 = auVar17._16_8_ + DAT_002b2200._16_8_;
    uVar27 = uVar26 >> 0xe | uVar26 << 0x32;
    lVar40 = uVar23 + ((uVar24 ^ uVar25) & uVar26 ^ uVar24) +
             ((uVar26 >> 0x12 | uVar26 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar26 >> 0xe) << 0x25)) + auVar9._16_8_ + DAT_002b2180._16_8_;
    uVar33 = uVar33 + lVar40;
    uVar27 = uVar35 >> 0x1c | uVar35 << 0x24;
    uVar23 = lVar40 + ((uVar35 >> 0x22 | uVar35 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar35 >> 0x1c) << 0x35)) +
             ((uVar38 ^ uVar29) & uVar35 ^ uVar29 & uVar38);
    uVar27 = uVar33 >> 0xe | uVar33 << 0x32;
    lVar40 = uVar24 + ((uVar25 ^ uVar26) & uVar33 ^ uVar25) +
             ((uVar33 >> 0x12 | uVar33 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar33 >> 0xe) << 0x25)) + auVar9._24_8_ + 0x34b0bcb5e19b48a8;
    uVar29 = uVar29 + lVar40;
    uVar27 = uVar23 >> 0x1c | uVar23 << 0x24;
    uVar24 = lVar40 + ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar23 >> 0x1c) << 0x35)) +
             ((uVar35 ^ uVar38) & uVar23 ^ uVar38 & uVar35);
    auVar50 = vpblendd_avx2(auVar11,auVar13,3);
    auVar42 = vpermq_avx2(auVar50,0x39);
    auVar50 = vperm2f128_avx(auVar17,(undefined1  [32])0x0,0x21);
    auVar44 = vpsrlq_avx2(auVar42,1);
    auVar49 = vpsllq_avx2(auVar42,0x38);
    auVar43 = vpsrlq_avx2(auVar42,7);
    auVar41 = vpsrlq_avx2(auVar44,7);
    auVar42 = vpsllq_avx2(auVar49,7);
    auVar42 = auVar43 ^ auVar44 ^ auVar49 ^ auVar41 ^ auVar42;
    auVar44 = vpsrlq_avx2(auVar50,0x13);
    auVar49 = vpsllq_avx2(auVar50,3);
    auVar43 = vpsrlq_avx2(auVar50,6);
    auVar41 = vpsrlq_avx2(auVar44,0x2a);
    auVar50 = vpsllq_avx2(auVar49,0x2a);
    auVar50 = auVar43 ^ auVar44 ^ auVar49 ^ auVar41 ^ auVar50;
    auVar43 = vpblendd_avx2(auVar15,auVar17,3);
    auVar43 = vpermq_avx2(auVar43,0x39);
    auVar18._0_8_ = auVar11._0_8_ + auVar42._0_8_ + auVar50._0_8_ + auVar43._0_8_;
    auVar18._8_8_ = auVar11._8_8_ + auVar42._8_8_ + auVar50._8_8_ + auVar43._8_8_;
    auVar18._16_8_ = auVar11._16_8_ + auVar42._16_8_ + auVar50._16_8_ + auVar43._16_8_;
    auVar18._24_8_ = auVar11._24_8_ + auVar42._24_8_ + auVar50._24_8_ + auVar43._24_8_;
    auVar50 = vperm2f128_avx(auVar18,(undefined1  [32])0x0,2);
    auVar43 = vpsrlq_avx2(auVar50,0x13);
    auVar41 = vpsllq_avx2(auVar50,3);
    auVar42 = vpsrlq_avx2(auVar50,6);
    auVar44 = vpsrlq_avx2(auVar43,0x2a);
    auVar50 = vpsllq_avx2(auVar41,0x2a);
    auVar50 = auVar42 ^ auVar43 ^ auVar41 ^ auVar44 ^ auVar50;
    auVar19._0_8_ = auVar18._0_8_ + auVar50._0_8_;
    auVar19._8_8_ = auVar18._8_8_ + auVar50._8_8_;
    auVar19._16_8_ = auVar18._16_8_ + auVar50._16_8_;
    auVar19._24_8_ = auVar18._24_8_ + auVar50._24_8_;
    uVar27 = uVar29 >> 0xe | uVar29 << 0x32;
    lVar40 = uVar25 + ((uVar26 ^ uVar33) & uVar29 ^ uVar26) +
             ((uVar29 >> 0x12 | uVar29 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar29 >> 0xe) << 0x25)) + auVar11._0_8_ + 0x391c0cb3c5c95a63;
    uVar38 = uVar38 + lVar40;
    uVar27 = uVar24 >> 0x1c | uVar24 << 0x24;
    uVar25 = lVar40 + ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar24 >> 0x1c) << 0x35)) +
             ((uVar23 ^ uVar35) & uVar24 ^ uVar35 & uVar23);
    uVar27 = uVar38 >> 0xe | uVar38 << 0x32;
    lVar40 = uVar26 + ((uVar33 ^ uVar29) & uVar38 ^ uVar33) +
             ((uVar38 >> 0x12 | uVar38 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar38 >> 0xe) << 0x25)) + auVar11._8_8_ + 0x4ed8aa4ae3418acb;
    uVar35 = uVar35 + lVar40;
    uVar27 = uVar25 >> 0x1c | uVar25 << 0x24;
    uVar26 = lVar40 + ((uVar25 >> 0x22 | uVar25 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar25 >> 0x1c) << 0x35)) +
             ((uVar24 ^ uVar23) & uVar25 ^ uVar23 & uVar24);
    lVar31 = auVar19._16_8_ + DAT_002b2220._16_8_;
    uVar27 = uVar35 >> 0xe | uVar35 << 0x32;
    lVar40 = uVar33 + ((uVar29 ^ uVar38) & uVar35 ^ uVar29) +
             ((uVar35 >> 0x12 | uVar35 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar35 >> 0xe) << 0x25)) + auVar11._16_8_ + DAT_002b21a0._16_8_;
    uVar23 = uVar23 + lVar40;
    uVar27 = uVar26 >> 0x1c | uVar26 << 0x24;
    uVar33 = lVar40 + ((uVar26 >> 0x22 | uVar26 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar26 >> 0x1c) << 0x35)) +
             ((uVar25 ^ uVar24) & uVar26 ^ uVar24 & uVar25);
    uVar27 = uVar23 >> 0xe | uVar23 << 0x32;
    lVar40 = uVar29 + ((uVar38 ^ uVar35) & uVar23 ^ uVar38) +
             ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar23 >> 0xe) << 0x25)) + auVar11._24_8_ + 0x682e6ff3d6b2b8a3;
    uVar24 = uVar24 + lVar40;
    uVar27 = uVar33 >> 0x1c | uVar33 << 0x24;
    uVar29 = lVar40 + ((uVar33 >> 0x22 | uVar33 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar33 >> 0x1c) << 0x35)) +
             ((uVar26 ^ uVar25) & uVar33 ^ uVar25 & uVar26);
    auVar50 = vpblendd_avx2(auVar13,auVar15,3);
    auVar42 = vpermq_avx2(auVar50,0x39);
    auVar50 = vperm2f128_avx(auVar19,(undefined1  [32])0x0,0x21);
    auVar44 = vpsrlq_avx2(auVar42,1);
    auVar49 = vpsllq_avx2(auVar42,0x38);
    auVar43 = vpsrlq_avx2(auVar42,7);
    auVar41 = vpsrlq_avx2(auVar44,7);
    auVar42 = vpsllq_avx2(auVar49,7);
    auVar42 = auVar43 ^ auVar44 ^ auVar49 ^ auVar41 ^ auVar42;
    auVar44 = vpsrlq_avx2(auVar50,0x13);
    auVar49 = vpsllq_avx2(auVar50,3);
    auVar43 = vpsrlq_avx2(auVar50,6);
    auVar41 = vpsrlq_avx2(auVar44,0x2a);
    auVar50 = vpsllq_avx2(auVar49,0x2a);
    auVar50 = auVar43 ^ auVar44 ^ auVar49 ^ auVar41 ^ auVar50;
    auVar43 = vpblendd_avx2(auVar17,auVar19,3);
    auVar43 = vpermq_avx2(auVar43,0x39);
    auVar20._0_8_ = auVar13._0_8_ + auVar42._0_8_ + auVar50._0_8_ + auVar43._0_8_;
    auVar20._8_8_ = auVar13._8_8_ + auVar42._8_8_ + auVar50._8_8_ + auVar43._8_8_;
    auVar20._16_8_ = auVar13._16_8_ + auVar42._16_8_ + auVar50._16_8_ + auVar43._16_8_;
    auVar20._24_8_ = auVar13._24_8_ + auVar42._24_8_ + auVar50._24_8_ + auVar43._24_8_;
    auVar50 = vperm2f128_avx(auVar20,(undefined1  [32])0x0,2);
    auVar43 = vpsrlq_avx2(auVar50,0x13);
    auVar41 = vpsllq_avx2(auVar50,3);
    auVar42 = vpsrlq_avx2(auVar50,6);
    auVar44 = vpsrlq_avx2(auVar43,0x2a);
    auVar50 = vpsllq_avx2(auVar41,0x2a);
    auVar50 = auVar42 ^ auVar43 ^ auVar41 ^ auVar44 ^ auVar50;
    auVar21._0_8_ = auVar20._0_8_ + auVar50._0_8_;
    auVar21._8_8_ = auVar20._8_8_ + auVar50._8_8_;
    auVar21._16_8_ = auVar20._16_8_ + auVar50._16_8_;
    auVar21._24_8_ = auVar20._24_8_ + auVar50._24_8_;
    uVar27 = uVar24 >> 0xe | uVar24 << 0x32;
    lVar40 = uVar38 + ((uVar35 ^ uVar23) & uVar24 ^ uVar35) +
             ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar24 >> 0xe) << 0x25)) + auVar13._0_8_ + 0x748f82ee5defb2fc;
    uVar25 = uVar25 + lVar40;
    uVar27 = uVar29 >> 0x1c | uVar29 << 0x24;
    uVar38 = lVar40 + ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar29 >> 0x1c) << 0x35)) +
             ((uVar33 ^ uVar26) & uVar29 ^ uVar26 & uVar33);
    uVar27 = uVar25 >> 0xe | uVar25 << 0x32;
    lVar40 = uVar35 + ((uVar23 ^ uVar24) & uVar25 ^ uVar23) +
             ((uVar25 >> 0x12 | uVar25 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar25 >> 0xe) << 0x25)) + auVar13._8_8_ + 0x78a5636f43172f60;
    uVar26 = uVar26 + lVar40;
    uVar27 = uVar38 >> 0x1c | uVar38 << 0x24;
    uVar35 = lVar40 + ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar38 >> 0x1c) << 0x35)) +
             ((uVar29 ^ uVar33) & uVar38 ^ uVar33 & uVar29);
    lVar37 = auVar21._16_8_ + DAT_002b2240._16_8_;
    uVar27 = uVar26 >> 0xe | uVar26 << 0x32;
    lVar40 = uVar23 + ((uVar24 ^ uVar25) & uVar26 ^ uVar24) +
             ((uVar26 >> 0x12 | uVar26 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar26 >> 0xe) << 0x25)) + auVar13._16_8_ + DAT_002b21c0._16_8_;
    uVar33 = uVar33 + lVar40;
    uVar27 = uVar35 >> 0x1c | uVar35 << 0x24;
    uVar23 = lVar40 + ((uVar35 >> 0x22 | uVar35 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar35 >> 0x1c) << 0x35)) +
             ((uVar38 ^ uVar29) & uVar35 ^ uVar29 & uVar38);
    uVar27 = uVar33 >> 0xe | uVar33 << 0x32;
    lVar40 = uVar24 + ((uVar25 ^ uVar26) & uVar33 ^ uVar25) +
             ((uVar33 >> 0x12 | uVar33 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar33 >> 0xe) << 0x25)) + auVar13._24_8_ + -0x7338fdf7e59bc614;
    uVar29 = uVar29 + lVar40;
    uVar27 = uVar23 >> 0x1c | uVar23 << 0x24;
    uVar24 = lVar40 + ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar23 >> 0x1c) << 0x35)) +
             ((uVar35 ^ uVar38) & uVar23 ^ uVar38 & uVar35);
    auVar50 = vpblendd_avx2(auVar15,auVar17,3);
    auVar42 = vpermq_avx2(auVar50,0x39);
    auVar50 = vperm2f128_avx(auVar21,(undefined1  [32])0x0,0x21);
    auVar44 = vpsrlq_avx2(auVar42,1);
    auVar49 = vpsllq_avx2(auVar42,0x38);
    auVar43 = vpsrlq_avx2(auVar42,7);
    auVar41 = vpsrlq_avx2(auVar44,7);
    auVar42 = vpsllq_avx2(auVar49,7);
    auVar42 = auVar43 ^ auVar44 ^ auVar49 ^ auVar41 ^ auVar42;
    auVar44 = vpsrlq_avx2(auVar50,0x13);
    auVar49 = vpsllq_avx2(auVar50,3);
    auVar43 = vpsrlq_avx2(auVar50,6);
    auVar41 = vpsrlq_avx2(auVar44,0x2a);
    auVar50 = vpsllq_avx2(auVar49,0x2a);
    auVar50 = auVar43 ^ auVar44 ^ auVar49 ^ auVar41 ^ auVar50;
    auVar43 = vpblendd_avx2(auVar19,auVar21,3);
    auVar43 = vpermq_avx2(auVar43,0x39);
    auVar22._0_8_ = auVar15._0_8_ + auVar42._0_8_ + auVar50._0_8_ + auVar43._0_8_;
    auVar22._8_8_ = auVar15._8_8_ + auVar42._8_8_ + auVar50._8_8_ + auVar43._8_8_;
    auVar22._16_8_ = auVar15._16_8_ + auVar42._16_8_ + auVar50._16_8_ + auVar43._16_8_;
    auVar22._24_8_ = auVar15._24_8_ + auVar42._24_8_ + auVar50._24_8_ + auVar43._24_8_;
    auVar50 = vperm2f128_avx(auVar22,(undefined1  [32])0x0,2);
    auVar43 = vpsrlq_avx2(auVar50,0x13);
    auVar41 = vpsllq_avx2(auVar50,3);
    auVar42 = vpsrlq_avx2(auVar50,6);
    auVar44 = vpsrlq_avx2(auVar43,0x2a);
    auVar50 = vpsllq_avx2(auVar41,0x2a);
    auVar50 = auVar42 ^ auVar43 ^ auVar41 ^ auVar44 ^ auVar50;
    uVar27 = uVar29 >> 0xe | uVar29 << 0x32;
    lVar40 = uVar25 + ((uVar26 ^ uVar33) & uVar29 ^ uVar26) +
             ((uVar29 >> 0x12 | uVar29 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar29 >> 0xe) << 0x25)) + auVar15._0_8_ + -0x6f410005dc9ce1d8;
    uVar38 = uVar38 + lVar40;
    uVar27 = uVar24 >> 0x1c | uVar24 << 0x24;
    uVar25 = lVar40 + ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar24 >> 0x1c) << 0x35)) +
             ((uVar23 ^ uVar35) & uVar24 ^ uVar35 & uVar23);
    uVar27 = uVar38 >> 0xe | uVar38 << 0x32;
    lVar40 = uVar26 + ((uVar33 ^ uVar29) & uVar38 ^ uVar33) +
             ((uVar38 >> 0x12 | uVar38 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar38 >> 0xe) << 0x25)) + auVar15._8_8_ + -0x5baf9314217d4217;
    uVar35 = uVar35 + lVar40;
    uVar27 = uVar25 >> 0x1c | uVar25 << 0x24;
    uVar26 = lVar40 + ((uVar25 >> 0x22 | uVar25 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar25 >> 0x1c) << 0x35)) +
             ((uVar24 ^ uVar23) & uVar25 ^ uVar23 & uVar24);
    lVar40 = auVar22._0_8_ + auVar50._0_8_ + 0x4cc5d4becb3e42b6;
    lVar34 = auVar22._8_8_ + auVar50._8_8_ + 0x597f299cfc657e2a;
    lVar32 = auVar22._16_8_ + auVar50._16_8_ + DAT_002b2260._16_8_;
    lVar28 = auVar22._24_8_ + auVar50._24_8_ + 0x6c44198c4a475817;
    uVar27 = uVar35 >> 0xe | uVar35 << 0x32;
    lVar30 = uVar33 + ((uVar29 ^ uVar38) & uVar35 ^ uVar29) +
             ((uVar35 >> 0x12 | uVar35 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar35 >> 0xe) << 0x25)) + auVar15._16_8_ + DAT_002b21e0._16_8_;
    uVar23 = uVar23 + lVar30;
    uVar27 = uVar26 >> 0x1c | uVar26 << 0x24;
    uVar33 = lVar30 + ((uVar26 >> 0x22 | uVar26 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar26 >> 0x1c) << 0x35)) +
             ((uVar25 ^ uVar24) & uVar26 ^ uVar24 & uVar25);
    uVar27 = uVar23 >> 0xe | uVar23 << 0x32;
    lVar30 = uVar29 + ((uVar38 ^ uVar35) & uVar23 ^ uVar38) +
             ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar23 >> 0xe) << 0x25)) + auVar15._24_8_ + -0x398e870d1c8dacd5;
    uVar24 = uVar24 + lVar30;
    uVar27 = uVar33 >> 0x1c | uVar33 << 0x24;
    uVar27 = lVar30 + ((uVar33 >> 0x22 | uVar33 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar33 >> 0x1c) << 0x35)) +
             ((uVar26 ^ uVar25) & uVar33 ^ uVar25 & uVar26);
    local_38 = local_38 + -1;
    if (local_38 == 0) break;
    uVar29 = uVar24 >> 0xe | uVar24 << 0x32;
    lVar30 = uVar38 + ((uVar35 ^ uVar23) & uVar24 ^ uVar35) +
             ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ uVar29 ^
             (uVar29 >> 0x1b | (uVar24 >> 0xe) << 0x25)) + auVar17._0_8_ + -0x35d8c13115d99e64;
    uVar25 = uVar25 + lVar30;
    uVar29 = uVar27 >> 0x1c | uVar27 << 0x24;
    uVar38 = lVar30 + ((uVar27 >> 0x22 | uVar27 * 0x40000000) ^ uVar29 ^
                      (uVar29 >> 0xb | (uVar27 >> 0x1c) << 0x35)) +
             ((uVar33 ^ uVar26) & uVar27 ^ uVar26 & uVar33);
    auVar50 = vpshufb_avx2(param_3[4],_DAT_002ad980);
    uVar29 = uVar25 >> 0xe | uVar25 << 0x32;
    lVar30 = uVar35 + ((uVar23 ^ uVar24) & uVar25 ^ uVar23) +
             ((uVar25 >> 0x12 | uVar25 << 0x2e) ^ uVar29 ^
             (uVar29 >> 0x1b | (uVar25 >> 0xe) << 0x25)) + auVar17._8_8_ + -0x2e794738de3f3df9;
    uVar26 = uVar26 + lVar30;
    uVar29 = uVar38 >> 0x1c | uVar38 << 0x24;
    uVar35 = lVar30 + ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ uVar29 ^
                      (uVar29 >> 0xb | (uVar38 >> 0x1c) << 0x35)) +
             ((uVar27 ^ uVar33) & uVar38 ^ uVar33 & uVar27);
    local_1c0 = auVar50._0_8_;
    lStack_1b8 = auVar50._8_8_;
    lStack_1b0 = auVar50._16_8_ + _sha512_K._16_8_;
    lStack_1a8 = auVar50._24_8_;
    uVar29 = uVar26 >> 0xe | uVar26 << 0x32;
    lVar36 = uVar23 + ((uVar24 ^ uVar25) & uVar26 ^ uVar24) +
             ((uVar26 >> 0x12 | uVar26 << 0x2e) ^ uVar29 ^
             (uVar29 >> 0x1b | (uVar26 >> 0xe) << 0x25)) + lVar36;
    uVar33 = uVar33 + lVar36;
    uVar29 = uVar35 >> 0x1c | uVar35 << 0x24;
    uVar23 = lVar36 + ((uVar35 >> 0x22 | uVar35 * 0x40000000) ^ uVar29 ^
                      (uVar29 >> 0xb | (uVar35 >> 0x1c) << 0x35)) +
             ((uVar38 ^ uVar27) & uVar35 ^ uVar27 & uVar38);
    uVar29 = uVar33 >> 0xe | uVar33 << 0x32;
    lVar36 = uVar24 + ((uVar25 ^ uVar26) & uVar33 ^ uVar25) +
             ((uVar33 >> 0x12 | uVar33 << 0x2e) ^ uVar29 ^
             (uVar29 >> 0x1b | (uVar33 >> 0xe) << 0x25)) + auVar17._24_8_ + -0xa82b08011912e88;
    uVar27 = uVar27 + lVar36;
    uVar29 = uVar23 >> 0x1c | uVar23 << 0x24;
    uVar24 = lVar36 + ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ uVar29 ^
                      (uVar29 >> 0xb | (uVar23 >> 0x1c) << 0x35)) +
             ((uVar35 ^ uVar38) & uVar23 ^ uVar38 & uVar35);
    uVar29 = uVar27 >> 0xe | uVar27 << 0x32;
    lVar36 = uVar25 + ((uVar26 ^ uVar33) & uVar27 ^ uVar26) +
             ((uVar27 >> 0x12 | uVar27 << 0x2e) ^ uVar29 ^
             (uVar29 >> 0x1b | (uVar27 >> 0xe) << 0x25)) + auVar19._0_8_ + 0x6f067aa72176fba;
    uVar38 = uVar38 + lVar36;
    uVar29 = uVar24 >> 0x1c | uVar24 << 0x24;
    uVar25 = lVar36 + ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ uVar29 ^
                      (uVar29 >> 0xb | (uVar24 >> 0x1c) << 0x35)) +
             ((uVar23 ^ uVar35) & uVar24 ^ uVar35 & uVar23);
    auVar42 = vpshufb_avx2(param_3[5],_DAT_002ad980);
    uVar29 = uVar38 >> 0xe | uVar38 << 0x32;
    lVar36 = uVar26 + ((uVar33 ^ uVar27) & uVar38 ^ uVar33) +
             ((uVar38 >> 0x12 | uVar38 << 0x2e) ^ uVar29 ^
             (uVar29 >> 0x1b | (uVar38 >> 0xe) << 0x25)) + auVar19._8_8_ + 0xa637dc5a2c898a6;
    uVar35 = uVar35 + lVar36;
    uVar29 = uVar25 >> 0x1c | uVar25 << 0x24;
    uVar26 = lVar36 + ((uVar25 >> 0x22 | uVar25 * 0x40000000) ^ uVar29 ^
                      (uVar29 >> 0xb | (uVar25 >> 0x1c) << 0x35)) +
             ((uVar24 ^ uVar23) & uVar25 ^ uVar23 & uVar24);
    local_1a0 = auVar42._0_8_;
    lStack_198 = auVar42._8_8_;
    lStack_190 = auVar42._16_8_ + DAT_002b2020._16_8_;
    lStack_188 = auVar42._24_8_;
    uVar29 = uVar35 >> 0xe | uVar35 << 0x32;
    lVar31 = uVar33 + ((uVar27 ^ uVar38) & uVar35 ^ uVar27) +
             ((uVar35 >> 0x12 | uVar35 << 0x2e) ^ uVar29 ^
             (uVar29 >> 0x1b | (uVar35 >> 0xe) << 0x25)) + lVar31;
    uVar23 = uVar23 + lVar31;
    uVar29 = uVar26 >> 0x1c | uVar26 << 0x24;
    uVar33 = lVar31 + ((uVar26 >> 0x22 | uVar26 * 0x40000000) ^ uVar29 ^
                      (uVar29 >> 0xb | (uVar26 >> 0x1c) << 0x35)) +
             ((uVar25 ^ uVar24) & uVar26 ^ uVar24 & uVar25);
    uVar29 = uVar23 >> 0xe | uVar23 << 0x32;
    lVar36 = uVar27 + ((uVar38 ^ uVar35) & uVar23 ^ uVar38) +
             ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ uVar29 ^
             (uVar29 >> 0x1b | (uVar23 >> 0xe) << 0x25)) + auVar19._24_8_ + 0x1b710b35131c471b;
    uVar24 = uVar24 + lVar36;
    uVar27 = uVar33 >> 0x1c | uVar33 << 0x24;
    uVar29 = lVar36 + ((uVar33 >> 0x22 | uVar33 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar33 >> 0x1c) << 0x35)) +
             ((uVar26 ^ uVar25) & uVar33 ^ uVar25 & uVar26);
    uVar27 = uVar24 >> 0xe | uVar24 << 0x32;
    lVar36 = uVar38 + ((uVar35 ^ uVar23) & uVar24 ^ uVar35) +
             ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar24 >> 0xe) << 0x25)) + auVar21._0_8_ + 0x28db77f523047d84;
    uVar25 = uVar25 + lVar36;
    uVar27 = uVar29 >> 0x1c | uVar29 << 0x24;
    uVar38 = lVar36 + ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar29 >> 0x1c) << 0x35)) +
             ((uVar33 ^ uVar26) & uVar29 ^ uVar26 & uVar33);
    auVar43 = vpshufb_avx2(param_3[6],_DAT_002ad980);
    uVar27 = uVar25 >> 0xe | uVar25 << 0x32;
    lVar36 = uVar35 + ((uVar23 ^ uVar24) & uVar25 ^ uVar23) +
             ((uVar25 >> 0x12 | uVar25 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar25 >> 0xe) << 0x25)) + auVar21._8_8_ + 0x32caab7b40c72493;
    uVar26 = uVar26 + lVar36;
    uVar27 = uVar38 >> 0x1c | uVar38 << 0x24;
    uVar35 = lVar36 + ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar38 >> 0x1c) << 0x35)) +
             ((uVar29 ^ uVar33) & uVar38 ^ uVar33 & uVar29);
    local_180 = auVar43._0_8_;
    lStack_178 = auVar43._8_8_;
    lStack_170 = auVar43._16_8_ + DAT_002b2040._16_8_;
    lStack_168 = auVar43._24_8_;
    uVar27 = uVar26 >> 0xe | uVar26 << 0x32;
    lVar37 = uVar23 + ((uVar24 ^ uVar25) & uVar26 ^ uVar24) +
             ((uVar26 >> 0x12 | uVar26 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar26 >> 0xe) << 0x25)) + lVar37;
    uVar33 = uVar33 + lVar37;
    uVar27 = uVar35 >> 0x1c | uVar35 << 0x24;
    uVar23 = lVar37 + ((uVar35 >> 0x22 | uVar35 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar35 >> 0x1c) << 0x35)) +
             ((uVar38 ^ uVar29) & uVar35 ^ uVar29 & uVar38);
    uVar27 = uVar33 >> 0xe | uVar33 << 0x32;
    lVar36 = uVar24 + ((uVar25 ^ uVar26) & uVar33 ^ uVar25) +
             ((uVar33 >> 0x12 | uVar33 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar33 >> 0xe) << 0x25)) + auVar21._24_8_ + 0x431d67c49c100d4c;
    uVar29 = uVar29 + lVar36;
    uVar27 = uVar23 >> 0x1c | uVar23 << 0x24;
    uVar24 = lVar36 + ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar23 >> 0x1c) << 0x35)) +
             ((uVar35 ^ uVar38) & uVar23 ^ uVar38 & uVar35);
    uVar27 = uVar29 >> 0xe | uVar29 << 0x32;
    lVar40 = uVar25 + ((uVar26 ^ uVar33) & uVar29 ^ uVar26) +
             ((uVar29 >> 0x12 | uVar29 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar29 >> 0xe) << 0x25)) + lVar40;
    uVar38 = uVar38 + lVar40;
    uVar27 = uVar24 >> 0x1c | uVar24 << 0x24;
    uVar25 = lVar40 + ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar24 >> 0x1c) << 0x35)) +
             ((uVar23 ^ uVar35) & uVar24 ^ uVar35 & uVar23);
    auVar44 = vpshufb_avx2(param_3[7],_DAT_002ad980);
    uVar27 = uVar38 >> 0xe | uVar38 << 0x32;
    lVar34 = uVar26 + ((uVar33 ^ uVar29) & uVar38 ^ uVar33) +
             ((uVar38 >> 0x12 | uVar38 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar38 >> 0xe) << 0x25)) + lVar34;
    uVar35 = uVar35 + lVar34;
    uVar27 = uVar25 >> 0x1c | uVar25 << 0x24;
    uVar26 = lVar34 + ((uVar25 >> 0x22 | uVar25 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar25 >> 0x1c) << 0x35)) +
             ((uVar24 ^ uVar23) & uVar25 ^ uVar23 & uVar24);
    local_160 = auVar44._0_8_;
    lStack_158 = auVar44._8_8_;
    lStack_150 = auVar44._16_8_ + DAT_002b2060._16_8_;
    lStack_148 = auVar44._24_8_;
    uVar27 = uVar35 >> 0xe | uVar35 << 0x32;
    lVar32 = uVar33 + ((uVar29 ^ uVar38) & uVar35 ^ uVar29) +
             ((uVar35 >> 0x12 | uVar35 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar35 >> 0xe) << 0x25)) + lVar32;
    uVar23 = uVar23 + lVar32;
    uVar27 = uVar26 >> 0x1c | uVar26 << 0x24;
    uVar33 = lVar32 + ((uVar26 >> 0x22 | uVar26 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar26 >> 0x1c) << 0x35)) +
             ((uVar25 ^ uVar24) & uVar26 ^ uVar24 & uVar25);
    uVar27 = uVar23 >> 0xe | uVar23 << 0x32;
    lVar28 = uVar29 + ((uVar38 ^ uVar35) & uVar23 ^ uVar38) +
             ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ uVar27 ^
             (uVar27 >> 0x1b | (uVar23 >> 0xe) << 0x25)) + lVar28;
    uVar27 = uVar33 >> 0x1c | uVar33 << 0x24;
    *param_1 = *param_1 +
               lVar28 + ((uVar33 >> 0x22 | uVar33 * 0x40000000) ^ uVar27 ^
                        (uVar27 >> 0xb | (uVar33 >> 0x1c) << 0x35)) +
               ((uVar26 ^ uVar25) & uVar33 ^ uVar25 & uVar26);
    param_1[1] = param_1[1] + uVar33;
    param_1[2] = param_1[2] + uVar26;
    param_1[3] = param_1[3] + uVar25;
    param_1[4] = param_1[4] + uVar24 + lVar28;
    param_1[5] = param_1[5] + uVar23;
    param_1[6] = param_1[6] + uVar35;
    param_1[7] = param_1[7] + uVar38;
    param_3 = param_3 + 4;
  }
  uVar29 = uVar24 >> 0xe | uVar24 << 0x32;
  lVar30 = uVar38 + ((uVar35 ^ uVar23) & uVar24 ^ uVar35) +
           ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ uVar29 ^ (uVar29 >> 0x1b | (uVar24 >> 0xe) << 0x25))
           + auVar17._0_8_ + -0x35d8c13115d99e64;
  uVar25 = uVar25 + lVar30;
  uVar29 = uVar27 >> 0x1c | uVar27 << 0x24;
  uVar38 = lVar30 + ((uVar27 >> 0x22 | uVar27 * 0x40000000) ^ uVar29 ^
                    (uVar29 >> 0xb | (uVar27 >> 0x1c) << 0x35)) +
           ((uVar33 ^ uVar26) & uVar27 ^ uVar26 & uVar33);
  uVar29 = uVar25 >> 0xe | uVar25 << 0x32;
  lVar30 = uVar35 + ((uVar23 ^ uVar24) & uVar25 ^ uVar23) +
           ((uVar25 >> 0x12 | uVar25 << 0x2e) ^ uVar29 ^ (uVar29 >> 0x1b | (uVar25 >> 0xe) << 0x25))
           + auVar17._8_8_ + -0x2e794738de3f3df9;
  uVar26 = uVar26 + lVar30;
  uVar29 = uVar38 >> 0x1c | uVar38 << 0x24;
  uVar35 = lVar30 + ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ uVar29 ^
                    (uVar29 >> 0xb | (uVar38 >> 0x1c) << 0x35)) +
           ((uVar27 ^ uVar33) & uVar38 ^ uVar33 & uVar27);
  uVar29 = uVar26 >> 0xe | uVar26 << 0x32;
  lVar36 = uVar23 + ((uVar24 ^ uVar25) & uVar26 ^ uVar24) +
           ((uVar26 >> 0x12 | uVar26 << 0x2e) ^ uVar29 ^ (uVar29 >> 0x1b | (uVar26 >> 0xe) << 0x25))
           + lVar36;
  uVar33 = uVar33 + lVar36;
  uVar29 = uVar35 >> 0x1c | uVar35 << 0x24;
  uVar23 = lVar36 + ((uVar35 >> 0x22 | uVar35 * 0x40000000) ^ uVar29 ^
                    (uVar29 >> 0xb | (uVar35 >> 0x1c) << 0x35)) +
           ((uVar38 ^ uVar27) & uVar35 ^ uVar27 & uVar38);
  uVar29 = uVar33 >> 0xe | uVar33 << 0x32;
  lVar36 = uVar24 + ((uVar25 ^ uVar26) & uVar33 ^ uVar25) +
           ((uVar33 >> 0x12 | uVar33 << 0x2e) ^ uVar29 ^ (uVar29 >> 0x1b | (uVar33 >> 0xe) << 0x25))
           + auVar17._24_8_ + -0xa82b08011912e88;
  uVar27 = uVar27 + lVar36;
  uVar29 = uVar23 >> 0x1c | uVar23 << 0x24;
  uVar24 = lVar36 + ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ uVar29 ^
                    (uVar29 >> 0xb | (uVar23 >> 0x1c) << 0x35)) +
           ((uVar35 ^ uVar38) & uVar23 ^ uVar38 & uVar35);
  uVar29 = uVar27 >> 0xe | uVar27 << 0x32;
  lVar36 = uVar25 + ((uVar26 ^ uVar33) & uVar27 ^ uVar26) +
           ((uVar27 >> 0x12 | uVar27 << 0x2e) ^ uVar29 ^ (uVar29 >> 0x1b | (uVar27 >> 0xe) << 0x25))
           + auVar19._0_8_ + 0x6f067aa72176fba;
  uVar38 = uVar38 + lVar36;
  uVar29 = uVar24 >> 0x1c | uVar24 << 0x24;
  uVar25 = lVar36 + ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ uVar29 ^
                    (uVar29 >> 0xb | (uVar24 >> 0x1c) << 0x35)) +
           ((uVar23 ^ uVar35) & uVar24 ^ uVar35 & uVar23);
  uVar29 = uVar38 >> 0xe | uVar38 << 0x32;
  lVar36 = uVar26 + ((uVar33 ^ uVar27) & uVar38 ^ uVar33) +
           ((uVar38 >> 0x12 | uVar38 << 0x2e) ^ uVar29 ^ (uVar29 >> 0x1b | (uVar38 >> 0xe) << 0x25))
           + auVar19._8_8_ + 0xa637dc5a2c898a6;
  uVar35 = uVar35 + lVar36;
  uVar29 = uVar25 >> 0x1c | uVar25 << 0x24;
  uVar26 = lVar36 + ((uVar25 >> 0x22 | uVar25 * 0x40000000) ^ uVar29 ^
                    (uVar29 >> 0xb | (uVar25 >> 0x1c) << 0x35)) +
           ((uVar24 ^ uVar23) & uVar25 ^ uVar23 & uVar24);
  uVar29 = uVar35 >> 0xe | uVar35 << 0x32;
  lVar31 = uVar33 + ((uVar27 ^ uVar38) & uVar35 ^ uVar27) +
           ((uVar35 >> 0x12 | uVar35 << 0x2e) ^ uVar29 ^ (uVar29 >> 0x1b | (uVar35 >> 0xe) << 0x25))
           + lVar31;
  uVar23 = uVar23 + lVar31;
  uVar29 = uVar26 >> 0x1c | uVar26 << 0x24;
  uVar33 = lVar31 + ((uVar26 >> 0x22 | uVar26 * 0x40000000) ^ uVar29 ^
                    (uVar29 >> 0xb | (uVar26 >> 0x1c) << 0x35)) +
           ((uVar25 ^ uVar24) & uVar26 ^ uVar24 & uVar25);
  uVar29 = uVar23 >> 0xe | uVar23 << 0x32;
  lVar36 = uVar27 + ((uVar38 ^ uVar35) & uVar23 ^ uVar38) +
           ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ uVar29 ^ (uVar29 >> 0x1b | (uVar23 >> 0xe) << 0x25))
           + auVar19._24_8_ + 0x1b710b35131c471b;
  uVar24 = uVar24 + lVar36;
  uVar27 = uVar33 >> 0x1c | uVar33 << 0x24;
  uVar29 = lVar36 + ((uVar33 >> 0x22 | uVar33 * 0x40000000) ^ uVar27 ^
                    (uVar27 >> 0xb | (uVar33 >> 0x1c) << 0x35)) +
           ((uVar26 ^ uVar25) & uVar33 ^ uVar25 & uVar26);
  uVar27 = uVar24 >> 0xe | uVar24 << 0x32;
  lVar36 = uVar38 + ((uVar35 ^ uVar23) & uVar24 ^ uVar35) +
           ((uVar24 >> 0x12 | uVar24 << 0x2e) ^ uVar27 ^ (uVar27 >> 0x1b | (uVar24 >> 0xe) << 0x25))
           + auVar21._0_8_ + 0x28db77f523047d84;
  uVar25 = uVar25 + lVar36;
  uVar27 = uVar29 >> 0x1c | uVar29 << 0x24;
  uVar38 = lVar36 + ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ uVar27 ^
                    (uVar27 >> 0xb | (uVar29 >> 0x1c) << 0x35)) +
           ((uVar33 ^ uVar26) & uVar29 ^ uVar26 & uVar33);
  uVar27 = uVar25 >> 0xe | uVar25 << 0x32;
  lVar36 = uVar35 + ((uVar23 ^ uVar24) & uVar25 ^ uVar23) +
           ((uVar25 >> 0x12 | uVar25 << 0x2e) ^ uVar27 ^ (uVar27 >> 0x1b | (uVar25 >> 0xe) << 0x25))
           + auVar21._8_8_ + 0x32caab7b40c72493;
  uVar26 = uVar26 + lVar36;
  uVar27 = uVar38 >> 0x1c | uVar38 << 0x24;
  uVar35 = lVar36 + ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ uVar27 ^
                    (uVar27 >> 0xb | (uVar38 >> 0x1c) << 0x35)) +
           ((uVar29 ^ uVar33) & uVar38 ^ uVar33 & uVar29);
  uVar27 = uVar26 >> 0xe | uVar26 << 0x32;
  lVar37 = uVar23 + ((uVar24 ^ uVar25) & uVar26 ^ uVar24) +
           ((uVar26 >> 0x12 | uVar26 << 0x2e) ^ uVar27 ^ (uVar27 >> 0x1b | (uVar26 >> 0xe) << 0x25))
           + lVar37;
  uVar33 = uVar33 + lVar37;
  uVar27 = uVar35 >> 0x1c | uVar35 << 0x24;
  uVar23 = lVar37 + ((uVar35 >> 0x22 | uVar35 * 0x40000000) ^ uVar27 ^
                    (uVar27 >> 0xb | (uVar35 >> 0x1c) << 0x35)) +
           ((uVar38 ^ uVar29) & uVar35 ^ uVar29 & uVar38);
  uVar27 = uVar33 >> 0xe | uVar33 << 0x32;
  lVar36 = uVar24 + ((uVar25 ^ uVar26) & uVar33 ^ uVar25) +
           ((uVar33 >> 0x12 | uVar33 << 0x2e) ^ uVar27 ^ (uVar27 >> 0x1b | (uVar33 >> 0xe) << 0x25))
           + auVar21._24_8_ + 0x431d67c49c100d4c;
  uVar29 = uVar29 + lVar36;
  uVar27 = uVar23 >> 0x1c | uVar23 << 0x24;
  uVar24 = lVar36 + ((uVar23 >> 0x22 | uVar23 * 0x40000000) ^ uVar27 ^
                    (uVar27 >> 0xb | (uVar23 >> 0x1c) << 0x35)) +
           ((uVar35 ^ uVar38) & uVar23 ^ uVar38 & uVar35);
  uVar27 = uVar29 >> 0xe | uVar29 << 0x32;
  lVar40 = uVar25 + ((uVar26 ^ uVar33) & uVar29 ^ uVar26) +
           ((uVar29 >> 0x12 | uVar29 << 0x2e) ^ uVar27 ^ (uVar27 >> 0x1b | (uVar29 >> 0xe) << 0x25))
           + lVar40;
  uVar38 = uVar38 + lVar40;
  uVar27 = uVar24 >> 0x1c | uVar24 << 0x24;
  uVar25 = lVar40 + ((uVar24 >> 0x22 | uVar24 * 0x40000000) ^ uVar27 ^
                    (uVar27 >> 0xb | (uVar24 >> 0x1c) << 0x35)) +
           ((uVar23 ^ uVar35) & uVar24 ^ uVar35 & uVar23);
  uVar27 = uVar38 >> 0xe | uVar38 << 0x32;
  lVar34 = uVar26 + ((uVar33 ^ uVar29) & uVar38 ^ uVar33) +
           ((uVar38 >> 0x12 | uVar38 << 0x2e) ^ uVar27 ^ (uVar27 >> 0x1b | (uVar38 >> 0xe) << 0x25))
           + lVar34;
  uVar35 = uVar35 + lVar34;
  uVar27 = uVar25 >> 0x1c | uVar25 << 0x24;
  uVar26 = lVar34 + ((uVar25 >> 0x22 | uVar25 * 0x40000000) ^ uVar27 ^
                    (uVar27 >> 0xb | (uVar25 >> 0x1c) << 0x35)) +
           ((uVar24 ^ uVar23) & uVar25 ^ uVar23 & uVar24);
  uVar27 = uVar35 >> 0xe | uVar35 << 0x32;
  lVar32 = uVar33 + ((uVar29 ^ uVar38) & uVar35 ^ uVar29) +
           ((uVar35 >> 0x12 | uVar35 << 0x2e) ^ uVar27 ^ (uVar27 >> 0x1b | (uVar35 >> 0xe) << 0x25))
           + lVar32;
  uVar23 = uVar23 + lVar32;
  uVar27 = uVar26 >> 0x1c | uVar26 << 0x24;
  uVar33 = lVar32 + ((uVar26 >> 0x22 | uVar26 * 0x40000000) ^ uVar27 ^
                    (uVar27 >> 0xb | (uVar26 >> 0x1c) << 0x35)) +
           ((uVar25 ^ uVar24) & uVar26 ^ uVar24 & uVar25);
  uVar27 = uVar23 >> 0xe | uVar23 << 0x32;
  lVar28 = uVar29 + ((uVar38 ^ uVar35) & uVar23 ^ uVar38) +
           ((uVar23 >> 0x12 | uVar23 << 0x2e) ^ uVar27 ^ (uVar27 >> 0x1b | (uVar23 >> 0xe) << 0x25))
           + lVar28;
  uVar27 = uVar33 >> 0x1c | uVar33 << 0x24;
  *param_1 = *param_1 +
             lVar28 + ((uVar33 >> 0x22 | uVar33 * 0x40000000) ^ uVar27 ^
                      (uVar27 >> 0xb | (uVar33 >> 0x1c) << 0x35)) +
             ((uVar26 ^ uVar25) & uVar33 ^ uVar25 & uVar26);
  param_1[1] = param_1[1] + uVar33;
  param_1[2] = param_1[2] + uVar26;
  param_1[3] = param_1[3] + uVar25;
  param_1[4] = param_1[4] + uVar24 + lVar28;
  param_1[5] = param_1[5] + uVar23;
  param_1[6] = param_1[6] + uVar35;
  param_1[7] = param_1[7] + uVar38;
  return;
}

