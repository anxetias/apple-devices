// rea decompile_all
// name: _FWImageDestroy
// address: 0x2703ea
// body: available
// range: 0x2703ea-0x27043b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _FWImageDestroy(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0x1e;
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    lVar2 = 0;
    do {
      if (*(long *)(*param_1 + 0x20 + lVar2 * 8) != 0) {
        _image3Free();
        *(undefined8 *)(*param_1 + 0x20 + lVar2 * 8) = 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 4);
    _image3Free(*param_1);
    *param_1 = 0;
    uVar1 = 0;
  }
  return uVar1;
}

