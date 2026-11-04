// rea decompile_all
// name: _smb_lz77_decode_buffer
// address: 0x1ef9a0
// body: available
// range: 0x1ef9a0-0x1ef9b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _smb_lz77_decode_buffer(long param_1,ulong param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  
  uVar7 = 0xf;
  if (0xf < param_2) {
    uVar7 = param_2;
  }
  if (param_4 < 4) {
    return 0;
  }
  uVar11 = 1;
  uVar14 = 4;
  uVar17 = 0;
  uVar10 = 0;
  do {
    iVar12 = *(int *)(param_3 + uVar17);
    if (((iVar12 == 0) && (uVar17 + 0x24 <= param_4)) && (uVar10 + 0x20 <= param_2)) {
      uVar4 = *(undefined8 *)(param_3 + uVar14);
      uVar5 = ((undefined8 *)(param_3 + uVar14))[1];
      puVar8 = (undefined8 *)(param_3 + 0x10 + uVar14);
      uVar6 = puVar8[1];
      puVar1 = (undefined8 *)(param_1 + 0x10 + uVar10);
      *puVar1 = *puVar8;
      puVar1[1] = uVar6;
      *(undefined8 *)(param_1 + uVar10) = uVar4;
      ((undefined8 *)(param_1 + uVar10))[1] = uVar5;
      uVar10 = uVar10 + 0x20;
      uVar17 = uVar17 + 0x24;
    }
    else {
      iVar9 = 1;
      do {
        if (iVar12 < 0) {
          uVar17 = uVar14 + 2;
          if (param_4 < uVar17) {
            if (uVar14 == param_4) {
              return uVar10;
            }
            return 0;
          }
          uVar3 = *(ushort *)(param_3 + uVar14);
          uVar13 = (ulong)(uVar3 & 7);
          if ((uVar3 & 7) == 7) {
            uVar15 = uVar17;
            if ((short)uVar11 == 1) {
              if (param_4 <= uVar17) {
                return 0;
              }
              uVar15 = uVar14 + 3;
              uVar11 = *(byte *)(param_3 + 2 + uVar14) | 0x100;
            }
            uVar13 = (ulong)(uVar11 & 0xf);
            uVar17 = uVar15;
            if ((short)(uVar11 & 0xf) == 0xf) {
              if (param_4 <= uVar15) {
                return 0;
              }
              uVar17 = uVar15 + 1;
              uVar13 = (ulong)*(byte *)(param_3 + uVar15);
              if (uVar13 == 0xff) {
                uVar14 = uVar15 + 3;
                if (param_4 < uVar14) {
                  return 0;
                }
                uVar13 = (ulong)*(ushort *)(param_3 + uVar17);
                if (uVar13 == 0) {
                  if (param_4 < uVar15 + 7) {
                    return 0;
                  }
                  uVar13 = (ulong)*(uint *)(param_3 + uVar14);
                  uVar14 = uVar15 + 7;
                }
                if ((uint)uVar13 < 0x16) {
                  return 0;
                }
                uVar13 = uVar13 - 0x16;
                uVar17 = uVar14;
              }
              uVar13 = uVar13 + 0xf;
            }
            uVar11 = uVar11 >> 4;
            uVar13 = uVar13 + 7;
          }
          uVar14 = (ulong)(uVar3 >> 3) + 1;
          if (uVar10 < uVar14) {
            return 0;
          }
          uVar13 = uVar13 + 3;
          if (param_2 - uVar10 < uVar13) {
            return 0;
          }
          puVar8 = (undefined8 *)(param_1 + uVar10);
          puVar1 = (undefined8 *)((long)puVar8 + uVar13);
          lVar16 = -uVar14;
          if ((uVar3 < 0x78) || ((undefined8 *)(param_1 + -0xf + uVar7) < puVar1)) {
            do {
              *(undefined1 *)puVar8 = *(undefined1 *)((long)puVar8 + lVar16);
              puVar8 = (undefined8 *)((long)puVar8 + 1);
            } while (puVar8 < puVar1);
          }
          else {
            do {
              puVar2 = (undefined8 *)((long)puVar8 + lVar16);
              uVar4 = puVar2[1];
              *puVar8 = *puVar2;
              puVar8[1] = uVar4;
              puVar8 = puVar8 + 2;
            } while (puVar8 < puVar1);
          }
          uVar10 = uVar10 + uVar13;
          uVar14 = uVar17;
        }
        else {
          if (param_4 <= uVar14) {
            return 0;
          }
          if (param_2 <= uVar10) {
            return 0;
          }
          *(undefined1 *)(param_1 + uVar10) = *(undefined1 *)(param_3 + uVar14);
          uVar10 = uVar10 + 1;
          uVar14 = uVar14 + 1;
        }
        iVar12 = iVar12 * 2;
        iVar9 = iVar9 + 1;
        uVar17 = uVar14;
      } while (iVar9 != 0x21);
    }
    uVar14 = uVar17 + 4;
    if (param_4 < uVar14) {
      return 0;
    }
  } while( true );
}

