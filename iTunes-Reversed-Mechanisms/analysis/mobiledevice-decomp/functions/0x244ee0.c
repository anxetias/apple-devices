// rea decompile_all
// name: PS190TatsuRequestCreatorBackDeploy::.cxx_destruct
// address: 0x244ee0
// body: available
// range: 0x244ee0-0x244f32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x244f2e to 0x2aa602 _objc_storeStrong (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void PS190TatsuRequestCreatorBackDeploy::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(_requestDictionary + param_1,0);
  _objc_storeStrong(_apParameters + param_1,0);
  _objc_storeStrong(_firmwareData + param_1,0);
  _objc_storeStrong(param_1 + _deviceInfoArray,0);
  return;
}

