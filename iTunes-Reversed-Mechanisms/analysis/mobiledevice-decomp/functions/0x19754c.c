// rea decompile_all
// name: RPSocket_srv::closeFD
// address: 0x19754c
// body: available
// range: 0x19754c-0x1975a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x197597 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RPSocket_srv::closeFD() */

void __thiscall RPSocket_srv::closeFD(RPSocket_srv *this)

{
  if (closeFD()::once != -1) {
    closeFD();
  }
  if (_ld_AMDServiceConnectionInvalidate != (code *)0x0) {
    (*_ld_AMDServiceConnectionInvalidate)(*(undefined8 *)(this + 0x188));
    if (*(long *)(this + 0x188) != 0) {
      _CFRelease();
    }
    if (*(long *)(this + 400) != 0) {
      _CFRelease();
      return;
    }
  }
  return;
}

