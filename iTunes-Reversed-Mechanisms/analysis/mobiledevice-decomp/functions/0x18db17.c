// rea decompile_all
// name: _setThreadErrorContext
// address: 0x18db17
// body: available
// range: 0x18db17-0x18db6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18db63 to 0x18d74e _pc_log_error (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _setThreadErrorContext(void *param_1)

{
  int iVar1;
  pthread_key_t pVar2;
  int *piVar3;
  
  pVar2 = _getErrorContextKey();
  iVar1 = _pthread_setspecific(pVar2,param_1);
  if (iVar1 != 0) {
    piVar3 = ___error();
    _pc_log_error("/AppleInternal/Library/BuildRoots/4~Caj6ugDGYsYEA-VFMB05u4pLpIBvwdTdC-LDNMc/Library/Caches/com.apple.xbs/Sources/ParallelCompression/Common/Threads.c"
                  ,"setThreadErrorContext",0x41,5,*piVar3,"pthread_setspecific");
    return;
  }
  return;
}

