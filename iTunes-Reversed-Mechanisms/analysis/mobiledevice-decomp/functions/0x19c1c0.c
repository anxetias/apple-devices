// rea decompile_all
// name: _fDynamicAssetOffered
// address: 0x19c1c0
// body: available
// range: 0x19c1c0-0x19c2de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19c2da to 0x17f33f _uarpPlatformEndpointAssetDeny (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fDynamicAssetOffered(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  code *local_100 [8];
  code *local_c0;
  code *local_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_78;
  code *local_68;
  code *local_50;
  
  uVar2 = _uarpAssetTagStructPersonalization();
  cVar1 = _uarpAssetTagCompare(uVar2,param_3 + 0x30);
  if (cVar1 != '\0') {
    *(long *)(param_1 + 0x560) = param_3;
    _uarpZero(local_100,0xe0);
    local_100[0] = _IM4MReady;
    local_c0 = _IM4MData;
    local_b0 = _IM4MDataComplete;
    local_98 = 0;
    uStack_90 = 0;
    local_78 = _IM4MReleased;
    local_50 = _IM4MHeadersAndMetadataComplete;
    local_68 = _fAssetProcessingNotificationAck;
    _uarpPlatformEndpointAssetAccept(param_1,param_1 + 0x438,param_3,param_3,local_100);
    return;
  }
  if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
    _puts("WARNING: Unexpected tag for offered Dynamic Asset");
  }
  else {
    _uarpLogInfo(3,"WARNING: Unexpected tag for offered Dynamic Asset\n");
  }
  _uarpPlatformEndpointAssetDeny(param_1,param_1 + 0x438,param_3,0xc00,param_3,0);
  return;
}

