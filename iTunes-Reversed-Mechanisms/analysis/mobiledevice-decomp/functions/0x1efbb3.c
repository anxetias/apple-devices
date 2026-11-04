// rea decompile_all
// name: _smb_lz77_encode_buffer
// address: 0x1efbb3
// body: available
// range: 0x1efbb3-0x1efff5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _smb_lz77_encode_buffer(long param_1,ulong param_2,long param_3,ulong param_4,long param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  uint local_4c;
  
  uVar21 = 7;
  if (7 < param_4) {
    uVar21 = param_4;
  }
  ___bzero(param_5,0x10000);
  if (0x11 < param_2) {
    uVar21 = uVar21 - 7;
    lVar24 = param_2 - 1;
    uVar6 = 1;
    uVar5 = 0x100;
    lVar12 = 4;
    uVar15 = 0;
    lVar22 = 0;
    do {
      iVar8 = (int)uVar15 * -8 + 8;
      uVar14 = uVar15;
      while( true ) {
        lVar7 = lVar12;
        if (uVar6 >> 0x20 != 0) {
          *(int *)(param_1 + lVar22) = (int)uVar6;
          lVar7 = lVar12 + 4;
          uVar6 = 1;
          lVar22 = lVar12;
        }
        uVar6 = uVar6 * 2;
        if (uVar14 + 4 <= param_4) break;
        if (param_4 == uVar14) {
          do {
            uVar21 = uVar6;
            uVar6 = uVar21 * 2 + 2;
          } while (uVar21 >> 0x20 == 0);
          *(uint *)(param_1 + lVar22) = (uint)uVar21 | 1;
          do {
            uVar10 = uVar5;
            uVar5 = uVar10 << 4;
          } while (uVar10 < 0x100);
          *(byte *)(param_1 + lVar24) = (byte)(uVar10 >> 4) & 0xf | (byte)(uVar10 << 4);
          return lVar7;
        }
        puVar1 = (undefined1 *)(param_3 + uVar14);
        uVar14 = uVar14 + 1;
        lVar12 = lVar7 + 1;
        *(undefined1 *)(param_1 + lVar7) = *puVar1;
        iVar8 = iVar8 + -8;
        if (param_2 < lVar7 + 0xfU) {
          return 0;
        }
      }
      uVar10 = *(uint *)(param_3 + uVar14);
      uVar9 = uVar10 >> 8;
      uVar15 = (ulong)((uVar10 & 0xffffff) * -0x61c8864f >> 0x12);
      uVar17 = (ulong)(uVar9 * -0x61c8864f >> 0x12);
      uVar16 = *(uint *)(param_5 + uVar15 * 4);
      uVar11 = *(uint *)(param_5 + uVar17 * 4);
      uVar13 = (uint)uVar14;
      uVar23 = uVar16 & 0x1fff | uVar13 & 0xffffe000;
      uVar20 = uVar11 & 0x1fff | uVar13 & 0xffffe000;
      local_4c = uVar23 - 0x2000;
      if (uVar23 < uVar14) {
        local_4c = uVar23;
      }
      uVar18 = (ulong)(uVar20 - 0x2000);
      if (uVar20 <= uVar14) {
        uVar18 = (ulong)uVar20;
      }
      *(uint *)(param_5 + uVar15 * 4) = uVar13 & 0x1fff | uVar10 << 0xd;
      uVar4 = 0;
      if ((uVar16 >> 0xd == (uVar10 & 0x7ffff)) && (uVar4 = 0, uVar14 < uVar21 && local_4c < uVar14)
         ) {
        uVar4 = 0;
LAB_001efd7d:
        uVar15 = *(ulong *)(uVar14 + uVar4 + param_3);
        uVar25 = *(ulong *)((ulong)local_4c + param_3 + uVar4);
        if (uVar15 == uVar25) goto code_r0x001efd8f;
        uVar25 = uVar25 ^ uVar15;
        uVar15 = 0;
        if (uVar25 != 0) {
          for (; (uVar25 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
          }
        }
        uVar4 = (ulong)(((uint)(uVar15 >> 3) & 0x1fffffff) + (int)uVar4);
      }
LAB_001efdb6:
      if (uVar11 >> 0xd == (uVar9 & 0x7ffff)) {
        uVar15 = uVar14 + 1;
        uVar10 = 0;
        if (uVar15 < uVar21) {
          uVar25 = 0;
LAB_001efde9:
          uVar2 = *(ulong *)(uVar14 + 1 + uVar25 + param_3);
          uVar19 = *(ulong *)(uVar18 + param_3 + uVar25);
          if (uVar2 == uVar19) goto code_r0x001efdfd;
          uVar19 = uVar19 ^ uVar2;
          uVar2 = 0;
          if (uVar19 != 0) {
            for (; (uVar19 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
            }
          }
          uVar10 = ((uint)(uVar2 >> 3) & 0x1fffffff) + (int)uVar25;
        }
LAB_001efe26:
        if ((((int)uVar18 != 0) &&
            (uVar16 = (int)uVar18 - 1,
            *(char *)(param_3 + uVar14) == *(char *)(param_3 + (ulong)uVar16))) &&
           ((uint)uVar4 <= uVar10)) {
          uVar4 = (ulong)(uVar10 + 1);
          local_4c = uVar16;
          goto LAB_001efe7a;
        }
        if (uVar10 <= (uint)uVar4) goto LAB_001efe7a;
        *(undefined1 *)(param_1 + lVar7) = *(undefined1 *)(param_3 + uVar14);
        lVar12 = lVar7 + 1;
      }
      else {
LAB_001efe7a:
        uVar10 = (uint)uVar4;
        if (uVar10 < 3) {
          uVar15 = uVar14 + 1;
          *(undefined1 *)(param_1 + lVar7) = *(undefined1 *)(param_3 + uVar14);
          lVar12 = lVar7 + 1;
        }
        else {
          uVar11 = uVar10 - 3;
          uVar16 = 7;
          if (uVar11 < 7) {
            uVar16 = uVar11;
          }
          uVar15 = uVar4 + uVar14;
          lVar12 = lVar7 + 2;
          uVar6 = uVar6 | 1;
          *(uint *)(param_5 + uVar17 * 4) = uVar13 + 1 & 0x1fff | uVar9 << 0xd;
          *(short *)(param_1 + lVar7) = ((short)uVar16 - (short)(local_4c << 3)) - (short)iVar8;
          if (6 < uVar11) {
            lVar3 = lVar12;
            if (0xff < uVar5) {
              *(byte *)(param_1 + lVar24) = (byte)(uVar5 << 4) | (byte)(uVar5 >> 4) & 0xf;
              uVar5 = 1;
              lVar3 = lVar7 + 3;
              lVar24 = lVar12;
            }
            lVar12 = lVar3;
            uVar9 = uVar10 - 10;
            uVar16 = 0xf;
            if (uVar9 < 0xf) {
              uVar16 = uVar9;
            }
            uVar5 = uVar16 | uVar5 << 4;
            if (0xe < uVar9) {
              uVar10 = uVar10 - 0x19;
              uVar16 = 0xff;
              if (uVar10 < 0xff) {
                uVar16 = uVar10;
              }
              *(char *)(param_1 + lVar12) = (char)uVar16;
              if (uVar10 < 0xff) {
                lVar12 = lVar12 + 1;
              }
              else {
                uVar16 = 0;
                if (uVar10 < 0xffea) {
                  uVar16 = uVar11;
                }
                *(short *)(param_1 + 1 + lVar12) = (short)uVar16;
                if (uVar10 < 0xffea) {
                  lVar12 = lVar12 + 3;
                }
                else {
                  *(uint *)(param_1 + 3 + lVar12) = uVar11;
                  lVar12 = lVar12 + 7;
                }
              }
            }
          }
        }
      }
    } while (lVar12 + 0xeU <= param_2);
  }
  return 0;
code_r0x001efd8f:
  uVar4 = (ulong)((int)uVar4 + 8);
  if (uVar21 <= uVar14 + uVar4) goto LAB_001efdb6;
  goto LAB_001efd7d;
code_r0x001efdfd:
  uVar10 = (int)uVar25 + 8;
  uVar25 = (ulong)uVar10;
  if (uVar21 <= uVar14 + uVar25 + 1) goto LAB_001efe26;
  goto LAB_001efde9;
}

