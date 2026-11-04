// rea decompile_all
// name: RPSocket_srv::RPSocket_srv
// address: 0x1996e1
// body: available
// range: 0x1996e1-0x1996fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1996f6 to 0x2aa24e _dispatch_once_f (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket_srv::RPSocket_srv(_AMDServiceConnection*, __CFString const*) [clone .cold.1] */

void __thiscall
RPSocket_srv::RPSocket_srv(RPSocket_srv *this,_AMDServiceConnection *param_1,__CFString *param_2)

{
  _dispatch_once_f(&_ld_AMDServiceConnectionGetSocket(_AMDServiceConnection*)::once,(void *)0x0,
                   __dispatch_ld_AMDServiceConnectionGetSocket);
  return;
}

