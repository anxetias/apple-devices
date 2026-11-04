// rea decompile_all
// name: _fPersonalizedFirmwareAssetAllHeadersAndMetaDataComplete
// address: 0x17ec35
// body: available
// range: 0x17ec35-0x17ed42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17ed3e to 0x17af4c _CoreUARPRestoreLogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fPersonalizedFirmwareAssetAllHeadersAndMetaDataComplete
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_3 != (undefined8 *)0x0 && param_1 != 0) {
    lVar1 = param_1 + 0x298;
    iVar3 = _uarpPlatformEndpointAssetQueryNumberOfPayloads(lVar1,*param_3);
    if (iVar3 == 0) {
      uVar4 = _uarpZalloc((ulong)*(ushort *)(param_3 + 0x24) * 0x160);
      param_3[0x25] = uVar4;
      if (*(short *)(param_3 + 0x24) != 0) {
        lVar5 = 0;
        uVar6 = 0;
        do {
          lVar2 = param_3[0x25];
          *(short *)(lVar2 + lVar5) = (short)uVar6;
          iVar3 = _uarpAssetQueryPayloadInfo(lVar1,*param_3,uVar6 & 0xffffffff);
          if (iVar3 != 0) {
            return;
          }
          uVar4 = _uarpZalloc(*(undefined4 *)(lVar2 + 0x1c + lVar5));
          *(undefined8 *)(lVar2 + 0x50 + lVar5) = uVar4;
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 0x160;
        } while (uVar6 < *(ushort *)(param_3 + 0x24));
      }
      iVar3 = _uarpPlatformEndpointAssetSetPayloadIndex(lVar1,*param_3,0);
      if (iVar3 != 0) {
        _CoreUARPRestoreLogError(param_1,1,"Failed to set FIRM payload index; %u",iVar3);
        return;
      }
    }
  }
  return;
}

