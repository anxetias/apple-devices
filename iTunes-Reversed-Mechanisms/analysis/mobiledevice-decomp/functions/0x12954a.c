// rea decompile_all
// name: __copy_remote_device_property
// address: 0x12954a
// body: available
// range: 0x12954a-0x1295c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __copy_remote_device_property(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = _remote_device_copy_property();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = __CFXPCCreateCFObjectFromXPCObject(lVar1);
    if (lVar2 == 0) {
      puVar3 = (undefined *)_xpc_get_type(lVar1);
      if (puVar3 == PTR___xpc_type_uint64_00441330) {
        _xpc_uint64_get_value(lVar1);
        lVar2 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,4);
      }
      else {
        lVar2 = 0;
      }
    }
    _xpc_release(lVar1);
  }
  return lVar2;
}

