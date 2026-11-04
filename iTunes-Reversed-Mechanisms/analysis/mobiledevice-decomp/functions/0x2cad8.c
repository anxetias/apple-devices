// rea decompile_all
// name: _DERDecodeItemPartialBufferGetLength
// address: 0x2cad8
// body: available
// range: 0x2cad8-0x2ccdc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DERDecodeItemPartialBufferGetLength(undefined8 *param_1,ulong *param_2,ulong *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar6 = param_1[1];
  if (uVar6 < 2) {
    return 3;
  }
  pbVar3 = (byte *)*param_1;
  if (pbVar3 != (byte *)0xffffffffffffffff) {
    pbVar1 = pbVar3 + uVar6;
    pbVar7 = pbVar3 + 1;
    uVar6 = uVar6 - 1;
    uVar5 = (ulong)(*pbVar3 & 0x1f);
    if (uVar5 == 0x1f) {
      if (*pbVar7 < 0x1f || *pbVar7 == 0x80) {
        return 3;
      }
      uVar5 = 0;
      do {
        uVar8 = uVar5;
        if (uVar6 < 2) {
          return 3;
        }
        if (uVar8 >> 0x39 != 0) {
          return 3;
        }
        if (pbVar7 == (byte *)0xffffffffffffffff) goto LAB_0002ccce;
        if ((pbVar1 <= pbVar7) || (pbVar7 < pbVar3)) goto LAB_0002ccd3;
        uVar6 = uVar6 - 1;
        bVar2 = *pbVar7;
        pbVar7 = pbVar7 + 1;
        uVar5 = (ulong)(bVar2 & 0x7f) | uVar8 << 7;
      } while ((char)bVar2 < '\0');
      if (uVar8 >> 0x36 != 0) {
        return 3;
      }
    }
    *param_2 = (ulong)(*pbVar3 & 0xffffffe0) << 0x38 | uVar5;
    if (pbVar7 != (byte *)0xffffffffffffffff) {
      if ((pbVar7 < pbVar1) && (pbVar3 <= pbVar7)) {
        pbVar9 = pbVar7 + 1;
        bVar2 = *pbVar7;
        uVar6 = uVar6 - 1;
        if ((char)bVar2 < '\0') {
          uVar10 = bVar2 & 0x7f;
          uVar5 = (ulong)uVar10;
          if (8 < (byte)uVar10) {
            return 3;
          }
          if ((byte)uVar10 == 0) {
            return 3;
          }
          if (uVar6 < uVar5) {
            return 3;
          }
          if ((pbVar9 < pbVar1) && (pbVar3 <= pbVar9)) {
            if (*pbVar9 == 0) {
              return 3;
            }
            pbVar7 = pbVar7 + (ulong)(uVar10 - 1) + 2;
            uVar8 = 0;
            do {
              if (pbVar9 == (byte *)0xffffffffffffffff) goto LAB_0002ccce;
              if (pbVar1 <= pbVar9) goto LAB_0002ccd3;
              uVar11 = uVar6 - 1;
              if (uVar6 == 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)invalidInstructionException();
                (*pcVar4)();
              }
              bVar2 = *pbVar9;
              pbVar9 = pbVar9 + 1;
              uVar8 = (ulong)bVar2 | uVar8 << 8;
              uVar6 = uVar6 - 1;
              uVar10 = (int)uVar5 - 1;
              uVar5 = (ulong)uVar10;
            } while (uVar10 != 0);
            if (uVar8 < 0x80) {
              return 3;
            }
            if (param_3 == (ulong *)0x0 && uVar11 < uVar8) {
              return 3;
            }
            if (uVar8 < uVar11) {
              uVar11 = uVar8;
            }
            if (((pbVar7 <= pbVar1) && (pbVar3 <= pbVar7)) &&
               (uVar11 <= (ulong)((long)pbVar1 - (long)pbVar7))) {
              param_2[1] = (ulong)pbVar7;
              param_2[2] = uVar11;
              goto LAB_0002cc01;
            }
          }
        }
        else {
          uVar8 = (ulong)(uint)bVar2;
          if ((param_3 == (ulong *)0x0) && (uVar6 < uVar8)) {
            return 3;
          }
          if (uVar8 <= uVar6) {
            uVar6 = uVar8;
          }
          if (((pbVar9 <= pbVar1) && (pbVar3 <= pbVar9)) &&
             (uVar6 <= (ulong)((long)pbVar1 - (long)pbVar9))) {
            param_2[1] = (ulong)pbVar9;
            param_2[2] = uVar6;
LAB_0002cc01:
            if (param_3 != (ulong *)0x0) {
              *param_3 = uVar8;
            }
            return 0;
          }
        }
      }
LAB_0002ccd3:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
LAB_0002ccce:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

