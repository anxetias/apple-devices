// rea decompile_all
// name: _fAssetReady
// address: 0x19d6e8
// body: available
// range: 0x19d6e8-0x19d7ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19d772 to 0x17f6a4 _uarpPlatformEndpointAssetFullyStaged (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x19d7c1 to 0x17f3be _uarpPlatformEndpointAssetAbandon (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fAssetReady(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  
  if ((param_1 != 0) && (param_2 != (undefined8 *)0x0)) {
    uVar2 = _BackendGetFlags(*(undefined8 *)(param_1 + 0x568));
    if ((uVar2 & 1) != 0) {
      _uarpPlatformEndpointAssetFullyStaged(param_1,*param_2);
      return;
    }
    uVar2 = _BackendGetFlags(*(undefined8 *)(param_1 + 0x568));
    if ((uVar2 & 4) != 0) {
      *(undefined1 *)((long)param_2 + 0x21) = 1;
    }
    if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
      pcVar3 = "False";
      if (*(char *)((long)param_2 + 0x21) != '\0') {
        pcVar3 = "True";
      }
      _printf("Require Personalization = %s\n",pcVar3);
    }
    else {
      pcVar3 = "False";
      if (*(char *)((long)param_2 + 0x21) != '\0') {
        pcVar3 = "True";
      }
      _uarpLogInfo(3,"Require Personalization = %s\n",pcVar3);
    }
    iVar1 = _uarpPlatformEndpointPayloadRequestAllHeadersAndMetaData(param_1,*param_2);
    if (iVar1 != 0) {
      _uarpPlatformEndpointAssetAbandon(param_1,param_1 + 0x438,*param_2,0x900);
      return;
    }
  }
  return;
}

