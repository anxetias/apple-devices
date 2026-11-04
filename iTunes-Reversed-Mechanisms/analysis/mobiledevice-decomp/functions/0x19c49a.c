// rea decompile_all
// name: _fPayloadDataComplete2
// address: 0x19c49a
// body: available
// range: 0x19c49a-0x19c602 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19c5fe to 0x17f3be _uarpPlatformEndpointAssetAbandon (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fPayloadDataComplete2(long param_1,undefined8 *param_2)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
    _puts("Payload Data complete");
  }
  else {
    _uarpLogInfo(3,"Payload Data complete\n");
  }
  sVar1 = *(short *)((long)param_2 + 10);
  if (sVar1 == *(short *)((long)param_2 + 0xc)) {
    if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
      _puts("Finished Patch");
    }
    else {
      _uarpLogInfo(3,"Finished Patch\n");
    }
    *(undefined2 *)((long)param_2 + 10) = *(undefined2 *)((long)param_2 + 0xe);
    uVar4 = param_2[3];
    uVar3 = 1;
LAB_0019c5ad:
    iVar2 = _FWImageSetActiveComponent(uVar4,uVar3);
    if (iVar2 != 0) goto LAB_0019c5e8;
    iVar2 = _uarpPlatformEndpointAssetSetPayloadIndex
                      (param_1,*param_2,*(undefined2 *)((long)param_2 + 10));
  }
  else {
    if (sVar1 == *(short *)((long)param_2 + 0xe)) {
      if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
        _puts("Finished AC");
      }
      else {
        _uarpLogInfo(3,"Finished AC\n");
      }
      *(undefined2 *)((long)param_2 + 10) = *(undefined2 *)(param_2 + 2);
      uVar4 = param_2[3];
      uVar3 = 3;
      goto LAB_0019c5ad;
    }
    if (sVar1 != *(short *)(param_2 + 2)) {
      return;
    }
    if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
      _puts("Finished DL");
    }
    else {
      _uarpLogInfo(3,"Finished DL\n");
    }
    iVar2 = _stage4_beginning(param_1,param_2);
  }
  if (iVar2 == 0) {
    return;
  }
LAB_0019c5e8:
  _uarpPlatformEndpointAssetAbandon(param_1,param_1 + 0x438,*param_2,0x900);
  return;
}

