// rea decompile_all
// name: __removefile_error_callback
// address: 0x3e678
// body: available
// range: 0x3e678-0x3e767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __removefile_error_callback(removefile_state_t param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  int local_24;
  
  local_24 = 0;
  iVar1 = _removefile_state_get(param_1,5,&local_24);
  if (iVar1 == 0) {
    if (local_24 != 2) {
      uVar2 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
      pcVar3 = _strerror(local_24);
      __os_log_internal(0,uVar2,0,"%s: removefile hit error for %s : %s",
                        "_removefile_error_callback",param_2,pcVar3);
      (*(code *)PTR__objc_release_004410a0)(uVar2);
    }
  }
  else {
    uVar2 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    __os_log_internal(0,uVar2,0,
                      "%s: removefile hit error for %s but we failed to get the error number",
                      "_removefile_error_callback",param_2);
    (*(code *)PTR__objc_release_004410a0)(uVar2);
    local_24 = 2;
  }
  if ((param_3 != (int *)0x0) && (*param_3 == 0)) {
    *param_3 = local_24;
  }
  return 0;
}

