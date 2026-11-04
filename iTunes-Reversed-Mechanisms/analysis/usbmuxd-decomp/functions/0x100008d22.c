// rea decompile_all
// name: FUN_100008d22
// address: 0x100008d22
// body: available
// range: 0x100008d22-0x100008d86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100008d3e to 0x100000dea FUN_100000dea (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_100008d22(long param_1)

{
  char *pcVar1;
  
  if (param_1 == 0) {
    pcVar1 = "null";
  }
  else {
    if (*(long *)(param_1 + 0x28) != 0) {
      pcVar1 = (char *)FUN_100000dea();
      return pcVar1;
    }
    if (*(char *)(param_1 + 0x30) == '\0') {
      pcVar1 = (char *)FUN_100000d5e();
      _snprintf(pcVar1,0x400,"%d-?",(ulong)*(uint *)(param_1 + 0x188));
    }
    else {
      pcVar1 = (char *)(param_1 + 0x30);
    }
  }
  return pcVar1;
}

