// rea decompile_all
// name: FUN_10000b998
// address: 0x10000b998
// body: available
// range: 0x10000b998-0x10000b9f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000b9f3 to 0x100027600 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000b998(void)

{
  undefined *puVar1;
  ID self;
  
  self = _objc_alloc(&_OBJC_CLASS___NSDateFormatter);
  puVar1 = PTR__objc_msgSend_100012170;
  DAT_100016730 = NSDateFormatter::init(self,"init");
  NSDateFormatter::setFormatterBehavior_(DAT_100016730,"setFormatterBehavior:",0x410);
  (*(code *)puVar1)(DAT_100016730,"setDateFormat:",&cf_yyyy_MM_ddHH_mm_ss_SSS);
  return;
}

