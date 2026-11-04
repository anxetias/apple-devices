// rea decompile_all
// name: _AMRestorableDeviceSendFile
// address: 0x16a23e
// body: available
// range: 0x16a23e-0x16a2a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMRestorableDeviceSendFile(long param_1,long param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  long local_28;
  long local_20;
  undefined1 local_18;
  
  if (param_1 == 0) {
    pcVar2 = &cf_Can_tsendcommandwithNULLdevice;
  }
  else {
    if (param_2 != 0) {
      local_28 = param_1;
      local_20 = param_2;
      _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_28,
                       ___thr_AMRestorableDeviceSendFile);
      uVar1 = CONCAT71((int7)((ulong)&local_28 >> 8),local_18);
      pcVar2 = (cfstringStruct *)0x0;
      goto LAB_0016a27b;
    }
    pcVar2 = &cf_Can_tsendNULLfiletodevice;
  }
  uVar1 = 0;
LAB_0016a27b:
  _AMRSafeLogAndRelease(3,pcVar2);
  return uVar1 & 0xffffffff;
}

