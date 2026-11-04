// rea decompile_all
// name: _DERParseInteger64
// address: 0x2cff5
// body: available
// range: 0x2cff5-0x2d068 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DERParseInteger64(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  char *pcVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    pcVar2 = (char *)*param_1;
    if (-1 < *pcVar2) {
      if (*pcVar2 == '\0') {
        if (uVar1 != 1) {
          if (pcVar2 + uVar1 <= pcVar2 + 1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (-1 < pcVar2[1]) {
            return 3;
          }
          if (9 < uVar1) {
            return 7;
          }
        }
      }
      else if (8 < uVar1) {
        return 7;
      }
      uVar4 = 0;
      uVar5 = 0;
      do {
        uVar5 = (ulong)(byte)pcVar2[uVar4] | uVar5 << 8;
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
      *param_2 = uVar5;
      return 0;
    }
  }
  return 3;
}

