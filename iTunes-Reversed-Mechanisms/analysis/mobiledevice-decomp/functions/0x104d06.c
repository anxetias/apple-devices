// rea decompile_all
// name: AMDeviceProxy::LogAndRelease
// address: 0x104d06
// body: available
// range: 0x104d06-0x104d33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x104d2e to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* AMDeviceProxy::LogAndRelease(int, __CFString const*) const */

void __thiscall AMDeviceProxy::LogAndRelease(AMDeviceProxy *this,int param_1,__CFString *param_2)

{
  undefined4 in_register_00000034;
  
  if (param_2 != (__CFString *)0x0) {
    Log((int)this,(__CFString *)CONCAT44(in_register_00000034,param_1),&cf___,param_2);
    _CFRelease(param_2);
    return;
  }
  return;
}

