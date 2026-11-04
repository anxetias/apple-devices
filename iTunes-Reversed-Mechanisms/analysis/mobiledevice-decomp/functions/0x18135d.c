// rea decompile_all
// name: _uarpPlatformAssetPayloadDataRequestCompleted
// address: 0x18135d
// body: available
// range: 0x18135d-0x181435 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_uarpPlatformAssetPayloadDataRequestCompleted(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  
  if (*(int *)(param_2 + 0x208) != 0) {
    _UARPLayer2HashFinal
              (param_1,*(int *)(param_2 + 0x208),*(undefined8 *)(param_3 + 0x70),
               *(undefined8 *)(param_3 + 0x80),*(undefined4 *)(param_3 + 0x78));
    cVar1 = _uarpPlatformCompareHash
                      (param_1,*(undefined8 *)(param_3 + 0x80),*(undefined4 *)(param_3 + 0x78),
                       *(undefined8 *)(param_2 + 0x210),*(undefined4 *)(param_2 + 0x218));
    if (*(long *)(param_3 + 0x70) != 0) {
      _UARPLayer2ReturnBuffer(param_1);
      *(undefined8 *)(param_3 + 0x70) = 0;
      *(undefined4 *)(param_3 + 0x6c) = 0;
    }
    if (*(long *)(param_3 + 0x80) != 0) {
      _UARPLayer2ReturnBuffer(param_1);
      *(undefined8 *)(param_3 + 0x80) = 0;
      *(undefined4 *)(param_3 + 0x78) = 0;
    }
    *(undefined4 *)(param_3 + 0x68) = 0;
    if (cVar1 == '\0') {
      _UARPLayer2AssetCorrupt(param_1,param_2);
      return 0;
    }
  }
  _UARPLayer2PayloadDataComplete2(param_1,param_2,0,0);
  return 0;
}

