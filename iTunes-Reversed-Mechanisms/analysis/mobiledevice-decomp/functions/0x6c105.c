// rea decompile_all
// name: _lzbitmap_encode_rle
// address: 0x6c105
// body: available
// range: 0x6c105-0x6c1e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _lzbitmap_encode_rle(long param_1,long param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  ushort uVar4;
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
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  uint uVar38;
  ulong uVar39;
  uint uVar40;
  undefined1 uVar41;
  ulong uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  ushort uVar5;
  
  uVar39 = 0;
  do {
    uVar41 = 0;
    if ((uVar39 & 1) == 0) {
      uVar41 = 0xf;
    }
    *(undefined1 *)(param_2 + (ulong)(param_3 + (int)uVar39)) = uVar41;
    uVar39 = uVar39 + 1;
  } while (uVar39 != 0x10);
  if (param_3 == 0) {
    uVar40 = 0;
    uVar38 = 0;
  }
  else {
    uVar39 = 0;
    uVar40 = 0;
    do {
      pcVar1 = (char *)(param_2 + uVar39);
      cVar6 = *pcVar1;
      cVar7 = pcVar1[1];
      cVar8 = pcVar1[2];
      cVar9 = pcVar1[3];
      cVar10 = pcVar1[4];
      cVar11 = pcVar1[5];
      cVar12 = pcVar1[6];
      cVar13 = pcVar1[7];
      cVar14 = pcVar1[8];
      cVar15 = pcVar1[9];
      cVar16 = pcVar1[10];
      cVar17 = pcVar1[0xb];
      cVar18 = pcVar1[0xc];
      cVar19 = pcVar1[0xd];
      cVar20 = pcVar1[0xe];
      cVar21 = pcVar1[0xf];
      pcVar1 = (char *)(param_2 + 1 + uVar39);
      cVar22 = *pcVar1;
      cVar23 = pcVar1[1];
      cVar24 = pcVar1[2];
      cVar25 = pcVar1[3];
      cVar26 = pcVar1[4];
      cVar27 = pcVar1[5];
      cVar28 = pcVar1[6];
      cVar29 = pcVar1[7];
      cVar30 = pcVar1[8];
      cVar31 = pcVar1[9];
      cVar32 = pcVar1[10];
      cVar33 = pcVar1[0xb];
      cVar34 = pcVar1[0xc];
      cVar35 = pcVar1[0xd];
      cVar36 = pcVar1[0xe];
      cVar37 = pcVar1[0xf];
      pcVar1 = (char *)(param_1 + (ulong)uVar40);
      *pcVar1 = cVar6;
      pcVar1[1] = cVar7;
      pcVar1[2] = cVar8;
      pcVar1[3] = cVar9;
      pcVar1[4] = cVar10;
      pcVar1[5] = cVar11;
      pcVar1[6] = cVar12;
      pcVar1[7] = cVar13;
      pcVar1[8] = cVar14;
      pcVar1[9] = cVar15;
      pcVar1[10] = cVar16;
      pcVar1[0xb] = cVar17;
      pcVar1[0xc] = cVar18;
      pcVar1[0xd] = cVar19;
      pcVar1[0xe] = cVar20;
      pcVar1[0xf] = cVar21;
      auVar43[0] = -(cVar22 == cVar6);
      auVar43[1] = -(cVar23 == cVar7);
      auVar43[2] = -(cVar24 == cVar8);
      auVar43[3] = -(cVar25 == cVar9);
      auVar43[4] = -(cVar26 == cVar10);
      auVar43[5] = -(cVar27 == cVar11);
      auVar43[6] = -(cVar28 == cVar12);
      auVar43[7] = -(cVar29 == cVar13);
      auVar43[8] = -(cVar30 == cVar14);
      auVar43[9] = -(cVar31 == cVar15);
      auVar43[10] = -(cVar32 == cVar16);
      auVar43[0xb] = -(cVar33 == cVar17);
      auVar43[0xc] = -(cVar34 == cVar18);
      auVar43[0xd] = -(cVar35 == cVar19);
      auVar43[0xe] = -(cVar36 == cVar20);
      auVar43[0xf] = -(cVar37 == cVar21);
      uVar4 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd;
      uVar5 = uVar4 | (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe;
      uVar4 = (ushort)(uVar5 & ((ushort)(uVar5 | (ushort)(auVar43[0xf] >> 7) << 0xf) >> 2) << 1 &
                      uVar4 << 1) >> 1;
      uVar38 = uVar4 | 0x2000;
      iVar3 = 0;
      if (uVar38 != 0) {
        for (; (uVar38 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
        }
      }
      uVar38 = (int)uVar39 + iVar3 + 1;
      uVar39 = (ulong)uVar38;
      uVar40 = iVar3 + 1 + uVar40;
      if (uVar4 != 0) {
        uVar39 = (ulong)uVar40;
        uVar40 = uVar40 + 1;
        *(undefined1 *)(param_1 + uVar39) = 0xf;
        uVar39 = (ulong)(uVar38 + 3);
        do {
          pcVar2 = (char *)(param_2 + -1 + uVar39);
          pcVar1 = (char *)(param_2 + uVar39);
          auVar44[0] = -(*pcVar1 == *pcVar2);
          auVar44[1] = -(pcVar1[1] == pcVar2[1]);
          auVar44[2] = -(pcVar1[2] == pcVar2[2]);
          auVar44[3] = -(pcVar1[3] == pcVar2[3]);
          auVar44[4] = -(pcVar1[4] == pcVar2[4]);
          auVar44[5] = -(pcVar1[5] == pcVar2[5]);
          auVar44[6] = -(pcVar1[6] == pcVar2[6]);
          auVar44[7] = -(pcVar1[7] == pcVar2[7]);
          auVar44[8] = -(pcVar1[8] == pcVar2[8]);
          auVar44[9] = -(pcVar1[9] == pcVar2[9]);
          auVar44[10] = -(pcVar1[10] == pcVar2[10]);
          auVar44[0xb] = -(pcVar1[0xb] == pcVar2[0xb]);
          auVar44[0xc] = -(pcVar1[0xc] == pcVar2[0xc]);
          auVar44[0xd] = -(pcVar1[0xd] == pcVar2[0xd]);
          auVar44[0xe] = -(pcVar1[0xe] == pcVar2[0xe]);
          auVar44[0xf] = -(pcVar1[0xf] == pcVar2[0xf]);
          uVar38 = (ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar44[0xf] >> 7) << 0xf) ^ 0x7fff | 0x8000;
          iVar3 = 0;
          if (uVar38 != 0) {
            for (; (uVar38 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
            }
          }
          uVar42 = (ulong)uVar40;
          uVar40 = uVar40 + 1;
          *(char *)(param_1 + uVar42) = (char)iVar3;
          uVar39 = (ulong)(uint)((int)uVar39 + iVar3);
        } while ((short)iVar3 == 0xf);
      }
      uVar38 = (uint)uVar39;
    } while (uVar38 < param_3);
  }
  return (uVar40 + param_3) - uVar38;
}

