// rea decompile_all
// name: _DERDecodeItemPartialBuffer
// address: 0x2ccdd
// body: available
// range: 0x2ccdd-0x2ceb4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DERDecodeItemPartialBuffer(undefined8 *param_1,ulong *param_2,byte param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  
  uVar6 = param_1[1];
  if (uVar6 < 2) {
    return 3;
  }
  pbVar3 = (byte *)*param_1;
  if (pbVar3 != (byte *)0xffffffffffffffff) {
    pbVar1 = pbVar3 + uVar6;
    pbVar9 = pbVar3 + 1;
    uVar6 = uVar6 - 1;
    uVar7 = (ulong)(*pbVar3 & 0x1f);
    if (uVar7 == 0x1f) {
      if (*pbVar9 < 0x1f || *pbVar9 == 0x80) {
        return 3;
      }
      uVar7 = 0;
      do {
        uVar10 = uVar7;
        if (uVar6 < 2) {
          return 3;
        }
        if (uVar10 >> 0x39 != 0) {
          return 3;
        }
        if (pbVar9 == (byte *)0xffffffffffffffff) goto LAB_0002cea6;
        if ((pbVar1 <= pbVar9) || (pbVar9 < pbVar3)) goto LAB_0002ceab;
        uVar6 = uVar6 - 1;
        bVar2 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar7 = (ulong)(bVar2 & 0x7f) | uVar10 << 7;
      } while ((char)bVar2 < '\0');
      if (uVar10 >> 0x36 != 0) {
        return 3;
      }
    }
    *param_2 = (ulong)(*pbVar3 & 0xffffffe0) << 0x38 | uVar7;
    if (pbVar9 != (byte *)0xffffffffffffffff) {
      if ((pbVar9 < pbVar1) && (pbVar3 <= pbVar9)) {
        pbVar11 = pbVar9 + 1;
        bVar2 = *pbVar9;
        uVar6 = uVar6 - 1;
        if ((char)bVar2 < '\0') {
          uVar12 = bVar2 & 0x7f;
          uVar7 = (ulong)uVar12;
          if (8 < (byte)uVar12) {
            return 3;
          }
          if ((byte)uVar12 == 0) {
            return 3;
          }
          if (uVar6 < uVar7) {
            return 3;
          }
          if ((pbVar1 <= pbVar11) || (pbVar11 < pbVar3)) goto LAB_0002ceab;
          if (*pbVar11 == 0) {
            return 3;
          }
          pbVar9 = pbVar9 + (ulong)(uVar12 - 1) + 2;
          uVar10 = 0;
          do {
            if (pbVar11 == (byte *)0xffffffffffffffff) goto LAB_0002cea6;
            if (pbVar1 <= pbVar11) goto LAB_0002ceab;
            uVar8 = uVar6 - 1;
            if (uVar6 == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            bVar2 = *pbVar11;
            pbVar11 = pbVar11 + 1;
            uVar10 = (ulong)bVar2 | uVar10 << 8;
            uVar6 = uVar6 - 1;
            uVar12 = (int)uVar7 - 1;
            uVar7 = (ulong)uVar12;
          } while (uVar12 != 0);
          if (uVar10 < 0x80) {
            return 3;
          }
          if (uVar8 < uVar10 && param_3 == 0) {
            return 3;
          }
        }
        else {
          uVar10 = (ulong)(uint)bVar2;
          pbVar9 = pbVar11;
          if ((uVar6 < uVar10 & (param_3 ^ 1)) != 0) {
            return 3;
          }
        }
        uVar5 = 7;
        if (uVar10 <= (~(ulong)pbVar9 & 0x7fffffffffffffff)) {
          if (pbVar9 + uVar10 < pbVar9) goto LAB_0002ceab;
          param_2[1] = (ulong)pbVar9;
          param_2[2] = uVar10;
          uVar5 = 0;
        }
        return uVar5;
      }
LAB_0002ceab:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
LAB_0002cea6:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

