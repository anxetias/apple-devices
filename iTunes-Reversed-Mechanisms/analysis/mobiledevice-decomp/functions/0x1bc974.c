// rea decompile_all
// name: _amai_unzStringFileNameCompare
// address: 0x1bc974
// body: available
// range: 0x1bc974-0x1bc9de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1bc97e to 0x2aa8f0 _strcmp (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _amai_unzStringFileNameCompare(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  
  if (param_3 == 1) {
    iVar3 = _strcmp(param_1,param_2);
    return iVar3;
  }
  lVar4 = 0;
  while( true ) {
    cVar1 = param_1[lVar4];
    cVar5 = cVar1 + -0x20;
    if (0x19 < (byte)(cVar1 + 0x9fU)) {
      cVar5 = cVar1;
    }
    cVar1 = param_2[lVar4];
    cVar2 = cVar1 + -0x20;
    if (0x19 < (byte)(cVar1 + 0x9fU)) {
      cVar2 = cVar1;
    }
    if (cVar5 == '\0') {
      return -(uint)(cVar2 != '\0');
    }
    if (cVar2 == '\0') {
      return 1;
    }
    if (cVar5 < cVar2) break;
    lVar4 = lVar4 + 1;
    if (cVar2 < cVar5) {
      return 1;
    }
  }
  return -1;
}

