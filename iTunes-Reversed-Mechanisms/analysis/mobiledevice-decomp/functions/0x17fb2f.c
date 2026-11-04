// rea decompile_all
// name: _uarpPlatformEndpointStreamingRecvInit
// address: 0x17fb2f
// body: available
// range: 0x17fb2f-0x17fbc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _uarpPlatformEndpointStreamingRecvInit(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *local_30;
  
  uVar2 = 0x1e;
  if (param_2 != 0 && param_1 != 0) {
    local_30 = (long *)0x0;
    _UARPLayer2RequestBuffer(param_1,&local_30,0x18);
    uVar2 = 0xb;
    if (local_30 != (long *)0x0) {
      iVar1 = *(int *)(param_2 + 4) + 0x24;
      _UARPLayer2RequestBuffer(param_1,local_30,iVar1);
      if (*local_30 == 0) {
        _UARPLayer2ReturnBuffer(param_1);
      }
      else {
        *(int *)(local_30 + 1) = iVar1;
        *(long **)(param_2 + 0x58) = local_30;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

