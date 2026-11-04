// rea decompile_all
// name: _UARPSuperBinaryAddPayloadMetaData
// address: 0x179f8a
// body: available
// range: 0x179f8a-0x17a18d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _UARPSuperBinaryAddPayloadMetaData
              (undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,uint param_5,
              undefined8 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined4 local_ac;
  undefined4 local_a8;
  short local_a4 [4];
  int local_9c;
  int local_80;
  undefined1 local_78 [24];
  int local_60;
  int local_5c;
  undefined8 local_50;
  uint local_44;
  undefined4 local_40;
  uint local_3c;
  int local_38;
  short local_32;
  
  local_50 = param_6;
  local_40 = param_4;
  lVar4 = _uarpPlatformAssetFindByAssetContextAndList(param_1,param_2,1);
  iVar2 = 0x1e;
  if (lVar4 != 0) {
    local_3c = param_5;
    iVar1 = _uarpPlatformEndpointAssetGetBytesAtOffset(param_1,0,lVar4,&local_44,4,0,local_a4);
    iVar2 = 0xb;
    if (local_a4[0] == 4) {
      iVar2 = 0;
    }
    if (iVar1 != 0) {
      iVar2 = iVar1;
    }
    if ((iVar1 == 0 && local_a4[0] == 4) && (iVar2 = 0x1e, 1 < local_44)) {
      iVar2 = _uarpPlatformEndpointAssetGetBytesAtOffset(param_1,0,lVar4,local_a4,0x2c,0,&local_32);
      if ((iVar2 == 0) && (iVar2 = 0xb, local_32 == 0x2c)) {
        iVar1 = param_3 * 0x28 + local_80;
        iVar2 = _uarpPlatformEndpointAssetGetBytesAtOffset
                          (param_1,0,lVar4,local_78,0x28,iVar1,&local_32);
        if ((iVar2 == 0) && (iVar2 = 0xb, local_32 == 0x28)) {
          if (local_60 == 0) {
            local_60 = local_9c;
          }
          iVar2 = local_60 + local_5c;
          local_38 = iVar1;
          local_ac = _uarpNtohl(local_40);
          uVar3 = local_3c;
          local_a8 = _uarpNtohl(local_3c);
          iVar2 = _uarpPlatformEndpointAssetSetBytesAtOffset(param_1,0,lVar4,&local_ac,8,iVar2);
          if (iVar2 == 0) {
            local_9c = local_9c + 8;
            local_5c = local_5c + 8;
            iVar2 = _uarpPlatformEndpointAssetSetBytesAtOffset
                              (param_1,0,lVar4,local_50,uVar3 & 0xffff,local_5c + local_60);
            if (iVar2 == 0) {
              uVar3 = uVar3 & 0xffff;
              local_5c = local_5c + uVar3;
              local_9c = local_9c + uVar3;
              iVar2 = _uarpPlatformEndpointAssetSetBytesAtOffset
                                (param_1,0,lVar4,local_78,0x28,local_38);
              if (iVar2 == 0) {
                iVar2 = _uarpPlatformEndpointAssetSetBytesAtOffset(param_1,0,lVar4,local_a4,0x2c,0);
              }
            }
          }
        }
      }
    }
  }
  return iVar2;
}

