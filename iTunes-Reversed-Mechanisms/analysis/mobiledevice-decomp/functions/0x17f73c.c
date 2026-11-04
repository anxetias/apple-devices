// rea decompile_all
// name: _uarpPlatformEndpointOfferAsset
// address: 0x17f73c
// body: available
// range: 0x17f73c-0x17f827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _uarpPlatformEndpointOfferAsset(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_4e [44];
  undefined2 local_22;
  
  if (param_3 != 0 && (param_2 != 0 && param_1 != 0)) {
    for (lVar1 = *(long *)(param_1 + 0x238); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x2c8)) {
      if ((*(int *)(lVar1 + 0x130) == 1) && (*(long *)(lVar1 + 0x2c0) == param_3)) {
        local_22 = 0;
        uVar2 = _uarpPlatformEndpointAssetGetBytesAtOffset
                          (param_1,param_2,lVar1,local_4e,0x2c,0,&local_22);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        _uarpSuperBinaryHeaderEndianSwap(local_4e,lVar1);
        *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(lVar1 + 0xc);
        *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar1 + 0x10);
        *(undefined4 *)(lVar1 + 0x3c) = *(undefined4 *)(lVar1 + 0x14);
        *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(lVar1 + 0x18);
        *(undefined4 *)(lVar1 + 0x44) = *(undefined4 *)(lVar1 + 8);
        *(uint *)(lVar1 + 0x1c0) = *(ushort *)(lVar1 + 0x28) / 0x28;
        uVar2 = _uarpPlatformAssetApproveOfferVersion(param_2,lVar1);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = _uarpOfferAssetToRemoteEP(param_1,param_2,lVar1);
        return uVar2;
      }
    }
  }
  return 0x1e;
}

