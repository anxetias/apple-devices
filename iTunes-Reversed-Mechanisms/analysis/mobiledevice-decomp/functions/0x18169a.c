// rea decompile_all
// name: _uarpPlatformAssetPullAllMetaData
// address: 0x18169a
// body: available
// range: 0x18169a-0x181804 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1817a9 to 0x180772 _uarpPlatformAssetRequestData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _uarpPlatformAssetPullAllMetaData(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  
  uVar1 = 0x1e;
  if ((param_2 != 0 && param_1 != 0) && (uVar1 = 0x10, *(char *)(param_2 + 0x188) != '\x01')) {
    _uarpZero(param_2 + 0x138,0x88);
    iVar3 = *(int *)(param_2 + 0x20);
    *(int *)(param_2 + 0x138) = *(int *)(param_2 + 0x1c);
    *(int *)(param_2 + 0x13c) = iVar3;
    for (lVar2 = *(long *)(param_2 + 0x278); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0xb0)) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        if (*(int *)(lVar2 + 0x18) != iVar3 + *(int *)(param_2 + 0x1c)) {
          return 0x2b;
        }
        iVar3 = iVar3 + *(int *)(lVar2 + 0x1c);
        *(int *)(param_2 + 0x13c) = iVar3;
      }
    }
    *(int *)(param_2 + 0x2a8) = iVar3;
    *(undefined8 *)(param_2 + 0x2a0) = 0;
    if (iVar3 == 0) {
      *(undefined8 *)(param_2 + 0x148) = 0;
      *(undefined4 *)(param_2 + 0x150) = 0;
      *(code **)(param_2 + 0x178) = _uarpPlatformAssetAllMetaDataWindowFilled;
      *(code **)(param_2 + 0x180) = _uarpPlatformAssetAllMetaDataRequestCompleted;
    }
    else {
      uVar1 = _UARPLayer2RequestBuffer(param_1,param_2 + 0x2a0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      *(undefined8 *)(param_2 + 0x148) = *(undefined8 *)(param_2 + 0x2a0);
      *(undefined4 *)(param_2 + 0x150) = *(undefined4 *)(param_2 + 0x2a8);
      *(code **)(param_2 + 0x178) = _uarpPlatformAssetAllMetaDataWindowFilled;
      *(code **)(param_2 + 0x180) = _uarpPlatformAssetAllMetaDataRequestCompleted;
      if (*(int *)(param_2 + 0x13c) != 0) {
        uVar1 = _uarpPlatformAssetRequestData(param_1,param_2,param_2 + 0x138);
        return uVar1;
      }
    }
    _UARPLayer2AssetAllHeadersAndMetaDataComplete(param_1,*(undefined8 *)(param_2 + 0x2b8),param_2);
    uVar1 = 0;
  }
  return uVar1;
}

