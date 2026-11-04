// rea decompile_all
// name: __USBCUpdateFinalize
// address: 0x19d4a9
// body: available
// range: 0x19d4a9-0x19d56c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __USBCUpdateFinalize(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_20;
  
  if (param_2 == 0) {
    uStack_20 = 0x1e;
  }
  else {
    if (*(long *)(param_2 + 0x568) != 0) {
      _BackendDestroy(param_2 + 0x568);
    }
    lVar1 = *(long *)(param_2 + 0x558);
    if (lVar1 != 0) {
      if (*(long *)(lVar1 + 0x18) != 0) {
        _FWImageDestroy(lVar1 + 0x18);
        lVar1 = *(long *)(param_2 + 0x558);
      }
      if (*(long *)(lVar1 + 0x28) != 0) {
        _image3Free(*(long *)(lVar1 + 0x28));
        lVar1 = *(long *)(param_2 + 0x558);
        *(undefined8 *)(lVar1 + 0x28) = 0;
        *(undefined4 *)(lVar1 + 0x30) = 0;
      }
      _image3Free();
      *(undefined8 *)(param_2 + 0x558) = 0;
    }
    _image3Free(param_2);
    if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
      _puts("libUSBCUpdate: Fully torn down");
      uStack_20 = 0;
    }
    else {
      uStack_20 = 0;
      _uarpLogInfo(3,"libUSBCUpdate: Fully torn down\n");
    }
  }
  return uStack_20;
}

