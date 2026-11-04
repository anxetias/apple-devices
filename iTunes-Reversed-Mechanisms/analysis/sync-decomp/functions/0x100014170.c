// rea decompile_all
// name: MailAccountState::mailAccountWithAccountName:type:username:hostname:controller:
// address: 0x100014170
// body: available
// range: 0x100014170-0x1000141cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000141cb to 0x1000148ab _objc_autorelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x38 bytes */

ID MailAccountState::mailAccountWithAccountName_type_username_hostname_controller_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(&objc::class_t::MailAccountState);
  IVar1 = initWithAccountName_type_username_hostname_controller_
                    (IVar1,"initWithAccountName:type:username:hostname:controller:",param_3,param_4,
                     param_5,param_6,param_7);
  IVar1 = _objc_autorelease(IVar1);
  return IVar1;
}

