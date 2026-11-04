// rea decompile_all
// name: _IXDispatchAsyncWithAutoreleasePool
// address: 0x43e4f
// body: available
// range: 0x43e4f-0x43ecd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _IXDispatchAsyncWithAutoreleasePool(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_48;
  undefined8 local_40;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_28 = (*(code *)PTR__objc_retain_004410a8)(param_2);
  local_48 = PTR___NSConcreteStackBlock_004412a8;
  local_40 = 0xc2000000;
  local_38 = ___IXDispatchAsyncWithAutoreleasePool_block_invoke;
  local_30 = &___block_descriptor_40_e8_32bs_e5_v8__0l;
  uVar2 = (*(code *)puVar1)(local_28);
  _dispatch_async(param_1,&local_48);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_28);
  (*(code *)puVar1)(uVar2);
  return;
}

