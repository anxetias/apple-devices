// rea decompile_all
// name: _BrotliCreateHuffmanTree
// address: 0x1daa0d
// body: available
// range: 0x1daa0d-0x1dac81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliCreateHuffmanTree
               (long param_1,long param_2,undefined4 param_3,undefined8 *param_4,long param_5)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  
  uVar9 = 1;
  do {
    if (param_2 == 0) {
LAB_001daae2:
      lVar7 = -1;
      *param_4 = 0xffffffffffffffff;
      param_4[1] = 0xffffffffffffffff;
      lVar5 = 1;
      uVar4 = 0;
LAB_001dabb3:
      lVar7 = -lVar7;
      lVar12 = 0;
      do {
        uVar1 = *(uint *)(param_4 + lVar12);
        uVar8 = *(uint *)(param_4 + lVar5);
        lVar14 = lVar12;
        if (uVar8 < uVar1) {
          lVar14 = lVar5;
        }
        lVar12 = lVar12 + (ulong)(uVar1 <= uVar8);
        lVar5 = lVar5 + (ulong)(uVar8 < uVar1);
        uVar1 = *(uint *)(param_4 + lVar12);
        uVar8 = *(uint *)(param_4 + lVar5);
        lVar15 = lVar12;
        if (uVar8 < uVar1) {
          lVar15 = lVar5;
        }
        lVar12 = lVar12 + (ulong)(uVar1 <= uVar8);
        lVar5 = lVar5 + (ulong)(uVar8 < uVar1);
        *(int *)(param_4 + uVar4 * 2 + lVar7) =
             *(int *)(param_4 + lVar15) + *(int *)(param_4 + lVar14);
        *(short *)((long)param_4 + lVar7 * 8 + uVar4 * 0x10 + 4) = (short)lVar14;
        *(short *)((long)param_4 + lVar7 * 8 + uVar4 * 0x10 + 6) = (short)lVar15;
        param_4[uVar4 * 2 + lVar7 + 1] = 0xffffffffffffffff;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0);
    }
    else {
      uVar4 = 0;
      lVar5 = param_2;
      do {
        uVar8 = *(uint *)(param_1 + -4 + lVar5 * 4);
        if (uVar8 != 0) {
          if (uVar8 <= uVar9) {
            uVar8 = uVar9;
          }
          *(uint *)(param_4 + uVar4) = uVar8;
          *(undefined2 *)((long)param_4 + uVar4 * 8 + 4) = 0xffff;
          *(short *)((long)param_4 + uVar4 * 8 + 6) = (short)lVar5 + -1;
          uVar4 = uVar4 + 1;
        }
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      if (uVar4 == 1) {
        *(undefined1 *)(param_5 + *(short *)((long)param_4 + 6)) = 1;
        return;
      }
      if (uVar4 < 0xd) {
        if (uVar4 == 0) goto LAB_001daae2;
        uVar6 = 1;
        do {
          uVar2 = param_4[uVar6];
          uVar10 = uVar6;
          do {
            uVar17 = uVar10 - 1;
            if (*(uint *)(param_4 + (uVar10 - 1)) == (uint)uVar2) {
              if ((short)((ulong)uVar2 >> 0x30) <= *(short *)((long)param_4 + uVar17 * 8 + 6))
              goto LAB_001daad1;
            }
            else if (*(uint *)(param_4 + (uVar10 - 1)) <= (uint)uVar2) goto LAB_001daad1;
            param_4[uVar10] = param_4[uVar17];
            uVar10 = uVar17;
          } while (uVar17 != 0);
          uVar10 = 0;
LAB_001daad1:
          param_4[uVar10] = uVar2;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar4);
      }
      else {
        uVar6 = (ulong)((uint)(uVar4 < 0x39) * 2);
        do {
          uVar10 = *(ulong *)(&_kBrotliShellGaps + uVar6 * 8);
          if (uVar10 < uVar4) {
            puVar11 = param_4 + uVar10;
            lVar5 = (long)param_4 + 6;
            uVar17 = uVar10;
            do {
              uVar2 = param_4[uVar17];
              uVar16 = uVar17;
              if (uVar10 <= uVar17) {
                lVar7 = 0;
                uVar13 = uVar17;
                do {
                  uVar8 = *(uint *)(lVar5 + -6 + lVar7 * 8);
                  if (uVar8 == (uint)uVar2) {
                    if ((short)((ulong)uVar2 >> 0x30) <= *(short *)(lVar5 + lVar7 * 8)) {
                      uVar16 = lVar7 + uVar17;
                      break;
                    }
                  }
                  else {
                    uVar16 = uVar13;
                    if (uVar8 <= (uint)uVar2) break;
                  }
                  uVar13 = uVar13 - uVar10;
                  puVar11[lVar7] = *(undefined8 *)(lVar5 + -6 + lVar7 * 8);
                  lVar7 = lVar7 - uVar10;
                  uVar16 = uVar17 + lVar7;
                } while (uVar10 <= uVar16);
              }
              param_4[uVar16] = uVar2;
              uVar17 = uVar17 + 1;
              lVar5 = lVar5 + 8;
              puVar11 = puVar11 + 1;
            } while (uVar17 != uVar4);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != 6);
      }
      param_4[uVar4] = 0xffffffffffffffff;
      param_4[uVar4 + 1] = 0xffffffffffffffff;
      lVar7 = uVar4 - 1;
      if (lVar7 != 0) {
        lVar5 = uVar4 + 1;
        goto LAB_001dabb3;
      }
      uVar4 = 1;
    }
    iVar3 = _BrotliSetDepth((int)uVar4 * 2 + -1,param_4,param_5,param_3);
    uVar9 = uVar9 * 2;
    if (iVar3 != 0) {
      return;
    }
  } while( true );
}

