// rea decompile_all
// name: _parseNum64TokenValue
// address: 0xdfa63
// body: available
// range: 0xdfa63-0xdfaaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _parseNum64TokenValue(char *param_1,ulonglong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == (ulonglong *)0x0) {
    iVar3 = -1;
  }
  else {
    piVar1 = ___error();
    *piVar1 = 0;
    uVar2 = _strtoull(param_1,(char **)0x0,0x10);
    *param_2 = uVar2;
    piVar1 = ___error();
    iVar3 = -(uint)(*piVar1 != 0);
  }
  return iVar3;
}

