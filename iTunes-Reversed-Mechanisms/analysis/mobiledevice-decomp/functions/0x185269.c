// rea decompile_all
// name: _uarpSendVersionDiscoveryResponse
// address: 0x185269
// body: available
// range: 0x185269-0x1852f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1852de to 0x17ff17 _uarpTransmitBuffer2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _uarpSendVersionDiscoveryResponse(long param_1,long param_2,undefined2 param_3)

{
  long lVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = 0x1e;
  if (param_2 != 0 && param_1 != 0) {
    *(undefined2 *)(param_2 + 0x30) = param_3;
    lVar4 = _uarpAllocPrepareTransmitBuffer2(param_1,param_2,2,10,0);
    if (lVar4 != 0) {
      lVar1 = *(long *)(lVar4 + 0x10);
      uVar2 = _uarpNtohs(0);
      *(undefined2 *)(lVar1 + 6) = uVar2;
      uVar2 = _uarpNtohs(*(undefined2 *)(param_2 + 0x30));
      *(undefined2 *)(lVar1 + 8) = uVar2;
      uVar3 = _uarpTransmitBuffer2(param_1,param_2,lVar4);
      return uVar3;
    }
    uVar3 = 0xb;
  }
  return uVar3;
}

