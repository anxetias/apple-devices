// rea decompile_all
// name: _uarpPlatformAssetPayloadMetaDataRequestWindowFilled
// address: 0x18106c
// body: available
// range: 0x18106c-0x181141 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_uarpPlatformAssetPayloadMetaDataRequestWindowFilled
          (undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  _UARPLayer2AssetStore(param_1,param_2,3,*(undefined8 *)(param_3 + 4),param_3[1],*param_3);
  uVar5 = param_3[0x15];
  if (7 < uVar5) {
    puVar3 = *(undefined4 **)(param_3 + 4);
    do {
      uVar1 = _uarpNtohl(*puVar3);
      uVar2 = _uarpNtohl(puVar3[1]);
      if (param_3[6] - 8 < uVar2) {
        _UARPLayer2PayloadMetaDataProcessingError(param_1,param_2,0x35);
        return 0x35;
      }
      uVar4 = uVar5 - 8;
      uVar5 = uVar4 - uVar2;
      if (uVar4 < uVar2) break;
      param_3[0x16] = param_3[0x16] + 8;
      _UARPLayer2PayloadMetaDataTLV(param_1,param_2,uVar1,uVar2,puVar3 + 2);
      puVar3 = (undefined4 *)((long)puVar3 + (ulong)uVar2 + 8);
      param_3[0x16] = param_3[0x16] + uVar2;
    } while (7 < uVar5);
  }
  *(int *)(param_2 + 0x200) = *(int *)(param_2 + 0x200) + param_3[0x16];
  return 0;
}

