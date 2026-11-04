// rea decompile_all
// name: _DEREncodeLengthSized
// address: 0x2d5e2
// body: available
// range: 0x2d5e2-0x2d6d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DEREncodeLengthSized(ulong param_1,byte *param_2,ulong param_3,ulong *param_4)

{
  ulong uVar1;
  bool bVar2;
  code *pcVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  
  if (param_1 < 0x80) {
    if (param_3 == 0) {
      return 7;
    }
    if (*param_4 != 0) {
      *param_2 = (byte)param_1;
      uVar4 = 1;
      if (*param_4 != 0) {
LAB_0002d6bb:
        *param_4 = uVar4;
        return 0;
      }
    }
  }
  else {
    bVar8 = 0x80;
    lVar7 = 0;
    uVar6 = param_1;
    do {
      lVar7 = lVar7 + -1;
      bVar8 = bVar8 + 1;
      bVar2 = 0xff < uVar6;
      uVar6 = uVar6 >> 8;
    } while (bVar2);
    uVar6 = -lVar7;
    if (0x7e < uVar6 || param_3 <= uVar6) {
      return 7;
    }
    if (*param_4 != 0) {
      *param_2 = bVar8 | 0x80;
      if ((~(ulong)param_2 <= uVar6) ||
         (pbVar5 = param_2 + -lVar7, pbVar5 == (byte *)0xfffffffffffffffe)) {
LAB_0002d6ce:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar4 = 1 - lVar7;
      uVar1 = *param_4;
      do {
        if (pbVar5 == (byte *)0xffffffffffffffff) goto LAB_0002d6ce;
        if ((param_2 + uVar1 <= pbVar5) || (pbVar5 < param_2)) goto LAB_0002d6c9;
        *pbVar5 = (byte)param_1;
        pbVar5 = pbVar5 + -1;
        bVar2 = 0xff < param_1;
        param_1 = param_1 >> 8;
      } while (bVar2);
      if (uVar6 < *param_4) goto LAB_0002d6bb;
    }
  }
LAB_0002d6c9:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

