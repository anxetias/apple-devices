// rea decompile_all
// name: _lzbitmap_decode_rle
// address: 0x1ea48a
// body: available
// range: 0x1ea48a-0x1ea52a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _lzbitmap_decode_rle(long param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  ushort uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  
  uVar22 = 0;
  if (param_3 != 0 && *param_2 != '\x0f') {
    uVar23 = 0;
    uVar21 = 0;
    do {
      pcVar1 = param_2 + uVar23;
      cVar5 = *pcVar1;
      cVar6 = pcVar1[1];
      cVar7 = pcVar1[2];
      cVar8 = pcVar1[3];
      cVar9 = pcVar1[4];
      cVar10 = pcVar1[5];
      cVar11 = pcVar1[6];
      cVar12 = pcVar1[7];
      cVar13 = pcVar1[8];
      cVar14 = pcVar1[9];
      cVar15 = pcVar1[10];
      cVar16 = pcVar1[0xb];
      cVar17 = pcVar1[0xc];
      cVar18 = pcVar1[0xd];
      cVar19 = pcVar1[0xe];
      cVar20 = pcVar1[0xf];
      pcVar1 = (char *)(param_1 + (ulong)uVar21);
      *pcVar1 = cVar5;
      pcVar1[1] = cVar6;
      pcVar1[2] = cVar7;
      pcVar1[3] = cVar8;
      pcVar1[4] = cVar9;
      pcVar1[5] = cVar10;
      pcVar1[6] = cVar11;
      pcVar1[7] = cVar12;
      pcVar1[8] = cVar13;
      pcVar1[9] = cVar14;
      pcVar1[10] = cVar15;
      pcVar1[0xb] = cVar16;
      pcVar1[0xc] = cVar17;
      pcVar1[0xd] = cVar18;
      pcVar1[0xe] = cVar19;
      pcVar1[0xf] = cVar20;
      auVar25[0] = -(cVar5 == '\x0f');
      auVar25[1] = -(cVar6 == '\x0f');
      auVar25[2] = -(cVar7 == '\x0f');
      auVar25[3] = -(cVar8 == '\x0f');
      auVar25[4] = -(cVar9 == '\x0f');
      auVar25[5] = -(cVar10 == '\x0f');
      auVar25[6] = -(cVar11 == '\x0f');
      auVar25[7] = -(cVar12 == '\x0f');
      auVar25[8] = -(cVar13 == '\x0f');
      auVar25[9] = -(cVar14 == '\x0f');
      auVar25[10] = -(cVar15 == '\x0f');
      auVar25[0xb] = -(cVar16 == '\x0f');
      auVar25[0xc] = -(cVar17 == '\x0f');
      auVar25[0xd] = -(cVar18 == '\x0f');
      auVar25[0xe] = -(cVar19 == '\x0f');
      auVar25[0xf] = -(cVar20 == '\x0f');
      uVar4 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
      uVar22 = uVar4 + 0x10000;
      iVar3 = 0;
      if (uVar22 != 0) {
        for (; (uVar22 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
        }
      }
      uVar21 = uVar21 + iVar3;
      uVar23 = iVar3 + uVar23;
      if (uVar4 != 0) {
        auVar25 = pshufb(ZEXT116((byte)param_2[uVar23 - 1]),(undefined1  [16])0x0);
        *(undefined1 (*) [16])(param_1 + (ulong)uVar21) = auVar25;
        uVar21 = uVar21 + 3;
        uVar23 = uVar23 + 1;
        do {
          uVar24 = (ulong)uVar23;
          uVar23 = uVar23 + 1;
          bVar2 = param_2[uVar24];
          uVar24 = (ulong)uVar21;
          uVar21 = uVar21 + bVar2;
          *(undefined1 (*) [16])(param_1 + uVar24) = auVar25;
          if (bVar2 < 0xf) break;
        } while (uVar21 < param_3);
      }
      uVar22 = param_3;
    } while (uVar21 < param_3);
  }
  return uVar22;
}

