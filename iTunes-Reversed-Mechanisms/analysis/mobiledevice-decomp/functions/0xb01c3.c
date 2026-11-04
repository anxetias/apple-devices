// rea decompile_all
// name: _prepare_directories_for_file
// address: 0xb01c3
// body: available
// range: 0xb01c3-0xb0238 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _prepare_directories_for_file(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  if (param_1 == (char *)0x0) {
    _prepare_directories_for_file_cold_2();
    uVar4 = 0xffffffff;
  }
  else {
    pcVar2 = _strdup(param_1);
    pcVar3 = _rindex(pcVar2,0x2f);
    uVar4 = 0xffffffff;
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
      iVar1 = _mkdir_recursive(pcVar2);
      if (iVar1 == 0) {
        *pcVar3 = '/';
        uVar4 = 0;
      }
      else {
        _prepare_directories_for_file_cold_1(pcVar2);
      }
    }
    if (pcVar2 != (char *)0x0) {
      _free(pcVar2);
    }
  }
  return uVar4;
}

