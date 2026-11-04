// rea decompile_all
// name: _uarpSendAssetRequestData
// address: 0x1853f4
// body: available
// range: 0x1853f4-0x185495 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18547d to 0x17ff17 _uarpTransmitBuffer2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_uarpSendAssetRequestData
          (undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined4 param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = _uarpAllocPrepareTransmitBuffer2(param_1,param_2,6,0xe,1);
  if (lVar5 != 0) {
    lVar1 = *(long *)(lVar5 + 0x10);
    uVar3 = _uarpNtohs(param_3);
    *(undefined2 *)(lVar1 + 6) = uVar3;
    uVar4 = _uarpNtohl(param_4);
    *(undefined4 *)(lVar1 + 8) = uVar4;
    uVar2 = 0xffff;
    if (param_5 < 0xffff) {
      uVar2 = param_5;
    }
    uVar3 = _uarpNtohs(uVar2);
    *(undefined2 *)(lVar1 + 0xc) = uVar3;
    uVar6 = _uarpTransmitBuffer2(param_1,param_2,lVar5);
    return uVar6;
  }
  return 0xb;
}

