// rea decompile_all
// name: SERestoreInfo::P73BaseDeliveryObject::isDev
// address: 0x24f6c2
// body: available
// range: 0x24f6c2-0x24f866 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::P73BaseDeliveryObject::isDev() const */

undefined2 __thiscall SERestoreInfo::P73BaseDeliveryObject::isDev(P73BaseDeliveryObject *this)

{
  char *pcVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  pcVar1 = *(char **)(this + 0x40);
  if (*(long *)(this + 0x48) - (long)pcVar1 == 0x20) {
    auVar13[0] = -(pcVar1[0x10] == 'd');
    auVar13[1] = -(pcVar1[0x11] == -0x3d);
    auVar13[2] = -(pcVar1[0x12] == -100);
    auVar13[3] = -(pcVar1[0x13] == -0x5b);
    auVar13[4] = -(pcVar1[0x14] == '\x13');
    auVar13[5] = -(pcVar1[0x15] == -0x25);
    auVar13[6] = -(pcVar1[0x16] == '4');
    auVar13[7] = -(pcVar1[0x17] == -0x53);
    auVar13[8] = -(pcVar1[0x18] == -0x7c);
    auVar13[9] = -(pcVar1[0x19] == '9');
    auVar13[10] = -(pcVar1[0x1a] == '\"');
    auVar13[0xb] = -(pcVar1[0x1b] == 'L');
    auVar13[0xc] = -(pcVar1[0x1c] == 'k');
    auVar13[0xd] = -(pcVar1[0x1d] == '.');
    auVar13[0xe] = -(pcVar1[0x1e] == '\n');
    auVar13[0xf] = -(pcVar1[0x1f] == -0x54);
    auVar4[0] = -(*pcVar1 == -8);
    auVar4[1] = -(pcVar1[1] == -0x61);
    auVar4[2] = -(pcVar1[2] == '0');
    auVar4[3] = -(pcVar1[3] == -0x14);
    auVar4[4] = -(pcVar1[4] == '}');
    auVar4[5] = -(pcVar1[5] == -0x1c);
    auVar4[6] = -(pcVar1[6] == 'w');
    auVar4[7] = -(pcVar1[7] == '{');
    auVar4[8] = -(pcVar1[8] == '|');
    auVar4[9] = -(pcVar1[9] == -0x57);
    auVar4[10] = -(pcVar1[10] == -0x1d);
    auVar4[0xb] = -(pcVar1[0xb] == 'J');
    auVar4[0xc] = -(pcVar1[0xc] == -0x5c);
    auVar4[0xd] = -(pcVar1[0xd] == -0x2e);
    auVar4[0xe] = -(pcVar1[0xe] == -8);
    auVar4[0xf] = -(pcVar1[0xf] == -0x75);
    auVar4 = auVar4 & auVar13;
    uVar3 = 1;
    if ((((((ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) != 0xffff) &&
          (auVar14[0] = -(pcVar1[0x10] == -1), auVar14[1] = -(pcVar1[0x11] == -0x71),
          auVar14[2] = -(pcVar1[0x12] == 'H'), auVar14[3] = -(pcVar1[0x13] == -0x54),
          auVar14[4] = -(pcVar1[0x14] == '\x0f'), auVar14[5] = -(pcVar1[0x15] == '$'),
          auVar14[6] = -(pcVar1[0x16] == -6), auVar14[7] = -(pcVar1[0x17] == '\x03'),
          auVar14[8] = -(pcVar1[0x18] == -0x26), auVar14[9] = -(pcVar1[0x19] == -0x7d),
          auVar14[10] = -(pcVar1[0x1a] == '\x06'), auVar14[0xb] = -(pcVar1[0x1b] == '\b'),
          auVar14[0xc] = -(pcVar1[0x1c] == -0x7f), auVar14[0xd] = -(pcVar1[0x1d] == 'x'),
          auVar14[0xe] = -(pcVar1[0x1e] == -0x14), auVar14[0xf] = -(pcVar1[0x1f] == '!'),
          auVar5[0] = -(*pcVar1 == 'v'), auVar5[1] = -(pcVar1[1] == -0x1e),
          auVar5[2] = -(pcVar1[2] == '0'), auVar5[3] = -(pcVar1[3] == 'c'),
          auVar5[4] = -(pcVar1[4] == '!'), auVar5[5] = -(pcVar1[5] == 'Z'),
          auVar5[6] = -(pcVar1[6] == -0x69), auVar5[7] = -(pcVar1[7] == 't'),
          auVar5[8] = -(pcVar1[8] == '4'), auVar5[9] = -(pcVar1[9] == -0x73),
          auVar5[10] = -(pcVar1[10] == -5), auVar5[0xb] = -(pcVar1[0xb] == -0x4a),
          auVar5[0xc] = -(pcVar1[0xc] == -0x2d), auVar5[0xd] = -(pcVar1[0xd] == '}'),
          auVar5[0xe] = -(pcVar1[0xe] == '\x7f'), auVar5[0xf] = -(pcVar1[0xf] == '\x1f'),
          auVar5 = auVar5 & auVar14,
          (ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar5[0xf] >> 7) << 0xf) != 0xffff)) &&
         (auVar15[0] = -(pcVar1[0x10] == '\x1b'), auVar15[1] = -(pcVar1[0x11] == '-'),
         auVar15[2] = -(pcVar1[0x12] == -0x7d), auVar15[3] = -(pcVar1[0x13] == 'G'),
         auVar15[4] = -(pcVar1[0x14] == ','), auVar15[5] = -(pcVar1[0x15] == -0x80),
         auVar15[6] = -(pcVar1[0x16] == -0x4d), auVar15[7] = -(pcVar1[0x17] == -0x3d),
         auVar15[8] = -(pcVar1[0x18] == -0xd), auVar15[9] = -(pcVar1[0x19] == -0x47),
         auVar15[10] = -(pcVar1[0x1a] == '6'), auVar15[0xb] = -(pcVar1[0x1b] == -0x2b),
         auVar15[0xc] = -(pcVar1[0x1c] == 'E'), auVar15[0xd] = -(pcVar1[0x1d] == -0x5a),
         auVar15[0xe] = -(pcVar1[0x1e] == ','), auVar15[0xf] = -(pcVar1[0x1f] == '\x10'),
         auVar6[0] = -(*pcVar1 == -0x55), auVar6[1] = -(pcVar1[1] == 's'),
         auVar6[2] = -(pcVar1[2] == -0x5f), auVar6[3] = -(pcVar1[3] == -0x4e),
         auVar6[4] = -(pcVar1[4] == -0x78), auVar6[5] = -(pcVar1[5] == -0x33),
         auVar6[6] = -(pcVar1[6] == '\x14'), auVar6[7] = -(pcVar1[7] == -0x2d),
         auVar6[8] = -(pcVar1[8] == 'R'), auVar6[9] = -(pcVar1[9] == 'E'),
         auVar6[10] = -(pcVar1[10] == '\v'), auVar6[0xb] = -(pcVar1[0xb] == -0x25),
         auVar6[0xc] = -(pcVar1[0xc] == '9'), auVar6[0xd] = -(pcVar1[0xd] == 'K'),
         auVar6[0xe] = -(pcVar1[0xe] == '\x01'), auVar6[0xf] = -(pcVar1[0xf] == -0x30),
         auVar6 = auVar6 & auVar15,
         (ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) != 0xffff)) &&
        ((auVar16[0] = -(pcVar1[0x10] == -0x65), auVar16[1] = -(pcVar1[0x11] == 'e'),
         auVar16[2] = -(pcVar1[0x12] == -0x2f), auVar16[3] = -(pcVar1[0x13] == -0x74),
         auVar16[4] = -(pcVar1[0x14] == -0x31), auVar16[5] = -(pcVar1[0x15] == -0x1a),
         auVar16[6] = -(pcVar1[0x16] == -0x2e), auVar16[7] = -(pcVar1[0x17] == 't'),
         auVar16[8] = -(pcVar1[0x18] == -0x6e), auVar16[9] = -(pcVar1[0x19] == 'G'),
         auVar16[10] = -(pcVar1[0x1a] == -5), auVar16[0xb] = -(pcVar1[0x1b] == -9),
         auVar16[0xc] = -(pcVar1[0x1c] == -0x44), auVar16[0xd] = -(pcVar1[0x1d] == -0x3b),
         auVar16[0xe] = -(pcVar1[0x1e] == 'O'), auVar16[0xf] = -(pcVar1[0x1f] == -0x43),
         auVar7[0] = -(*pcVar1 == '\x0f'), auVar7[1] = -(pcVar1[1] == '\x14'),
         auVar7[2] = -(pcVar1[2] == -0x12), auVar7[3] = -(pcVar1[3] == -0x27),
         auVar7[4] = -(pcVar1[4] == '('), auVar7[5] = -(pcVar1[5] == -0x80),
         auVar7[6] = -(pcVar1[6] == '\x02'), auVar7[7] = -(pcVar1[7] == 'C'),
         auVar7[8] = -(pcVar1[8] == -0x7e), auVar7[9] = -(pcVar1[9] == '['),
         auVar7[10] = -(pcVar1[10] == 'E'), auVar7[0xb] = -(pcVar1[0xb] == '\v'),
         auVar7[0xc] = -(pcVar1[0xc] == '\x1f'), auVar7[0xd] = -(pcVar1[0xd] == -7),
         auVar7[0xe] = -(pcVar1[0xe] == 'N'), auVar7[0xf] = -(pcVar1[0xf] == 'v'),
         auVar7 = auVar7 & auVar16,
         (ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) != 0xffff &&
         (auVar17[0] = -(pcVar1[0x10] == -0x2f), auVar17[1] = -(pcVar1[0x11] == -0x29),
         auVar17[2] = -(pcVar1[0x12] == -0x52), auVar17[3] = -(pcVar1[0x13] == -0x73),
         auVar17[4] = -(pcVar1[0x14] == -0x46), auVar17[5] = -(pcVar1[0x15] == 'U'),
         auVar17[6] = -(pcVar1[0x16] == 'h'), auVar17[7] = -(pcVar1[0x17] == -3),
         auVar17[8] = -(pcVar1[0x18] == -0x68), auVar17[9] = -(pcVar1[0x19] == -0x55),
         auVar17[10] = -(pcVar1[0x1a] == -0x34), auVar17[0xb] = -(pcVar1[0x1b] == -0x26),
         auVar17[0xc] = -(pcVar1[0x1c] == 'V'), auVar17[0xd] = -(pcVar1[0x1d] == -0xf),
         auVar17[0xe] = -(pcVar1[0x1e] == -0x1a), auVar17[0xf] = -(pcVar1[0x1f] == '\x03'),
         auVar8[0] = -(*pcVar1 == 'v'), auVar8[1] = -(pcVar1[1] == 'Y'),
         auVar8[2] = -(pcVar1[2] == 'c'), auVar8[3] = -(pcVar1[3] == -0x7c),
         auVar8[4] = -(pcVar1[4] == -0x3f), auVar8[5] = -(pcVar1[5] == 'n'),
         auVar8[6] = -(pcVar1[6] == '\x01'), auVar8[7] = -(pcVar1[7] == '\x19'),
         auVar8[8] = -(pcVar1[8] == -0x5d), auVar8[9] = -(pcVar1[9] == -0x27),
         auVar8[10] = -(pcVar1[10] == '\x19'), auVar8[0xb] = -(pcVar1[0xb] == -0x70),
         auVar8[0xc] = -(pcVar1[0xc] == '*'), auVar8[0xd] = -(pcVar1[0xd] == -0x2a),
         auVar8[0xe] = -(pcVar1[0xe] == '['), auVar8[0xf] = -(pcVar1[0xf] == -0x2e),
         auVar8 = auVar8 & auVar17,
         (ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar8[0xf] >> 7) << 0xf) != 0xffff)))) &&
       ((auVar18[0] = -(pcVar1[0x10] == -0x2d), auVar18[1] = -(pcVar1[0x11] == -0x3e),
        auVar18[2] = -(pcVar1[0x12] == -0x3a), auVar18[3] = -(pcVar1[0x13] == -5),
        auVar18[4] = -(pcVar1[0x14] == -6), auVar18[5] = -(pcVar1[0x15] == '\x1f'),
        auVar18[6] = -(pcVar1[0x16] == 'B'), auVar18[7] = -(pcVar1[0x17] == -0x5a),
        auVar18[8] = -(pcVar1[0x18] == -0x6c), auVar18[9] = -(pcVar1[0x19] == '\x16'),
        auVar18[10] = -(pcVar1[0x1a] == '\x05'), auVar18[0xb] = -(pcVar1[0x1b] == '/'),
        auVar18[0xc] = -(pcVar1[0x1c] == -0x1b), auVar18[0xd] = -(pcVar1[0x1d] == 'y'),
        auVar18[0xe] = -(pcVar1[0x1e] == -0x31), auVar18[0xf] = -(pcVar1[0x1f] == '\x11'),
        auVar9[0] = -(*pcVar1 == -0x50), auVar9[1] = -(pcVar1[1] == -8),
        auVar9[2] = -(pcVar1[2] == 'Q'), auVar9[3] = -(pcVar1[3] == -0x7f),
        auVar9[4] = -(pcVar1[4] == -0x11), auVar9[5] = -(pcVar1[5] == 'n'),
        auVar9[6] = -(pcVar1[6] == 'K'), auVar9[7] = -(pcVar1[7] == 'K'),
        auVar9[8] = -(pcVar1[8] == -0x5b), auVar9[9] = -(pcVar1[9] == 'w'),
        auVar9[10] = -(pcVar1[10] == 'B'), auVar9[0xb] = -(pcVar1[0xb] == -0x1d),
        auVar9[0xc] = -(pcVar1[0xc] == '~'), auVar9[0xd] = -(pcVar1[0xd] == -0x41),
        auVar9[0xe] = -(pcVar1[0xe] == -0x30), auVar9[0xf] = -(pcVar1[0xf] == -0x80),
        auVar9 = auVar9 & auVar18,
        (ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar9[0xf] >> 7) << 0xf) != 0xffff &&
        ((auVar19[0] = -(pcVar1[0x10] == '|'), auVar19[1] = -(pcVar1[0x11] == -0x25),
         auVar19[2] = -(pcVar1[0x12] == -0x4a), auVar19[3] = -(pcVar1[0x13] == -0x3f),
         auVar19[4] = -(pcVar1[0x14] == '\x16'), auVar19[5] = -(pcVar1[0x15] == -0x70),
         auVar19[6] = -(pcVar1[0x16] == -0x5f), auVar19[7] = -(pcVar1[0x17] == -0x71),
         auVar19[8] = -(pcVar1[0x18] == -0x79), auVar19[9] = -(pcVar1[0x19] == 'G'),
         auVar19[10] = -(pcVar1[0x1a] == 'O'), auVar19[0xb] = -(pcVar1[0x1b] == ']'),
         auVar19[0xc] = -(pcVar1[0x1c] == -5), auVar19[0xd] = -(pcVar1[0x1d] == -0x32),
         auVar19[0xe] = -(pcVar1[0x1e] == '\n'), auVar19[0xf] = -(pcVar1[0x1f] == '\x04'),
         auVar10[0] = -(*pcVar1 == 'j'), auVar10[1] = -(pcVar1[1] == -0x6c),
         auVar10[2] = -(pcVar1[2] == -0x18), auVar10[3] = -(pcVar1[3] == -10),
         auVar10[4] = -(pcVar1[4] == -0x2c), auVar10[5] = -(pcVar1[5] == -0x66),
         auVar10[6] = -(pcVar1[6] == '6'), auVar10[7] = -(pcVar1[7] == ';'),
         auVar10[8] = -(pcVar1[8] == -0x54), auVar10[9] = -(pcVar1[9] == -0x66),
         auVar10[10] = -(pcVar1[10] == '\b'), auVar10[0xb] = -(pcVar1[0xb] == -0x4d),
         auVar10[0xc] = -(pcVar1[0xc] == -0x65), auVar10[0xd] = -(pcVar1[0xd] == -0x66),
         auVar10[0xe] = -(pcVar1[0xe] == 'k'), auVar10[0xf] = -(pcVar1[0xf] == ':'),
         auVar10 = auVar10 & auVar19,
         (ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar10[0xf] >> 7) << 0xf) != 0xffff &&
         (auVar20[0] = -(pcVar1[0x10] == -0x50), auVar20[1] = -(pcVar1[0x11] == -0x7b),
         auVar20[2] = -(pcVar1[0x12] == -99), auVar20[3] = -(pcVar1[0x13] == -0x14),
         auVar20[4] = -(pcVar1[0x14] == -0x76), auVar20[5] = -(pcVar1[0x15] == -0x7d),
         auVar20[6] = -(pcVar1[0x16] == 'E'), auVar20[7] = -(pcVar1[0x17] == -0x58),
         auVar20[8] = -(pcVar1[0x18] == -0x58), auVar20[9] = -(pcVar1[0x19] == -0x28),
         auVar20[10] = -(pcVar1[0x1a] == -0x66), auVar20[0xb] = -(pcVar1[0x1b] == '='),
         auVar20[0xc] = -(pcVar1[0x1c] == 'Z'), auVar20[0xd] = -(pcVar1[0x1d] == '.'),
         auVar20[0xe] = -(pcVar1[0x1e] == -0x53), auVar20[0xf] = -(pcVar1[0x1f] == '\x1d'),
         auVar11[0] = -(*pcVar1 == -9), auVar11[1] = -(pcVar1[1] == '>'),
         auVar11[2] = -(pcVar1[2] == 'y'), auVar11[3] = -(pcVar1[3] == '\"'),
         auVar11[4] = -(pcVar1[4] == '!'), auVar11[5] = -(pcVar1[5] == -0x6a),
         auVar11[6] = -(pcVar1[6] == 'A'), auVar11[7] = -(pcVar1[7] == -4),
         auVar11[8] = -(pcVar1[8] == '\b'), auVar11[9] = -(pcVar1[9] == '\x02'),
         auVar11[10] = -(pcVar1[10] == -0x34), auVar11[0xb] = -(pcVar1[0xb] == -0x44),
         auVar11[0xc] = -(pcVar1[0xc] == -0x65), auVar11[0xd] = -(pcVar1[0xd] == ' '),
         auVar11[0xe] = -(pcVar1[0xe] == '\x12'), auVar11[0xf] = -(pcVar1[0xf] == -0x47),
         auVar11 = auVar11 & auVar20,
         (ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar11[0xf] >> 7) << 0xf) != 0xffff)))))) {
      auVar21[0] = -(pcVar1[0x10] == -0x44);
      auVar21[1] = -(pcVar1[0x11] == '\x1d');
      auVar21[2] = -(pcVar1[0x12] == '~');
      auVar21[3] = -(pcVar1[0x13] == '3');
      auVar21[4] = -(pcVar1[0x14] == -0x2a);
      auVar21[5] = -(pcVar1[0x15] == -0x7c);
      auVar21[6] = -(pcVar1[0x16] == 'q');
      auVar21[7] = -(pcVar1[0x17] == -0x50);
      auVar21[8] = -(pcVar1[0x18] == '\x1c');
      auVar21[9] = -(pcVar1[0x19] == -0x21);
      auVar21[10] = -(pcVar1[0x1a] == -0x5a);
      auVar21[0xb] = -(pcVar1[0x1b] == -0xe);
      auVar21[0xc] = -(pcVar1[0x1c] == -0x41);
      auVar21[0xd] = -(pcVar1[0x1d] == -0x1e);
      auVar21[0xe] = -(pcVar1[0x1e] == '\f');
      auVar21[0xf] = -(pcVar1[0x1f] == 'q');
      auVar12[0] = -(*pcVar1 == 'd');
      auVar12[1] = -(pcVar1[1] == -0x2b);
      auVar12[2] = -(pcVar1[2] == -0x56);
      auVar12[3] = -(pcVar1[3] == '\x1b');
      auVar12[4] = -(pcVar1[4] == -0x4a);
      auVar12[5] = -(pcVar1[5] == -0x43);
      auVar12[6] = -(pcVar1[6] == -0x2f);
      auVar12[7] = -(pcVar1[7] == -0x35);
      auVar12[8] = -(pcVar1[8] == -0x56);
      auVar12[9] = -(pcVar1[9] == '=');
      auVar12[10] = -(pcVar1[10] == -99);
      auVar12[0xb] = -(pcVar1[0xb] == 'i');
      auVar12[0xc] = -(pcVar1[0xc] == '\0');
      auVar12[0xd] = -(pcVar1[0xd] == -0x7f);
      auVar12[0xe] = -(pcVar1[0xe] == '\x7f');
      auVar12[0xf] = -(pcVar1[0xf] == -0x6b);
      auVar12 = auVar12 & auVar21;
      uVar2 = (ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar12[0xf] >> 7) << 0xf;
      uVar3 = CONCAT11((char)(uVar2 >> 8),uVar2 == 0xffff);
    }
    return uVar3;
  }
  return 0;
}

