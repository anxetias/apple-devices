// rea decompile_all
// name: __AMDevicePowerAssertionCopyDebugDescription
// address: 0x102926
// body: available
// range: 0x102926-0x102976 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x102969 to 0x2a98dc _CFStringCreateWithFormat (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMDevicePowerAssertionCopyDebugDescription(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) == 0x72776f70)) {
    uVar1 = _CFGetAllocator(param_1);
    uVar1 = _CFStringCreateWithFormat
                      (*(undefined8 *)(param_1 + 0x78),uVar1,0,
                       &cf_AMDevicePowerAssertion_p_Name______Details______Length___1lfseconds_,
                       param_1,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
    return uVar1;
  }
  return 0;
}

