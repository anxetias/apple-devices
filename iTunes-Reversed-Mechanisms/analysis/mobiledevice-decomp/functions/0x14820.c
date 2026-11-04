// rea decompile_all
// name: _md5_compress
// address: 0x14820
// body: available
// range: 0x14820-0x1507e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _md5_compress(int *param_1,long param_2,int *param_3)

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
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  
  if (param_2 != 0) {
    iVar22 = *param_1;
    uVar17 = param_1[1];
    uVar16 = param_1[2];
    uVar19 = param_1[3];
    do {
      iVar1 = *param_3;
      iVar2 = param_3[1];
      iVar3 = param_3[2];
      iVar4 = param_3[3];
      iVar5 = param_3[4];
      iVar6 = param_3[5];
      iVar7 = param_3[6];
      iVar8 = param_3[7];
      uVar18 = ((uVar19 ^ uVar16) & uVar17 ^ uVar19) + iVar22 + iVar1 + 0xd76aa478;
      iVar22 = param_3[8];
      iVar9 = param_3[9];
      iVar10 = param_3[10];
      iVar11 = param_3[0xb];
      iVar12 = param_3[0xc];
      iVar13 = param_3[0xd];
      iVar14 = param_3[0xe];
      iVar15 = param_3[0xf];
      uVar18 = (uVar18 * 0x80 | uVar18 >> 0x19) + uVar17;
      uVar19 = ((uVar16 ^ uVar17) & uVar18 ^ uVar16) + uVar19 + iVar2 + 0xe8c7b756;
      uVar20 = (uVar19 * 0x1000 | uVar19 >> 0x14) + uVar18;
      uVar16 = uVar16 + iVar3 + ((uVar18 ^ uVar17) & uVar20 ^ uVar17) + 0x242070db;
      uVar16 = (uVar16 * 0x20000 | uVar16 >> 0xf) + uVar20;
      uVar17 = uVar17 + iVar4 + ((uVar20 ^ uVar18) & uVar16 ^ uVar18) + 0xc1bdceee;
      uVar19 = (uVar17 * 0x400000 | uVar17 >> 10) + uVar16;
      uVar17 = uVar18 + iVar5 + ((uVar16 ^ uVar20) & uVar19 ^ uVar20) + 0xf57c0faf;
      uVar18 = (uVar17 * 0x80 | uVar17 >> 0x19) + uVar19;
      uVar17 = uVar20 + iVar6 + ((uVar19 ^ uVar16) & uVar18 ^ uVar16) + 0x4787c62a;
      uVar20 = (uVar17 * 0x1000 | uVar17 >> 0x14) + uVar18;
      uVar17 = uVar16 + iVar7 + ((uVar18 ^ uVar19) & uVar20 ^ uVar19) + 0xa8304613;
      uVar17 = (uVar17 * 0x20000 | uVar17 >> 0xf) + uVar20;
      uVar16 = uVar19 + iVar8 + ((uVar20 ^ uVar18) & uVar17 ^ uVar18) + 0xfd469501;
      uVar16 = (uVar16 * 0x400000 | uVar16 >> 10) + uVar17;
      uVar19 = uVar18 + iVar22 + ((uVar17 ^ uVar20) & uVar16 ^ uVar20) + 0x698098d8;
      uVar19 = (uVar19 * 0x80 | uVar19 >> 0x19) + uVar16;
      uVar18 = uVar20 + iVar9 + ((uVar16 ^ uVar17) & uVar19 ^ uVar17) + 0x8b44f7af;
      uVar18 = (uVar18 * 0x1000 | uVar18 >> 0x14) + uVar19;
      uVar17 = (uVar17 + iVar10 + ((uVar19 ^ uVar16) & uVar18 ^ uVar16)) - 0xa44f;
      uVar17 = (uVar17 * 0x20000 | uVar17 >> 0xf) + uVar18;
      uVar16 = uVar16 + iVar11 + ((uVar18 ^ uVar19) & uVar17 ^ uVar19) + 0x895cd7be;
      uVar16 = (uVar16 * 0x400000 | uVar16 >> 10) + uVar17;
      uVar19 = uVar19 + iVar12 + ((uVar17 ^ uVar18) & uVar16 ^ uVar18) + 0x6b901122;
      uVar19 = (uVar19 * 0x80 | uVar19 >> 0x19) + uVar16;
      uVar18 = uVar18 + iVar13 + ((uVar16 ^ uVar17) & uVar19 ^ uVar17) + 0xfd987193;
      uVar18 = (uVar18 * 0x1000 | uVar18 >> 0x14) + uVar19;
      uVar17 = uVar17 + iVar14 + ((uVar19 ^ uVar16) & uVar18 ^ uVar16) + 0xa679438e;
      uVar17 = (uVar17 * 0x20000 | uVar17 >> 0xf) + uVar18;
      uVar16 = uVar16 + iVar15 + ((uVar18 ^ uVar19) & uVar17 ^ uVar19) + 0x49b40821;
      uVar16 = (uVar16 * 0x400000 | uVar16 >> 10) + uVar17;
      uVar19 = uVar19 + iVar2 + ((uVar16 ^ uVar17) & uVar18 ^ uVar17) + 0xf61e2562;
      uVar19 = (uVar19 * 0x20 | uVar19 >> 0x1b) + uVar16;
      uVar18 = uVar18 + iVar7 + ((uVar19 ^ uVar16) & uVar17 ^ uVar16) + 0xc040b340;
      uVar18 = (uVar18 * 0x200 | uVar18 >> 0x17) + uVar19;
      uVar17 = uVar17 + iVar11 + ((uVar18 ^ uVar19) & uVar16 ^ uVar19) + 0x265e5a51;
      uVar17 = (uVar17 * 0x4000 | uVar17 >> 0x12) + uVar18;
      uVar16 = uVar16 + iVar1 + ((uVar17 ^ uVar18) & uVar19 ^ uVar18) + 0xe9b6c7aa;
      uVar16 = (uVar16 * 0x100000 | uVar16 >> 0xc) + uVar17;
      uVar19 = uVar19 + iVar6 + ((uVar16 ^ uVar17) & uVar18 ^ uVar17) + 0xd62f105d;
      uVar19 = (uVar19 * 0x20 | uVar19 >> 0x1b) + uVar16;
      uVar18 = uVar18 + iVar10 + ((uVar19 ^ uVar16) & uVar17 ^ uVar16) + 0x2441453;
      uVar18 = (uVar18 * 0x200 | uVar18 >> 0x17) + uVar19;
      uVar17 = uVar17 + iVar15 + ((uVar18 ^ uVar19) & uVar16 ^ uVar19) + 0xd8a1e681;
      uVar17 = (uVar17 * 0x4000 | uVar17 >> 0x12) + uVar18;
      uVar16 = uVar16 + iVar5 + ((uVar17 ^ uVar18) & uVar19 ^ uVar18) + 0xe7d3fbc8;
      uVar16 = (uVar16 * 0x100000 | uVar16 >> 0xc) + uVar17;
      uVar19 = uVar19 + iVar9 + ((uVar16 ^ uVar17) & uVar18 ^ uVar17) + 0x21e1cde6;
      uVar19 = (uVar19 * 0x20 | uVar19 >> 0x1b) + uVar16;
      uVar18 = uVar18 + iVar14 + ((uVar19 ^ uVar16) & uVar17 ^ uVar16) + 0xc33707d6;
      uVar20 = (uVar18 * 0x200 | uVar18 >> 0x17) + uVar19;
      uVar17 = uVar17 + iVar4 + ((uVar20 ^ uVar19) & uVar16 ^ uVar19) + 0xf4d50d87;
      uVar17 = (uVar17 * 0x4000 | uVar17 >> 0x12) + uVar20;
      uVar16 = uVar16 + iVar22 + ((uVar17 ^ uVar20) & uVar19 ^ uVar20) + 0x455a14ed;
      uVar16 = (uVar16 * 0x100000 | uVar16 >> 0xc) + uVar17;
      uVar19 = uVar19 + iVar13 + ((uVar16 ^ uVar17) & uVar20 ^ uVar17) + 0xa9e3e905;
      uVar18 = (uVar19 * 0x20 | uVar19 >> 0x1b) + uVar16;
      uVar19 = uVar20 + iVar3 + ((uVar18 ^ uVar16) & uVar17 ^ uVar16) + 0xfcefa3f8;
      uVar21 = (uVar19 * 0x200 | uVar19 >> 0x17) + uVar18;
      uVar17 = ((uVar21 ^ uVar18) & uVar16 ^ uVar18) + uVar17 + iVar8 + 0x676f02d9;
      uVar19 = (uVar17 * 0x4000 | uVar17 >> 0x12) + uVar21;
      uVar17 = ((uVar19 ^ uVar21) & uVar18 ^ uVar21) + uVar16 + iVar12 + 0x8d2a4c8a;
      uVar16 = (uVar17 * 0x100000 | uVar17 >> 0xc) + uVar19;
      uVar17 = (uVar18 + iVar6 + (uVar19 ^ uVar21 ^ uVar16)) - 0x5c6be;
      uVar20 = (uVar17 * 0x10 | uVar17 >> 0x1c) + uVar16;
      uVar17 = (uVar16 ^ uVar19 ^ uVar20) + uVar21 + iVar22 + 0x8771f681;
      uVar18 = (uVar17 * 0x800 | uVar17 >> 0x15) + uVar20;
      uVar17 = (uVar20 ^ uVar16 ^ uVar18) + uVar19 + iVar11 + 0x6d9d6122;
      uVar17 = (uVar17 * 0x10000 | uVar17 >> 0x10) + uVar18;
      uVar16 = (uVar18 ^ uVar20 ^ uVar17) + uVar16 + iVar14 + 0xfde5380c;
      uVar21 = (uVar16 * 0x800000 | uVar16 >> 9) + uVar17;
      uVar16 = uVar20 + iVar2 + (uVar17 ^ uVar18 ^ uVar21) + 0xa4beea44;
      uVar19 = (uVar16 * 0x10 | uVar16 >> 0x1c) + uVar21;
      uVar16 = uVar18 + iVar5 + (uVar21 ^ uVar17 ^ uVar19) + 0x4bdecfa9;
      uVar16 = (uVar16 * 0x800 | uVar16 >> 0x15) + uVar19;
      uVar17 = uVar17 + iVar8 + (uVar19 ^ uVar21 ^ uVar16) + 0xf6bb4b60;
      uVar17 = (uVar17 * 0x10000 | uVar17 >> 0x10) + uVar16;
      uVar18 = uVar21 + iVar10 + (uVar16 ^ uVar19 ^ uVar17) + 0xbebfbc70;
      uVar20 = (uVar18 * 0x800000 | uVar18 >> 9) + uVar17;
      uVar19 = uVar19 + iVar13 + (uVar17 ^ uVar16 ^ uVar20) + 0x289b7ec6;
      uVar18 = (uVar19 * 0x10 | uVar19 >> 0x1c) + uVar20;
      uVar16 = uVar16 + iVar1 + (uVar20 ^ uVar17 ^ uVar18) + 0xeaa127fa;
      uVar19 = (uVar16 * 0x800 | uVar16 >> 0x15) + uVar18;
      uVar17 = uVar17 + iVar4 + (uVar18 ^ uVar20 ^ uVar19) + 0xd4ef3085;
      uVar17 = (uVar17 * 0x10000 | uVar17 >> 0x10) + uVar19;
      uVar16 = (uVar19 ^ uVar18 ^ uVar17) + uVar20 + iVar7 + 0x4881d05;
      uVar16 = (uVar16 * 0x800000 | uVar16 >> 9) + uVar17;
      uVar18 = uVar18 + iVar9 + (uVar17 ^ uVar19 ^ uVar16) + 0xd9d4d039;
      uVar18 = (uVar18 * 0x10 | uVar18 >> 0x1c) + uVar16;
      uVar19 = (uVar16 ^ uVar17 ^ uVar18) + uVar19 + iVar12 + 0xe6db99e5;
      uVar20 = (uVar19 * 0x800 | uVar19 >> 0x15) + uVar18;
      uVar17 = (uVar18 ^ uVar16 ^ uVar20) + uVar17 + iVar15 + 0x1fa27cf8;
      uVar19 = (uVar17 * 0x10000 | uVar17 >> 0x10) + uVar20;
      uVar17 = (uVar20 ^ uVar18 ^ uVar19) + uVar16 + iVar3 + 0xc4ac5665;
      uVar17 = (uVar17 * 0x800000 | uVar17 >> 9) + uVar19;
      uVar16 = ((~uVar20 | uVar17) ^ uVar19) + uVar18 + iVar1 + 0xf4292244;
      uVar21 = (uVar16 * 0x40 | uVar16 >> 0x1a) + uVar17;
      uVar16 = ((~uVar19 | uVar21) ^ uVar17) + uVar20 + iVar8 + 0x432aff97;
      uVar18 = (uVar16 * 0x400 | uVar16 >> 0x16) + uVar21;
      uVar16 = ((~uVar17 | uVar18) ^ uVar21) + uVar19 + iVar14 + 0xab9423a7;
      uVar20 = (uVar16 * 0x8000 | uVar16 >> 0x11) + uVar18;
      uVar17 = ((~uVar21 | uVar20) ^ uVar18) + uVar17 + iVar6 + 0xfc93a039;
      uVar16 = (uVar17 * 0x200000 | uVar17 >> 0xb) + uVar20;
      uVar17 = ((~uVar18 | uVar16) ^ uVar20) + uVar21 + iVar12 + 0x655b59c3;
      uVar17 = (uVar17 * 0x40 | uVar17 >> 0x1a) + uVar16;
      uVar19 = uVar18 + iVar4 + ((~uVar20 | uVar17) ^ uVar16) + 0x8f0ccc92;
      uVar18 = (uVar19 * 0x400 | uVar19 >> 0x16) + uVar17;
      uVar19 = (uVar20 + iVar10 + ((~uVar16 | uVar18) ^ uVar17)) - 0x100b83;
      uVar20 = (uVar19 * 0x8000 | uVar19 >> 0x11) + uVar18;
      uVar16 = uVar16 + iVar2 + ((~uVar17 | uVar20) ^ uVar18) + 0x85845dd1;
      uVar19 = (uVar16 * 0x200000 | uVar16 >> 0xb) + uVar20;
      uVar17 = ((~uVar18 | uVar19) ^ uVar20) + uVar17 + iVar22 + 0x6fa87e4f;
      uVar21 = (uVar17 * 0x40 | uVar17 >> 0x1a) + uVar19;
      uVar17 = ((~uVar20 | uVar21) ^ uVar19) + uVar18 + iVar15 + 0xfe2ce6e0;
      uVar16 = (uVar17 * 0x400 | uVar17 >> 0x16) + uVar21;
      uVar17 = ((~uVar19 | uVar16) ^ uVar21) + uVar20 + iVar7 + 0xa3014314;
      uVar20 = (uVar17 * 0x8000 | uVar17 >> 0x11) + uVar16;
      uVar17 = uVar19 + iVar13 + ((~uVar21 | uVar20) ^ uVar16) + 0x4e0811a1;
      uVar18 = (uVar17 * 0x200000 | uVar17 >> 0xb) + uVar20;
      uVar17 = ((~uVar16 | uVar18) ^ uVar20) + uVar21 + iVar5 + 0xf7537e82;
      uVar17 = (uVar17 * 0x40 | uVar17 >> 0x1a) + uVar18;
      uVar16 = ((~uVar20 | uVar17) ^ uVar18) + uVar16 + iVar11 + 0xbd3af235;
      uVar19 = (uVar16 * 0x400 | uVar16 >> 0x16) + uVar17;
      uVar16 = ((~uVar18 | uVar19) ^ uVar17) + iVar3 + uVar20 + 0x2ad7d2bb;
      uVar16 = (uVar16 * 0x8000 | uVar16 >> 0x11) + uVar19;
      uVar18 = ((~uVar17 | uVar16) ^ uVar19) + iVar9 + uVar18 + 0xeb86d391;
      param_3 = param_3 + 0x10;
      iVar22 = uVar17 + *param_1;
      uVar17 = (uVar18 * 0x200000 | uVar18 >> 0xb) + uVar16 + param_1[1];
      uVar16 = uVar16 + param_1[2];
      uVar19 = uVar19 + param_1[3];
      *param_1 = iVar22;
      param_1[1] = uVar17;
      param_1[2] = uVar16;
      param_1[3] = uVar19;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

