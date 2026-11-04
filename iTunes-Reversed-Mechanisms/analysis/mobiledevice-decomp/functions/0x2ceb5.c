// rea decompile_all
// name: _DERParseBitString
// address: 0x2ceb5
// body: available
// range: 0x2ceb5-0x2cf63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char _DERParseBitString(undefined8 *param_1,ulong *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  code *pcVar5;
  char cVar6;
  
  *param_3 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  cVar6 = '\x03';
  if (param_1[1] != 0) {
    bVar2 = *(byte *)*param_1;
    *param_3 = bVar2;
    lVar3 = param_1[1];
    if (lVar3 == 1) {
      cVar6 = (bVar2 != 0) * '\x03';
    }
    else if (bVar2 < 8) {
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      pbVar4 = (byte *)*param_1;
      pbVar1 = pbVar4 + (lVar3 - 1U);
      if ((pbVar4 + lVar3 <= pbVar1) || (pbVar1 < pbVar4)) {
LAB_0002cf55:
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      if ((0xffU >> (8 - bVar2 & 0x1f) & (uint)*pbVar1) == 0) {
        if (pbVar4 == (byte *)0xffffffffffffffff) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        pbVar1 = pbVar4 + 1;
        if ((pbVar4 + lVar3 < pbVar1) || (pbVar1 < pbVar4)) goto LAB_0002cf55;
        *param_2 = (ulong)pbVar1;
        param_2[1] = lVar3 - 1U;
        cVar6 = '\0';
      }
    }
  }
  return cVar6;
}

