// rea decompile_all
// name: _fPayloadMetaDataComplete
// address: 0x183ac8
// body: available
// range: 0x183ac8-0x183ba4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x183b97 to 0x17af4c _CoreUARPRestoreLogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fPayloadMetaDataComplete(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  FILE *pFVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  lVar1 = param_2[0x25] + (ulong)*(ushort *)(param_2 + 0x26) * 0x160;
  lVar2 = param_2[0x25] + (ulong)*(ushort *)(param_2 + 0x26) * 0x160;
  pcVar6 = (char *)(lVar2 + 0x60);
  _sprintf(pcVar6,"%s.%u.payload",param_2 + 3);
  if (*(long *)(lVar2 + 0x58) == 0) {
    pFVar4 = _fopen(pcVar6,"w+");
    *(FILE **)(lVar1 + 0x58) = pFVar4;
  }
  iVar3 = _uarpAssetQueryPayloadInfo
                    (param_1 + 0x298,*param_2,*(undefined2 *)(param_2 + 0x26),lVar1 + 4);
  if (iVar3 == 0) {
    uVar5 = _uarpZalloc(*(undefined4 *)(lVar1 + 0x1c));
    *(undefined8 *)(lVar1 + 0x50) = uVar5;
    iVar3 = _uarpPlatformEndpointPayloadRequestData(param_1 + 0x298,*param_2);
    if (iVar3 == 0) {
      return;
    }
    pcVar6 = 
    "UARP Restore (Asset Solicitation): %s: uarpPlatformEndpointPayloadRequestData failed with status: %u"
    ;
  }
  else {
    pcVar6 = 
    "UARP Restore (Asset Solicitation): %s: uarpAssetQueryPayloadInfo failed with status: %u";
  }
  _CoreUARPRestoreLogError(param_1,1,pcVar6,"fPayloadMetaDataComplete",iVar3);
  return;
}

