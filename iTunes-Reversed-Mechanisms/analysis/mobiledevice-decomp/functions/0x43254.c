// rea decompile_all
// name: _IXCreateRemoteRevertStashRequest
// address: 0x43254
// body: available
// range: 0x43254-0x432fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x432fa to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _IXCreateRemoteRevertStashRequest(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = (*(code *)PTR__objc_retain_004410a8)();
    uVar3 = _xpc_dictionary_create(0,0,0);
    _xpc_dictionary_set_uint64(uVar3,"RequestType",2);
    _xpc_dictionary_set_uint64(uVar3,"RequestVersion",1);
    _xpc_dictionary_set_uint64(uVar3,"ProtocolVersion",1);
    uVar4 = __CFXPCCreateXPCObjectFromCFObject(uVar2);
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar2);
    _xpc_dictionary_set_value(uVar3,"BundleID",uVar4);
    (*(code *)puVar1)(uVar4);
  }
  _objc_autoreleaseReturnValue(uVar3);
  return;
}

