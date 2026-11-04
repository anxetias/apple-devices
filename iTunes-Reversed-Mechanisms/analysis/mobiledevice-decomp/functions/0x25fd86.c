// rea decompile_all
// name: _T200UpdaterCreateRequestWithLogging.cold.3
// address: 0x25fd86
// body: available
// range: 0x25fd86-0x25fdde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25fdda to 0x25d6a6 _T200RestoreInfoLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _T200UpdaterCreateRequestWithLogging_cold_3(void)

{
  _DebugAssert(0x3f2a3f2a,0,"Third Party Client: fwData!=NULL","exit",0,
               "/AppleInternal/Library/BuildRoots/4~CajzugAGHtsafftOhWSINGk5HSoWP6SVFVL27zQ/Library/Caches/com.apple.xbs/Sources/VeridianDylibs/T200RestoreInfo/T200RestoreInfo.c"
               ,399,0);
  _T200RestoreInfoLog("%s:%d fwData is NULL\n","_createMeasurementDict",399);
  return;
}

