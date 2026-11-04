// rea decompile_all
// name: _Ace3ExternalDFUInitLayer4Callbacks
// address: 0x187c55
// body: available
// range: 0x187c55-0x187cf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * _Ace3ExternalDFUInitLayer4Callbacks(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = _calloc(1,0x98);
  if (puVar1 == (undefined8 *)0x0) {
    if (*(code **)(param_1 + 0x70) != (code *)0x0) {
      (**(code **)(param_1 + 0x70))
                (*(undefined8 *)(param_1 + 0x78),"error allocating callbacks: No resources");
    }
  }
  else {
    *puVar1 = _USBCUpdateEndpointInitialize;
    puVar1[5] = _Ace3UARPExternalDFUStagingProgress;
    puVar1[6] = _Ace3UARPExternalDFUStagingComplete;
    puVar1[7] = _Ace3UARPExternalDFUApplyComplete;
    puVar1[10] = _Ace3UARPExternalDFUFirmwareTssRequest;
    puVar1[0xe] = _Ace3UARPExternalDFUPersonalizedFirmware;
    puVar1[0xb] = _Ace3UARPExternalDFUUARPPropertyUpdate;
    puVar1[0xc] = _Ace3UARPExternalDFUApplePropertyUpdate;
    puVar1[0xd] = _Ace3UARPExternalDFUPropertiesComplete;
  }
  return puVar1;
}

