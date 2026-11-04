// rea decompile_all
// name: _UARPSuperBinaryAddMetaData
// address: 0x179cbe
// body: available
// range: 0x179cbe-0x179e3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _UARPSuperBinaryAddMetaData
                (undefined8 param_1,undefined8 param_2,undefined4 param_3,uint param_4,
                undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined4 local_7c;
  undefined4 local_78;
  short local_74 [4];
  int local_6c;
  int local_58;
  int local_54;
  undefined8 local_48;
  uint local_3c;
  uint local_38;
  short local_32;
  
  lVar3 = _uarpPlatformAssetFindByAssetContextAndList(param_1,param_2,1);
  uVar4 = 0x1e;
  if (lVar3 != 0) {
    local_48 = param_5;
    local_38 = param_4;
    uVar1 = _uarpPlatformEndpointAssetGetBytesAtOffset(param_1,0,lVar3,&local_3c,4,0,local_74);
    uVar2 = 0xb;
    if (local_74[0] == 4) {
      uVar2 = 0;
    }
    if (uVar1 != 0) {
      uVar2 = uVar1;
    }
    uVar4 = (ulong)uVar2;
    if ((uVar1 == 0 && local_74[0] == 4) && (uVar4 = 0x1e, 1 < local_3c)) {
      local_32 = 0;
      uVar4 = _uarpPlatformEndpointAssetGetBytesAtOffset(param_1,0,lVar3,local_74,0x2c,0,&local_32);
      if (((int)uVar4 == 0) && (uVar4 = 0xb, local_32 == 0x2c)) {
        iVar5 = local_54 + local_58;
        local_7c = _uarpNtohl(param_3);
        uVar2 = local_38;
        local_78 = _uarpNtohl(local_38);
        uVar4 = _uarpPlatformEndpointAssetSetBytesAtOffset(param_1,0,lVar3,&local_7c,8,iVar5);
        if ((int)uVar4 == 0) {
          local_54 = local_54 + 8;
          local_6c = local_6c + 8;
          uVar4 = _uarpPlatformEndpointAssetSetBytesAtOffset
                            (param_1,0,lVar3,local_48,uVar2 & 0xffff,local_54 + local_58);
          if ((int)uVar4 == 0) {
            uVar2 = uVar2 & 0xffff;
            local_54 = local_54 + uVar2;
            local_6c = local_6c + uVar2;
            uVar4 = _uarpPlatformEndpointAssetSetBytesAtOffset(param_1,0,lVar3,local_74,0x2c,0);
          }
        }
      }
    }
  }
  return uVar4;
}

