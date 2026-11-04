// rea decompile_all
// name: _fPayloadReady
// address: 0x1839eb
// body: available
// range: 0x1839eb-0x183aa8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x183a7a to 0x183ac8 _fPayloadMetaDataComplete (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x183aa4 to 0x17af4c _CoreUARPRestoreLogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fPayloadReady(long param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = _uarpAssetQueryPayloadInfo
                    (param_1 + 0x298,*param_2,(ulong)*(ushort *)(param_2 + 0x26),
                     (ulong)*(ushort *)(param_2 + 0x26) * 0x160 + param_2[0x25] + 4);
  if (iVar1 == 0) {
    iVar1 = _uarpPlatformEndpointPayloadRequestMetaData(param_1 + 0x298,*param_2);
    if (iVar1 != 0) {
      if (iVar1 == 0x28) {
        _CoreUARPRestoreLogDebug
                  (param_1,1,"UARP Restore (Asset Solicitation): %s: No Payload Metadata",
                   "fPayloadReady");
        _fPayloadMetaDataComplete(param_1,param_2);
        return;
      }
      _CoreUARPRestoreLogError
                (param_1,1,
                 "UARP Restore (Asset Solicitation): %s: uarpPlatformEndpointPayloadRequestMetaData failed with status: %u"
                 ,"fPayloadReady",iVar1);
      return;
    }
  }
  return;
}

