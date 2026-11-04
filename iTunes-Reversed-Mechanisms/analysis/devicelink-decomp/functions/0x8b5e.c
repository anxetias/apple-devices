// rea decompile_all
// name: _StreamHandlerForType
// address: 0x8b5e
// body: available
// range: 0x8b5e-0x8c30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x8c0d to 0xa706 _DLSetStatus (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _StreamHandlerForType(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  
  if (_sInitializedStreamHandlers == '\0') {
    uVar1 = _SocketStreamHandlerRegisterCreator(param_3);
    if (uVar1 != 0) {
      return (ulong)uVar1;
    }
    _sInitializedStreamHandlers = '\x01';
  }
  if (param_1 == 0) {
    pcVar4 = &cf_ParameterfortypeisNULL;
  }
  else {
    if (param_2 != 0) {
      if ((_sStreamHandlers != 0) &&
         (UNRECOVERED_JUMPTABLE = (code *)_CFDictionaryGetValue(_sStreamHandlers,param_1),
         UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00008bc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3);
        return uVar2;
      }
      lVar3 = _CFStringCreateWithFormat(0,0,&cf_StreamHandlerisnotregisteredfor__,param_1);
      if (param_3 == (long *)0x0) {
        if (lVar3 != 0) {
          _CFRelease(lVar3);
        }
      }
      else {
        *param_3 = lVar3;
      }
      return 0xffffffff;
    }
    pcVar4 = &cf_OutparameterforstreamHandlerisNULL;
  }
  uVar2 = _DLSetStatus(0xfffffffd,param_3,pcVar4);
  return uVar2;
}

