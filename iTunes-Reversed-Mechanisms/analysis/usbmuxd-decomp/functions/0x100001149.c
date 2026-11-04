// rea decompile_all
// name: FUN_100001149
// address: 0x100001149
// body: available
// range: 0x100001149-0x100001199 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000118a to 0x10001337d _IOAllowPowerChange (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100001195 to 0x10000e9e8 FUN_10000e9e8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100001149(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  if (param_3 == -0x1ffffd00) {
    FUN_10000e9e8();
    return;
  }
  if (param_3 == -0x1ffffd80) {
    FUN_10000927c();
    FUN_10000f0f1();
  }
  else if (param_3 != -0x1ffffd90) {
    return;
  }
  _IOAllowPowerChange(DAT_1000212d0,param_4);
  return;
}

