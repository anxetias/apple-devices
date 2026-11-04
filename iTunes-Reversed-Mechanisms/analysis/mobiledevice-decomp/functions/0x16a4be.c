// rea decompile_all
// name: _AMRestorableDeviceCopyEnvironmentVariable
// address: 0x16a4be
// body: available
// range: 0x16a4be-0x16a523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMRestorableDeviceCopyEnvironmentVariable(long param_1,long param_2)

{
  cfstringStruct *pcVar1;
  long local_28;
  long local_20;
  undefined8 local_18;
  
  if (param_1 == 0) {
    pcVar1 = &cf_Can_tcopyenvvariablewithNULLdevice;
  }
  else {
    if (param_2 != 0) {
      local_28 = param_1;
      local_20 = param_2;
      _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_28,
                       ___thr_AMRestorableDeviceCopyEnvironmentVariable);
      pcVar1 = (cfstringStruct *)0x0;
      goto LAB_0016a4fc;
    }
    pcVar1 = &cf_Can_tcopyNULLenvvariable;
  }
  local_18 = 0;
LAB_0016a4fc:
  _AMRSafeLogAndRelease(3,pcVar1);
  return local_18;
}

