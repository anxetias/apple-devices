// rea decompile_all
// name: _CoreUARPRestoreEndpointOfferSuperBinaryCommon
// address: 0x17cc33
// body: available
// range: 0x17cc33-0x17cccc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _CoreUARPRestoreEndpointOfferSuperBinaryCommon(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_110 [224];
  
  _CoreUARPRestoreSetAssetCallbacks(local_110);
  lVar1 = param_1 + 0x298;
  uVar2 = _uarpPlatformEndpointPrepareSuperBinary(lVar1,param_1 + 0x6d0,param_2,local_110);
  if ((int)uVar2 == 0) {
    uVar2 = _uarpPlatformAssetFindByAssetContextAndList(lVar1,param_2,1);
    *param_2 = uVar2;
    uVar2 = _uarpPlatformEndpointOfferAsset(lVar1,param_1 + 0x6d0,param_2);
    if ((int)uVar2 == 0) {
      param_2[0x29] = *(undefined8 *)(param_1 + 0x788);
      *(undefined8 **)(param_1 + 0x788) = param_2;
      uVar2 = 0;
    }
  }
  return uVar2;
}

