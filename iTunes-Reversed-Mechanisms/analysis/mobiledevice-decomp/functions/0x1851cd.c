// rea decompile_all
// name: _uarpSendVersionDiscoveryRequest
// address: 0x1851cd
// body: available
// range: 0x1851cd-0x185268 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x185250 to 0x17ff17 _uarpTransmitBuffer2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _uarpSendVersionDiscoveryRequest(long param_1,long param_2,ushort param_3)

{
  long lVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = 0x1e;
  if (param_2 != 0 && param_1 != 0) {
    lVar5 = _uarpAllocPrepareTransmitBuffer2(param_1,param_2,1,8,1);
    if (lVar5 != 0) {
      lVar1 = *(long *)(lVar5 + 0x10);
      uVar2 = 4;
      if (param_3 < 4) {
        uVar2 = param_3;
      }
      *(ushort *)(param_2 + 0x30) = uVar2;
      uVar3 = _uarpNtohs(uVar2);
      *(undefined2 *)(lVar1 + 6) = uVar3;
      uVar4 = _uarpTransmitBuffer2(param_1,param_2,lVar5);
      return uVar4;
    }
    uVar4 = 0xb;
  }
  return uVar4;
}

