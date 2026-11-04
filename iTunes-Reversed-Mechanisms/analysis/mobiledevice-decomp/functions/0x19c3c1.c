// rea decompile_all
// name: _fPayloadData
// address: 0x19c3c1
// body: available
// range: 0x19c3c1-0x19c499 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19c446 to 0x186609 _uarpLogInfo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x19c476 to 0x2aa78e _puts (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x19c495 to 0x17f3be _uarpPlatformEndpointAssetAbandon (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fPayloadData(long param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
    _puts("Received some payload data");
  }
  else {
    _uarpLogInfo(3,"Received some payload data\n");
  }
  if ((*(char *)((long)param_2 + 0x21) == '\0') &&
     (*(short *)((long)param_2 + 10) == *(short *)(param_2 + 2))) {
    if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
      _puts(
           "Workaround: not putting any bits of the digest list into the image, due to no personalization"
           );
      return;
    }
    _uarpLogInfo(3,
                 "Workaround: not putting any bits of the digest list into the image, due to no personalization\n"
                );
    return;
  }
  iVar1 = _FWImageAddBytes(param_2[3],param_3,param_4);
  if (iVar1 == 0) {
    return;
  }
  _uarpPlatformEndpointAssetAbandon(param_1,param_1 + 0x438,*param_2,0x900);
  return;
}

