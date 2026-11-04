// rea decompile_all
// name: _genericConnectionFailedCallback
// address: 0x9ae
// body: available
// range: 0x9ae-0xa0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _genericConnectionFailedCallback(long param_1,cfstringStruct *param_2)

{
  char cVar1;
  cfstringStruct *pcVar2;
  
  cVar1 = _DLShouldLog(5);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/WireProtocol/GenericConnectionCallbacks.c"
            ,"genericConnectionFailedCallback",5,
            &cf_genericConnectionFailedCallbackcalledwithreason__,param_2);
  }
  pcVar2 = &cf_Lostconnection;
  if (param_2 != (cfstringStruct *)0x0) {
    pcVar2 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00000a0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x20))(param_1,pcVar2);
  return;
}

