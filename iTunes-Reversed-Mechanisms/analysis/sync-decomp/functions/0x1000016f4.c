// rea decompile_all
// name: FUN_1000016f4
// address: 0x1000016f4
// body: available
// range: 0x1000016f4-0x10000174c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100001748 to 0x100014893 _fprintf (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000016f4(void)

{
  ID IVar1;
  
  IVar1 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  IVar1 = NSProcessInfo::processName(IVar1,"processName");
  IVar1 = NSProcessInfo::UTF8String(IVar1,"UTF8String");
  _fprintf(*(FILE **)PTR____stderrp_1000201b8,
           "Usage:\n%s --device device_identifier --target target_identifier [--entitynames name[,name,...]] [--reset]\n%s --device device_identifier --target target_identifier [--dataclassnames name[,name,...]] [--reset]\n"
           ,IVar1,IVar1);
  return;
}

