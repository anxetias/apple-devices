// rea decompile_all
// name: _AMRestorableDeviceCreateFromAMDevice
// address: 0x1658c3
// body: available
// range: 0x1658c3-0x165913 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMRestorableDeviceCreateFromAMDevice(long param_1)

{
  cfstringStruct *pcVar1;
  long local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  if (param_1 == 0) {
    pcVar1 = &cf_Can_tlookuprestorablewithNULLAMDeviceRef;
  }
  else {
    local_18 = param_1;
    _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_18,
                     ___thr_AMRestorableDeviceCreateFromAMDevice);
    pcVar1 = (cfstringStruct *)0x0;
  }
  _AMRSafeLogAndRelease(3,pcVar1);
  return uStack_10;
}

