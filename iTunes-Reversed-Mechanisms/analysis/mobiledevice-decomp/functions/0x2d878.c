// rea decompile_all
// name: _DEREncodeTag
// address: 0x2d878
// body: available
// range: 0x2d878-0x2d965 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DEREncodeTag(ulong param_1,byte *param_2,ulong *param_3)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  
  uVar8 = param_1 & 0x1fffffffffffffff;
  bVar3 = (byte)(param_1 >> 0x38);
  if (0x1e < uVar8) {
    uVar5 = uVar8;
    uVar6 = 0;
    pbVar4 = param_2 + 1;
    do {
      pbVar9 = pbVar4;
      uVar7 = uVar6;
      uVar6 = uVar7 + 1;
      bVar1 = 0x7f < uVar5;
      uVar5 = uVar5 >> 7;
      pbVar4 = pbVar9 + 1;
    } while (bVar1);
    uVar5 = *param_3;
    if (uVar5 <= uVar6) {
      return 7;
    }
    if ((uVar6 < ~(ulong)param_2) &&
       (*param_2 = bVar3 | 0x1f, pbVar9 + 1 != (byte *)0xffffffffffffffff)) {
      uVar7 = uVar7 + 2;
      *pbVar9 = (byte)param_1 & 0x7f;
      if (uVar8 < 0x80) goto LAB_0002d949;
      while (pbVar9 = pbVar9 + -1, pbVar9 != (byte *)0xfffffffffffffffe) {
        if ((param_2 + uVar5 <= pbVar9) || (pbVar9 < param_2)) goto LAB_0002d95c;
        *pbVar9 = (byte)(uVar8 >> 7) | 0x80;
        bVar1 = uVar8 < 0x4000;
        uVar8 = uVar8 >> 7;
        if (bVar1) goto LAB_0002d949;
      }
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (*param_3 == 0) {
    return 7;
  }
  *param_2 = (byte)param_1 | bVar3 & 0xe0;
  uVar7 = 1;
LAB_0002d949:
  if (uVar7 <= *param_3) {
    *param_3 = uVar7;
    return 0;
  }
LAB_0002d95c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

