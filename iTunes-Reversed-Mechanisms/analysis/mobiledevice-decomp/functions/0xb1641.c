// rea decompile_all
// name: _copyParentOfPath
// address: 0xb1641
// body: available
// range: 0xb1641-0xb16ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * _copyParentOfPath(char *param_1)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  
  pcVar1 = _strdup(param_1);
  sVar2 = _strlen(pcVar1);
  if (pcVar1[sVar2 - 1] == '/') {
    pcVar1[sVar2 - 1] = '\0';
  }
  pcVar3 = _rindex(pcVar1,0x2f);
  if (pcVar3 == (char *)0x0) {
    _dmlog("copyParentOfPath",0x19f,&cf_unabletofindparentof_s,param_1);
    _free(pcVar1);
    pcVar1 = (char *)0x0;
  }
  else {
    *pcVar3 = '\0';
  }
  return pcVar1;
}

