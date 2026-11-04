// rea decompile_all
// name: _AMAuthInstallUpdaterCryptex1MobileAssetSetInfo.cold.6
// address: 0x29e6e5
// body: available
// range: 0x29e6e5-0x29e714 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x29e710 to 0x64fb _AMSupportCreateErrorInternal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMAuthInstallUpdaterCryptex1MobileAssetSetInfo_cold_6(undefined8 param_1)

{
  _AMSupportCreateErrorInternal
            (param_1,&cf_AuthInstallErrorDomain,1,0,&cf__s_amaiisNULL,
             "AMAuthInstallUpdaterCryptex1MobileAssetSetInfo");
  return;
}

