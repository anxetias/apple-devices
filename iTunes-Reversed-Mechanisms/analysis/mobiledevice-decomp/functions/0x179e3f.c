// rea decompile_all
// name: _UARPSuperBinaryPreparePayload
// address: 0x179e3f
// body: available
// range: 0x179e3f-0x179f89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _UARPSuperBinaryPreparePayload
              (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
              undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined1 local_9c [4];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  short local_74 [18];
  int local_50;
  undefined8 local_48;
  undefined4 *local_40;
  uint local_38;
  short local_32;
  
  local_48 = param_4;
  lVar3 = _uarpPlatformAssetFindByAssetContextAndList(param_1,param_2,1);
  iVar2 = 0x1e;
  if (lVar3 != 0) {
    local_40 = param_5;
    iVar1 = _uarpPlatformEndpointAssetGetBytesAtOffset(param_1,0,lVar3,&local_38,4,0,local_74);
    iVar2 = 0xb;
    if (local_74[0] == 4) {
      iVar2 = 0;
    }
    if (iVar1 != 0) {
      iVar2 = iVar1;
    }
    if ((iVar1 == 0 && local_74[0] == 4) && (iVar2 = 0x1e, 1 < local_38)) {
      iVar2 = _uarpPlatformEndpointAssetGetBytesAtOffset(param_1,0,lVar3,local_74,0x2c,0,&local_32);
      if ((iVar2 == 0) && (iVar2 = 0xb, local_32 == 0x2c)) {
        iVar1 = param_3 * 0x28 + local_50;
        iVar2 = _uarpPlatformEndpointAssetGetBytesAtOffset
                          (param_1,0,lVar3,local_9c,0x28,iVar1,&local_32);
        if ((iVar2 == 0) && (iVar2 = 0xb, local_32 == 0x28)) {
          local_98 = _uarpTagStructPack32(local_48);
          local_94 = *local_40;
          uStack_90 = local_40[1];
          uStack_8c = local_40[2];
          uStack_88 = local_40[3];
          iVar2 = _uarpPlatformEndpointAssetSetBytesAtOffset(param_1,0,lVar3,local_9c,0x28,iVar1);
        }
      }
    }
  }
  return iVar2;
}

