// rea decompile_all
// name: _UARPSuperBinaryFinalizeHeader
// address: 0x17a3a3
// body: available
// range: 0x17a3a3-0x17a553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _UARPSuperBinaryFinalizeHeader(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [40];
  uint local_38;
  short local_34;
  short local_32;
  
  puVar2 = (undefined4 *)_uarpPlatformAssetFindByAssetContextAndList(param_1,param_2,1);
  iVar1 = 0x1e;
  if ((((puVar2 != (undefined4 *)0x0) &&
       (iVar1 = _uarpPlatformEndpointAssetGetBytesAtOffset(param_1,0,puVar2,&local_38,4,0,&local_34)
       , iVar1 == 0)) && (iVar1 = 0xb, local_34 == 4)) &&
     ((iVar1 = 0x1e, 1 < local_38 &&
      (iVar1 = _uarpPlatformEndpointAssetGetBytesAtOffset
                         (param_1,0,puVar2,&local_8c,0x2c,0,&local_32), iVar1 == 0)))) {
    if (local_32 == 0x2c) {
      puVar2[7] = uStack_70;
      puVar2[8] = uStack_6c;
      puVar2[9] = uStack_68;
      puVar2[10] = uStack_64;
      puVar2[4] = local_7c;
      puVar2[5] = uStack_78;
      puVar2[6] = uStack_74;
      puVar2[7] = uStack_70;
      *puVar2 = local_8c;
      puVar2[1] = uStack_88;
      puVar2[2] = uStack_84;
      puVar2[3] = uStack_80;
      _uarpSuperBinaryHeaderEndianSwap(&local_8c,&local_8c);
      iVar1 = _uarpPlatformEndpointAssetSetBytesAtOffset(param_1,0,puVar2,&local_8c,0x2c,0);
      if ((iVar1 == 0) && (iVar1 = 0, 0x27 < (uint)puVar2[10])) {
        uVar4 = (uint)puVar2[10] / 0x28;
        iVar3 = puVar2[9];
        do {
          iVar1 = _uarpPlatformEndpointAssetGetBytesAtOffset
                            (param_1,0,puVar2,local_60,0x28,iVar3,&local_32);
          if (iVar1 != 0) {
            return iVar1;
          }
          if (local_32 != 0x28) goto LAB_0017a53c;
          _uarpPayloadHeaderEndianSwap(local_60);
          iVar1 = _uarpPlatformEndpointAssetSetBytesAtOffset(param_1,0,puVar2,local_60,0x28,iVar3);
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar3 = iVar3 + 0x28;
          iVar1 = 0;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    else {
LAB_0017a53c:
      iVar1 = 0xb;
    }
  }
  return iVar1;
}

