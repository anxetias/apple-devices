// rea decompile_all
// name: _ioapi_fopen_file_func
// address: 0x1bb3da
// body: available
// range: 0x1bb3da-0x1bb432 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1bb42a to 0x2aa356 _fopen (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


FILE * _ioapi_fopen_file_func(undefined8 param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  FILE *pFVar2;
  char cVar3;
  uint uVar4;
  
  cVar3 = '\x01';
  if ((param_3 & 3) == 1) {
    pcVar1 = "rb";
  }
  else if ((param_3 & 4) == 0) {
    pcVar1 = (char *)0x0;
    uVar4 = param_3 >> 3 & 1;
    cVar3 = (char)uVar4;
    if (uVar4 != 0) {
      pcVar1 = "wb";
    }
  }
  else {
    pcVar1 = "r+b";
  }
  if (cVar3 != '\x01' || param_2 == (char *)0x0) {
    return (FILE *)0x0;
  }
  pFVar2 = _fopen(param_2,pcVar1);
  return pFVar2;
}

