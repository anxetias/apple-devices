// rea decompile_all
// name: _append_argv_paths_from_array
// address: 0x16104c
// body: available
// range: 0x16104c-0x1610cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _append_argv_paths_from_array(undefined8 param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = _CFArrayGetCount(param_2);
  if (lVar1 < 1 || param_3 == (char *)0x0) {
    if (lVar1 < 1) {
      return;
    }
  }
  else {
    pcVar2 = _strdup(param_3);
    _CFArrayAppendValue(param_1,pcVar2);
  }
  lVar4 = 0;
  do {
    uVar3 = _CFArrayGetValueAtIndex(param_2,lVar4);
    uVar3 = _cfstring_dup_strip_uri(uVar3,0);
    _CFArrayAppendValue(param_1,uVar3);
    lVar4 = lVar4 + 1;
  } while (lVar1 != lVar4);
  return;
}

