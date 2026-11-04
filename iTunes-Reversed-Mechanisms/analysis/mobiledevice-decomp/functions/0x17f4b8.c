// rea decompile_all
// name: _uarpPlatformEndpointAssetSetPayloadIndex2
// address: 0x17f4b8
// body: available
// range: 0x17f4b8-0x17f5ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17f5ce to 0x17f600 _uarpPlatformEndpointPayloadRequestData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x17f5e7 to 0x180d4e _uarpPlatformAssetSuperBinaryPullProposedPayloadHeader (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _uarpPlatformEndpointAssetSetPayloadIndex2(long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  
  uVar2 = 0x1e;
  if ((param_2 != 0 && param_1 != 0) && (uVar2 = 0x2c, param_3 < *(int *)(param_2 + 0x1c0))) {
    *(int *)(param_2 + 0x1c8) = param_3;
    *(undefined8 *)(param_2 + 0x1fc) = 0;
    if (*(char *)(param_2 + 0x1cc) != '\x01') {
      uVar2 = _uarpPlatformAssetSuperBinaryPullProposedPayloadHeader(param_1,param_2);
      return uVar2;
    }
    pvVar4 = *(void **)(param_2 + 0x278);
    if (pvVar4 != (void *)0x0) {
      do {
        if (*(int *)((long)pvVar4 + 0x7c) == *(int *)(param_2 + 0x1c8)) {
          *(int *)(param_2 + 0x1c4) = *(int *)((long)pvVar4 + 0x7c);
          _memcpy((void *)(param_2 + 0x1d0),pvVar4,0xa8);
          for (puVar3 = *(undefined4 **)((long)pvVar4 + 0xa8); puVar3 != (undefined4 *)0x0;
              puVar3 = *(undefined4 **)(puVar3 + 4)) {
            _uarpProcessPayloadTLVInternal
                      (param_1,param_2,(void *)(param_2 + 0x1d0),*puVar3,puVar3[1],
                       *(undefined8 *)(puVar3 + 2));
          }
          if (*(int *)((long)pvVar4 + 0x4c) != 0) {
            _UARPLayer2HashFinal
                      (param_1,*(int *)((long)pvVar4 + 0x4c),*(undefined8 *)((long)pvVar4 + 0x50),
                       *(undefined8 *)((long)pvVar4 + 0x60),*(undefined4 *)((long)pvVar4 + 0x68));
            iVar1 = _memcmp(*(void **)((long)pvVar4 + 0x60),*(void **)((long)pvVar4 + 0x70),
                            (ulong)*(uint *)((long)pvVar4 + 0x78));
            if (iVar1 != 0) {
              return 0x36;
            }
          }
        }
        pvVar4 = *(void **)((long)pvVar4 + 0xb0);
      } while (pvVar4 != (void *)0x0);
    }
    uVar2 = _uarpPlatformEndpointPayloadRequestData(param_1,param_2);
    return uVar2;
  }
  return uVar2;
}

