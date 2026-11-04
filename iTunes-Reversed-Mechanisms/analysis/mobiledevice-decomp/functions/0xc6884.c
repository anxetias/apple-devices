// rea decompile_all
// name: _USBMuxRecvWithTimeout
// address: 0xc6884
// body: available
// range: 0xc6884-0xc68ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xc68e8 to 0x2aa7d0 _recv (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ssize_t _USBMuxRecvWithTimeout
                  (undefined8 param_1,void *param_2,size_t param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  int *piVar2;
  ssize_t sVar3;
  
  iVar1 = _USBMuxWaitForTimeoutOrEvent(param_1,1,param_5);
  if (iVar1 != 0) {
    piVar2 = ___error();
    *piVar2 = iVar1;
    return -1;
  }
  sVar3 = _recv((int)param_1,param_2,param_3,param_4);
  return sVar3;
}

