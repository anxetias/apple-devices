// rea decompile_all
// name: _smb_lznt1_decode_buffer
// address: 0x1d4c0b
// body: available
// range: 0x1d4c0b-0x1d4e26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _smb_lznt1_decode_buffer(void *param_1,ulong param_2,ushort *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  byte bVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  
  uVar8 = 0xf;
  if (0xf < param_2) {
    uVar8 = param_2;
  }
  puVar7 = (undefined8 *)((long)param_1 + (uVar8 - 0xf));
  uVar8 = 0;
  do {
    if (param_4 == 0) {
      return uVar8;
    }
    if (param_4 == 1) {
      return 0;
    }
    uVar3 = *param_3;
    if (uVar3 == 0) {
      return uVar8;
    }
    if ((uVar3 & 0x7000) != 0x3000) {
      return 0;
    }
    if ((uVar8 & 0xfff) != 0) {
      return 0;
    }
    uVar18 = (ulong)(uVar3 & 0xfff) + 1;
    if (param_4 - 2U < uVar18) {
      return 0;
    }
    param_3 = param_3 + 1;
    if ((short)uVar3 < 0) {
      uVar12 = 0;
      uVar13 = 0;
      do {
        uVar9 = uVar13 + 1;
        bVar14 = *(byte *)((long)param_3 + uVar13);
        if (((bVar14 == 0) && (uVar13 + 9 <= uVar18)) && (uVar12 + 8 <= param_2)) {
          *(undefined8 *)((long)param_1 + uVar12) = *(undefined8 *)((long)param_3 + uVar9);
          uVar12 = uVar12 + 8;
          uVar9 = uVar13 + 9;
        }
        else if (uVar9 < uVar18) {
          uVar15 = 1;
          do {
            if ((bVar14 & 1) == 0) {
              if (param_2 <= uVar12) {
                return 0;
              }
              *(undefined1 *)((long)param_1 + uVar12) = *(undefined1 *)((long)param_3 + uVar9);
              uVar12 = uVar12 + 1;
              uVar9 = uVar9 + 1;
            }
            else {
              if (uVar18 < uVar9 + 2) {
                return 0;
              }
              uVar6 = (int)uVar12 - 1U & 0xff7 | 8;
              iVar4 = 0x1f;
              if (uVar6 != 0) {
                for (; uVar6 >> iVar4 == 0; iVar4 = iVar4 + -1) {
                }
              }
              bVar11 = ((byte)iVar4 ^ 0x1f) - 0x10;
              uVar6 = (uint)(*(ushort *)((long)param_3 + uVar9) >> (bVar11 & 0x1f));
              uVar13 = (ulong)(uVar6 + 1);
              if (uVar12 < uVar13) {
                return 0;
              }
              uVar16 = (ulong)(((uint)*(ushort *)((long)param_3 + uVar9) & ~(-1 << (bVar11 & 0x1f)))
                              + 3);
              if (param_2 - uVar12 < uVar16) {
                return 0;
              }
              puVar10 = (undefined8 *)((long)param_1 + uVar12);
              puVar1 = (undefined8 *)((long)puVar10 + uVar16);
              lVar17 = -uVar13;
              if ((uVar6 < 0xf) || (puVar7 < puVar1)) {
                do {
                  *(undefined1 *)puVar10 = *(undefined1 *)((long)puVar10 + lVar17);
                  puVar10 = (undefined8 *)((long)puVar10 + 1);
                } while (puVar10 < puVar1);
              }
              else {
                do {
                  puVar2 = (undefined8 *)((long)puVar10 + lVar17);
                  uVar5 = puVar2[1];
                  *puVar10 = *puVar2;
                  puVar10[1] = uVar5;
                  puVar10 = puVar10 + 2;
                } while (puVar10 < puVar1);
              }
              uVar12 = uVar12 + uVar16;
              uVar9 = uVar9 + 2;
            }
            if (7 < uVar15) break;
            bVar14 = bVar14 >> 1;
            uVar15 = uVar15 + 1;
          } while (uVar9 < uVar18);
        }
        uVar13 = uVar9;
      } while (uVar9 < uVar18);
    }
    else {
      if (param_2 < uVar18) {
        return 0;
      }
      _memcpy(param_1,param_3,uVar18);
      uVar12 = uVar18;
      uVar9 = uVar18;
    }
    param_1 = (void *)((long)param_1 + uVar12);
    param_2 = param_2 - uVar12;
    param_3 = (ushort *)((long)param_3 + uVar9);
    param_4 = (param_4 - 2U) - uVar9;
    uVar8 = uVar8 + uVar12;
  } while( true );
}

