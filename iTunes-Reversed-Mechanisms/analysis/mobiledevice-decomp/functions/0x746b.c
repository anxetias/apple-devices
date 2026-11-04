// rea decompile_all
// name: AMSupportStaticURLSession::_newSession
// address: 0x746b
// body: available
// range: 0x746b-0x74bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ba to 0x60ac00 /usr/lib/libobjc.A.dylib::_objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID AMSupportStaticURLSession::_newSession(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _defaultSessionConfigurationWithIdentifier_
                    (param_1,"_defaultSessionConfigurationWithIdentifier:",0x450bd0);
  IVar1 = NSURLSession::sessionWithConfiguration_delegate_delegateQueue_
                    ((ID)&_OBJC_CLASS___NSURLSession,
                     "sessionWithConfiguration:delegate:delegateQueue:",IVar1,param_1,0);
  IVar1 = (*(code *)PTR__objc_retain_004410a8)(IVar1);
  return IVar1;
}

