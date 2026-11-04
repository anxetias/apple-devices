// rea decompile_all
// name: _BrotliWriteHuffmanTree
// address: 0x1db06b
// body: available
// range: 0x1db06b-0x1db453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliWriteHuffmanTree(long param_1,ulong param_2,ulong *param_3,long param_4,long param_5)

{
  char cVar1;
  undefined1 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  char cVar12;
  bool bVar13;
  bool bVar14;
  
  uVar3 = param_2;
  if (param_2 == 0) {
    return;
  }
LAB_001db084:
  if (*(char *)(param_1 + -1 + uVar3) == '\0') goto code_r0x001db08b;
  if (param_2 < 0x33) {
    bVar14 = false;
    bVar13 = false;
    goto LAB_001db18c;
  }
  if (uVar3 != 0) {
    lVar6 = 1;
    uVar4 = 0;
    lVar8 = 1;
    uVar5 = 0;
    uVar7 = 0;
    do {
      uVar9 = uVar7 + 1;
      uVar11 = 1;
      if (uVar9 < uVar3) {
        uVar9 = uVar11;
        do {
          uVar11 = uVar9;
          if (*(char *)(param_1 + uVar7 + uVar9) != *(char *)(param_1 + uVar7)) break;
          uVar9 = uVar9 + 1;
          uVar11 = uVar3 - uVar7;
        } while (uVar3 - uVar7 != uVar9);
        uVar9 = uVar7 + uVar11;
      }
      bVar14 = *(char *)(param_1 + uVar7) == '\0';
      lVar8 = lVar8 + (ulong)(bVar14 && 2 < uVar11);
      uVar7 = 0;
      if (bVar14 && 2 < uVar11) {
        uVar7 = uVar11;
      }
      uVar4 = uVar4 + uVar7;
      bVar13 = 3 < uVar11;
      if (!bVar13 || bVar14) {
        uVar11 = 0;
      }
      uVar5 = uVar5 + uVar11;
      lVar6 = lVar6 + (ulong)(bVar13 && !bVar14);
      uVar7 = uVar9;
    } while (uVar9 < uVar3);
    uVar7 = lVar6 * 2;
    uVar9 = lVar8 * 2;
    goto LAB_001db168;
  }
  goto LAB_001db155;
code_r0x001db08b:
  uVar3 = uVar3 - 1;
  if (uVar3 == 0) goto code_r0x001db090;
  goto LAB_001db084;
code_r0x001db090:
  if (0x32 < param_2) {
LAB_001db155:
    uVar9 = 2;
    uVar3 = 0;
    uVar5 = 0;
    uVar7 = 2;
    uVar4 = 0;
LAB_001db168:
    bVar14 = uVar7 < uVar5;
    bVar13 = uVar9 < uVar4;
LAB_001db18c:
    if (uVar3 != 0) {
      cVar12 = '\b';
      uVar7 = 0;
      do {
        cVar1 = *(char *)(param_1 + uVar7);
        if ((((bool)(bVar14 & cVar1 != '\0')) || ((bool)(cVar1 == '\0' & bVar13))) &&
           (uVar7 + 1 < uVar3)) {
          uVar4 = 1;
          do {
            uVar5 = uVar4;
            if (*(char *)(param_1 + uVar7 + uVar4) != cVar1) break;
            uVar4 = uVar4 + 1;
            uVar5 = uVar3 - uVar7;
          } while (uVar3 - uVar7 != uVar4);
          if (cVar1 == '\0') {
            if (uVar5 == 0xb) {
              *(undefined1 *)(param_4 + *param_3) = 0;
              *(undefined1 *)(param_5 + *param_3) = 0;
              uVar9 = *param_3 + 1;
              *param_3 = uVar9;
              uVar4 = 7;
              uVar5 = 0xb;
            }
            else {
              if (uVar5 < 3) {
                if (uVar5 != 0) goto LAB_001db35b;
                uVar5 = 0;
                goto LAB_001db37a;
              }
              uVar9 = *param_3;
              uVar4 = uVar5 - 3;
            }
            *(undefined1 *)(param_4 + uVar9) = 0x11;
            *(byte *)(param_5 + *param_3) = (byte)uVar4 & 7;
            uVar10 = *param_3;
            uVar11 = uVar10 + 1;
            *param_3 = uVar11;
            while (7 < uVar4) {
              uVar4 = (uVar4 >> 3) - 1;
              *(undefined1 *)(param_4 + uVar11) = 0x11;
              *(byte *)(param_5 + *param_3) = (byte)uVar4 & 7;
              uVar10 = *param_3;
              uVar11 = uVar10 + 1;
              *param_3 = uVar11;
            }
            uVar4 = uVar9;
            if (uVar9 < uVar10) {
              do {
                uVar4 = uVar4 + 1;
                uVar2 = *(undefined1 *)(param_4 + -1 + uVar4);
                *(undefined1 *)(param_4 + -1 + uVar4) = *(undefined1 *)(param_4 + uVar10);
                *(undefined1 *)(param_4 + uVar10) = uVar2;
                uVar10 = uVar10 - 1;
              } while (uVar4 < uVar10);
              uVar11 = *param_3;
            }
            uVar11 = uVar11 - 1;
            if (uVar9 < uVar11) {
              do {
                uVar9 = uVar9 + 1;
                uVar2 = *(undefined1 *)(param_5 + -1 + uVar9);
                *(undefined1 *)(param_5 + -1 + uVar9) = *(undefined1 *)(param_5 + uVar11);
                *(undefined1 *)(param_5 + uVar11) = uVar2;
                uVar11 = uVar11 - 1;
              } while (uVar9 < uVar11);
            }
          }
          else {
LAB_001db224:
            uVar4 = uVar5;
            if (cVar12 != cVar1) {
              *(char *)(param_4 + *param_3) = cVar1;
              *(undefined1 *)(param_5 + *param_3) = 0;
              *param_3 = *param_3 + 1;
              uVar4 = uVar5 - 1;
            }
            cVar12 = cVar1;
            if (uVar4 == 7) {
              *(char *)(param_4 + *param_3) = cVar1;
              *(undefined1 *)(param_5 + *param_3) = 0;
              uVar9 = *param_3 + 1;
              *param_3 = uVar9;
              uVar4 = 3;
            }
            else {
              if (uVar4 < 3) {
                if (uVar4 != 0) {
                  uVar9 = *param_3;
                  do {
                    *(char *)(param_4 + uVar9) = cVar1;
                    *(undefined1 *)(param_5 + *param_3) = 0;
                    uVar9 = *param_3 + 1;
                    *param_3 = uVar9;
                    uVar4 = uVar4 - 1;
                  } while (uVar4 != 0);
                }
                goto LAB_001db37a;
              }
              uVar9 = *param_3;
              uVar4 = uVar4 - 3;
            }
            *(undefined1 *)(param_4 + uVar9) = 0x10;
            *(byte *)(param_5 + *param_3) = (byte)uVar4 & 3;
            uVar10 = *param_3;
            uVar11 = uVar10 + 1;
            *param_3 = uVar11;
            while (3 < uVar4) {
              uVar4 = (uVar4 >> 2) - 1;
              *(undefined1 *)(param_4 + uVar11) = 0x10;
              *(byte *)(param_5 + *param_3) = (byte)uVar4 & 3;
              uVar10 = *param_3;
              uVar11 = uVar10 + 1;
              *param_3 = uVar11;
            }
            uVar4 = uVar9;
            if (uVar9 < uVar10) {
              do {
                uVar4 = uVar4 + 1;
                uVar2 = *(undefined1 *)(param_4 + -1 + uVar4);
                *(undefined1 *)(param_4 + -1 + uVar4) = *(undefined1 *)(param_4 + uVar10);
                *(undefined1 *)(param_4 + uVar10) = uVar2;
                uVar10 = uVar10 - 1;
              } while (uVar4 < uVar10);
              uVar11 = *param_3;
            }
            uVar11 = uVar11 - 1;
            if (uVar9 < uVar11) {
              do {
                uVar9 = uVar9 + 1;
                uVar2 = *(undefined1 *)(param_5 + -1 + uVar9);
                *(undefined1 *)(param_5 + -1 + uVar9) = *(undefined1 *)(param_5 + uVar11);
                *(undefined1 *)(param_5 + uVar11) = uVar2;
                uVar11 = uVar11 - 1;
              } while (uVar9 < uVar11);
            }
          }
        }
        else {
          uVar5 = 1;
          if (cVar1 != '\0') goto LAB_001db224;
LAB_001db35b:
          uVar4 = *param_3;
          uVar9 = uVar5;
          do {
            *(undefined1 *)(param_4 + uVar4) = 0;
            *(undefined1 *)(param_5 + *param_3) = 0;
            uVar4 = *param_3 + 1;
            *param_3 = uVar4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
LAB_001db37a:
        uVar7 = uVar7 + uVar5;
      } while (uVar7 < uVar3);
    }
  }
  return;
}

