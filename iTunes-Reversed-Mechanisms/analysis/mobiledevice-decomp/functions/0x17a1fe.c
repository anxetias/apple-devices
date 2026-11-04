// rea decompile_all
// name: _UARPSuperBinaryAddPayloadData
// address: 0x17a1fe
// body: available
// range: 0x17a1fe-0x17a3a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _UARPSuperBinaryAddPayloadData
              (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined1 local_94 [32];
  int local_74;
  int local_70;
  short local_6c [4];
  int local_64;
  int local_48;
  undefined8 local_40;
  uint local_38;
  short local_32;
  
  iVar2 = 0x27;
  if (param_5 < 0x10000) {
    local_40 = param_4;
    lVar3 = _uarpPlatformAssetFindByAssetContextAndList(param_1,param_2,1);
    iVar2 = 0x1e;
    if (lVar3 != 0) {
      iVar1 = _uarpPlatformEndpointAssetGetBytesAtOffset(param_1,0,lVar3,&local_38,4,0,local_6c);
      iVar2 = 0xb;
      if (local_6c[0] == 4) {
        iVar2 = 0;
      }
      if (iVar1 != 0) {
        iVar2 = iVar1;
      }
      if (((iVar1 == 0 && local_6c[0] == 4) && (iVar2 = 0x1e, 1 < local_38)) &&
         (iVar2 = _uarpPlatformEndpointAssetGetBytesAtOffset
                            (param_1,0,lVar3,local_6c,0x2c,0,&local_32), iVar2 == 0)) {
        iVar2 = 0xb;
        if (local_32 == 0x2c) {
          iVar1 = param_3 * 0x28 + local_48;
          iVar2 = _uarpPlatformEndpointAssetGetBytesAtOffset
                            (param_1,0,lVar3,local_94,0x28,iVar1,&local_32);
          if ((iVar2 == 0) && (iVar2 = 0xb, local_32 == 0x28)) {
            if (local_74 == 0) {
              local_74 = local_64;
            }
            iVar2 = _uarpPlatformEndpointAssetSetBytesAtOffset
                              (param_1,0,lVar3,local_40,param_5 & 0xffff,local_74 + local_70);
            if (iVar2 == 0) {
              local_70 = local_70 + param_5;
              local_64 = local_64 + param_5;
              iVar2 = _uarpPlatformEndpointAssetSetBytesAtOffset
                                (param_1,0,lVar3,local_94,0x28,iVar1);
              if (iVar2 == 0) {
                iVar2 = _uarpPlatformEndpointAssetSetBytesAtOffset(param_1,0,lVar3,local_6c,0x2c,0);
              }
            }
          }
        }
      }
    }
  }
  return iVar2;
}

