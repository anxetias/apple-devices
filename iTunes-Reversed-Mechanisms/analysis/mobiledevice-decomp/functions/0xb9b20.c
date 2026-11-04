// rea decompile_all
// name: ___AFCConnectionUnscheduleFromRunLoop
// address: 0xb9b20
// body: available
// range: 0xb9b20-0xb9c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___AFCConnectionUnscheduleFromRunLoop(long param_1)

{
  long lVar1;
  
  _AFCLog(5,"__AFCConnectionUnscheduleFromRunLoop(%p)",param_1);
  lVar1 = _CFArrayGetCount(*(undefined8 *)(param_1 + 0xa0));
  if (lVar1 < 1) {
    lVar1 = _CFArrayGetCount(*(undefined8 *)(param_1 + 0x98));
    if (lVar1 < 1) goto LAB_000b9b75;
  }
  _AFCLog(1,"WARNING: unscheduling from run loop with outstanding requests!");
LAB_000b9b75:
  lVar1 = *(long *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0xb0) != 0) {
      _CFRunLoopRemoveSource(lVar1,*(long *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 200));
      _CFRelease(*(undefined8 *)(param_1 + 0xb0));
      *(undefined8 *)(param_1 + 0xb0) = 0;
      lVar1 = *(long *)(param_1 + 0xc0);
    }
    if (*(long *)(param_1 + 0xb8) != 0) {
      _CFRunLoopRemoveSource(lVar1,*(long *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 200));
      _CFRelease(*(undefined8 *)(param_1 + 0xb8));
      *(undefined8 *)(param_1 + 0xb8) = 0;
      lVar1 = *(long *)(param_1 + 0xc0);
    }
    _CFRelease(lVar1);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    _CFRelease(*(undefined8 *)(param_1 + 200));
    *(undefined8 *)(param_1 + 200) = 0;
  }
  return;
}

