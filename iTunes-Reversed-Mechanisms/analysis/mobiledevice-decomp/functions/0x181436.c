// rea decompile_all
// name: _uarpPlatformAssetPullAllPayloadHeaders
// address: 0x181436
// body: available
// range: 0x181436-0x18153a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _uarpPlatformAssetPullAllPayloadHeaders(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  long local_30;
  
  uVar1 = 0x1e;
  if ((param_2 != 0 && param_1 != 0) && (uVar1 = 0x10, *(char *)(param_2 + 0x188) != '\x01')) {
    local_30 = 0;
    if (0 < *(int *)(param_2 + 0x1c0)) {
      iVar2 = 0;
      do {
        uVar1 = _UARPLayer2RequestBuffer(param_1,&local_30,0xb8);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        *(undefined8 *)(local_30 + 0xb0) = *(undefined8 *)(param_2 + 0x278);
        *(long *)(param_2 + 0x278) = local_30;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_2 + 0x1c0));
    }
    _uarpZero(param_2 + 0x138,0x88);
    *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_2 + 0x148) = *(undefined8 *)(param_2 + 0x280);
    *(undefined4 *)(param_2 + 0x150) = *(undefined4 *)(param_2 + 0x288);
    *(code **)(param_2 + 0x178) = _uarpPlatformAssetAllPayloadHeadersRequestWindowFilled;
    *(code **)(param_2 + 0x180) = _uarpPlatformAssetAllPayloadHeadersRequestCompleted;
    uVar1 = _uarpPlatformAssetRequestData(param_1,param_2,param_2 + 0x138);
  }
  return uVar1;
}

