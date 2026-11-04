// rea decompile_all
// name: _uarpPlatformAssetCleanup
// address: 0x182778
// body: available
// range: 0x182778-0x1828a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1828a1 to 0x181972 _UARPLayer2ReturnBuffer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _uarpPlatformAssetCleanup(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((*(long *)(param_2 + 0x280) != 0) && (*(char *)(param_2 + 0x28c) == '\0')) {
    _UARPLayer2ReturnBuffer(param_1);
  }
  *(undefined8 *)(param_2 + 0x280) = 0;
  *(undefined4 *)(param_2 + 0x288) = 0;
  if (*(long *)(param_2 + 0x2a0) != 0) {
    _UARPLayer2ReturnBuffer(param_1);
    *(undefined8 *)(param_2 + 0x2a0) = 0;
  }
  *(undefined4 *)(param_2 + 0x2a8) = 0;
  lVar3 = *(long *)(param_2 + 0x2d0);
  while (lVar3 != 0) {
    lVar1 = *(long *)(lVar3 + 0x10);
    *(undefined8 *)(lVar3 + 0x10) = 0;
    _UARPLayer2ReturnBuffer(param_1);
    lVar3 = lVar1;
  }
  *(undefined8 *)(param_2 + 0x2d0) = 0;
  lVar3 = *(long *)(param_2 + 0x278);
  while (lVar3 != 0) {
    lVar1 = *(long *)(lVar3 + 0xb0);
    lVar4 = *(long *)(lVar3 + 0xa8);
    while (lVar4 != 0) {
      lVar2 = *(long *)(lVar4 + 0x10);
      *(undefined8 *)(lVar4 + 0x10) = 0;
      _UARPLayer2ReturnBuffer(param_1);
      lVar4 = lVar2;
    }
    *(undefined8 *)(lVar3 + 0xa8) = 0;
    _uarpPlatformPayloadCleanup(param_1,lVar3);
    _UARPLayer2ReturnBuffer(param_1,lVar3);
    lVar3 = lVar1;
  }
  _uarpPlatformPayloadCleanup(param_1,param_2 + 0x1d0);
  _UARPLayer2ReturnBuffer(param_1,param_2);
  return;
}

