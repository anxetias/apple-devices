// rea decompile_all
// name: _split
// address: 0xb45b0
// body: available
// range: 0xb45b0-0xb47ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _split(long param_1,long param_2,long param_3,ulong param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar1 = param_2 + param_5 * 8;
  while (0xf < (long)param_4) {
    lVar16 = *(long *)(lVar1 + *(long *)(param_1 + (param_4 & 0xfffffffffffffffe) * 4 + param_3 * 8)
                               * 8);
    lVar15 = param_4 + param_3;
    lVar11 = 0;
    lVar9 = param_3;
    lVar17 = 0;
    do {
      lVar13 = lVar17;
      lVar6 = *(long *)(lVar1 + *(long *)(param_1 + lVar9 * 8) * 8);
      lVar11 = lVar11 + (ulong)(lVar6 < lVar16);
      lVar17 = (ulong)(lVar6 == lVar16) + lVar13;
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar15);
    lVar9 = lVar11 + param_3;
    lVar2 = lVar17 + lVar9;
    if (lVar11 == 0) {
      lVar12 = 0;
      lVar10 = 0;
    }
    else {
      lVar3 = param_1 + lVar2 * 8;
      lVar4 = param_1 + lVar9 * 8;
      lVar10 = 0;
      lVar12 = 0;
      lVar14 = param_3;
      do {
        lVar7 = *(long *)(param_1 + lVar14 * 8);
        lVar8 = *(long *)(lVar1 + lVar7 * 8);
        if (lVar8 < lVar16) {
          lVar14 = lVar14 + 1;
        }
        else if (lVar8 == lVar16) {
          *(undefined8 *)(param_1 + lVar14 * 8) = *(undefined8 *)(lVar4 + lVar12 * 8);
          *(long *)(lVar4 + lVar12 * 8) = lVar7;
          lVar12 = lVar12 + 1;
        }
        else {
          *(undefined8 *)(param_1 + lVar14 * 8) = *(undefined8 *)(lVar3 + lVar10 * 8);
          *(long *)(lVar3 + lVar10 * 8) = lVar7;
          lVar10 = lVar10 + 1;
        }
      } while (lVar14 < lVar9);
    }
    if (lVar12 < lVar17) {
      lVar3 = param_1 + lVar9 * 8;
      lVar4 = param_1 + lVar2 * 8;
      do {
        lVar14 = *(long *)(lVar3 + lVar12 * 8);
        if (*(long *)(lVar1 + lVar14 * 8) == lVar16) {
          lVar12 = lVar12 + 1;
        }
        else {
          *(undefined8 *)(lVar3 + lVar12 * 8) = *(undefined8 *)(lVar4 + lVar10 * 8);
          *(long *)(lVar4 + lVar10 * 8) = lVar14;
          lVar10 = lVar10 + 1;
        }
      } while (lVar12 < lVar17);
    }
    if (lVar11 != 0) {
      _split(param_1,param_2,param_3,lVar11,param_5);
    }
    if (lVar17 != 0) {
      lVar17 = 0;
      do {
        *(long *)(param_2 + *(long *)(param_1 + lVar9 * 8 + lVar17 * 8) * 8) = lVar2 + -1;
        lVar17 = lVar17 + 1;
      } while (lVar13 + (ulong)(lVar6 == lVar16) != lVar17);
    }
    if (lVar9 == lVar2 + -1) {
      *(undefined8 *)(param_1 + lVar9 * 8) = 0xffffffffffffffff;
    }
    param_4 = lVar15 - lVar2;
    param_3 = lVar2;
    if (param_4 == 0 || lVar15 < lVar2) {
      return;
    }
  }
  if ((long)param_4 < 1) {
    return;
  }
  lVar16 = param_4 + param_3;
  do {
    plVar5 = (long *)(param_1 + param_3 * 8);
    lVar9 = param_3 + 1;
    lVar17 = 1;
    if (lVar9 < lVar16) {
      lVar11 = *(long *)(lVar1 + *plVar5 * 8);
      do {
        lVar15 = *(long *)(param_1 + lVar9 * 8);
        lVar6 = *(long *)(lVar1 + lVar15 * 8);
        lVar13 = lVar11;
        if (lVar6 < lVar11) {
          lVar13 = lVar6;
          lVar17 = 0;
        }
        if (lVar6 <= lVar11) {
          lVar11 = plVar5[lVar17];
          plVar5[lVar17] = lVar15;
          *(long *)(param_1 + lVar9 * 8) = lVar11;
          lVar17 = lVar17 + 1;
        }
        lVar9 = lVar9 + 1;
        lVar11 = lVar13;
      } while (lVar9 < lVar16);
      if (0 < lVar17) goto LAB_000b47a7;
    }
    else {
LAB_000b47a7:
      lVar9 = 0;
      do {
        *(long *)(param_2 + plVar5[lVar9] * 8) = param_3 + lVar17 + -1;
        lVar9 = lVar9 + 1;
      } while (lVar17 != lVar9);
      if (lVar17 == 1) {
        *plVar5 = -1;
        lVar17 = 1;
      }
    }
    param_3 = param_3 + lVar17;
    if (lVar16 <= param_3) {
      return;
    }
  } while( true );
}

