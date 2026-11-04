// rea decompile_all
// name: _buildAndStageImage
// address: 0x19d56d
// body: available
// range: 0x19d56d-0x19d6e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _buildAndStageImage(long param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long local_30;
  
  local_30 = 0;
  uVar1 = _FWImageCreateImageBuffer(param_2[3]);
  if (uVar1 != 0) {
    return (ulong)uVar1;
  }
  uVar1 = _BackendFlash(*(undefined8 *)(param_1 + 0x568),local_30,0,(long)param_2 + 0x34);
  if (uVar1 == 0) {
    uVar2 = _BackendGetFlags(*(undefined8 *)(param_1 + 0x568));
    if ((uVar2 & 2) == 0) {
      uVar1 = _stage4_beginning(param_1,param_2);
    }
    else {
      uVar2 = _BackendGetFlags(*(undefined8 *)(param_1 + 0x568));
      if ((uVar2 & 8) != 0) {
        if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
          _puts("Waiting for processing notification before closing");
        }
        else {
          _uarpLogInfo(3,"Waiting for processing notification before closing\n");
        }
        *(undefined1 *)(param_1 + 0x650) = 1;
        uVar2 = 0;
        goto LAB_0019d681;
      }
      uVar1 = _uarpPlatformEndpointAssetFullyStaged(param_1,*param_2);
    }
    uVar2 = (ulong)uVar1;
  }
  else {
    uVar2 = (ulong)uVar1;
    if (_inRestore == '\x01') {
      _printf("Error staging FW: 0x%x, abandoning asset\n",uVar2);
    }
    else {
      _uarpLogError(3,"Error staging FW: 0x%x, abandoning asset\n",uVar2);
    }
    _uarpPlatformEndpointAssetAbandon(param_1,param_1 + 0x438,*param_2,0xa00);
  }
LAB_0019d681:
  if ((local_30 != 0) && (uVar1 = _FWImageDestroyImageBuffer(&local_30), uVar1 != 0)) {
    uVar3 = (ulong)uVar1;
    if (_inRestore == '\x01') {
      _printf("Failed to free FW Image buffer, stageImage status = 0x%x, DestroyImageBuffer status = 0x%x\n"
              ,uVar2,uVar3);
      uVar2 = uVar3;
    }
    else {
      _uarpLogError(3,
                    "Failed to free FW Image buffer, stageImage status = 0x%x, DestroyImageBuffer status = 0x%x\n"
                    ,uVar2,uVar3);
      uVar2 = uVar3;
    }
  }
  return uVar2;
}

