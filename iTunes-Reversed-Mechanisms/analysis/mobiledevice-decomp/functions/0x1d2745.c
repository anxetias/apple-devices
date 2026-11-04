// rea decompile_all
// name: _lz24_decode_buffer
// address: 0x1d2745
// body: available
// range: 0x1d2745-0x1d2a85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _lz24_decode_buffer(undefined8 *param_1,ulong param_2,uint *param_3,ulong param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  size_t sVar18;
  uint *puVar19;
  ushort *puVar20;
  undefined8 *puVar21;
  
  if (3 < (long)param_4 && -1 < (long)(param_4 | param_2)) {
    uVar12 = (ulong)*param_3;
    if (uVar12 <= param_2) {
      puVar15 = param_1;
      if (*param_3 != 0) {
        puVar19 = param_3 + 1;
        puVar1 = (undefined8 *)((long)param_1 + (param_2 - 0x3e));
        do {
          sVar18 = 0x1000;
          if ((uint)uVar12 < 0x1000) {
            sVar18 = uVar12;
          }
          uVar8 = (long)param_3 + (param_4 - (long)puVar19);
          if ((long)uVar8 < 2) {
            return 0;
          }
          puVar10 = (undefined1 *)((long)param_1 + (param_2 - (long)puVar15));
          if ((long)puVar10 < (long)sVar18) {
            return 0;
          }
          if ((ushort)*puVar19 == 0) {
            puVar20 = (ushort *)((long)puVar19 + 2);
            if ((long)((long)param_3 + (param_4 - (long)puVar20)) < (long)sVar18) {
              return 0;
            }
            _memcpy(puVar15,puVar20,sVar18);
            puVar19 = (uint *)((long)puVar20 + sVar18);
          }
          else {
            puVar7 = (undefined8 *)(sVar18 + (long)puVar15);
            puVar9 = puVar15;
            if (((undefined1 *)((long)&segment_command_00000020.vmaddr + 6) < puVar10) &&
               (0x22 < uVar8)) {
              puVar11 = puVar1;
              if (puVar7 < puVar1) {
                puVar11 = puVar7;
              }
              do {
                uVar14 = *puVar19;
                uVar13 = uVar14 >> 5 & 0x1f;
                uVar16 = uVar14 >> 10 & 0x3fff;
                uVar8 = (ulong)uVar16;
                uVar4 = *(undefined8 *)((long)puVar19 + 3);
                uVar5 = *(undefined8 *)((long)puVar19 + 0xb);
                uVar6 = *(undefined8 *)((long)puVar19 + 0x1b);
                puVar9[2] = *(undefined8 *)((long)puVar19 + 0x13);
                puVar9[3] = uVar6;
                *puVar9 = uVar4;
                puVar9[1] = uVar5;
                if (uVar16 < uVar13) {
                  return 0;
                }
                puVar9 = (undefined8 *)((long)puVar9 + (ulong)(uVar14 & 0x1f));
                if ((long)puVar9 - (long)param_1 < (long)uVar8) {
                  return 0;
                }
                puVar19 = (uint *)((long)puVar19 + (ulong)(uVar14 & 0x1f) + 3);
                uVar4 = *(undefined8 *)((long)puVar9 - uVar8);
                uVar5 = ((undefined8 *)((long)puVar9 - uVar8))[1];
                puVar17 = (undefined8 *)((long)puVar9 + (0x10 - uVar8));
                uVar6 = puVar17[1];
                puVar9[2] = *puVar17;
                puVar9[3] = uVar6;
                *puVar9 = uVar4;
                puVar9[1] = uVar5;
                puVar9 = (undefined8 *)((long)puVar9 + (ulong)uVar13);
              } while ((puVar19 < (uint *)((long)param_3 + (param_4 - 0x22))) && (puVar9 < puVar11))
              ;
              if (puVar7 < puVar9) {
                return 0;
              }
            }
            for (; puVar9 < puVar7; puVar9 = (undefined8 *)((long)puVar9 + (ulong)uVar14)) {
              if ((long)((long)param_3 + (param_4 - (long)puVar19)) < 3) {
                return 0;
              }
              uVar2 = (ushort)*puVar19;
              uVar8 = (ulong)(uVar2 & 0x1f);
              uVar14 = uVar2 >> 5 & 0x1f;
              if ((long)puVar7 - (long)puVar9 < (long)(ulong)(uVar14 + (uVar2 & 0x1f))) {
                return 0;
              }
              puVar11 = (undefined8 *)((long)puVar19 + 3);
              if ((long)((long)param_3 + (param_4 - (long)puVar11)) < (long)uVar8) {
                return 0;
              }
              uVar3 = *(ushort *)((long)puVar19 + 1);
              puVar17 = puVar9;
              puVar21 = puVar11;
              if ((uVar2 & 0x10) != 0) {
                uVar4 = *(undefined8 *)((long)puVar19 + 0xb);
                *puVar9 = *(undefined8 *)((long)puVar19 + 3);
                puVar9[1] = uVar4;
                puVar17 = puVar9 + 2;
                puVar21 = (undefined8 *)((long)puVar19 + 0x13);
              }
              if ((uVar2 & 8) != 0) {
                *puVar17 = *puVar21;
                puVar17 = puVar17 + 1;
                puVar21 = puVar21 + 1;
              }
              if ((uVar2 & 4) != 0) {
                *(undefined4 *)puVar17 = *(undefined4 *)puVar21;
                puVar17 = (undefined8 *)((long)puVar17 + 4);
                puVar21 = (undefined8 *)((long)puVar21 + 4);
              }
              if ((uVar2 & 2) != 0) {
                *(undefined2 *)puVar17 = *(undefined2 *)puVar21;
                puVar17 = (undefined8 *)((long)puVar17 + 2);
                puVar21 = (undefined8 *)((long)puVar21 + 2);
              }
              if ((uVar2 & 1) != 0) {
                *(undefined1 *)puVar17 = *(undefined1 *)puVar21;
              }
              uVar13 = (uint)(uVar3 >> 2);
              if (uVar13 < uVar14) {
                return 0;
              }
              puVar9 = (undefined8 *)((long)puVar9 + uVar8);
              if ((long)puVar9 - (long)param_1 < (long)(ulong)uVar13) {
                return 0;
              }
              puVar21 = (undefined8 *)((long)puVar9 - (ulong)uVar13);
              puVar17 = puVar9;
              if ((uVar2 >> 9 & 1) != 0) {
                uVar4 = puVar21[1];
                *puVar9 = *puVar21;
                puVar9[1] = uVar4;
                puVar21 = puVar21 + 2;
                puVar17 = puVar9 + 2;
              }
              if ((uVar2 >> 8 & 1) != 0) {
                *puVar17 = *puVar21;
                puVar17 = puVar17 + 1;
                puVar21 = puVar21 + 1;
              }
              if ((char)uVar2 < '\0') {
                *(undefined4 *)puVar17 = *(undefined4 *)puVar21;
                puVar17 = (undefined8 *)((long)puVar17 + 4);
                puVar21 = (undefined8 *)((long)puVar21 + 4);
              }
              if ((uVar2 & 0x40) != 0) {
                *(undefined2 *)puVar17 = *(undefined2 *)puVar21;
                puVar17 = (undefined8 *)((long)puVar17 + 2);
                puVar21 = (undefined8 *)((long)puVar21 + 2);
              }
              if ((uVar2 & 0x20) != 0) {
                *(undefined1 *)puVar17 = *(undefined1 *)puVar21;
              }
              puVar19 = (uint *)((long)puVar11 + uVar8);
            }
          }
          puVar15 = (undefined8 *)((long)puVar15 + sVar18);
          uVar14 = (uint)uVar12 - (int)sVar18;
          uVar12 = (ulong)uVar14;
        } while (uVar14 != 0);
      }
      return (long)puVar15 - (long)param_1;
    }
  }
  return 0;
}

