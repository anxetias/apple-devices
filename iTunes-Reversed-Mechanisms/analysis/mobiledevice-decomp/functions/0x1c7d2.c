// rea decompile_all
// name: _AccelerateCrypto_AES_decrypt_xmm_no_save
// address: 0x1c7d2
// body: available
// range: 0x1c7d2-0x1ca06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AccelerateCrypto_AES_decrypt_xmm_no_save(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  uint uVar18;
  
  uVar13 = (ulong)(byte)param_3[0x3c];
  if (((uVar13 == 0xa0) || (uVar13 == 0xc0)) || (uVar13 == 0xe0)) {
    puVar23 = (uint *)((long)param_3 + uVar13);
    uVar11 = *param_1 ^ *puVar23;
    uVar20 = param_1[1] ^ puVar23[1];
    uVar15 = param_1[2] ^ puVar23[2];
    uVar22 = puVar23[-4];
    uVar21 = puVar23[-3];
    uVar16 = puVar23[-2];
    uVar17 = puVar23[-1];
    puVar24 = puVar23 + -4;
    uVar18 = param_1[3] ^ puVar23[3];
    do {
      uVar1 = uVar11 >> 8;
      uVar12 = uVar11 >> 0x10;
      uVar2 = uVar20 >> 8;
      uVar19 = uVar17 ^ *(uint *)(&DAT_002af5d0 + (ulong)(uVar11 >> 0x18) * 4) ^
               *(uint *)(&DAT_002af1d0 + (ulong)(uVar20 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_002aedd0 + (ulong)(uVar15 >> 8 & 0xff) * 4) ^
               *(uint *)(&_AccelerateCrypto_AESDecryptTable + (ulong)(uVar18 & 0xff) * 4);
      uVar11 = uVar22 ^ *(uint *)(&_AccelerateCrypto_AESDecryptTable + (ulong)(byte)uVar11 * 4) ^
               *(uint *)(&DAT_002af5d0 + (ulong)(uVar20 >> 0x18) * 4) ^
               *(uint *)(&DAT_002af1d0 + (ulong)(uVar15 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_002aedd0 + (ulong)(uVar18 >> 8 & 0xff) * 4);
      uVar20 = uVar21 ^ *(uint *)(&DAT_002aedd0 + (ulong)(uVar1 & 0xff) * 4) ^
               *(uint *)(&_AccelerateCrypto_AESDecryptTable + (ulong)(uVar20 & 0xff) * 4) ^
               *(uint *)(&DAT_002af5d0 + (ulong)(uVar15 >> 0x18) * 4) ^
               *(uint *)(&DAT_002af1d0 + (ulong)(uVar18 >> 0x10 & 0xff) * 4);
      uVar15 = uVar16 ^ *(uint *)(&DAT_002af1d0 + (ulong)(uVar12 & 0xff) * 4) ^
               *(uint *)(&DAT_002aedd0 + (ulong)(uVar2 & 0xff) * 4) ^
               *(uint *)(&_AccelerateCrypto_AESDecryptTable + (ulong)(uVar15 & 0xff) * 4) ^
               *(uint *)(&DAT_002af5d0 + (ulong)(uVar18 >> 0x18) * 4);
      puVar23 = puVar24 + -4;
      uVar22 = *puVar23;
      uVar21 = puVar24[-3];
      uVar16 = puVar24[-2];
      uVar17 = puVar24[-1];
      puVar24 = puVar23;
      uVar18 = uVar19;
    } while (puVar23 != param_3);
    uVar18 = *(uint *)(&DAT_002b0dd0 + (ulong)(uVar11 >> 8 & 0xff) * 4);
    uVar1 = *(uint *)(&DAT_002b11d0 + (ulong)(uVar11 >> 0x10 & 0xff) * 4);
    uVar2 = *(uint *)(&DAT_002b15d0 + (ulong)(uVar11 >> 0x18) * 4);
    uVar12 = *(uint *)(&_AccelerateCrypto_AESInvSubBytesWordTable + (ulong)(uVar20 & 0xff) * 4);
    uVar3 = *(uint *)(&DAT_002b0dd0 + (ulong)(uVar20 >> 8 & 0xff) * 4);
    uVar4 = *(uint *)(&DAT_002b11d0 + (ulong)(uVar20 >> 0x10 & 0xff) * 4);
    uVar5 = *(uint *)(&_AccelerateCrypto_AESInvSubBytesWordTable + (ulong)(uVar15 & 0xff) * 4);
    uVar6 = *(uint *)(&DAT_002b0dd0 + (ulong)(uVar15 >> 8 & 0xff) * 4);
    uVar7 = *(uint *)(&DAT_002b15d0 + (ulong)(uVar15 >> 0x18) * 4);
    uVar8 = *(uint *)(&_AccelerateCrypto_AESInvSubBytesWordTable + (ulong)(uVar19 & 0xff) * 4);
    uVar9 = *(uint *)(&DAT_002b11d0 + (ulong)(byte)(uVar19 >> 0x10) * 4);
    uVar10 = *(uint *)(&DAT_002b15d0 + (ulong)(byte)(uVar19 >> 0x18) * 4);
    *param_2 = uVar22 ^ *(uint *)(&_AccelerateCrypto_AESInvSubBytesWordTable +
                                 (ulong)(byte)uVar11 * 4) ^
               *(uint *)(&DAT_002b15d0 + (ulong)(uVar20 >> 0x18) * 4) ^
               *(uint *)(&DAT_002b11d0 + (ulong)(uVar15 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_002b0dd0 + (ulong)(uVar19 >> 8 & 0xff) * 4);
    param_2[1] = uVar21 ^ uVar18 ^ uVar12 ^ uVar7 ^ uVar9;
    param_2[2] = uVar16 ^ uVar1 ^ uVar3 ^ uVar5 ^ uVar10;
    param_2[3] = uVar17 ^ uVar2 ^ uVar4 ^ uVar6 ^ uVar8;
    uVar14 = 0;
  }
  else {
    uVar14 = 0xffffffffffffffff;
  }
  return uVar14;
}

