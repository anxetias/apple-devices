// rea decompile_all
// name: _AMAuthInstallICreateTranslationOfRecoveryEnteryName
// address: 0x1a8604
// body: available
// range: 0x1a8604-0x1a8674 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a865d to 0x2a98e8 _CFStringCreateWithSubstring (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1a8670 to 0x2a989a _CFStringCreateCopy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMAuthInstallICreateTranslationOfRecoveryEnteryName(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  auVar3 = _CFStringFind(param_2,&cf_RecoveryOS,0);
  if (auVar3._0_8_ != -1) {
    lVar1 = _CFStringGetLength(param_2);
    lVar2 = _CFStringGetLength(&cf_RecoveryOS);
    _CFStringCreateWithSubstring(param_1,param_2,auVar3._8_8_,lVar1 - lVar2);
    return;
  }
  _CFStringCreateCopy(param_1,param_2);
  return;
}

