// rea decompile_all
// name: ___isRunningInRootLaunchdContext_block_invoke
// address: 0x128784
// body: available
// range: 0x128784-0x1287ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___isRunningInRootLaunchdContext_block_invoke(void)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  char *local_18;
  
  local_18 = (char *)0x0;
  lVar1 = _vproc_swap_string(0,6,0,&local_18);
  pcVar2 = local_18;
  if (lVar1 == 0) {
    iVar3 = _strcmp(local_18,"System");
    if (iVar3 != 0) {
      iVar3 = _strcmp(pcVar2,"LoginWindow");
      if (iVar3 != 0) goto LAB_001287db;
    }
    _isRunningInRootLaunchdContext_retval = 1;
  }
LAB_001287db:
  if (pcVar2 != (char *)0x0) {
    _free(pcVar2);
  }
  return;
}

