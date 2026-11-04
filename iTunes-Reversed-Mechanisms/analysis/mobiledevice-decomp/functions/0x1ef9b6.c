// rea decompile_all
// name: FUN_001ef9b6
// address: 0x1ef9b6
// body: available
// range: 0x1ef9b6-0x1efbb2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_001ef9b6(long param_1,ulong param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_RAX;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  
  uVar10 = 1;
  uVar13 = 4;
  uVar16 = 0;
  uVar9 = 0;
  do {
    iVar11 = *(int *)(param_3 + uVar16);
    if (((iVar11 == 0) && (uVar16 + 0x24 <= param_4)) && (uVar9 + 0x20 <= param_2)) {
      uVar4 = *(undefined8 *)(param_3 + uVar13);
      uVar5 = ((undefined8 *)(param_3 + uVar13))[1];
      puVar7 = (undefined8 *)(param_3 + 0x10 + uVar13);
      uVar6 = puVar7[1];
      puVar1 = (undefined8 *)(param_1 + 0x10 + uVar9);
      *puVar1 = *puVar7;
      puVar1[1] = uVar6;
      *(undefined8 *)(param_1 + uVar9) = uVar4;
      ((undefined8 *)(param_1 + uVar9))[1] = uVar5;
      uVar9 = uVar9 + 0x20;
      uVar16 = uVar16 + 0x24;
    }
    else {
      iVar8 = 1;
      do {
        if (iVar11 < 0) {
          uVar16 = uVar13 + 2;
          if (param_4 < uVar16) {
            if (uVar13 == param_4) {
              return uVar9;
            }
            return 0;
          }
          uVar3 = *(ushort *)(param_3 + uVar13);
          uVar12 = (ulong)(uVar3 & 7);
          if ((uVar3 & 7) == 7) {
            uVar14 = uVar16;
            if ((short)uVar10 == 1) {
              if (param_4 <= uVar16) {
                return 0;
              }
              uVar14 = uVar13 + 3;
              uVar10 = *(byte *)(param_3 + 2 + uVar13) | 0x100;
            }
            uVar12 = (ulong)(uVar10 & 0xf);
            uVar16 = uVar14;
            if ((short)(uVar10 & 0xf) == 0xf) {
              if (param_4 <= uVar14) {
                return 0;
              }
              uVar16 = uVar14 + 1;
              uVar12 = (ulong)*(byte *)(param_3 + uVar14);
              if (uVar12 == 0xff) {
                uVar13 = uVar14 + 3;
                if (param_4 < uVar13) {
                  return 0;
                }
                uVar12 = (ulong)*(ushort *)(param_3 + uVar16);
                if (uVar12 == 0) {
                  if (param_4 < uVar14 + 7) {
                    return 0;
                  }
                  uVar12 = (ulong)*(uint *)(param_3 + uVar13);
                  uVar13 = uVar14 + 7;
                }
                if ((uint)uVar12 < 0x16) {
                  return 0;
                }
                uVar12 = uVar12 - 0x16;
                uVar16 = uVar13;
              }
              uVar12 = uVar12 + 0xf;
            }
            uVar10 = uVar10 >> 4;
            uVar12 = uVar12 + 7;
          }
          uVar13 = (ulong)(uVar3 >> 3) + 1;
          if (uVar9 < uVar13) {
            return 0;
          }
          uVar12 = uVar12 + 3;
          if (param_2 - uVar9 < uVar12) {
            return 0;
          }
          puVar7 = (undefined8 *)(param_1 + uVar9);
          puVar1 = (undefined8 *)((long)puVar7 + uVar12);
          lVar15 = -uVar13;
          if ((uVar3 < 0x78) || ((undefined8 *)(param_1 + -0xf + in_RAX) < puVar1)) {
            do {
              *(undefined1 *)puVar7 = *(undefined1 *)((long)puVar7 + lVar15);
              puVar7 = (undefined8 *)((long)puVar7 + 1);
            } while (puVar7 < puVar1);
          }
          else {
            do {
              puVar2 = (undefined8 *)((long)puVar7 + lVar15);
              uVar4 = puVar2[1];
              *puVar7 = *puVar2;
              puVar7[1] = uVar4;
              puVar7 = puVar7 + 2;
            } while (puVar7 < puVar1);
          }
          uVar9 = uVar9 + uVar12;
          uVar13 = uVar16;
        }
        else {
          if (param_4 <= uVar13) {
            return 0;
          }
          if (param_2 <= uVar9) {
            return 0;
          }
          *(undefined1 *)(param_1 + uVar9) = *(undefined1 *)(param_3 + uVar13);
          uVar9 = uVar9 + 1;
          uVar13 = uVar13 + 1;
        }
        iVar11 = iVar11 * 2;
        iVar8 = iVar8 + 1;
        uVar16 = uVar13;
      } while (iVar8 != 0x21);
    }
    uVar13 = uVar16 + 4;
    if (param_4 < uVar13) {
      return 0;
    }
  } while( true );
}

