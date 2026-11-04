// rea decompile_all
// name: __AMRestorableDeviceSetStateOnEventQueue
// address: 0x1615a3
// body: available
// range: 0x1615a3-0x161625 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __AMRestorableDeviceSetStateOnEventQueue(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long local_28;
  undefined4 local_20;
  undefined1 local_1c;
  
  local_1c = 0;
  local_20 = param_2;
  if (param_1 == 0) {
    uVar1 = 0;
    __AMRHostLogMapCurrentThreadToDevice(*(undefined8 *)(_gRestorableData + 0x78),0);
  }
  else {
    local_28 = param_1;
    _CFRetain();
    _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_28,
                     ___thr_AMRestorableDeviceSetStateOnEventQueue);
    __AMRHostLogMapCurrentThreadToDevice(*(undefined8 *)(_gRestorableData + 0x78),param_1);
    _CFRelease(param_1);
    uVar1 = CONCAT71((int7)((ulong)param_1 >> 8),local_1c);
  }
  return uVar1 & 0xffffff01;
}

