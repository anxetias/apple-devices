// rea decompile_all
// name: _uarpAssetProcessingComplete
// address: 0x18305e
// body: available
// range: 0x18305e-0x1830ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1830d6 to 0x17ff17 _uarpTransmitBuffer2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _uarpAssetProcessingComplete(undefined8 param_1,long param_2,long param_3,short param_4)

{
  long lVar1;
  undefined2 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    uVar4 = 0xd;
    if (param_4 == 3) {
      uVar4 = 0;
    }
  }
  else {
    lVar3 = _uarpAllocPrepareTransmitBuffer2(param_1,param_2,9,10,1);
    if (lVar3 != 0) {
      lVar1 = *(long *)(lVar3 + 0x10);
      uVar2 = _uarpNtohs(*(undefined2 *)(param_3 + 0x2c));
      *(undefined2 *)(lVar1 + 6) = uVar2;
      uVar2 = _uarpNtohs(param_4);
      *(undefined2 *)(lVar1 + 8) = uVar2;
      uVar4 = _uarpTransmitBuffer2(param_1,param_2,lVar3);
      return uVar4;
    }
    uVar4 = 0xb;
  }
  return uVar4;
}

