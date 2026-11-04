// rea decompile_all
// name: _lz4_decode_asm
// address: 0x1ea580
// body: available
// range: 0x1ea580-0x1ea7e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_lz4_decode_asm(ulong *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
               undefined8 *param_4,ulong *param_5)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined1 (*pauVar16) [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  puVar6 = (ulong *)*param_4;
  pauVar10 = (undefined1 (*) [16])*param_1;
  do {
    if ((param_5 <= puVar6) || (param_3 <= pauVar10)) goto LAB_001ea7d0;
    puVar7 = (ulong *)((long)puVar6 + 1);
    uVar13 = (ulong)(byte)((byte)*puVar6 >> 4);
    uVar14 = ((ulong)(byte)*puVar6 & 0xf) + 4;
    if (uVar13 == 0xf) {
      do {
        puVar9 = puVar7;
        if (param_5 <= puVar9) goto LAB_001ea7d0;
        puVar7 = (ulong *)((long)puVar9 + 1);
        uVar13 = uVar13 + (byte)*puVar9;
      } while ((ulong)(byte)*puVar9 == 0xff);
      puVar8 = (ulong *)((long)puVar7 + uVar13);
      pauVar11 = (undefined1 (*) [16])(*pauVar10 + uVar13);
      if ((param_5 <= puVar8) || (param_3 <= pauVar11)) {
LAB_001ea7d0:
        uVar5 = 0;
LAB_001ea7d3:
        *param_4 = puVar6;
        *param_1 = (ulong)pauVar10;
        return uVar5;
      }
      uVar5 = *(undefined8 *)((long)puVar9 + 9);
      uVar3 = *(undefined8 *)((long)puVar9 + 0x11);
      uVar4 = *(undefined8 *)((long)puVar9 + 0x19);
      *(ulong *)*pauVar10 = *puVar7;
      *(undefined8 *)(*pauVar10 + 8) = uVar5;
      *(undefined8 *)pauVar10[1] = uVar3;
      *(undefined8 *)(pauVar10[1] + 8) = uVar4;
      uVar5 = *(undefined8 *)((long)puVar9 + 0x29);
      uVar3 = *(undefined8 *)((long)puVar9 + 0x31);
      uVar4 = *(undefined8 *)((long)puVar9 + 0x39);
      *(undefined8 *)pauVar10[2] = *(undefined8 *)((long)puVar9 + 0x21);
      *(undefined8 *)(pauVar10[2] + 8) = uVar5;
      *(undefined8 *)pauVar10[3] = uVar3;
      *(undefined8 *)(pauVar10[3] + 8) = uVar4;
      pbVar15 = (byte *)((long)puVar9 + 0x41);
      pauVar16 = pauVar10 + 4;
      do {
        uVar5 = *(undefined8 *)(pbVar15 + 8);
        uVar3 = *(undefined8 *)(pbVar15 + 0x10);
        uVar4 = *(undefined8 *)(pbVar15 + 0x18);
        *(undefined8 *)*pauVar16 = *(undefined8 *)pbVar15;
        *(undefined8 *)(*pauVar16 + 8) = uVar5;
        *(undefined8 *)pauVar16[1] = uVar3;
        *(undefined8 *)(pauVar16[1] + 8) = uVar4;
        pbVar15 = pbVar15 + 0x20;
        pauVar16 = pauVar16 + 2;
      } while (pauVar16 < pauVar11);
    }
    else {
      uVar5 = *(undefined8 *)((long)puVar6 + 9);
      *(ulong *)*pauVar10 = *puVar7;
      *(undefined8 *)(*pauVar10 + 8) = uVar5;
      puVar8 = (ulong *)((long)puVar7 + uVar13);
      pauVar11 = (undefined1 (*) [16])(*pauVar10 + uVar13);
    }
    if (param_5 <= puVar8) goto LAB_001ea7d0;
    uVar13 = (ulong)(ushort)*puVar8;
    puVar8 = (ulong *)((long)puVar8 + 2);
    if ((uVar13 == 0) ||
       (pauVar16 = (undefined1 (*) [16])((long)pauVar11 - uVar13), pauVar16 < param_2)) {
      uVar5 = 0xffffffffffffffff;
      goto LAB_001ea7d3;
    }
    if (uVar14 == 0x13) {
      uVar14 = 0x13;
      do {
        if (param_5 <= puVar8) goto LAB_001ea7d0;
        uVar2 = *puVar8;
        puVar8 = (ulong *)((long)puVar8 + 1);
        uVar14 = uVar14 + (uVar2 & 0xff);
      } while ((uVar2 & 0xff) == 0xff);
LAB_001ea714:
      pauVar12 = (undefined1 (*) [16])(*pauVar11 + uVar14);
      if (param_3 <= pauVar12) goto LAB_001ea7d0;
      puVar6 = puVar8;
      pauVar10 = pauVar12;
      if (uVar13 < 0x10) {
        do {
          auVar17 = pshufb(*pauVar16,*(undefined1 (*) [16])(&DAT_001ea800 + uVar13 * 0x20));
          auVar18 = pshufb(*pauVar16,*(undefined1 (*) [16])(&DAT_001ea810 + uVar13 * 0x20));
          bVar1 = (&DAT_001eaa00)[uVar13];
          *pauVar11 = auVar17;
          pauVar11[1] = auVar18;
          pauVar11 = (undefined1 (*) [16])(*pauVar11 + bVar1);
          *pauVar11 = auVar17;
          pauVar11[1] = auVar18;
          pauVar11 = (undefined1 (*) [16])(*pauVar11 + bVar1);
        } while (pauVar11 < pauVar12);
      }
      else {
        uVar5 = *(undefined8 *)(*pauVar16 + 8);
        *(undefined8 *)*pauVar11 = *(undefined8 *)*pauVar16;
        *(undefined8 *)(*pauVar11 + 8) = uVar5;
        pauVar16 = pauVar16 + 1;
        pauVar11 = pauVar11 + 1;
        do {
          uVar5 = *(undefined8 *)(*pauVar16 + 8);
          *(undefined8 *)*pauVar11 = *(undefined8 *)*pauVar16;
          *(undefined8 *)(*pauVar11 + 8) = uVar5;
          uVar5 = *(undefined8 *)(pauVar16[1] + 8);
          *(undefined8 *)pauVar11[1] = *(undefined8 *)pauVar16[1];
          *(undefined8 *)(pauVar11[1] + 8) = uVar5;
          pauVar16 = pauVar16 + 2;
          pauVar11 = pauVar11 + 2;
        } while (pauVar11 < pauVar12);
      }
    }
    else {
      if (0x10 < uVar14) goto LAB_001ea714;
      puVar6 = puVar8;
      if (uVar13 < 0x10) {
        auVar17 = pshufb(*pauVar16,*(undefined1 (*) [16])(&DAT_001ea800 + uVar13 * 0x20));
        *pauVar11 = auVar17;
        pauVar10 = (undefined1 (*) [16])(*pauVar11 + uVar14);
      }
      else {
        uVar5 = *(undefined8 *)(*pauVar16 + 8);
        *(undefined8 *)*pauVar11 = *(undefined8 *)*pauVar16;
        *(undefined8 *)(*pauVar11 + 8) = uVar5;
        pauVar10 = (undefined1 (*) [16])(*pauVar11 + uVar14);
      }
    }
  } while( true );
}

