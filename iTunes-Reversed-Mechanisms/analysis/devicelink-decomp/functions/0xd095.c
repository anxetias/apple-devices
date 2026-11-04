// rea decompile_all
// name: __DLAddDateToDict
// address: 0xd095
// body: available
// range: 0xd095-0xd13a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xd0ef to 0xecff _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xd136 to 0xa79e __DLLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __DLAddDateToDict(long *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  
  if (param_3 == 0 || param_1 == (long *)0x0) {
    return;
  }
  lVar2 = _CFDateCreate((double)*param_1,0);
  if (lVar2 == 0) {
    cVar1 = _DLLoggingEnabled(3);
    if ((cVar1 == '\0') && (cVar1 = _DLOutputEnabled(3), cVar1 == '\0')) {
      return;
    }
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
            ,"_DLAddDateToDict",3,&cf_CouldnotcreateaCFDatefromthepassedinvalue);
    return;
  }
  _CFDictionaryAddValue(param_3,param_2,lVar2);
  _CFRelease(lVar2);
  return;
}

