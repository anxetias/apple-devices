// rea decompile_all
// name: _parseNumTokenValue
// address: 0xdfa16
// body: available
// range: 0xdfa16-0xdfa62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _parseNumTokenValue(char *param_1,undefined4 *param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar3 = -1;
  }
  else {
    piVar1 = ___error();
    *piVar1 = 0;
    lVar2 = _strtol(param_1,(char **)0x0,0x10);
    *param_2 = (int)lVar2;
    piVar1 = ___error();
    iVar3 = -(uint)(*piVar1 != 0);
  }
  return iVar3;
}

