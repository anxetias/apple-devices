// rea decompile_all
// name: _uarpPlatformEndpointAssetAcceptWithPayloadAndDecompressionWindows
// address: 0x17f039
// body: available
// range: 0x17f039-0x17f302 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17f229 to 0x180772 _uarpPlatformAssetRequestData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x17f242 to 0x1809c6 _uarpPlatformAssetSuperBinaryPullHeader (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x17f2a2 to 0x180ba3 _uarpPlatformAssetSuperBinaryPullMetaData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x17f2cd to 0x180d4e _uarpPlatformAssetSuperBinaryPullProposedPayloadHeader (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x17f2e6 to 0x180f8a _uarpPlatformAssetPayloadPullMetaData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_uarpPlatformEndpointAssetAcceptWithPayloadAndDecompressionWindows
          (long param_1,long param_2,long param_3,long param_4,void *param_5,long param_6,
          uint param_7,long param_8,uint param_9)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0x1e;
  if (((param_3 != 0 && (param_2 != 0 && param_1 != 0)) &&
      ((param_6 == 0 || ((param_7 != 0 && (*(uint *)(param_2 + 8) <= param_7)))))) &&
     ((param_8 == 0 || ((param_9 != 0 && (*(uint *)(param_2 + 8) <= param_9)))))) {
    for (lVar1 = *(long *)(param_1 + 0x238); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x2c8)) {
      if ((lVar1 == param_3) && (*(int *)(lVar1 + 0x130) == 0)) goto LAB_0017f0e5;
    }
    *(long *)(param_3 + 0x2c8) = *(long *)(param_1 + 0x238);
    *(long *)(param_1 + 0x238) = param_3;
LAB_0017f0e5:
    if (param_4 != 0) {
      *(long *)(param_3 + 0x2c0) = param_4;
    }
    *(undefined2 *)(param_3 + 0x48) = 0;
    if (param_5 != (void *)0x0) {
      _memcpy((void *)(param_3 + 0x50),param_5,0xe0);
      if (param_6 == 0) {
        if (*(long *)(param_3 + 0x280) == 0) {
          *(undefined1 *)(param_3 + 0x28c) = 0;
          *(undefined4 *)(param_3 + 0x288) = *(undefined4 *)(param_2 + 8);
          uVar4 = _UARPLayer2RequestBuffer(param_1,(long *)(param_3 + 0x280));
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          if (*(long *)(param_3 + 0x280) == 0) {
            return 0xb;
          }
        }
      }
      else {
        if (*(char *)(param_3 + 0x28c) == '\0') {
          _UARPLayer2ReturnBuffer(param_1,*(undefined8 *)(param_3 + 0x280));
        }
        *(long *)(param_3 + 0x280) = param_6;
        *(uint *)(param_3 + 0x288) = param_7;
        *(undefined1 *)(param_3 + 0x28c) = 1;
      }
      if (param_8 == 0) {
        uVar2 = 0;
      }
      else {
        if (*(char *)(param_3 + 0x29c) == '\0') {
          _UARPLayer2ReturnBuffer(param_1,*(undefined8 *)(param_3 + 0x290));
        }
        *(long *)(param_3 + 0x290) = param_8;
        *(uint *)(param_3 + 0x298) = param_9;
        uVar2 = 1;
      }
      *(undefined1 *)(param_3 + 0x29c) = uVar2;
      iVar3 = _uarpVersionCompare(param_3 + 0x34,param_3 + 0xc);
      if ((iVar3 != 0) || (*(int *)(param_3 + 0x44) != *(int *)(param_3 + 8))) {
        uVar4 = _uarpPlatformAssetSuperBinaryPullHeader(param_1,param_3);
        return uVar4;
      }
      if (*(int *)(param_3 + 0x2b0) != *(int *)(param_3 + 0x20)) {
        uVar4 = _uarpPlatformAssetSuperBinaryPullMetaData(param_1,param_3);
        return uVar4;
      }
      if (*(int *)(param_3 + 0x1c4) == -1) {
        _UARPLayer2AssetMetaDataComplete(param_1,param_3);
        uVar4 = 0;
      }
      else {
        if (*(int *)(param_3 + 0x1c4) != *(int *)(param_3 + 0x1c8)) {
          uVar4 = _uarpPlatformAssetSuperBinaryPullProposedPayloadHeader(param_1,param_3);
          return uVar4;
        }
        if (*(int *)(param_3 + 0x200) != *(int *)(param_3 + 0x1ec)) {
          uVar4 = _uarpPlatformAssetPayloadPullMetaData(param_1,param_3);
          return uVar4;
        }
        if ((*(int *)(param_3 + 0x1fc) != 0) ||
           (uVar4 = _uarpPlatformAssetPayloadPullData(param_1,param_3), (int)uVar4 == 0)) {
          uVar4 = _uarpPlatformAssetRequestData(param_1,param_3,param_3 + 0x138);
          return uVar4;
        }
      }
    }
  }
  return uVar4;
}

