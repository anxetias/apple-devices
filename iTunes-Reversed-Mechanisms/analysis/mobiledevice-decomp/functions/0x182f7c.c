// rea decompile_all
// name: _uarpPlatformDataTransferResume
// address: 0x182f7c
// body: available
// range: 0x182f7c-0x182fe9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x182fda to 0x181a47 _UARPLayer2DataTransferResume (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _uarpPlatformDataTransferResume(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x238);
  do {
    if (lVar2 == 0) {
      _UARPLayer2DataTransferResume(param_1,param_2);
      return;
    }
    if ((*(int *)(lVar2 + 0x130) == 0) && (*(long *)(lVar2 + 0x2b8) == param_2)) {
      iVar1 = _uarpPlatformAssetRequestData(param_1,lVar2,lVar2 + 0x138);
      if (iVar1 != 0) {
        return;
      }
    }
    lVar2 = *(long *)(lVar2 + 0x2c8);
  } while( true );
}

