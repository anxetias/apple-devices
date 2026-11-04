// rea decompile_all
// name: _fAssetAllHeadersAndMetaDataComplete.cold.1
// address: 0x19d8a7
// body: available
// range: 0x19d8a7-0x19d8f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fAssetAllHeadersAndMetaDataComplete_cold_1(ulong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = _inRestore;
  uVar2 = _uarpStatusCodeToString();
  if (cVar1 == '\0') {
    _uarpLogError(3,"ERROR: failed in fAssetAllHeadersAndMetaDataComplete, status = 0x%x (%s)\n",
                  param_1 & 0xffffffff,uVar2);
  }
  else {
    _printf("ERROR: failed in fAssetAllHeadersAndMetaDataComplete, status = 0x%x (%s)\n",
            param_1 & 0xffffffff,uVar2);
  }
  return;
}

