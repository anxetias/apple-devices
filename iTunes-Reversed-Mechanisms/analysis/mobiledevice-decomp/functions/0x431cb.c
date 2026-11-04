// rea decompile_all
// name: _IXGetUninstallResponseStatus
// address: 0x431cb
// body: available
// range: 0x431cb-0x43253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43252 to 0x60ab00 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _IXGetUninstallResponseStatus(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = (*(code *)PTR__objc_retain_004410a8)();
  uVar4 = _xpc_dictionary_get_value(uVar3,"ErrorData");
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  if (param_3 != (undefined8 *)0x0) {
    uVar5 = __IXCreateNSErrorFromSerializedXPCData(uVar4);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar5 = _objc_autorelease(uVar5);
    *param_3 = uVar5;
  }
  if (param_2 != (undefined1 *)0x0) {
    uVar2 = _xpc_dictionary_get_bool(uVar3,"Success");
    *param_2 = uVar2;
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  (*(code *)puVar1)(uVar3);
  return;
}

