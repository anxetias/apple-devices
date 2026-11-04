// rea decompile_all
// name: _IXGetLoggingHandle
// address: 0x364f0
// body: available
// range: 0x364f0-0x36552 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3653c to 0x2aa5de _objc_retainAutoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _IXGetLoggingHandle(undefined8 param_1)

{
  undefined *local_30;
  undefined8 local_28;
  code *local_20;
  undefined *local_18;
  undefined8 local_10;
  
  local_30 = PTR___NSConcreteStackBlock_004412a8;
  local_28 = 0xc0000000;
  local_20 = ___IXGetLoggingHandle_block_invoke;
  local_18 = &___block_descriptor_40_e5_v8__0l;
  local_10 = param_1;
  if (_IXGetLoggingHandle_onceToken != -1) {
    _dispatch_once(&_IXGetLoggingHandle_onceToken,&local_30);
  }
  _objc_retainAutoreleaseReturnValue(_IXGetLoggingHandle_logHandle);
  return;
}

