// rea decompile_all
// name: _IM4MData
// address: 0x272d6e
// body: available
// range: 0x272d6e-0x272dd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x272db5 to 0x186609 _uarpLogInfo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x272dcb to 0x2aa6b6 _printf (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _IM4MData(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = _FWImageAddBytes(*(undefined8 *)(*(long *)(param_1 + 0x558) + 0x18),param_3,param_4);
  if (iVar1 != 0) {
    return;
  }
  if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
    _printf("Received %d bytes of IM4M\n",(ulong)param_4);
    return;
  }
  _uarpLogInfo(3,"Received %d bytes of IM4M\n",param_4);
  return;
}

