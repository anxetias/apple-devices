// rea decompile_all
// name: ___USBMuxListenerSetDispatchQueue_block_invoke
// address: 0xc5051
// body: available
// range: 0xc5051-0xc50c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xc50c1 to 0xc50c6 _USBMuxIntDisableListener (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___USBMuxListenerSetDispatchQueue_block_invoke(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = _dispatch_source_get_data(*(dispatch_source_t *)(param_1 + 0x28));
  if (uVar1 == 0) {
    _USBMuxIntDisableListener(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18));
    return;
  }
  _USBMuxIntCFSocketCallback();
  while ((lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18),
         *(int *)(lVar2 + 0x68) == 0 && (*(long *)(lVar2 + 0x10) != 0))) {
    lVar2 = _CFArrayGetCount();
    if (lVar2 < 1) {
      return;
    }
    __USBMuxCustomRunLoopSourcePerformCallback
              (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18));
  }
  return;
}

