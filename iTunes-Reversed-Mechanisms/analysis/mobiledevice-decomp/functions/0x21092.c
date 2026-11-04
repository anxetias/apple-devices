// rea decompile_all
// name: _inc_uint
// address: 0x21092
// body: available
// range: 0x21092-0x210bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _inc_uint(long param_1,ulong param_2)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  
  if (param_2 != 0) {
    pcVar2 = (char *)(param_2 + param_1);
    uVar3 = 2;
    do {
      pcVar2 = pcVar2 + -1;
      *pcVar2 = *pcVar2 + '\x01';
      if (*pcVar2 != '\0') {
        return;
      }
      bVar1 = uVar3 <= param_2;
      uVar3 = uVar3 + 1;
    } while (bVar1);
  }
  return;
}

