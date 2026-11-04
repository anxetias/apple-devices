// rea decompile_all
// name: FUN_100012a90
// address: 0x100012a90
// body: available
// range: 0x100012a90-0x100012aff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100012afe to 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false), 0x100038a02 NSAutoreleasePool::drain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100012a90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  
  IVar2 = _objc_alloc(&_OBJC_CLASS___NSAutoreleasePool);
  puVar1 = PTR__objc_msgSend_100020210;
  IVar2 = NSAutoreleasePool::init(IVar2,"init");
  uVar3 = _DLGetDeviceLinkConnectionContext(param_1);
  uVar3 = (*(code *)puVar1)(uVar3,"delegate");
  (*(code *)puVar1)(uVar3,"processMessage:",param_2);
  NSAutoreleasePool::drain(IVar2,"drain");
  return;
}

